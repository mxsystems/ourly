<?php

/**
 * @file
 * template.php
 */
function ourly_css_alter(&$css) {
  unset($css[drupal_get_path('theme', 'bootstrap') . '/css/overrides.css']);
}

/**
 * Override theming of the primary menu
 * @param $vars
 * @return string
 */
function ourly_menu_tree__primary(&$vars) {
  return '<ul class="mainnav">' . $vars['tree'] . '</ul>';
}

/**
 * Theme menu tree
 * @param $vars
 * @return string
 */
function ourly_menu_tree(&$vars) {
  // return '<ul>' . $vars['tree'] . '</ul>';
  return $vars['tree'];
}

/**
 * Override secondary menu to display dropdown
 * @param $vars
 * @return string
 */
function ourly_menu_tree__secondary(&$vars) {
  global $user;

  if (!empty($user->data['name'][LANGUAGE_NONE])) {
    $real_name = $user->data['name'][LANGUAGE_NONE][0]['given'] . ' ' . $user->data['name'][LANGUAGE_NONE][0]['family'];
  } else {
    $real_name = $user->name;
  }

  return '<li class="dropdown">
    <a href="javscript:;" class="dropdown-toggle" data-toggle="dropdown">
      <i class="icon-user"></i>
      ' . $real_name . '
      <b class="caret"></b>
    </a><ul class="dropdown-menu">
' . $vars['tree'] . '</ul></li>';
}

/**
 * Override main menu links, so that we can add icons
 * @param $vars
 * @return string
 */
function ourly_menu_link__main_menu($vars) {
  $element = $vars['element'];
  $sub_menu = '';

  if (in_array('active-trail', $element['#attributes']['class'])) {
    $element['#attributes']['class'][] = 'active';
  }
  if (drupal_is_front_page() && in_array('first', $element['#attributes']['class'])) {
    $element['#attributes']['class'][] = 'active';
  }

  if ($element['#below']) {
    // adjusting for dropdown menu
    $element['#href'] = 'javascript:;';
    $element['#attributes']['class'][] = 'dropdown';
    $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
    $element['#below']['#attributes']['class'][] = 'dropdown-menu';
    $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
  }
  $options = array(
     'html' => true,
  );
  $icon = (array_key_exists('bootstrap_icon', $element['#localized_options'])) ? $element['#localized_options']['bootstrap_icon'] : '';
  $carat = '<b class="caret"></b>';
  $html = '<i class="icon-' . $icon . '"></i><span>'. $element['#title'] . '</span>';
  if ($sub_menu !== '') {
    $html .= $carat;
  }
  $output = l($html, $element['#href'], $options + $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Preprocess regions to add appropriate classes
 * @param $vars
 */
function ourly_preprocess_region(&$vars) {
  $vars['classes_array'][] = 'row';
}

/**
 * Preprocess panels pane
 * We are using the panels pane css id to indicate the pane icon
 * @todo: This is a quick way of doing this, if we need to change will do later
 * @param $vars
 */
function ourly_preprocess_panels_pane(&$vars) {
  if ($vars['id'] === '') {
    return;
  }
  // id="icon-signal"
  $id =explode("=", $vars['id']);
  $vars['id'] = str_replace('"', '', $id[1]);
}

/**
 * Adding new table classes
 * @param $vars
 */
function ourly_preprocess_views_view_table(&$vars) {
  if (!array_key_exists('row_classes', $vars)) {
    $vars['row_classes'] = array('');
  }
  $vars['classes_array'][] = 'table-striped';
  $vars['classes_array'][] = 'table-bordered';
}

/**
 * Preprocess all links for excluding from overlay module
 * @param $vars
 */
function ourly_preprocess_link(&$vars) {
  // exclude overlay on user edit pages
  $path = $vars['path'];
  $pattern = "|user/(\d+)/edit|";
  preg_match($pattern, $path, $matches);
  if (!empty($matches)) {
    $vars['options']['attributes']['class'][] = 'overlay-exclude';
  }
}

/**
 * Preprocess user login page
 * @param $vars
 */
function ourly_preprocess_page(&$vars) {
  // @todo: Maybe preprocess only user login page?
  if (!isset($vars['page']['content']['system_main']['#id'])) {
    return;
  }
  $page_id = $vars['page']['content']['system_main']['#id'];
  if ($page_id === 'user-login') {
    $vars['is_demo'] = variable_get('ourly_is_demo', 0);
  }
}

/**
 * Override our theming function for box
 * @param $variables
 * @return string
 */
function ourly_boxes_box($variables) {
  $block = $variables['block'];
  $empty = '';

  // Box is empty
  if ((empty($block['title']) || ($block['title'] == '<none>') ) && empty($block['content'])) {
    // add a class to mark the box as empty
    $empty = ' box-empty';
    // show something if the block is empty but the user has the permission to edit it
    if (boxes_access_edit()) {
      $block['content'] = t('This box appears empty when displayed on this page. This is simply placeholder text.');
    }
    else {
      return;
    }
  }
  // $output = "<div id='boxes-box-" . $block['delta'] . "' class='boxes-box" . (!empty($block['editing']) ? ' boxes-box-editing' : '') . $empty . "'>";
  $output =  $block['content'];
  if (!empty($block['editing'])) {
    $output .= '<div class="box-editor">' . drupal_render($block['editing']) . '</div>';
  }
  // $output .= '</div>';
  return $output;
}

/**
 * Implements hook_form_FORM_ID_alter
 * @param $form
 * @param $form_state
 * @param $form_id
 */
function ourly_form_user_login_alter(&$form, &$form_state, $form_id) {
  $form['actions']['submit']['#attributes']['class'] = array(
    'login-action',
    'btn',
    'btn-primary',
  );

  $form['actions']['#prefix'] = '<div class="login-actions">';
  $form['actions']['#suffix'] = '</div>';

  $form['name']['#prefix'] = '<div class="login-fields">';
  $password_link = l('Retrieve your password', 'user/password');
  $form['suffix']['#suffix'] = $password_link . '</div>';

  $form['name']['#attributes']['class'] = array(
    'form-control',
    'input-lg',
    'username-field',
  );

  $form['name']['#attributes']['placeholder'] = 'Username';
  $form['pass']['#attributes']['placeholder'] = 'Password';

  $form['pass']['#attributes']['class'] = array(
    'form-control',
    'input-lg',
    'password-field',
  );
}

/**
 * Theming override for the CSV spreadsheet
 * @param $variables
 * @return string
 */
function ourly_views_data_export_feed_icon($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => TRUE);
  if ($query) {
    $url_options['query'] = $query;
  }

  $url_options['attributes']['class'] = array(
    'btn',
    'btn-primary',
    'right',
   );
  return l('Export to CSV', $url, $url_options);
}
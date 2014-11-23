<?php

/**
 * Override or insert variables into the maintenance page template.
 */
function ourly_install_preprocess_maintenance_page(&$vars) {
  // While markup for normal pages is split into page.tpl.php and html.tpl.php,
  // the markup for the maintenance page is all in the single
  // maintenance-page.tpl.php template. So, to have what's done in
  // shiny_preprocess_html() also happen on the maintenance page, it has to be
  // called here.
  shiny_preprocess_html($vars);

  // Do not use Drupalicon for favicon.
  $header_markup = '<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />';
  $header_markup .= '<meta name="robots" content="noindex, nofollow" />';
  global $base_url;
  $header_markup .= '<link rel="shortcut icon" href="' . $base_url . '/' .drupal_get_path('theme', 'ourly_install') . '/favicon.png" type="image/vnd.microsoft.icon" />
';
  $vars['header'] = $header_markup;

  $header_title = $vars['title'] . ' | Our.ly';
  $vars['title_head'] = $header_title;

  if (variable_get('install_task') != 'done') {
    $footer_markup =  '<div class="message">' . t('Brought you by ') . '</div>';
    $footer_markup .=  '<div class="logo">' . t('<a href="@url">MX Systems</a>', array('@url' => 'http://www.mxsystemsllc.com')) . '</div>';
    $vars['footer'] = array(
      '#prefix' => '<div id="credit" class="clearfix">',
      '#markup' => $footer_markup,
      '#suffix' => '</div>',
    );
  }
}

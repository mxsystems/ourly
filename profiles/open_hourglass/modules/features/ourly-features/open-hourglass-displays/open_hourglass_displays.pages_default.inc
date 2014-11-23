<?php
/**
 * @file
 * open_hourglass_displays.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function open_hourglass_displays_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit_panel_context';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bda32f24-238f-4445-82e2-6c45961d20dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54b77f9c-e1dc-4f50-b9fb-97f00aa6ea4d';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-user',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54b77f9c-e1dc-4f50-b9fb-97f00aa6ea4d';
    $display->content['new-54b77f9c-e1dc-4f50-b9fb-97f00aa6ea4d'] = $pane;
    $display->panels['center'][0] = 'new-54b77f9c-e1dc-4f50-b9fb-97f00aa6ea4d';
    $pane = new stdClass();
    $pane->pid = 'new-8b6fe745-24e2-4837-a27a-35a6a64ee337';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Personal Information',
      'title' => 'Additional Information',
      'body' => 'Enter any additional information below. These information helps the system to deliver a more personalized experience.',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8b6fe745-24e2-4837-a27a-35a6a64ee337';
    $display->content['new-8b6fe745-24e2-4837-a27a-35a6a64ee337'] = $pane;
    $display->panels['center'][1] = 'new-8b6fe745-24e2-4837-a27a-35a6a64ee337';
    $pane = new stdClass();
    $pane->pid = 'new-e26ee27d-7725-4575-ad34-21e0c21a1614';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-user',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e26ee27d-7725-4575-ad34-21e0c21a1614';
    $display->content['new-e26ee27d-7725-4575-ad34-21e0c21a1614'] = $pane;
    $display->panels['center'][2] = 'new-e26ee27d-7725-4575-ad34-21e0c21a1614';
    $pane = new stdClass();
    $pane->pid = 'new-b5d19822-f67b-4e15-a264-570bba7cbb4d';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b5d19822-f67b-4e15-a264-570bba7cbb4d';
    $display->content['new-b5d19822-f67b-4e15-a264-570bba7cbb4d'] = $pane;
    $display->panels['center'][3] = 'new-b5d19822-f67b-4e15-a264-570bba7cbb4d';
    $pane = new stdClass();
    $pane->pid = 'new-fc303636-f7e6-48e5-ba9d-53ad249a83a5';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_rate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fc303636-f7e6-48e5-ba9d-53ad249a83a5';
    $display->content['new-fc303636-f7e6-48e5-ba9d-53ad249a83a5'] = $pane;
    $display->panels['center'][4] = 'new-fc303636-f7e6-48e5-ba9d-53ad249a83a5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_edit_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function open_hourglass_displays_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'error';
  $page->task = 'page';
  $page->admin_title = 'Error Pages';
  $page->admin_description = 'Error pages that handles 404, 403 and other type of error pages';
  $page->path = 'error';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_error_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'error';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => '404',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5045e5e8-ee51-445a-96b2-bdfe36671d59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4fee7cf5-c6f1-458a-aee5-45fa1efb2df0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'boxes-error_404';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fee7cf5-c6f1-458a-aee5-45fa1efb2df0';
    $display->content['new-4fee7cf5-c6f1-458a-aee5-45fa1efb2df0'] = $pane;
    $display->panels['center'][0] = 'new-4fee7cf5-c6f1-458a-aee5-45fa1efb2df0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['error'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_time';
  $page->task = 'page';
  $page->admin_title = 'My Time';
  $page->admin_description = '';
  $page->path = 'my-time-entries';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_time_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'my_time';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'My Time Entries',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd0f5fac8-e3eb-4046-b6f1-051590ac883a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9d0bb57-eed2-4a29-b7d5-141d3ed63d81';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_time_entry_report-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9d0bb57-eed2-4a29-b7d5-141d3ed63d81';
    $display->content['new-b9d0bb57-eed2-4a29-b7d5-141d3ed63d81'] = $pane;
    $display->panels['center'][0] = 'new-b9d0bb57-eed2-4a29-b7d5-141d3ed63d81';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_time'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_time_entries';
  $page->task = 'page';
  $page->admin_title = 'My Time Entries';
  $page->admin_description = 'Default homepage for user.';
  $page->path = 'time';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_time_entries_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'my_time_entries';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Time',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'side_bar' => NULL,
      'center_' => NULL,
      'middle' => NULL,
      'top_center' => NULL,
    ),
    'top_left' => array(
      'style' => 'naked',
    ),
    'center_' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Weekly Overview';
  $display->uuid = '20ca08a1-f2e0-4f19-8668-ec9185052b0f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61fff80f-24cb-4ba3-9931-fad9abc92873';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'user_time_entry_stats';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61fff80f-24cb-4ba3-9931-fad9abc92873';
    $display->content['new-61fff80f-24cb-4ba3-9931-fad9abc92873'] = $pane;
    $display->panels['center'][0] = 'new-61fff80f-24cb-4ba3-9931-fad9abc92873';
    $pane = new stdClass();
    $pane->pid = 'new-3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'user_time_entry_stats';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7';
    $display->content['new-3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7'] = $pane;
    $display->panels['center'][1] = 'new-3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7';
    $pane = new stdClass();
    $pane->pid = 'new-88ed9002-82f3-4ebb-8213-1e409a3d9e35';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-manage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-file',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '88ed9002-82f3-4ebb-8213-1e409a3d9e35';
    $display->content['new-88ed9002-82f3-4ebb-8213-1e409a3d9e35'] = $pane;
    $display->panels['center'][2] = 'new-88ed9002-82f3-4ebb-8213-1e409a3d9e35';
    $pane = new stdClass();
    $pane->pid = 'new-c2b90c65-32ec-454c-a456-732d64cef252';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'time_entry_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '25',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'time_entry_list',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c2b90c65-32ec-454c-a456-732d64cef252';
    $display->content['new-c2b90c65-32ec-454c-a456-732d64cef252'] = $pane;
    $display->panels['center'][3] = 'new-c2b90c65-32ec-454c-a456-732d64cef252';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_time_entries'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'project';
  $page->task = 'page';
  $page->admin_title = 'Project';
  $page->admin_description = 'Displays a list of projects';
  $page->path = 'projects';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_project_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'project';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Projects',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'projects',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '372cadf3-5eb2-40b4-8aab-7ab8c21491b5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8dbde2f2-c857-43ed-a1be-3e412a9cfa19';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-bookmark',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8dbde2f2-c857-43ed-a1be-3e412a9cfa19';
    $display->content['new-8dbde2f2-c857-43ed-a1be-3e412a9cfa19'] = $pane;
    $display->panels['center'][0] = 'new-8dbde2f2-c857-43ed-a1be-3e412a9cfa19';
    $pane = new stdClass();
    $pane->pid = 'new-5820c09c-390c-47f2-808d-743dd9c86e6c';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'projects';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5820c09c-390c-47f2-808d-743dd9c86e6c';
    $display->content['new-5820c09c-390c-47f2-808d-743dd9c86e6c'] = $pane;
    $display->panels['center'][1] = 'new-5820c09c-390c-47f2-808d-743dd9c86e6c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['project'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'report';
  $page->task = 'page';
  $page->admin_title = 'Report';
  $page->admin_description = 'Panel for report layout';
  $page->path = 'report/%report';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'report' => array(
      'id' => 1,
      'identifier' => 'Report',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
      'keyword' => 'report',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_report_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'report';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Time Entry Monthly',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'report/monthly',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2c55568-b8f5-4c67-8c9d-6270d0d1da2d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46b48d5b-3fca-483a-b189-95355ac24ac0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'monthly_time_entry_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'monthly_overview_chart',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46b48d5b-3fca-483a-b189-95355ac24ac0';
    $display->content['new-46b48d5b-3fca-483a-b189-95355ac24ac0'] = $pane;
    $display->panels['center'][0] = 'new-46b48d5b-3fca-483a-b189-95355ac24ac0';
    $pane = new stdClass();
    $pane->pid = 'new-485cdf7b-8949-4d12-80af-278645a600fe';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'monthly_time_entry_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'monthly',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '485cdf7b-8949-4d12-80af-278645a600fe';
    $display->content['new-485cdf7b-8949-4d12-80af-278645a600fe'] = $pane;
    $display->panels['center'][1] = 'new-485cdf7b-8949-4d12-80af-278645a600fe';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_report_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'report';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Time Entry Weekly',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'report/weekly',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:open_hourglass_flex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b5f0760e-c50e-4a18-83da-b4450585767a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c72f8a93-0042-4242-a28e-862284ca1d30';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'weekly_time_entry_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '7',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'weekly_chart',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c72f8a93-0042-4242-a28e-862284ca1d30';
    $display->content['new-c72f8a93-0042-4242-a28e-862284ca1d30'] = $pane;
    $display->panels['center'][0] = 'new-c72f8a93-0042-4242-a28e-862284ca1d30';
    $pane = new stdClass();
    $pane->pid = 'new-095580b1-a112-4343-8cd9-32c51bca24b9';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'weekly_time_entry_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '7',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'weekly',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '095580b1-a112-4343-8cd9-32c51bca24b9';
    $display->content['new-095580b1-a112-4343-8cd9-32c51bca24b9'] = $pane;
    $display->panels['center'][1] = 'new-095580b1-a112-4343-8cd9-32c51bca24b9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['report'] = $page;

  return $pages;

}

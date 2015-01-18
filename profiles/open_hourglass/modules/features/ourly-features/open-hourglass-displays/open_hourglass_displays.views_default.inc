<?php
/**
 * @file
 * open_hourglass_displays.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function open_hourglass_displays_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="shortcuts">
<a href="#overlay=admin/structure/taxonomy/category" class="shortcut">
   <i class="shortcut-icon icon-tag"></i>
  <span class="shortcut-label"> Category </span>
</a>
						
<a href="#overlay=admin/structure/taxonomy/client" class="shortcut">
  <i class="shortcut-icon icon-bookmark"></i>
  <span class="shortcut-label"> Client</span>
</a>
						
<a href="#overlay=admin/manage/project" class="shortcut">
  <i class="shortcut-icon icon-th"></i>
  <span class="shortcut-label">Project</span>	
</a>
						
<a href="#overlay=admin/manage/time-entry" class="shortcut">
  <i class="shortcut-icon icon-time"></i>
  <span class="shortcut-label">Time Entries</span>
</a>
						
<a href="#overlay=admin/people" class="shortcut">
  <i class="shortcut-icon icon-user"></i>
  <span class="shortcut-label">Users</span>
</a>
</div>							
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Front Dashboard */
  $handler = $view->new_display('panel_pane', 'Front Dashboard', 'manage_dashboard_pane');

  /* Display: Front PM Dashboard */
  $handler = $view->new_display('panel_pane', 'Front PM Dashboard', 'manage_pm_dashboard_pane');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="shortcuts">
<a href="#overlay=admin/manage/project" class="shortcut">
  <i class="shortcut-icon icon-th"></i>
  <span class="shortcut-label">Project</span>	
</a>
						
<a href="#overlay=admin/manage/time-entry" class="shortcut">
  <i class="shortcut-icon icon-time"></i>
  <span class="shortcut-label">Time Entries</span>
</a>
</div>							
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['front_dashboard'] = $view;

  $view = new view();
  $view->name = 'management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<ul class="action-links"><li><a href="/node/add/project?destination=admin/manage/project">Add New Project</a></li>
</ul>';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="messages warning">There\'s no project created by you, <a href="/node/add/project?destination=admin/manage/project">click here</a> to create one</div>';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate_options']['roles'] = array(
    4 => '4',
  );
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Manage Time Entry */
  $handler = $view->new_display('page', 'Manage Time Entry', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Time Entry';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="messages status">Below is the list of time entries entered for your projects.</div>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="messages warning">There\'s no time entry for your projects, <a href="node/add/time-entry?destination=admin/manage/time-entry">click here</a> to create one</div>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Time Entry Project */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['ui_name'] = 'Time Entry Project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['label'] = 'Time Entry Project';
  /* Relationship: Time Entry User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Time Entry User';
  $handler->display->display_options['relationships']['uid']['label'] = 'Time Entry User';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_time_entry_project']['id'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['field'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate_options']['roles'] = array(
    4 => '4',
  );
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['path'] = 'admin/manage/time-entry';

  /* Display: Manage Project */
  $handler = $view->new_display('page', 'Manage Project', 'page_1');
  $handler->display->display_options['display_description'] = 'Project management screen';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['label'] = 'Promote to Top';
  $handler->display->display_options['fields']['promote']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['promote']['not'] = 0;
  $handler->display->display_options['path'] = 'admin/manage/project';
  $export['management'] = $view;

  $view = new view();
  $view->name = 'monthly_time_entry_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Monthly Time Entry Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Monthly Time Entry Overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_time_entry_date' => 'field_time_entry_date',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_time_entry_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_time_spent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="alert alert-info">There\'s no time entry associated with the given filter criteria.</div>';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['label'] = 'Month';
  $handler->display->display_options['fields']['field_time_entry_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Monthly Overview */
  $handler = $view->new_display('panel_pane', 'Monthly Overview', 'monthly');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'report/monthly/export';
  $handler->display->display_options['displays'] = array(
    'monthly' => 'monthly',
    'default' => 0,
    'block_1' => 0,
    'monthly_overview_chart' => 0,
  );

  /* Display: Project Monthly Overview Chart */
  $handler = $view->new_display('block', 'Project Monthly Overview Chart', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_date' => '#2f7ed8',
    'field_time_entry_time_spent' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'monthly_overview_chart';

  /* Display: Chart */
  $handler = $view->new_display('panel_pane', 'Chart', 'monthly_chart');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_date' => '#2f7ed8',
    'field_time_entry_time_spent' => '#0d233a',
  );
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = 'Time spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['monthly_time_entry_overview'] = $view;

  $view = new view();
  $view->name = 'project_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Overview Chart';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'expression_1';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'expression' => 'expression',
    'title' => 0,
    'field_project_budgeted_hours' => 0,
    'expression_1' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'title' => '#2f7ed8',
    'field_project_budgeted_hours' => '#0d233a',
    'field_time_entry_time_spent' => '#8bbc21',
    'expression' => '#910000',
    'expression_1' => '#1aadce',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Unused Hours';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_project_budgeted_hours] - [field_time_entry_time_spent]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_time_entry_time_spent] / [field_project_budgeted_hours] * 100';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );

  /* Display: Project Overview Chart */
  $handler = $view->new_display('block', 'Project Overview Chart', 'project_overview_chart');
  $handler->display->display_options['block_description'] = 'project_overview_chart';
  $export['project_overview'] = $view;

  $view = new view();
  $view->name = 'project_time_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Time Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Category Pie Chart';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_time_entry_date' => 'field_time_entry_date',
    'title' => 'title',
    'field_time_entry_category' => 'field_time_entry_category',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_time_entry_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_time_spent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Relationship: Content: Client (field_project_client) */
  $handler->display->display_options['relationships']['field_project_client_tid']['id'] = 'field_project_client_tid';
  $handler->display->display_options['relationships']['field_project_client_tid']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['relationships']['field_project_client_tid']['field'] = 'field_project_client_tid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['relationship'] = 'field_time_entry_project_target_id';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_time_entry_category) */
  $handler->display->display_options['filters']['field_time_entry_category_tid']['id'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['field'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator_id'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['identifier'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_category_tid']['vocabulary'] = 'category';

  /* Display: Project Totals */
  $handler = $view->new_display('block', 'Project Totals', 'block_project_totals');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Category Overview';
  $handler->display->display_options['display_description'] = 'This is the total for a given project.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['block_description'] = 'Project Totals';

  /* Display: Category Totals Table */
  $handler = $view->new_display('block', 'Category Totals Table', 'category_table');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Category Overview';
  $handler->display->display_options['display_description'] = 'This is a table listing the totals in each category for  a given project.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_time_entry_category' => 'field_time_entry_category',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
  );
  $handler->display->display_options['style_options']['default'] = 'field_time_entry_time_spent';
  $handler->display->display_options['style_options']['info'] = array(
    'field_time_entry_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_time_spent' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['block_description'] = 'Category Totals Table';

  /* Display: Project Time Overview */
  $handler = $view->new_display('block', 'Project Time Overview', 'project_time_overview_block');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['block_description'] = 'project_time_overview_block';

  /* Display: Project Client */
  $handler = $view->new_display('block', 'Project Client', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Client Overview';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Relationship: Content: Client (field_project_client) */
  $handler->display->display_options['relationships']['field_project_client_tid']['id'] = 'field_project_client_tid';
  $handler->display->display_options['relationships']['field_project_client_tid']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['relationships']['field_project_client_tid']['field'] = 'field_project_client_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_client_image']['id'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['table'] = 'field_data_field_client_image';
  $handler->display->display_options['fields']['field_client_image']['field'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['relationship'] = 'field_project_client_tid';
  $handler->display->display_options['fields']['field_client_image']['label'] = '';
  $handler->display->display_options['fields']['field_client_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_project_client']['id'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['fields']['field_project_client']['field'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['label'] = '';
  $handler->display->display_options['fields']['field_project_client']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_client']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'PM';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Project Status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['alter']['text'] = '[created]  -- [status] ';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Project Status';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[created]  -- [status]';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j/d/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['block_description'] = 'Project Client';

  /* Display: Project Overview Info */
  $handler = $view->new_display('panel_pane', 'Project Overview Info', 'project_overview_info_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overview';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Relationship: Content: Client (field_project_client) */
  $handler->display->display_options['relationships']['field_project_client_tid']['id'] = 'field_project_client_tid';
  $handler->display->display_options['relationships']['field_project_client_tid']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['relationships']['field_project_client_tid']['field'] = 'field_project_client_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_client_image']['id'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['table'] = 'field_data_field_client_image';
  $handler->display->display_options['fields']['field_client_image']['field'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['relationship'] = 'field_project_client_tid';
  $handler->display->display_options['fields']['field_client_image']['label'] = '';
  $handler->display->display_options['fields']['field_client_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['empty'] = 'This project does not have a client assigned. ';
  $handler->display->display_options['fields']['field_client_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_image']['settings'] = array(
    'image_style' => 'project',
    'image_link' => '',
  );
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_project_client']['id'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['fields']['field_project_client']['field'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['label'] = '';
  $handler->display->display_options['fields']['field_project_client']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_client']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_client']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'PM';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_description']['alter']['text'] = '<div class="left margin10">
[field_client_image]
</div>
<div class="left margin10">
[field_project_client] <br />
<label>PM: </label>[name] <br />
<label>Created: </label>[created]
</div>
<div class="clear">
[field_project_description]
</div>';
  $handler->display->display_options['fields']['field_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Project Key Info */
  $handler = $view->new_display('panel_pane', 'Project Key Info', 'project_key_info_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Stats';
  $handler->display->display_options['display_description'] = 'Provides key statistics of the project';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'project_time_overview:project_hour_pane';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['empty'] = '0';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['empty'] = '0';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Remaining Budget';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '(( [field_project_budgeted_hours] - [field_time_entry_time_spent] ) / [field_project_budgeted_hours] )*100';
  /* Field: Display */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="stats">
  <div class="stat">
      <span class="stat-value">[field_project_budgeted_hours]</span>
      Budgeted Hours
  </div>
  <div class="stat">
      <span class="stat-value">[field_time_entry_time_spent]</span>
      Spent Hours
  </div>
  <div class="stat">
      <span class="stat-value">[expression]</span>
      Remaining
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Project Category Info */
  $handler = $view->new_display('panel_pane', 'Project Category Info', 'project_category_pie_chart_pane');
  $handler->display->display_options['display_description'] = 'This will show the project break down by category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_category';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_category' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_category' => '#2f7ed8',
    'field_time_entry_time_spent' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Project Burn Down */
  $handler = $view->new_display('panel_pane', 'Project Burn Down', 'project_burn_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Burn Down';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_date' => 'field_time_entry_date',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_project_budgeted_hours' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_date' => '#0d233a',
    'field_time_entry_time_spent' => '#ffa300',
    'field_project_budgeted_hours' => '#8bbc21',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = 'Time Remain';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['label'] = '';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Recent Time Entries */
  $handler = $view->new_display('panel_pane', 'Recent Time Entries', 'project_recent_time_entries_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Time Entries';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: User Burn Down */
  $handler = $view->new_display('panel_pane', 'User Burn Down', 'user_burn_down_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Burn';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'name';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'name' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_time_spent' => '#d99d00',
    'name' => '#910000',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '45';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Category Chart */
  $handler = $view->new_display('panel_pane', 'Category Chart', 'project_category_chart_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'By Category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_category';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_category' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_category' => '#2f7ed8',
    'field_time_entry_time_spent' => '#0d233a',
  );
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['colors'] = array(
    0 => '#a9a9a9',
    1 => '#007aaa',
    2 => '#3da642',
    3 => '#ed9806',
    4 => '#1c1508',
    5 => '#ac5b01',
    6 => '#ab4979',
    7 => '#fffb00',
    8 => '#ae6d11',
    9 => '#ae5201',
  );
  $handler->display->display_options['style_options']['width'] = '250';
  $handler->display->display_options['style_options']['height'] = '250';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'project_time_overview:category_table';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Project Hour Chart */
  $handler = $view->new_display('panel_pane', 'Project Hour Chart', 'project_hour_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Hour Chart';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_date' => 'field_time_entry_date',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_project_budgeted_hours' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_date' => '#0d233a',
    'field_time_entry_time_spent' => '#3f3f3f',
    'field_project_budgeted_hours' => '#8bbc21',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['label'] = '';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['project_time_overview'] = $view;

  $view = new view();
  $view->name = 'project_totals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project totals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project totals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['relationships']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  /* Field: Content: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['relationship'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Hours Used';
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '2';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[field_time_entry_time_spent]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Unused Hours';
  $handler->display->display_options['fields']['expression_1']['precision'] = '0';
  $handler->display->display_options['fields']['expression_1']['expression'] = '([field_project_budgeted_hours]-[field_time_entry_time_spent])
';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Percentage of Hours Used';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_time_entry_time_spent]  / [field_project_budgeted_hours] * 100';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );

  /* Display: Project Totals */
  $handler = $view->new_display('block', 'Project Totals', 'project_totals');
  $handler->display->display_options['block_description'] = 'project_totals';
  $export['project_totals'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = 'list of projects';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Time Entry */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['ui_name'] = 'Time Entry';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['label'] = 'Time Entry';
  /* Relationship: Client */
  $handler->display->display_options['relationships']['field_project_client_tid']['id'] = 'field_project_client_tid';
  $handler->display->display_options['relationships']['field_project_client_tid']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['relationships']['field_project_client_tid']['field'] = 'field_project_client_tid';
  $handler->display->display_options['relationships']['field_project_client_tid']['ui_name'] = 'Client';
  $handler->display->display_options['relationships']['field_project_client_tid']['label'] = 'Client';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_client_image']['id'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['table'] = 'field_data_field_client_image';
  $handler->display->display_options['fields']['field_client_image']['field'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['relationship'] = 'field_project_client_tid';
  $handler->display->display_options['fields']['field_client_image']['label'] = '';
  $handler->display->display_options['fields']['field_client_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_image']['settings'] = array(
    'image_style' => 'project',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_client_image']['group_column'] = 'entity_id';
  /* Field: Project Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Project Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['ui_name'] = 'Project Description';
  $handler->display->display_options['fields']['field_project_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_project_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_project_description']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: SUM(Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['ui_name'] = 'Time Spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['ui_name'] = 'Project Hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['label'] = '';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Time Percentage */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Time Percentage';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['text'] = '<div class="ui-progress-bar ui-container transition" id="progress_bar">
            <div class="ui-progress">
              <span class="ui-label" style="display: block;">[expression]</span>
            </div>
          </div>';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_time_entry_time_spent] / [field_project_budgeted_hours] * 100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="widget stacked">
  <div class="widget-header">
    <h3>[title]</h3>
  </div>
  <div class="widget-content">
    <div>[field_client_image] [field_project_description]</div>
    <div><strong>Time spent:</strong> [expression] [field_time_entry_time_spent] / [field_project_budgeted_hours] hour(s)</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Projects */
  $handler = $view->new_display('page', 'Projects', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="alert alert-info alert-dismissable">There are currently no project in the system.</div>
<a href="/node/add/project?destination=projects" class="btn btn-primary margin10">Add a new Project</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_client_image']['id'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['table'] = 'field_data_field_client_image';
  $handler->display->display_options['fields']['field_client_image']['field'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['relationship'] = 'field_project_client_tid';
  $handler->display->display_options['fields']['field_client_image']['label'] = '';
  $handler->display->display_options['fields']['field_client_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_image']['settings'] = array(
    'image_style' => 'project',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_client_image']['group_column'] = 'entity_id';
  /* Field: Project Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Project Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['ui_name'] = 'Project Description';
  $handler->display->display_options['fields']['field_project_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_project_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_project_description']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: SUM(Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['ui_name'] = 'Time Spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['ui_name'] = 'Project Hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['label'] = '';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_budgeted_hours']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Time Percentage */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['ui_name'] = 'Time Percentage';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['text'] = '<div class="ui-progress-bar ui-container transition" id="progress_bar">
            <div class="ui-progress">
              <span class="ui-label" style="display: block;">[expression]</span>
            </div>
          </div>';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_time_entry_time_spent] / [field_project_budgeted_hours] * 100';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="widget stacked">
  <div class="widget-header">
    <h3>[title]</h3>
  </div>
  <div class="widget-content">
    <div>[field_client_image] [field_project_description]</div>
    <div><strong>Time spent:</strong> [expression] [field_time_entry_time_spent] / [field_project_budgeted_hours] hour(s)</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';
  $handler->display->display_options['path'] = 'projects-legacy';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Featured Project */
  $handler = $view->new_display('panel_pane', 'Featured Project', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Project';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'projects:fp_total_chart';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'FP Weekly';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'projects:fp_weekly';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['label'] = 'FP Monthly';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'projects:fp_monthly';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view_2']['id'] = 'view_2';
  $handler->display->display_options['footer']['view_2']['table'] = 'views';
  $handler->display->display_options['footer']['view_2']['field'] = 'view';
  $handler->display->display_options['footer']['view_2']['label'] = 'FP Total';
  $handler->display->display_options['footer']['view_2']['view_to_insert'] = 'projects:fp_total';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_client_image']['id'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['table'] = 'field_data_field_client_image';
  $handler->display->display_options['fields']['field_client_image']['field'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['relationship'] = 'field_project_client_tid';
  $handler->display->display_options['fields']['field_client_image']['label'] = '';
  $handler->display->display_options['fields']['field_client_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_client_image']['element_wrapper_class'] = 'left margin10';
  $handler->display->display_options['fields']['field_client_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_image']['settings'] = array(
    'image_style' => 'project_featured',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_client_image']['group_column'] = 'entity_id';
  /* Field: Project Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Project Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['ui_name'] = 'Project Description';
  $handler->display->display_options['fields']['field_project_description']['label'] = '';
  $handler->display->display_options['fields']['field_project_description']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_project_description']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: FP Weekly */
  $handler = $view->new_display('panel_pane', 'FP Weekly', 'fp_weekly');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Weekly';
  $handler->display->display_options['display_description'] = 'Featured Project weekly total';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'stat';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Time Entry */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['ui_name'] = 'Time Entry';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['label'] = 'Time Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_class'] = 'stat-value';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'This Week';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value']['id'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['filters']['field_time_entry_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_date'] = 'this week';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: FP Monthly */
  $handler = $view->new_display('panel_pane', 'FP Monthly', 'fp_monthly');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Monthly';
  $handler->display->display_options['display_description'] = 'Featured Project monthly total';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'stat';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Time Entry */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['ui_name'] = 'Time Entry';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['label'] = 'Time Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_class'] = 'stat-value';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'This Month';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value']['id'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['filters']['field_time_entry_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator_id'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['label'] = 'Date (field_time_entry_date)';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_date'] = 'first day of this month';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: FP Total */
  $handler = $view->new_display('panel_pane', 'FP Total', 'fp_total');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['display_description'] = 'Featured Project total';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'stat';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Time Entry */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['ui_name'] = 'Time Entry';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['label'] = 'Time Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_class'] = 'stat-value';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Total';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: FP Total (Chart) */
  $handler = $view->new_display('panel_pane', 'FP Total (Chart)', 'fp_total_chart');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total';
  $handler->display->display_options['display_description'] = 'Featured Project total';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_category';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_category' => 'field_time_entry_category',
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'nothing' => '#2f7ed8',
    'field_time_entry_time_spent' => '#0d233a',
    'field_time_entry_category' => '#8bbc21',
  );
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '200';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Time Entry */
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['id'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['field'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['ui_name'] = 'Time Entry';
  $handler->display->display_options['relationships']['reverse_field_time_entry_project_node']['label'] = 'Time Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Total';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['relationship'] = 'reverse_field_time_entry_project_node';
  $handler->display->display_options['fields']['field_time_entry_category']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['projects'] = $view;

  $view = new view();
  $view->name = 'time_entry_list';
  $view->description = 'Time entry list administrative view is the master view for admin’s to see all of the time entry.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Time Entry List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Time Entries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_time_entry_project' => 'field_time_entry_project',
    'field_time_entry_category' => 'field_time_entry_category',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_date' => 'field_time_entry_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_time_entry_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_time_spent' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_time_entry_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'time_entry_list:total_time_block_admin';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_time_entry_project']['id'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['field'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['id'] = 'field_time_entry_date_value_1';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['operator_id'] = 'field_time_entry_date_value_1_op';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['label'] = 'Date ';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['operator'] = 'field_time_entry_date_value_1_op';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['identifier'] = 'field_time_entry_date_value_1';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['default_date'] = 'now -30 Days';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['year_range'] = '-1:+1';
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Category (field_time_entry_category) */
  $handler->display->display_options['filters']['field_time_entry_category_tid']['id'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['field'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator_id'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['label'] = 'Category ';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['identifier'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: Client (field_project_client) */
  $handler->display->display_options['filters']['field_project_client_tid']['id'] = 'field_project_client_tid';
  $handler->display->display_options['filters']['field_project_client_tid']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['filters']['field_project_client_tid']['field'] = 'field_project_client_tid';
  $handler->display->display_options['filters']['field_project_client_tid']['value'] = '';
  $handler->display->display_options['filters']['field_project_client_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_client_tid']['expose']['operator_id'] = 'field_project_client_tid_op';
  $handler->display->display_options['filters']['field_project_client_tid']['expose']['label'] = 'Client ';
  $handler->display->display_options['filters']['field_project_client_tid']['expose']['operator'] = 'field_project_client_tid_op';
  $handler->display->display_options['filters']['field_project_client_tid']['expose']['identifier'] = 'field_project_client_tid';
  $handler->display->display_options['filters']['field_project_client_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_project_client_tid']['vocabulary'] = 'client';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User Name ';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Time Entry List - User */
  $handler = $view->new_display('page', 'Time Entry List - User', 'time_entry_list');
  $handler->display->display_options['display_description'] = 'Specific user to see his/her time entry';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/time-entry" class="btn btn-primary right">Add New Time Entry</a>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'time_entry_list:user_total_time';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="messages warning">You currently have no time entry for this week, how about <a href="/node/add/time-entry">create a new time entry</a>?</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_time_entry_project']['id'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['field'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_project']['empty'] = 'N/A';
  $handler->display->display_options['fields']['field_time_entry_project']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['id'] = 'field_time_entry_date_value_1';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['operator_id'] = 'field_time_entry_date_value_1_op';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['label'] = 'Date ';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['operator'] = 'field_time_entry_date_value_1_op';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['group_info']['label'] = 'Date (field_time_entry_date)';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['group_info']['identifier'] = 'field_time_entry_date_value_1';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['default_date'] = 'last Sunday';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['year_range'] = '2013:+1';
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_time_entry_category) */
  $handler->display->display_options['filters']['field_time_entry_category_tid']['id'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['field'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator_id'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['label'] = 'Category ';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['identifier'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'time-entry-list';

  /* Display: Time Entry Total - User */
  $handler = $view->new_display('block', 'Time Entry Total - User', 'user_total_time');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['empty'] = '0';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value']['id'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator_id'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['label'] = 'Date ';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_date'] = 'last Sunday';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project ';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_time_entry_category) */
  $handler->display->display_options['filters']['field_time_entry_category_tid']['id'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['field'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator_id'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['label'] = 'Category ';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['identifier'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['block_description'] = 'User Total Time';

  /* Display: Time Entry List (Admin) */
  $handler = $view->new_display('page', 'Time Entry List (Admin)', 'admin_time_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All time entry list';
  $handler->display->display_options['display_description'] = 'Time entry list administrative view is the master view for admin’s to see all of the time entry';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['id'] = 'field_time_entry_date_value_1';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['operator_id'] = 'field_time_entry_date_value_1_op';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['label'] = 'Date ';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['operator'] = 'field_time_entry_date_value_1_op';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['default_date'] = 'now -60 day';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['field_time_entry_date_value_1']['year_range'] = '-1:+1';
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Category (field_time_entry_category) */
  $handler->display->display_options['filters']['field_time_entry_category_tid']['id'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['field'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator_id'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['label'] = 'Category ';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['identifier'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User Name ';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/time/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Time Entries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Time Entry Total - Admin */
  $handler = $view->new_display('block', 'Time Entry Total - Admin', 'total_time_block_admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value']['id'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_entry_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator_id'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_date'] = 'now -60 day';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_to_date'] = 'now';
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project ';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Category (field_time_entry_category) */
  $handler->display->display_options['filters']['field_time_entry_category_tid']['id'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['field'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator_id'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['label'] = 'Category ';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['operator'] = 'field_time_entry_category_tid_op';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['identifier'] = 'field_time_entry_category_tid';
  $handler->display->display_options['filters']['field_time_entry_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['block_description'] = 'Time Entry Total - Admin';
  $export['time_entry_list'] = $view;

  $view = new view();
  $view->name = 'user_time_entry_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Time Entry Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Time Entries (All)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_time_entry_project' => 'field_time_entry_project',
    'field_time_entry_date' => 'field_time_entry_date',
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_category' => 'field_time_entry_category',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_time_entry_project' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_time_spent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/node/add/time-entry" class="btn btn-primary right margin5">Create New Time Entry</a>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="alert alert-info alert-dismissable">You haven\'t entered any time into the system, how about create a new time entry?</div>
<a href="/node/add/time-entry%3Fdestination%3Dtime" class="btn btn-primary margin10">Create New Time Entry</a>';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_time_entry_project']['id'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['field'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: note */
  $handler->display->display_options['fields']['field_time_entry_note']['id'] = 'field_time_entry_note';
  $handler->display->display_options['fields']['field_time_entry_note']['table'] = 'field_data_field_time_entry_note';
  $handler->display->display_options['fields']['field_time_entry_note']['field'] = 'field_time_entry_note';
  $handler->display->display_options['fields']['field_time_entry_note']['label'] = 'Note';
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: All My Time Entries */
  $handler = $view->new_display('panel_pane', 'All My Time Entries', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'time_entries_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'my-time-entries/export';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'my-time-entries';
  $handler->display->display_options['segment_size'] = '100';
  $export['user_time_entry_report'] = $view;

  $view = new view();
  $view->name = 'user_time_entry_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User time entry stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'By Project';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_project';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_project' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_project' => '#0d233a',
    'field_time_entry_time_spent' => '#2f7ed8',
  );
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_time_entry_project']['id'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['field'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['settings'] = array(
    'link' => 0,
  );
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = 'Time spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['filters']['field_time_entry_date_value']['id'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator_id'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['operator'] = 'field_time_entry_date_value_op';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_time_entry_date_value']['group_info']['label'] = 'Time period';
  $handler->display->display_options['filters']['field_time_entry_date_value']['group_info']['identifier'] = 'field_time_entry_date_value';
  $handler->display->display_options['filters']['field_time_entry_date_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_time_entry_date_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Last 7 days',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => '-60 day',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => '-60 day',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'relative',
          'max' => NULL,
          'default_to_date' => 'now',
        ),
      ),
    ),
    2 => array(
      'title' => 'Last 30 days',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => '-60 day',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => '-60 day',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'relative',
          'max' => NULL,
          'default_to_date' => 'now',
        ),
      ),
    ),
    3 => array(
      'title' => 'Last 60 days',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => '-60 day',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => '-60 day',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'relative',
          'max' => NULL,
          'default_to_date' => 'now',
        ),
      ),
    ),
    4 => array(
      'title' => 'Year to date',
      'operator' => 'between',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'relative',
          'value' => NULL,
          'default_date' => '-60 day',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'relative',
          'min' => NULL,
          'default_date' => 'this year',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'relative',
          'max' => NULL,
          'default_to_date' => 'now',
        ),
      ),
    ),
  );
  $handler->display->display_options['filters']['field_time_entry_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_date'] = 'last Sunday';
  $handler->display->display_options['filters']['field_time_entry_date_value']['default_to_date'] = 'now';

  /* Display: By project */
  $handler = $view->new_display('block', 'By project', 'block');

  /* Display: By Category */
  $handler = $view->new_display('block', 'By Category', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'By Category';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_category';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_category' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_time_spent' => '#2f7ed8',
    'field_time_entry_category' => '#0d233a',
  );
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = 'Time spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_time_spent']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['label'] = '';
  $handler->display->display_options['fields']['field_time_entry_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  $export['user_time_entry_stats'] = $view;

  $view = new view();
  $view->name = 'weekly_time_entry_overview';
  $view->description = 'Provides an overlook for the weekly time entries';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Weekly Time Entry Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Weekly Time Entry Overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="alert alert-info">There\'s no time entry associated with the current week</div>';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['label'] = 'Day of the Week';
  $handler->display->display_options['fields']['field_time_entry_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Date (field_time_entry_date) */
  $handler->display->display_options['sorts']['field_time_entry_date_value']['id'] = 'field_time_entry_date_value';
  $handler->display->display_options['sorts']['field_time_entry_date_value']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['sorts']['field_time_entry_date_value']['field'] = 'field_time_entry_date_value';
  $handler->display->display_options['sorts']['field_time_entry_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Weekly */
  $handler = $view->new_display('panel_pane', 'Weekly', 'weekly');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'weekly_time_entry_overview:weekly_total';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'report/weekly/export';
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
    'weekly_chart' => 0,
  );

  /* Display: Chart */
  $handler = $view->new_display('panel_pane', 'Chart', 'weekly_chart');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_time_entry_date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_time_entry_time_spent' => 'field_time_entry_time_spent',
    'field_time_entry_date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_time_entry_date' => '#2f7ed8',
    'field_time_entry_time_spent' => '#0d233a',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Weekly Total */
  $handler = $view->new_display('panel_pane', 'Weekly Total', 'weekly_total');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Content: Time Spent) */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = 'Total';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'time_entry' => 'time_entry',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Project (field_time_entry_project) */
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['id'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['field'] = 'field_time_entry_project_target_id';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator_id'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['label'] = 'Project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['operator'] = 'field_time_entry_project_target_id_op';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['identifier'] = 'project';
  $handler->display->display_options['filters']['field_time_entry_project_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['weekly_time_entry_overview'] = $view;

  return $export;
}

<?php
/**
 * @file
 * ourly_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ourly_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export: Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export: Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['label'] = 'description';
  /* Field: Content: Project Hours */
  $handler->display->display_options['fields']['field_project_budgeted_hours']['id'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['table'] = 'field_data_field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['field'] = 'field_project_budgeted_hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['label'] = 'hours';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_project_budgeted_hours']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Billing Rate */
  $handler->display->display_options['fields']['field_project_billing_rate']['id'] = 'field_project_billing_rate';
  $handler->display->display_options['fields']['field_project_billing_rate']['table'] = 'field_data_field_project_billing_rate';
  $handler->display->display_options['fields']['field_project_billing_rate']['field'] = 'field_project_billing_rate';
  $handler->display->display_options['fields']['field_project_billing_rate']['label'] = 'rate';
  $handler->display->display_options['fields']['field_project_billing_rate']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_project_billing_rate']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total Budget */
  $handler->display->display_options['fields']['field_project_total_budget']['id'] = 'field_project_total_budget';
  $handler->display->display_options['fields']['field_project_total_budget']['table'] = 'field_data_field_project_total_budget';
  $handler->display->display_options['fields']['field_project_total_budget']['field'] = 'field_project_total_budget';
  $handler->display->display_options['fields']['field_project_total_budget']['label'] = 'budget';
  $handler->display->display_options['fields']['field_project_total_budget']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_project_total_budget']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_project_client']['id'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['table'] = 'field_data_field_project_client';
  $handler->display->display_options['fields']['field_project_client']['field'] = 'field_project_client';
  $handler->display->display_options['fields']['field_project_client']['label'] = 'client';
  $handler->display->display_options['fields']['field_project_client']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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

  /* Display: Export: Project */
  $handler = $view->new_display('page', 'Export: Project', 'page');
  $handler->display->display_options['path'] = 'export/project';

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
  $handler->display->display_options['path'] = 'export/project/e';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['export_projects'] = $view;

  $view = new view();
  $view->name = 'export_time';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export: Time';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export: Time';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['label'] = 'date';
  $handler->display->display_options['fields']['field_time_entry_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_time_entry_category']['id'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['table'] = 'field_data_field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['field'] = 'field_time_entry_category';
  $handler->display->display_options['fields']['field_time_entry_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_time_entry_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Time Spent */
  $handler->display->display_options['fields']['field_time_entry_time_spent']['id'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['table'] = 'field_data_field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['field'] = 'field_time_entry_time_spent';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['label'] = 'time';
  $handler->display->display_options['fields']['field_time_entry_time_spent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: note */
  $handler->display->display_options['fields']['field_time_entry_note']['id'] = 'field_time_entry_note';
  $handler->display->display_options['fields']['field_time_entry_note']['table'] = 'field_data_field_time_entry_note';
  $handler->display->display_options['fields']['field_time_entry_note']['field'] = 'field_time_entry_note';
  $handler->display->display_options['fields']['field_time_entry_note']['label'] = 'description';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'user';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_time_entry_project']['id'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['table'] = 'field_data_field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['field'] = 'field_time_entry_project';
  $handler->display->display_options['fields']['field_time_entry_project']['label'] = 'project';
  $handler->display->display_options['fields']['field_time_entry_project']['settings'] = array(
    'link' => 0,
  );
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

  /* Display: Export: Time */
  $handler = $view->new_display('page', 'Export: Time', 'page');
  $handler->display->display_options['path'] = 'export/time';

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
  $handler->display->display_options['path'] = 'export/time/e';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['export_time'] = $view;

  $view = new view();
  $view->name = 'export_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Export: Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export: Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'email';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_user_name']['id'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['fields']['field_user_name']['field'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name']['label'] = 'fname';
  $handler->display->display_options['fields']['field_user_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_user_name']['settings'] = array(
    'format' => 'given',
    'markup' => 0,
    'output' => 'plain',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['field_user_name_1']['id'] = 'field_user_name_1';
  $handler->display->display_options['fields']['field_user_name_1']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['fields']['field_user_name_1']['field'] = 'field_user_name';
  $handler->display->display_options['fields']['field_user_name_1']['label'] = 'lname';
  $handler->display->display_options['fields']['field_user_name_1']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_user_name_1']['settings'] = array(
    'format' => 'family',
    'markup' => 0,
    'output' => 'plain',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: User: Phone */
  $handler->display->display_options['fields']['field_user_phone']['id'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['table'] = 'field_data_field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['field'] = 'field_user_phone';
  $handler->display->display_options['fields']['field_user_phone']['label'] = 'phone';
  /* Field: User: Rate */
  $handler->display->display_options['fields']['field_user_rate']['id'] = 'field_user_rate';
  $handler->display->display_options['fields']['field_user_rate']['table'] = 'field_data_field_user_rate';
  $handler->display->display_options['fields']['field_user_rate']['field'] = 'field_user_rate';
  $handler->display->display_options['fields']['field_user_rate']['label'] = 'rate';
  $handler->display->display_options['fields']['field_user_rate']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_user_rate']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Export */
  $handler = $view->new_display('page', 'User Export', 'page');
  $handler->display->display_options['path'] = 'export/user';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'export/user/e';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['export_users'] = $view;

  return $export;
}

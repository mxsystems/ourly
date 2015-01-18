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
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'project_edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:ourly_edit';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '339a448a-8695-427c-9009-70dcf7cbeb01';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b44b1a41-8846-4bd9-9cc4-0df74806d7c1';
    $pane->panel = 'center';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b44b1a41-8846-4bd9-9cc4-0df74806d7c1';
    $display->content['new-b44b1a41-8846-4bd9-9cc4-0df74806d7c1'] = $pane;
    $display->panels['center'][0] = 'new-b44b1a41-8846-4bd9-9cc4-0df74806d7c1';
    $pane = new stdClass();
    $pane->pid = 'new-e5acf62a-174f-4368-8e64-83b755dc4647';
    $pane->panel = 'center';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_project_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e5acf62a-174f-4368-8e64-83b755dc4647';
    $display->content['new-e5acf62a-174f-4368-8e64-83b755dc4647'] = $pane;
    $display->panels['center'][1] = 'new-e5acf62a-174f-4368-8e64-83b755dc4647';
    $pane = new stdClass();
    $pane->pid = 'new-b320a740-0e47-43a0-8222-14cd31044121';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b320a740-0e47-43a0-8222-14cd31044121';
    $display->content['new-b320a740-0e47-43a0-8222-14cd31044121'] = $pane;
    $display->panels['center'][2] = 'new-b320a740-0e47-43a0-8222-14cd31044121';
    $pane = new stdClass();
    $pane->pid = 'new-e6c9734c-ff47-4150-ade7-2bbd8fce62b3';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_project_client';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => 'a',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6c9734c-ff47-4150-ade7-2bbd8fce62b3';
    $display->content['new-e6c9734c-ff47-4150-ade7-2bbd8fce62b3'] = $pane;
    $display->panels['sidebar'][0] = 'new-e6c9734c-ff47-4150-ade7-2bbd8fce62b3';
    $pane = new stdClass();
    $pane->pid = 'new-c32e162c-1b6c-4ea9-98dc-861ab504c818';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_project_total_budget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'naked',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c32e162c-1b6c-4ea9-98dc-861ab504c818';
    $display->content['new-c32e162c-1b6c-4ea9-98dc-861ab504c818'] = $pane;
    $display->panels['sidebar'][1] = 'new-c32e162c-1b6c-4ea9-98dc-861ab504c818';
    $pane = new stdClass();
    $pane->pid = 'new-fc863468-682d-409d-880a-0acc308d213b';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_project_billing_rate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fc863468-682d-409d-880a-0acc308d213b';
    $display->content['new-fc863468-682d-409d-880a-0acc308d213b'] = $pane;
    $display->panels['sidebar'][2] = 'new-fc863468-682d-409d-880a-0acc308d213b';
    $pane = new stdClass();
    $pane->pid = 'new-aadddc4b-d198-4f4f-8bc6-86c2043a3f71';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_project_budgeted_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aadddc4b-d198-4f4f-8bc6-86c2043a3f71';
    $display->content['new-aadddc4b-d198-4f4f-8bc6-86c2043a3f71'] = $pane;
    $display->panels['sidebar'][3] = 'new-aadddc4b-d198-4f4f-8bc6-86c2043a3f71';
    $pane = new stdClass();
    $pane->pid = 'new-7f6e448e-0e4e-4145-ac1e-478ee0dbc5ee';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_project_members';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7f6e448e-0e4e-4145-ac1e-478ee0dbc5ee';
    $display->content['new-7f6e448e-0e4e-4145-ac1e-478ee0dbc5ee'] = $pane;
    $display->panels['sidebar'][4] = 'new-7f6e448e-0e4e-4145-ac1e-478ee0dbc5ee';
    $pane = new stdClass();
    $pane->pid = 'new-4b4483f5-4161-4831-b595-25404ea9ad5d';
    $pane->panel = 'sidebar';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4b4483f5-4161-4831-b595-25404ea9ad5d';
    $display->content['new-4b4483f5-4161-4831-b595-25404ea9ad5d'] = $pane;
    $display->panels['sidebar'][5] = 'new-4b4483f5-4161-4831-b595-25404ea9ad5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Time Entry',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'time_edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'time_entry' => 'time_entry',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'de795996-4c4c-44af-9feb-1ff93c24f072';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5b985ae6-4fcf-488f-aefa-7a8f37d6fe94';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_time_entry_project';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b985ae6-4fcf-488f-aefa-7a8f37d6fe94';
    $display->content['new-5b985ae6-4fcf-488f-aefa-7a8f37d6fe94'] = $pane;
    $display->panels['left'][0] = 'new-5b985ae6-4fcf-488f-aefa-7a8f37d6fe94';
    $pane = new stdClass();
    $pane->pid = 'new-60250a7f-1a0c-4d39-8913-5f7c1a4a2816';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_time_entry_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60250a7f-1a0c-4d39-8913-5f7c1a4a2816';
    $display->content['new-60250a7f-1a0c-4d39-8913-5f7c1a4a2816'] = $pane;
    $display->panels['left'][1] = 'new-60250a7f-1a0c-4d39-8913-5f7c1a4a2816';
    $pane = new stdClass();
    $pane->pid = 'new-dd2feff2-dcf5-4ab6-825d-9f0e550bfef7';
    $pane->panel = 'left';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_time_entry_note';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dd2feff2-dcf5-4ab6-825d-9f0e550bfef7';
    $display->content['new-dd2feff2-dcf5-4ab6-825d-9f0e550bfef7'] = $pane;
    $display->panels['left'][2] = 'new-dd2feff2-dcf5-4ab6-825d-9f0e550bfef7';
    $pane = new stdClass();
    $pane->pid = 'new-71673298-dc30-4524-b61f-ba715dbfecb3';
    $pane->panel = 'left';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71673298-dc30-4524-b61f-ba715dbfecb3';
    $display->content['new-71673298-dc30-4524-b61f-ba715dbfecb3'] = $pane;
    $display->panels['left'][3] = 'new-71673298-dc30-4524-b61f-ba715dbfecb3';
    $pane = new stdClass();
    $pane->pid = 'new-cfc68cd2-7f8c-4cba-ac21-de8490f6a532';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_time_entry_time_spent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfc68cd2-7f8c-4cba-ac21-de8490f6a532';
    $display->content['new-cfc68cd2-7f8c-4cba-ac21-de8490f6a532'] = $pane;
    $display->panels['right'][0] = 'new-cfc68cd2-7f8c-4cba-ac21-de8490f6a532';
    $pane = new stdClass();
    $pane->pid = 'new-94331371-509e-4838-9dff-dca9f1c7ed99';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_time_entry_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94331371-509e-4838-9dff-dca9f1c7ed99';
    $display->content['new-94331371-509e-4838-9dff-dca9f1c7ed99'] = $pane;
    $display->panels['right'][1] = 'new-94331371-509e-4838-9dff-dca9f1c7ed99';
    $pane = new stdClass();
    $pane->pid = 'new-6adda36a-1c0e-43be-83f5-06894be50951';
    $pane->panel = 'right';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'time-form-pub-options',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6adda36a-1c0e-43be-83f5-06894be50951';
    $display->content['new-6adda36a-1c0e-43be-83f5-06894be50951'] = $pane;
    $display->panels['right'][2] = 'new-6adda36a-1c0e-43be-83f5-06894be50951';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5b985ae6-4fcf-488f-aefa-7a8f37d6fe94';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy term from Node (on Node: Client [field_project_client])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_project_client-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 3,
          2 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'project_col1_row2',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'project_col1_row2' => array(
        'type' => 'region',
        'title' => 'project_col1_row2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'row_3',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'row_3' => array(
        'type' => 'region',
        'title' => 'row_3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'project_col2' => NULL,
      'project_col1_row2' => NULL,
      'project_col_right' => NULL,
      'row_3' => NULL,
    ),
    'project_col_right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35b848fb-340d-4332-9e44-a8b3790124d6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66d39147-8fc5-41ac-9fb3-1e5975ec0597';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_time_overview-project_overview_info_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-file',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66d39147-8fc5-41ac-9fb3-1e5975ec0597';
    $display->content['new-66d39147-8fc5-41ac-9fb3-1e5975ec0597'] = $pane;
    $display->panels['center'][0] = 'new-66d39147-8fc5-41ac-9fb3-1e5975ec0597';
    $pane = new stdClass();
    $pane->pid = 'new-11da8d83-0681-4210-ac47-9f5837be169f';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_time_overview-project_key_info_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-star',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '11da8d83-0681-4210-ac47-9f5837be169f';
    $display->content['new-11da8d83-0681-4210-ac47-9f5837be169f'] = $pane;
    $display->panels['center'][1] = 'new-11da8d83-0681-4210-ac47-9f5837be169f';
    $pane = new stdClass();
    $pane->pid = 'new-0b4785d6-6368-4b86-b3f0-10c15c0d4591';
    $pane->panel = 'project_col1_row2';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_time_overview-project_burn_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b4785d6-6368-4b86-b3f0-10c15c0d4591';
    $display->content['new-0b4785d6-6368-4b86-b3f0-10c15c0d4591'] = $pane;
    $display->panels['project_col1_row2'][0] = 'new-0b4785d6-6368-4b86-b3f0-10c15c0d4591';
    $pane = new stdClass();
    $pane->pid = 'new-81ecdace-4bef-49f5-8d54-02eb20f83f74';
    $pane->panel = 'project_col1_row2';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_time_overview-user_burn_down_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '81ecdace-4bef-49f5-8d54-02eb20f83f74';
    $display->content['new-81ecdace-4bef-49f5-8d54-02eb20f83f74'] = $pane;
    $display->panels['project_col1_row2'][1] = 'new-81ecdace-4bef-49f5-8d54-02eb20f83f74';
    $pane = new stdClass();
    $pane->pid = 'new-a2a310a8-7df8-4e8d-9476-b11ea673eb39';
    $pane->panel = 'row_3';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_time_overview-project_category_chart_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-signal',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2a310a8-7df8-4e8d-9476-b11ea673eb39';
    $display->content['new-a2a310a8-7df8-4e8d-9476-b11ea673eb39'] = $pane;
    $display->panels['row_3'][0] = 'new-a2a310a8-7df8-4e8d-9476-b11ea673eb39';
    $pane = new stdClass();
    $pane->pid = 'new-8412e12e-dcc0-4143-a18b-59206ad7c58f';
    $pane->panel = 'row_3';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_time_overview-project_recent_time_entries_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-th-list',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8412e12e-dcc0-4143-a18b-59206ad7c58f';
    $display->content['new-8412e12e-dcc0-4143-a18b-59206ad7c58f'] = $pane;
    $display->panels['row_3'][1] = 'new-8412e12e-dcc0-4143-a18b-59206ad7c58f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

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
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'argument_user_edit_1',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->access = array(
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
    );
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
    $pane->pid = 'new-ec4d77f0-1baf-4d58-97bf-981c7b9bf66f';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'user_time_entry_stats';
    $pane->shown = TRUE;
    $pane->access = array(
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
          'not' => TRUE,
        ),
      ),
    );
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
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec4d77f0-1baf-4d58-97bf-981c7b9bf66f';
    $display->content['new-ec4d77f0-1baf-4d58-97bf-981c7b9bf66f'] = $pane;
    $display->panels['center'][1] = 'new-ec4d77f0-1baf-4d58-97bf-981c7b9bf66f';
    $pane = new stdClass();
    $pane->pid = 'new-3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'user_time_entry_stats';
    $pane->shown = TRUE;
    $pane->access = array(
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
    );
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7';
    $display->content['new-3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7'] = $pane;
    $display->panels['center'][2] = 'new-3d205ff5-8aa9-46d9-be0f-a62ab6bc5af7';
    $pane = new stdClass();
    $pane->pid = 'new-aaf340fe-0929-4f09-89b7-6068604108c0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'user_time_entry_stats';
    $pane->shown = TRUE;
    $pane->access = array(
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
          'not' => TRUE,
        ),
      ),
    );
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
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'aaf340fe-0929-4f09-89b7-6068604108c0';
    $display->content['new-aaf340fe-0929-4f09-89b7-6068604108c0'] = $pane;
    $display->panels['center'][3] = 'new-aaf340fe-0929-4f09-89b7-6068604108c0';
    $pane = new stdClass();
    $pane->pid = 'new-579acd5f-18fc-4c07-ac53-9879a38b429c';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_dashboard-manage_dashboard_pane';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-file',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '579acd5f-18fc-4c07-ac53-9879a38b429c';
    $display->content['new-579acd5f-18fc-4c07-ac53-9879a38b429c'] = $pane;
    $display->panels['center'][4] = 'new-579acd5f-18fc-4c07-ac53-9879a38b429c';
    $pane = new stdClass();
    $pane->pid = 'new-b7d2576b-b0fd-4700-aa11-60b09ad63cb6';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_dashboard-manage_pm_dashboard_pane';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-file',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b7d2576b-b0fd-4700-aa11-60b09ad63cb6';
    $display->content['new-b7d2576b-b0fd-4700-aa11-60b09ad63cb6'] = $pane;
    $display->panels['center'][5] = 'new-b7d2576b-b0fd-4700-aa11-60b09ad63cb6';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '88ed9002-82f3-4ebb-8213-1e409a3d9e35';
    $display->content['new-88ed9002-82f3-4ebb-8213-1e409a3d9e35'] = $pane;
    $display->panels['center'][6] = 'new-88ed9002-82f3-4ebb-8213-1e409a3d9e35';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c2b90c65-32ec-454c-a456-732d64cef252';
    $display->content['new-c2b90c65-32ec-454c-a456-732d64cef252'] = $pane;
    $display->panels['center'][7] = 'new-c2b90c65-32ec-454c-a456-732d64cef252';
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
    $pane->pid = 'new-ea5b6778-1c90-4861-8bc8-2798e43b1d37';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_time_entry_overview-monthly_chart';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = 'ea5b6778-1c90-4861-8bc8-2798e43b1d37';
    $display->content['new-ea5b6778-1c90-4861-8bc8-2798e43b1d37'] = $pane;
    $display->panels['center'][0] = 'new-ea5b6778-1c90-4861-8bc8-2798e43b1d37';
    $pane = new stdClass();
    $pane->pid = 'new-2639bb86-dfb8-4109-bb9f-2a6f6da6209d';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_time_entry_overview-monthly';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2639bb86-dfb8-4109-bb9f-2a6f6da6209d';
    $display->content['new-2639bb86-dfb8-4109-bb9f-2a6f6da6209d'] = $pane;
    $display->panels['center'][1] = 'new-2639bb86-dfb8-4109-bb9f-2a6f6da6209d';
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
    $pane->pid = 'new-1bfb122e-1412-4095-a27e-f1549216f652';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'weekly_time_entry_overview-weekly_chart';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'uid' => '',
        'project' => '',
      ),
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
    $pane->uuid = '1bfb122e-1412-4095-a27e-f1549216f652';
    $display->content['new-1bfb122e-1412-4095-a27e-f1549216f652'] = $pane;
    $display->panels['center'][0] = 'new-1bfb122e-1412-4095-a27e-f1549216f652';
    $pane = new stdClass();
    $pane->pid = 'new-7c2d4367-70b8-4536-b986-6e02e10db97e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'weekly_time_entry_overview-weekly';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c2d4367-70b8-4536-b986-6e02e10db97e';
    $display->content['new-7c2d4367-70b8-4536-b986-6e02e10db97e'] = $pane;
    $display->panels['center'][1] = 'new-7c2d4367-70b8-4536-b986-6e02e10db97e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['report'] = $page;

  return $pages;

}

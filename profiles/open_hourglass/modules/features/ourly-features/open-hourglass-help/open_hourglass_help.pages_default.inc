<?php
/**
 * @file
 * open_hourglass_help.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function open_hourglass_help_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'help';
  $page->task = 'page';
  $page->admin_title = 'Help';
  $page->admin_description = 'Provide help contents to our.ly.';
  $page->path = 'help';
  $page->access = array(
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
    'logic' => 'and',
  );
  $page->menu = '';
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_help_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'help';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Help',
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
  $display->uuid = '97754a2e-d5f1-4051-94bd-b13a27747b29';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a3ef71a-0ce2-48f2-9775-e6f0ba026564';
    $pane->panel = 'center';
    $pane->type = 'ourly_help';
    $pane->subtype = 'ourly_help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'icon-pushpin',
      'css_class' => 'col-md-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a3ef71a-0ce2-48f2-9775-e6f0ba026564';
    $display->content['new-0a3ef71a-0ce2-48f2-9775-e6f0ba026564'] = $pane;
    $display->panels['center'][0] = 'new-0a3ef71a-0ce2-48f2-9775-e6f0ba026564';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['help'] = $page;

  return $pages;

}

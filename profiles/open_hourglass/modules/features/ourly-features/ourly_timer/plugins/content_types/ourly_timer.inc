<?php
/**
 * @file
 * Code for the custom Panels Pane for quick timer contents
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Our.ly Timer'),
  'category' => t('Our.ly'),
  'render callback' => 'ourly_timer_render_content',
  'defaults' => array(),
);

/**
 * Render data.
 */
function ourly_timer_render_content($subtype, $conf, $panel_args, $context) {
  // Adding external js library and our glue js
  drupal_add_js(drupal_get_path('module', 'ourly_timer') . '/js/timer.jquery.js');
  drupal_add_js(drupal_get_path('module', 'ourly_timer') . '/js/ourly_timer.js');

  // Build the content type block.
  $block = new stdClass();
  $block->module = 'ourly_timer';
  $block->title = '';
  $content = drupal_get_form('ourly_timer_pane_content');
  $block->content = $content;
  return $block;
}

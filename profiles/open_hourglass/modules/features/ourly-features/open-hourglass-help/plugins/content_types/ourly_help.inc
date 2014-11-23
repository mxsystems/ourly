<?php
/**
 * @file
 * Code for the custom Panels Pane for Help contents
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Our.ly Help'),
  'category' => t('Our.ly'),
  'render callback' => 'open_hourglass_help_content',
  'defaults' => array(),
);

/**
 * Render data.
 */
function open_hourglass_help_content($subtype, $conf, $panel_args, $context) {
  // Add the faq css/js just for this page.
  drupal_add_css(drupal_get_path('theme', 'ourly') . '/js/plugins/faq/faq.css');
  drupal_add_js(drupal_get_path('theme', 'ourly') . '/js/plugins/faq/faq.js');
  drupal_add_js(
    "(function($) {
      Drupal.behaviors.ourly_help = {
        attach: function (context, settings) {
          $('.faq-list').goFaq ();
        }
      };
})(jQuery);"
  , 'inline');
  $path = drupal_get_path('module', 'open_hourglass_help') . '/help.html';
  // Build the content type block.
  $block = new stdClass();
  $block->module = 'open_hourglass_help';
  $block->title = t('Help');
  $block->content = file_get_contents($path);
  return $block;
}

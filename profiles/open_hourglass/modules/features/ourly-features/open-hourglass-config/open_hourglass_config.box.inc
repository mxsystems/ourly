<?php
/**
 * @file
 * open_hourglass_config.box.inc
 */

/**
 * Implements hook_default_box().
 */
function open_hourglass_config_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Copyright';
  $box->options = array(
    'body' => array(
      'value' => '&copy;2013 - 2014 Our.ly, brought you by by MX Systems LLC',
      'format' => 'filtered_html',
    ),
    'additional_classes' => 'col-md-6',
  );
  $export['copyright'] = $box;

  return $export;
}

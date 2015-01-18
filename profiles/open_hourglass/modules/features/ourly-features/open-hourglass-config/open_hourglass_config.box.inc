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
      'value' => '&copy; 2013 - 2015 Our.ly, brought to you by MX Systems LLC

<a id="back-to-top" href="#top" style="display: block;"><i class="icon-chevron-up"></i></a>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'col-md-6',
  );
  $export['copyright'] = $box;

  return $export;
}

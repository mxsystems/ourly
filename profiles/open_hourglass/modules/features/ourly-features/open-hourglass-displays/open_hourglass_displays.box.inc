<?php
/**
 * @file
 * open_hourglass_displays.box.inc
 */

/**
 * Implements hook_default_box().
 */
function open_hourglass_displays_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'error_404';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = '404 Block';
  $box->options = array(
    'body' => array(
      'value' => '<div class="error-container"> <h1>Oops!</h1> <h2>404 Not Found</h2> <div class="error-details"> Sorry, an error has occured, Requested page not found! </div> <!-- /error-details --> <div class="error-actions"> <a href="/" class="btn btn-primary btn-lg"> <i class="icon-chevron-left"></i> &nbsp; Back to Dashboard </a> <a href="/contact" class="btn btn-default btn-lg"> <i class="icon-envelope"></i> &nbsp; Contact Support </a> </div> <!-- /error-actions --> </div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['error_404'] = $box;

  return $export;
}

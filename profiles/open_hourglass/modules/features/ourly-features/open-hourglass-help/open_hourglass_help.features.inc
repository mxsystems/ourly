<?php
/**
 * @file
 * open_hourglass_help.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_hourglass_help_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

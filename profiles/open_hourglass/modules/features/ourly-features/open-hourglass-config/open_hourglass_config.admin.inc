<?php

/**
 * @file
 * Administrative page code for the ourly.
 *
 */
function ourly_config_settings() {
  $form = array();
  $form += module_invoke_all('ourly_config_form');
  return system_settings_form($form);
}
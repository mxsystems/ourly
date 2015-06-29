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

/**
 * Implements hook_ourly_config_form.
 */
function open_hourglass_config_ourly_config_form() {

  $form['formats'] = array(
    '#type' => 'fieldset',
    '#title' => t('Formats'),
  );

  $form['formats']['ourly_config_roundoff'] = array(
    '#type' => 'checkbox',
    '#title' => t('Round off time entry to the nearest quarter.'),
    '#description' => t('Time entry will be rounded to the nearest quarter hour, i.e. .25, 1.5'),
    '#default_value' => variable_get('ourly_config_roundoff', 1),
  );

  return $form;
}
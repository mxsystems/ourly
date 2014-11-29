<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function open_hourglass_form_install_configure_form_alter(&$form, $form_state) {
  // When using Drush, let it set the default password.
//  if (drupal_is_cli()) {
//    return;
//  }
  // Set a default name for the dev site and change title's label.
  $form['site_information']['site_name']['#title'] = 'Our.ly';
  $form['site_information']['site_mail']['#title'] = 'Our.ly maintenance email address';
  $form['site_information']['site_name']['#default_value'] = st('Our.ly Timetracker');

  // Set a default country so we can benefit from it on Address Fields.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';

  if (!drupal_is_cli()) {
    // Use "admin" as the default username.
    $form['admin_account']['account']['name']['#default_value'] = 'admin';
    // Set the default admin password.
    $form['admin_account']['account']['pass']['#value'] = 'admin';
  }
  // Hide Update Notifications.
  $form['update_notifications']['#access'] = FALSE;

  // Add informations about the default username and password.
  $form['admin_account']['account']['ourly_name'] = array(
    '#type' => 'item',
    '#title' => st('Username'),
    '#markup' => 'admin'
  );
  $form['admin_account']['account']['ourly_user_password'] = array(
    '#type' => 'item',
    '#title' => st('Password'),
    '#markup' => 'admin'
  );
  $form['admin_account']['override_account_informations'] = array(
    '#type' => 'checkbox',
    '#title' => t('Change my username and password.'),
  );
  $form['admin_account']['setup_account'] = array(
    '#type' => 'container',
    '#parents' => array('admin_account'),
    '#states' => array(
      'invisible' => array(
        'input[name="override_account_informations"]' => array('checked' => FALSE),
      ),
    ),
  );

  $options = array(
    '1' => st('Yes'),
    '0' => st('No'),
  );

  $form['additional_settings'] = array(
    '#type' => 'fieldset',
    '#title' => st('Additional Features'),
  );

  $form['additional_settings']['install_demo_content'] = array(
    '#type' => 'radios',
    '#title' => st('Do you want to import some demo contents?'),
    '#description' => st('Create a few default projects, categories, clients and time entries'),
    '#options' => $options,
    '#default_value' => '1',
  );

  if (drupal_is_cli()) {
    $form['additional_settings']['ourly_is_demo'] = array(
      '#title' => st('Demo users'),
      '#type' => 'radios',
      '#options' => $options,
      '#default_value' => 0,
    );

    array_unshift($form['#submit'], 'open_hourglass_is_demo');
  }

  if (!drupal_is_cli()) {
    // Make a "copy" of the original name and pass form fields.
    $form['admin_account']['setup_account']['account']['name'] = $form['admin_account']['account']['name'];
    $form['admin_account']['setup_account']['account']['pass'] = $form['admin_account']['account']['pass'];
    $form['admin_account']['setup_account']['account']['pass']['#value'] = array('pass1' => 'admin', 'pass2' => 'admin');

    // Use "admin" as the default username.
    $form['admin_account']['account']['name']['#access'] = FALSE;

    // Make the password "hidden".
    $form['admin_account']['account']['pass']['#type'] = 'hidden';
    $form['admin_account']['account']['mail']['#access'] = FALSE;

    // Add a custom validation that needs to be trigger before the original one,
    // where we can copy the site's mail as the admin account's mail.
    array_unshift($form['#validate'], 'open_hourglass_custom_setting');
  }

  // Custom submission function to decide if we need to install demo content.
  array_unshift($form['#submit'], 'open_hourglass_demo_content');
}

/**
 * Validate callback; Populate the admin account mail, user and password with
 * custom values.
 */
function open_hourglass_custom_setting(&$form, &$form_state) {
  $form_state['values']['account']['mail'] = $form_state['values']['site_mail'];
  // Use our custom values only the corresponding checkbox is checked.
  if ($form_state['values']['override_account_informations'] == TRUE) {
    if ($form_state['input']['pass']['pass1'] == $form_state['input']['pass']['pass2']) {
      $form_state['values']['account']['name'] = $form_state['values']['name'];
      $form_state['values']['account']['pass'] = $form_state['input']['pass']['pass1'];
    }
    else {
      form_set_error('pass', st('The specified passwords do not match.'));
    }
  }
}

/**
 * Submission callback; store the demo content information in a varaible.
 * @param $form
 * @param $form_state
 */
function open_hourglass_demo_content(&$form, &$form_state) {
  variable_set('open_hourglass_demo_content', $form_state['values']['install_demo_content']);
}

/**
 * Submission callback; only for setting site as demo
 * @param $form
 * @param $form_state
 */
function open_hourglass_is_demo(&$form, &$form_state) {
  variable_set('ourly_is_demo', $form_state['values']['ourly_is_demo']);
}
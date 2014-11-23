<?php
/**
 * @file
 * open_hourglass_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function open_hourglass_config_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: project manager.
  $roles['project manager'] = array(
    'name' => 'project manager',
    'weight' => 2,
  );

  return $roles;
}

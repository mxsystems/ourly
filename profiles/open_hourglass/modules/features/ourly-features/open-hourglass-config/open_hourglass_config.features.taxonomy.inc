<?php
/**
 * @file
 * open_hourglass_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function open_hourglass_config_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => 'Category',
      'machine_name' => 'category',
      'description' => 'Work category for a time entry, this taxonomy list will be set up by the admin user of the site.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'client' => array(
      'name' => 'Client',
      'machine_name' => 'client',
      'description' => 'The name of the client',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

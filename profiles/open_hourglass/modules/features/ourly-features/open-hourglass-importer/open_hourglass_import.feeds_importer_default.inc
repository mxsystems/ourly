<?php
/**
 * @file
 * open_hourglass_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function open_hourglass_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'project_importer';
  $feeds_importer->config = array(
    'name' => 'Project importer',
    'description' => 'Import project from external sources',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_project_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'hours',
            'target' => 'field_project_budgeted_hours',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'rate',
            'target' => 'field_project_billing_rate',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'budget',
            'target' => 'field_project_total_budget',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'client',
            'target' => 'field_project_client',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'project',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['project_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'time_entry_importer';
  $feeds_importer->config = array(
    'name' => 'Time Entry Importer',
    'description' => 'Import time entries from various projects',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'date',
            'target' => 'field_time_entry_date:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'category',
            'target' => 'field_time_entry_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'time',
            'target' => 'field_time_entry_time_spent',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'field_time_entry_note',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'user',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'project',
            'target' => 'field_time_entry_project:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'time_entry',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['time_entry_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_importer';
  $feeds_importer->config = array(
    'name' => 'User importer',
    'description' => 'Import users into the system that can perform time entry',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          4 => '4',
          3 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'username',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'fname',
            'target' => 'field_user_name:given',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'lname',
            'target' => 'field_user_name:family',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'phone',
            'target' => 'field_user_phone',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'rate',
            'target' => 'field_user_rate',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['user_importer'] = $feeds_importer;

  return $export;
}

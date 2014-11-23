<?php
/**
 * @file
 * open_hourglass_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function open_hourglass_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = '';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-help' => array(
          'module' => 'menu',
          'delta' => 'menu-help',
          'region' => 'extra',
          'weight' => '-10',
        ),
        'menu-menu-support' => array(
          'module' => 'menu',
          'delta' => 'menu-support',
          'region' => 'extra',
          'weight' => '-9',
        ),
        'boxes-copyright' => array(
          'module' => 'boxes',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  $export['site_wide'] = $context;

  return $export;
}

<?php
/**
 * @file
 * open_hourglass_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function open_hourglass_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-help.
  $menus['menu-help'] = array(
    'menu_name' => 'menu-help',
    'title' => 'Help',
    'description' => 'Footer menu for help',
  );
  // Exported menu: menu-manage.
  $menus['menu-manage'] = array(
    'menu_name' => 'menu-manage',
    'title' => 'Manage',
    'description' => '',
  );
  // Exported menu: menu-reports.
  $menus['menu-reports'] = array(
    'menu_name' => 'menu-reports',
    'title' => 'Reports',
    'description' => '',
  );
  // Exported menu: menu-support.
  $menus['menu-support'] = array(
    'menu_name' => 'menu-support',
    'title' => 'Support',
    'description' => 'Support menu on the footer',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu for help');
  t('Help');
  t('Main menu');
  t('Manage');
  t('Reports');
  t('Support');
  t('Support menu on the footer');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}

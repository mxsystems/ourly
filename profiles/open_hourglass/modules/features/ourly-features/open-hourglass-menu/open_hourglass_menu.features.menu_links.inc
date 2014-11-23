<?php
/**
 * @file
 * open_hourglass_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function open_hourglass_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'bootstrap_icon' => 'home',
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_monthly-overview:report/monthly
  $menu_links['main-menu_monthly-overview:report/monthly'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'report/monthly',
    'router_path' => 'report',
    'link_title' => 'Monthly Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_monthly-overview:report/monthly',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_reports:report',
  );
  // Exported menu link: main-menu_my-time:my-time-entries
  $menu_links['main-menu_my-time:my-time-entries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-time-entries',
    'router_path' => 'my-time-entries',
    'link_title' => 'My Time',
    'options' => array(
      'bootstrap_icon' => 'time',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-time:my-time-entries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_projects:projects
  $menu_links['main-menu_projects:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(
      'bootstrap_icon' => 'th',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_projects:projects',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_reports:report
  $menu_links['main-menu_reports:report'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'report',
    'router_path' => 'report',
    'link_title' => 'Reports',
    'options' => array(
      'bootstrap_icon' => 'signal',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_reports:report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_weekly-overview:report/weekly
  $menu_links['main-menu_weekly-overview:report/weekly'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'report/weekly',
    'router_path' => 'report',
    'link_title' => 'Weekly Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_weekly-overview:report/weekly',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_reports:report',
  );

  // Exported menu link: main-menu_help:help
  $menu_links['main-menu_help:help'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'help',
    'router_path' => 'help',
    'link_title' => 'Help',
    'options' => array(
      'bootstrap_icon' => 'question',
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_help:help',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-manage_category:admin/structure/taxonomy/category
  $menu_links['menu-manage_category:admin/structure/taxonomy/category'] = array(
    'menu_name' => 'menu-manage',
    'link_path' => 'admin/structure/taxonomy/category',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Category',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-manage_category:admin/structure/taxonomy/category',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-manage_client:admin/structure/taxonomy/client
  $menu_links['menu-manage_client:admin/structure/taxonomy/client'] = array(
    'menu_name' => 'menu-manage',
    'link_path' => 'admin/structure/taxonomy/client',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Client',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-manage_client:admin/structure/taxonomy/client',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-manage_projects:admin/manage/project
  $menu_links['menu-manage_projects:admin/manage/project'] = array(
    'menu_name' => 'menu-manage',
    'link_path' => 'admin/manage/project',
    'router_path' => 'admin/manage/project',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-manage_projects:admin/manage/project',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-manage_time-entries:admin/manage/time-entry
  $menu_links['menu-manage_time-entries:admin/manage/time-entry'] = array(
    'menu_name' => 'menu-manage',
    'link_path' => 'admin/manage/time-entry',
    'router_path' => 'admin/manage/time-entry',
    'link_title' => 'Time entries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-manage_time-entries:admin/manage/time-entry',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-manage_users:admin/people
  $menu_links['menu-manage_users:admin/people'] = array(
    'menu_name' => 'menu-manage',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-manage_users:admin/people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Client');
  t('Home');
  t('Monthly Overview');
  t('My Time');
  t('Projects');
  t('Reports');
  t('Time entries');
  t('Users');
  t('Weekly Overview');


  return $menu_links;
}

<?php
/**
 * @file
 * texvox_content_manager_and_permission.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function texvox_content_manager_and_permission_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: navigation_article:node/add/article
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_screen-menu:node/add/screen-menu
  $menu_links['navigation_screen-menu:node/add/screen-menu'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/screen-menu',
    'router_path' => 'node/add/screen-menu',
    'link_title' => 'Screen Menu',
    'options' => array(
      'identifier' => 'navigation_screen-menu:node/add/screen-menu',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_screen:node/add/screen
  $menu_links['navigation_screen:node/add/screen'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/screen',
    'router_path' => 'node/add/screen',
    'link_title' => 'Screen',
    'options' => array(
      'identifier' => 'navigation_screen:node/add/screen',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Article');
  t('Basic page');
  t('Navigation');
  t('Screen');
  t('Screen Menu');


  return $menu_links;
}

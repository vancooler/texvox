<?php
/**
 * @file
 * texvox_api_authentication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function texvox_api_authentication_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menus|node|screen_menu|form';
  $field_group->group_name = 'group_menus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Menu Form',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-menus field-group-tabs',
      ),
    ),
  );
  $export['group_menus|node|screen_menu|form'] = $field_group;

  return $export;
}

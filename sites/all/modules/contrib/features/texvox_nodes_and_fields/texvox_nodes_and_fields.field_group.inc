<?php
/**
 * @file
 * texvox_nodes_and_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function texvox_nodes_and_fields_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|ivr|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ivr';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ivr_form';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_branch',
      1 => 'field_ivr_type',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basic|node|ivr|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|screen|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_screen_type',
      1 => 'field_title_in_multi_languages',
      2 => 'field_subtitle_in_multi_language',
      3 => 'field_screen_code',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basic Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ivr_form|node|ivr|form';
  $field_group->group_name = 'group_ivr_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ivr';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'IVR form',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_screens',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-ivr-form field-group-htabs',
      ),
    ),
  );
  $export['group_ivr_form|node|ivr|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menus|node|screen|form';
  $field_group->group_name = 'group_menus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Menus',
    'weight' => '2',
    'children' => array(
      0 => 'field_menu',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_menus|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screen_form|node|screen|form';
  $field_group->group_name = 'group_screen_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Screen Form',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_menus',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_screen_form|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screens|node|ivr|form';
  $field_group->group_name = 'group_screens';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ivr';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ivr_form';
  $field_group->data = array(
    'label' => 'Screens',
    'weight' => '2',
    'children' => array(
      0 => 'field_ivr_screen',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-screens field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_screens|node|ivr|form'] = $field_group;

  return $export;
}

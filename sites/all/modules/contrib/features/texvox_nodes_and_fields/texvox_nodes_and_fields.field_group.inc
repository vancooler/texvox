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
  $field_group->identifier = 'group_basic|field_collection_item|field_menu|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_menu';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_key',
      1 => 'field_menu_type',
      2 => 'field_action',
      3 => 'field_go_to_screen',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|field_collection_item|field_menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|branch|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'branch';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_branch';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '10',
    'children' => array(
      0 => 'field_logo',
      1 => 'field_phone_number',
      2 => 'field_organization',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|branch|form'] = $field_group;

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
      1 => 'field_ivr_working_time',
      2 => 'field_ivr_type',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
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
      1 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branch|node|branch|form';
  $field_group->group_name = 'group_branch';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'branch';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Branch Form',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_location',
      2 => 'group_opening_hours',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-branch field-group-tabs',
      ),
    ),
  );
  $export['group_branch|node|branch|form'] = $field_group;

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
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_ivr_form|node|ivr|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|branch|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'branch';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_branch';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '11',
    'children' => array(
      0 => 'field_location',
      1 => 'field_timezone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|branch|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_menu',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_menus|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menu|field_collection_item|field_menu|form';
  $field_group->group_name = 'group_menu';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Menu Form',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_title',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-menu field-group-tabs',
      ),
    ),
  );
  $export['group_menu|field_collection_item|field_menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opening_hours|node|branch|form';
  $field_group->group_name = 'group_opening_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'branch';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_branch';
  $field_group->data = array(
    'label' => 'Opening hours',
    'weight' => '12',
    'children' => array(
      0 => 'field_opening_ivr',
      1 => 'field_close_ivr',
      2 => 'field_opening_hours',
      3 => 'field_holidays',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-opening-hours field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_opening_hours|node|branch|form'] = $field_group;

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
      2 => 'group_title',
      3 => 'group_subtitle',
    ),
    'format_type' => 'tabs',
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
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_screens|node|ivr|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subtitle|node|screen|form';
  $field_group->group_name = 'group_subtitle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Subtitle in multi-languages',
    'weight' => '3',
    'children' => array(
      0 => 'field_subtitle_in_multi_language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-subtitle field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_subtitle|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|field_collection_item|field_menu|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_menu';
  $field_group->data = array(
    'label' => 'Title in multi-languages',
    'weight' => '7',
    'children' => array(
      0 => 'field_title_in_multi_languages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-title field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title|field_collection_item|field_menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|screen|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Title in multi-languages',
    'weight' => '2',
    'children' => array(
      0 => 'field_title_in_multi_languages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title|node|screen|form'] = $field_group;

  return $export;
}

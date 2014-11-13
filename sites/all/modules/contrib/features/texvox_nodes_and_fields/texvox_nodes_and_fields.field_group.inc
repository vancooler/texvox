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
      0 => 'field_organization',
      1 => 'field_search_base',
      2 => 'field_phone_numbers',
      3 => 'field_rgbhex',
      4 => 'field_default_ivr',
      5 => 'title',
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
      0 => 'field_ivr_working_time',
      1 => 'field_ivr_type',
      2 => 'field_only_for_organization',
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
  $field_group->identifier = 'group_basic|node|screen_menu|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_menus';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'field_menu_type',
      2 => 'field_action',
      3 => 'field_go_to_screen',
      4 => 'field_description',
      5 => 'field_set_language',
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
  $export['group_basic|node|screen_menu|form'] = $field_group;

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
      0 => 'title_field',
      1 => 'field_screen_type',
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
  $field_group->identifier = 'group_body_text|node|screen|form';
  $field_group->group_name = 'group_body_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Body Text in multi-languages',
    'weight' => '5',
    'children' => array(
      0 => 'field_bodytext_in_multi_language',
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
  $export['group_body_text|node|screen|form'] = $field_group;

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
      3 => 'group_holiday',
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
  $field_group->identifier = 'group_delay|node|screen_menu|form';
  $field_group->group_name = 'group_delay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_menus';
  $field_group->data = array(
    'label' => 'Action Delay',
    'weight' => '3',
    'children' => array(
      0 => 'field_action_delay_time',
      1 => 'field_action_delay_screen_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-delay field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_delay|node|screen_menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delay|node|screen|form';
  $field_group->group_name = 'group_delay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Delay Settings',
    'weight' => '8',
    'children' => array(
      0 => 'field_display_delay',
      1 => 'field_prelude_screen_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-delay field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_delay|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_screen_details|node|screen|form';
  $field_group->group_name = 'group_display_screen_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_display_screen';
  $field_group->data = array(
    'label' => 'Display Screen Details',
    'weight' => '40',
    'children' => array(
      0 => 'group_title',
      1 => 'group_subtitle',
      2 => 'group_body_text',
      3 => 'group_image',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_display_screen_details|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display_title|node|screen_menu|form';
  $field_group->group_name = 'group_display_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_menus';
  $field_group->data = array(
    'label' => 'Display Title',
    'weight' => '2',
    'children' => array(
      0 => 'field_title_in_multi_languages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-display-title field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_display_title|node|screen_menu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_holiday|node|branch|form';
  $field_group->group_name = 'group_holiday';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'branch';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_branch';
  $field_group->data = array(
    'label' => 'Holidays',
    'weight' => '13',
    'children' => array(
      0 => 'field_holiday',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-holiday field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_holiday|node|branch|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|screen|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '6',
    'children' => array(
      0 => 'field_display_image',
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
  $export['group_image|node|screen|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_input_screen|node|screen|form';
  $field_group->group_name = 'group_input_screen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'Input Screen',
    'weight' => '7',
    'children' => array(
      0 => 'field_input_count',
      1 => 'field_end_key',
      2 => 'field_verify_input',
      3 => 'field_verify_options',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-input-screen field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_input_screen|node|screen|form'] = $field_group;

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
  $field_group->identifier = 'group_menus|node|screen_menu|form';
  $field_group->group_name = 'group_menus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen_menu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Menu Form',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_display_title',
      2 => 'group_delay',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-menus field-group-tabs',
      ),
    ),
  );
  $export['group_menus|node|screen_menu|form'] = $field_group;

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
      0 => 'field_menus',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Menus',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
  $field_group->identifier = 'group_no_input|node|screen|form';
  $field_group->group_name = 'group_no_input';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'screen';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_screen_form';
  $field_group->data = array(
    'label' => 'No Input Settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_no_input_delay',
      1 => 'field_no_input_goto_screen',
      2 => 'field_no_input_action',
      3 => 'field_no_input_language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-no-input field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_no_input|node|screen|form'] = $field_group;

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
    'label' => 'Timeslots',
    'weight' => '12',
    'children' => array(
      0 => 'field_timeslots',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Timeslots',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-opening-hours field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
      4 => 'group_delay',
      5 => 'group_no_input',
      6 => 'group_body_text',
      7 => 'group_input_screen',
      8 => 'group_image',
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
      1 => 'field_default_screen',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Screens',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_subtitle_in_multi_language',
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
    'weight' => '3',
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

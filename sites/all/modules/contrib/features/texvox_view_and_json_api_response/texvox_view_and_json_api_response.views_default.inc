<?php
/**
 * @file
 * texvox_view_and_json_api_response.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function texvox_view_and_json_api_response_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'new_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'new content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All nodes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Node Type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: IVR Screen */
  $handler->display->display_options['fields']['field_ivr_screen']['id'] = 'field_ivr_screen';
  $handler->display->display_options['fields']['field_ivr_screen']['table'] = 'field_data_field_ivr_screen';
  $handler->display->display_options['fields']['field_ivr_screen']['field'] = 'field_ivr_screen';
  $handler->display->display_options['fields']['field_ivr_screen']['label'] = 'Screens in this IVR';
  $handler->display->display_options['fields']['field_ivr_screen']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ivr_screen']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_ivr_screen']['settings'] = array(
    'view_mode' => 'full',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_ivr_screen']['delta_offset'] = '0';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = 'Logo Thumbnail';
  $handler->display->display_options['fields']['field_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = 'Street1';
  $handler->display->display_options['fields']['street']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: Additional */
  $handler->display->display_options['fields']['additional']['id'] = 'additional';
  $handler->display->display_options['fields']['additional']['table'] = 'location';
  $handler->display->display_options['fields']['additional']['field'] = 'additional';
  $handler->display->display_options['fields']['additional']['label'] = 'Street2';
  $handler->display->display_options['fields']['additional']['hide_empty'] = TRUE;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['hide_empty'] = TRUE;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['hide_empty'] = TRUE;
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = TRUE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = 'lat';
  $handler->display->display_options['fields']['latitude']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = 'lon';
  $handler->display->display_options['fields']['longitude']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Screen Type */
  $handler->display->display_options['fields']['field_screen_type']['id'] = 'field_screen_type';
  $handler->display->display_options['fields']['field_screen_type']['table'] = 'field_data_field_screen_type';
  $handler->display->display_options['fields']['field_screen_type']['field'] = 'field_screen_type';
  $handler->display->display_options['fields']['field_screen_type']['hide_empty'] = TRUE;
  /* Field: Content: rgbHEX */
  $handler->display->display_options['fields']['field_rgbhex']['id'] = 'field_rgbhex';
  $handler->display->display_options['fields']['field_rgbhex']['table'] = 'field_data_field_rgbhex';
  $handler->display->display_options['fields']['field_rgbhex']['field'] = 'field_rgbhex';
  $handler->display->display_options['fields']['field_rgbhex']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_rgbhex']['type'] = 'colorfield_raw_rgb';
  $handler->display->display_options['fields']['field_rgbhex']['group_column'] = 'value';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Phone Numbers */
  $handler->display->display_options['fields']['field_phone_numbers']['id'] = 'field_phone_numbers';
  $handler->display->display_options['fields']['field_phone_numbers']['table'] = 'field_data_field_phone_numbers';
  $handler->display->display_options['fields']['field_phone_numbers']['field'] = 'field_phone_numbers';
  $handler->display->display_options['fields']['field_phone_numbers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone_numbers']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_phone_numbers']['delta_limit'] = '';
  $handler->display->display_options['fields']['field_phone_numbers']['delta_offset'] = '0';
  /* Field: Content: Branch Type */
  $handler->display->display_options['fields']['field_branch_type']['id'] = 'field_branch_type';
  $handler->display->display_options['fields']['field_branch_type']['table'] = 'field_data_field_branch_type';
  $handler->display->display_options['fields']['field_branch_type']['field'] = 'field_branch_type';
  $handler->display->display_options['fields']['field_branch_type']['hide_empty'] = TRUE;
  /* Field: Content: Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['hide_empty'] = TRUE;
  /* Field: Content: Search Base */
  $handler->display->display_options['fields']['field_search_base']['id'] = 'field_search_base';
  $handler->display->display_options['fields']['field_search_base']['table'] = 'field_data_field_search_base';
  $handler->display->display_options['fields']['field_search_base']['field'] = 'field_search_base';
  $handler->display->display_options['fields']['field_search_base']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_title_in_multi_languages']['id'] = 'field_title_in_multi_languages';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['table'] = 'field_data_field_title_in_multi_languages';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['field'] = 'field_title_in_multi_languages';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['label'] = 'ScreenName';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title_in_multi_languages']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'diff_standard',
  );
  $handler->display->display_options['fields']['field_title_in_multi_languages']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['multi_type'] = 'ol';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['id'] = 'field_subtitle_in_multi_language';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['table'] = 'field_data_field_subtitle_in_multi_language';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['field'] = 'field_subtitle_in_multi_language';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['label'] = 'HeaderText';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['separator'] = '';
  /* Field: Content: Body Text */
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['id'] = 'field_bodytext_in_multi_language';
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['table'] = 'field_data_field_bodytext_in_multi_language';
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['field'] = 'field_bodytext_in_multi_language';
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['label'] = 'BodyText';
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bodytext_in_multi_language']['multi_type'] = 'ol';
  /* Field: Content: Menus */
  $handler->display->display_options['fields']['field_menus']['id'] = 'field_menus';
  $handler->display->display_options['fields']['field_menus']['table'] = 'field_data_field_menus';
  $handler->display->display_options['fields']['field_menus']['field'] = 'field_menus';
  $handler->display->display_options['fields']['field_menus']['label'] = 'Menus in this screen';
  $handler->display->display_options['fields']['field_menus']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_menus']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_menus']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_menus']['delta_offset'] = '0';
  /* Field: Content: Action */
  $handler->display->display_options['fields']['field_action']['id'] = 'field_action';
  $handler->display->display_options['fields']['field_action']['table'] = 'field_data_field_action';
  $handler->display->display_options['fields']['field_action']['field'] = 'field_action';
  $handler->display->display_options['fields']['field_action']['hide_empty'] = TRUE;
  /* Field: Content: Go To Screen */
  $handler->display->display_options['fields']['field_go_to_screen']['id'] = 'field_go_to_screen';
  $handler->display->display_options['fields']['field_go_to_screen']['table'] = 'field_data_field_go_to_screen';
  $handler->display->display_options['fields']['field_go_to_screen']['field'] = 'field_go_to_screen';
  $handler->display->display_options['fields']['field_go_to_screen']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_go_to_screen']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_go_to_screen']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Default Screen */
  $handler->display->display_options['fields']['field_default_screen']['id'] = 'field_default_screen';
  $handler->display->display_options['fields']['field_default_screen']['table'] = 'field_data_field_default_screen';
  $handler->display->display_options['fields']['field_default_screen']['field'] = 'field_default_screen';
  $handler->display->display_options['fields']['field_default_screen']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_default_screen']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_default_screen']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Timeslots */
  $handler->display->display_options['fields']['field_timeslots']['id'] = 'field_timeslots';
  $handler->display->display_options['fields']['field_timeslots']['table'] = 'field_data_field_timeslots';
  $handler->display->display_options['fields']['field_timeslots']['field'] = 'field_timeslots';
  $handler->display->display_options['fields']['field_timeslots']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_timeslots']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_timeslots']['delta_offset'] = '0';
  /* Field: Content: No Input Action */
  $handler->display->display_options['fields']['field_no_input_action']['id'] = 'field_no_input_action';
  $handler->display->display_options['fields']['field_no_input_action']['table'] = 'field_data_field_no_input_action';
  $handler->display->display_options['fields']['field_no_input_action']['field'] = 'field_no_input_action';
  $handler->display->display_options['fields']['field_no_input_action']['hide_empty'] = TRUE;
  /* Field: Content: No Input Language */
  $handler->display->display_options['fields']['field_no_input_language']['id'] = 'field_no_input_language';
  $handler->display->display_options['fields']['field_no_input_language']['table'] = 'field_data_field_no_input_language';
  $handler->display->display_options['fields']['field_no_input_language']['field'] = 'field_no_input_language';
  $handler->display->display_options['fields']['field_no_input_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_no_input_language']['settings'] = array(
    'format' => array(
      'iso' => 'iso',
      'name' => 0,
      'name_native' => 0,
    ),
  );
  /* Field: Content: Input Count */
  $handler->display->display_options['fields']['field_input_count']['id'] = 'field_input_count';
  $handler->display->display_options['fields']['field_input_count']['table'] = 'field_data_field_input_count';
  $handler->display->display_options['fields']['field_input_count']['field'] = 'field_input_count';
  $handler->display->display_options['fields']['field_input_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_input_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Display Image */
  $handler->display->display_options['fields']['field_display_image']['id'] = 'field_display_image';
  $handler->display->display_options['fields']['field_display_image']['table'] = 'field_data_field_display_image';
  $handler->display->display_options['fields']['field_display_image']['field'] = 'field_display_image';
  $handler->display->display_options['fields']['field_display_image']['label'] = 'Image URL';
  $handler->display->display_options['fields']['field_display_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_display_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_display_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: End Key */
  $handler->display->display_options['fields']['field_end_key']['id'] = 'field_end_key';
  $handler->display->display_options['fields']['field_end_key']['table'] = 'field_data_field_end_key';
  $handler->display->display_options['fields']['field_end_key']['field'] = 'field_end_key';
  $handler->display->display_options['fields']['field_end_key']['hide_empty'] = TRUE;
  /* Field: Content: No Input Delay */
  $handler->display->display_options['fields']['field_no_input_delay']['id'] = 'field_no_input_delay';
  $handler->display->display_options['fields']['field_no_input_delay']['table'] = 'field_data_field_no_input_delay';
  $handler->display->display_options['fields']['field_no_input_delay']['field'] = 'field_no_input_delay';
  $handler->display->display_options['fields']['field_no_input_delay']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_no_input_delay']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: No Input Goto Screen */
  $handler->display->display_options['fields']['field_no_input_goto_screen']['id'] = 'field_no_input_goto_screen';
  $handler->display->display_options['fields']['field_no_input_goto_screen']['table'] = 'field_data_field_no_input_goto_screen';
  $handler->display->display_options['fields']['field_no_input_goto_screen']['field'] = 'field_no_input_goto_screen';
  $handler->display->display_options['fields']['field_no_input_goto_screen']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_no_input_goto_screen']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_no_input_goto_screen']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Holiday */
  $handler->display->display_options['fields']['field_holiday']['id'] = 'field_holiday';
  $handler->display->display_options['fields']['field_holiday']['table'] = 'field_data_field_holiday';
  $handler->display->display_options['fields']['field_holiday']['field'] = 'field_holiday';
  $handler->display->display_options['fields']['field_holiday']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_holiday']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_holiday']['delta_offset'] = '0';
  /* Field: Content: Default IVR */
  $handler->display->display_options['fields']['field_default_ivr']['id'] = 'field_default_ivr';
  $handler->display->display_options['fields']['field_default_ivr']['table'] = 'field_data_field_default_ivr';
  $handler->display->display_options['fields']['field_default_ivr']['field'] = 'field_default_ivr';
  $handler->display->display_options['fields']['field_default_ivr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_default_ivr']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_default_ivr']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Verify Input */
  $handler->display->display_options['fields']['field_verify_input']['id'] = 'field_verify_input';
  $handler->display->display_options['fields']['field_verify_input']['table'] = 'field_data_field_verify_input';
  $handler->display->display_options['fields']['field_verify_input']['field'] = 'field_verify_input';
  $handler->display->display_options['fields']['field_verify_input']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_verify_input']['type'] = 'list_key';
  /* Field: Content: Default Screen */
  $handler->display->display_options['fields']['field_default_screen_1']['id'] = 'field_default_screen_1';
  $handler->display->display_options['fields']['field_default_screen_1']['table'] = 'field_data_field_default_screen';
  $handler->display->display_options['fields']['field_default_screen_1']['field'] = 'field_default_screen';
  $handler->display->display_options['fields']['field_default_screen_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_default_screen_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_default_screen_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Set Language */
  $handler->display->display_options['fields']['field_set_language']['id'] = 'field_set_language';
  $handler->display->display_options['fields']['field_set_language']['table'] = 'field_data_field_set_language';
  $handler->display->display_options['fields']['field_set_language']['field'] = 'field_set_language';
  $handler->display->display_options['fields']['field_set_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_set_language']['settings'] = array(
    'format' => array(
      'iso' => 'iso',
      'name' => 0,
      'name_native' => 0,
    ),
  );
  /* Field: Content: Action Delay Screen Code */
  $handler->display->display_options['fields']['field_action_delay_screen_code']['id'] = 'field_action_delay_screen_code';
  $handler->display->display_options['fields']['field_action_delay_screen_code']['table'] = 'field_data_field_action_delay_screen_code';
  $handler->display->display_options['fields']['field_action_delay_screen_code']['field'] = 'field_action_delay_screen_code';
  $handler->display->display_options['fields']['field_action_delay_screen_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_action_delay_screen_code']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_action_delay_screen_code']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Action Delay Time */
  $handler->display->display_options['fields']['field_action_delay_time']['id'] = 'field_action_delay_time';
  $handler->display->display_options['fields']['field_action_delay_time']['table'] = 'field_data_field_action_delay_time';
  $handler->display->display_options['fields']['field_action_delay_time']['field'] = 'field_action_delay_time';
  $handler->display->display_options['fields']['field_action_delay_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_action_delay_time']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Input Action */
  $handler->display->display_options['fields']['field_input_action']['id'] = 'field_input_action';
  $handler->display->display_options['fields']['field_input_action']['table'] = 'field_data_field_input_action';
  $handler->display->display_options['fields']['field_input_action']['field'] = 'field_input_action';
  $handler->display->display_options['fields']['field_input_action']['hide_empty'] = TRUE;
  /* Field: Content: Input Goto Screen */
  $handler->display->display_options['fields']['field_input_goto_screen']['id'] = 'field_input_goto_screen';
  $handler->display->display_options['fields']['field_input_goto_screen']['table'] = 'field_data_field_input_goto_screen';
  $handler->display->display_options['fields']['field_input_goto_screen']['field'] = 'field_input_goto_screen';
  $handler->display->display_options['fields']['field_input_goto_screen']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_input_goto_screen']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_input_goto_screen']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Input Language */
  $handler->display->display_options['fields']['field_input_language']['id'] = 'field_input_language';
  $handler->display->display_options['fields']['field_input_language']['table'] = 'field_data_field_input_language';
  $handler->display->display_options['fields']['field_input_language']['field'] = 'field_input_language';
  $handler->display->display_options['fields']['field_input_language']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_input_language']['settings'] = array(
    'format' => array(
      'iso' => 'iso',
      'name' => 0,
      'name_native' => 0,
    ),
  );
  /* Field: Content: Default Language */
  $handler->display->display_options['fields']['field_default_language_for_ivr']['id'] = 'field_default_language_for_ivr';
  $handler->display->display_options['fields']['field_default_language_for_ivr']['table'] = 'field_data_field_default_language_for_ivr';
  $handler->display->display_options['fields']['field_default_language_for_ivr']['field'] = 'field_default_language_for_ivr';
  $handler->display->display_options['fields']['field_default_language_for_ivr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_default_language_for_ivr']['settings'] = array(
    'format' => array(
      'iso' => 'iso',
      'name' => 0,
      'name_native' => 0,
    ),
  );
  /* Field: Content: Timezone */
  $handler->display->display_options['fields']['field_timezone_custom']['id'] = 'field_timezone_custom';
  $handler->display->display_options['fields']['field_timezone_custom']['table'] = 'field_data_field_timezone_custom';
  $handler->display->display_options['fields']['field_timezone_custom']['field'] = 'field_timezone_custom';
  $handler->display->display_options['fields']['field_timezone_custom']['hide_empty'] = TRUE;
  /* Field: Content: Key */
  $handler->display->display_options['fields']['field_menu_key_new']['id'] = 'field_menu_key_new';
  $handler->display->display_options['fields']['field_menu_key_new']['table'] = 'field_data_field_menu_key_new';
  $handler->display->display_options['fields']['field_menu_key_new']['field'] = 'field_menu_key_new';
  $handler->display->display_options['fields']['field_menu_key_new']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_menu_key_new']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_menu_key_new']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Input Text */
  $handler->display->display_options['fields']['field_input_text']['id'] = 'field_input_text';
  $handler->display->display_options['fields']['field_input_text']['table'] = 'field_data_field_input_text';
  $handler->display->display_options['fields']['field_input_text']['field'] = 'field_input_text';
  $handler->display->display_options['fields']['field_input_text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_input_text']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_input_text']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_input_text']['multi_type'] = 'ul';
  /* Field: Content: Display Delay */
  $handler->display->display_options['fields']['field_display_delay']['id'] = 'field_display_delay';
  $handler->display->display_options['fields']['field_display_delay']['table'] = 'field_data_field_display_delay';
  $handler->display->display_options['fields']['field_display_delay']['field'] = 'field_display_delay';
  $handler->display->display_options['fields']['field_display_delay']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_display_delay']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Prelude Screen Code */
  $handler->display->display_options['fields']['field_prelude_screen_code']['id'] = 'field_prelude_screen_code';
  $handler->display->display_options['fields']['field_prelude_screen_code']['table'] = 'field_data_field_prelude_screen_code';
  $handler->display->display_options['fields']['field_prelude_screen_code']['field'] = 'field_prelude_screen_code';
  $handler->display->display_options['fields']['field_prelude_screen_code']['label'] = 'Prelude Screen ID';
  $handler->display->display_options['fields']['field_prelude_screen_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prelude_screen_code']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_prelude_screen_code']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Mute Microphone */
  $handler->display->display_options['fields']['field_mute_microphone']['id'] = 'field_mute_microphone';
  $handler->display->display_options['fields']['field_mute_microphone']['table'] = 'field_data_field_mute_microphone';
  $handler->display->display_options['fields']['field_mute_microphone']['field'] = 'field_mute_microphone';
  $handler->display->display_options['fields']['field_mute_microphone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_mute_microphone']['hide_alter_empty'] = FALSE;
  /* Field: Content: Used for Branches */
  $handler->display->display_options['fields']['field_used_for_branches']['id'] = 'field_used_for_branches';
  $handler->display->display_options['fields']['field_used_for_branches']['table'] = 'field_data_field_used_for_branches';
  $handler->display->display_options['fields']['field_used_for_branches']['field'] = 'field_used_for_branches';
  $handler->display->display_options['fields']['field_used_for_branches']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_used_for_branches']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_used_for_branches']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_used_for_branches']['delta_offset'] = '0';
  /* Field: Content: Variants */
  $handler->display->display_options['fields']['field_variants']['id'] = 'field_variants';
  $handler->display->display_options['fields']['field_variants']['table'] = 'field_data_field_variants';
  $handler->display->display_options['fields']['field_variants']['field'] = 'field_variants';
  $handler->display->display_options['fields']['field_variants']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_variants']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_variants']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-nodes';
  $export['new_content'] = $view;

  return $export;
}

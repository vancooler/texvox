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
  /* Field: Content: IVR Screen */
  $handler->display->display_options['fields']['field_ivr_screen']['id'] = 'field_ivr_screen';
  $handler->display->display_options['fields']['field_ivr_screen']['table'] = 'field_data_field_ivr_screen';
  $handler->display->display_options['fields']['field_ivr_screen']['field'] = 'field_ivr_screen';
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
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo_1']['id'] = 'field_logo_1';
  $handler->display->display_options['fields']['field_logo_1']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo_1']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo_1']['label'] = 'Logo Wallpaper';
  $handler->display->display_options['fields']['field_logo_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = 'Street1';
  $handler->display->display_options['fields']['street']['hide_empty'] = TRUE;
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
  /* Field: Content: Timezone */
  $handler->display->display_options['fields']['field_timezone']['id'] = 'field_timezone';
  $handler->display->display_options['fields']['field_timezone']['table'] = 'field_data_field_timezone';
  $handler->display->display_options['fields']['field_timezone']['field'] = 'field_timezone';
  $handler->display->display_options['fields']['field_timezone']['hide_empty'] = TRUE;
  /* Field: Content: Opening Hours */
  $handler->display->display_options['fields']['field_opening_hours']['id'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['table'] = 'field_data_field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['field'] = 'field_opening_hours';
  $handler->display->display_options['fields']['field_opening_hours']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_opening_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_opening_hours']['settings'] = array(
    'showclosed' => 'all',
    'date_first_day' => '0',
    'daysformat' => 'long',
    'hoursformat' => '2',
    'compress' => 0,
    'grouped' => 0,
    'closedformat' => 'Closed',
    'separator_days' => '; ',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'hide',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
  );
  $handler->display->display_options['fields']['field_opening_hours']['delta_offset'] = '0';
  /* Field: Content: Holidays */
  $handler->display->display_options['fields']['field_holidays']['id'] = 'field_holidays';
  $handler->display->display_options['fields']['field_holidays']['table'] = 'field_data_field_holidays';
  $handler->display->display_options['fields']['field_holidays']['field'] = 'field_holidays';
  $handler->display->display_options['fields']['field_holidays']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_holidays']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_holidays']['delta_offset'] = '0';
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
  /* Field: Content: IVR Type */
  $handler->display->display_options['fields']['field_ivr_type']['id'] = 'field_ivr_type';
  $handler->display->display_options['fields']['field_ivr_type']['table'] = 'field_data_field_ivr_type';
  $handler->display->display_options['fields']['field_ivr_type']['field'] = 'field_ivr_type';
  $handler->display->display_options['fields']['field_ivr_type']['hide_empty'] = TRUE;
  /* Field: Content: IVR Working Time */
  $handler->display->display_options['fields']['field_ivr_working_time']['id'] = 'field_ivr_working_time';
  $handler->display->display_options['fields']['field_ivr_working_time']['table'] = 'field_data_field_ivr_working_time';
  $handler->display->display_options['fields']['field_ivr_working_time']['field'] = 'field_ivr_working_time';
  $handler->display->display_options['fields']['field_ivr_working_time']['hide_empty'] = TRUE;
  /* Field: Content: rgbHEX */
  $handler->display->display_options['fields']['field_rgbhex']['id'] = 'field_rgbhex';
  $handler->display->display_options['fields']['field_rgbhex']['table'] = 'field_data_field_rgbhex';
  $handler->display->display_options['fields']['field_rgbhex']['field'] = 'field_rgbhex';
  $handler->display->display_options['fields']['field_rgbhex']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_search_base']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_title_in_multi_languages']['id'] = 'field_title_in_multi_languages';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['table'] = 'field_data_field_title_in_multi_languages';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['field'] = 'field_title_in_multi_languages';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_title_in_multi_languages']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_title_in_multi_languages']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_title_in_multi_languages']['multi_type'] = 'ol';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['id'] = 'field_subtitle_in_multi_language';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['table'] = 'field_data_field_subtitle_in_multi_language';
  $handler->display->display_options['fields']['field_subtitle_in_multi_language']['field'] = 'field_subtitle_in_multi_language';
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
  $translatables['new_content'] = array(
    t('Master'),
    t('All nodes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node ID'),
    t('Node Type'),
    t('IVR Screen'),
    t('Logo Thumbnail'),
    t('Logo Wallpaper'),
    t('Street1'),
    t('Street2'),
    t('City'),
    t('Province'),
    t('Country'),
    t('Postal Code'),
    t('lat'),
    t('lon'),
    t('Timezone'),
    t('Opening Hours'),
    t('Holidays'),
    t('Updated date'),
    t('Screen Type'),
    t('IVR Type'),
    t('IVR Working Time'),
    t('rgbHEX'),
    t('Organization'),
    t('Phone Numbers'),
    t('Branch Type'),
    t('Organization Type'),
    t('Search Base'),
    t('Title'),
    t('Subtitle'),
    t('Page'),
  );
  $export['new_content'] = $view;

  return $export;
}

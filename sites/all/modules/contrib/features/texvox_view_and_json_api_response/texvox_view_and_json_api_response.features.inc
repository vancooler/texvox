<?php
/**
 * @file
 * texvox_view_and_json_api_response.features.inc
 */

/**
 * Implements hook_views_api().
 */
function texvox_view_and_json_api_response_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

<?php
/**
 * @file
 * texvox_api_authentication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function texvox_api_authentication_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

<?php
/**
 * @file
 * texvox_nodes_and_fields.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function texvox_nodes_and_fields_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tap_to_enter_text'.
  $permissions['delete terms in tap_to_enter_text'] = array(
    'name' => 'delete terms in tap_to_enter_text',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tap_to_enter_text'.
  $permissions['edit terms in tap_to_enter_text'] = array(
    'name' => 'edit terms in tap_to_enter_text',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}

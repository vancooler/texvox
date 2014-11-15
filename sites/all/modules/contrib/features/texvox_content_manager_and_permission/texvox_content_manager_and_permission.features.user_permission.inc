<?php
/**
 * @file
 * texvox_content_manager_and_permission.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function texvox_content_manager_and_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create branch content'.
  $permissions['create branch content'] = array(
    'name' => 'create branch content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ivr content'.
  $permissions['create ivr content'] = array(
    'name' => 'create ivr content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create screen content'.
  $permissions['create screen content'] = array(
    'name' => 'create screen content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create screen_menu content'.
  $permissions['create screen_menu content'] = array(
    'name' => 'create screen_menu content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any branch content'.
  $permissions['delete any branch content'] = array(
    'name' => 'delete any branch content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ivr content'.
  $permissions['delete any ivr content'] = array(
    'name' => 'delete any ivr content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any screen content'.
  $permissions['delete any screen content'] = array(
    'name' => 'delete any screen content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any screen_menu content'.
  $permissions['delete any screen_menu content'] = array(
    'name' => 'delete any screen_menu content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own branch content'.
  $permissions['delete own branch content'] = array(
    'name' => 'delete own branch content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ivr content'.
  $permissions['delete own ivr content'] = array(
    'name' => 'delete own ivr content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own screen content'.
  $permissions['delete own screen content'] = array(
    'name' => 'delete own screen content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own screen_menu content'.
  $permissions['delete own screen_menu content'] = array(
    'name' => 'delete own screen_menu content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any branch content'.
  $permissions['edit any branch content'] = array(
    'name' => 'edit any branch content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ivr content'.
  $permissions['edit any ivr content'] = array(
    'name' => 'edit any ivr content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any screen content'.
  $permissions['edit any screen content'] = array(
    'name' => 'edit any screen content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any screen_menu content'.
  $permissions['edit any screen_menu content'] = array(
    'name' => 'edit any screen_menu content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own branch content'.
  $permissions['edit own branch content'] = array(
    'name' => 'edit own branch content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ivr content'.
  $permissions['edit own ivr content'] = array(
    'name' => 'edit own ivr content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own screen content'.
  $permissions['edit own screen content'] = array(
    'name' => 'edit own screen content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own screen_menu content'.
  $permissions['edit own screen_menu content'] = array(
    'name' => 'edit own screen_menu content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}

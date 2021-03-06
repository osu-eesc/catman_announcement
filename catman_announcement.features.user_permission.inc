<?php
/**
 * @file
 * catman_announcement.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function catman_announcement_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create announcement content'.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any announcement content'.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own announcement content'.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any announcement content'.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own announcement content'.
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'set announcement published on date'.
  $permissions['set announcement published on date'] = array(
    'name' => 'set announcement published on date',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'publication_date',
  );

  return $permissions;
}

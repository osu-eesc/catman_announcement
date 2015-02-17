<?php
/**
 * @file
 * catman_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function catman_announcement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function catman_announcement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function catman_announcement_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Catman Announcement'),
      'base' => 'node_content',
      'description' => t('Use for adding announcements to the homepage and/or individual articles and pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

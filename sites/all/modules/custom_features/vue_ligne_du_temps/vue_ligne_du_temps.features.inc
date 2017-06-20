<?php
/**
 * @file
 * vue_ligne_du_temps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vue_ligne_du_temps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vue_ligne_du_temps_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vue_ligne_du_temps_node_info() {
  $items = array(
    'ligne_du_temps' => array(
      'name' => t('Ligne du temps'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

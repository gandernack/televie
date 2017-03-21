<?php
/**
 * @file
 * ct_chercheurs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_chercheurs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ct_chercheurs_node_info() {
  $items = array(
    'chercheurs' => array(
      'name' => t('Chercheurs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Catégorie'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

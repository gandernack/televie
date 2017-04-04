<?php
/**
 * @file
 * ct_a_la_une.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_a_la_une_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ct_a_la_une_node_info() {
  $items = array(
    'a_la_une' => array(
      'name' => t('A la une'),
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

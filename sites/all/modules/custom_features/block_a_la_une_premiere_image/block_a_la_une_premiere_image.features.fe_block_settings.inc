<?php
/**
 * @file
 * block_a_la_une_premiere_image.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_a_la_une_premiere_image_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-a_la_une-block_link_open'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a_la_une-block_link_open',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nrb_televie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nrb_televie',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'televie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'televie',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

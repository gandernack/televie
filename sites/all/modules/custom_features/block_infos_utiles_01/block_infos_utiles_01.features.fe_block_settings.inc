<?php
/**
 * @file
 * block_infos_utiles_01.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_infos_utiles_01_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-infos_utiles_01'] = array(
    'cache' => -1,
    'css_class' => 'slide1',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'infos_utiles_01',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'infos-utiles',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nrb_televie' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'nrb_televie',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'televie' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'televie',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}

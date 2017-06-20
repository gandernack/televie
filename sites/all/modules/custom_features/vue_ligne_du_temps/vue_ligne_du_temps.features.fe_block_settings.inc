<?php
/**
 * @file
 * vue_ligne_du_temps.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vue_ligne_du_temps_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ligne_du_temps-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ligne_du_temps-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'weight' => -25,
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
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

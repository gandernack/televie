<?php
/**
 * @file
 * block_logo.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_logo_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-logo'] = array(
    'cache' => -1,
    'css_class' => 'bloc-logo',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'soiree',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nrb_televie' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'nrb_televie',
        'weight' => -27,
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}

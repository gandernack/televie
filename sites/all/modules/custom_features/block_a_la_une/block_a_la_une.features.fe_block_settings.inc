<?php
/**
 * @file
 * block_a_la_une.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_a_la_une_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-a_la_une-block_a_la_une'] = array(
    'cache' => -1,
    'css_class' => 'event',
    'custom' => 0,
    'delta' => 'a_la_une-block_a_la_une',
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
        'weight' => -31,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
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
    'visibility' => 1,
  );

  return $export;
}

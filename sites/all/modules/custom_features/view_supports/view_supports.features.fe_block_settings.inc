<?php
/**
 * @file
 * view_supports.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function view_supports_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-facons_d_aider-block_1'] = array(
    'cache' => -1,
    'css_class' => 'blockfooterfirst-part2',
    'custom' => 0,
    'delta' => 'facons_d_aider-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nrb_televie' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'nrb_televie',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'televie' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'televie',
        'weight' => 0,
      ),
    ),
    'title' => '4 autres façons de nous aider',
    'visibility' => 0,
  );

  $export['views-facons_d_aider-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facons_d_aider-block_2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'weight' => 0,
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
    'visibility' => 0,
  );

  $export['views-facons_d_aider-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'facons_d_aider-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'weight' => 0,
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
    'visibility' => 0,
  );

  return $export;
}

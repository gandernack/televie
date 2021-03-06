<?php
/**
 * @file
 * block_prochaines_activit_s_hp.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_prochaines_activit_s_hp_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-events-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'events-block_3',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'nrb_televie',
        'weight' => -16,
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

<?php
/**
 * @file
 * block_addthis.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_addthis_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addthis-addthis_block'] = array(
    'cache' => -1,
    'css_class' => 'addthis',
    'custom' => 0,
    'delta' => 'addthis_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'addthis',
    'node_types' => array(),
    'pages' => '<front>
contactez-nous*
soiree
404',
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
        'weight' => -18,
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

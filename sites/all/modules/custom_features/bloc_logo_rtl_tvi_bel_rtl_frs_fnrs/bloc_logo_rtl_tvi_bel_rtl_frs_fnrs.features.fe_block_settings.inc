<?php
/**
 * @file
 * bloc_logo_rtl_tvi_bel_rtl_frs_fnrs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bloc_logo_rtl_tvi_bel_rtl_frs_fnrs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_second'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'footer_second',
    'module' => 'block',
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
        'region' => 'footer_second',
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
        'region' => '',
        'status' => 0,
        'theme' => 'televie',
        'weight' => 0,
      ),
    ),
    'title' => 'Télévie powered by',
    'visibility' => 0,
  );

  return $export;
}

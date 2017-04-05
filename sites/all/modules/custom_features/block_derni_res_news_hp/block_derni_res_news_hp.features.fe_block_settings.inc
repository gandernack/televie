<?php
/**
 * @file
 * block_derni_res_news_hp.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function block_derni_res_news_hp_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-articles-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'articles-block_1',
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
        'weight' => 1,
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
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

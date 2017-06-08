<?php
/**
 * @file
 * block_logo.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_logo_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'logo';
  $fe_block_boxes->body = '<div class="logo"><a href="/" tabindex="2">Televie</a></div>
';

  $export['logo'] = $fe_block_boxes;

  return $export;
}

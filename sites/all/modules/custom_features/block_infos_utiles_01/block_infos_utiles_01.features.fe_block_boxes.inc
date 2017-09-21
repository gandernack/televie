<?php
/**
 * @file
 * block_infos_utiles_01.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_infos_utiles_01_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Infos utiles - Bloc 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'infos_utiles_01';
  $fe_block_boxes->body = '<div class="wrapper">
    <div class="content">
        <h1>Le Télévie récolte des fonds pour progresser dans la lutte contre la leucémie et le cancer chez l\'enfant et chez l\'adulte.</h1>
    </div>

    <div class="scrollto"><a href="#slide2">&gt;</a></div>
</div>';

  $export['infos_utiles_01'] = $fe_block_boxes;

  return $export;
}

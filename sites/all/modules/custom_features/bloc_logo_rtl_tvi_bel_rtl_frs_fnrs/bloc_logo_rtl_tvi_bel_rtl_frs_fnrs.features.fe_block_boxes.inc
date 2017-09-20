<?php
/**
 * @file
 * bloc_logo_rtl_tvi_bel_rtl_frs_fnrs.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function bloc_logo_rtl_tvi_bel_rtl_frs_fnrs_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bloc logo RTL TVI - Bel RTL - FRS FNRS';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_second';
  $fe_block_boxes->body = '<h6 class="heading6">Télévie powered by</h6>
<div><a href="http://www.rtl.be/rtltvi/" target="_blank"><img alt="RTL-TVI" src="/sites/default/files/rtl.png" style="width: 157px; height: 49px;" /></a> <a href="http://www.belrtl.be" target="_blank"><img alt="Bel RTL" src="/sites/default/files/pictures/belrtl-rgb.png" style="width: 117px; height: 49px;" /></a> <a href="http://www.fnrs.be/" target="_blank"><img alt="FRS FNRS" src="/sites/default/files/frs-fnrs_ros_vert_transp_0.png" style="width:77px;height:49px;" /></a></div>
';

  $export['footer_second'] = $fe_block_boxes;

  return $export;
}

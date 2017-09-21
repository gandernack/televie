<?php
/**
 * @file
 * block_footer_televie_oui_non.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_footer_televie_oui_non_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bloc "Le Télévie a besoin de vous : oui / non !"';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'blockfooterfirstpart1';
  $fe_block_boxes->body = '<p class="heading1">Le Télévie a <strong>besoin de vous !</strong></h2>

<p class="don-qu">Je fais un don contre le cancer</p>

<ul class="don-an">
	<li class="yes"><a href="http://dons.televie.be" target="_blank">Oui</a></li>
	<li class="no"><a href="#">Non</a></li>
</ul>
';

  $export['blockfooterfirstpart1'] = $fe_block_boxes;

  return $export;
}

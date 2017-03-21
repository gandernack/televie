<?php
/**
 * @file
 * block_social_networks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_social_networks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social networks - Footer Third';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_networks_footer';
  $fe_block_boxes->body = '<ul>
	<li class="facebook"><a href="https://www.facebook.com/televie/" target="_blank">Facebook</a></li>
	<li class="twitter"><a href="https://twitter.com/televie" target="_blank">Twitter</a></li>
	<li class="instagram"><a href="https://www.instagram.com/televieofficiel/" target="_blank">Instagram</a></li>
	<li class="youtube"><a href="#" target="_blank">Youtube</a></li>
</ul>
';

  $export['social_networks_footer'] = $fe_block_boxes;

  return $export;
}

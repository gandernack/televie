<?php
/**
 * @file
 * block_soir_e.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_soir_e_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Soiree - Video';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'soiree_video';
  $fe_block_boxes->body = '<section class="block-video">
  <div class="video__normal">
    <a href="#">
      <span class="video__icon">
        <img src="/sites/all/themes/nrb_televie/img/soiree/play.png" alt="play">
      </span>
      <span class="video__label">Regardez dès maintenant !</span>
    </a>
  </div>

  <div class="video__active">
    <a href="" class="close"></a>
    <div class="video__video">
      <script async="async" type="text/javascript" src="//www.rtl.be/videos/player/vp_embed.js?v=1" liveid="10230"></script>
    </div>
  </div>
</section>';

  $export['soiree_video'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Soirée - compteur';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'soireecompteur';
  $fe_block_boxes->body = '<section class="block-compteur" tabindex="2">
  <div class="compteur__inner">
    <span class="figure">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="figure -mr-none">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>

    <span class="separator">.</span>

    <span class="figure">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="figure">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="figure -mr-none">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>

    <span class="separator">.</span>

    <span class="figure">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="figure">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="figure -mr-none">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>

    <span class="separator">,</span>

    <span class="figure">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="figure -mr-none">
      <span class="top var"></span>
      <span class="top-back"><span class="var"></span></span>
      <span class="bottom var"></span>
      <span class="bottom-back"><span class="var"></span></span>
    </span>
    <span class="unit">€</span>
  </div>
</section>';

  $export['soireecompteur'] = $fe_block_boxes;

  return $export;
}

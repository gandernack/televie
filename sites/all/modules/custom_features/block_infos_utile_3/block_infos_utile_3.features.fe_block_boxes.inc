<?php
/**
 * @file
 * block_infos_utile_3.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function block_infos_utile_3_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Infos utiles - Bloc 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'infos_utiles_03';
  $fe_block_boxes->body = '<div class="wrapper">
    <div class="content">
        <blockquote>
          "<strong>Il n\'y a pas de maladie inguérissable,</strong><br />
          il y a des maladies que l\'on ne comprend pas."
        </blockquote>
        <div class="author">Arsène Burny, Président de la commission Télévie</div>
        <a href="#">Lire la vidéo</a></div>
</div>

<div class="overlay overlay-video">
    <div class="overlay-wrapper">
        <div class="overlay-content">
            <div class="wrapper"><a class="close-overlay" href="#">x</a></div>

            <div class="video" id="videoPlayer"><iframe allowfullscreen="" frameborder="0" height="315" src="https://www.youtube.com/embed/t3j_TZDvfNk?enablejsapi=1" width="560"></iframe></div>
        </div>
    </div>
</div>';

  $export['infos_utiles_03'] = $fe_block_boxes;

  return $export;
}

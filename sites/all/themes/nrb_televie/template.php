<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
/**
 * Implements hook_preprocess_field().
 */
function nrb_televie_preprocess_field(&$variables) {
  $content_type = $variables['element']['#bundle'];
  $view_mode = $variables['element']['#view_mode'];
  $field_name = $variables['element']['#field_name'];
  switch ($field_name) {
    case 'field_section_emotionnel_1':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide1';
      }
      break;
    case 'field_section_emotionnel_2':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide2';
      }
      break;
    case 'field_section_emotionnel_3':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide3';
      }
      break;
    case 'field_section_emotionnel_4':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide4';
      }
      break;
    case 'field_section_factuel_6':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide6';
      }
      break;
    case 'field_section_factuel_7':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide7';
      }
      break;
    case 'field_section_factuel_8':
      if ($view_mode === 'full' && $content_type === 'home_page') {
          $variables['attributes_array']['id'] = 'slide8';
      }
      break;
  }
}

   
function nrb_televie_preprocess_page(&$variables) {
  drupal_add_js(drupal_get_path('theme', 'nrb_televie') .'/js/bottom.js', array('type' => 'file', 'scope' => 'footer'));
  $variables['scripts'] = drupal_get_js();
}

//file_put_contents("gan.txt", print_r($view, true)); 

// Fonction d'affichage des noeuds suivant et précédent avec le module Prev/Next
function pn_node($node, $mode = 'n') {
  if (!function_exists('prev_next_nid')) {
    return NULL;
  }

  switch($mode) {
    case 'p':
      $n_nid = prev_next_nid($node->nid, 'prev');
      $link_text = 'previous';
      break;

    case 'n':
      $n_nid = prev_next_nid($node->nid, 'next');
      $link_text = 'next';
      break;

    default:
      return NULL;
  }

  if ($n_nid) {
    $n_node = node_load($n_nid);

    $options = array(
      'attributes' => array('class' => 'thumbnail'),
      'html'  => TRUE,
    );
    switch($n_node->type) {
      // For image nodes only
      case 'article':
        $path = "node/" . $n_nid;
        $html = "<a href='/" . drupal_get_path_alias($path) . "'>";
          $html .= "<span class='fleche'>&nbsp;</span>";
          $html .= "<span class='cadre'>";
            $html .= "<span class='titre'>" . $n_node->title . "</span>" ;
            $html .= "<span class='content-cadre'>";
              $html .= "<span class='visu'>";
                 //$html .= "<img src='" . file_create_url($n_node->field_image[LANGUAGE_NONE][0]['uri']) . "' />";
                 $html .= theme('image_style',
                                array('style_name' => '80_x_80_-_nav_au_jour_le_jour',
                                      'path' => $n_node->field_image[LANGUAGE_NONE][0]['uri'],
                                      'alt' => $n_node->title,
                                      'title' => $n_node->title,
                                      )
                                );
              $html .= "</span>";
              $alter = array(
                'max_length' => 200, //Integer
                'ellipsis' => TRUE, //Boolean
                'word_boundary' => TRUE, //Boolean
                'html' => TRUE, //Boolean
                );
              $txt = views_trim_text($alter,$n_node->body[LANGUAGE_NONE][0]['safe_value']);
              $html .= "<span class='desc'>" . strip_tags($txt) . "</span>" ;
            $html .= "</span>";
          $html .= "</span>";
        $html .= "</a>";

        return $html;
      default:
        // Add other node types here if you want.
    }
  }
}



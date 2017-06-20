<?php
/**
 * @file
 * vue_ligne_du_temps.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vue_ligne_du_temps_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ligne_du_temps';
  $strongarm->value = 0;
  $export['comment_anonymous_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ligne_du_temps';
  $strongarm->value = 1;
  $export['comment_default_mode_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ligne_du_temps';
  $strongarm->value = '50';
  $export['comment_default_per_page_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ligne_du_temps';
  $strongarm->value = 1;
  $export['comment_form_location_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ligne_du_temps';
  $strongarm->value = '1';
  $export['comment_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ligne_du_temps';
  $strongarm->value = '1';
  $export['comment_preview_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ligne_du_temps';
  $strongarm->value = 1;
  $export['comment_subject_field_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ligne_du_temps';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ligne_du_temps';
  $strongarm->value = '0';
  $export['language_content_type_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ligne_du_temps';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ligne_du_temps';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ligne_du_temps';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ligne_du_temps';
  $strongarm->value = '1';
  $export['node_preview_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ligne_du_temps';
  $strongarm->value = 0;
  $export['node_submitted_ligne_du_temps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ligne_du_temps_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ligne_du_temps_pattern'] = $strongarm;

  return $export;
}

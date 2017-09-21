<?php
/**
 * @file
 * ct_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emotionnel|node|home_page|default';
  $field_group->group_name = 'group_emotionnel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Emotionnel',
    'weight' => '2',
    'children' => array(
      0 => 'field_section_emotionnel_1',
      1 => 'field_section_emotionnel_2',
      2 => 'field_section_emotionnel_3',
      3 => 'field_section_emotionnel_4',
      4 => 'field_conduite_emotionnel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Emotionnel',
      'instance_settings' => array(
        'id' => 'page-emotional',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emotionnel|node|home_page|form';
  $field_group->group_name = 'group_emotionnel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section émotionnel',
    'weight' => '6',
    'children' => array(
      0 => 'field_section_emotionnel_1',
      1 => 'field_section_emotionnel_2',
      2 => 'field_section_emotionnel_3',
      3 => 'field_section_emotionnel_4',
      4 => 'field_conduite_emotionnel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-emotionnel field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factuel|node|home_page|default';
  $field_group->group_name = 'group_factuel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Factuel',
    'weight' => '3',
    'children' => array(
      0 => 'field_section_factuel_6',
      1 => 'field_section_factuel_7',
      2 => 'field_section_factuel_8',
      3 => 'field_conduite_factuel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Factuel',
      'instance_settings' => array(
        'id' => 'page-factual',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factuel|node|home_page|form';
  $field_group->group_name = 'group_factuel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section factuel',
    'weight' => '7',
    'children' => array(
      0 => 'field_section_factuel_6',
      1 => 'field_section_factuel_7',
      2 => 'field_section_factuel_8',
      3 => 'field_conduite_factuel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factuel field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|home_page|default';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_total';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '2',
    'children' => array(
      0 => 'field_close',
      1 => 'group_emotionnel',
      2 => 'group_factuel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'main',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_start|node|home_page|default';
  $field_group->group_name = 'group_start';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_total';
  $field_group->data = array(
    'label' => 'Start',
    'weight' => '1',
    'children' => array(
      0 => 'field_start_emotionnel',
      1 => 'field_start_factuel',
      2 => 'field_coeur_central',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Start',
      'instance_settings' => array(
        'id' => 'start',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_total|node|home_page|default';
  $field_group->group_name = 'group_total';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Total',
    'weight' => '0',
    'children' => array(
      0 => 'group_start',
      1 => 'group_main',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Total',
      'instance_settings' => array(
        'id' => 'total',
        'classes' => 'group-total field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Emotionnel');
  t('Factuel');
  t('Main');
  t('Section factuel');
  t('Section émotionnel');
  t('Start');
  t('Total');

  return $field_groups;
}

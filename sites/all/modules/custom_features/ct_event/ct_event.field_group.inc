<?php
/**
 * @file
 * ct_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|event|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date',
    'weight' => '16',
    'children' => array(
      0 => 'field_date',
      1 => 'field_complet',
      2 => 'field_heure_debut',
      3 => 'field_heure_fin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groupement|node|event|form';
  $field_group->group_name = 'group_groupement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groupement',
    'weight' => '12',
    'children' => array(
      0 => 'field_groupement',
      1 => 'field_master_event',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Groupement',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-groupement field-group-fieldset',
        'description' => 'Lors d\'activités répétitives (même activité, jours différents et lieux éventuellement différents), vous avez la possibilité de les grouper.<br/><br/>

Définissez une activité "Maître" en cochant la case adéquate et copiez son ID de groupement dans les activités liées (ces denrières ne pouvant en aucun cas être mentionnées comme "Maître").<br/><br/>

Seuls les champs du titre, des dates et des lieux des activités "Esclaves" seront pris en compte.<br/><br/>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lieu|node|event|form';
  $field_group->group_name = 'group_lieu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lieu',
    'weight' => '17',
    'children' => array(
      0 => 'field_rue',
      1 => 'field_numero',
      2 => 'field_code_postal',
      3 => 'field_localite',
      4 => 'field_province',
      5 => 'field_nom_du_lieu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lieu field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation|node|event|form';
  $field_group->group_name = 'group_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation',
    'weight' => '15',
    'children' => array(
      0 => 'field_nom_organisation',
      1 => 'field_responsable',
      2 => 'field_site_internet_organisation',
      3 => 'field_email_organisation',
      4 => 'field_telephone_organisation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organisation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('Groupement');
  t('Lieu');
  t('Organisation');

  return $field_groups;
}

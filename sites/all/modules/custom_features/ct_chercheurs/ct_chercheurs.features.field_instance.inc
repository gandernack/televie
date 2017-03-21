<?php
/**
 * @file
 * ct_chercheurs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ct_chercheurs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-chercheurs-field_groupement'.
  $field_instances['node-chercheurs-field_groupement'] = array(
    'bundle' => 'chercheurs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Cette valeur servira clé initiale pour l\'affichage des chercheurs',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_groupement',
    'label' => 'Groupe',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Rechercher',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-chercheurs-field_nombre'.
  $field_instances['node-chercheurs-field_nombre'] = array(
    'bundle' => 'chercheurs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre de chercheurs dans la catégorie',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nombre',
    'label' => 'Nombre',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cette valeur servira clé initiale pour l\'affichage des chercheurs');
  t('Groupe');
  t('Nombre');
  t('Nombre de chercheurs dans la catégorie');

  return $field_instances;
}

<?php
/**
 * @file
 * vue_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vue_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Les manifestations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['label'] = '';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['expose']['label'] = 'Date (field_date)';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Bloc des dates par événement */
  $handler = $view->new_display('block', 'Bloc des dates par événement', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'cal';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de vue */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'equalheight-row';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Global : Groupe de champs */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'detail';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_complet',
    1 => 'fieldset_1',
    2 => 'field_numero',
    3 => 'field_rue',
    4 => 'field_code_postal',
    5 => 'field_localite',
    6 => 'field_nom_du_lieu',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'detail row-height equalheight-row';
  /* Champ: Contenu : Complet */
  $handler->display->display_options['fields']['field_complet']['id'] = 'field_complet';
  $handler->display->display_options['fields']['field_complet']['table'] = 'field_data_field_complet';
  $handler->display->display_options['fields']['field_complet']['field'] = 'field_complet';
  $handler->display->display_options['fields']['field_complet']['label'] = '';
  $handler->display->display_options['fields']['field_complet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_complet']['element_label_colon'] = FALSE;
  /* Champ: Global : Groupe de champs */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'hours';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_heure_debut',
    1 => 'field_heure_fin',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'hours';
  /* Champ: Contenu : Heure début */
  $handler->display->display_options['fields']['field_heure_debut']['id'] = 'field_heure_debut';
  $handler->display->display_options['fields']['field_heure_debut']['table'] = 'field_data_field_heure_debut';
  $handler->display->display_options['fields']['field_heure_debut']['field'] = 'field_heure_debut';
  $handler->display->display_options['fields']['field_heure_debut']['label'] = '';
  $handler->display->display_options['fields']['field_heure_debut']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Heure fin */
  $handler->display->display_options['fields']['field_heure_fin']['id'] = 'field_heure_fin';
  $handler->display->display_options['fields']['field_heure_fin']['table'] = 'field_data_field_heure_fin';
  $handler->display->display_options['fields']['field_heure_fin']['field'] = 'field_heure_fin';
  $handler->display->display_options['fields']['field_heure_fin']['label'] = '';
  $handler->display->display_options['fields']['field_heure_fin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_heure_fin']['alter']['text'] = '&nbsp;- [field_heure_fin]';
  $handler->display->display_options['fields']['field_heure_fin']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Numéro */
  $handler->display->display_options['fields']['field_numero']['id'] = 'field_numero';
  $handler->display->display_options['fields']['field_numero']['table'] = 'field_data_field_numero';
  $handler->display->display_options['fields']['field_numero']['field'] = 'field_numero';
  $handler->display->display_options['fields']['field_numero']['label'] = '';
  $handler->display->display_options['fields']['field_numero']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_numero']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_numero']['alter']['text'] = ', [field_numero-value]';
  $handler->display->display_options['fields']['field_numero']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Rue */
  $handler->display->display_options['fields']['field_rue']['id'] = 'field_rue';
  $handler->display->display_options['fields']['field_rue']['table'] = 'field_data_field_rue';
  $handler->display->display_options['fields']['field_rue']['field'] = 'field_rue';
  $handler->display->display_options['fields']['field_rue']['label'] = '';
  $handler->display->display_options['fields']['field_rue']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rue']['alter']['text'] = '[field_rue-value] [field_numero]';
  $handler->display->display_options['fields']['field_rue']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Code postal */
  $handler->display->display_options['fields']['field_code_postal']['id'] = 'field_code_postal';
  $handler->display->display_options['fields']['field_code_postal']['table'] = 'field_data_field_code_postal';
  $handler->display->display_options['fields']['field_code_postal']['field'] = 'field_code_postal';
  $handler->display->display_options['fields']['field_code_postal']['label'] = '';
  $handler->display->display_options['fields']['field_code_postal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_code_postal']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['label'] = '';
  $handler->display->display_options['fields']['field_localite']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_localite']['alter']['text'] = '[field_code_postal] [field_localite] ';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_localite']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_localite']['element_wrapper_class'] = 'commune';
  $handler->display->display_options['fields']['field_localite']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Nom du lieu */
  $handler->display->display_options['fields']['field_nom_du_lieu']['id'] = 'field_nom_du_lieu';
  $handler->display->display_options['fields']['field_nom_du_lieu']['table'] = 'field_data_field_nom_du_lieu';
  $handler->display->display_options['fields']['field_nom_du_lieu']['field'] = 'field_nom_du_lieu';
  $handler->display->display_options['fields']['field_nom_du_lieu']['label'] = '';
  $handler->display->display_options['fields']['field_nom_du_lieu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nom_du_lieu']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_nom_du_lieu']['element_wrapper_class'] = 'salle';
  $handler->display->display_options['fields']['field_nom_du_lieu']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nom_du_lieu']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_nom_du_lieu']['multi_type'] = 'ul';
  /* Champ: Contenu : URL de réservation */
  $handler->display->display_options['fields']['field_url_reservation']['id'] = 'field_url_reservation';
  $handler->display->display_options['fields']['field_url_reservation']['table'] = 'field_data_field_url_reservation';
  $handler->display->display_options['fields']['field_url_reservation']['field'] = 'field_url_reservation';
  $handler->display->display_options['fields']['field_url_reservation']['label'] = '';
  $handler->display->display_options['fields']['field_url_reservation']['element_class'] = 'equalheight-row';
  $handler->display->display_options['fields']['field_url_reservation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_reservation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_url_reservation']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_date_horaire_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Groupe (field_groupement) */
  $handler->display->display_options['arguments']['field_groupement_value']['id'] = 'field_groupement_value';
  $handler->display->display_options['arguments']['field_groupement_value']['table'] = 'field_data_field_groupement';
  $handler->display->display_options['arguments']['field_groupement_value']['field'] = 'field_groupement_value';
  $handler->display->display_options['arguments']['field_groupement_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_groupement_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_groupement_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_groupement_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_groupement_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_groupement_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_groupement_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Bloc Top events */
  $handler = $view->new_display('block', 'Bloc Top events', 'block_top_events');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '            <div class="wrapper-agenda-header">
              <h2>Chaque année plus de 1000 activités sont organisées au profit du Télévie !</h2>
              <h3>Les activités Télévie à ne pas manquer en ce moment</h3>
            </div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'event_top',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['label'] = '';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_localite']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Heure début */
  $handler->display->display_options['fields']['field_heure_debut']['id'] = 'field_heure_debut';
  $handler->display->display_options['fields']['field_heure_debut']['table'] = 'field_data_field_heure_debut';
  $handler->display->display_options['fields']['field_heure_debut']['field'] = 'field_heure_debut';
  $handler->display->display_options['fields']['field_heure_debut']['label'] = '';
  $handler->display->display_options['fields']['field_heure_debut']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_heure_debut']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Top (field_top) */
  $handler->display->display_options['filters']['field_top_value']['id'] = 'field_top_value';
  $handler->display->display_options['filters']['field_top_value']['table'] = 'field_data_field_top';
  $handler->display->display_options['filters']['field_top_value']['field'] = 'field_top_value';
  $handler->display->display_options['filters']['field_top_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_top_value']['group'] = 1;
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Bloc Agenda */
  $handler = $view->new_display('block', 'Bloc Agenda', 'block_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_province_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'composite_views_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_categorie_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'masonry-item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Résumé des résultats */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<h2> Ici, cherchez et trouvez l\'activité Télévie organisée près de chez vous</h2><h2>@total activités vous attendent !</h2>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Pas de résultat pour cette recherche.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'agenda_masonery_-_1',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['label'] = '';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_localite']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_province']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Province (field_province) */
  $handler->display->display_options['filters']['field_province_value']['id'] = 'field_province_value';
  $handler->display->display_options['filters']['field_province_value']['table'] = 'field_data_field_province';
  $handler->display->display_options['filters']['field_province_value']['field'] = 'field_province_value';
  $handler->display->display_options['filters']['field_province_value']['group'] = 1;
  $handler->display->display_options['filters']['field_province_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_province_value']['expose']['operator_id'] = 'field_province_value_op';
  $handler->display->display_options['filters']['field_province_value']['expose']['label'] = 'Où voulez-vous aller ?';
  $handler->display->display_options['filters']['field_province_value']['expose']['operator'] = 'field_province_value_op';
  $handler->display->display_options['filters']['field_province_value']['expose']['identifier'] = 'field_province_value';
  $handler->display->display_options['filters']['field_province_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Critère de filtrage: Filtre quand */
  $handler->display->display_options['filters']['composite_views_filter']['id'] = 'composite_views_filter';
  $handler->display->display_options['filters']['composite_views_filter']['table'] = 'views';
  $handler->display->display_options['filters']['composite_views_filter']['field'] = 'composite_views_filter';
  $handler->display->display_options['filters']['composite_views_filter']['ui_name'] = 'Filtre quand';
  $handler->display->display_options['filters']['composite_views_filter']['group'] = 1;
  $handler->display->display_options['filters']['composite_views_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['composite_views_filter']['expose']['label'] = 'Quand';
  $handler->display->display_options['filters']['composite_views_filter']['expose']['identifier'] = 'quand';
  $handler->display->display_options['filters']['composite_views_filter']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['composite_views_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['composite_views_filter']['composite_views_filter']['groups'] = 'aujourdhui|Aujourd\'hui
weekend|Le week-end prochain
mois|Ce mois-ci
mois+1|Le mois prochain
mois+2|Dans 2 mois
mois+3|Dans 3 mois
mois+4|Dans 4 mois
mois+5|Dans 5 mois
mois+6|Dans 6 mois';
  $handler->display->display_options['filters']['composite_views_filter']['composite_views_filter']['classification'] = array(
    'field_date_value_2' => 'aujourdhui',
    'field_date_value_3' => 'mois',
    'field_date_value_4' => 'mois+1',
    'field_date_value_6' => 'mois+3',
    'field_date_value_7' => 'mois+4',
    'field_date_value_8' => 'mois+5',
    'field_date_value_9' => 'mois+6',
    'field_date_value_1' => 'weekend',
    'field_date_value_5' => 'mois+2',
  );
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_2']['id'] = 'field_date_value_2';
  $handler->display->display_options['filters']['field_date_value_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_2']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_2']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_2']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_3']['id'] = 'field_date_value_3';
  $handler->display->display_options['filters']['field_date_value_3']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_3']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_3']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_3']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_3']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value_3']['default_to_date'] = 'last day of this month';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'saturday this week';
  $handler->display->display_options['filters']['field_date_value_1']['default_to_date'] = 'sunday this week';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_4']['id'] = 'field_date_value_4';
  $handler->display->display_options['filters']['field_date_value_4']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_4']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_4']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_4']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_4']['default_date'] = 'first day of +1 month';
  $handler->display->display_options['filters']['field_date_value_4']['default_to_date'] = 'last day of +1 month';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_5']['id'] = 'field_date_value_5';
  $handler->display->display_options['filters']['field_date_value_5']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_5']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_5']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_5']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_5']['default_date'] = 'first day of +2 month';
  $handler->display->display_options['filters']['field_date_value_5']['default_to_date'] = 'last day of +2 month';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_6']['id'] = 'field_date_value_6';
  $handler->display->display_options['filters']['field_date_value_6']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_6']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_6']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_6']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_6']['default_date'] = 'first day of +3 month';
  $handler->display->display_options['filters']['field_date_value_6']['default_to_date'] = 'last day of +3 month';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_7']['id'] = 'field_date_value_7';
  $handler->display->display_options['filters']['field_date_value_7']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_7']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_7']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_7']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_7']['default_date'] = 'first day of +4 month';
  $handler->display->display_options['filters']['field_date_value_7']['default_to_date'] = 'last day of +4 month';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_8']['id'] = 'field_date_value_8';
  $handler->display->display_options['filters']['field_date_value_8']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_8']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_8']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_8']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_8']['default_date'] = 'first day of +5 month';
  $handler->display->display_options['filters']['field_date_value_8']['default_to_date'] = 'last day of +5 month';
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_9']['id'] = 'field_date_value_9';
  $handler->display->display_options['filters']['field_date_value_9']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_9']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_9']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value_9']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_9']['default_date'] = 'first day of +6 month';
  $handler->display->display_options['filters']['field_date_value_9']['default_to_date'] = 'last day of +6 month';
  /* Critère de filtrage: Contenu : Catégorie (field_categorie) */
  $handler->display->display_options['filters']['field_categorie_value']['id'] = 'field_categorie_value';
  $handler->display->display_options['filters']['field_categorie_value']['table'] = 'field_data_field_categorie';
  $handler->display->display_options['filters']['field_categorie_value']['field'] = 'field_categorie_value';
  $handler->display->display_options['filters']['field_categorie_value']['group'] = 1;
  $handler->display->display_options['filters']['field_categorie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorie_value']['expose']['operator_id'] = 'field_categorie_value_op';
  $handler->display->display_options['filters']['field_categorie_value']['expose']['label'] = 'Catégories';
  $handler->display->display_options['filters']['field_categorie_value']['expose']['operator'] = 'field_categorie_value_op';
  $handler->display->display_options['filters']['field_categorie_value']['expose']['identifier'] = 'field_categorie_value';
  $handler->display->display_options['filters']['field_categorie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Gestion des événements */
  $handler = $view->new_display('page', 'Gestion des événements', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gestion des événements';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    6 => '6',
    4 => '4',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_localite_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_province_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_groupement_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_localite' => 'field_localite',
    'field_province' => 'field_province',
    'created' => 'created',
    'field_groupement' => 'field_groupement',
    'field_top' => 'field_top',
    'field_master_event' => 'field_master_event',
    'status' => 'status',
    'timestamp' => 'timestamp',
    'name' => 'name',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_groupement';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_localite' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_province' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_groupement' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_top' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_master_event' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Révision de contenu : Utilisateur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Libellé';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Date de l\'événement';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Champ: Contenu : Groupe */
  $handler->display->display_options['fields']['field_groupement']['id'] = 'field_groupement';
  $handler->display->display_options['fields']['field_groupement']['table'] = 'field_data_field_groupement';
  $handler->display->display_options['fields']['field_groupement']['field'] = 'field_groupement';
  $handler->display->display_options['fields']['field_groupement']['label'] = 'ID pour regrouper les activités';
  /* Champ: Contenu : Top */
  $handler->display->display_options['fields']['field_top']['id'] = 'field_top';
  $handler->display->display_options['fields']['field_top']['table'] = 'field_data_field_top';
  $handler->display->display_options['fields']['field_top']['field'] = 'field_top';
  /* Champ: Contenu : Master event */
  $handler->display->display_options['fields']['field_master_event']['id'] = 'field_master_event';
  $handler->display->display_options['fields']['field_master_event']['table'] = 'field_data_field_master_event';
  $handler->display->display_options['fields']['field_master_event']['field'] = 'field_master_event';
  $handler->display->display_options['fields']['field_master_event']['label'] = 'Maître';
  /* Champ: Contenu : Publié */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Champ: Révision de contenu : Date de mise à jour */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Modifié par';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Contenu : Lien de modification */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titre';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Critère de filtrage: Contenu : Localité (field_localite) */
  $handler->display->display_options['filters']['field_localite_value']['id'] = 'field_localite_value';
  $handler->display->display_options['filters']['field_localite_value']['table'] = 'field_data_field_localite';
  $handler->display->display_options['filters']['field_localite_value']['field'] = 'field_localite_value';
  $handler->display->display_options['filters']['field_localite_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_localite_value']['group'] = 1;
  $handler->display->display_options['filters']['field_localite_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_localite_value']['expose']['operator_id'] = 'field_localite_value_op';
  $handler->display->display_options['filters']['field_localite_value']['expose']['label'] = 'Localité';
  $handler->display->display_options['filters']['field_localite_value']['expose']['operator'] = 'field_localite_value_op';
  $handler->display->display_options['filters']['field_localite_value']['expose']['identifier'] = 'field_localite_value';
  $handler->display->display_options['filters']['field_localite_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Critère de filtrage: Contenu : Province (field_province) */
  $handler->display->display_options['filters']['field_province_value']['id'] = 'field_province_value';
  $handler->display->display_options['filters']['field_province_value']['table'] = 'field_data_field_province';
  $handler->display->display_options['filters']['field_province_value']['field'] = 'field_province_value';
  $handler->display->display_options['filters']['field_province_value']['group'] = 1;
  $handler->display->display_options['filters']['field_province_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_province_value']['expose']['operator_id'] = 'field_province_value_op';
  $handler->display->display_options['filters']['field_province_value']['expose']['label'] = 'Province';
  $handler->display->display_options['filters']['field_province_value']['expose']['operator'] = 'field_province_value_op';
  $handler->display->display_options['filters']['field_province_value']['expose']['identifier'] = 'field_province_value';
  $handler->display->display_options['filters']['field_province_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Critère de filtrage: Contenu : Groupe (field_groupement) */
  $handler->display->display_options['filters']['field_groupement_value']['id'] = 'field_groupement_value';
  $handler->display->display_options['filters']['field_groupement_value']['table'] = 'field_data_field_groupement';
  $handler->display->display_options['filters']['field_groupement_value']['field'] = 'field_groupement_value';
  $handler->display->display_options['filters']['field_groupement_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_groupement_value']['group'] = 1;
  $handler->display->display_options['filters']['field_groupement_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_groupement_value']['expose']['operator_id'] = 'field_groupement_value_op';
  $handler->display->display_options['filters']['field_groupement_value']['expose']['label'] = 'ID pour regrouper les activités';
  $handler->display->display_options['filters']['field_groupement_value']['expose']['operator'] = 'field_groupement_value_op';
  $handler->display->display_options['filters']['field_groupement_value']['expose']['identifier'] = 'field_groupement_value';
  $handler->display->display_options['filters']['field_groupement_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Critère de filtrage: Contenu : Top (field_top) */
  $handler->display->display_options['filters']['field_top_value']['id'] = 'field_top_value';
  $handler->display->display_options['filters']['field_top_value']['table'] = 'field_data_field_top';
  $handler->display->display_options['filters']['field_top_value']['field'] = 'field_top_value';
  $handler->display->display_options['filters']['field_top_value']['group'] = 1;
  $handler->display->display_options['filters']['field_top_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_top_value']['expose']['operator_id'] = 'field_top_value_op';
  $handler->display->display_options['filters']['field_top_value']['expose']['label'] = 'Top';
  $handler->display->display_options['filters']['field_top_value']['expose']['operator'] = 'field_top_value_op';
  $handler->display->display_options['filters']['field_top_value']['expose']['identifier'] = 'field_top_value';
  $handler->display->display_options['filters']['field_top_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Critère de filtrage: Contenu : Master event (field_master_event) (translated) */
  $handler->display->display_options['filters']['field_master_event_value_i18n']['id'] = 'field_master_event_value_i18n';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['table'] = 'field_data_field_master_event';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['field'] = 'field_master_event_value_i18n';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_master_event_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_master_event_value_i18n']['expose']['operator_id'] = 'field_master_event_value_i18n_op';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['expose']['label'] = 'Maître';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['expose']['operator'] = 'field_master_event_value_i18n_op';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['expose']['identifier'] = 'field_master_event_value_i18n';
  $handler->display->display_options['filters']['field_master_event_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Publié';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/events';

  /* Display: Flux */
  $handler = $view->new_display('feed', 'Flux', 'feed_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Télévie - Les manifestations',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => 'info@rtl.be (Managing Editor)',
        'webMaster' => 'info@rtl.be (Web Master)',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'body',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'field_image_1',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Contenu : Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['label'] = '';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Champ: Utilisateur : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'info@televie.be (Managing Editor)';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['type'] = 'enclosure';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => 'large',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'rss/events.xml';

  /* Display: Bloc Prochaines activités HP */
  $handler = $view->new_display('block', 'Bloc Prochaines activités HP', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Champ: Contenu : Localité */
  $handler->display->display_options['fields']['field_localite']['id'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['table'] = 'field_data_field_localite';
  $handler->display->display_options['fields']['field_localite']['field'] = 'field_localite';
  $handler->display->display_options['fields']['field_localite']['label'] = '';
  $handler->display->display_options['fields']['field_localite']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Province */
  $handler->display->display_options['fields']['field_province']['id'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['table'] = 'field_data_field_province';
  $handler->display->display_options['fields']['field_province']['field'] = 'field_province';
  $handler->display->display_options['fields']['field_province']['label'] = '';
  $handler->display->display_options['fields']['field_province']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_province']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $export['events'] = $view;

  return $export;
}

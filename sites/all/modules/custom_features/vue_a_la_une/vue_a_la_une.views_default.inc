<?php
/**
 * @file
 * vue_a_la_une.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vue_a_la_une_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'a_la_une';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'A la une';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'A la une';
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
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Par défaut',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_la_une' => 0,
    'title' => 0,
    'body' => 0,
    'field_lien_la_une' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_image_la_une' => 0,
    'title' => 0,
    'body' => 0,
    'field_lien_la_une' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Champ: Contenu : Image à la une */
  $handler->display->display_options['fields']['field_image_la_une']['id'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['table'] = 'field_data_field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['field'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_image_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_la_une']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_la_une']['settings'] = array(
    'image_style' => 'event_home',
    'image_link' => 'content',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<span class="event-content">
<span class="event-content-title">[title]</span>
<span class="event-content-desc">[body] </span>
</span>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Lien à la une */
  $handler->display->display_options['fields']['field_lien_la_une']['id'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['table'] = 'field_data_field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['field'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_lien_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_la_une']['click_sort_column'] = 'url';
  /* Champ: Global : Voir le compteur de résultats */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'a_la_une' => 'a_la_une',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block A la Une */
  $handler = $view->new_display('block', 'Block A la Une', 'block_a_la_une');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Par défaut',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_lien_la_une_1' => 0,
    'field_image_la_une' => 0,
    'title' => 0,
    'field_lien_la_une' => 0,
    'field_categorie_a_la_une' => 0,
    'body' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_lien_la_une_1' => 0,
    'field_image_la_une' => 0,
    'title' => 0,
    'field_lien_la_une' => 0,
    'field_categorie_a_la_une' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '4000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span class="event-home-x">X</span>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Lien à la une */
  $handler->display->display_options['fields']['field_lien_la_une_1']['id'] = 'field_lien_la_une_1';
  $handler->display->display_options['fields']['field_lien_la_une_1']['table'] = 'field_data_field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une_1']['field'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une_1']['label'] = '';
  $handler->display->display_options['fields']['field_lien_la_une_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lien_la_une_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_la_une_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien_la_une_1']['type'] = 'link_plain';
  /* Champ: Contenu : Image à la une */
  $handler->display->display_options['fields']['field_image_la_une']['id'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['table'] = 'field_data_field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['field'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_image_la_une']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_la_une']['alter']['path'] = '[field_lien_la_une_1]';
  $handler->display->display_options['fields']['field_image_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_la_une']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_la_une']['settings'] = array(
    'image_style' => 'event_home',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_lien_la_une_1]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Lien à la une */
  $handler->display->display_options['fields']['field_lien_la_une']['id'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['table'] = 'field_data_field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['field'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_lien_la_une']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lien_la_une']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lien_la_une']['alter']['text'] = '<a href="[field_lien_la_une-url]">[field_lien_la_une-title]<span class="event-content-lien-fleche">></span></a>';
  $handler->display->display_options['fields']['field_lien_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_la_une']['click_sort_column'] = 'url';
  /* Champ: Contenu : Catégorie à la une */
  $handler->display->display_options['fields']['field_categorie_a_la_une']['id'] = 'field_categorie_a_la_une';
  $handler->display->display_options['fields']['field_categorie_a_la_une']['table'] = 'field_data_field_categorie_a_la_une';
  $handler->display->display_options['fields']['field_categorie_a_la_une']['field'] = 'field_categorie_a_la_une';
  $handler->display->display_options['fields']['field_categorie_a_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_categorie_a_la_une']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_categorie_a_la_une']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<span class="event-content">
<span class="event-content-categorie">[field_categorie_a_la_une]</span>
<span class="event-content-title">[title]</span>
<span class="event-content-desc">[body] </span>
<span class="event-content-lien">[field_lien_la_une]</span>
</span>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Global : Voir le compteur de résultats */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['path'] = '#pager';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  $handler->display->display_options['block_description'] = 'A la une';

  /* Display: Block A la Une première image */
  $handler = $view->new_display('block', 'Block A la Une première image', 'block_link_open');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  $handler->display->display_options['header']['area']['content'] = '<span class="link-open-plus">+</span>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Image à la une */
  $handler->display->display_options['fields']['field_image_la_une']['id'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['table'] = 'field_data_field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['field'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_image_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_la_une']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_la_une']['settings'] = array(
    'image_style' => 'event_thumb',
    'image_link' => 'content',
  );

  /* Display: Blocs new HP */
  $handler = $view->new_display('block', 'Blocs new HP', 'block_1');
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Image à la une */
  $handler->display->display_options['fields']['field_image_la_une']['id'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['table'] = 'field_data_field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['field'] = 'field_image_la_une';
  $handler->display->display_options['fields']['field_image_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_image_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_la_une']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_la_une']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_la_une']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image_la_une']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Champ: Contenu : Lien à la une */
  $handler->display->display_options['fields']['field_lien_la_une']['id'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['table'] = 'field_data_field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['field'] = 'field_lien_la_une';
  $handler->display->display_options['fields']['field_lien_la_une']['label'] = '';
  $handler->display->display_options['fields']['field_lien_la_une']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_la_une']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lien_la_une']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien_la_une']['type'] = 'link_plain';
  $export['a_la_une'] = $view;

  return $export;
}

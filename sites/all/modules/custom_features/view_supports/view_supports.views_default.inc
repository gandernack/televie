<?php
/**
 * @file
 * view_supports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_supports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'facons_d_aider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'facons_d_aider:page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'support' => 'support',
  );

  /* Display: Trier les "Supports" */
  $handler = $view->new_display('page', 'Trier les "Supports"', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trier les "Supports"';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Cet écran permet detrier les "Façons d\'aider" affichées en début de bas de page.
Seuls les 4 premiers éléments seront affichés à l\'écran.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Champ: Draggableviews : Contenu */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Champ: Contenu : Footer */
  $handler->display->display_options['fields']['field_footer']['id'] = 'field_footer';
  $handler->display->display_options['fields']['field_footer']['table'] = 'field_data_field_footer';
  $handler->display->display_options['fields']['field_footer']['field'] = 'field_footer';
  $handler->display->display_options['fields']['field_footer']['label'] = 'Pied de page';
  $handler->display->display_options['fields']['field_footer']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'facons_d_aider:default';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'admin/tri-supports';

  /* Display: Bloc Footer */
  $handler = $view->new_display('block', 'Bloc Footer', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien']['id'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['label'] = '';
  $handler->display->display_options['fields']['field_lien']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien']['type'] = 'link_plain';
  /* Champ: Global : Voir le compteur de résultats */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Champ: Contenu : Icône blanche */
  $handler->display->display_options['fields']['field_icone_blanche']['id'] = 'field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['table'] = 'field_data_field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['field'] = 'field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['label'] = '';
  $handler->display->display_options['fields']['field_icone_blanche']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icone_blanche']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icone_blanche']['settings'] = array(
    'image_style' => 'pictos_bullet_soutenir_footer',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'support' => 'support',
  );
  /* Critère de filtrage: Contenu : Footer (field_footer) */
  $handler->display->display_options['filters']['field_footer_value']['id'] = 'field_footer_value';
  $handler->display->display_options['filters']['field_footer_value']['table'] = 'field_data_field_footer';
  $handler->display->display_options['filters']['field_footer_value']['field'] = 'field_footer_value';
  $handler->display->display_options['filters']['field_footer_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Bloc "Supports"';

  /* Display: Page "Soutenir le Télévie" */
  $handler = $view->new_display('page', 'Page "Soutenir le Télévie"', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Soutenir le Télévie';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
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
  $handler->display->display_options['header']['area']['content'] = '<div class="wrapper"><div class="soutenir-header-content-wrapper"><div class="soutenir-header-content"><h1>Vos plus petits dons financent les grandes idées de nos chercheurs...soutenez le Télévie !</strong></h1></div></div>

<div class="scrollto"><a href="#soutenir-block-1">&gt;</a></div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de vue */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'facons_d_aider:block_2';
  /* Pied de page: Global : Zone de vue */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'facons_d_aider:block_3';
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="soutenir-le-televie-block-last"><div class="soutenir-le-televie-block-last-wrapper"><span class="soutenir-le-televie-block-last-01">Faisons</span><span class="soutenir-le-televie-block-last-02">gagner </span><span class="soutenir-le-televie-block-last-03">la vie</span></div></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien_1']['id'] = 'field_lien_1';
  $handler->display->display_options['fields']['field_lien_1']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien_1']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien_1']['label'] = '';
  $handler->display->display_options['fields']['field_lien_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien_1']['type'] = 'link_plain';
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'pictos_soutenir_le_t_l_vie',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien']['id'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['label'] = '';
  $handler->display->display_options['fields']['field_lien']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien']['type'] = 'link_title_plain';
  $handler->display->display_options['path'] = 'soutenir-le-televie';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Soutenir le Télévie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Bloc 2 */
  $handler = $view->new_display('block', 'Bloc 2', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien_1']['id'] = 'field_lien_1';
  $handler->display->display_options['fields']['field_lien_1']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien_1']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien_1']['label'] = '';
  $handler->display->display_options['fields']['field_lien_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien_1']['type'] = 'link_plain';
  /* Champ: Contenu : Icône blanche */
  $handler->display->display_options['fields']['field_icone_blanche']['id'] = 'field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['table'] = 'field_data_field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['field'] = 'field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['label'] = '';
  $handler->display->display_options['fields']['field_icone_blanche']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icone_blanche']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icone_blanche']['settings'] = array(
    'image_style' => 'pictos_soutenir_le_t_l_vie',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien']['id'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['label'] = '';
  $handler->display->display_options['fields']['field_lien']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien']['type'] = 'link_title_plain';
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;

  /* Display: Bloc 3 */
  $handler = $view->new_display('block', 'Bloc 3', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien_1']['id'] = 'field_lien_1';
  $handler->display->display_options['fields']['field_lien_1']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien_1']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien_1']['label'] = '';
  $handler->display->display_options['fields']['field_lien_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien_1']['type'] = 'link_plain';
  /* Champ: Contenu : Icône blanche */
  $handler->display->display_options['fields']['field_icone_blanche']['id'] = 'field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['table'] = 'field_data_field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['field'] = 'field_icone_blanche';
  $handler->display->display_options['fields']['field_icone_blanche']['label'] = '';
  $handler->display->display_options['fields']['field_icone_blanche']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icone_blanche']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icone_blanche']['settings'] = array(
    'image_style' => 'pictos_soutenir_le_t_l_vie',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['field_lien']['id'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['table'] = 'field_data_field_lien';
  $handler->display->display_options['fields']['field_lien']['field'] = 'field_lien';
  $handler->display->display_options['fields']['field_lien']['label'] = '';
  $handler->display->display_options['fields']['field_lien']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lien']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_lien']['type'] = 'link_title_plain';
  /* Champ: Contenu : Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $export['facons_d_aider'] = $view;

  return $export;
}

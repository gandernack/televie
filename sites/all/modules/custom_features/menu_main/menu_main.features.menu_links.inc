<?php
/**
 * @file
 * menu_main.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_main_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_a-propos-du-tlvie:node/891.
  $menu_links['main-menu_a-propos-du-tlvie:node/891'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/891',
    'router_path' => 'node/%',
    'link_title' => 'A propos du Télévie',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_a-propos-du-tlvie:node/891',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_activits:node/2028.
  $menu_links['main-menu_activits:node/2028'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2028',
    'router_path' => 'node/%',
    'link_title' => 'Activités',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_activits:node/2028',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_agenda:node/2028.
  $menu_links['main-menu_agenda:node/2028'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2028',
    'router_path' => 'node/%',
    'link_title' => 'Agenda',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_agenda:node/2028',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_au-jour-le-jour:au-jour-le-jour.
  $menu_links['main-menu_au-jour-le-jour:au-jour-le-jour'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'au-jour-le-jour',
    'router_path' => 'au-jour-le-jour',
    'link_title' => 'Au jour le jour',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_au-jour-le-jour:au-jour-le-jour',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_faire-un-don:http://dons.televie.be/.
  $menu_links['main-menu_faire-un-don:http://dons.televie.be/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dons.televie.be/',
    'router_path' => '',
    'link_title' => 'Faire un don',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-2',
        'style' => '',
      ),
      'identifier' => 'main-menu_faire-un-don:http://dons.televie.be/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_infos-utiles:node/891.
  $menu_links['main-menu_infos-utiles:node/891'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/891',
    'router_path' => 'node/%',
    'link_title' => 'Infos utiles',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_infos-utiles:node/891',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_le-grand-rallye:node/3512.
  $menu_links['main-menu_le-grand-rallye:node/3512'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3512',
    'router_path' => 'node/%',
    'link_title' => 'Le Grand Rallye',
    'options' => array(
      'html' => 1,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_le-grand-rallye:node/3512',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_news:au-jour-le-jour.
  $menu_links['main-menu_news:au-jour-le-jour'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'au-jour-le-jour',
    'router_path' => 'au-jour-le-jour',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_news:au-jour-le-jour',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_strongagirstrong:soutenir-le-televie.
  $menu_links['main-menu_strongagirstrong:soutenir-le-televie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'soutenir-le-televie',
    'router_path' => 'soutenir-le-televie',
    'link_title' => '<strong>Agir</strong>',
    'options' => array(
      'html' => 1,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-1',
        'style' => '',
      ),
      'identifier' => 'main-menu_strongagirstrong:soutenir-le-televie',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_strongsoutenirstrong-le-tlvie:soutenir-le-televie.
  $menu_links['main-menu_strongsoutenirstrong-le-tlvie:soutenir-le-televie'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'soutenir-le-televie',
    'router_path' => 'soutenir-le-televie',
    'link_title' => '<strong>Soutenir</strong> le Télévie',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-type-2',
        'style' => '',
      ),
      'html' => 1,
      'identifier' => 'main-menu_strongsoutenirstrong-le-tlvie:soutenir-le-televie',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Agir</strong>');
  t('<strong>Soutenir</strong> le Télévie');
  t('A propos du Télévie');
  t('Activités');
  t('Agenda');
  t('Au jour le jour');
  t('Faire un don');
  t('Home');
  t('Infos utiles');
  t('Le Grand Rallye');
  t('News');

  return $menu_links;
}

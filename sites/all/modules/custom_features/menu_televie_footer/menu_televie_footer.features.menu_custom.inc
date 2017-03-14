<?php
/**
 * @file
 * menu_televie_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_televie_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-televie-footer.
  $menus['menu-menu-televie-footer'] = array(
    'menu_name' => 'menu-menu-televie-footer',
    'title' => 'Menu Télévie Footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Télévie Footer');

  return $menus;
}

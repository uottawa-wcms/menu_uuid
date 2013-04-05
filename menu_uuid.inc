<?php

/**
 * @file
 * Main module functions for the menu_uuid module.
 */


/**
 * Add uuid on menu_custom and menu_links tables
 */
function menu_uuid_sync() {
  _uuid_sync_table('menu_links', 'mlid', 'uuid'); 
}
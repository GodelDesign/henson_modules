<?php
/**
 * @file
 * menu.inc file for henson_global.module
 */

/**
 * Implements hook_menu().
 */
function henson_global_menu_alter(&$items) {
  /* removing access to user/register to stop non-ubercart account signups */
  $items['user/register']['access callback'] = FALSE;
  /* unset node to stop unauthorised access to the page of all nodes */
  unset($items['node']);
}

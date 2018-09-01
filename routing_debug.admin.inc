<?php

/**
 * @file
 * Administration pages - routing_debug.admin.inc - file.
 */

/**
 * Form generator callback for administration page.
 *
 * @return array
 *   Configuration/settings form.
 */
function routing_debug_admin_form() {
  $form = array();
  $form['#config'] = 'routing_debug.settings';

  $form['routing_debug_debug_mode'] = array(
    '#title' => t('Debug mode toggle'),
    '#type' => 'checkbox',
    '#description' => t('Toggle for debug mode. If turned on, additional debug messages are written into watchdog.'),
    '#default_value' => config_get('routing_debug.settings', 'routing_debug_debug_mode'),
  );

  return system_settings_form($form);
}

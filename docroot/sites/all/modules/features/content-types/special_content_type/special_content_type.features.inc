<?php
/**
 * @file
 * special_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function special_content_type_node_info() {
  $items = array(
    'special' => array(
      'name' => t('Special'),
      'base' => 'node_content',
      'description' => t('A food special, drink special, or food and drink special being offered by a business.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

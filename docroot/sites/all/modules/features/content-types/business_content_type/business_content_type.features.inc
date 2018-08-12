<?php
/**
 * @file
 * business_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function business_content_type_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Business'),
      'base' => 'node_content',
      'description' => t('Businesses who are going to have food or drink specials associated with them.  Created using data from the Google Places API'),
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

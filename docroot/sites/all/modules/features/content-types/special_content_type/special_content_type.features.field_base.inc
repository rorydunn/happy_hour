<?php
/**
 * @file
 * special_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function special_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_business'.
  $field_bases['field_business'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_business',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'business' => 'business',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}

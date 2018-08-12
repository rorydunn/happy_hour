<?php
/**
 * @file
 * field_bases.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function field_bases_taxonomy_default_vocabularies() {
  return array(
    'special_types' => array(
      'name' => 'Special Types',
      'machine_name' => 'special_types',
      'description' => 'Designates what type of special a restaurant is offering. ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

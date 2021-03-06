<?php
/**
 * @file
 * texvox_nodes_and_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function texvox_nodes_and_fields_taxonomy_default_vocabularies() {
  return array(
    'tap_to_enter_text' => array(
      'name' => 'Tap to enter',
      'machine_name' => 'tap_to_enter_text',
      'description' => '',
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

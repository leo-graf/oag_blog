<?php
/**
 * @file
 * oag_blog.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function oag_blog_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_oag_tags_blog'.
  $field_bases['field_oag_tags_blog'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_oag_tags_blog',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'oag_blog_post_terms',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}

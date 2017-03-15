<?php
/**
 * @file
 * oag_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function oag_blog_taxonomy_default_vocabularies() {
  return array(
    'oag_blog_post_terms' => array(
      'name' => 'Blog Terms',
      'machine_name' => 'oag_blog_post_terms',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

<?php
/**
 * @file
 * oag_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function oag_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oa_section:oag_section_blog';
  $panelizer->title = 'Blog Section';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oa_section';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'test123-css-id';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe_node_access';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Space',
      'keyword' => 'space',
      'name' => 'entity_from_field:og_group_ref-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = 'test123-body-class';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_bryant';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'oa_styles_oa_pane',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4da17148-a7a9-4da8-a9bf-ef168121174a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b';
  $display->content['new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b'] = $pane;
  $display->panels['contentmain'][0] = 'new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b';
  $pane = new stdClass();
  $pane->pid = 'new-a086793b-7c9a-4d2a-9d06-e1b820511752';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'oag_blog-blog_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'exposed' => array(
      'flagged' => '0',
      'oa_section_ref_target_id' => '',
      'og_group_ref_target_id' => 'CURRENT',
      'og_group_ref_target_id_mine' => 0,
      'og_subspaces_view_all' => 0,
      'og_subspaces_view_parent' => 0,
    ),
    'show_exposed_form' => 0,
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a086793b-7c9a-4d2a-9d06-e1b820511752';
  $display->content['new-a086793b-7c9a-4d2a-9d06-e1b820511752'] = $pane;
  $display->panels['contentmain'][1] = 'new-a086793b-7c9a-4d2a-9d06-e1b820511752';
  $pane = new stdClass();
  $pane->pid = 'new-a1345e0e-4ffb-4445-b615-b8922b7dba10';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a1345e0e-4ffb-4445-b615-b8922b7dba10';
  $display->content['new-a1345e0e-4ffb-4445-b615-b8922b7dba10'] = $pane;
  $display->panels['contentmain'][2] = 'new-a1345e0e-4ffb-4445-b615-b8922b7dba10';
  $pane = new stdClass();
  $pane->pid = 'new-60764651-f3d4-4f32-a25e-56c63162c11f';
  $pane->panel = 'contentmain';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '60764651-f3d4-4f32-a25e-56c63162c11f';
  $display->content['new-60764651-f3d4-4f32-a25e-56c63162c11f'] = $pane;
  $display->panels['contentmain'][3] = 'new-60764651-f3d4-4f32-a25e-56c63162c11f';
  $pane = new stdClass();
  $pane->pid = 'new-099b2121-c02d-4b7b-a553-777239ebe3f5';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-oag_blog-blog_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '099b2121-c02d-4b7b-a553-777239ebe3f5';
  $display->content['new-099b2121-c02d-4b7b-a553-777239ebe3f5'] = $pane;
  $display->panels['sidebar'][0] = 'new-099b2121-c02d-4b7b-a553-777239ebe3f5';
  $pane = new stdClass();
  $pane->pid = 'new-da1e6b67-5b37-4f76-9f12-430846ce1b2c';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'oag_blog_archive-blog_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'full',
    'exposed' => array(
      'type' => array(
        'oag_blog_post' => 'oag_blog_post',
      ),
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'da1e6b67-5b37-4f76-9f12-430846ce1b2c';
  $display->content['new-da1e6b67-5b37-4f76-9f12-430846ce1b2c'] = $pane;
  $display->panels['sidebar'][1] = 'new-da1e6b67-5b37-4f76-9f12-430846ce1b2c';
  $pane = new stdClass();
  $pane->pid = 'new-157fdbca-9c4a-40c1-85f5-837ac31212b8';
  $pane->panel = 'sidebar';
  $pane->type = 'oag_space_menu';
  $pane->subtype = 'oag_space_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 0,
    'return' => 'Abschliessen',
    'cancel' => 'Abbrechen',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'og_menu_single_depth' => '0',
    'og_menu_single_parent' => '0',
    'form_build_id' => 'form-FBIOXsq34cv2yC6KUo2e5YUEFaJESjcclA1zJhKNBKQ',
    'form_token' => 'J85pOlswq4YOt5PY_tKfAof0wy6cucltFKp12PwjZUo',
    'form_id' => 'oag_space_menu_edit_form',
    'op' => 'Abschliessen',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '157fdbca-9c4a-40c1-85f5-837ac31212b8';
  $display->content['new-157fdbca-9c4a-40c1-85f5-837ac31212b8'] = $pane;
  $display->panels['sidebar'][2] = 'new-157fdbca-9c4a-40c1-85f5-837ac31212b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oa_section:oag_section_blog'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oag_blog_post:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oag_blog_post';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '242a4f9d-f161-4aab-80e8-6d2a7af3c06f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6952704b-2053-49ba-8f3c-8422dd3eba74';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'panopoly_image_full',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'crop-height flip',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6952704b-2053-49ba-8f3c-8422dd3eba74';
  $display->content['new-6952704b-2053-49ba-8f3c-8422dd3eba74'] = $pane;
  $display->panels['contentmain'][0] = 'new-6952704b-2053-49ba-8f3c-8422dd3eba74';
  $pane = new stdClass();
  $pane->pid = 'new-012d8e06-5f3d-486a-a1d0-38d35acb2583';
  $pane->panel = 'contentmain';
  $pane->type = 'oa_users_submitted';
  $pane->subtype = 'oa_users_submitted';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'align' => '0',
    'label' => 1,
    'date' => '0',
    'picture' => 0,
    'image_style' => 'oa_medium_thumbnail',
    'node_title' => 1,
    'hide_author' => 0,
    'return' => 'Abschliessen',
    'cancel' => 'Abbrechen',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'form_build_id' => 'form-kXQAzT1JiiRpov9FOAGyoqoCqKC0zrINFoSUDk-6dE4',
    'form_token' => 'ai4DTTKQSP9ewKQfYJyP8LOarxfLsbUpilm7bT8rCTs',
    'form_id' => 'oa_user_submitted_form',
    'op' => 'Abschliessen',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '012d8e06-5f3d-486a-a1d0-38d35acb2583';
  $display->content['new-012d8e06-5f3d-486a-a1d0-38d35acb2583'] = $pane;
  $display->panels['contentmain'][1] = 'new-012d8e06-5f3d-486a-a1d0-38d35acb2583';
  $pane = new stdClass();
  $pane->pid = 'new-3911d4bf-1ac1-4247-a009-3a5014d6a7db';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3911d4bf-1ac1-4247-a009-3a5014d6a7db';
  $display->content['new-3911d4bf-1ac1-4247-a009-3a5014d6a7db'] = $pane;
  $display->panels['contentmain'][2] = 'new-3911d4bf-1ac1-4247-a009-3a5014d6a7db';
  $pane = new stdClass();
  $pane->pid = 'new-994fd439-30dc-4d14-95ee-7739bd989be5';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_oa_related';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '994fd439-30dc-4d14-95ee-7739bd989be5';
  $display->content['new-994fd439-30dc-4d14-95ee-7739bd989be5'] = $pane;
  $display->panels['contentmain'][3] = 'new-994fd439-30dc-4d14-95ee-7739bd989be5';
  $pane = new stdClass();
  $pane->pid = 'new-3776a437-48b7-45ec-a2be-f05221859c17';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_oa_media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'file_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3776a437-48b7-45ec-a2be-f05221859c17';
  $display->content['new-3776a437-48b7-45ec-a2be-f05221859c17'] = $pane;
  $display->panels['contentmain'][4] = 'new-3776a437-48b7-45ec-a2be-f05221859c17';
  $pane = new stdClass();
  $pane->pid = 'new-e032f879-9515-4c0a-8723-09c61f7d69ae';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e032f879-9515-4c0a-8723-09c61f7d69ae';
  $display->content['new-e032f879-9515-4c0a-8723-09c61f7d69ae'] = $pane;
  $display->panels['contentmain'][5] = 'new-e032f879-9515-4c0a-8723-09c61f7d69ae';
  $pane = new stdClass();
  $pane->pid = 'new-d50e0ccc-8eb9-4547-8d9a-5df013df6e43';
  $pane->panel = 'contentmain';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd50e0ccc-8eb9-4547-8d9a-5df013df6e43';
  $display->content['new-d50e0ccc-8eb9-4547-8d9a-5df013df6e43'] = $pane;
  $display->panels['contentmain'][6] = 'new-d50e0ccc-8eb9-4547-8d9a-5df013df6e43';
  $pane = new stdClass();
  $pane->pid = 'new-d1dba569-2327-4e1a-aa8e-f05b4a7d3ae2';
  $pane->panel = 'contentmain';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd1dba569-2327-4e1a-aa8e-f05b4a7d3ae2';
  $display->content['new-d1dba569-2327-4e1a-aa8e-f05b4a7d3ae2'] = $pane;
  $display->panels['contentmain'][7] = 'new-d1dba569-2327-4e1a-aa8e-f05b4a7d3ae2';
  $pane = new stdClass();
  $pane->pid = 'new-b318487d-ec0b-4cdf-b4d0-7e0b93740b8a';
  $pane->panel = 'sidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'section_sidebar_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b318487d-ec0b-4cdf-b4d0-7e0b93740b8a';
  $display->content['new-b318487d-ec0b-4cdf-b4d0-7e0b93740b8a'] = $pane;
  $display->panels['sidebar'][0] = 'new-b318487d-ec0b-4cdf-b4d0-7e0b93740b8a';
  $pane = new stdClass();
  $pane->pid = 'new-af1191c6-5545-4ac7-8760-feb9fa49bc74';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_oag_tags_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'af1191c6-5545-4ac7-8760-feb9fa49bc74';
  $display->content['new-af1191c6-5545-4ac7-8760-feb9fa49bc74'] = $pane;
  $display->panels['sidebar'][1] = 'new-af1191c6-5545-4ac7-8760-feb9fa49bc74';
  $pane = new stdClass();
  $pane->pid = 'new-540a9ab9-6731-4829-828a-25b25ca1c21b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'oa_comment_media-commentnode_attachments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '540a9ab9-6731-4829-828a-25b25ca1c21b';
  $display->content['new-540a9ab9-6731-4829-828a-25b25ca1c21b'] = $pane;
  $display->panels['sidebar'][2] = 'new-540a9ab9-6731-4829-828a-25b25ca1c21b';
  $pane = new stdClass();
  $pane->pid = 'new-0865ef8f-adb2-4e08-b857-8f2ec9ffe66c';
  $pane->panel = 'sidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'default_section_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'panelizer',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0865ef8f-adb2-4e08-b857-8f2ec9ffe66c';
  $display->content['new-0865ef8f-adb2-4e08-b857-8f2ec9ffe66c'] = $pane;
  $display->panels['sidebar'][3] = 'new-0865ef8f-adb2-4e08-b857-8f2ec9ffe66c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:oag_blog_post:default'] = $panelizer;

  return $export;
}

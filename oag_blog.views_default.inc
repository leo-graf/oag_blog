<?php
/**
 * @file
 * oag_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oag_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'oag_blog';
  $view->description = '';
  $view->tag = 'OAG';
  $view->base_table = 'node';
  $view->human_name = 'OAG Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog List';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'oa_form';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['collapsed_filter'] = 0;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'group-content';
  $handler->display->display_options['style_options']['wrapper_class'] = 'group-header';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'counter' => 'counter',
    'field_oa_media' => 'field_oa_media',
  );
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Oops';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no posts for this selection...';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Beziehung: Inhalt: Autor*in */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Beziehung: Flags: trash */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'archived';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'trash';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Beziehung: Kommentar: Kommentare des Beitrags */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Beziehung: Kommentar: Autor*in */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'cid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'commentuid';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Comment Counts */
  $handler->display->display_options['fields']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['fields']['cid_1']['table'] = 'comment';
  $handler->display->display_options['fields']['cid_1']['field'] = 'cid';
  $handler->display->display_options['fields']['cid_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['cid_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['cid_1']['ui_name'] = 'Comment Counts';
  $handler->display->display_options['fields']['cid_1']['label'] = '';
  $handler->display->display_options['fields']['cid_1']['element_type'] = '0';
  $handler->display->display_options['fields']['cid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid_1']['element_wrapper_type'] = '0';
  /* Feld: Comments new count since user last viewed node */
  $handler->display->display_options['fields']['timestamp_new_comments']['id'] = 'timestamp_new_comments';
  $handler->display->display_options['fields']['timestamp_new_comments']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp_new_comments']['field'] = 'timestamp_new_comments';
  $handler->display->display_options['fields']['timestamp_new_comments']['group_type'] = 'sum';
  $handler->display->display_options['fields']['timestamp_new_comments']['ui_name'] = 'Comments new count since user last viewed node';
  $handler->display->display_options['fields']['timestamp_new_comments']['label'] = '';
  $handler->display->display_options['fields']['timestamp_new_comments']['element_type'] = '0';
  $handler->display->display_options['fields']['timestamp_new_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_new_comments']['element_wrapper_type'] = '0';
  /* Feld: Commens updated count since user last viewed node */
  $handler->display->display_options['fields']['timestamp_updated_comments']['id'] = 'timestamp_updated_comments';
  $handler->display->display_options['fields']['timestamp_updated_comments']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp_updated_comments']['field'] = 'timestamp_updated_comments';
  $handler->display->display_options['fields']['timestamp_updated_comments']['group_type'] = 'sum';
  $handler->display->display_options['fields']['timestamp_updated_comments']['ui_name'] = 'Commens updated count since user last viewed node';
  $handler->display->display_options['fields']['timestamp_updated_comments']['label'] = '';
  $handler->display->display_options['fields']['timestamp_updated_comments']['element_type'] = '0';
  $handler->display->display_options['fields']['timestamp_updated_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_updated_comments']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['timestamp_updated_comments']['element_default_classes'] = FALSE;
  /* Feld: Latest Comment CID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['relationship'] = 'cid';
  $handler->display->display_options['fields']['cid']['group_type'] = 'max';
  $handler->display->display_options['fields']['cid']['ui_name'] = 'Latest Comment CID';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'oa_date';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['changed']['oa_date'] = '0';
  /* Feld: Kommentar: Letzter Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['last_date']['id'] = 'last_date';
  $handler->display->display_options['fields']['last_date']['table'] = 'comment';
  $handler->display->display_options['fields']['last_date']['field'] = 'last_date';
  $handler->display->display_options['fields']['last_date']['relationship'] = 'cid';
  $handler->display->display_options['fields']['last_date']['group_type'] = 'max';
  $handler->display->display_options['fields']['last_date']['label'] = '';
  $handler->display->display_options['fields']['last_date']['element_type'] = '0';
  $handler->display->display_options['fields']['last_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['last_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['last_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['last_date']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['last_date']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['last_date']['oa_date'] = '0';
  /* Feld: Benutzer*in: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Feld: Benutzer*in: Picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'image_style' => 'oa_small_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_user_picture']['group_column'] = 'entity_id';
  /* Feld: Feld: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['element_class'] = 'label';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['group_column'] = 'entity_id';
  /* Feld: Inhalt: Section */
  $handler->display->display_options['fields']['oa_section_ref']['id'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['field'] = 'oa_section_ref';
  $handler->display->display_options['fields']['oa_section_ref']['label'] = '';
  $handler->display->display_options['fields']['oa_section_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['oa_section_ref']['element_class'] = 'label';
  $handler->display->display_options['fields']['oa_section_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['oa_section_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['oa_section_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['oa_section_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['oa_section_ref']['group_column'] = 'entity_id';
  /* Feld: Kommentar: Letzter Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['last_date_1']['id'] = 'last_date_1';
  $handler->display->display_options['fields']['last_date_1']['table'] = 'comment';
  $handler->display->display_options['fields']['last_date_1']['field'] = 'last_date';
  $handler->display->display_options['fields']['last_date_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['last_date_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['last_date_1']['label'] = '';
  $handler->display->display_options['fields']['last_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_date_1']['date_format'] = 'oa_date';
  $handler->display->display_options['fields']['last_date_1']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['last_date_1']['oa_date'] = 'oa_date';
  /* Feld: Inhalt: Beitragsdatum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'panopoly_day';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Ym';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['created']['oa_date'] = '0';
  /* Feld: Feld: Primary Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'panopoly_image_full',
    'image_link' => '',
  );
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '800',
  );
  /* Feld: Inhalt: Kommentarstatus */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'node';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Feld: Inhalt: Pfad */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Tags */
  $handler->display->display_options['fields']['field_oag_tags_blog']['id'] = 'field_oag_tags_blog';
  $handler->display->display_options['fields']['field_oag_tags_blog']['table'] = 'field_data_field_oag_tags_blog';
  $handler->display->display_options['fields']['field_oag_tags_blog']['field'] = 'field_oag_tags_blog';
  $handler->display->display_options['fields']['field_oag_tags_blog']['label'] = '';
  $handler->display->display_options['fields']['field_oag_tags_blog']['element_type'] = '0';
  $handler->display->display_options['fields']['field_oag_tags_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oag_tags_blog']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oag_tags_blog']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_oag_tags_blog']['delta_offset'] = '0';
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oag_blog_post' => 'oag_blog_post',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filterkriterium: Flags: Gekennzeichnet */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Include archived content';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filterkriterium: Inhalt: Section (oa_section_ref:target_id) */
  $handler->display->display_options['filters']['oa_section_ref_target_id']['id'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['table'] = 'field_data_oa_section_ref';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['field'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator_id'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['label'] = 'Open Atrium Section';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['operator'] = 'oa_section_ref_target_id_op';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['identifier'] = 'oa_section_ref_target_id';
  $handler->display->display_options['filters']['oa_section_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filterkriterium: Feld: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 2;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Mitgliedern folgender Gruppen';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterium: Inhalt: Tags (field_oag_tags_blog) */
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['id'] = 'field_oag_tags_blog_tid';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['table'] = 'field_data_field_oag_tags_blog';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['field'] = 'field_oag_tags_blog_tid';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['value'] = '';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['expose']['operator_id'] = 'field_oag_tags_blog_tid_op';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['expose']['operator'] = 'field_oag_tags_blog_tid_op';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['expose']['identifier'] = 'field_oag_tags_blog_tid';
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_oag_tags_blog_tid']['vocabulary'] = 'oag_blog_post_terms';
  /* Filterkriterium: Inhalt: Erstellungsjahr */
  $handler->display->display_options['filters']['created_year']['id'] = 'created_year';
  $handler->display->display_options['filters']['created_year']['table'] = 'node';
  $handler->display->display_options['filters']['created_year']['field'] = 'created_year';
  $handler->display->display_options['filters']['created_year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created_year']['expose']['operator_id'] = 'created_year_op';
  $handler->display->display_options['filters']['created_year']['expose']['label'] = 'Erstellungsjahr';
  $handler->display->display_options['filters']['created_year']['expose']['operator'] = 'created_year_op';
  $handler->display->display_options['filters']['created_year']['expose']['identifier'] = 'created_year';
  $handler->display->display_options['filters']['created_year']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filterkriterium: Inhalt: Erstellungsmonat */
  $handler->display->display_options['filters']['created_month']['id'] = 'created_month';
  $handler->display->display_options['filters']['created_month']['table'] = 'node';
  $handler->display->display_options['filters']['created_month']['field'] = 'created_month';
  $handler->display->display_options['filters']['created_month']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created_month']['expose']['operator_id'] = 'created_month_op';
  $handler->display->display_options['filters']['created_month']['expose']['label'] = 'Erstellungsmonat';
  $handler->display->display_options['filters']['created_month']['expose']['operator'] = 'created_month_op';
  $handler->display->display_options['filters']['created_month']['expose']['identifier'] = 'created_month';
  $handler->display->display_options['filters']['created_month']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Blog List */
  $handler = $view->new_display('panel_pane', 'Blog List', 'blog_list');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'OAG View Panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 'exposed_form_configure';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'flagged' => '',
      'oa_section_ref_target_id' => '',
      'og_group_ref_target_id' => '',
      'field_oag_tags_blog_tid' => 'exposed',
      'created_year' => 'exposed',
      'created_month' => 'exposed',
    ),
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:example_task.tkid',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Inhalt: Beitrags-ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['oag_blog'] = array(
    t('Master'),
    t('Blog List'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Mehr'),
    t('Oops'),
    t('There are no posts for this selection...'),
    t('Autor'),
    t('archived'),
    t('Kommentare'),
    t('commentuid'),
    t('.'),
    t(','),
    t('Kommentarstatus'),
    t('Typ'),
    t('Include archived content'),
    t('Open Atrium Section'),
    t('Mitgliedern folgender Gruppen'),
    t('Tags'),
    t('Erstellungsjahr'),
    t('Erstellungsmonat'),
    t('OAG View Panes'),
  );
  $export['oag_blog'] = $view;

  $view = new view();
  $view->name = 'oag_blog_archive';
  $view->description = '';
  $view->tag = 'OAG';
  $view->base_table = 'node';
  $view->human_name = 'OAG Blog Archive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Archive';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'oag-blog-archive-row';
  $handler->display->display_options['style_options']['wrapper_class'] = 'oag-blog-archive-wrapper';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Inhalt: Beitragsdatum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['created']['oa_date'] = '0';
  /* Feld: Inhalt: Beitragsdatum */
  $handler->display->display_options['fields']['created_2']['id'] = 'created_2';
  $handler->display->display_options['fields']['created_2']['table'] = 'node';
  $handler->display->display_options['fields']['created_2']['field'] = 'created';
  $handler->display->display_options['fields']['created_2']['label'] = '';
  $handler->display->display_options['fields']['created_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_2']['element_type'] = '0';
  $handler->display->display_options['fields']['created_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_2']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_2']['custom_date_format'] = 'm';
  $handler->display->display_options['fields']['created_2']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['created_2']['oa_date'] = '0';
  /* Feld: Inhalt: Beitragsdatum */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_type'] = '0';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'F';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'oa_date';
  $handler->display->display_options['fields']['created_1']['oa_date'] = '0';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'group/node/1/newsletters?year=[created]&month=[created_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Blog Archive Pane */
  $handler = $view->new_display('panel_pane', 'Blog Archive Pane', 'blog_archive');
  $handler->display->display_options['pane_category']['name'] = 'OAG View Panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['exposed_form_configure'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['exposed_form_overrides'] = array(
    'filters' => array(
      'type' => '',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['oag_blog_archive'] = array(
    t('Master'),
    t('Archiv'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Typ'),
    t('Blog Archive Pane'),
    t('OAG View Panes'),
  );
  $export['oag_blog_archive'] = $view;

  return $export;
}

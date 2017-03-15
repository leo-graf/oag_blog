<?php
/**
 * @file
 * oag_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function oag_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_5a160dcc-b657-4bda-8f31-38ea9d6e783f';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -15;
  $handler->conf = array(
    'title' => 'Blog Edit Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'oag_blog_post' => 'oag_blog_post',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'name' => 'blog-edit-page',
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '664920a8-9a8b-404e-beb4-5d42a6f3e2ad';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6c84acfb-ccfa-4a0b-99a6-924edc07161e';
  $pane->panel = 'contentmain';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6c84acfb-ccfa-4a0b-99a6-924edc07161e';
  $display->content['new-6c84acfb-ccfa-4a0b-99a6-924edc07161e'] = $pane;
  $display->panels['contentmain'][0] = 'new-6c84acfb-ccfa-4a0b-99a6-924edc07161e';
  $pane = new stdClass();
  $pane->pid = 'new-c75e8799-4511-477b-b440-f34798eeb1c0';
  $pane->panel = 'contentmain';
  $pane->type = 'node_form_path';
  $pane->subtype = 'node_form_path';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c75e8799-4511-477b-b440-f34798eeb1c0';
  $display->content['new-c75e8799-4511-477b-b440-f34798eeb1c0'] = $pane;
  $display->panels['contentmain'][1] = 'new-c75e8799-4511-477b-b440-f34798eeb1c0';
  $pane = new stdClass();
  $pane->pid = 'new-0a09a679-8543-422f-8c2e-0d0fd969f339';
  $pane->panel = 'contentmain';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0a09a679-8543-422f-8c2e-0d0fd969f339';
  $display->content['new-0a09a679-8543-422f-8c2e-0d0fd969f339'] = $pane;
  $display->panels['contentmain'][2] = 'new-0a09a679-8543-422f-8c2e-0d0fd969f339';
  $pane = new stdClass();
  $pane->pid = 'new-35af4e5c-8241-4e0b-ac4d-2026e48c2885';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:group_access';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '35af4e5c-8241-4e0b-ac4d-2026e48c2885';
  $display->content['new-35af4e5c-8241-4e0b-ac4d-2026e48c2885'] = $pane;
  $display->panels['sidebar'][0] = 'new-35af4e5c-8241-4e0b-ac4d-2026e48c2885';
  $pane = new stdClass();
  $pane->pid = 'new-af8b530f-12c3-4d94-8420-3c8ef3cadf97';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_oag_promoted';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => 'Mark as important',
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
  $pane->uuid = 'af8b530f-12c3-4d94-8420-3c8ef3cadf97';
  $display->content['new-af8b530f-12c3-4d94-8420-3c8ef3cadf97'] = $pane;
  $display->panels['sidebar'][1] = 'new-af8b530f-12c3-4d94-8420-3c8ef3cadf97';
  $pane = new stdClass();
  $pane->pid = 'new-9e222099-63f4-4ae4-8f9b-400278672ae0';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_oag_promoted_due_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9e222099-63f4-4ae4-8f9b-400278672ae0';
  $display->content['new-9e222099-63f4-4ae4-8f9b-400278672ae0'] = $pane;
  $display->panels['sidebar'][2] = 'new-9e222099-63f4-4ae4-8f9b-400278672ae0';
  $pane = new stdClass();
  $pane->pid = 'new-316932d4-d342-45ef-8ddd-3aee5f75adc2';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => 'Featured image',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '316932d4-d342-45ef-8ddd-3aee5f75adc2';
  $display->content['new-316932d4-d342-45ef-8ddd-3aee5f75adc2'] = $pane;
  $display->panels['sidebar'][3] = 'new-316932d4-d342-45ef-8ddd-3aee5f75adc2';
  $pane = new stdClass();
  $pane->pid = 'new-3e512c5d-c078-4846-80be-8af3e1542958';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_oa_notifications';
  $pane->subtype = 'node_form_oa_notifications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3e512c5d-c078-4846-80be-8af3e1542958';
  $display->content['new-3e512c5d-c078-4846-80be-8af3e1542958'] = $pane;
  $display->panels['sidebar'][4] = 'new-3e512c5d-c078-4846-80be-8af3e1542958';
  $pane = new stdClass();
  $pane->pid = 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_menu';
  $pane->subtype = 'node_form_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2362dc2f-60f2-42e4-b13f-82918fd4b1a8';
  $display->content['new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8'] = $pane;
  $display->panels['sidebar'][5] = 'new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8';
  $pane = new stdClass();
  $pane->pid = 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'ff7df286-18fd-4ab0-bd53-1102821bc86f';
  $display->content['new-ff7df286-18fd-4ab0-bd53-1102821bc86f'] = $pane;
  $display->panels['sidebar'][6] = 'new-ff7df286-18fd-4ab0-bd53-1102821bc86f';
  $pane = new stdClass();
  $pane->pid = 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_author';
  $pane->subtype = 'node_form_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9393082c-61cd-4cc5-801f-bfe809fcbd43';
  $display->content['new-9393082c-61cd-4cc5-801f-bfe809fcbd43'] = $pane;
  $display->panels['sidebar'][7] = 'new-9393082c-61cd-4cc5-801f-bfe809fcbd43';
  $pane = new stdClass();
  $pane->pid = 'new-82008dc7-eac3-4985-92d9-0cc6e48cc729';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_comment';
  $pane->subtype = 'node_form_comment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '82008dc7-eac3-4985-92d9-0cc6e48cc729';
  $display->content['new-82008dc7-eac3-4985-92d9-0cc6e48cc729'] = $pane;
  $display->panels['sidebar'][8] = 'new-82008dc7-eac3-4985-92d9-0cc6e48cc729';
  $pane = new stdClass();
  $pane->pid = 'new-250cd2f8-caf7-437c-9177-3babe6738d57';
  $pane->panel = 'sidebar';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '250cd2f8-caf7-437c-9177-3babe6738d57';
  $display->content['new-250cd2f8-caf7-437c-9177-3babe6738d57'] = $pane;
  $display->panels['sidebar'][9] = 'new-250cd2f8-caf7-437c-9177-3babe6738d57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_5a160dcc-b657-4bda-8f31-38ea9d6e783f'] = $handler;

  return $export;
}

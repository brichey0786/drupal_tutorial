<?php

/**
 * Implements hook_views_default_views.
 */
function schools_views_default_views() {
  $view = schools_schools_view();
  $views[$view->name] = $view;
  return $views;
}

function schools_schools_view() {
  $view = new view();
  $view->name = 'schools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'schools';
  $view->human_name = 'Schools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schools';
  $handler->display->display_options['css_class'] = 'school-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'school';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Schools: School ID */
  $handler->display->display_options['fields']['school_id']['id'] = 'school_id';
  $handler->display->display_options['fields']['school_id']['table'] = 'schools';
  $handler->display->display_options['fields']['school_id']['field'] = 'school_id';
  $handler->display->display_options['fields']['school_id']['label'] = '';
  $handler->display->display_options['fields']['school_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['school_id']['element_label_colon'] = FALSE;
  /* Field: Schools: School name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'schools';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'school__name';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Schools: Zip Code */
  $handler->display->display_options['fields']['zip']['id'] = 'zip';
  $handler->display->display_options['fields']['zip']['table'] = 'schools';
  $handler->display->display_options['fields']['zip']['field'] = 'zip';
  $handler->display->display_options['fields']['zip']['label'] = '';
  $handler->display->display_options['fields']['zip']['exclude'] = TRUE;
  $handler->display->display_options['fields']['zip']['element_label_colon'] = FALSE;
  /* Field: Schools: School address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'schools';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['address']['alter']['text'] = '<div class="address__title">Address</div>
    <div class="address__street">[address]</div>
    <div class="address__zip">[zip]</div>';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['element_wrapper_class'] = 'b-school-address';
  $handler->display->display_options['fields']['address']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="school__actions">
      <a class="school__edit" href=\'/schools/[school_id]\'>Edit</a>
      <a class="school__delete" href=\'/schools/[school_id]\'>Delete</a>
    </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  
  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  
  return $view;
}
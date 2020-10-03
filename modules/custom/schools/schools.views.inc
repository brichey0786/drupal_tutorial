<?php


/**
 * Implements hook_views_data.
 */
function schools_views_data() {
  // the table name in the database
  $data['schools']['table']['group'] = t('Schools');

  // Define this as a base table – a table that can be described in itself by
  // views (and not just being brought in as a relationship). In reality this
  // is not very useful for this table, as it isn't really a distinct object of
  // its own, but it makes a good example.
  $data['schools']['table']['base'] = array(
    // This is the identifier field for the view.
    'field' => 'school_id',
    'title' => t('Schools'),
    'help' => t('Schools table.'),
    'weight' => -10,
  );

  // Example numeric text field.
  $data['schools']['school_id'] = array(
    'title' => t('School ID'),
    'help' => t('Unique identifier of a school'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  $data['schools']['name'] = array(
    'title' => t('School name'),
    'help' => t('Name of the school.'),
    'field' => array(
      'handler' => 'views_handler_field',
      // This is use by the table display plugin.
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['schools']['address'] = array(
    'title' => t('School address'),
    'help' => t('Address of the school.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['schools']['zip'] = array(
    'title' => t('Zip Code'),
    'help' => t('5 digit zip code of the school.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  return $data;
}
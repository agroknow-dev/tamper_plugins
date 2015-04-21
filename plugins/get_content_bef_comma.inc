<?php

/**
 * @file
 * Find/replace text.
 */

$plugin = array(
  'form' => 'feeds_tamper_get_content_bef_comma_form',
  'callback' => 'feeds_tamper_get_content_bef_comma_callback',
  'name' => 'Get all content before comma',
  'multi' => 'loop',
  'category' => 'Text',
);

function feeds_tamper_get_content_bef_comma_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#markup'] = t('Get all content before comma');

  return $form;
}



function feeds_tamper_get_content_bef_comma_callback($result, $item_key, $element_key, &$field, $settings, $source) {
    $field = (strstr($field, ',') ? substr($field, 0, strpos($field, ',')) : $print); //preg_replace('/^([^,]*).*$/', '$1', $field);
}

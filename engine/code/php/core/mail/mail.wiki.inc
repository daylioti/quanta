<?php

/**
 * Implements hook_cron().
 * @param $vars
 */
function wiki_MAILFORM($attributes, $form_id, $string, $env) {


  if (!isset($attributes['ok_message'])) {
    $attributes['ok_message'] = 'Your mail has been sent. Thanks!';
  }
  $form_data = wiki_FORM($attributes, $form_id, $string, $env);



  return $form_data;
}
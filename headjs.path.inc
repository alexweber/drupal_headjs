<?php

/**
 * Get the path of head.min.js file
 * @return string
 */
function headjs_get_path() {
  return _headjs_path() . HEADJS_FULL;
}

/**
 * Get the path of head.js library
 * Integrates with Libraries API
 * @return string
 */
function _headjs_path() {
  static $path;
  if (!isset($path)) {
    $path = function_exists('libraries_get_path') ? libraries_get_path('headjs') : 'sites/all/libraries/headjs';
  }
  
  if ($path) {
    $path .= '/';
  }
  
  return $path;
}

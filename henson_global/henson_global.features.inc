<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function henson_global_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function henson_global_imagecache_default_presets() {
  $items = array(
    '170_auto' => array(
      'presetname' => '170_auto',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '170px',
            'height' => '130px',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    '320w_240h' => array(
      'presetname' => '320w_240h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '320',
            'height' => '240',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    '75w_75h' => array(
      'presetname' => '75w_75h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '75',
            'height' => '75',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'background_image' => array(
      'presetname' => 'background_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'smartcrop',
          'action' => 'smartcrop_scale_and_crop',
          'data' => array(
            'width' => '922',
            'height' => '800',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'campaign_slideshow' => array(
      'presetname' => 'campaign_slideshow',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '960px',
            'height' => '520px',
          ),
        ),
      ),
    ),
    'store_square' => array(
      'presetname' => 'store_square',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => 'auto',
            'height' => '200px',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'smartcrop',
          'action' => 'smartcrop_crop',
          'data' => array(
            'width' => '175px',
            'height' => '200px',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function henson_global_node_info() {
  $items = array(
    'backgrounds_static' => array(
      'name' => t('Static Page Backgrounds'),
      'module' => 'features',
      'description' => t('Each field contains an image to replace the background slideshows.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'collaboration' => array(
      'name' => t('collaboration'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'facebook_feed' => array(
      'name' => t('Facebook Feed'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'film' => array(
      'name' => t('Film'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'stockists' => array(
      'name' => t('Stockists'),
      'module' => 'features',
      'description' => t('Content type for adding stockists the table on stockists page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'vibe_images' => array(
      'name' => t('Project Gallery'),
      'module' => 'features',
      'description' => t('Content type for fading background images from collections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'module' => 'features',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_uc_product_default_classes().
 */
function henson_global_uc_product_default_classes() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product_cass_wallets' => array(
      'name' => t('Wallets'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product_class_bags' => array(
      'name' => t('Bags'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product_class_cuffs' => array(
      'name' => t('Cuffs'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product_class_earrings' => array(
      'name' => t('Earrings'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product_class_neckpieces' => array(
      'name' => t('Necklaces'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'product_class_rings' => array(
      'name' => t('Rings'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function henson_global_views_api() {
  return array(
    'api' => '2',
  );
}

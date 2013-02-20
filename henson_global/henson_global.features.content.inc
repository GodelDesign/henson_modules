<?php

/**
 * Implementation of hook_content_default_fields().
 */
function henson_global_content_default_fields() {
  $fields = array();

  // Exported field: field_image_collaborations_bg
  $fields['backgrounds_static-field_image_collaborations_bg'] = array(
    'field_name' => 'field_image_collaborations_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Collaborations',
      'weight' => '36',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_contact_bg
  $fields['backgrounds_static-field_image_contact_bg'] = array(
    'field_name' => 'field_image_contact_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Contact Page',
      'weight' => '31',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_films_bg
  $fields['backgrounds_static-field_image_films_bg'] = array(
    'field_name' => 'field_image_films_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Films',
      'weight' => '35',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_home_bg
  $fields['backgrounds_static-field_image_home_bg'] = array(
    'field_name' => 'field_image_home_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Home',
      'weight' => '37',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_journal_bg
  $fields['backgrounds_static-field_image_journal_bg'] = array(
    'field_name' => 'field_image_journal_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Journal Pages',
      'weight' => '33',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_stockists_bg
  $fields['backgrounds_static-field_image_stockists_bg'] = array(
    'field_name' => 'field_image_stockists_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Stockists',
      'weight' => '34',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_store_bg
  $fields['backgrounds_static-field_image_store_bg'] = array(
    'field_name' => 'field_image_store_bg',
    'type_name' => 'backgrounds_static',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Store Page',
      'weight' => '32',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_journal_image
  $fields['blog-field_journal_image'] = array(
    'field_name' => 'field_journal_image',
    'type_name' => 'blog',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Journal Image',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_collab_bg
  $fields['collaboration-field_image_collab_bg'] = array(
    'field_name' => 'field_image_collab_bg',
    'type_name' => 'collaboration',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_view_collab_slides
  $fields['collaboration-field_view_collab_slides'] = array(
    'field_name' => 'field_view_collab_slides',
    'type_name' => 'collaboration',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_project_gallery' => 'display_project_gallery',
      'collections' => 0,
      'collections_splash' => 0,
      'latest_journal_entry' => 0,
      'home' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'product_list' => 0,
      'background_images' => 0,
      'collections_by_term' => 0,
      'shop_by_terms' => 0,
      'admin_sort_products' => 0,
      'admin_bulk_operations' => 0,
      'display_product' => 0,
      'redirect_collection' => 0,
      'stockists' => 0,
      'admin_content' => 0,
      'admin_users' => 0,
      'shop_by_terms_import' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 1,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_project_gallery|block_2',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View display',
      'weight' => '-3',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_film
  $fields['film-field_film'] = array(
    'field_name' => 'field_film',
    'type_name' => 'film',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '900',
      'video_height' => '506',
      'video_autoplay' => 0,
      'preview_width' => '900',
      'preview_height' => '506',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'vimeo' => 'vimeo',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Film',
      'weight' => '-4',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_image_cache
  $fields['product-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
      ),
      'full' => array(
        'format' => 'hidden',
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => NULL,
      'progress_indicator' => NULL,
      'max_filesize_per_file' => NULL,
      'max_filesize_per_node' => NULL,
      'max_resolution' => NULL,
      'min_resolution' => NULL,
      'alt' => NULL,
      'custom_alt' => 1,
      'title' => NULL,
      'custom_title' => 1,
      'title_type' => NULL,
      'default_image' => NULL,
      'use_default_image' => NULL,
      'label' => 'Store Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_product_image
  $fields['product-field_product_image'] = array(
    'field_name' => 'field_product_image',
    'type_name' => 'product',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Gallery Image',
      'weight' => 0,
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_weight
  $fields['product-field_weight'] = array(
    'field_name' => 'field_weight',
    'type_name' => 'product',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '-30
-29
-28
-27
-26
-25
-24
-23
-22
-21
-20
-19
-18
-17
-16
-15
-14
-13
-12
-11
-10
-9
-8
-7
-6
-5
-4
-3
-2
-1
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => 'return array( 0 => array(\'value\' => \'0\') );',
      'label' => 'Weight',
      'weight' => '-2',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_image_cache
  $fields['product_cass_wallets-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product_cass_wallets',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_integer_weight
  $fields['product_cass_wallets-field_integer_weight'] = array(
    'field_name' => 'field_integer_weight',
    'type_name' => 'product_cass_wallets',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_integer_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight (for sorting)',
      'weight' => '32',
      'description' => 'This number is used to sort products in the store grid display, lower weights display earlier.<br />
Don\'t try to edit this directly, instead use the <a href="/admin/sort-products">Administration Tool</a> to sort your products.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_view_display
  $fields['product_cass_wallets-field_view_display'] = array(
    'field_name' => 'field_view_display',
    'type_name' => 'product_cass_wallets',
    'display_settings' => array(
      'weight' => '34',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_product' => 'display_product',
      'admin_content' => 0,
      'admin_users' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'admin_bulk_operations' => 0,
      'admin_sort_products' => 0,
      'background_images' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'collections' => 0,
      'collections_by_term' => 0,
      'collections_splash' => 0,
      'display_project_gallery' => 0,
      'home' => 0,
      'latest_journal_entry' => 0,
      'product_list' => 0,
      'redirect_collection' => 0,
      'shop_by_terms' => 0,
      'shop_by_terms_import' => 0,
      'stockists' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_product|page_1',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '34',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_image_cache
  $fields['product_class_bags-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product_class_bags',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
      ),
      'full' => array(
        'format' => 'hidden',
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_integer_weight
  $fields['product_class_bags-field_integer_weight'] = array(
    'field_name' => 'field_integer_weight',
    'type_name' => 'product_class_bags',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_integer_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight (for sorting)',
      'weight' => '32',
      'description' => 'This number is used to sort products in the store grid display, lower weights display earlier.<br />
Don\'t try to edit this directly, instead use the <a href="/admin/sort-products">Administration Tool</a> to sort your products.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_view_display
  $fields['product_class_bags-field_view_display'] = array(
    'field_name' => 'field_view_display',
    'type_name' => 'product_class_bags',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_product' => 'display_product',
      'admin_content' => 0,
      'admin_users' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'admin_bulk_operations' => 0,
      'admin_sort_products' => 0,
      'background_images' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'collections' => 0,
      'collections_by_term' => 0,
      'collections_splash' => 0,
      'display_project_gallery' => 0,
      'home' => 0,
      'latest_journal_entry' => 0,
      'product_list' => 0,
      'redirect_collection' => 0,
      'shop_by_terms' => 0,
      'shop_by_terms_import' => 0,
      'stockists' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_product|page_1',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '34',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_image_cache
  $fields['product_class_cuffs-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product_class_cuffs',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_integer_weight
  $fields['product_class_cuffs-field_integer_weight'] = array(
    'field_name' => 'field_integer_weight',
    'type_name' => 'product_class_cuffs',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_integer_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight (for sorting)',
      'weight' => '32',
      'description' => 'This number is used to sort products in the store grid display, lower weights display earlier.<br />
Don\'t try to edit this directly, instead use the <a href="/admin/sort-products">Administration Tool</a> to sort your products.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_view_display
  $fields['product_class_cuffs-field_view_display'] = array(
    'field_name' => 'field_view_display',
    'type_name' => 'product_class_cuffs',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_product' => 'display_product',
      'admin_content' => 0,
      'admin_users' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'admin_bulk_operations' => 0,
      'admin_sort_products' => 0,
      'background_images' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'collections' => 0,
      'collections_by_term' => 0,
      'collections_splash' => 0,
      'display_project_gallery' => 0,
      'home' => 0,
      'latest_journal_entry' => 0,
      'product_list' => 0,
      'redirect_collection' => 0,
      'shop_by_terms' => 0,
      'shop_by_terms_import' => 0,
      'stockists' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_product|page_1',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '33',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_image_cache
  $fields['product_class_earrings-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product_class_earrings',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_integer_weight
  $fields['product_class_earrings-field_integer_weight'] = array(
    'field_name' => 'field_integer_weight',
    'type_name' => 'product_class_earrings',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_integer_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight (for sorting)',
      'weight' => '32',
      'description' => 'This number is used to sort products in the store grid display, lower weights display earlier.<br />
Don\'t try to edit this directly, instead use the <a href="/admin/sort-products">Administration Tool</a> to sort your products.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_view_display
  $fields['product_class_earrings-field_view_display'] = array(
    'field_name' => 'field_view_display',
    'type_name' => 'product_class_earrings',
    'display_settings' => array(
      'weight' => '34',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_product' => 'display_product',
      'admin_content' => 0,
      'admin_users' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'admin_bulk_operations' => 0,
      'admin_sort_products' => 0,
      'background_images' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'collections' => 0,
      'collections_by_term' => 0,
      'collections_splash' => 0,
      'display_project_gallery' => 0,
      'home' => 0,
      'latest_journal_entry' => 0,
      'product_list' => 0,
      'redirect_collection' => 0,
      'shop_by_terms' => 0,
      'shop_by_terms_import' => 0,
      'stockists' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_product|page_1',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '34',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_image_cache
  $fields['product_class_neckpieces-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product_class_neckpieces',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_integer_weight
  $fields['product_class_neckpieces-field_integer_weight'] = array(
    'field_name' => 'field_integer_weight',
    'type_name' => 'product_class_neckpieces',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_integer_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight (for sorting)',
      'weight' => '32',
      'description' => 'This number is used to sort products in the store grid display, lower weights display earlier.<br />
Don\'t try to edit this directly, instead use the <a href="/admin/sort-products">Administration Tool</a> to sort your products.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_view_display
  $fields['product_class_neckpieces-field_view_display'] = array(
    'field_name' => 'field_view_display',
    'type_name' => 'product_class_neckpieces',
    'display_settings' => array(
      'weight' => '34',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_product' => 'display_product',
      'admin_content' => 0,
      'admin_users' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'admin_bulk_operations' => 0,
      'admin_sort_products' => 0,
      'background_images' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'collections' => 0,
      'collections_by_term' => 0,
      'collections_splash' => 0,
      'display_project_gallery' => 0,
      'home' => 0,
      'latest_journal_entry' => 0,
      'product_list' => 0,
      'redirect_collection' => 0,
      'shop_by_terms' => 0,
      'shop_by_terms_import' => 0,
      'stockists' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_product|page_1',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '34',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_image_cache
  $fields['product_class_rings-field_image_cache'] = array(
    'field_name' => 'field_image_cache',
    'type_name' => 'product_class_rings',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'gif jpg png',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Images',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_integer_weight
  $fields['product_class_rings-field_integer_weight'] = array(
    'field_name' => 'field_integer_weight',
    'type_name' => 'product_class_rings',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_integer_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weight (for sorting)',
      'weight' => '31',
      'description' => 'This number is used to sort products in the store grid display, lower weights display earlier.<br />
Don\'t try to edit this directly, instead use the <a href="/admin/sort-products">Administration Tool</a> to sort your products.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_view_display
  $fields['product_class_rings-field_view_display'] = array(
    'field_name' => 'field_view_display',
    'type_name' => 'product_class_rings',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_product' => 'display_product',
      'admin_content' => 0,
      'admin_users' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'admin_bulk_operations' => 0,
      'admin_sort_products' => 0,
      'background_images' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'collections' => 0,
      'collections_by_term' => 0,
      'collections_splash' => 0,
      'display_project_gallery' => 0,
      'home' => 0,
      'latest_journal_entry' => 0,
      'product_list' => 0,
      'redirect_collection' => 0,
      'shop_by_terms' => 0,
      'shop_by_terms_import' => 0,
      'stockists' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_product|page_1',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '33',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_link_stockist
  $fields['stockists-field_link_stockist'] = array(
    'field_name' => 'field_link_stockist',
    'type_name' => 'stockists',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => 'stockist-link',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Stockist link',
      'weight' => '6',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_text_cities
  $fields['stockists-field_text_cities'] = array(
    'field_name' => 'field_text_cities',
    'type_name' => 'stockists',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '100',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_text_cities][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cities / Online',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_image
  $fields['vibe_images-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'vibe_images',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'use_default_image' => 0,
      'label' => 'Images',
      'weight' => '7',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_view_gallery_display
  $fields['vibe_images-field_view_gallery_display'] = array(
    'field_name' => 'field_view_gallery_display',
    'type_name' => 'vibe_images',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'display_project_gallery' => 'display_project_gallery',
      'collections' => 0,
      'collections_splash' => 0,
      'latest_journal_entry' => 0,
      'home' => 0,
      'collection_1' => 0,
      'collection_2' => 0,
      'collection_3' => 0,
      'collection_4' => 0,
      'collection_5' => 0,
      'collection_6' => 0,
      'product_list' => 0,
      'background_images' => 0,
      'collections_by_term' => 0,
      'shop_by_terms' => 0,
      'admin_sort_products' => 0,
      'admin_bulk_operations' => 0,
      'display_product' => 0,
      'redirect_collection' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'taxonomy_term' => 0,
      'date_browser' => 0,
      'uc_products' => 0,
      'admin_content' => 0,
      'admin_users' => 0,
    ),
    'super_default' => 1,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'display_project_gallery|default',
      'vargs' => '%nid',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'View Display',
      'weight' => '-2',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cities / Online');
  t('Collaborations');
  t('Contact Page');
  t('Film');
  t('Films');
  t('Gallery Image');
  t('Home');
  t('Image');
  t('Images');
  t('Journal Image');
  t('Journal Pages');
  t('Stockist link');
  t('Stockists');
  t('Store Image');
  t('Store Page');
  t('View Display');
  t('View display');
  t('Weight');
  t('Weight (for sorting)');

  return $fields;
}

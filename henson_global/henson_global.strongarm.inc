<?php

/**
 * Implementation of hook_strongarm().
 */
function henson_global_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'rubik';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_backgrounds_static';
  $strongarm->value = 0;
  $export['comment_anonymous_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_collaboration';
  $strongarm->value = 0;
  $export['comment_anonymous_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_facebook_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_film';
  $strongarm->value = 0;
  $export['comment_anonymous_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stockists';
  $strongarm->value = 0;
  $export['comment_anonymous_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_vibe_images';
  $strongarm->value = 0;
  $export['comment_anonymous_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_backgrounds_static';
  $strongarm->value = '0';
  $export['comment_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_collaboration';
  $strongarm->value = '0';
  $export['comment_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_backgrounds_static';
  $strongarm->value = '3';
  $export['comment_controls_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_collaboration';
  $strongarm->value = '3';
  $export['comment_controls_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_facebook_feed';
  $strongarm->value = '3';
  $export['comment_controls_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_film';
  $strongarm->value = '3';
  $export['comment_controls_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_stockists';
  $strongarm->value = '3';
  $export['comment_controls_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_vibe_images';
  $strongarm->value = '3';
  $export['comment_controls_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_backgrounds_static';
  $strongarm->value = '4';
  $export['comment_default_mode_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_collaboration';
  $strongarm->value = '4';
  $export['comment_default_mode_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_facebook_feed';
  $strongarm->value = '4';
  $export['comment_default_mode_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_film';
  $strongarm->value = '4';
  $export['comment_default_mode_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stockists';
  $strongarm->value = '4';
  $export['comment_default_mode_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_vibe_images';
  $strongarm->value = '4';
  $export['comment_default_mode_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_backgrounds_static';
  $strongarm->value = '1';
  $export['comment_default_order_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_collaboration';
  $strongarm->value = '1';
  $export['comment_default_order_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_facebook_feed';
  $strongarm->value = '1';
  $export['comment_default_order_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_film';
  $strongarm->value = '1';
  $export['comment_default_order_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_stockists';
  $strongarm->value = '1';
  $export['comment_default_order_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_vibe_images';
  $strongarm->value = '1';
  $export['comment_default_order_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_backgrounds_static';
  $strongarm->value = '50';
  $export['comment_default_per_page_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_collaboration';
  $strongarm->value = '50';
  $export['comment_default_per_page_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_facebook_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_film';
  $strongarm->value = '50';
  $export['comment_default_per_page_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stockists';
  $strongarm->value = '50';
  $export['comment_default_per_page_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_vibe_images';
  $strongarm->value = '50';
  $export['comment_default_per_page_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_facebook_feed';
  $strongarm->value = '2';
  $export['comment_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_film';
  $strongarm->value = '2';
  $export['comment_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_backgrounds_static';
  $strongarm->value = '0';
  $export['comment_form_location_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_collaboration';
  $strongarm->value = '0';
  $export['comment_form_location_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_facebook_feed';
  $strongarm->value = '0';
  $export['comment_form_location_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_film';
  $strongarm->value = '0';
  $export['comment_form_location_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stockists';
  $strongarm->value = '0';
  $export['comment_form_location_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_vibe_images';
  $strongarm->value = '0';
  $export['comment_form_location_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_backgrounds_static';
  $strongarm->value = '1';
  $export['comment_preview_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_collaboration';
  $strongarm->value = '1';
  $export['comment_preview_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_facebook_feed';
  $strongarm->value = '1';
  $export['comment_preview_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_film';
  $strongarm->value = '1';
  $export['comment_preview_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stockists';
  $strongarm->value = '1';
  $export['comment_preview_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_vibe_images';
  $strongarm->value = '1';
  $export['comment_preview_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stockists';
  $strongarm->value = '0';
  $export['comment_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_backgrounds_static';
  $strongarm->value = '1';
  $export['comment_subject_field_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_collaboration';
  $strongarm->value = '1';
  $export['comment_subject_field_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_facebook_feed';
  $strongarm->value = '1';
  $export['comment_subject_field_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_film';
  $strongarm->value = '1';
  $export['comment_subject_field_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stockists';
  $strongarm->value = '1';
  $export['comment_subject_field_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_vibe_images';
  $strongarm->value = '1';
  $export['comment_subject_field_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_vibe_images';
  $strongarm->value = '0';
  $export['comment_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_backgrounds_static';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '-2',
    'path' => '30',
    'path_redirect' => '30',
    'xmlsitemap' => '30',
  );
  $export['content_extra_weights_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_collaboration';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '5',
    'menu' => '-4',
    'path' => '6',
    'path_redirect' => '4',
    'xmlsitemap' => '3',
  );
  $export['content_extra_weights_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_film';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'comment_settings' => '4',
    'menu' => '-3',
    'path' => '5',
    'path_redirect' => '2',
    'xmlsitemap' => '3',
  );
  $export['content_extra_weights_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '4',
    'author' => '5',
    'options' => '-1',
    'comment_settings' => '8',
    'menu' => '3',
    'taxonomy' => '1',
    'path' => '7',
    'xmlsitemap' => '6',
  );
  $export['content_extra_weights_product'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product_cass_wallets';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '0',
    'taxonomy' => '-3',
    'path' => '30',
    'path_redirect' => '30',
    'xmlsitemap' => '30',
    'shipping' => '0',
    'base' => '-1',
    'body' => '1',
  );
  $export['content_extra_weights_product_cass_wallets'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product_class_bags';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '0',
    'taxonomy' => '-3',
    'path' => '30',
    'path_redirect' => '30',
    'xmlsitemap' => '30',
    'shipping' => '0',
    'base' => '-1',
    'body' => '1',
  );
  $export['content_extra_weights_product_class_bags'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product_class_cuffs';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '0',
    'taxonomy' => '-3',
    'path' => '30',
    'path_redirect' => '30',
    'shipping' => '0',
    'base' => '-1',
    'xmlsitemap' => '30',
  );
  $export['content_extra_weights_product_class_cuffs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product_class_earrings';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '0',
    'taxonomy' => '-3',
    'path' => '30',
    'path_redirect' => '30',
    'shipping' => '0',
    'base' => '-1',
    'xmlsitemap' => '30',
    'body' => '1',
  );
  $export['content_extra_weights_product_class_earrings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product_class_neckpieces';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '0',
    'taxonomy' => '-3',
    'path' => '30',
    'path_redirect' => '30',
    'shipping' => '0',
    'base' => '-1',
    'xmlsitemap' => '30',
  );
  $export['content_extra_weights_product_class_neckpieces'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_product_class_rings';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '0',
    'taxonomy' => '-3',
    'path' => '30',
    'path_redirect' => '30',
    'shipping' => '0',
    'base' => '-1',
    'xmlsitemap' => '30',
  );
  $export['content_extra_weights_product_class_rings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_stockists';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'comment_settings' => '5',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '4',
    'path_redirect' => '3',
    'xmlsitemap' => '2',
  );
  $export['content_extra_weights_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_vibe_images';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '6',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '5',
    'path_redirect' => '4',
    'xmlsitemap' => '3',
  );
  $export['content_extra_weights_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_1_php';
  $strongarm->value = 0;
  $export['front_1_php'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_1_redirect';
  $strongarm->value = 'home';
  $export['front_1_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_1_text';
  $strongarm->value = '';
  $export['front_1_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_1_type';
  $strongarm->value = 'themed';
  $export['front_1_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_2_php';
  $strongarm->value = 0;
  $export['front_2_php'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_2_redirect';
  $strongarm->value = 'home';
  $export['front_2_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_2_text';
  $strongarm->value = '';
  $export['front_2_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_2_type';
  $strongarm->value = 'redirect';
  $export['front_2_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_3_php';
  $strongarm->value = 0;
  $export['front_3_php'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_3_redirect';
  $strongarm->value = 'node';
  $export['front_3_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_3_text';
  $strongarm->value = '';
  $export['front_3_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_3_type';
  $strongarm->value = 'same_as_anon';
  $export['front_3_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_4_php';
  $strongarm->value = 0;
  $export['front_4_php'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_4_redirect';
  $strongarm->value = 'node';
  $export['front_4_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_4_text';
  $strongarm->value = '';
  $export['front_4_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_4_type';
  $strongarm->value = 'same_as_anon';
  $export['front_4_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_page_breadcrumb';
  $strongarm->value = 1;
  $export['front_page_breadcrumb'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'front_page_breadcrumb_redirect';
  $strongarm->value = 'store';
  $export['front_page_breadcrumb_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_backgrounds_static';
  $strongarm->value = '0';
  $export['language_content_type_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_collaboration';
  $strongarm->value = '0';
  $export['language_content_type_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_facebook_feed';
  $strongarm->value = '0';
  $export['language_content_type_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_film';
  $strongarm->value = '0';
  $export['language_content_type_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stockists';
  $strongarm->value = '0';
  $export['language_content_type_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_vibe_images';
  $strongarm->value = '0';
  $export['language_content_type_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_product_cass_wallets_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'base' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Product information',
      'collapsed' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_image_cache' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_integer_weight' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Weight (for sorting)',
    ),
    'field_view_display' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'View Display',
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'shipping' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Shipping settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_product_cass_wallets_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_product_class_bags_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'base' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'Product information',
      'collapsed' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_image_cache' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_integer_weight' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Weight (for sorting)',
    ),
    'field_view_display' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => TRUE,
      'title' => 'View Display',
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'shipping' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Shipping settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_product_class_bags_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_product_class_cuffs_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'base' => array(
      'region' => 'main',
      'weight' => '-1',
      'has_required' => TRUE,
      'title' => 'Product information',
      'collapsed' => 0,
    ),
    'field_image_cache' => array(
      'region' => 'main',
      'weight' => '-2',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_integer_weight' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Weight (for sorting)',
    ),
    'shipping' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Shipping settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_view_display' => array(
      'region' => 'main',
      'weight' => '33',
      'has_required' => TRUE,
      'title' => 'View Display',
      'hidden' => 0,
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '-4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_product_class_cuffs_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_product_class_earrings_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'base' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Product information',
      'collapsed' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_image_cache' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_integer_weight' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Weight (for sorting)',
    ),
    'field_view_display' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'View Display',
    ),
    'shipping' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Shipping settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_product_class_earrings_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_product_class_neckpieces_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'base' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Product information',
      'collapsed' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_image_cache' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'field_integer_weight' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Weight (for sorting)',
    ),
    'shipping' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Shipping settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_view_display' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'View Display',
    ),
  );
  $export['nodeformscols_field_placements_product_class_neckpieces_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_product_class_rings_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'base' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Product information',
      'collapsed' => 0,
    ),
    'field_image_cache' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Images',
      'hidden' => 0,
    ),
    'shipping' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Shipping settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_integer_weight' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Weight (for sorting)',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_view_display' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'View Display',
    ),
  );
  $export['nodeformscols_field_placements_product_class_rings_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_stockists_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '0.008',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '-2',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '25',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'taxonomy' => array(
      'region' => 'main',
      'weight' => '-3',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_link_stockist' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => TRUE,
      'title' => 'Stockist link',
    ),
    'field_text_cities' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => TRUE,
      'title' => 'Cities / Online',
    ),
    'xmlsitemap' => array(
      'region' => 'main',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_stockists_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_vibe_images_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '100',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => NULL,
    ),
    'field_image' => array(
      'region' => 'main',
      'weight' => '31',
      'has_required' => TRUE,
      'title' => 'Images',
    ),
    'xmlsitemap' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'XML sitemap',
      'collapsed' => 1,
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_vibe_images_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_backgrounds_static';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_backgrounds_static'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_collaboration';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_collaboration'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_facebook_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_facebook_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_film';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_film'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stockists';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_stockists'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vibe_images';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_vibe_images'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'henson';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_henson_settings';
  $strongarm->value = array(
    'zen_block_editing' => 0,
    'zen_breadcrumb' => 'no',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 0,
    'toggle_secondary_links' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/logosmall.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/henson_favicon_3.ico',
    'favicon_upload' => '',
    'henson_debug' => 0,
  );
  $export['theme_henson_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_vibe_images' => 1,
    'toggle_node_info_blog' => 1,
    'toggle_node_info_product_class_cuffs' => 1,
    'toggle_node_info_product_class_earrings' => 1,
    'toggle_node_info_faq' => 1,
    'toggle_node_info_facebook_feed' => 1,
    'toggle_node_info_product_class_neckpieces' => 1,
    'toggle_node_info_page' => 0,
    'toggle_node_info_product' => 1,
    'toggle_node_info_product_class_rings' => 1,
    'toggle_node_info_webform' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product_cass_wallets';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product_cass_wallets'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product_class_bags';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product_class_bags'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product_class_cuffs';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product_class_cuffs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product_class_earrings';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product_class_earrings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product_class_neckpieces';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product_class_neckpieces'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product_class_rings';
  $strongarm->value = 'field_image_cache';
  $export['uc_image_product_class_rings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_enable_nodes';
  $strongarm->value = FALSE;
  $export['uc_product_enable_nodes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_field_enabled';
  $strongarm->value = array(
    'display_price' => 1,
    'image' => 1,
    'model' => 1,
    'list_price' => 0,
    'cost' => 0,
    'sell_price' => 1,
    'weight' => 1,
    'dimensions' => 0,
    'add_to_cart' => 1,
  );
  $export['uc_product_field_enabled'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_field_weight';
  $strongarm->value = array(
    'display_price' => '-10',
    'image' => '-2',
    'model' => '0',
    'list_price' => '2',
    'cost' => '3',
    'sell_price' => '4',
    'weight' => '5',
    'dimensions' => '6',
    'add_to_cart' => '10',
  );
  $export['uc_product_field_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_image_widget';
  $strongarm->value = '';
  $export['uc_product_image_widget'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_product_class_cuffs';
  $strongarm->value = 1;
  $export['uc_product_shippable_product_class_cuffs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_product_class_earrings';
  $strongarm->value = 1;
  $export['uc_product_shippable_product_class_earrings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_product_class_neckpieces';
  $strongarm->value = 1;
  $export['uc_product_shippable_product_class_neckpieces'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_product_class_rings';
  $strongarm->value = 1;
  $export['uc_product_shippable_product_class_rings'] = $strongarm;

  return $export;
}

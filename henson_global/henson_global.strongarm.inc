<?php

/**
 * Implementation of hook_strongarm().
 */
function henson_global_strongarm() {
  $export = array();

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

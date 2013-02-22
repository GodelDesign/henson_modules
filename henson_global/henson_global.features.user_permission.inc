<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function henson_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: Allow Reordering
  $permissions['Allow Reordering'] = array(
    'name' => 'Allow Reordering',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
  );

  // Exported permission: access fckeditor
  $permissions['access fckeditor'] = array(
    'name' => 'access fckeditor',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access frontpage
  $permissions['access frontpage'] = array(
    'name' => 'access frontpage',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'staff',
    ),
  );

  // Exported permission: administer Terms and Conditions
  $permissions['administer Terms and Conditions'] = array(
    'name' => 'administer Terms and Conditions',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer attributes
  $permissions['administer attributes'] = array(
    'name' => 'administer attributes',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer cart links
  $permissions['administer cart links'] = array(
    'name' => 'administer cart links',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(),
  );

  // Exported permission: administer conditional actions
  $permissions['administer conditional actions'] = array(
    'name' => 'administer conditional actions',
    'roles' => array(),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer credit cards
  $permissions['administer credit cards'] = array(
    'name' => 'administer credit cards',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer elysia_cron
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(),
  );

  // Exported permission: administer faq
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer faq order
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer fckeditor
  $permissions['administer fckeditor'] = array(
    'name' => 'administer fckeditor',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
  );

  // Exported permission: administer feeds_tamper
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(),
  );

  // Exported permission: administer languages
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer order workflow
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer own product features
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(),
  );

  // Exported permission: administer page titles
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
  );

  // Exported permission: administer product attributes
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer product classes
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer product features
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer product options
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer product stock
  $permissions['administer product stock'] = array(
    'name' => 'administer product stock',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer products
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
  );

  // Exported permission: administer store
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
  );

  // Exported permission: administer xmlsitemap
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(),
  );

  // Exported permission: allow fckeditor file uploads
  $permissions['allow fckeditor file uploads'] = array(
    'name' => 'allow fckeditor file uploads',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'staff',
    ),
  );

  // Exported permission: configure quotes
  $permissions['configure quotes'] = array(
    'name' => 'configure quotes',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: configure taxes
  $permissions['configure taxes'] = array(
    'name' => 'configure taxes',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create backgrounds_static content
  $permissions['create backgrounds_static content'] = array(
    'name' => 'create backgrounds_static content',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create blog entries
  $permissions['create blog entries'] = array(
    'name' => 'create blog entries',
    'roles' => array(
      '0' => 'blog',
      '1' => 'staff',
    ),
  );

  // Exported permission: create collaboration content
  $permissions['create collaboration content'] = array(
    'name' => 'create collaboration content',
    'roles' => array(),
  );

  // Exported permission: create facebook_feed content
  $permissions['create facebook_feed content'] = array(
    'name' => 'create facebook_feed content',
    'roles' => array(),
  );

  // Exported permission: create faq
  $permissions['create faq'] = array(
    'name' => 'create faq',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create film content
  $permissions['create film content'] = array(
    'name' => 'create film content',
    'roles' => array(),
  );

  // Exported permission: create orders
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
  );

  // Exported permission: create product_cass_wallets products
  $permissions['create product_cass_wallets products'] = array(
    'name' => 'create product_cass_wallets products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create product_class_bags products
  $permissions['create product_class_bags products'] = array(
    'name' => 'create product_class_bags products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create product_class_cuffs products
  $permissions['create product_class_cuffs products'] = array(
    'name' => 'create product_class_cuffs products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create product_class_earrings products
  $permissions['create product_class_earrings products'] = array(
    'name' => 'create product_class_earrings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create product_class_neckpieces products
  $permissions['create product_class_neckpieces products'] = array(
    'name' => 'create product_class_neckpieces products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create product_class_rings products
  $permissions['create product_class_rings products'] = array(
    'name' => 'create product_class_rings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create products
  $permissions['create products'] = array(
    'name' => 'create products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: create stockists content
  $permissions['create stockists content'] = array(
    'name' => 'create stockists content',
    'roles' => array(),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
  );

  // Exported permission: create vibe_images content
  $permissions['create vibe_images content'] = array(
    'name' => 'create vibe_images content',
    'roles' => array(),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
  );

  // Exported permission: delete all product_cass_wallets products
  $permissions['delete all product_cass_wallets products'] = array(
    'name' => 'delete all product_cass_wallets products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all product_class_bags products
  $permissions['delete all product_class_bags products'] = array(
    'name' => 'delete all product_class_bags products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all product_class_cuffs products
  $permissions['delete all product_class_cuffs products'] = array(
    'name' => 'delete all product_class_cuffs products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all product_class_earrings products
  $permissions['delete all product_class_earrings products'] = array(
    'name' => 'delete all product_class_earrings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all product_class_neckpieces products
  $permissions['delete all product_class_neckpieces products'] = array(
    'name' => 'delete all product_class_neckpieces products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all product_class_rings products
  $permissions['delete all product_class_rings products'] = array(
    'name' => 'delete all product_class_rings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all products
  $permissions['delete all products'] = array(
    'name' => 'delete all products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete any backgrounds_static content
  $permissions['delete any backgrounds_static content'] = array(
    'name' => 'delete any backgrounds_static content',
    'roles' => array(),
  );

  // Exported permission: delete any blog entry
  $permissions['delete any blog entry'] = array(
    'name' => 'delete any blog entry',
    'roles' => array(
      '0' => 'blog',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete any collaboration content
  $permissions['delete any collaboration content'] = array(
    'name' => 'delete any collaboration content',
    'roles' => array(),
  );

  // Exported permission: delete any facebook_feed content
  $permissions['delete any facebook_feed content'] = array(
    'name' => 'delete any facebook_feed content',
    'roles' => array(),
  );

  // Exported permission: delete any film content
  $permissions['delete any film content'] = array(
    'name' => 'delete any film content',
    'roles' => array(),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
  );

  // Exported permission: delete any stockists content
  $permissions['delete any stockists content'] = array(
    'name' => 'delete any stockists content',
    'roles' => array(),
  );

  // Exported permission: delete any vibe_images content
  $permissions['delete any vibe_images content'] = array(
    'name' => 'delete any vibe_images content',
    'roles' => array(),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
  );

  // Exported permission: delete orders
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own backgrounds_static content
  $permissions['delete own backgrounds_static content'] = array(
    'name' => 'delete own backgrounds_static content',
    'roles' => array(),
  );

  // Exported permission: delete own blog entries
  $permissions['delete own blog entries'] = array(
    'name' => 'delete own blog entries',
    'roles' => array(
      '0' => 'blog',
      '1' => 'staff',
    ),
  );

  // Exported permission: delete own collaboration content
  $permissions['delete own collaboration content'] = array(
    'name' => 'delete own collaboration content',
    'roles' => array(),
  );

  // Exported permission: delete own facebook_feed content
  $permissions['delete own facebook_feed content'] = array(
    'name' => 'delete own facebook_feed content',
    'roles' => array(),
  );

  // Exported permission: delete own film content
  $permissions['delete own film content'] = array(
    'name' => 'delete own film content',
    'roles' => array(),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
  );

  // Exported permission: delete own product_cass_wallets products
  $permissions['delete own product_cass_wallets products'] = array(
    'name' => 'delete own product_cass_wallets products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own product_class_bags products
  $permissions['delete own product_class_bags products'] = array(
    'name' => 'delete own product_class_bags products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own product_class_cuffs products
  $permissions['delete own product_class_cuffs products'] = array(
    'name' => 'delete own product_class_cuffs products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own product_class_earrings products
  $permissions['delete own product_class_earrings products'] = array(
    'name' => 'delete own product_class_earrings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own product_class_neckpieces products
  $permissions['delete own product_class_neckpieces products'] = array(
    'name' => 'delete own product_class_neckpieces products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own product_class_rings products
  $permissions['delete own product_class_rings products'] = array(
    'name' => 'delete own product_class_rings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own products
  $permissions['delete own products'] = array(
    'name' => 'delete own products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete own stockists content
  $permissions['delete own stockists content'] = array(
    'name' => 'delete own stockists content',
    'roles' => array(),
  );

  // Exported permission: delete own vibe_images content
  $permissions['delete own vibe_images content'] = array(
    'name' => 'delete own vibe_images content',
    'roles' => array(),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete payments
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(),
  );

  // Exported permission: edit all product_cass_wallets products
  $permissions['edit all product_cass_wallets products'] = array(
    'name' => 'edit all product_cass_wallets products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all product_class_bags products
  $permissions['edit all product_class_bags products'] = array(
    'name' => 'edit all product_class_bags products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all product_class_cuffs products
  $permissions['edit all product_class_cuffs products'] = array(
    'name' => 'edit all product_class_cuffs products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all product_class_earrings products
  $permissions['edit all product_class_earrings products'] = array(
    'name' => 'edit all product_class_earrings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all product_class_neckpieces products
  $permissions['edit all product_class_neckpieces products'] = array(
    'name' => 'edit all product_class_neckpieces products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all product_class_rings products
  $permissions['edit all product_class_rings products'] = array(
    'name' => 'edit all product_class_rings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all products
  $permissions['edit all products'] = array(
    'name' => 'edit all products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit any backgrounds_static content
  $permissions['edit any backgrounds_static content'] = array(
    'name' => 'edit any backgrounds_static content',
    'roles' => array(),
  );

  // Exported permission: edit any blog entry
  $permissions['edit any blog entry'] = array(
    'name' => 'edit any blog entry',
    'roles' => array(
      '0' => 'blog',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit any collaboration content
  $permissions['edit any collaboration content'] = array(
    'name' => 'edit any collaboration content',
    'roles' => array(),
  );

  // Exported permission: edit any facebook_feed content
  $permissions['edit any facebook_feed content'] = array(
    'name' => 'edit any facebook_feed content',
    'roles' => array(),
  );

  // Exported permission: edit any film content
  $permissions['edit any film content'] = array(
    'name' => 'edit any film content',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
  );

  // Exported permission: edit any stockists content
  $permissions['edit any stockists content'] = array(
    'name' => 'edit any stockists content',
    'roles' => array(),
  );

  // Exported permission: edit any vibe_images content
  $permissions['edit any vibe_images content'] = array(
    'name' => 'edit any vibe_images content',
    'roles' => array(),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
  );

  // Exported permission: edit faq
  $permissions['edit faq'] = array(
    'name' => 'edit faq',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit orders
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own backgrounds_static content
  $permissions['edit own backgrounds_static content'] = array(
    'name' => 'edit own backgrounds_static content',
    'roles' => array(),
  );

  // Exported permission: edit own blog entries
  $permissions['edit own blog entries'] = array(
    'name' => 'edit own blog entries',
    'roles' => array(
      '0' => 'blog',
      '1' => 'staff',
    ),
  );

  // Exported permission: edit own collaboration content
  $permissions['edit own collaboration content'] = array(
    'name' => 'edit own collaboration content',
    'roles' => array(),
  );

  // Exported permission: edit own facebook_feed content
  $permissions['edit own facebook_feed content'] = array(
    'name' => 'edit own facebook_feed content',
    'roles' => array(),
  );

  // Exported permission: edit own faq
  $permissions['edit own faq'] = array(
    'name' => 'edit own faq',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own film content
  $permissions['edit own film content'] = array(
    'name' => 'edit own film content',
    'roles' => array(),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
  );

  // Exported permission: edit own product_cass_wallets products
  $permissions['edit own product_cass_wallets products'] = array(
    'name' => 'edit own product_cass_wallets products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own product_class_bags products
  $permissions['edit own product_class_bags products'] = array(
    'name' => 'edit own product_class_bags products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own product_class_cuffs products
  $permissions['edit own product_class_cuffs products'] = array(
    'name' => 'edit own product_class_cuffs products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own product_class_earrings products
  $permissions['edit own product_class_earrings products'] = array(
    'name' => 'edit own product_class_earrings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own product_class_neckpieces products
  $permissions['edit own product_class_neckpieces products'] = array(
    'name' => 'edit own product_class_neckpieces products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own product_class_rings products
  $permissions['edit own product_class_rings products'] = array(
    'name' => 'edit own product_class_rings products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own products
  $permissions['edit own products'] = array(
    'name' => 'edit own products',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: edit own stockists content
  $permissions['edit own stockists content'] = array(
    'name' => 'edit own stockists content',
    'roles' => array(),
  );

  // Exported permission: edit own vibe_images content
  $permissions['edit own vibe_images content'] = array(
    'name' => 'edit own vibe_images content',
    'roles' => array(),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(),
  );

  // Exported permission: fulfill orders
  $permissions['fulfill orders'] = array(
    'name' => 'fulfill orders',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: manual payments
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: opt-in or out of tracking
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(),
  );

  // Exported permission: process credit cards
  $permissions['process credit cards'] = array(
    'name' => 'process credit cards',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'blog',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: set page title
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
  );

  // Exported permission: translate interface
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(),
  );

  // Exported permission: unconditionally delete orders
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use PHP for title patterns
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
  );

  // Exported permission: use PHP for tracking visibility
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'blog',
      '1' => 'staff',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(),
  );

  // Exported permission: view Terms and Conditions
  $permissions['view Terms and Conditions'] = array(
    'name' => 'view Terms and Conditions',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'staff',
    ),
  );

  // Exported permission: view all orders
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: view cart links report
  $permissions['view cart links report'] = array(
    'name' => 'view cart links report',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: view cc details
  $permissions['view cc details'] = array(
    'name' => 'view cc details',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: view cc numbers
  $permissions['view cc numbers'] = array(
    'name' => 'view cc numbers',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: view customers
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(),
  );

  // Exported permission: view faq page
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache 170_auto
  $permissions['view imagecache 170_auto'] = array(
    'name' => 'view imagecache 170_auto',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache 320w_240h
  $permissions['view imagecache 320w_240h'] = array(
    'name' => 'view imagecache 320w_240h',
    'roles' => array(),
  );

  // Exported permission: view imagecache 75w_75h
  $permissions['view imagecache 75w_75h'] = array(
    'name' => 'view imagecache 75w_75h',
    'roles' => array(),
  );

  // Exported permission: view imagecache background_image
  $permissions['view imagecache background_image'] = array(
    'name' => 'view imagecache background_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache campaign_slideshow
  $permissions['view imagecache campaign_slideshow'] = array(
    'name' => 'view imagecache campaign_slideshow',
    'roles' => array(),
  );

  // Exported permission: view imagecache cart
  $permissions['view imagecache cart'] = array(
    'name' => 'view imagecache cart',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache imagecache_defaults_prepare_default_image
  $permissions['view imagecache imagecache_defaults_prepare_default_image'] = array(
    'name' => 'view imagecache imagecache_defaults_prepare_default_image',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache product
  $permissions['view imagecache product'] = array(
    'name' => 'view imagecache product',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache product_full
  $permissions['view imagecache product_full'] = array(
    'name' => 'view imagecache product_full',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache product_list
  $permissions['view imagecache product_list'] = array(
    'name' => 'view imagecache product_list',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache store_square
  $permissions['view imagecache store_square'] = array(
    'name' => 'view imagecache store_square',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache uc_thumbnail
  $permissions['view imagecache uc_thumbnail'] = array(
    'name' => 'view imagecache uc_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view own orders
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view payments
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(),
  );

  // Exported permission: view reports
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  // Exported permission: view store reports
  $permissions['view store reports'] = array(
    'name' => 'view store reports',
    'roles' => array(
      '0' => 'staff',
    ),
  );

  return $permissions;
}

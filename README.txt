// $Id$

CONTENTS OF THIS FILE
---------------------
 * Introduction
 * Requirements
 * Installation
 * Known Issues


INTRODUCTION
------------

Authors:
* Alex Weber (alexweber15)
* Leandro Nunes (lnunesbr)

Headjs module uses head.js (http://headjs.com/) to dramatically improve
javascript loading times by adding only one script to the document's
head and then downloading individual script files in parallel.

Head.js eliminated the need for aggregation of javascript and is especially
beneficial for mobile browsers who limit the size of individually cached
javascript files.

For more information see: http://headjs.com/#theory

REQUIREMENTS
------------

* The head.js library (0.9+)
* If you are using jquery_update you must apply the included patch


INSTALLATION
------------

1. Copy the headjs directory to your sites/all/modules or sites/all/modules/contrib directory.

2. * Download the head.js release from:

     http://headjs.com/#download

   * Extract to sites/all/libraries/headjs

   * The actual head.js files should be located in:

     /sites/all/libraries/headjs/dist/head.min.js
    
     and
    
     /sites/all/libraries/headjs/dist/head.load.min.js

3. Enable the module at Administer >> Site building >> Modules.

4. Visit Administer > Site Configuration > Headjs to configure the module.

5. That's it!


KNOWN ISSUES
------------

- Requires a patch to work with jQuery Update

This module tries to maintain a maximum compatibility with all other JavaScript code. If you have any problem, please file an issue in the project homepage.

APPLYING THE PATCH
-------------------

In order to play nice with jquery_update, we need to patch it.

This patch is not necessary if you are using the modified version that supports jQuery 1.5.2, available here: https://github.com/alexweber/jquery_update. It already includes the patch.

- Copy the file "headjs_jquery_update.patch" in the "patch" directory to the jquery_update folder
- Execute the following command in a terminal:
  patch -p1 < headjs_jquery_update.patch

The reasoning behind this is simple: in jquery_update_preprocess_page() jquery_update makes the necessary changes but replaces $scripts with a drupal_get_js() string. Instead of using a regex to convert the string back to an array, for the sake ofsimplicity we decided to patch jquery_update instead.

Please note that this patch just adds an extra key to $variables, keeping the $scripts array in $variables['scripts_array']. It does not change jquery_update behavior in any other way.

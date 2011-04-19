// $Id$

CONTENTS OF THIS FILE
---------------------
 * Introduction
 * Requirements
 * Installation
 * Known Issues
 * Compatibility


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

* head.js library (0.9+)


INSTALLATION
------------

1. Copy the headjs directory to your sites/all/modules or sites/all/modules/contrib directory.

2. * Download the head.js library from:

     http://headjs.com/#download

   * Extract the files to sites/all/libraries/headjs

   * The actual head.js files should be located in:

     /sites/all/libraries/headjs/head.min.js
    
     and
    
     /sites/all/libraries/headjs/head.load.min.js

3. Enable the module at Administer >> Site building >> Modules.

4. Visit Administer >> Site Configuration >> Performance >> Headjs to configure the module.

5. That's it!


KNOWN ISSUES
------------

None so far!

- Versions 6.x-1.0-beta2 and 6.x-1.0-beta3 required a patch to play nice with jquery_update. However, we managed to work around this and the patch is no longer necessary. We apologize if you patched your jquery_update and recommend that you undo the patch by re-installing it. (that said, the patch is harmless so I guess if you wanted you could just leave it there with no side-effects)


COMPATIBILITY
-------------

HeadJS has been tested and has been found to work 100% with several contrib modules including but not limited to:

  - jquery_update
  - jquery_ui
  - advagg
  - javascript_aggregator
  - gmap
  - boost
  - quicktabs
  - fivestar
  - disqus
  - views_slideshow
  - jcarousel
  - colorbox
  - fancybox

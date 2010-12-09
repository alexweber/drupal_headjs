// $Id$

CONTENTS OF THIS FILE
---------------------
 * Introduction
 * Requirements
 * Installation
 * Compatibility
 * Known Issues


INTRODUCTION
------------

Authors:
* Alex Weber (alexweber15)
* Leandro Nunes (lnunesbr)

Headjs module uses head.js (http://headjs.com/) to dramatically improve
javascript loading times by adding only one script to the document's
head and then downloading individual script files in parallel.

Since downloading many small files at the same time is faster than
downloading one big file, head.js eliminates the need for javascript
aggregation and is especially beneficial for mobile browsers who limit the
size of individually cached javascript files.

For more information see: http://headjs.com/#theory


REQUIREMENTS
------------

* The head.js library


INSTALLATION
------------

1. Copy the headjs directory to your sites/SITENAME/modules directory
   or sites/all/modules directory.

2. * Download the head.js release from:

     https://github.com/headjs/headjs

   * Put the downloaded archive into the module directory:

     /sites/all/modules/headjs/headjs.zip

   * Extract the archive.  This will create the following sub-directory:

     /sites/all/modules/headjs/headjs
    
     so the actual head.js files are located in:

     /sites/all/modules/headjs/headjs/head.min.js
    
     and
    
     /sites/all/modules/headjs/headjs/src/head.loader.js

3. Enable the module at Administer >> Site building >> Modules.

4. Visit Administer > Site Configuration > Headjs to configure the module.

5. That's it!


COMPATIBILITY
-------------
- Headjs has been succesfully with the following contrib modules:

  * Fivestar
  * Javascript Aggregator
  * jQuery UI
  * jQuery Update
  * Quicktabs

- Headjs has been succesfully with the following 3rd party services

  * Twitter share widget
  * Facebook share widget
  * Linkedin share widget
  * Orkut share widget

KNOWN ISSUES
------------

- Issue with collapsible fieldsets

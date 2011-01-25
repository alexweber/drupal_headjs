// $Id: README.txt,v 1.1.2.1 2011/01/25 10:24:15 alexweber Exp $

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

* The head.js library (0.8+)


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
    
     /sites/all/modules/headjs/headjs/head.load.min.js

3. Enable the module at Administer >> Site building >> Modules.

4. Visit Administer > Site Configuration > Headjs to configure the module.

5. That's it!


KNOWN ISSUES
------------

- None so far

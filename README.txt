// $Id: README.txt,v 1.1.2.2 2011/01/25 12:37:20 alexweber Exp $

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

1. Copy the headjs directory to your sites/SITENAME/modules directory or sites/all/modules directory.

2. * Download the head.js release from:

     http://headjs.com/#download

   * Extract to sites/all/libraries/headjs

   * The actual head.js files should be located in:

     /sites/all/libraries/headjs/head.min.js
    
     and
    
     /sites/all/libraries/headjs/head.load.min.js

3. Enable the module at Administer >> Site building >> Modules.

4. Visit Administer > Site Configuration > Headjs to configure the module.

5. That's it!


KNOWN ISSUES
------------

- Doesn't play nice with jQuery Update

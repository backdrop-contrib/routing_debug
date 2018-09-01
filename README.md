Routing Debug
======================

Routing Debug is a simple module that provides menu routing table with
additional information like: name of the callback function, filename and
path of file where the callback is defined and line number of function 
definition.

Intention of the module is to help developer to identify potential menu
overrides.

###Features

- Display registered routes, module the are coming from,
- callback function handling each route/path,
- file and line number of each callback function,
- display raw information provided by _menu_names()_, _system_menus()_
  and _menu_router()_ functions.
- Module also provides block with the debug information for current path.



Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules.

- It requires Devel module

Documentation
-------------

Additional documentation is located in the Wiki:
https://github.com/backdrop-contrib/routing_debug/wiki/Documentation.

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/routing_debug/issues.

Current Maintainers
-------------------

- Robert Garrigós (https://github.com/robertgarrigos).

Credits
-------

- Ported to Backdrop CMS by Robert Garrigós (https://github.com/robertgarrigos).
- Originally written for Drupal by David Lukac (https://github.com/davidlukac).

License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.


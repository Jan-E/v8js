/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2015 The PHP Group                                |
  +----------------------------------------------------------------------+
  | http://www.opensource.org/licenses/mit-license.php  MIT License      |
  +----------------------------------------------------------------------+
  | Author: Stefan Siegl <stesie@brokenpipe.de>                          |
  +----------------------------------------------------------------------+
*/

#ifndef V8JS_COMMONJS_H
#define V8JS_COMMONJS_H

void v8js_commonjs_normalise_identifier(const char *base, const char *identifier, char *normalised_path, char *module_name);

#endif /* V8JS_COMMONJS_H */

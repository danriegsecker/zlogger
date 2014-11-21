/*  =========================================================================
    zlog_server - 

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of zproject-zproto:                              
    http://github.com/danriegsecker/zproject-zproto.                   
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef __ZLOG_SERVER_H_INCLUDED__
#define __ZLOG_SERVER_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif


//  @interface
//  Create a new zlog_server
ZLOGGER_EXPORT zlog_server_t *
    zlog_server_new ();

//  Destroy the zlog_server
ZLOGGER_EXPORT void
    zlog_server_destroy (zlog_server_t **self_p);

//  Print properties of object
ZLOGGER_EXPORT void
    zlog_server_print (zlog_server_t *self);

//  Self test of this class
ZLOGGER_EXPORT int
    zlog_server_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif

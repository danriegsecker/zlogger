/*  =========================================================================
    zlog_client - 

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of zproject-zproto:                              
    http://github.com/danriegsecker/zproject-zproto.                   
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef __ZLOG_CLIENT_H_INCLUDED__
#define __ZLOG_CLIENT_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif


//  @interface
//  Create a new zlog_client
ZLOGGER_EXPORT zlog_client_t *
    zlog_client_new ();

//  Destroy the zlog_client
ZLOGGER_EXPORT void
    zlog_client_destroy (zlog_client_t **self_p);

//  Print properties of object
ZLOGGER_EXPORT void
    zlog_client_print (zlog_client_t *self);

//  Self test of this class
ZLOGGER_EXPORT int
    zlog_client_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif

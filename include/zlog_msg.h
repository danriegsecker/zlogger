/*  =========================================================================
    zlog_msg - 

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of zproject-zproto:                              
    http://github.com/danriegsecker/zproject-zproto.                   
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef __ZLOG_MSG_H_INCLUDED__
#define __ZLOG_MSG_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif


//  @interface
//  Create a new zlog_msg
ZLOGGER_EXPORT zlog_msg_t *
    zlog_msg_new ();

//  Destroy the zlog_msg
ZLOGGER_EXPORT void
    zlog_msg_destroy (zlog_msg_t **self_p);

//  Print properties of object
ZLOGGER_EXPORT void
    zlog_msg_print (zlog_msg_t *self);

//  Self test of this class
ZLOGGER_EXPORT int
    zlog_msg_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif

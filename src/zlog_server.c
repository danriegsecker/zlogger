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

/*
@header
    zlog_server - 
@discuss
@end
*/

//  Structure of our class

struct _zlog_server_t {
};

#include "../include/zlogger.h"

//  --------------------------------------------------------------------------
//  Create a new zlog_server

zlog_server_t *
zlog_server_new ()
{
    zlog_server_t *self = (zlog_server_t *) zmalloc (sizeof (zlog_server_t));
    assert (self);

    //  TODO: Initialize properties

    return self;
}


//  --------------------------------------------------------------------------
//  Destroy the zlog_server

void
zlog_server_destroy (zlog_server_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        zlog_server_t *self = *self_p;

        //  Free class properties

        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}


//  --------------------------------------------------------------------------
//  Print properties of object

void
zlog_server_print (zlog_server_t *self)
{
    assert (self);
}


//  --------------------------------------------------------------------------
//  Selftest

int
zlog_server_test (bool verbose)
{
    printf (" * zlog_server: ");

    //  @selftest
    //  Simple create/destroy test
    zlog_server_t *self = zlog_server_new ();
    assert (self);
    zlog_server_destroy (&self);
    //  @end

    printf ("OK\n");
    return 0;
}

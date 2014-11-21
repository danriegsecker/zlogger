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

/*
@header
    zlog_client - 
@discuss
@end
*/

//  Structure of our class

struct _zlog_client_t {
};

#include "../include/zlogger.h"

//  --------------------------------------------------------------------------
//  Create a new zlog_client

zlog_client_t *
zlog_client_new ()
{
    zlog_client_t *self = (zlog_client_t *) zmalloc (sizeof (zlog_client_t));
    assert (self);

    //  TODO: Initialize properties

    return self;
}


//  --------------------------------------------------------------------------
//  Destroy the zlog_client

void
zlog_client_destroy (zlog_client_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        zlog_client_t *self = *self_p;

        //  Free class properties

        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}


//  --------------------------------------------------------------------------
//  Print properties of object

void
zlog_client_print (zlog_client_t *self)
{
    assert (self);
}


//  --------------------------------------------------------------------------
//  Selftest

int
zlog_client_test (bool verbose)
{
    printf (" * zlog_client: ");

    //  @selftest
    //  Simple create/destroy test
    zlog_client_t *self = zlog_client_new ();
    assert (self);
    zlog_client_destroy (&self);
    //  @end

    printf ("OK\n");
    return 0;
}

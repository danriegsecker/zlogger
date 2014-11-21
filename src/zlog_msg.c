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

/*
@header
    zlog_msg - 
@discuss
@end
*/

//  Structure of our class

struct _zlog_msg_t {
};

#include "../include/zlogger.h"

//  --------------------------------------------------------------------------
//  Create a new zlog_msg

zlog_msg_t *
zlog_msg_new ()
{
    zlog_msg_t *self = (zlog_msg_t *) zmalloc (sizeof (zlog_msg_t));
    assert (self);

    //  TODO: Initialize properties

    return self;
}


//  --------------------------------------------------------------------------
//  Destroy the zlog_msg

void
zlog_msg_destroy (zlog_msg_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        zlog_msg_t *self = *self_p;

        //  Free class properties

        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}


//  --------------------------------------------------------------------------
//  Print properties of object

void
zlog_msg_print (zlog_msg_t *self)
{
    assert (self);
}


//  --------------------------------------------------------------------------
//  Selftest

int
zlog_msg_test (bool verbose)
{
    printf (" * zlog_msg: ");

    //  @selftest
    //  Simple create/destroy test
    zlog_msg_t *self = zlog_msg_new ();
    assert (self);
    zlog_msg_destroy (&self);
    //  @end

    printf ("OK\n");
    return 0;
}

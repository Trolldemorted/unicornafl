/*
 * QNull
 *
 * Copyright (C) 2015 Red Hat, Inc.
 *
 * Authors:
 *  Markus Armbruster <armbru@redhat.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1
 * or later.  See the COPYING.LIB file in the top-level directory.
 */

#include "qemu-common.h"
#include "qapi/qmp/qnull.h"

QNull qnull_ = {
    {
        QTYPE_QNULL,
        1,
    }
};

/**
 * qnull_is_equal(): Always return true because any two QNull objects
 * are equal.
 */
bool qnull_is_equal(const QObject *x, const QObject *y)
{
    return true;
}

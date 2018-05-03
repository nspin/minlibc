/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SYS_TYPES_H
#define MINLIBC_SYS_TYPES_H

#include <stddef.h>

typedef signed   long int ssize_t;

typedef signed        int mode_t;
typedef signed   long int off_t;
typedef unsigned long int dev_t;
typedef unsigned      int ino_t;
typedef unsigned      int uid_t;
typedef unsigned      int gid_t;
typedef unsigned      int pid_t;

typedef unsigned          useconds_t;
typedef               int sig_atomic_t;
typedef              long clock_t;

#endif

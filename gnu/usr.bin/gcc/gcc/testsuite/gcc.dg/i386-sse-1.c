/* { dg-do compile { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-O2 -msse" } */

/* Test that the intrinsics compile with optimization.  All of them are
   defined as inline functions in mmintrin.h that reference the proper
   builtin functions.  Defining away "static" and "__inline" results in
   all of them being compiled as proper functions.  */

#define static
#define __inline

#include <xmmintrin.h>

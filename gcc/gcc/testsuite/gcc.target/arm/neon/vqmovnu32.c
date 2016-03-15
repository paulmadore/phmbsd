/* Test the `vqmovnu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vqmovnu32 (void)
{
  uint16x4_t out_uint16x4_t;
  uint32x4_t arg0_uint32x4_t;

  out_uint16x4_t = vqmovn_u32 (arg0_uint32x4_t);
}

/* { dg-final { scan-assembler "vqmovn\.u32\[ 	\]+\[dD\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
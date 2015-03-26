/*********************************************************************
*                           s i t u s . h                            *
**********************************************************************
* Header file for Situs C programs     URL: situs.biomachina.org     *
* (c) Willy Wriggers, Paul Boyle, and Pablo Chacon, 1998-2011        *
**********************************************************************
* See legal statement for terms of distribution                      *
*********************************************************************/

/* widely used in most C programs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>
#include <sys/time.h>
#include <sys/types.h>
#include <time.h>
#include <dirent.h>
#include <unistd.h>
#include "lib_vec.h"

#ifndef SITUS_H
#define SITUS_H

/* as of 2.7, used in colores, collage, eul2pdb, pdbsymm, lib_vio, and lib_eul: */
#define PI 3.14159265358979323846

/* as of 2.7, used in colores, collage, eul2pdb, and lib_eul: */
#define ROT_CONV (PI/180.0)

/* widely used in all PDB handling C programs */
typedef struct {        /* 76-byte struct */
  char  recd[7];        /* bytes 0 -  6; 7 = pad*/
  int   serial;         /*       8 - 11 */
  char  type[3];        /*      12 - 14 */
  char  loc[3];         /*      15 - 17 */
  char  alt[2];         /*      18 - 19 */
  char  res[5];         /*      20 - 24 */
  char  chain[2];       /*      25 - 26; 27 = pad */
  int   seq;            /*      28 - 31 */
  char  icode[2];       /*      32 - 33; 34-35 = pad */
  float x;              /*      36 - 39 */
  float y;              /*      40 - 43 */
  float z;              /*      44 - 47 */
  float occupancy;      /*      48 - 51 */
  float beta;           /*      52 - 55 */
  int   footnote;       /*      56 - 59 */
  char  segid[5];       /*      60 - 64 */
  char  element[3];     /*      65 - 67 */
  char  charge[3];      /*      68 - 70; 71 = pad */
  float weight;         /* mass 72 - 75 */
} PDB;

#endif


/*
 *  types.h
 *  Pura
 *
 *  Created by Daniel Klein on 06.11.06.
 *  Copyright 2006 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef _types_h_
#define _types_h_

/* boolean */
typedef int boolean; 

#define true 1
#define false 0

#ifndef NULL
#define NULL (void*)0
#endif

/* general types */
typedef unsigned char byte;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;

typedef signed char  int8;
typedef signed short int16;
typedef signed int   int32;
typedef signed long long  int64;

/* Java class data types */
#define u1 byte
#define u2 uint16
#define u4 uint32

/* runtime engine data types */
#define slot uint32
#define reference uint32

void 	types_testTypes();

#endif /*_types_h_*/
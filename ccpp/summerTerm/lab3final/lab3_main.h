#ifndef STD
#define STD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <iostream>
#include <dirent.h>
#endif

#ifndef MAX
#define MAX
#define MAX_LINE 1000
#endif

#ifndef STATE_T
#define STATE_T
struct  structure1{
 char pathl[50];
 char namel[50];
 char hash[41];
 char *hash_code;
} ;

#endif


#ifndef GET_HAHSCODE
#define GET_HAHSCODE
#include "./get_hashcode/get_hashcode.h"
#endif

#ifndef GET_FILE
#define GET_FILE
#include "./get_file/get_file.h"
#endif

#ifndef COMPARE
#define COMPARE
#include"./compare/compare.h"
#endif

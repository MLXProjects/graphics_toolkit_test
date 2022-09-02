/* POSIX PLATFORM WRAPPER FOR GTT */

#include <stdio.h>
#include <stdlib.h>

#define GTT_MALLOC(memsz)		malloc(memsz)
#define GTT_CALLOC(memsz,val)	calloc(memsz,val)
#define GTT_FREE(ptr)			free(ptr)

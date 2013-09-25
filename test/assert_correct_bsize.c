#include <sys/param.h>
#include "assert.h"
COMPILE_TIME_ASSERT(correct_bsize, DEV_BSIZE == (1<<DEV_BSHIFT));

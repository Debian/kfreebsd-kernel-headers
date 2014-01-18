#include <sys/limits.h>
#include "assert.h"

COMPILE_TIME_ASSERT(valid_OFF_MAX, OFF_MAX > 0);
COMPILE_TIME_ASSERT(valid_OFF_MIN, OFF_MIN < 0);
COMPILE_TIME_ASSERT(valid_UQUAD_MAX, UQUAD_MAX > 0);

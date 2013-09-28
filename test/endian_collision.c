#include <endian.h>
#include <sys/endian.h>
#include <machine/endian.h>

#include "assert.h"

COMPILE_TIME_ASSERT(LITTLE, __LITTLE_ENDIAN == _LITTLE_ENDIAN);
COMPILE_TIME_ASSERT(BIG, __BIG_ENDIAN == _BIG_ENDIAN);
COMPILE_TIME_ASSERT(PDP, __PDP_ENDIAN == _PDP_ENDIAN);
COMPILE_TIME_ASSERT(BYTE, __BYTE_ORDER == _BYTE_ORDER);

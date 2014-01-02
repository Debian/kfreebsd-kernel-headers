#include <sys/cdefs.h>
#include <machine/_limits.h>
#include <machine/_types.h>
#include <wchar.h>

#include "assert.h"

COMPILE_TIME_ASSERT(WCHAR_MAX, WCHAR_MAX == __kernel_WCHAR_MAX);
COMPILE_TIME_ASSERT(WCHAR_MIN, WCHAR_MIN == __kernel_WCHAR_MIN);

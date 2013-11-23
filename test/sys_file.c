#define _WANT_FILE		/* for `struct file' */
#include <sys/kglue/sys/file.h>
#include "assert.h"
COMPILE_TIME_ASSERT(struct_file, sizeof (struct file) > 0);

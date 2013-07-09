#include <sys/param.h>
char __assert_correct_bsize[DEV_BSIZE == (1<<DEV_BSHIFT) ? 0 : -1];

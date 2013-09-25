#define _FILE_OFFSET_BITS 64

#include <sys/kern/time.h>
#include <sys/kern/types.h>

#include <ufs/ufs/dinode.h>
#include <ufs/ffs/fs.h>

#include <ufs/ufs/quota.h>
#include <ufs/ufs/inode.h>

#include "assert.h"

#define ASSERT_SIZE(N, STRUCT, MEMBER, SIZE) \
	COMPILE_TIME_ASSERT(N, (sizeof (((struct STRUCT *) NULL)->MEMBER) == SIZE))

ASSERT_SIZE(1, fs, fs_snapinum[0], 4);
ASSERT_SIZE(2, jrefrec, jr_ino, 4);
ASSERT_SIZE(3, jrefrec, jr_parent, 4);
ASSERT_SIZE(4, jmvrec, jm_ino, 4);
ASSERT_SIZE(5, jmvrec, jm_parent, 4);
ASSERT_SIZE(6, inode, i_number, 4);

#define ifaliasreq	gnu_ifaliasreq
#define ifmediareq	gnu_ifmediareq
#define ifdrv		gnu_ifdrv
#include <net/if.h>
#undef ifaliasreq
#undef ifmediareq
#undef ifdrv

#include <sys/kglue/net/if.h>
#include "assert.h"
COMPILE_TIME_ASSERT(ifaliasreq_size, sizeof(struct ifaliasreq) == sizeof(struct oifaliasreq) + sizeof(int));

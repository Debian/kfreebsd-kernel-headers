#include <net/if.h>
#include "assert.h"
COMPILE_TIME_ASSERT(ifaliasreq_size, sizeof(struct ifaliasreq) == sizeof(struct oifaliasreq) + sizeof(int));

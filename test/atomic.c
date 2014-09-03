#include <sys/types.h>
#include <sys/cdefs.h>
#include <machine/atomic.h>

int main(int argc, char **argv)
{
	unsigned int p, v = 0;
	atomic_store_rel_int(&p, v);
	return 0;
}

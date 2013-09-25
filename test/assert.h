#define COMPILE_TIME_ASSERT(name, expr) \
	static char __assert_ ## name [(expr) ? 0 : -1]

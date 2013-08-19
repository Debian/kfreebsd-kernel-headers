TESTS = \
	assert_correct_bsize.o \
	termios_collision.o \
	type_collision.o \
	time_collision.o \
	param_collision.o \
	queue_collision.o \
	limits_collision.o \
	uintXX_t.o \
	\
	bus.o \
	cpufunc.o \
	devicestat.o \
	in_pcb.o \
	ino_t.o \
	ppp.o \
	sctp.o \
	soundcard.o \
	sys_sysctl.o \
	stdarg.o \
	usb.o \
	$()

#	elf.o

CFLAGS = -Iinclude -I../debian/kfreebsd-kernel-headers/usr/include

# Enable all the stuff in glibc to probe for collisions
CFLAGS += -D_GNU_SOURCE -Werror -Wsystem-headers

all: $(TESTS)

clean:
	rm -f $(TESTS)

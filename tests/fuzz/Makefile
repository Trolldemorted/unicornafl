CFLAGS += -L ../../ -I ../../include

UNAME_S := $(shell uname -s)
LDFLAGS += -pthread
ifeq ($(UNAME_S), Linux)
LDFLAGS += -lrt
endif

LDFLAGS += -lunicornafl


ALL_TESTS_SOURCES = $(wildcard fuzz*.c)
ALL_TESTS = $(ALL_TESTS_SOURCES:%.c=%)

.PHONY: all
all: ${ALL_TESTS}

.PHONY: clean
clean:
	rm -rf ${ALL_TESTS}

fuzz%: fuzz%.c
	$(CC) $(CFLAGS) $^ onefile.c $(LDFLAGS) -o $@

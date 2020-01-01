# #####################################################################
# Makefile
# Author : Huangtao
# Version: V1.0.0  2020-01-01 Create
# #####################################################################

PRC_ROOT = $(shell pwd)

CFLAGS := -I$(PROJ_ROOT)/Include
CFLAGS += -I$(PROJ_ROOT)/Include/osa
CFLAGS += -I$(PROJ_ROOT)/Include/prc
CFLAGS += -c -o

AFLAGS := -rc

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)
LIB := $(PRC_ROOT)/libprc.a

.PHONY: clean all
default: all

%.o: %.c
	$(CC) $(CFLAGS) $@ $<

$(LIB): $(OBJS)
	$(AR) $(AFLAGS) $@ $^

all: $(LIB)
	cp $(LIB) $(PROJ_LIB)

clean:
	@-$(RM) $(OBJS) $(LIB)

# #####################################################################
# Makefile
# Author : Huangtao
# Version: V1.0.0  2020-01-01 Create
#
# #####################################################################

PDC_ROOT = $(shell pwd)

CFLAGS := -I$(PROJ_ROOT)/Include
CFLAGS += -I$(PROJ_ROOT)/Include/osa
CFLAGS += -I$(PROJ_ROOT)/Include/prc
CFLAGS += -I$(PROJ_ROOT)/Include/pdc
CFLAGS += -c -o

AFLAGS := -rc

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%.o)
LIB := $(PDC_ROOT)/libpdc.a

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

# #####################################################################
# Makefile
# Author : Huangtao
# Version: V1.0.0  2019-12-29 Create
#
# Description: Makefile for compiling
#
# #####################################################################

PRODUCT := MY_TEST
CFLAGS += -D$(PRODUCT)
CFLAGS += -I$(PROJ_ROOT)/Include
CFLAGS += -c -o

AFLAGS += -rcv

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
LIB := $(PROJ_LIB)/hello.a

%.o: %.c
	$(CPP) $(CFLAGS) $@ $<

$(LIB): $(OBJS)
	$(AR) $(AFLAGS) $@ $^

.PHONY: clean all

all: clean $(LIB)

clean:
	@-$(RM) $(OBJS) $(LIB)

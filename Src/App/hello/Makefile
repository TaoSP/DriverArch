# #####################################################################
# Makefile
# Author : Huangtao
# Version: V1.0.0  2020-01-01 Create
# #####################################################################

HELLO_ROOT = $(shell pwd)

CFLAGS := -I$(PROJ_ROOT)/Include/app
CFLAGS += -c -o

AFLAGS := -rc

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:%.cpp=%.o)
LIB := $(HELLO_ROOT)/libhello.a

.PHONY: clean all
default: all

%.o: %.cpp
	$(CPP) $(CFLAGS) $@ $<

$(LIB): $(OBJS)
	$(AR) $(AFLAGS) $@ $^

all: $(LIB)
	$(CP) $(LIB) $(PROJ_LIB)

clean:
	@-$(RM) $(OBJS) $(LIB)

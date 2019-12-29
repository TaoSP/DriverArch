# #####################################################################
# Makefile
# Author : Huangtao
# Version: V1.0.0  2019-09-04 Create
#
# Description: Makefile for Target
#
# #####################################################################

PROJ_ROOT = $(shell pwd)/..
PROJ_BIN = $(PROJ_ROOT)/bin
PROJ_LIB = $(PROJ_ROOT)/Libs
export PROJ_ROOT PROJ_BIN PROJ_LIB

CROSS_COMPILE := 
CC = $(CROSS_COMPILE)gcc
AS = $(CROSS_COMPILE)as
AR = $(CROSS_COMPILE)ar
LD = $(CROSS_COMPILE)ld
CPP = $(CROSS_COMPILE)g++
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump
RM = rm
export CROSS_COMPILE CC AS AR LD CPP OBJCOPY OBJDUMP RM

# OS Lib
LIB_PATH :=$(PROJ_LIB)
LIB_DIR := $(shell find $(LIB_PATH) -not -wholename '*.svn*' -type d)
LIB_DIR_LDFLAGS := $(foreach dir, $(LIB_DIR), -L$(dir))
LIBS := $(foreach dir, $(LIB_DIR), $(wildcard $(dir)/*.a))
LIBDEP = --start-group $(LIBS) --end-group

LDFLAGS := $(LIB_DIR_LDFLAGS)
LDFLAGS += -o
LDFLAGS += -lc

TARGET := $(PROJ_BIN)/App
#BIN := $(TARGET).bin
#MAP := $(TARGET).map

.PHONY: clean all
default: all

pre:
	@-$(RM) -fr $(TARGET)
	@-$(RM) -fr $(BIN)
	@-$(RM) -fr $(MAP)

all: pre
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv
	$(MAKE) -C $(PROJ_ROOT)/Src/User
	$(MAKE) -C $(PROJ_ROOT)/Src/App
	# LD Target
	$(LD) $(LDFLAGS) -o $(TARGET) $(LIBDEP)
	#$(LD) $(LDFLAGS) -Map=$(MAP) -o $(TARGET) $(LIBDEP)
	#$(OBJCOPY) -O binary $(TARGET) $(BIN)

clean:
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv clean
	$(MAKE) -C $(PROJ_ROOT)/Src/User clean
	$(MAKE) -C $(PROJ_ROOT)/Src/App clean


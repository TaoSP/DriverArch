# #####################################################################
# Makefile
# Author : Huangtao
# Version: V1.0.0  2020-01-01 Create
# Description: 
# #####################################################################

.PHONY: clean all
default: all

all:
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv/OSA
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv/PRC
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv/PDC

clean:
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv/OSA clean
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv/PRC clean
	$(MAKE) -C $(PROJ_ROOT)/Src/Drv/PDC clean

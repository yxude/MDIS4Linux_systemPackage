#***************************  M a k e f i l e  *******************************
#  
#         Author: kp
#          $Date: 2003/02/21 13:34:54 $
#      $Revision: 2.1 $
#  
#    Description: Determine compiler/linker and flags used for kernel
#     			  Invoke this within the kernel's root dir
#       Switches: 
#		Rules:	  
#
#-----------------------------------------------------------------------------
#   (c) Copyright 2002 by MEN mikro elektronik GmbH, Nuernberg, Germany 
#*****************************************************************************
#
# This program is free software; you can redistribute  it and/or modify it
# under  the terms of  the GNU General  Public License as published by the
# Free Software Foundation;  either version 2 of the  License, or (at your
# option) any later version.

include Makefile

getsettings_for_mdis:
	@echo KERNEL_CC := $(CC)
	@echo KERNEL_LD := $(LD)
	@echo KERNEL_CFLAGS := $(CFLAGS)
	@echo KERNEL_LFLAGS := $(LFLAGS)
	@echo KERNEL_ARCH := $(ARCH)


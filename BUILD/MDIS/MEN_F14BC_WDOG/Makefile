# MDIS for Linux project makefile
# Generated by mdiswiz 1.5.012_beta-linux-5
# 2006-06-07
#/*
# * This program is free software: you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation, either version 2 of the License, or
# * (at your option) any later version.
# *
# * This program is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
# *
# * You should have received a copy of the GNU General Public License
# * along with this program.  If not, see <http://www.gnu.org/licenses/>.
# */

ifndef MEN_LIN_DIR

MEN_LIN_DIR = /opt/menlinux

endif

# You need to select the development environment so that MDIS
# modules are compiled with the correct tool chain

WIZ_CDK = Selfhosted

# All binaries (modules, programs and libraries) will be
# installed under this directory.

# TARGET_TREE

# The directory of the kernel tree used for your target's
# kernel. If you're doing selfhosted development, it's
# typically /usr/src/linux. This directory is used when
# building the kernel modules.

#IN_KERNEL_DIR = /usr/src/linux-source-2.6.17/
LIN_KERNEL_DIR = /usr/src/linux/

# Defines wether to build MDIS to support RTAI. If enabled,
# MDIS modules support RTAI in addition to the standard Linux
# mode. Set it to "yes" if you want to access MDIS devices from
# RTAI applications

MDIS_SUPPORT_RTAI = no

# The directory where you have installed the RTAI distribution
# via "make install"

# RTAI_DIR

# The include directory used when building user mode libraries
# and applications. If you're doing selfhosted development,
# it's typically /usr/include. If you're doing cross
# development, select the include directory of your cross
# compiler. Leave it blank if your compiler doesn't need this
# setting.

# LIN_USR_INC_DIR

# Define wether to build/use static or shared user state
# libraries. In "static" mode, libraries are statically linked
# to programs. In "shared" mode, programs dynamically link to
# the libraries. "shared" mode makes programs smaller but
# requires installation of shared libraries on the target

LIB_MODE = shared

# Defines wether to build and install the release (nodbg) or
# debug (dbg) versions of the kernel modules. The debug version
# of the modules issue many debug messages using printk's for
# trouble shooting

ALL_DBGS = dbg

# The directory in which the kernel modules are to be
# installed. Usually this is the target's
# /lib/modules/$(LINUX_VERSION)/misc directory.

MODS_INSTALL_DIR = /lib/modules/$(LINUX_VERSION)/misc

# The directory in which the user state programs are to be
# installed. Often something like /usr/local/bin. (relative to
# the target's root tree)

BIN_INSTALL_DIR = /usr/local/bin

# The directory in which the shared (.so) user mode libraries
# are to be installed. Often something like /usr/local/lib.
# (relative to the target's root tree)

LIB_INSTALL_DIR = /usr/local/lib

# The directory in which the static user mode libraries are to
# be installed. Often something like /usr/local/lib on
# development host. For cross compilation select a path
# relative to your cross compilers lib directory.

STATIC_LIB_INSTALL_DIR = /usr/local/lib

DESC_INSTALL_DIR = /etc/mdis

DEVNODE_INSTALL_DIR = /dev

ALL_LL_DRIVERS = F14BC/DRIVER/COM/driver.mak

ALL_BB_DRIVERS = SMB2BB/DRIVER/NATIVE/driver.mak

ALL_USR_LIBS = \
	USR_OSS/library.mak \
	USR_UTL/COM/library.mak \


#        SMB2_API/COM/library.mak

ALL_LL_TOOLS = F14BC/TOOLS/F14BC_CTRL/COM/program.mak

ALL_COM_TOOLS = \
	MDIS_API/M_OPEN/COM/program.mak \
	WDOG/WDOG_TEST/COM/program.mak 


ALL_NATIVE_DRIVERS = 

ALL_NATIVE_LIBS = 

ALL_NATIVE_TOOLS = 

ALL_DESC = system

include $(MEN_LIN_DIR)/BUILD/MDIS/TPL/rules.mak


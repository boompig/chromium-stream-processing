# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

TOP = ../..

SPU = 1
SHARED = 1
LIBRARY = templatespu
FILES = templatespu \
	templatespu_config \
	templatespu_init

LIBRARIES = spuload crutil crmothership

PRECOMP =
SLOP = $(PRECOMP)

LIB_DEFS += templatespu.def
include ${TOP}/cr.mk

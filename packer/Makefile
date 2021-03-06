# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

TOP = ..

SHARED = 1
LIBRARY = crpacker
NORMAL_FILES = packer \
	pack_arrays \
	pack_bbox \
	pack_beginend \
	pack_bounds \
	pack_buffer \
	pack_bufferobject \
	pack_client \
	pack_clipplane \
	pack_context \
	pack_current \
	pack_error \
	pack_extensions \
	pack_feedback \
	pack_fence \
	pack_fog \
	pack_init \
	pack_lights \
	pack_lists \
	pack_swap_lists \
	pack_map \
	pack_point \
	pack_swap_map \
	pack_misc \
	pack_materials \
	pack_matrices \
	pack_pixels \
	pack_pixelmap \
	pack_swap_pixelmap \
	pack_program \
	pack_regcombiner \
	pack_stipple \
	pack_texture \
	pack_swap_texture
LIB_DEFS = packer.def

LIBRARIES = crutil

SWAP_FILES = pack_arrays \
	pack_bounds \
	pack_bufferobject \
	pack_client \
	pack_clipplane \
	pack_fog \
	pack_lights \
	pack_materials \
	pack_matrices \
	pack_misc \
	pack_pixels \
	pack_point \
	pack_program \
	pack_regcombiner \
	pack_stipple
NAMED_SWAP_FILES = $(addsuffix _swap, $(SWAP_FILES))
SWAP_C_FILES = $(addsuffix .c, $(NAMED_SWAP_FILES))

FILES = $(NAMED_SWAP_FILES) $(NORMAL_FILES)

PRECOMP = packer.def $(TOP)/include/cr_packfunctions.h $(TOP)/include/cr_opcodes.h $(TOP)/include/state/cr_currentpointers.h pack_bbox.c pack_current.c packer.c $(SWAP_C_FILES)
SLOP = $(PRECOMP)

LIB_COPIES = packspu \
	tilesortspu \
	hiddenlinespu \
	archsplitspu \
	replicatespu

include $(TOP)/cr.mk

APIFILES = $(TOP)/glapi_parser/apiutil.py $(TOP)/glapi_parser/APIspec.txt

packer.def: packer_defs.py $(APIFILES)
	@$(ECHO) Making the packer def file
	@$(PYTHON) $< > $@

$(TOP)/include/cr_packfunctions.h: pack_header.py packer_special $(API_FILES)
	@$(ECHO) Making the pack functions header..
	@$(PYTHON) pack_header.py > $@

$(TOP)/include/cr_opcodes.h: opcodes.py $(APIFILES)
	@$(ECHO) Making the opcode header...
	$(PYTHON) opcodes.py > $@

$(TOP)/include/state/cr_currentpointers.h: pack_currentheader.py pack_currenttypes.py
	@$(ECHO) Making cr_currentpointers.h
	@$(PYTHON) pack_currentheader.py > $@

packer.c: packer.py packer_special $(APIFILES)
	@$(ECHO) Making the Packer...
	@$(PYTHON) packer.py > $@

pack_bbox.c: packer_bbox.py
	@$(ECHO) Making the BBOX Packer...
	@$(PYTHON) packer_bbox.py > $@

pack_current.c: pack_current.py pack_currenttypes.py
	@$(ECHO) Making the current functions...
	@$(PYTHON) pack_current.py > $@

%_swap.c: %.c pack_swap.py
	@$(ECHO) Making the swapping version of $<
	@$(PYTHON) pack_swap.py $< > $@

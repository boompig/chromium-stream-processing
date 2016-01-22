# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import sys

sys.path.append( "../../glapi_parser" )
import apiutil


keys = apiutil.GetDispatchedFunctions("../../glapi_parser/APIspec.txt")


apiutil.CopyrightC()

print """
/* DO NOT EDIT - this file generated by replicatespu_flush.py script */

/* These are otherwise ordinary functions which require that the buffer be
 * flushed immediately after packing the function.
 */
#include "cr_glstate.h"
#include "cr_packfunctions.h"
#include "replicatespu.h"
#include "replicatespu_proto.h"
"""

for func_name in apiutil.AllSpecials( "replicatespu_flush" ):
	return_type = apiutil.ReturnType(func_name)
	params = apiutil.Parameters(func_name)
	print 'void REPLICATESPU_APIENTRY replicatespu_%s( %s )' % ( func_name, apiutil.MakeDeclarationString(params) )
	print '{'
	print '\tGET_THREAD(thread);'
	print '\tif (replicate_spu.swap)'
	print '\t{'
	print '\t\tcrPack%sSWAP( %s );' % ( func_name, apiutil.MakeCallString( params ) )
	print '\t}'
	print '\telse'
	print '\t{'
	print '\t\tcrPack%s( %s );' % ( func_name, apiutil.MakeCallString( params ) )
	print '\t}'
	print '\treplicatespuFlush( (void *) thread );'
	print '}\n'

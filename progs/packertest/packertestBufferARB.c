/* Copyright (c) 2001, Stanford University
	All rights reserved.

	See the file LICENSE.txt for information on redistributing this software. */
	
/* DO NOT EDIT - THIS FILE GENERATED BY THE opcodes.py SCRIPT */



#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chromium.h"
#include "cr_error.h"
#include "packertest.h"

extern int errChk;
extern int verbose;
void printError(char *name);

void crPackTestBufferDataARB(void)
{
    GLubyte data[100000];	/* VECP2 */

    crDebug("BufferDataARB is a stub and needs to be special cased  0!");
    return;
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STREAM_DRAW_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_DRAW_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_DRAW_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STREAM_DRAW_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_DRAW_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_DRAW_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STREAM_READ_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_READ_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_READ_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STREAM_READ_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_READ_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_READ_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STREAM_COPY_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_COPY_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_COPY_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STREAM_COPY_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_COPY_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STREAM_COPY_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STATIC_DRAW_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_DRAW_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_DRAW_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STATIC_DRAW_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_DRAW_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_DRAW_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STATIC_READ_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_READ_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_READ_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STATIC_READ_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_READ_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_READ_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STATIC_COPY_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_COPY_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_COPY_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_STATIC_COPY_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_COPY_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_STATIC_COPY_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_DYNAMIC_DRAW_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_DRAW_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_DRAW_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_DYNAMIC_DRAW_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_DRAW_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_DRAW_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_DYNAMIC_READ_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_READ_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_READ_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_DYNAMIC_READ_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_READ_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_READ_ARB )");
    glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_DYNAMIC_COPY_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_COPY_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_COPY_ARB )");
    glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		    (const GLvoid *) data, GL_DYNAMIC_COPY_ARB);
    if (errChk)
	printError
	    ("glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_COPY_ARB)");
    if (verbose)
	crDebug
	    ("glBufferDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, , GL_DYNAMIC_COPY_ARB )");
}
void crPackTestBufferSubDataARB(void)
{
    GLubyte data[100000];	/* VECP2 */

    crDebug
	("BufferSubDataARB is a stub and needs to be special cased  0!");
    return;
    glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0,
		       (const GLvoid *) data);
    if (errChk)
	printError
	    ("glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0, )");
    if (verbose)
	crDebug
	    ("glBufferSubDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0,  )");
    glBufferSubDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
		       (unsigned) 0, (const GLvoid *) data);
    if (errChk)
	printError
	    ("glBufferSubDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0, )");
    if (verbose)
	crDebug
	    ("glBufferSubDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0,  )");
}
void crPackTestDeleteBuffersARB(void)
{
    GLubyte buffer[100000];	/* VECP2 */

    crDebug
	("DeleteBuffersARB is a stub and needs to be special cased  0!");
    return;
    glDeleteBuffersARB((unsigned) 10, (const GLuint *) buffer);
    if (errChk)
	printError("glDeleteBuffersARB((unsigned) 10, )");
    if (verbose)
	crDebug("glDeleteBuffersARB( (unsigned) 10,  )");
}
void crPackTestGenBuffersARB(void)
{
    GLubyte buffer[100000];	/* VECP */

    crDebug("GenBuffersARB is a stub and needs to be special cased  1!");
    return;
    glGenBuffersARB((unsigned) 10, (GLuint *) buffer);
    if (errChk)
	printError("glGenBuffersARB((unsigned) 10, )");
    if (verbose)
	crDebug("glGenBuffersARB( (unsigned) 10,  )");
}
void crPackTestGetBufferSubDataARB(void)
{
    GLubyte data[100000];	/* VECP */

    crDebug
	("GetBufferSubDataARB is a stub and needs to be special cased  1!");
    return;
    glGetBufferSubDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0,
			  (void *) data);
    if (errChk)
	printError
	    ("glGetBufferSubDataARB(GL_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0, )");
    if (verbose)
	crDebug
	    ("glGetBufferSubDataARB( GL_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0,  )");
    glGetBufferSubDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0,
			  (unsigned) 0, (void *) data);
    if (errChk)
	printError
	    ("glGetBufferSubDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0, )");
    if (verbose)
	crDebug
	    ("glGetBufferSubDataARB( GL_ELEMENT_ARRAY_BUFFER_ARB, (unsigned) 0, (unsigned) 0,  )");
}

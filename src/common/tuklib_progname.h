// SPDX-License-Identifier: 0BSD

///////////////////////////////////////////////////////////////////////////////
//
/// \file       tuklib_progname.h
/// \brief      Program name to be displayed in messages
//
//  Author:     Lasse Collin
//
///////////////////////////////////////////////////////////////////////////////

#ifndef TUKLIB_PROGNAME_H
#define TUKLIB_PROGNAME_H

#include "tuklib_common.h"
#ifndef _WIN32_WCE
#	include <errno.h>
#endif

TUKLIB_DECLS_BEGIN

#ifdef HAVE_PROGRAM_INVOCATION_NAME
#	define progname program_invocation_name
#else
#	define progname TUKLIB_SYMBOL(tuklib_progname)
	extern char *progname;
#endif

#define tuklib_progname_init TUKLIB_SYMBOL(tuklib_progname_init)
extern void tuklib_progname_init(char **argv);

TUKLIB_DECLS_END
#endif

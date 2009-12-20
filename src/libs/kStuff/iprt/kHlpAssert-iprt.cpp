/* $Id$ */
/** @file
 * kHlpEnv - Assertions, IPRT based implementation.
 */

/*
 * Copyright (C) 2009 Sun Microsystems, Inc.
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 USA or visit http://www.sun.com if you need
 * additional information or have any questions.
 */

/*******************************************************************************
*   Header Files                                                               *
*******************************************************************************/
#include <k/kHlpAssert.h>
#include <iprt/stdarg.h>
#include <iprt/assert.h>
#include <iprt/string.h>
#include <iprt/err.h>


KHLP_DECL(void) kHlpAssertMsg1(const char *pszExpr, const char *pszFile, unsigned iLine, const char *pszFunction)
{
    RTAssertMsg1Weak(pszExpr, iLine, pszFile, pszFunction);
}


KHLP_DECL(void) kHlpAssertMsg2(const char *pszFormat, ...)
{
    va_list va;
    va_start(va, pszFormat);
    RTAssertMsg2V/*Weak?*/(pszFormat, va);
    va_end(va);
}


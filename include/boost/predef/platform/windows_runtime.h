/*
Copyright (c) Microsoft Corporation 2014
Copyright Rene Rivera 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_PLAT_WINDOWS_RUNTIME_H
#define BOOST_PREDEF_PLAT_WINDOWS_RUNTIME_H

#include <boost/predef/make.h>
#include <boost/predef/os/windows.h>
#include <boost/predef/platform/windows_phone.h>
#include <boost/predef/platform/windows_store.h>
#include <boost/predef/version_number.h>

/*`
[heading `BOOST_PLAT_WINDOWS_RUNTIME`]

This is deprecated.  Consumers should switch to use:

    `BOOST_PLAT_WINDOWS_PHONE || BOOST_PLAT_WINDOWS_STORE`

to detect a non-desktop UWP target.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`BOOST_PLAT_WINDOWS_PHONE`] [__predef_detection__]]
    [[`BOOST_PLAT_WINDOWS_STORE`] [__predef_detection__]]
    ]
 */

#define BOOST_PLAT_WINDOWS_RUNTIME BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if BOOST_OS_WINDOWS && \
    (BOOST_PLAT_WINDOWS_STORE || BOOST_PLAT_WINDOWS_PHONE)
#   undef BOOST_PLAT_WINDOWS_RUNTIME
#   define BOOST_PLAT_WINDOWS_RUNTIME BOOST_VERSION_NUMBER_AVAILABLE
#endif
 
#if BOOST_PLAT_WINDOWS_RUNTIME
#   define BOOST_PLAT_WINDOWS_RUNTIME_AVAILABLE
#   include <boost/predef/detail/platform_detected.h>
#endif

#define BOOST_PLAT_WINDOWS_RUNTIME_NAME "Windows Runtime"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_PLAT_WINDOWS_RUNTIME,BOOST_PLAT_WINDOWS_RUNTIME_NAME)

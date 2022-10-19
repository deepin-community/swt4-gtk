@rem ***************************************************************************
@rem Copyright (c) 2000, 2021 IBM Corporation and others.
@rem
@rem This program and the accompanying materials
@rem are made available under the terms of the Eclipse Public License 2.0
@rem which accompanies this distribution, and is available at
@rem https://www.eclipse.org/legal/epl-2.0/
@rem
@rem SPDX-License-Identifier: EPL-2.0
@rem
@rem Contributors:
@rem      IBM Corporation - initial API and implementation
@rem ***************************************************************************

@rem The original build.bat source is located in /org.eclipse.swt/Eclipse SWT PI/win32/library/build.bat. It is copied during various build(s).
@rem Typically it's not ran directly, instead it is reached by build.xml's build_libraries target found in eclipse.platform.swt.binaries\bundles\org.eclipse.swt.win32.win32.x86*

@echo off
echo
echo INFO Starting build of binaries. Detailed system setup instructions can be found in /Readme.Win32.md

@rem SWT_BUILDDIR defaults to "W:" on the SWT Windows native build infrastructure machine.
IF "x.%SWT_BUILDDIR%"=="x." set "SWT_BUILDDIR=W:"
echo SWT build dir: %SWT_BUILDDIR%

@rem Specify VisualStudio Edition: 'Community', 'Enterprise', 'Professional' etc.
IF "x.%MSVC_EDITION%"=="x." set "MSVC_EDITION=Community"

@rem Specify VisualStudio Version: '2017' or newer '2019'
IF "x.%MSVC_VERSION%"=="x." set "MSVC_VERSION=2019"

IF "x.%MSVC_HOME%"=="x." set "MSVC_HOME=%SWT_BUILDDIR%\Microsoft\Visual Studio\%MSVC_VERSION%\"
IF NOT EXIST "%MSVC_HOME%" set "MSVC_HOME=%ProgramFiles(x86)%\Microsoft Visual Studio\%MSVC_VERSION%\%MSVC_EDITION%"
IF EXIST "%MSVC_HOME%" (
	echo "Microsoft Visual Studio %MSVC_VERSION% dir: %MSVC_HOME%"
) ELSE (
	echo "WARNING: Microsoft Visual Studio %MSVC_VERSION% was not found."
)

IF "x.%1"=="x.x86" GOTO X86
IF "x.%1"=="x.x86_64" GOTO X86_64

:X86
IF "x.%OUTPUT_DIR%"=="x." set OUTPUT_DIR=..\..\..\org.eclipse.swt.win32.win32.x86
IF "x.%SWT_JAVA_HOME%"=="x." set "SWT_JAVA_HOME=%SWT_BUILDDIR%\Java\Oracle\jdk1.8.0-latest\x86"
IF "x.%SWT_JAVA_HOME%"=="x." (
    echo "WARNING: x86 Java JDK not found. Please set SWT_JAVA_HOME to your JDK directory."
) ELSE (
    echo "SWT_JAVA_HOME x86: %SWT_JAVA_HOME%"
)
call "%MSVC_HOME%\VC\Auxiliary\Build\vcvarsall.bat" x86
IF x.%1==x.x86 shift
GOTO MAKE

:X86_64
set PROCESSOR_ARCHITECTURE=AMD64
IF "x.%OUTPUT_DIR%"=="x." set OUTPUT_DIR=..\..\..\org.eclipse.swt.win32.win32.x86_64

IF "x.%SWT_JAVA_HOME%"=="x." (
    IF exist "%SWT_BUILDDIR%\Java\Oracle\jdk1.8.0-latest\x64" (
        set "SWT_JAVA_HOME=%SWT_BUILDDIR%\Java\Oracle\jdk1.8.0-latest\x64"
    ) ELSE (
        IF exist "C:\Program Files\Java\jdk*" (
            echo "Found Java in C:\Program Files\Java\jdk, automatically setting SWT_JAVA_HOME to latest java"
            for /d %%i in ("\Program Files\Java\jdk*") do set SWT_JAVA_HOME=%%i
        )
    )
)
IF "x.%SWT_JAVA_HOME%"=="x." (
    echo "WARNING: x64 Java JDK not found. Please set SWT_JAVA_HOME to your JDK directory."
) ELSE (
    echo "SWT_JAVA_HOME x64: %SWT_JAVA_HOME%"
)

set CFLAGS=-DJNI64
IF "x.%CHROMIUM_RUST_DIR%"=="x." (
    set CHROMIUM_HEADERS=chromium_subp\cef_win32
    set CHROMIUM_TARGET=chromium_swt\target\release
) ELSE (
    set CHROMIUM_HEADERS=%CHROMIUM_RUST_DIR%\chromium_subp\cef_win32
    set CHROMIUM_TARGET=%CHROMIUM_RUST_DIR%\chromium_swt\target\release
)
call "%MSVC_HOME%\VC\Auxiliary\Build\vcvarsall.bat" x64
shift
GOTO MAKE

:MAKE
@rem if call to vcvarsall.bat (which sets up environment) silently fails, then provide advice to user.
WHERE cl
if %ERRORLEVEL% NEQ 0 (
    echo "WARNING: cl (Microsoft C compiler) not found on path. Please install Microsoft Visual Studio."
    echo "     If already installed, try launching eclipse from the 'Developer Command Prompt for VS' "
)
nmake -f make_win32.mak %1 %2 %3 %4 %5 %6 %7 %8 %9
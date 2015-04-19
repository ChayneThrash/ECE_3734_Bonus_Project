/*
 * "Copyright (c) 2008 Robert B. Reese, Bryan A. Jones, J. W. Bruce ("AUTHORS")"
 * All rights reserved.
 * (R. Reese, reese_AT_ece.msstate.edu, Mississippi State University)
 * (B. A. Jones, bjones_AT_ece.msstate.edu, Mississippi State University)
 * (J. W. Bruce, jwbruce_AT_ece.msstate.edu, Mississippi State University)
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the authors appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE "AUTHORS" BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE "AUTHORS"
 * HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE "AUTHORS" SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE "AUTHORS" HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Please maintain this header in its entirety when copying/modifying
 * these files.
 *
 *
 */

// Documentation placed on the library collection history page. This file only
// include comments for Doxygen; it does not contain any
// code.
/**
\page history History and release notes for this library collection.

Next release:
- No changes yet.

30-Oct-2014 (r525):
- Fixes to DMA and ECAM code for E family devices.
- Significant rewrite and simplifcation of build system.
  - Now, individual C files which require a specific peripheral will
    issue a warning if that peripheral is missing and compile and empty main().
  - Consistent naming convention establed for esos, bootloader, and library
    builds.
- Significant ESOS additions, including new examples and mailboxes.
- Added MicroStik II target platform, Embedded F14 target platform.
- Docs cleanup. All examples now hyperlinks to the main examples page.

3-Mar-2014 (r476):
- Revisions to support the E family devices:
  - CAN code ported.
  - UART init code updated.
  - Assembly code PSV fixes.
  - SPI supports enhanced buffer mode, runs at 10 MHz.
  - Timer headers updated.
- ADC code made consistent with the textbook.
- Bootloader now correctly enables the OSC pins for an external
  crystal or clock.
- FSM example rewrite.
- Docs cleanup.

4-Nov-2013 (r404 / 3a1ac95477ff):
- Fixed ENABLE/DISABLE_Rxy_ANALOG for older (PIC24H) parts.
- Eliminated many compiler warnings during a full build.
- Fixes to various project files so they'll build.

25-Aug-2013 (r385 / e818e78a9810):
- Fix to I2C baud rate calcuation (BRG register is 9 bits only).
- More projects converted to MPLAB X.
- Rewrites to chap 8, 9 files for the book.
- Support for deviecs with hardmapped UART pins (28-pin PIC24FK, for example).
- Combined pic24_e/fh_ports.h into a single file, added support for PIC24FK
  analog config.
- Doxygen comments added to every GPIO config macro.
- New ESOS features: mailboxes and more.
- _NOFLOAT actually removes all floats in the library.

09-Jul-2013 (r267 / 992b80bc0901):
This is a major release / revision in the beta stage. The upcoming book will
provide a full description. Just a few highlights:
- Update to MPLAB X.
- Revised GPIO system.
- Updates to code examples for revision of book.
- Updated build system.
- Refactored bootloader now makes use of the PIC24 library, not a custom
  cut-and-paste.

23-May-2013 (r65 / f5e398dc9af3):
- Merge the lib/ subrepo into the main repo.
- Clean up Doxygen / compiler warnings.
- Updated to AStyle 2.03, ran AStyle.

11-Nov-2013 (r61 / 3dfae4d8075a)
- Changed function names 'ConfigOutputCapture1' to 'ConfigOutputCompare1' as
  that is what is really being configured.
- Changed ledpwm.c back to reflect what is in the book/notes.
- Added ledpwm_bullymon project that demonstrates  usage of variable monitoring
  in Bully Bootloader.
- Add: batch files to flash bootloader images
- Fixed error in chapter 5 problem 27 solution.

24-May-2012 (r55 / 0a577da868fe):
- Made warnings in pic24_configbits.c consistent
- Made formatting consistent (ran AStyle)
- Fixed a few misc compiler warnings

22-May-2012 (r50 / 8173e0aa9b43):
- Added support for PIC24E/dsPIC33E contained in MPLAB C compiler release 3.31.
- Added initial support for PIC24E/dsPIC33E. Most examples tested with
  24EP64GP202.
- Removed stdint.h, since v3.30 of the compiler now has it. For older compilers,
  put contents of old stdint.h in pic24-generic.h.
- Fixed pic24_adc.h to use new-style C99 types (uint16_t, not uint16).

5-Mar-2012 (r42 / 7b7f526d7bcc):
- Updated .gld and include/devices to support new additions to the PIC24/dsPIC
  family.

2-Mar-2012 (r38 / e76ddf28fbe5):
- Removed unnecessary whitespace in pic24_uart.c-template
- Made a few strings const, to store them in ROM
- Removed scary warning for an unknown revision of a chip
- volatile qualifier added to specifyVar
- pic24_configbits.c \#warnings reworded to remove unnecessary (and now wrong)
  file names
- New revisions added for two chips
- Updated runscons.bat to produce no errors / warnings on a successful compile

27-Feb-2012 (r37 / 220dc4d778e9):
- Updated chap10/mcp24lc515_i2c_eeprom.c to use BLKSIZE everywhere
- Put the link in textbook_examples_dox.h to rtcc.c in the correct area
- Fixed bug in outUint8Decimal when x > 100
- Fixed to doc to keep Doxygen from complaining; updated ignores, moved to
  current version of Doxygen.
- Changed naming of Microchip include files to capital letters, to build on
  Linux.
- CR/LF -> CR cleanup plus a bit more via AStyle.
- SCons build updated to produce Unix-style line endings in the generated
  template files.
- Astyle now runs on the template files
- Link to Mercurial repo added on pic24 lib page

24-Aug-2011 (r28 / rd3252bde49e7):
- Fixed configPinsForLowPower to look at the LPOSCEN / SOSCEN bit to avoid
  disrupting an attached crystal oscillator.
- Moved repo hosting to Bitbucket
- Fixed compile errors in ESOS
- Update docs generation to include ESOS. Tidyed up doxygen a bit.
- lib/common/pic24_stdio_uart.c, chap10/stdio_test.* fixed, updated so
  it compiles with UART 3, 4
- scons build fixes / improvements

12-Apr-2011 (r21 / r880971ce93b6):
- Simplified the method for selecting which hardware platform
  to build for by introducing \ref HARDWARE_PLATFORM and
  appropriately refactoring the code.
- Added support for the The Microchip 16-bit 28-pin Starter Board,
  Part number DM300027. Thanks to Istvan for contributing this!
  See \ref STARTER_BOARD_28P.
- Merged in support for the Dangerous Prototypes web platform.
  See \ref DANGEROUS_WEB.
- Updated the build process to build reset for all supported platforms.
- Updated doxygen to not include files from lib/includes/devices.
- Updated runastyle.bat; now uses Unix line endings.
- Cleaned up comments in pic24_libconfig.h.
- Ran astyle, moving the files to unix-style line ends.
- Added this history file.

Previous to this, history resided in SVN / HG. Sigh.
*/

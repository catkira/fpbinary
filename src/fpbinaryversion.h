/******************************************************************************
 * Licensed under GNU General Public License 2.0 - see LICENSE
 *****************************************************************************/

/******************************************************************************
 *
 * This is where the fpbinary package version is defined.
 * Don't change the format of the defines - they are assumed by setup.py .
 *
 *****************************************************************************/

#ifndef FPBINARYVERSION_H_
#define FPBINARYVERSION_H_

#include "fpbinarycommon.h"

/* VERSION_STRING and BUILD_VERSION need to be set when the compiler
 * is invoked (normally done by setup.py).
 */
#define FPBINARY_VERSION_STR xstr(VERSION_STRING)
#define FPBINARY_BUILD_NUM_STR xstr(BUILD_VERSION)

#endif /* FPBINARYVERSION_H_ */

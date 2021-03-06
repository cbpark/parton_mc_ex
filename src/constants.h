/*
 *  Copyright (C) 2017 Chan Beom Park <cbpark@gmail.com>
 *
 *  This file is part of PartonMCEx, which is released under the GNU General
 *  Public License. See file LICENSE in the top directory of this project or
 *  go to <http://www.gnu.org/licenses/> for full license details.
 */

#ifndef SRC_CONSTANTS_H_
#define SRC_CONSTANTS_H_

/** conversion factor GeV^-2 -> pb */
const double PBCONV = 3.894e8;

/** Z boson mass */
const double MZ = 91.188;
const double MZ2 = MZ * MZ;

/** Z boson width */
const double GAMMAZ = 2.4414;
const double GAMMAZ2 = GAMMAZ * GAMMAZ;

/** alpha QED */
const double ALPHA = 1 / 132.507;

/** fermi constant */
const double GF = 1.16639e-5;

/** sin^2(weak mixing angle) */
const double SW2 = 0.222246;

const double PI = 3.141592653589793238463;

/** Range of costh. 1 - (-1) = 2. */
const double DELTATH = 2;

#endif  // SRC_CONSTANTS_H_

///////////////////////////////////////////////////////////////////////
// File:        universalambigs.h
// Description: Data for a universal ambigs file that is useful for
//              any language.
// Author:      Ray Smith
//
// (C) Copyright 2013, Google Inc.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
///////////////////////////////////////////////////////////////////////

#ifndef TESSERACT_CCUTIL_UNIVERSALAMBIGS_H_
#define TESSERACT_CCUTIL_UNIVERSALAMBIGS_H_

namespace tesseract {

#ifndef _MSC_VER
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
inline const char kUniversalAmbigsFile[] = {
    "v2\n"
    "'' \" 1\n"
    "`' \" 1\n"
    "'` \" 1\n"
    "‘' \" 1\n"
    "'‘ \" 1\n"
    "’' \" 1\n"
    "'’ \" 1\n"
    "`` \" 1\n"
    "`‘ \" 1\n"
    "‘` \" 1\n"
    "`’ \" 1\n"
    "’` \" 1\n"
    "‘‘ “ 1\n"
    "‘’ \" 1\n"
    "’‘ \" 1\n"
    "’’ ” 1\n"
    ",, „ 1\n"
    "m rn 0\n"
    "rn m 0\n"
    "m in 0\n"
    "in m 0\n"
    "d cl 0\n"
    "cl d 0\n"
    "nn rm 0\n"
    "rm nn 0\n"
    "n ri 0\n"
    "ri n 0\n"
    "li h 0\n"
    "lr h 0\n"
    "ii u 0\n"
    "ii n 0\n"
    "ni m 0\n"
    "iii m 0\n"
    "ll H 0\n"
    "I-I H 0\n"
    "vv w 0\n"
    "VV W 0\n"
    "t f 0\n"
    "f t 0\n"
    "a o 0\n"
    "o a 0\n"
    "e c 0\n"
    "c e 0\n"
    "rr n 0\n"
    "E fi 0\n"
    "l< k 0\n"
    "ld ki 0\n"
    "lx h 0\n"
    "xn m 0\n"
    "ux in 0\n"
    "r t 0\n"
    "d tl 0\n"
    "di th 0\n"
    "ur in 0\n"
    "un im 0\n"
    "u a 0\n"
    "o ó 0\n"
    "ó o 0\n"
    "i í 0\n"
    "í i 0\n"
    "a á 0\n"
    "á a 0\n"
    "e é 0\n"
    "é e 0\n"
    "u ú 0\n"
    "ú u 0\n"
    "n ñ 0\n"
    "ñ n 0\n"
    "0 o 0\n"
    "d tr 0\n"
    "n tr 0\n"
    "ñ fi 0\n"
    "u ti 0\n"
    "ñ ti 0\n"
    "d ti 0\n"
    "d tí 0\n"
    "d rí 0\n"
    "a à 0\n"
    "e è 0\n"
    "n ij 0\n"
    "g ij 0\n"
    "o ò 0\n"
    "E É 0\n"
    "E È 0\n"
    "u ü 0\n"
};
#ifndef _MSC_VER
#pragma GCC diagnostic pop
#endif

inline const int ksizeofUniversalAmbigsFile = sizeof(kUniversalAmbigsFile);

} // namespace tesseract

#endif // TESSERACT_CCUTIL_UNIVERSALAMBIGS_H_

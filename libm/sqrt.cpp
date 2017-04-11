/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <math.h>

#include "fpmath.h"

#if 1

double sqrt(double x) {
  return __builtin_sqrt(x);
}

float sqrtf(float x) {
  return __builtin_sqrtf(x);
}

long double sqrtl(long double x) {
  return __builtin_sqrtl(x);
}

#else

#include "upstream-freebsd/lib/msun/src/e_sqrt.c"
#include "upstream-freebsd/lib/msun/src/e_sqrtf.c"
#include "upstream-freebsd/lib/msun/src/e_sqrtl.c"

#endif

#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
  k00, k01, k02, k03, k04, k05,                          k08, k09, k10, k11, k12, k13,    K70, K71, \
  k14, k15, k16, k17, k18, k19, k06,                k07, k22, k23, k24, k25, k26, k27,    K72, K73, \
  k28, k29, k30, k31, k32, k33, k20,                k21, k36, k37, k38, k39, k40, k41,    K74, K75, \
  k42, k43, k44, k45, k46, k47, k34, k48,      k49, k35, k50, k51, k52, k53, k54, k55,    K76, K77, \
  k56, k57, k58, k59,    k60,   k61, k62,      k63, k64,   k65,    k66, k67, k68, k69,    K78, K79 \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13,    K70, K71 }, \
	{ k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, k26, k27,    K72, K73 }, \
	{ k28, k29, k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k40, k41,    K74, K75 }, \
	{ k42, k43, k44, k45, k46, k47, k48, k49, k50, k51, k52, k53, k54, k55,    K76, K77 }, \
	{ k56, k57, k58, k59, k60, k61, k62, k63, k64, k65, k66, k67, k68, k69,    K78, K79 }  \
}

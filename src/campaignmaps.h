#ifndef CAMPAIGNMAPS
#define CAMPAIGNMAPS

#include "level.h"

#define NB_LEVEL 2

/*
 * To "prevent" cheating, I placed campaign
 * maps in this header instead of files to
 * make them a bit hidden.
 * I'll find a better way soon. Actually,
 * it's just for testing.
 */

int level1[3][3] =
        {{EMPTY , FILLED, EMPTY },
         {FILLED, FILLED, FILLED},
         {EMPTY , FILLED, EMPTY }};

int level2[3][3] =
        {{FILLED, FILLED, FILLED},
         {FILLED, EMPTY , FILLED},
         {FILLED, FILLED, FILLED}};

#endif // CAMPAIGNMAPS


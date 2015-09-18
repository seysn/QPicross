#ifndef CAMPAIGNMAPS
#define CAMPAIGNMAPS

#include <vector>
#include <level.h>

#define NB_LEVEL 1

/*
 * To "prevent" cheating, I placed campaign
 * maps in this header instead of files to
 * make them a bit hidden.
 * I'll find a better way soon. Actually,
 * it's just for testing.
 */

std::vector<std::vector<int> > level1 =
        {{EMPTY , FILLED, EMPTY },
         {FILLED, FILLED, FILLED},
         {EMPTY , FILLED, EMPTY }};

std::vector<std::vector<int> > level2 =
        {{FILLED, FILLED, FILLED},
         {FILLED, EMPTY , FILLED},
         {FILLED, FILLED, FILLED}};

#endif // CAMPAIGNMAPS


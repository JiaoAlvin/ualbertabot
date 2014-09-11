#pragma once

#include "BWAPI.h"
#include "BaseTypes.h"

namespace BOSS
{
    namespace Constants
    {
        
        const size_t MAX_ACTIONS            = 50;       // maximum number of actions allowed in StarcraftData

        const size_t MAX_PROGRESS           = 50;       // maximum number of actions in progress allowed

        const size_t MAX_BUILDINGS          = 70;         // maximum number of buildings allowed

        const size_t BUILDING_ERROR         = -2;        // building error return code

        const size_t MAX_HATCHERIES         = 5;      // maximum number of hatcheries allowed

        const size_t ZERG_LARVA_TIMER       = 336;     // number of frames between zerg larva spawn

        const size_t BUILDING_PLACEMENT     = 24 * 5;  // number of frames to use for building placement

        const size_t MAX_OF_ACTION          = 200;

        const size_t NUM_HASHES             = 2;

        const double MPWPF                  = 0.045;

        const double GPWPF                  = 0.07;
    
        const size_t MAX_ACTION_TYPES       = 100;

        const size_t ZERG_LARVA_ID          = 255;

    }
    
    namespace Races
    {
        enum {Protoss, Terran, Zerg, NUM_RACES, None};

        RaceID GetRaceID(BWAPI::Race r);
    }

}

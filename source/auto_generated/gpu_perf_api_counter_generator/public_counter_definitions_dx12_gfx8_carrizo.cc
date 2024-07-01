//==============================================================================
// Copyright (c) 2010-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for DX12 GFX8_CARRIZO.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_dx12_gfx8_carrizo.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx8_carrizo.h"

namespace dx12_gfx8_carrizo
{
bool UpdatePublicAsicSpecificCounters(GDT_HW_GENERATION desired_generation, GDT_HW_ASIC_TYPE asic_type, GpaDerivedCounters& c)
{
    UNREFERENCED_PARAMETER(desired_generation);
    UNREFERENCED_PARAMETER(c);  // Unreferenced if there are no ASIC specific block instance registers

    if (!counter_gfx8_carrizo::MatchAsic(asic_type))
    {
        return false;
    }

    counter_gfx8_carrizo::OverrideBlockInstanceCounters(asic_type);

    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(191);
        internal_counters.push_back(338);
        internal_counters.push_back(485);
        internal_counters.push_back(632);
        internal_counters.push_back(49743);

        c.UpdateAsicSpecificDerivedCounter("TessellatorBusy", internal_counters, "0,1,max,2,max,3,max,4,/,(100),*");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(191);
        internal_counters.push_back(338);
        internal_counters.push_back(485);
        internal_counters.push_back(632);

        c.UpdateAsicSpecificDerivedCounter("TessellatorBusyCycles", internal_counters, "0,1,max,2,max,3,max");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(87);
        internal_counters.push_back(234);
        internal_counters.push_back(381);
        internal_counters.push_back(528);
        internal_counters.push_back(68);
        internal_counters.push_back(215);
        internal_counters.push_back(362);
        internal_counters.push_back(509);
        internal_counters.push_back(163);
        internal_counters.push_back(310);
        internal_counters.push_back(457);
        internal_counters.push_back(604);

        c.UpdateAsicSpecificDerivedCounter("VSVerticesIn", internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(172);
        internal_counters.push_back(319);
        internal_counters.push_back(466);
        internal_counters.push_back(613);

        c.UpdateAsicSpecificDerivedCounter("HSPatches", internal_counters, "0,1,2,3,sum4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(87);
        internal_counters.push_back(234);
        internal_counters.push_back(381);
        internal_counters.push_back(528);
        internal_counters.push_back(68);
        internal_counters.push_back(215);
        internal_counters.push_back(362);
        internal_counters.push_back(509);
        internal_counters.push_back(163);
        internal_counters.push_back(310);
        internal_counters.push_back(457);
        internal_counters.push_back(604);

        c.UpdateAsicSpecificDerivedCounter("DSVerticesIn", internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,ifnotzero");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(76);
        internal_counters.push_back(223);
        internal_counters.push_back(370);
        internal_counters.push_back(517);

        c.UpdateAsicSpecificDerivedCounter("GSPrimsIn", internal_counters, "0,1,2,3,sum4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(87);
        internal_counters.push_back(234);
        internal_counters.push_back(381);
        internal_counters.push_back(528);
        internal_counters.push_back(68);
        internal_counters.push_back(215);
        internal_counters.push_back(362);
        internal_counters.push_back(509);

        c.UpdateAsicSpecificDerivedCounter("GSVerticesOut", internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero");
    }
    return true;
}

}  // namespace dx12_gfx8_carrizo


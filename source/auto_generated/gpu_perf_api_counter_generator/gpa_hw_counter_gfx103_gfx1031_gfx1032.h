//==============================================================================
// Copyright (c) 2010-2021 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Hardware counter info for GFX103_GFX1031_GFX1032.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX103_GFX1031_GFX1032_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX103_GFX1031_GFX1032_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx103.h"

namespace counter_gfx103_gfx1031_gfx1032
{
/// @brief Uses the input ASIC type to determine if this data provides an ASIC specific version.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asic_type)
{
    static std::set<GDT_HW_ASIC_TYPE> asics_supported = { GDT_GFX10_3_1, GDT_GFX10_3_2, GDT_GFX10_3_4 };

    if (asics_supported.find(asic_type) == asics_supported.end())
    {
        return false;
    }

    return true;
}

    extern GpaHardwareCounterDesc kGcrCountersGfx103_gfx1031_gfx1032[]; ///< Array of internal counters for Gcr block for Gfx103_gfx1031_gfx1032 family

/// @brief Replaces count number of block instance counters at the destination with the overriding source counters.
///
/// @param [in] dest_counter Destination to update.
/// @param [in] src_counter Source to update from.
/// @param [in] count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GpaHardwareCounterDesc* dest_counter, GpaHardwareCounterDesc* src_counter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        dest_counter[i] = src_counter[i];
    }
}

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asic_type)
{
    if (!MatchAsic(asic_type))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(counter_gfx103::kGcrCountersGfx103, kGcrCountersGfx103_gfx1031_gfx1032, 110);

    return true;
}

bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type);
} // counter_gfx103_gfx1031_gfx1032

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX103_GFX1031_GFX1032_H_

// clang-format on

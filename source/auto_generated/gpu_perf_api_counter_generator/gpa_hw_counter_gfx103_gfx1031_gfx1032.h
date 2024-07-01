//==============================================================================
// Copyright (c) 2010-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Hardware counter info for GFX103_GFX1031_GFX1032.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX103_GFX1031_GFX1032_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX103_GFX1031_GFX1032_H_

// clang-format off

#include <vector>
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
    static std::set<GDT_HW_ASIC_TYPE> asics_supported = { GDT_GFX10_3_1, GDT_GFX10_3_2, GDT_GFX10_3_4, GDT_GFX10_3_5 };

    return asics_supported.find(asic_type) != asics_supported.end();
}

/// @brief Replaces count number of block instance counters at the destination with the overriding source counters.
///
/// @param [in] dest_counter Destination to update.
/// @param [in] src_counter Source to update from.
/// @param [in] count Number of counters to update.
inline void ReplaceBlockInstanceCounters(std::vector<GpaHardwareCounterDesc> &dest_counter, const std::vector<GpaHardwareCounterDesc> &src_counter)
{
    assert(src_counter.size() == dest_counter.size());
    dest_counter = src_counter;
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

    return true;
}

bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type);
} // counter_gfx103_gfx1031_gfx1032

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_GFX103_GFX1031_GFX1032_H_

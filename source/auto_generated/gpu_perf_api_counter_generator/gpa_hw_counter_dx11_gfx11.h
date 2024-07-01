//==============================================================================
// Copyright (c) 2010-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief DX11 counter definitions for GFX11.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX11_GFX11_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX11_GFX11_H_

// clang-format off

#include <windows.h>
#include <AmdDxExtPerfProfile.h>

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_dx11_gfx11
{
    extern std::vector<std::vector<GpaHardwareCounterDesc>*>          kDx11CounterGroupArrayGfx11; ///< Array of hardware counter groups for Dx11 for Gfx11 family
    extern std::vector<GpaCounterGroupDesc>                           kHwDx11GroupsGfx11; ///< Array of counter groups for Dx11 for Gfx11 family
    extern GpaCounterGroupExposedCounterDesc                          kHwDx11ExposedCountersByGroupGfx11[]; ///< Array of exposed counter groups for Dx11 for Gfx11 family
    extern GpaPaddedCounterDesc                                       kDx11PaddedCounterByGroupGfx11[]; ///< Array of reserved counter for Dx11 for Gfx11 family
    extern GpaSqCounterGroupDesc                                      kHwDx11SqGroupsGfx11[]; ///< Array of SQ groups for Dx11 for Gfx11 family
    extern unsigned int                                               kHwDx11SqIsolatedGroupsGfx11[]; ///< Array of counter groups isolated from SQ counter groups for Dx11 for Gfx11 family
    extern PE_BLOCK_ID                                                kHwDx11DriverEnumGfx11[]; ///< Array of driver enum values per group for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GpuTimeBottomToBottomDurationIndexGfx11; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GpuTimeBottomToBottomStartIndexGfx11; ///< Index of time of the previous command reaching bottom of pipe for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GpuTimeBottomToBottomEndIndexGfx11; ///< Index of time of the current command reaching bottom of pipe for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GpuTimeTopToBottomDurationIndexGfx11; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GpuTimeTopToBottomStartIndexGfx11; ///< Index of time that the current command reaches the top of pipe for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GpuTimeTopToBottomEndIndexGfx11; ///< Index of time that the current command reaches the bottom of pipe for Dx11 for Gfx11 family
    extern const std::set<unsigned int>                               kHwDx11TimestampBlockIdsGfx11; ///< Timestamp block id's for Dx11 for Gfx11 family
    extern const std::set<unsigned int>                               kHwDx11TimeCounterIndicesGfx11; ///< Timestamp counter indices for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11GroupCountGfx11; ///< Hardware Group Count for Dx11 for Gfx11 family
    extern const unsigned int                                         kDx11PaddedCounterGroupCountGfx11; ///< reserved counter group count for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11SqGroupCountGfx11; ///< Hardware SQ Group Count for Dx11 for Gfx11 family
    extern const unsigned int                                         kHwDx11SqIsolatedGroupCountGfx11; ///< Hardware Isolated Group Count for Dx11 for Gfx11 family

/// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
///
/// @param [in] asic_type The ASIC type that is currently in use.
///
/// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type)
{
    UNREFERENCED_PARAMETER(asic_type);


    return true;
}
} //  namespace counter_dx11_gfx11

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_DX11_GFX11_H_

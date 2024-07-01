//==============================================================================
// Copyright (c) 2010-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Hardware counter info for GFX8_ELLESMERE.
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project.

// clang-format off

#include <set>

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx8_ellesmere.h"
#include "gpu_performance_api/gpu_perf_api_types.h"

namespace counter_gfx8_ellesmere
{
    std::vector<GpaHardwareCounterDesc> kVgt0CountersGfx8_ellesmere = {
        {1, "VGT0_PERF_VGT_SPI_ESVERT_VALID", "VGT0", "ES Vert is valid", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {9, "VGT0_PERF_VGT_SPI_GSPRIM_VALID", "VGT0", "ES GS Primitive send is active", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {20, "VGT0_PERF_VGT_SPI_VSVERT_SEND", "VGT0", "VS vert send", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {96, "VGT0_PERF_VGT_SPI_LSVERT_VALID", "VGT0", "LS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {105, "VGT0_PERF_VGT_SPI_HSVERT_VALID", "VGT0", "HS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {125, "VGT0_PERF_VGT_TE11_BUSY", "VGT0", "Counts number of cycles the TE11 block is busy. (DX11 Tessellation Fixed Function Logic)", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
    };
    std::vector<GpaHardwareCounterDesc> kVgt1CountersGfx8_ellesmere = {
        {1, "VGT1_PERF_VGT_SPI_ESVERT_VALID", "VGT1", "ES Vert is valid", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {9, "VGT1_PERF_VGT_SPI_GSPRIM_VALID", "VGT1", "ES GS Primitive send is active", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {20, "VGT1_PERF_VGT_SPI_VSVERT_SEND", "VGT1", "VS vert send", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {96, "VGT1_PERF_VGT_SPI_LSVERT_VALID", "VGT1", "LS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {105, "VGT1_PERF_VGT_SPI_HSVERT_VALID", "VGT1", "HS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {125, "VGT1_PERF_VGT_TE11_BUSY", "VGT1", "Counts number of cycles the TE11 block is busy. (DX11 Tessellation Fixed Function Logic)", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
    };
    std::vector<GpaHardwareCounterDesc> kVgt2CountersGfx8_ellesmere = {
        {1, "VGT2_PERF_VGT_SPI_ESVERT_VALID", "VGT2", "ES Vert is valid", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {9, "VGT2_PERF_VGT_SPI_GSPRIM_VALID", "VGT2", "ES GS Primitive send is active", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {20, "VGT2_PERF_VGT_SPI_VSVERT_SEND", "VGT2", "VS vert send", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {96, "VGT2_PERF_VGT_SPI_LSVERT_VALID", "VGT2", "LS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {105, "VGT2_PERF_VGT_SPI_HSVERT_VALID", "VGT2", "HS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {125, "VGT2_PERF_VGT_TE11_BUSY", "VGT2", "Counts number of cycles the TE11 block is busy. (DX11 Tessellation Fixed Function Logic)", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
    };
    std::vector<GpaHardwareCounterDesc> kVgt3CountersGfx8_ellesmere = {
        {1, "VGT3_PERF_VGT_SPI_ESVERT_VALID", "VGT3", "ES Vert is valid", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {9, "VGT3_PERF_VGT_SPI_GSPRIM_VALID", "VGT3", "ES GS Primitive send is active", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {20, "VGT3_PERF_VGT_SPI_VSVERT_SEND", "VGT3", "VS vert send", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {96, "VGT3_PERF_VGT_SPI_LSVERT_VALID", "VGT3", "LS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {105, "VGT3_PERF_VGT_SPI_HSVERT_VALID", "VGT3", "HS Vert is valid. Sensitive to PERF_SEID_IGNORE_MASK", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
        {125, "VGT3_PERF_VGT_TE11_BUSY", "VGT3", "Counts number of cycles the TE11 block is busy. (DX11 Tessellation Fixed Function Logic)", kGpaDataTypeUint64, 0, GPA_UINT64_MAX},
    };
} // counter_gfx8_ellesmere

// clang-format on

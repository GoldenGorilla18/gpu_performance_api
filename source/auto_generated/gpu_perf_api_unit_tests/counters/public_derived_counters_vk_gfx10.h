//==============================================================================
// Copyright (c) 2015-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for VK GFX10 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_VK_GFX10
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_VK_GFX10

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for VKGfx10 Public counter index
#define GPUTIME_PUBLIC_VK_GFX10 0
#define EXECUTIONDURATION_PUBLIC_VK_GFX10 1
#define EXECUTIONSTART_PUBLIC_VK_GFX10 2
#define EXECUTIONEND_PUBLIC_VK_GFX10 3
#define GPUBUSY_PUBLIC_VK_GFX10 4
#define GPUBUSYCYCLES_PUBLIC_VK_GFX10 5
#define TESSELLATORBUSY_PUBLIC_VK_GFX10 6
#define TESSELLATORBUSYCYCLES_PUBLIC_VK_GFX10 7
#define VSGSBUSY_PUBLIC_VK_GFX10 8
#define VSGSBUSYCYCLES_PUBLIC_VK_GFX10 9
#define VSGSTIME_PUBLIC_VK_GFX10 10
#define PRETESSELLATIONBUSY_PUBLIC_VK_GFX10 11
#define PRETESSELLATIONBUSYCYCLES_PUBLIC_VK_GFX10 12
#define PRETESSELLATIONTIME_PUBLIC_VK_GFX10 13
#define POSTTESSELLATIONBUSY_PUBLIC_VK_GFX10 14
#define POSTTESSELLATIONBUSYCYCLES_PUBLIC_VK_GFX10 15
#define POSTTESSELLATIONTIME_PUBLIC_VK_GFX10 16
#define PSBUSY_PUBLIC_VK_GFX10 17
#define PSBUSYCYCLES_PUBLIC_VK_GFX10 18
#define PSTIME_PUBLIC_VK_GFX10 19
#define CSBUSY_PUBLIC_VK_GFX10 20
#define CSBUSYCYCLES_PUBLIC_VK_GFX10 21
#define CSTIME_PUBLIC_VK_GFX10 22
#define GSVERTICESOUT_PUBLIC_VK_GFX10 23
#define PRETESSVERTICESIN_PUBLIC_VK_GFX10 24
#define PRETESSVALUINSTCOUNT_PUBLIC_VK_GFX10 25
#define PRETESSSALUINSTCOUNT_PUBLIC_VK_GFX10 26
#define PRETESSVALUBUSY_PUBLIC_VK_GFX10 27
#define PRETESSVALUBUSYCYCLES_PUBLIC_VK_GFX10 28
#define PRETESSSALUBUSY_PUBLIC_VK_GFX10 29
#define PRETESSSALUBUSYCYCLES_PUBLIC_VK_GFX10 30
#define POSTTESSPRIMSOUT_PUBLIC_VK_GFX10 31
#define POSTTESSVALUINSTCOUNT_PUBLIC_VK_GFX10 32
#define POSTTESSSALUINSTCOUNT_PUBLIC_VK_GFX10 33
#define POSTTESSVALUBUSY_PUBLIC_VK_GFX10 34
#define POSTTESSVALUBUSYCYCLES_PUBLIC_VK_GFX10 35
#define POSTTESSSALUBUSY_PUBLIC_VK_GFX10 36
#define POSTTESSSALUBUSYCYCLES_PUBLIC_VK_GFX10 37
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_VK_GFX10 38
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_VK_GFX10 39
#define PRIMITIVESIN_PUBLIC_VK_GFX10 40
#define CULLEDPRIMS_PUBLIC_VK_GFX10 41
#define CLIPPEDPRIMS_PUBLIC_VK_GFX10 42
#define PASTALLEDONRASTERIZER_PUBLIC_VK_GFX10 43
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_VK_GFX10 44
#define PSPIXELSOUT_PUBLIC_VK_GFX10 45
#define PSEXPORTSTALLS_PUBLIC_VK_GFX10 46
#define PSEXPORTSTALLSCYCLES_PUBLIC_VK_GFX10 47
#define CSTHREADGROUPS_PUBLIC_VK_GFX10 48
#define CSWAVEFRONTS_PUBLIC_VK_GFX10 49
#define CSTHREADS_PUBLIC_VK_GFX10 50
#define CSTHREADGROUPSIZE_PUBLIC_VK_GFX10 51
#define CSVALUINSTS_PUBLIC_VK_GFX10 52
#define CSVALUUTILIZATION_PUBLIC_VK_GFX10 53
#define CSSALUINSTS_PUBLIC_VK_GFX10 54
#define CSVFETCHINSTS_PUBLIC_VK_GFX10 55
#define CSSFETCHINSTS_PUBLIC_VK_GFX10 56
#define CSVWRITEINSTS_PUBLIC_VK_GFX10 57
#define CSVALUBUSY_PUBLIC_VK_GFX10 58
#define CSVALUBUSYCYCLES_PUBLIC_VK_GFX10 59
#define CSSALUBUSY_PUBLIC_VK_GFX10 60
#define CSSALUBUSYCYCLES_PUBLIC_VK_GFX10 61
#define CSMEMUNITBUSY_PUBLIC_VK_GFX10 62
#define CSMEMUNITBUSYCYCLES_PUBLIC_VK_GFX10 63
#define CSMEMUNITSTALLED_PUBLIC_VK_GFX10 64
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_VK_GFX10 65
#define CSWRITEUNITSTALLED_PUBLIC_VK_GFX10 66
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_VK_GFX10 67
#define CSGDSINSTS_PUBLIC_VK_GFX10 68
#define CSLDSINSTS_PUBLIC_VK_GFX10 69
#define CSALUSTALLEDBYLDS_PUBLIC_VK_GFX10 70
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_VK_GFX10 71
#define CSLDSBANKCONFLICT_PUBLIC_VK_GFX10 72
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_VK_GFX10 73
#define TEXUNITBUSY_PUBLIC_VK_GFX10 74
#define TEXUNITBUSYCYCLES_PUBLIC_VK_GFX10 75
#define TEXTRIFILTERINGPCT_PUBLIC_VK_GFX10 76
#define TEXTRIFILTERINGCOUNT_PUBLIC_VK_GFX10 77
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_VK_GFX10 78
#define TEXVOLFILTERINGPCT_PUBLIC_VK_GFX10 79
#define TEXVOLFILTERINGCOUNT_PUBLIC_VK_GFX10 80
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_VK_GFX10 81
#define TEXAVEANISOTROPY_PUBLIC_VK_GFX10 82
#define DEPTHSTENCILTESTBUSY_PUBLIC_VK_GFX10 83
#define DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_VK_GFX10 84
#define HIZTILESACCEPTED_PUBLIC_VK_GFX10 85
#define HIZTILESACCEPTEDCOUNT_PUBLIC_VK_GFX10 86
#define HIZTILESREJECTEDCOUNT_PUBLIC_VK_GFX10 87
#define PREZTILESDETAILCULLED_PUBLIC_VK_GFX10 88
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_VK_GFX10 89
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_VK_GFX10 90
#define HIZQUADSCULLED_PUBLIC_VK_GFX10 91
#define HIZQUADSCULLEDCOUNT_PUBLIC_VK_GFX10 92
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_VK_GFX10 93
#define PREZQUADSCULLED_PUBLIC_VK_GFX10 94
#define PREZQUADSCULLEDCOUNT_PUBLIC_VK_GFX10 95
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_VK_GFX10 96
#define POSTZQUADS_PUBLIC_VK_GFX10 97
#define POSTZQUADCOUNT_PUBLIC_VK_GFX10 98
#define PREZSAMPLESPASSING_PUBLIC_VK_GFX10 99
#define PREZSAMPLESFAILINGS_PUBLIC_VK_GFX10 100
#define PREZSAMPLESFAILINGZ_PUBLIC_VK_GFX10 101
#define POSTZSAMPLESPASSING_PUBLIC_VK_GFX10 102
#define POSTZSAMPLESFAILINGS_PUBLIC_VK_GFX10 103
#define POSTZSAMPLESFAILINGZ_PUBLIC_VK_GFX10 104
#define ZUNITSTALLED_PUBLIC_VK_GFX10 105
#define ZUNITSTALLEDCYCLES_PUBLIC_VK_GFX10 106
#define DBMEMREAD_PUBLIC_VK_GFX10 107
#define DBMEMWRITTEN_PUBLIC_VK_GFX10 108
#define CBMEMREAD_PUBLIC_VK_GFX10 109
#define CBCOLORANDMASKREAD_PUBLIC_VK_GFX10 110
#define CBMEMWRITTEN_PUBLIC_VK_GFX10 111
#define CBCOLORANDMASKWRITTEN_PUBLIC_VK_GFX10 112
#define CBSLOWPIXELPCT_PUBLIC_VK_GFX10 113
#define CBSLOWPIXELCOUNT_PUBLIC_VK_GFX10 114
#define L0CACHEHIT_PUBLIC_VK_GFX10 115
#define L0CACHEREQUESTCOUNT_PUBLIC_VK_GFX10 116
#define L0CACHEHITCOUNT_PUBLIC_VK_GFX10 117
#define L0CACHEMISSCOUNT_PUBLIC_VK_GFX10 118
#define SCALARCACHEHIT_PUBLIC_VK_GFX10 119
#define SCALARCACHEREQUESTCOUNT_PUBLIC_VK_GFX10 120
#define SCALARCACHEHITCOUNT_PUBLIC_VK_GFX10 121
#define SCALARCACHEMISSCOUNT_PUBLIC_VK_GFX10 122
#define INSTCACHEHIT_PUBLIC_VK_GFX10 123
#define INSTCACHEREQUESTCOUNT_PUBLIC_VK_GFX10 124
#define INSTCACHEHITCOUNT_PUBLIC_VK_GFX10 125
#define INSTCACHEMISSCOUNT_PUBLIC_VK_GFX10 126
#define L1CACHEHIT_PUBLIC_VK_GFX10 127
#define L1CACHEREQUESTCOUNT_PUBLIC_VK_GFX10 128
#define L1CACHEHITCOUNT_PUBLIC_VK_GFX10 129
#define L1CACHEMISSCOUNT_PUBLIC_VK_GFX10 130
#define L2CACHEHIT_PUBLIC_VK_GFX10 131
#define L2CACHEMISS_PUBLIC_VK_GFX10 132
#define L2CACHEREQUESTCOUNT_PUBLIC_VK_GFX10 133
#define L2CACHEHITCOUNT_PUBLIC_VK_GFX10 134
#define L2CACHEMISSCOUNT_PUBLIC_VK_GFX10 135
#define L0TAGCONFLICTREADSTALLEDCYCLES_PUBLIC_VK_GFX10 136
#define L0TAGCONFLICTWRITESTALLEDCYCLES_PUBLIC_VK_GFX10 137
#define L0TAGCONFLICTATOMICSTALLEDCYCLES_PUBLIC_VK_GFX10 138
#define FETCHSIZE_PUBLIC_VK_GFX10 139
#define WRITESIZE_PUBLIC_VK_GFX10 140
#define MEMUNITBUSY_PUBLIC_VK_GFX10 141
#define MEMUNITBUSYCYCLES_PUBLIC_VK_GFX10 142
#define MEMUNITSTALLED_PUBLIC_VK_GFX10 143
#define MEMUNITSTALLEDCYCLES_PUBLIC_VK_GFX10 144
#define WRITEUNITSTALLED_PUBLIC_VK_GFX10 145
#define WRITEUNITSTALLEDCYCLES_PUBLIC_VK_GFX10 146
#define LOCALVIDMEMBYTES_PUBLIC_VK_GFX10 147
#define PCIEBYTES_PUBLIC_VK_GFX10 148

/// Number of public counters for VK GFX10 
const size_t kVkGfx10PublicCounterCount = 149;

/// Array of public counters for VK GFX10 
extern const GpaCounterDesc kVkGfx10PublicCounters[kVkGfx10PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_VK_GFX10

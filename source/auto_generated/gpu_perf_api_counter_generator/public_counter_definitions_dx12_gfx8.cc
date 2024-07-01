//==============================================================================
// Copyright (c) 2010-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for DX12 GFX8.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_dx12_gfx8.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersDx12Gfx8(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);

        c.DefineDerivedCounter("GPUTime", "Timing", "Time this API command took to execute on the GPU in nanoseconds from the time the previous command reached the bottom of the pipeline (BOP) to the time this command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "cbd338f2-de6c-7b14-92ad-ba724ca2e501");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51134);

        c.DefineDerivedCounter("ExecutionDuration", "Timing", "GPU command execution duration in nanoseconds, from the time the command enters the top of the pipeline (TOP) to the time the command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "b2f08d0d-af13-cd66-d3b4-b290ad448e69");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51135);

        c.DefineDerivedCounter("ExecutionStart", "Timing", "GPU command execution start time in nanoseconds. This is the time the command enters the top of the pipeline (TOP).", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "a368f79d-fcfe-2158-71c4-2f0c4eef5aa4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51136);

        c.DefineDerivedCounter("ExecutionEnd", "Timing", "GPU command execution end time in nanoseconds. This is the time the command reaches the bottom of the pipeline (BOP).", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "0bce206a-0976-06a2-bf20-03fb351035a8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(49743);
        internal_counters.push_back(49741);

        c.DefineDerivedCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0", "1e84970d-7014-2b8d-d61e-388b5f782691");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(191);
        internal_counters.push_back(338);
        internal_counters.push_back(485);
        internal_counters.push_back(632);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(191);
        internal_counters.push_back(338);
        internal_counters.push_back(485);
        internal_counters.push_back(632);

        c.DefineDerivedCounter("TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,max,2,max,3,max", "60289dcb-7b33-46e7-26d1-8a2121605543");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2856);
        internal_counters.push_back(3053);
        internal_counters.push_back(3250);
        internal_counters.push_back(3447);
        internal_counters.push_back(2881);
        internal_counters.push_back(3078);
        internal_counters.push_back(3275);
        internal_counters.push_back(3472);
        internal_counters.push_back(2903);
        internal_counters.push_back(3100);
        internal_counters.push_back(3297);
        internal_counters.push_back(3494);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2865);
        internal_counters.push_back(3062);
        internal_counters.push_back(3259);
        internal_counters.push_back(3456);
        internal_counters.push_back(2887);
        internal_counters.push_back(3084);
        internal_counters.push_back(3281);
        internal_counters.push_back(3478);
        internal_counters.push_back(2909);
        internal_counters.push_back(3106);
        internal_counters.push_back(3303);
        internal_counters.push_back(3500);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,28,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2856);
        internal_counters.push_back(3053);
        internal_counters.push_back(3250);
        internal_counters.push_back(3447);
        internal_counters.push_back(2881);
        internal_counters.push_back(3078);
        internal_counters.push_back(3275);
        internal_counters.push_back(3472);
        internal_counters.push_back(2903);
        internal_counters.push_back(3100);
        internal_counters.push_back(3297);
        internal_counters.push_back(3494);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2865);
        internal_counters.push_back(3062);
        internal_counters.push_back(3259);
        internal_counters.push_back(3456);
        internal_counters.push_back(2887);
        internal_counters.push_back(3084);
        internal_counters.push_back(3281);
        internal_counters.push_back(3478);
        internal_counters.push_back(2909);
        internal_counters.push_back(3106);
        internal_counters.push_back(3303);
        internal_counters.push_back(3500);

        c.DefineDerivedCounter("VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max", "a2086d4e-274b-48a8-3e08-a4ab76ac15dd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);
        internal_counters.push_back(2856);
        internal_counters.push_back(3053);
        internal_counters.push_back(3250);
        internal_counters.push_back(3447);
        internal_counters.push_back(2881);
        internal_counters.push_back(3078);
        internal_counters.push_back(3275);
        internal_counters.push_back(3472);
        internal_counters.push_back(2903);
        internal_counters.push_back(3100);
        internal_counters.push_back(3297);
        internal_counters.push_back(3494);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2865);
        internal_counters.push_back(3062);
        internal_counters.push_back(3259);
        internal_counters.push_back(3456);
        internal_counters.push_back(2887);
        internal_counters.push_back(3084);
        internal_counters.push_back(3281);
        internal_counters.push_back(3478);
        internal_counters.push_back(2909);
        internal_counters.push_back(3106);
        internal_counters.push_back(3303);
        internal_counters.push_back(3500);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("VSTime", "Timing", "Time vertex shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,(0),4,20,ifnotzero,8,24,ifnotzero,12,28,ifnotzero,max,29,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "d6ce819e-69af-a241-d07a-5dd8d146e436");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2893);
        internal_counters.push_back(3090);
        internal_counters.push_back(3287);
        internal_counters.push_back(3484);
        internal_counters.push_back(2899);
        internal_counters.push_back(3096);
        internal_counters.push_back(3293);
        internal_counters.push_back(3490);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2893);
        internal_counters.push_back(3090);
        internal_counters.push_back(3287);
        internal_counters.push_back(3484);
        internal_counters.push_back(2899);
        internal_counters.push_back(3096);
        internal_counters.push_back(3293);
        internal_counters.push_back(3490);

        c.DefineDerivedCounter("HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "753e76ef-8ef8-3f13-b511-4bd9f3589fdb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);
        internal_counters.push_back(2893);
        internal_counters.push_back(3090);
        internal_counters.push_back(3287);
        internal_counters.push_back(3484);
        internal_counters.push_back(2899);
        internal_counters.push_back(3096);
        internal_counters.push_back(3293);
        internal_counters.push_back(3490);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("HSTime", "Timing", "Time hull shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "8386a863-dd34-1526-f703-0f0c7b241bc4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2856);
        internal_counters.push_back(3053);
        internal_counters.push_back(3250);
        internal_counters.push_back(3447);
        internal_counters.push_back(2881);
        internal_counters.push_back(3078);
        internal_counters.push_back(3275);
        internal_counters.push_back(3472);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2887);
        internal_counters.push_back(3084);
        internal_counters.push_back(3281);
        internal_counters.push_back(3478);
        internal_counters.push_back(2909);
        internal_counters.push_back(3106);
        internal_counters.push_back(3303);
        internal_counters.push_back(3500);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,20,/,(100),*,(100),min", "0c626e8a-9b82-b6d4-d9a3-578509316301");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2856);
        internal_counters.push_back(3053);
        internal_counters.push_back(3250);
        internal_counters.push_back(3447);
        internal_counters.push_back(2881);
        internal_counters.push_back(3078);
        internal_counters.push_back(3275);
        internal_counters.push_back(3472);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2887);
        internal_counters.push_back(3084);
        internal_counters.push_back(3281);
        internal_counters.push_back(3478);
        internal_counters.push_back(2909);
        internal_counters.push_back(3106);
        internal_counters.push_back(3303);
        internal_counters.push_back(3500);

        c.DefineDerivedCounter("DSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max", "2f3f7561-0549-2232-536d-129ffc5f7703");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);
        internal_counters.push_back(2856);
        internal_counters.push_back(3053);
        internal_counters.push_back(3250);
        internal_counters.push_back(3447);
        internal_counters.push_back(2881);
        internal_counters.push_back(3078);
        internal_counters.push_back(3275);
        internal_counters.push_back(3472);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2887);
        internal_counters.push_back(3084);
        internal_counters.push_back(3281);
        internal_counters.push_back(3478);
        internal_counters.push_back(2909);
        internal_counters.push_back(3106);
        internal_counters.push_back(3303);
        internal_counters.push_back(3500);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("DSTime", "Timing", "Time domain shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,13,ifnotzero,17,ifnotzero,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,(0),4,8,16,ifnotzero,20,ifnotzero,max,21,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "bfe28947-c727-8a9f-aa59-c218e58bfba5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2872);
        internal_counters.push_back(3069);
        internal_counters.push_back(3266);
        internal_counters.push_back(3463);
        internal_counters.push_back(2875);
        internal_counters.push_back(3072);
        internal_counters.push_back(3269);
        internal_counters.push_back(3466);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2872);
        internal_counters.push_back(3069);
        internal_counters.push_back(3266);
        internal_counters.push_back(3463);
        internal_counters.push_back(2875);
        internal_counters.push_back(3072);
        internal_counters.push_back(3269);
        internal_counters.push_back(3466);

        c.DefineDerivedCounter("GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "48203b6b-8983-c067-d63e-05da8be5111b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);
        internal_counters.push_back(2872);
        internal_counters.push_back(3069);
        internal_counters.push_back(3266);
        internal_counters.push_back(3463);
        internal_counters.push_back(2875);
        internal_counters.push_back(3072);
        internal_counters.push_back(3269);
        internal_counters.push_back(3466);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("GSTime", "Timing", "Time geometry shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "c73e715f-59af-76e8-9e22-097b94c066c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2930);
        internal_counters.push_back(3127);
        internal_counters.push_back(3324);
        internal_counters.push_back(3521);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2930);
        internal_counters.push_back(3127);
        internal_counters.push_back(3324);
        internal_counters.push_back(3521);

        c.DefineDerivedCounter("PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "b58bea04-ce8e-2984-80f4-8aba7d4c817b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);
        internal_counters.push_back(2925);
        internal_counters.push_back(3122);
        internal_counters.push_back(3319);
        internal_counters.push_back(3516);
        internal_counters.push_back(2930);
        internal_counters.push_back(3127);
        internal_counters.push_back(3324);
        internal_counters.push_back(3521);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,0,TS_FREQ,/,(1000000000),*,*", "edca7694-7416-e8a6-0c5a-63a5ad5f3d74");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2913);
        internal_counters.push_back(3110);
        internal_counters.push_back(3307);
        internal_counters.push_back(3504);
        internal_counters.push_back(2917);
        internal_counters.push_back(3114);
        internal_counters.push_back(3311);
        internal_counters.push_back(3508);
        internal_counters.push_back(2919);
        internal_counters.push_back(3116);
        internal_counters.push_back(3313);
        internal_counters.push_back(3510);
        internal_counters.push_back(2923);
        internal_counters.push_back(3120);
        internal_counters.push_back(3317);
        internal_counters.push_back(3514);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,comparemax4,8,9,10,11,12,13,14,15,comparemax4,max,16,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2913);
        internal_counters.push_back(3110);
        internal_counters.push_back(3307);
        internal_counters.push_back(3504);
        internal_counters.push_back(2917);
        internal_counters.push_back(3114);
        internal_counters.push_back(3311);
        internal_counters.push_back(3508);
        internal_counters.push_back(2919);
        internal_counters.push_back(3116);
        internal_counters.push_back(3313);
        internal_counters.push_back(3510);
        internal_counters.push_back(2923);
        internal_counters.push_back(3120);
        internal_counters.push_back(3317);
        internal_counters.push_back(3514);

        c.DefineDerivedCounter("CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,comparemax4,8,9,10,11,12,13,14,15,comparemax4,max", "39bcf1b8-f6b2-4c37-f9af-0a2bb59512f9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51131);
        internal_counters.push_back(2913);
        internal_counters.push_back(3110);
        internal_counters.push_back(3307);
        internal_counters.push_back(3504);
        internal_counters.push_back(2917);
        internal_counters.push_back(3114);
        internal_counters.push_back(3311);
        internal_counters.push_back(3508);
        internal_counters.push_back(2919);
        internal_counters.push_back(3116);
        internal_counters.push_back(3313);
        internal_counters.push_back(3510);
        internal_counters.push_back(2923);
        internal_counters.push_back(3120);
        internal_counters.push_back(3317);
        internal_counters.push_back(3514);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "1,2,3,4,5,6,7,8,comparemax4,9,10,11,12,13,14,15,16,comparemax4,max,17,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "dbc24916-ecb2-7eef-8d63-7afadaaab6bc");
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

        c.DefineDerivedCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,8,9,10,11,sum4,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7257);
        internal_counters.push_back(7556);
        internal_counters.push_back(7855);
        internal_counters.push_back(8154);
        internal_counters.push_back(7235);
        internal_counters.push_back(7534);
        internal_counters.push_back(7833);
        internal_counters.push_back(8132);
        internal_counters.push_back(4865);
        internal_counters.push_back(5164);
        internal_counters.push_back(5463);
        internal_counters.push_back(5762);
        internal_counters.push_back(4843);
        internal_counters.push_back(5142);
        internal_counters.push_back(5441);
        internal_counters.push_back(5740);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9649);
        internal_counters.push_back(9948);
        internal_counters.push_back(10247);
        internal_counters.push_back(10546);
        internal_counters.push_back(9627);
        internal_counters.push_back(9926);
        internal_counters.push_back(10225);
        internal_counters.push_back(10524);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "8ec604e4-63f5-e6b5-4558-c38f0b26d4b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7261);
        internal_counters.push_back(7560);
        internal_counters.push_back(7859);
        internal_counters.push_back(8158);
        internal_counters.push_back(7235);
        internal_counters.push_back(7534);
        internal_counters.push_back(7833);
        internal_counters.push_back(8132);
        internal_counters.push_back(4869);
        internal_counters.push_back(5168);
        internal_counters.push_back(5467);
        internal_counters.push_back(5766);
        internal_counters.push_back(4843);
        internal_counters.push_back(5142);
        internal_counters.push_back(5441);
        internal_counters.push_back(5740);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9653);
        internal_counters.push_back(9952);
        internal_counters.push_back(10251);
        internal_counters.push_back(10550);
        internal_counters.push_back(9627);
        internal_counters.push_back(9926);
        internal_counters.push_back(10225);
        internal_counters.push_back(10524);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "e3da0383-7322-7f65-8cf2-3ce641578e54");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7312);
        internal_counters.push_back(7611);
        internal_counters.push_back(7910);
        internal_counters.push_back(8209);
        internal_counters.push_back(4920);
        internal_counters.push_back(5219);
        internal_counters.push_back(5518);
        internal_counters.push_back(5817);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(49743);
        internal_counters.push_back(9704);
        internal_counters.push_back(10003);
        internal_counters.push_back(10302);
        internal_counters.push_back(10601);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "8b3572f7-fda0-eddf-6c93-2ab145b8754b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7312);
        internal_counters.push_back(7611);
        internal_counters.push_back(7910);
        internal_counters.push_back(8209);
        internal_counters.push_back(4920);
        internal_counters.push_back(5219);
        internal_counters.push_back(5518);
        internal_counters.push_back(5817);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9704);
        internal_counters.push_back(10003);
        internal_counters.push_back(10302);
        internal_counters.push_back(10601);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "0af1686e-6d77-2f6e-2862-7bb8e869a776");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7317);
        internal_counters.push_back(7616);
        internal_counters.push_back(7915);
        internal_counters.push_back(8214);
        internal_counters.push_back(4925);
        internal_counters.push_back(5224);
        internal_counters.push_back(5523);
        internal_counters.push_back(5822);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(49743);
        internal_counters.push_back(9709);
        internal_counters.push_back(10008);
        internal_counters.push_back(10307);
        internal_counters.push_back(10606);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,NUM_CUS,/,12,/,(100),*", "3bc8730c-e3bc-e2f0-7d24-36974064c25a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7317);
        internal_counters.push_back(7616);
        internal_counters.push_back(7915);
        internal_counters.push_back(8214);
        internal_counters.push_back(4925);
        internal_counters.push_back(5224);
        internal_counters.push_back(5523);
        internal_counters.push_back(5822);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9709);
        internal_counters.push_back(10008);
        internal_counters.push_back(10307);
        internal_counters.push_back(10606);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,NUM_CUS,/", "357ac7cd-2e1c-dcb0-77f6-37527237f35b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(172);
        internal_counters.push_back(319);
        internal_counters.push_back(466);
        internal_counters.push_back(613);

        c.DefineDerivedCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "d1bbd27d-d591-4509-df52-d329fb73a98f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10845);
        internal_counters.push_back(11144);
        internal_counters.push_back(11443);
        internal_counters.push_back(11742);
        internal_counters.push_back(10823);
        internal_counters.push_back(11122);
        internal_counters.push_back(11421);
        internal_counters.push_back(11720);

        c.DefineDerivedCounter("HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "786673bf-d58f-9895-3a37-9d6efb5e5804");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10849);
        internal_counters.push_back(11148);
        internal_counters.push_back(11447);
        internal_counters.push_back(11746);
        internal_counters.push_back(10823);
        internal_counters.push_back(11122);
        internal_counters.push_back(11421);
        internal_counters.push_back(11720);

        c.DefineDerivedCounter("HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "1af675c4-cb0b-c4c5-c131-2796750f683e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10900);
        internal_counters.push_back(11199);
        internal_counters.push_back(11498);
        internal_counters.push_back(11797);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "7880d192-8015-0311-d43e-fb0b7a4df179");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10900);
        internal_counters.push_back(11199);
        internal_counters.push_back(11498);
        internal_counters.push_back(11797);

        c.DefineDerivedCounter("HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "3afb94e4-e937-5730-0cc9-41d3113ba012");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10905);
        internal_counters.push_back(11204);
        internal_counters.push_back(11503);
        internal_counters.push_back(11802);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/,4,/,(100),*", "34748a4b-9148-0b06-b7b9-5700d6631bde");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10905);
        internal_counters.push_back(11204);
        internal_counters.push_back(11503);
        internal_counters.push_back(11802);

        c.DefineDerivedCounter("HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/", "9bceabf7-3f01-2fd9-7b1d-8fe46c729efc");
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

        c.DefineDerivedCounter("DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,ifnotzero", "b88d9d05-2418-e639-4e3d-3a5815855f8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7257);
        internal_counters.push_back(7556);
        internal_counters.push_back(7855);
        internal_counters.push_back(8154);
        internal_counters.push_back(7235);
        internal_counters.push_back(7534);
        internal_counters.push_back(7833);
        internal_counters.push_back(8132);
        internal_counters.push_back(4865);
        internal_counters.push_back(5164);
        internal_counters.push_back(5463);
        internal_counters.push_back(5762);
        internal_counters.push_back(4843);
        internal_counters.push_back(5142);
        internal_counters.push_back(5441);
        internal_counters.push_back(5740);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("DSVALUInstCount", "DomainShader", "Average number of vector ALU instructions executed in the DS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "03a3e949-82f9-be4d-7228-5eb5ad80915a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7261);
        internal_counters.push_back(7560);
        internal_counters.push_back(7859);
        internal_counters.push_back(8158);
        internal_counters.push_back(7235);
        internal_counters.push_back(7534);
        internal_counters.push_back(7833);
        internal_counters.push_back(8132);
        internal_counters.push_back(4869);
        internal_counters.push_back(5168);
        internal_counters.push_back(5467);
        internal_counters.push_back(5766);
        internal_counters.push_back(4843);
        internal_counters.push_back(5142);
        internal_counters.push_back(5441);
        internal_counters.push_back(5740);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("DSSALUInstCount", "DomainShader", "Average number of scalar ALU instructions executed in the DS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "73daa728-483e-95d0-5b40-504719aadc1c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7312);
        internal_counters.push_back(7611);
        internal_counters.push_back(7910);
        internal_counters.push_back(8209);
        internal_counters.push_back(4920);
        internal_counters.push_back(5219);
        internal_counters.push_back(5518);
        internal_counters.push_back(5817);
        internal_counters.push_back(49743);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("DSVALUBusy", "DomainShader", "The percentage of GPUTime vector ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "ddc0dd0c-0c73-b831-a410-cfea8b9713d9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7312);
        internal_counters.push_back(7611);
        internal_counters.push_back(7910);
        internal_counters.push_back(8209);
        internal_counters.push_back(4920);
        internal_counters.push_back(5219);
        internal_counters.push_back(5518);
        internal_counters.push_back(5817);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("DSVALUBusyCycles", "DomainShader", "Number of GPU cycles where vector ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "1e280912-81ee-a684-823b-94c468d8ebda");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7317);
        internal_counters.push_back(7616);
        internal_counters.push_back(7915);
        internal_counters.push_back(8214);
        internal_counters.push_back(4925);
        internal_counters.push_back(5224);
        internal_counters.push_back(5523);
        internal_counters.push_back(5822);
        internal_counters.push_back(49743);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("DSSALUBusy", "DomainShader", "The percentage of GPUTime scalar ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,NUM_CUS,/,8,/,(100),*", "b639f64c-24af-348f-6439-43c701b4fc07");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7317);
        internal_counters.push_back(7616);
        internal_counters.push_back(7915);
        internal_counters.push_back(8214);
        internal_counters.push_back(4925);
        internal_counters.push_back(5224);
        internal_counters.push_back(5523);
        internal_counters.push_back(5822);
        internal_counters.push_back(4853);
        internal_counters.push_back(5152);
        internal_counters.push_back(5451);
        internal_counters.push_back(5750);
        internal_counters.push_back(9637);
        internal_counters.push_back(9936);
        internal_counters.push_back(10235);
        internal_counters.push_back(10534);

        c.DefineDerivedCounter("DSSALUBusyCycles", "DomainShader", "Number of GPU cycles where scalar ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,NUM_CUS,/", "b5bf8a0c-e682-1aa6-23d7-c6c6784ffa5c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(76);
        internal_counters.push_back(223);
        internal_counters.push_back(370);
        internal_counters.push_back(517);

        c.DefineDerivedCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "20c29866-509a-aaab-2697-6b2c38f79953");
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

        c.DefineDerivedCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6061);
        internal_counters.push_back(6360);
        internal_counters.push_back(6659);
        internal_counters.push_back(6958);
        internal_counters.push_back(6039);
        internal_counters.push_back(6338);
        internal_counters.push_back(6637);
        internal_counters.push_back(6936);

        c.DefineDerivedCounter("GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "21b12bfa-b8cd-2e71-a2d5-f9e9f1d65d61");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6065);
        internal_counters.push_back(6364);
        internal_counters.push_back(6663);
        internal_counters.push_back(6962);
        internal_counters.push_back(6039);
        internal_counters.push_back(6338);
        internal_counters.push_back(6637);
        internal_counters.push_back(6936);

        c.DefineDerivedCounter("GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "a8562594-d335-ca43-61bf-03b72d2b98a5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6116);
        internal_counters.push_back(6415);
        internal_counters.push_back(6714);
        internal_counters.push_back(7013);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "228a4818-1e56-cebb-0720-3b2cdc057a6f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6116);
        internal_counters.push_back(6415);
        internal_counters.push_back(6714);
        internal_counters.push_back(7013);

        c.DefineDerivedCounter("GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "be217edd-226f-bd97-9a48-46e2809b1933");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6121);
        internal_counters.push_back(6420);
        internal_counters.push_back(6719);
        internal_counters.push_back(7018);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/,4,/,(100),*", "f28ce300-800e-9822-39e4-f48528bdb935");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6121);
        internal_counters.push_back(6420);
        internal_counters.push_back(6719);
        internal_counters.push_back(7018);

        c.DefineDerivedCounter("GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/", "b3eace7c-3bc4-0107-887f-923851dc8ea7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(760);
        internal_counters.push_back(913);
        internal_counters.push_back(1066);
        internal_counters.push_back(1219);
        internal_counters.push_back(764);
        internal_counters.push_back(917);
        internal_counters.push_back(1070);
        internal_counters.push_back(1223);
        internal_counters.push_back(716);
        internal_counters.push_back(869);
        internal_counters.push_back(1022);
        internal_counters.push_back(1175);
        internal_counters.push_back(728);
        internal_counters.push_back(881);
        internal_counters.push_back(1034);
        internal_counters.push_back(1187);
        internal_counters.push_back(717);
        internal_counters.push_back(870);
        internal_counters.push_back(1023);
        internal_counters.push_back(1176);
        internal_counters.push_back(729);
        internal_counters.push_back(882);
        internal_counters.push_back(1035);
        internal_counters.push_back(1188);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,24,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(760);
        internal_counters.push_back(913);
        internal_counters.push_back(1066);
        internal_counters.push_back(1219);
        internal_counters.push_back(764);
        internal_counters.push_back(917);
        internal_counters.push_back(1070);
        internal_counters.push_back(1223);
        internal_counters.push_back(716);
        internal_counters.push_back(869);
        internal_counters.push_back(1022);
        internal_counters.push_back(1175);
        internal_counters.push_back(728);
        internal_counters.push_back(881);
        internal_counters.push_back(1034);
        internal_counters.push_back(1187);
        internal_counters.push_back(717);
        internal_counters.push_back(870);
        internal_counters.push_back(1023);
        internal_counters.push_back(1176);
        internal_counters.push_back(729);
        internal_counters.push_back(882);
        internal_counters.push_back(1035);
        internal_counters.push_back(1188);

        c.DefineDerivedCounter("PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max", "99777f2d-9626-c78a-a97c-c4505eba1e5f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(663);
        internal_counters.push_back(816);
        internal_counters.push_back(969);
        internal_counters.push_back(1122);

        c.DefineDerivedCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(669);
        internal_counters.push_back(822);
        internal_counters.push_back(975);
        internal_counters.push_back(1128);
        internal_counters.push_back(709);
        internal_counters.push_back(862);
        internal_counters.push_back(1015);
        internal_counters.push_back(1168);
        internal_counters.push_back(710);
        internal_counters.push_back(863);
        internal_counters.push_back(1016);
        internal_counters.push_back(1169);
        internal_counters.push_back(711);
        internal_counters.push_back(864);
        internal_counters.push_back(1017);
        internal_counters.push_back(1170);
        internal_counters.push_back(712);
        internal_counters.push_back(865);
        internal_counters.push_back(1018);
        internal_counters.push_back(1171);

        c.DefineDerivedCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+,10,+,11,+,12,+,13,+,14,+,15,+,16,+,17,+,18,+,19,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(676);
        internal_counters.push_back(829);
        internal_counters.push_back(982);
        internal_counters.push_back(1135);

        c.DefineDerivedCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(764);
        internal_counters.push_back(917);
        internal_counters.push_back(1070);
        internal_counters.push_back(1223);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(764);
        internal_counters.push_back(917);
        internal_counters.push_back(1070);
        internal_counters.push_back(1223);

        c.DefineDerivedCounter("PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,max,2,max,3,max", "7a8c492a-c566-9328-6805-760dbff5c0f2");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13223);
        internal_counters.push_back(13257);
        internal_counters.push_back(13291);
        internal_counters.push_back(13325);
        internal_counters.push_back(13228);
        internal_counters.push_back(13262);
        internal_counters.push_back(13296);
        internal_counters.push_back(13330);
        internal_counters.push_back(13233);
        internal_counters.push_back(13267);
        internal_counters.push_back(13301);
        internal_counters.push_back(13335);
        internal_counters.push_back(13238);
        internal_counters.push_back(13272);
        internal_counters.push_back(13306);
        internal_counters.push_back(13340);

        c.DefineDerivedCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13225);
        internal_counters.push_back(13259);
        internal_counters.push_back(13293);
        internal_counters.push_back(13327);
        internal_counters.push_back(13230);
        internal_counters.push_back(13264);
        internal_counters.push_back(13298);
        internal_counters.push_back(13332);
        internal_counters.push_back(13235);
        internal_counters.push_back(13269);
        internal_counters.push_back(13303);
        internal_counters.push_back(13337);
        internal_counters.push_back(13240);
        internal_counters.push_back(13274);
        internal_counters.push_back(13308);
        internal_counters.push_back(13342);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13225);
        internal_counters.push_back(13259);
        internal_counters.push_back(13293);
        internal_counters.push_back(13327);
        internal_counters.push_back(13230);
        internal_counters.push_back(13264);
        internal_counters.push_back(13298);
        internal_counters.push_back(13332);
        internal_counters.push_back(13235);
        internal_counters.push_back(13269);
        internal_counters.push_back(13303);
        internal_counters.push_back(13337);
        internal_counters.push_back(13240);
        internal_counters.push_back(13274);
        internal_counters.push_back(13308);
        internal_counters.push_back(13342);

        c.DefineDerivedCounter("PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max", "47c72aad-64e6-0864-d533-d8e0bc27c156");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8453);
        internal_counters.push_back(8752);
        internal_counters.push_back(9051);
        internal_counters.push_back(9350);
        internal_counters.push_back(8431);
        internal_counters.push_back(8730);
        internal_counters.push_back(9029);
        internal_counters.push_back(9328);

        c.DefineDerivedCounter("PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "eb74389e-435c-4137-ecf1-39eb5bc1cbfe");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8457);
        internal_counters.push_back(8756);
        internal_counters.push_back(9055);
        internal_counters.push_back(9354);
        internal_counters.push_back(8431);
        internal_counters.push_back(8730);
        internal_counters.push_back(9029);
        internal_counters.push_back(9328);

        c.DefineDerivedCounter("PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "e6a06580-8a82-96d6-976c-acc121fc5516");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8508);
        internal_counters.push_back(8807);
        internal_counters.push_back(9106);
        internal_counters.push_back(9405);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "6ce6fef7-8e33-10b4-f351-af755e177e85");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8508);
        internal_counters.push_back(8807);
        internal_counters.push_back(9106);
        internal_counters.push_back(9405);

        c.DefineDerivedCounter("PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "1e276f86-cd2a-72e7-fc9d-004f666f2981");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8513);
        internal_counters.push_back(8812);
        internal_counters.push_back(9111);
        internal_counters.push_back(9410);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/,4,/,(100),*", "2ff9f34f-e94b-af4d-18c2-5fbbf6d1727a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8513);
        internal_counters.push_back(8812);
        internal_counters.push_back(9111);
        internal_counters.push_back(9410);

        c.DefineDerivedCounter("PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/", "29808906-f128-b078-fc79-820a4b3b3b8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,sum8", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2917);
        internal_counters.push_back(3114);
        internal_counters.push_back(3311);
        internal_counters.push_back(3508);
        internal_counters.push_back(2923);
        internal_counters.push_back(3120);
        internal_counters.push_back(3317);
        internal_counters.push_back(3514);

        c.DefineDerivedCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,sum8", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12029);
        internal_counters.push_back(12328);
        internal_counters.push_back(12627);
        internal_counters.push_back(12926);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,sum8,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12029);
        internal_counters.push_back(12328);
        internal_counters.push_back(12627);
        internal_counters.push_back(12926);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSThreadGroupSize", "ComputeShader", "The number of CS threads within each thread group.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,sum8,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "8c65008a-9957-7ca6-4199-f6fe940420f6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12041);
        internal_counters.push_back(12340);
        internal_counters.push_back(12639);
        internal_counters.push_back(12938);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12104);
        internal_counters.push_back(12403);
        internal_counters.push_back(12702);
        internal_counters.push_back(13001);
        internal_counters.push_back(12096);
        internal_counters.push_back(12395);
        internal_counters.push_back(12694);
        internal_counters.push_back(12993);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,(64),*,/,(100),*,8,9,10,11,12,13,14,15,sum8,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12045);
        internal_counters.push_back(12344);
        internal_counters.push_back(12643);
        internal_counters.push_back(12942);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12043);
        internal_counters.push_back(12342);
        internal_counters.push_back(12641);
        internal_counters.push_back(12940);
        internal_counters.push_back(13448);
        internal_counters.push_back(13567);
        internal_counters.push_back(13686);
        internal_counters.push_back(13805);
        internal_counters.push_back(13924);
        internal_counters.push_back(14043);
        internal_counters.push_back(14162);
        internal_counters.push_back(14281);
        internal_counters.push_back(14400);
        internal_counters.push_back(14519);
        internal_counters.push_back(14638);
        internal_counters.push_back(14757);
        internal_counters.push_back(14876);
        internal_counters.push_back(14995);
        internal_counters.push_back(15114);
        internal_counters.push_back(15233);
        internal_counters.push_back(15352);
        internal_counters.push_back(15471);
        internal_counters.push_back(15590);
        internal_counters.push_back(15709);
        internal_counters.push_back(15828);
        internal_counters.push_back(15947);
        internal_counters.push_back(16066);
        internal_counters.push_back(16185);
        internal_counters.push_back(16304);
        internal_counters.push_back(16423);
        internal_counters.push_back(16542);
        internal_counters.push_back(16661);
        internal_counters.push_back(16780);
        internal_counters.push_back(16899);
        internal_counters.push_back(17018);
        internal_counters.push_back(17137);
        internal_counters.push_back(17256);
        internal_counters.push_back(17375);
        internal_counters.push_back(17494);
        internal_counters.push_back(17613);
        internal_counters.push_back(17732);
        internal_counters.push_back(17851);
        internal_counters.push_back(17970);
        internal_counters.push_back(18089);
        internal_counters.push_back(18208);
        internal_counters.push_back(18327);
        internal_counters.push_back(18446);
        internal_counters.push_back(18565);
        internal_counters.push_back(18684);
        internal_counters.push_back(18803);
        internal_counters.push_back(18922);
        internal_counters.push_back(19041);
        internal_counters.push_back(19160);
        internal_counters.push_back(19279);
        internal_counters.push_back(19398);
        internal_counters.push_back(19517);
        internal_counters.push_back(19636);
        internal_counters.push_back(19755);
        internal_counters.push_back(19874);
        internal_counters.push_back(19993);
        internal_counters.push_back(20112);
        internal_counters.push_back(20231);
        internal_counters.push_back(20350);
        internal_counters.push_back(20469);
        internal_counters.push_back(20588);
        internal_counters.push_back(20707);
        internal_counters.push_back(20826);
        internal_counters.push_back(20945);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,sum64,-,68,69,70,71,sum4,/,72,73,74,75,76,77,78,79,sum8,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12046);
        internal_counters.push_back(12345);
        internal_counters.push_back(12644);
        internal_counters.push_back(12943);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12042);
        internal_counters.push_back(12341);
        internal_counters.push_back(12640);
        internal_counters.push_back(12939);
        internal_counters.push_back(13449);
        internal_counters.push_back(13568);
        internal_counters.push_back(13687);
        internal_counters.push_back(13806);
        internal_counters.push_back(13925);
        internal_counters.push_back(14044);
        internal_counters.push_back(14163);
        internal_counters.push_back(14282);
        internal_counters.push_back(14401);
        internal_counters.push_back(14520);
        internal_counters.push_back(14639);
        internal_counters.push_back(14758);
        internal_counters.push_back(14877);
        internal_counters.push_back(14996);
        internal_counters.push_back(15115);
        internal_counters.push_back(15234);
        internal_counters.push_back(15353);
        internal_counters.push_back(15472);
        internal_counters.push_back(15591);
        internal_counters.push_back(15710);
        internal_counters.push_back(15829);
        internal_counters.push_back(15948);
        internal_counters.push_back(16067);
        internal_counters.push_back(16186);
        internal_counters.push_back(16305);
        internal_counters.push_back(16424);
        internal_counters.push_back(16543);
        internal_counters.push_back(16662);
        internal_counters.push_back(16781);
        internal_counters.push_back(16900);
        internal_counters.push_back(17019);
        internal_counters.push_back(17138);
        internal_counters.push_back(17257);
        internal_counters.push_back(17376);
        internal_counters.push_back(17495);
        internal_counters.push_back(17614);
        internal_counters.push_back(17733);
        internal_counters.push_back(17852);
        internal_counters.push_back(17971);
        internal_counters.push_back(18090);
        internal_counters.push_back(18209);
        internal_counters.push_back(18328);
        internal_counters.push_back(18447);
        internal_counters.push_back(18566);
        internal_counters.push_back(18685);
        internal_counters.push_back(18804);
        internal_counters.push_back(18923);
        internal_counters.push_back(19042);
        internal_counters.push_back(19161);
        internal_counters.push_back(19280);
        internal_counters.push_back(19399);
        internal_counters.push_back(19518);
        internal_counters.push_back(19637);
        internal_counters.push_back(19756);
        internal_counters.push_back(19875);
        internal_counters.push_back(19994);
        internal_counters.push_back(20113);
        internal_counters.push_back(20232);
        internal_counters.push_back(20351);
        internal_counters.push_back(20470);
        internal_counters.push_back(20589);
        internal_counters.push_back(20708);
        internal_counters.push_back(20827);
        internal_counters.push_back(20946);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,sum64,-,68,69,70,71,sum4,/,72,73,74,75,76,77,78,79,sum8,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12047);
        internal_counters.push_back(12346);
        internal_counters.push_back(12645);
        internal_counters.push_back(12944);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "2570b477-13e3-f5b6-e6ff-7159373bc74d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12096);
        internal_counters.push_back(12395);
        internal_counters.push_back(12694);
        internal_counters.push_back(12993);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12096);
        internal_counters.push_back(12395);
        internal_counters.push_back(12694);
        internal_counters.push_back(12993);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "2d0d5852-2658-eb73-68d2-f23f7118c9c3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12101);
        internal_counters.push_back(12400);
        internal_counters.push_back(12699);
        internal_counters.push_back(12998);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,NUM_CUS,/,4,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12101);
        internal_counters.push_back(12400);
        internal_counters.push_back(12699);
        internal_counters.push_back(12998);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_CUS,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "de58f8fc-8ed4-a799-648d-62ded7b1c4c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13362);
        internal_counters.push_back(13481);
        internal_counters.push_back(13600);
        internal_counters.push_back(13719);
        internal_counters.push_back(13838);
        internal_counters.push_back(13957);
        internal_counters.push_back(14076);
        internal_counters.push_back(14195);
        internal_counters.push_back(14314);
        internal_counters.push_back(14433);
        internal_counters.push_back(14552);
        internal_counters.push_back(14671);
        internal_counters.push_back(14790);
        internal_counters.push_back(14909);
        internal_counters.push_back(15028);
        internal_counters.push_back(15147);
        internal_counters.push_back(15266);
        internal_counters.push_back(15385);
        internal_counters.push_back(15504);
        internal_counters.push_back(15623);
        internal_counters.push_back(15742);
        internal_counters.push_back(15861);
        internal_counters.push_back(15980);
        internal_counters.push_back(16099);
        internal_counters.push_back(16218);
        internal_counters.push_back(16337);
        internal_counters.push_back(16456);
        internal_counters.push_back(16575);
        internal_counters.push_back(16694);
        internal_counters.push_back(16813);
        internal_counters.push_back(16932);
        internal_counters.push_back(17051);
        internal_counters.push_back(17170);
        internal_counters.push_back(17289);
        internal_counters.push_back(17408);
        internal_counters.push_back(17527);
        internal_counters.push_back(17646);
        internal_counters.push_back(17765);
        internal_counters.push_back(17884);
        internal_counters.push_back(18003);
        internal_counters.push_back(18122);
        internal_counters.push_back(18241);
        internal_counters.push_back(18360);
        internal_counters.push_back(18479);
        internal_counters.push_back(18598);
        internal_counters.push_back(18717);
        internal_counters.push_back(18836);
        internal_counters.push_back(18955);
        internal_counters.push_back(19074);
        internal_counters.push_back(19193);
        internal_counters.push_back(19312);
        internal_counters.push_back(19431);
        internal_counters.push_back(19550);
        internal_counters.push_back(19669);
        internal_counters.push_back(19788);
        internal_counters.push_back(19907);
        internal_counters.push_back(20026);
        internal_counters.push_back(20145);
        internal_counters.push_back(20264);
        internal_counters.push_back(20383);
        internal_counters.push_back(20502);
        internal_counters.push_back(20621);
        internal_counters.push_back(20740);
        internal_counters.push_back(20859);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*,65,66,67,68,69,70,71,72,sum8,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13362);
        internal_counters.push_back(13481);
        internal_counters.push_back(13600);
        internal_counters.push_back(13719);
        internal_counters.push_back(13838);
        internal_counters.push_back(13957);
        internal_counters.push_back(14076);
        internal_counters.push_back(14195);
        internal_counters.push_back(14314);
        internal_counters.push_back(14433);
        internal_counters.push_back(14552);
        internal_counters.push_back(14671);
        internal_counters.push_back(14790);
        internal_counters.push_back(14909);
        internal_counters.push_back(15028);
        internal_counters.push_back(15147);
        internal_counters.push_back(15266);
        internal_counters.push_back(15385);
        internal_counters.push_back(15504);
        internal_counters.push_back(15623);
        internal_counters.push_back(15742);
        internal_counters.push_back(15861);
        internal_counters.push_back(15980);
        internal_counters.push_back(16099);
        internal_counters.push_back(16218);
        internal_counters.push_back(16337);
        internal_counters.push_back(16456);
        internal_counters.push_back(16575);
        internal_counters.push_back(16694);
        internal_counters.push_back(16813);
        internal_counters.push_back(16932);
        internal_counters.push_back(17051);
        internal_counters.push_back(17170);
        internal_counters.push_back(17289);
        internal_counters.push_back(17408);
        internal_counters.push_back(17527);
        internal_counters.push_back(17646);
        internal_counters.push_back(17765);
        internal_counters.push_back(17884);
        internal_counters.push_back(18003);
        internal_counters.push_back(18122);
        internal_counters.push_back(18241);
        internal_counters.push_back(18360);
        internal_counters.push_back(18479);
        internal_counters.push_back(18598);
        internal_counters.push_back(18717);
        internal_counters.push_back(18836);
        internal_counters.push_back(18955);
        internal_counters.push_back(19074);
        internal_counters.push_back(19193);
        internal_counters.push_back(19312);
        internal_counters.push_back(19431);
        internal_counters.push_back(19550);
        internal_counters.push_back(19669);
        internal_counters.push_back(19788);
        internal_counters.push_back(19907);
        internal_counters.push_back(20026);
        internal_counters.push_back(20145);
        internal_counters.push_back(20264);
        internal_counters.push_back(20383);
        internal_counters.push_back(20502);
        internal_counters.push_back(20621);
        internal_counters.push_back(20740);
        internal_counters.push_back(20859);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,65,66,67,68,69,70,71,sum8,ifnotzero", "39d5687f-c727-7c0c-af82-bb711d3897ed");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24486);
        internal_counters.push_back(24666);
        internal_counters.push_back(24846);
        internal_counters.push_back(25026);
        internal_counters.push_back(25206);
        internal_counters.push_back(25386);
        internal_counters.push_back(25566);
        internal_counters.push_back(25746);
        internal_counters.push_back(25926);
        internal_counters.push_back(26106);
        internal_counters.push_back(26286);
        internal_counters.push_back(26466);
        internal_counters.push_back(26646);
        internal_counters.push_back(26826);
        internal_counters.push_back(27006);
        internal_counters.push_back(27186);
        internal_counters.push_back(27366);
        internal_counters.push_back(27546);
        internal_counters.push_back(27726);
        internal_counters.push_back(27906);
        internal_counters.push_back(28086);
        internal_counters.push_back(28266);
        internal_counters.push_back(28446);
        internal_counters.push_back(28626);
        internal_counters.push_back(28806);
        internal_counters.push_back(28986);
        internal_counters.push_back(29166);
        internal_counters.push_back(29346);
        internal_counters.push_back(29526);
        internal_counters.push_back(29706);
        internal_counters.push_back(29886);
        internal_counters.push_back(30066);
        internal_counters.push_back(30246);
        internal_counters.push_back(30426);
        internal_counters.push_back(30606);
        internal_counters.push_back(30786);
        internal_counters.push_back(30966);
        internal_counters.push_back(31146);
        internal_counters.push_back(31326);
        internal_counters.push_back(31506);
        internal_counters.push_back(31686);
        internal_counters.push_back(31866);
        internal_counters.push_back(32046);
        internal_counters.push_back(32226);
        internal_counters.push_back(32406);
        internal_counters.push_back(32586);
        internal_counters.push_back(32766);
        internal_counters.push_back(32946);
        internal_counters.push_back(33126);
        internal_counters.push_back(33306);
        internal_counters.push_back(33486);
        internal_counters.push_back(33666);
        internal_counters.push_back(33846);
        internal_counters.push_back(34026);
        internal_counters.push_back(34206);
        internal_counters.push_back(34386);
        internal_counters.push_back(34566);
        internal_counters.push_back(34746);
        internal_counters.push_back(34926);
        internal_counters.push_back(35106);
        internal_counters.push_back(35286);
        internal_counters.push_back(35466);
        internal_counters.push_back(35646);
        internal_counters.push_back(35826);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*,65,66,67,68,69,70,71,72,sum8,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24486);
        internal_counters.push_back(24666);
        internal_counters.push_back(24846);
        internal_counters.push_back(25026);
        internal_counters.push_back(25206);
        internal_counters.push_back(25386);
        internal_counters.push_back(25566);
        internal_counters.push_back(25746);
        internal_counters.push_back(25926);
        internal_counters.push_back(26106);
        internal_counters.push_back(26286);
        internal_counters.push_back(26466);
        internal_counters.push_back(26646);
        internal_counters.push_back(26826);
        internal_counters.push_back(27006);
        internal_counters.push_back(27186);
        internal_counters.push_back(27366);
        internal_counters.push_back(27546);
        internal_counters.push_back(27726);
        internal_counters.push_back(27906);
        internal_counters.push_back(28086);
        internal_counters.push_back(28266);
        internal_counters.push_back(28446);
        internal_counters.push_back(28626);
        internal_counters.push_back(28806);
        internal_counters.push_back(28986);
        internal_counters.push_back(29166);
        internal_counters.push_back(29346);
        internal_counters.push_back(29526);
        internal_counters.push_back(29706);
        internal_counters.push_back(29886);
        internal_counters.push_back(30066);
        internal_counters.push_back(30246);
        internal_counters.push_back(30426);
        internal_counters.push_back(30606);
        internal_counters.push_back(30786);
        internal_counters.push_back(30966);
        internal_counters.push_back(31146);
        internal_counters.push_back(31326);
        internal_counters.push_back(31506);
        internal_counters.push_back(31686);
        internal_counters.push_back(31866);
        internal_counters.push_back(32046);
        internal_counters.push_back(32226);
        internal_counters.push_back(32406);
        internal_counters.push_back(32586);
        internal_counters.push_back(32766);
        internal_counters.push_back(32946);
        internal_counters.push_back(33126);
        internal_counters.push_back(33306);
        internal_counters.push_back(33486);
        internal_counters.push_back(33666);
        internal_counters.push_back(33846);
        internal_counters.push_back(34026);
        internal_counters.push_back(34206);
        internal_counters.push_back(34386);
        internal_counters.push_back(34566);
        internal_counters.push_back(34746);
        internal_counters.push_back(34926);
        internal_counters.push_back(35106);
        internal_counters.push_back(35286);
        internal_counters.push_back(35466);
        internal_counters.push_back(35646);
        internal_counters.push_back(35826);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,65,66,67,68,69,70,71,sum8,ifnotzero", "51991c84-ed2b-bf31-c4ab-8f8e9eb8f29f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36031);
        internal_counters.push_back(36223);
        internal_counters.push_back(36415);
        internal_counters.push_back(36607);
        internal_counters.push_back(36799);
        internal_counters.push_back(36991);
        internal_counters.push_back(37183);
        internal_counters.push_back(37375);
        internal_counters.push_back(37567);
        internal_counters.push_back(37759);
        internal_counters.push_back(37951);
        internal_counters.push_back(38143);
        internal_counters.push_back(38335);
        internal_counters.push_back(38527);
        internal_counters.push_back(38719);
        internal_counters.push_back(38911);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*,17,18,19,20,21,22,23,24,sum8,ifnotzero", "55118f7a-8f92-726f-78c6-407f689a2eb4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36031);
        internal_counters.push_back(36223);
        internal_counters.push_back(36415);
        internal_counters.push_back(36607);
        internal_counters.push_back(36799);
        internal_counters.push_back(36991);
        internal_counters.push_back(37183);
        internal_counters.push_back(37375);
        internal_counters.push_back(37567);
        internal_counters.push_back(37759);
        internal_counters.push_back(37951);
        internal_counters.push_back(38143);
        internal_counters.push_back(38335);
        internal_counters.push_back(38527);
        internal_counters.push_back(38719);
        internal_counters.push_back(38911);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,17,18,19,20,21,22,23,sum8,ifnotzero", "be164c60-5e48-acac-9622-29616d09aa9a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12050);
        internal_counters.push_back(12349);
        internal_counters.push_back(12648);
        internal_counters.push_back(12947);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12049);
        internal_counters.push_back(12348);
        internal_counters.push_back(12647);
        internal_counters.push_back(12946);
        internal_counters.push_back(12047);
        internal_counters.push_back(12346);
        internal_counters.push_back(12645);
        internal_counters.push_back(12944);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,16,17,18,19,sum8,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12048);
        internal_counters.push_back(12347);
        internal_counters.push_back(12646);
        internal_counters.push_back(12945);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "99672cda-de2b-014c-482e-cf73b90068d5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12076);
        internal_counters.push_back(12375);
        internal_counters.push_back(12674);
        internal_counters.push_back(12973);
        internal_counters.push_back(12019);
        internal_counters.push_back(12318);
        internal_counters.push_back(12617);
        internal_counters.push_back(12916);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,/,NUM_SHADER_ENGINES,/,(100),*,9,10,11,12,13,14,15,16,sum8,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12076);
        internal_counters.push_back(12375);
        internal_counters.push_back(12674);
        internal_counters.push_back(12973);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_SHADER_ENGINES,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "8f3d5f25-2159-0374-fafe-e26a7799b6c8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12112);
        internal_counters.push_back(12411);
        internal_counters.push_back(12710);
        internal_counters.push_back(13009);
        internal_counters.push_back(49743);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,/,NUM_SIMDS,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(12112);
        internal_counters.push_back(12411);
        internal_counters.push_back(12710);
        internal_counters.push_back(13009);
        internal_counters.push_back(2914);
        internal_counters.push_back(3111);
        internal_counters.push_back(3308);
        internal_counters.push_back(3505);
        internal_counters.push_back(2920);
        internal_counters.push_back(3117);
        internal_counters.push_back(3314);
        internal_counters.push_back(3511);

        c.DefineDerivedCounter("CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_SIMDS,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "1fd1adf3-c51e-94fd-083e-c482a0a0809e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13362);
        internal_counters.push_back(13481);
        internal_counters.push_back(13600);
        internal_counters.push_back(13719);
        internal_counters.push_back(13838);
        internal_counters.push_back(13957);
        internal_counters.push_back(14076);
        internal_counters.push_back(14195);
        internal_counters.push_back(14314);
        internal_counters.push_back(14433);
        internal_counters.push_back(14552);
        internal_counters.push_back(14671);
        internal_counters.push_back(14790);
        internal_counters.push_back(14909);
        internal_counters.push_back(15028);
        internal_counters.push_back(15147);
        internal_counters.push_back(15266);
        internal_counters.push_back(15385);
        internal_counters.push_back(15504);
        internal_counters.push_back(15623);
        internal_counters.push_back(15742);
        internal_counters.push_back(15861);
        internal_counters.push_back(15980);
        internal_counters.push_back(16099);
        internal_counters.push_back(16218);
        internal_counters.push_back(16337);
        internal_counters.push_back(16456);
        internal_counters.push_back(16575);
        internal_counters.push_back(16694);
        internal_counters.push_back(16813);
        internal_counters.push_back(16932);
        internal_counters.push_back(17051);
        internal_counters.push_back(17170);
        internal_counters.push_back(17289);
        internal_counters.push_back(17408);
        internal_counters.push_back(17527);
        internal_counters.push_back(17646);
        internal_counters.push_back(17765);
        internal_counters.push_back(17884);
        internal_counters.push_back(18003);
        internal_counters.push_back(18122);
        internal_counters.push_back(18241);
        internal_counters.push_back(18360);
        internal_counters.push_back(18479);
        internal_counters.push_back(18598);
        internal_counters.push_back(18717);
        internal_counters.push_back(18836);
        internal_counters.push_back(18955);
        internal_counters.push_back(19074);
        internal_counters.push_back(19193);
        internal_counters.push_back(19312);
        internal_counters.push_back(19431);
        internal_counters.push_back(19550);
        internal_counters.push_back(19669);
        internal_counters.push_back(19788);
        internal_counters.push_back(19907);
        internal_counters.push_back(20026);
        internal_counters.push_back(20145);
        internal_counters.push_back(20264);
        internal_counters.push_back(20383);
        internal_counters.push_back(20502);
        internal_counters.push_back(20621);
        internal_counters.push_back(20740);
        internal_counters.push_back(20859);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13362);
        internal_counters.push_back(13481);
        internal_counters.push_back(13600);
        internal_counters.push_back(13719);
        internal_counters.push_back(13838);
        internal_counters.push_back(13957);
        internal_counters.push_back(14076);
        internal_counters.push_back(14195);
        internal_counters.push_back(14314);
        internal_counters.push_back(14433);
        internal_counters.push_back(14552);
        internal_counters.push_back(14671);
        internal_counters.push_back(14790);
        internal_counters.push_back(14909);
        internal_counters.push_back(15028);
        internal_counters.push_back(15147);
        internal_counters.push_back(15266);
        internal_counters.push_back(15385);
        internal_counters.push_back(15504);
        internal_counters.push_back(15623);
        internal_counters.push_back(15742);
        internal_counters.push_back(15861);
        internal_counters.push_back(15980);
        internal_counters.push_back(16099);
        internal_counters.push_back(16218);
        internal_counters.push_back(16337);
        internal_counters.push_back(16456);
        internal_counters.push_back(16575);
        internal_counters.push_back(16694);
        internal_counters.push_back(16813);
        internal_counters.push_back(16932);
        internal_counters.push_back(17051);
        internal_counters.push_back(17170);
        internal_counters.push_back(17289);
        internal_counters.push_back(17408);
        internal_counters.push_back(17527);
        internal_counters.push_back(17646);
        internal_counters.push_back(17765);
        internal_counters.push_back(17884);
        internal_counters.push_back(18003);
        internal_counters.push_back(18122);
        internal_counters.push_back(18241);
        internal_counters.push_back(18360);
        internal_counters.push_back(18479);
        internal_counters.push_back(18598);
        internal_counters.push_back(18717);
        internal_counters.push_back(18836);
        internal_counters.push_back(18955);
        internal_counters.push_back(19074);
        internal_counters.push_back(19193);
        internal_counters.push_back(19312);
        internal_counters.push_back(19431);
        internal_counters.push_back(19550);
        internal_counters.push_back(19669);
        internal_counters.push_back(19788);
        internal_counters.push_back(19907);
        internal_counters.push_back(20026);
        internal_counters.push_back(20145);
        internal_counters.push_back(20264);
        internal_counters.push_back(20383);
        internal_counters.push_back(20502);
        internal_counters.push_back(20621);
        internal_counters.push_back(20740);
        internal_counters.push_back(20859);

        c.DefineDerivedCounter("TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "c68761f2-248c-4f39-6528-c308b1c0807c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13416);
        internal_counters.push_back(13535);
        internal_counters.push_back(13654);
        internal_counters.push_back(13773);
        internal_counters.push_back(13892);
        internal_counters.push_back(14011);
        internal_counters.push_back(14130);
        internal_counters.push_back(14249);
        internal_counters.push_back(14368);
        internal_counters.push_back(14487);
        internal_counters.push_back(14606);
        internal_counters.push_back(14725);
        internal_counters.push_back(14844);
        internal_counters.push_back(14963);
        internal_counters.push_back(15082);
        internal_counters.push_back(15201);
        internal_counters.push_back(15320);
        internal_counters.push_back(15439);
        internal_counters.push_back(15558);
        internal_counters.push_back(15677);
        internal_counters.push_back(15796);
        internal_counters.push_back(15915);
        internal_counters.push_back(16034);
        internal_counters.push_back(16153);
        internal_counters.push_back(16272);
        internal_counters.push_back(16391);
        internal_counters.push_back(16510);
        internal_counters.push_back(16629);
        internal_counters.push_back(16748);
        internal_counters.push_back(16867);
        internal_counters.push_back(16986);
        internal_counters.push_back(17105);
        internal_counters.push_back(17224);
        internal_counters.push_back(17343);
        internal_counters.push_back(17462);
        internal_counters.push_back(17581);
        internal_counters.push_back(17700);
        internal_counters.push_back(17819);
        internal_counters.push_back(17938);
        internal_counters.push_back(18057);
        internal_counters.push_back(18176);
        internal_counters.push_back(18295);
        internal_counters.push_back(18414);
        internal_counters.push_back(18533);
        internal_counters.push_back(18652);
        internal_counters.push_back(18771);
        internal_counters.push_back(18890);
        internal_counters.push_back(19009);
        internal_counters.push_back(19128);
        internal_counters.push_back(19247);
        internal_counters.push_back(19366);
        internal_counters.push_back(19485);
        internal_counters.push_back(19604);
        internal_counters.push_back(19723);
        internal_counters.push_back(19842);
        internal_counters.push_back(19961);
        internal_counters.push_back(20080);
        internal_counters.push_back(20199);
        internal_counters.push_back(20318);
        internal_counters.push_back(20437);
        internal_counters.push_back(20556);
        internal_counters.push_back(20675);
        internal_counters.push_back(20794);
        internal_counters.push_back(20913);
        internal_counters.push_back(13415);
        internal_counters.push_back(13534);
        internal_counters.push_back(13653);
        internal_counters.push_back(13772);
        internal_counters.push_back(13891);
        internal_counters.push_back(14010);
        internal_counters.push_back(14129);
        internal_counters.push_back(14248);
        internal_counters.push_back(14367);
        internal_counters.push_back(14486);
        internal_counters.push_back(14605);
        internal_counters.push_back(14724);
        internal_counters.push_back(14843);
        internal_counters.push_back(14962);
        internal_counters.push_back(15081);
        internal_counters.push_back(15200);
        internal_counters.push_back(15319);
        internal_counters.push_back(15438);
        internal_counters.push_back(15557);
        internal_counters.push_back(15676);
        internal_counters.push_back(15795);
        internal_counters.push_back(15914);
        internal_counters.push_back(16033);
        internal_counters.push_back(16152);
        internal_counters.push_back(16271);
        internal_counters.push_back(16390);
        internal_counters.push_back(16509);
        internal_counters.push_back(16628);
        internal_counters.push_back(16747);
        internal_counters.push_back(16866);
        internal_counters.push_back(16985);
        internal_counters.push_back(17104);
        internal_counters.push_back(17223);
        internal_counters.push_back(17342);
        internal_counters.push_back(17461);
        internal_counters.push_back(17580);
        internal_counters.push_back(17699);
        internal_counters.push_back(17818);
        internal_counters.push_back(17937);
        internal_counters.push_back(18056);
        internal_counters.push_back(18175);
        internal_counters.push_back(18294);
        internal_counters.push_back(18413);
        internal_counters.push_back(18532);
        internal_counters.push_back(18651);
        internal_counters.push_back(18770);
        internal_counters.push_back(18889);
        internal_counters.push_back(19008);
        internal_counters.push_back(19127);
        internal_counters.push_back(19246);
        internal_counters.push_back(19365);
        internal_counters.push_back(19484);
        internal_counters.push_back(19603);
        internal_counters.push_back(19722);
        internal_counters.push_back(19841);
        internal_counters.push_back(19960);
        internal_counters.push_back(20079);
        internal_counters.push_back(20198);
        internal_counters.push_back(20317);
        internal_counters.push_back(20436);
        internal_counters.push_back(20555);
        internal_counters.push_back(20674);
        internal_counters.push_back(20793);
        internal_counters.push_back(20912);

        c.DefineDerivedCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13416);
        internal_counters.push_back(13535);
        internal_counters.push_back(13654);
        internal_counters.push_back(13773);
        internal_counters.push_back(13892);
        internal_counters.push_back(14011);
        internal_counters.push_back(14130);
        internal_counters.push_back(14249);
        internal_counters.push_back(14368);
        internal_counters.push_back(14487);
        internal_counters.push_back(14606);
        internal_counters.push_back(14725);
        internal_counters.push_back(14844);
        internal_counters.push_back(14963);
        internal_counters.push_back(15082);
        internal_counters.push_back(15201);
        internal_counters.push_back(15320);
        internal_counters.push_back(15439);
        internal_counters.push_back(15558);
        internal_counters.push_back(15677);
        internal_counters.push_back(15796);
        internal_counters.push_back(15915);
        internal_counters.push_back(16034);
        internal_counters.push_back(16153);
        internal_counters.push_back(16272);
        internal_counters.push_back(16391);
        internal_counters.push_back(16510);
        internal_counters.push_back(16629);
        internal_counters.push_back(16748);
        internal_counters.push_back(16867);
        internal_counters.push_back(16986);
        internal_counters.push_back(17105);
        internal_counters.push_back(17224);
        internal_counters.push_back(17343);
        internal_counters.push_back(17462);
        internal_counters.push_back(17581);
        internal_counters.push_back(17700);
        internal_counters.push_back(17819);
        internal_counters.push_back(17938);
        internal_counters.push_back(18057);
        internal_counters.push_back(18176);
        internal_counters.push_back(18295);
        internal_counters.push_back(18414);
        internal_counters.push_back(18533);
        internal_counters.push_back(18652);
        internal_counters.push_back(18771);
        internal_counters.push_back(18890);
        internal_counters.push_back(19009);
        internal_counters.push_back(19128);
        internal_counters.push_back(19247);
        internal_counters.push_back(19366);
        internal_counters.push_back(19485);
        internal_counters.push_back(19604);
        internal_counters.push_back(19723);
        internal_counters.push_back(19842);
        internal_counters.push_back(19961);
        internal_counters.push_back(20080);
        internal_counters.push_back(20199);
        internal_counters.push_back(20318);
        internal_counters.push_back(20437);
        internal_counters.push_back(20556);
        internal_counters.push_back(20675);
        internal_counters.push_back(20794);
        internal_counters.push_back(20913);

        c.DefineDerivedCounter("TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "5785b3a1-a513-18db-4b1c-bdeef75bb2b6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13415);
        internal_counters.push_back(13534);
        internal_counters.push_back(13653);
        internal_counters.push_back(13772);
        internal_counters.push_back(13891);
        internal_counters.push_back(14010);
        internal_counters.push_back(14129);
        internal_counters.push_back(14248);
        internal_counters.push_back(14367);
        internal_counters.push_back(14486);
        internal_counters.push_back(14605);
        internal_counters.push_back(14724);
        internal_counters.push_back(14843);
        internal_counters.push_back(14962);
        internal_counters.push_back(15081);
        internal_counters.push_back(15200);
        internal_counters.push_back(15319);
        internal_counters.push_back(15438);
        internal_counters.push_back(15557);
        internal_counters.push_back(15676);
        internal_counters.push_back(15795);
        internal_counters.push_back(15914);
        internal_counters.push_back(16033);
        internal_counters.push_back(16152);
        internal_counters.push_back(16271);
        internal_counters.push_back(16390);
        internal_counters.push_back(16509);
        internal_counters.push_back(16628);
        internal_counters.push_back(16747);
        internal_counters.push_back(16866);
        internal_counters.push_back(16985);
        internal_counters.push_back(17104);
        internal_counters.push_back(17223);
        internal_counters.push_back(17342);
        internal_counters.push_back(17461);
        internal_counters.push_back(17580);
        internal_counters.push_back(17699);
        internal_counters.push_back(17818);
        internal_counters.push_back(17937);
        internal_counters.push_back(18056);
        internal_counters.push_back(18175);
        internal_counters.push_back(18294);
        internal_counters.push_back(18413);
        internal_counters.push_back(18532);
        internal_counters.push_back(18651);
        internal_counters.push_back(18770);
        internal_counters.push_back(18889);
        internal_counters.push_back(19008);
        internal_counters.push_back(19127);
        internal_counters.push_back(19246);
        internal_counters.push_back(19365);
        internal_counters.push_back(19484);
        internal_counters.push_back(19603);
        internal_counters.push_back(19722);
        internal_counters.push_back(19841);
        internal_counters.push_back(19960);
        internal_counters.push_back(20079);
        internal_counters.push_back(20198);
        internal_counters.push_back(20317);
        internal_counters.push_back(20436);
        internal_counters.push_back(20555);
        internal_counters.push_back(20674);
        internal_counters.push_back(20793);
        internal_counters.push_back(20912);

        c.DefineDerivedCounter("NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "179da29a-81af-c06e-ce8c-a0a731ea030d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13418);
        internal_counters.push_back(13537);
        internal_counters.push_back(13656);
        internal_counters.push_back(13775);
        internal_counters.push_back(13894);
        internal_counters.push_back(14013);
        internal_counters.push_back(14132);
        internal_counters.push_back(14251);
        internal_counters.push_back(14370);
        internal_counters.push_back(14489);
        internal_counters.push_back(14608);
        internal_counters.push_back(14727);
        internal_counters.push_back(14846);
        internal_counters.push_back(14965);
        internal_counters.push_back(15084);
        internal_counters.push_back(15203);
        internal_counters.push_back(15322);
        internal_counters.push_back(15441);
        internal_counters.push_back(15560);
        internal_counters.push_back(15679);
        internal_counters.push_back(15798);
        internal_counters.push_back(15917);
        internal_counters.push_back(16036);
        internal_counters.push_back(16155);
        internal_counters.push_back(16274);
        internal_counters.push_back(16393);
        internal_counters.push_back(16512);
        internal_counters.push_back(16631);
        internal_counters.push_back(16750);
        internal_counters.push_back(16869);
        internal_counters.push_back(16988);
        internal_counters.push_back(17107);
        internal_counters.push_back(17226);
        internal_counters.push_back(17345);
        internal_counters.push_back(17464);
        internal_counters.push_back(17583);
        internal_counters.push_back(17702);
        internal_counters.push_back(17821);
        internal_counters.push_back(17940);
        internal_counters.push_back(18059);
        internal_counters.push_back(18178);
        internal_counters.push_back(18297);
        internal_counters.push_back(18416);
        internal_counters.push_back(18535);
        internal_counters.push_back(18654);
        internal_counters.push_back(18773);
        internal_counters.push_back(18892);
        internal_counters.push_back(19011);
        internal_counters.push_back(19130);
        internal_counters.push_back(19249);
        internal_counters.push_back(19368);
        internal_counters.push_back(19487);
        internal_counters.push_back(19606);
        internal_counters.push_back(19725);
        internal_counters.push_back(19844);
        internal_counters.push_back(19963);
        internal_counters.push_back(20082);
        internal_counters.push_back(20201);
        internal_counters.push_back(20320);
        internal_counters.push_back(20439);
        internal_counters.push_back(20558);
        internal_counters.push_back(20677);
        internal_counters.push_back(20796);
        internal_counters.push_back(20915);
        internal_counters.push_back(13417);
        internal_counters.push_back(13536);
        internal_counters.push_back(13655);
        internal_counters.push_back(13774);
        internal_counters.push_back(13893);
        internal_counters.push_back(14012);
        internal_counters.push_back(14131);
        internal_counters.push_back(14250);
        internal_counters.push_back(14369);
        internal_counters.push_back(14488);
        internal_counters.push_back(14607);
        internal_counters.push_back(14726);
        internal_counters.push_back(14845);
        internal_counters.push_back(14964);
        internal_counters.push_back(15083);
        internal_counters.push_back(15202);
        internal_counters.push_back(15321);
        internal_counters.push_back(15440);
        internal_counters.push_back(15559);
        internal_counters.push_back(15678);
        internal_counters.push_back(15797);
        internal_counters.push_back(15916);
        internal_counters.push_back(16035);
        internal_counters.push_back(16154);
        internal_counters.push_back(16273);
        internal_counters.push_back(16392);
        internal_counters.push_back(16511);
        internal_counters.push_back(16630);
        internal_counters.push_back(16749);
        internal_counters.push_back(16868);
        internal_counters.push_back(16987);
        internal_counters.push_back(17106);
        internal_counters.push_back(17225);
        internal_counters.push_back(17344);
        internal_counters.push_back(17463);
        internal_counters.push_back(17582);
        internal_counters.push_back(17701);
        internal_counters.push_back(17820);
        internal_counters.push_back(17939);
        internal_counters.push_back(18058);
        internal_counters.push_back(18177);
        internal_counters.push_back(18296);
        internal_counters.push_back(18415);
        internal_counters.push_back(18534);
        internal_counters.push_back(18653);
        internal_counters.push_back(18772);
        internal_counters.push_back(18891);
        internal_counters.push_back(19010);
        internal_counters.push_back(19129);
        internal_counters.push_back(19248);
        internal_counters.push_back(19367);
        internal_counters.push_back(19486);
        internal_counters.push_back(19605);
        internal_counters.push_back(19724);
        internal_counters.push_back(19843);
        internal_counters.push_back(19962);
        internal_counters.push_back(20081);
        internal_counters.push_back(20200);
        internal_counters.push_back(20319);
        internal_counters.push_back(20438);
        internal_counters.push_back(20557);
        internal_counters.push_back(20676);
        internal_counters.push_back(20795);
        internal_counters.push_back(20914);

        c.DefineDerivedCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13418);
        internal_counters.push_back(13537);
        internal_counters.push_back(13656);
        internal_counters.push_back(13775);
        internal_counters.push_back(13894);
        internal_counters.push_back(14013);
        internal_counters.push_back(14132);
        internal_counters.push_back(14251);
        internal_counters.push_back(14370);
        internal_counters.push_back(14489);
        internal_counters.push_back(14608);
        internal_counters.push_back(14727);
        internal_counters.push_back(14846);
        internal_counters.push_back(14965);
        internal_counters.push_back(15084);
        internal_counters.push_back(15203);
        internal_counters.push_back(15322);
        internal_counters.push_back(15441);
        internal_counters.push_back(15560);
        internal_counters.push_back(15679);
        internal_counters.push_back(15798);
        internal_counters.push_back(15917);
        internal_counters.push_back(16036);
        internal_counters.push_back(16155);
        internal_counters.push_back(16274);
        internal_counters.push_back(16393);
        internal_counters.push_back(16512);
        internal_counters.push_back(16631);
        internal_counters.push_back(16750);
        internal_counters.push_back(16869);
        internal_counters.push_back(16988);
        internal_counters.push_back(17107);
        internal_counters.push_back(17226);
        internal_counters.push_back(17345);
        internal_counters.push_back(17464);
        internal_counters.push_back(17583);
        internal_counters.push_back(17702);
        internal_counters.push_back(17821);
        internal_counters.push_back(17940);
        internal_counters.push_back(18059);
        internal_counters.push_back(18178);
        internal_counters.push_back(18297);
        internal_counters.push_back(18416);
        internal_counters.push_back(18535);
        internal_counters.push_back(18654);
        internal_counters.push_back(18773);
        internal_counters.push_back(18892);
        internal_counters.push_back(19011);
        internal_counters.push_back(19130);
        internal_counters.push_back(19249);
        internal_counters.push_back(19368);
        internal_counters.push_back(19487);
        internal_counters.push_back(19606);
        internal_counters.push_back(19725);
        internal_counters.push_back(19844);
        internal_counters.push_back(19963);
        internal_counters.push_back(20082);
        internal_counters.push_back(20201);
        internal_counters.push_back(20320);
        internal_counters.push_back(20439);
        internal_counters.push_back(20558);
        internal_counters.push_back(20677);
        internal_counters.push_back(20796);
        internal_counters.push_back(20915);

        c.DefineDerivedCounter("TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "4bddc587-d589-8128-e18c-762eab2c871f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13417);
        internal_counters.push_back(13536);
        internal_counters.push_back(13655);
        internal_counters.push_back(13774);
        internal_counters.push_back(13893);
        internal_counters.push_back(14012);
        internal_counters.push_back(14131);
        internal_counters.push_back(14250);
        internal_counters.push_back(14369);
        internal_counters.push_back(14488);
        internal_counters.push_back(14607);
        internal_counters.push_back(14726);
        internal_counters.push_back(14845);
        internal_counters.push_back(14964);
        internal_counters.push_back(15083);
        internal_counters.push_back(15202);
        internal_counters.push_back(15321);
        internal_counters.push_back(15440);
        internal_counters.push_back(15559);
        internal_counters.push_back(15678);
        internal_counters.push_back(15797);
        internal_counters.push_back(15916);
        internal_counters.push_back(16035);
        internal_counters.push_back(16154);
        internal_counters.push_back(16273);
        internal_counters.push_back(16392);
        internal_counters.push_back(16511);
        internal_counters.push_back(16630);
        internal_counters.push_back(16749);
        internal_counters.push_back(16868);
        internal_counters.push_back(16987);
        internal_counters.push_back(17106);
        internal_counters.push_back(17225);
        internal_counters.push_back(17344);
        internal_counters.push_back(17463);
        internal_counters.push_back(17582);
        internal_counters.push_back(17701);
        internal_counters.push_back(17820);
        internal_counters.push_back(17939);
        internal_counters.push_back(18058);
        internal_counters.push_back(18177);
        internal_counters.push_back(18296);
        internal_counters.push_back(18415);
        internal_counters.push_back(18534);
        internal_counters.push_back(18653);
        internal_counters.push_back(18772);
        internal_counters.push_back(18891);
        internal_counters.push_back(19010);
        internal_counters.push_back(19129);
        internal_counters.push_back(19248);
        internal_counters.push_back(19367);
        internal_counters.push_back(19486);
        internal_counters.push_back(19605);
        internal_counters.push_back(19724);
        internal_counters.push_back(19843);
        internal_counters.push_back(19962);
        internal_counters.push_back(20081);
        internal_counters.push_back(20200);
        internal_counters.push_back(20319);
        internal_counters.push_back(20438);
        internal_counters.push_back(20557);
        internal_counters.push_back(20676);
        internal_counters.push_back(20795);
        internal_counters.push_back(20914);

        c.DefineDerivedCounter("NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "9fe1a854-17c6-9d26-b2b9-80610cd5827d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13436);
        internal_counters.push_back(13555);
        internal_counters.push_back(13674);
        internal_counters.push_back(13793);
        internal_counters.push_back(13912);
        internal_counters.push_back(14031);
        internal_counters.push_back(14150);
        internal_counters.push_back(14269);
        internal_counters.push_back(14388);
        internal_counters.push_back(14507);
        internal_counters.push_back(14626);
        internal_counters.push_back(14745);
        internal_counters.push_back(14864);
        internal_counters.push_back(14983);
        internal_counters.push_back(15102);
        internal_counters.push_back(15221);
        internal_counters.push_back(15340);
        internal_counters.push_back(15459);
        internal_counters.push_back(15578);
        internal_counters.push_back(15697);
        internal_counters.push_back(15816);
        internal_counters.push_back(15935);
        internal_counters.push_back(16054);
        internal_counters.push_back(16173);
        internal_counters.push_back(16292);
        internal_counters.push_back(16411);
        internal_counters.push_back(16530);
        internal_counters.push_back(16649);
        internal_counters.push_back(16768);
        internal_counters.push_back(16887);
        internal_counters.push_back(17006);
        internal_counters.push_back(17125);
        internal_counters.push_back(17244);
        internal_counters.push_back(17363);
        internal_counters.push_back(17482);
        internal_counters.push_back(17601);
        internal_counters.push_back(17720);
        internal_counters.push_back(17839);
        internal_counters.push_back(17958);
        internal_counters.push_back(18077);
        internal_counters.push_back(18196);
        internal_counters.push_back(18315);
        internal_counters.push_back(18434);
        internal_counters.push_back(18553);
        internal_counters.push_back(18672);
        internal_counters.push_back(18791);
        internal_counters.push_back(18910);
        internal_counters.push_back(19029);
        internal_counters.push_back(19148);
        internal_counters.push_back(19267);
        internal_counters.push_back(19386);
        internal_counters.push_back(19505);
        internal_counters.push_back(19624);
        internal_counters.push_back(19743);
        internal_counters.push_back(19862);
        internal_counters.push_back(19981);
        internal_counters.push_back(20100);
        internal_counters.push_back(20219);
        internal_counters.push_back(20338);
        internal_counters.push_back(20457);
        internal_counters.push_back(20576);
        internal_counters.push_back(20695);
        internal_counters.push_back(20814);
        internal_counters.push_back(20933);
        internal_counters.push_back(13437);
        internal_counters.push_back(13556);
        internal_counters.push_back(13675);
        internal_counters.push_back(13794);
        internal_counters.push_back(13913);
        internal_counters.push_back(14032);
        internal_counters.push_back(14151);
        internal_counters.push_back(14270);
        internal_counters.push_back(14389);
        internal_counters.push_back(14508);
        internal_counters.push_back(14627);
        internal_counters.push_back(14746);
        internal_counters.push_back(14865);
        internal_counters.push_back(14984);
        internal_counters.push_back(15103);
        internal_counters.push_back(15222);
        internal_counters.push_back(15341);
        internal_counters.push_back(15460);
        internal_counters.push_back(15579);
        internal_counters.push_back(15698);
        internal_counters.push_back(15817);
        internal_counters.push_back(15936);
        internal_counters.push_back(16055);
        internal_counters.push_back(16174);
        internal_counters.push_back(16293);
        internal_counters.push_back(16412);
        internal_counters.push_back(16531);
        internal_counters.push_back(16650);
        internal_counters.push_back(16769);
        internal_counters.push_back(16888);
        internal_counters.push_back(17007);
        internal_counters.push_back(17126);
        internal_counters.push_back(17245);
        internal_counters.push_back(17364);
        internal_counters.push_back(17483);
        internal_counters.push_back(17602);
        internal_counters.push_back(17721);
        internal_counters.push_back(17840);
        internal_counters.push_back(17959);
        internal_counters.push_back(18078);
        internal_counters.push_back(18197);
        internal_counters.push_back(18316);
        internal_counters.push_back(18435);
        internal_counters.push_back(18554);
        internal_counters.push_back(18673);
        internal_counters.push_back(18792);
        internal_counters.push_back(18911);
        internal_counters.push_back(19030);
        internal_counters.push_back(19149);
        internal_counters.push_back(19268);
        internal_counters.push_back(19387);
        internal_counters.push_back(19506);
        internal_counters.push_back(19625);
        internal_counters.push_back(19744);
        internal_counters.push_back(19863);
        internal_counters.push_back(19982);
        internal_counters.push_back(20101);
        internal_counters.push_back(20220);
        internal_counters.push_back(20339);
        internal_counters.push_back(20458);
        internal_counters.push_back(20577);
        internal_counters.push_back(20696);
        internal_counters.push_back(20815);
        internal_counters.push_back(20934);
        internal_counters.push_back(13438);
        internal_counters.push_back(13557);
        internal_counters.push_back(13676);
        internal_counters.push_back(13795);
        internal_counters.push_back(13914);
        internal_counters.push_back(14033);
        internal_counters.push_back(14152);
        internal_counters.push_back(14271);
        internal_counters.push_back(14390);
        internal_counters.push_back(14509);
        internal_counters.push_back(14628);
        internal_counters.push_back(14747);
        internal_counters.push_back(14866);
        internal_counters.push_back(14985);
        internal_counters.push_back(15104);
        internal_counters.push_back(15223);
        internal_counters.push_back(15342);
        internal_counters.push_back(15461);
        internal_counters.push_back(15580);
        internal_counters.push_back(15699);
        internal_counters.push_back(15818);
        internal_counters.push_back(15937);
        internal_counters.push_back(16056);
        internal_counters.push_back(16175);
        internal_counters.push_back(16294);
        internal_counters.push_back(16413);
        internal_counters.push_back(16532);
        internal_counters.push_back(16651);
        internal_counters.push_back(16770);
        internal_counters.push_back(16889);
        internal_counters.push_back(17008);
        internal_counters.push_back(17127);
        internal_counters.push_back(17246);
        internal_counters.push_back(17365);
        internal_counters.push_back(17484);
        internal_counters.push_back(17603);
        internal_counters.push_back(17722);
        internal_counters.push_back(17841);
        internal_counters.push_back(17960);
        internal_counters.push_back(18079);
        internal_counters.push_back(18198);
        internal_counters.push_back(18317);
        internal_counters.push_back(18436);
        internal_counters.push_back(18555);
        internal_counters.push_back(18674);
        internal_counters.push_back(18793);
        internal_counters.push_back(18912);
        internal_counters.push_back(19031);
        internal_counters.push_back(19150);
        internal_counters.push_back(19269);
        internal_counters.push_back(19388);
        internal_counters.push_back(19507);
        internal_counters.push_back(19626);
        internal_counters.push_back(19745);
        internal_counters.push_back(19864);
        internal_counters.push_back(19983);
        internal_counters.push_back(20102);
        internal_counters.push_back(20221);
        internal_counters.push_back(20340);
        internal_counters.push_back(20459);
        internal_counters.push_back(20578);
        internal_counters.push_back(20697);
        internal_counters.push_back(20816);
        internal_counters.push_back(20935);
        internal_counters.push_back(13439);
        internal_counters.push_back(13558);
        internal_counters.push_back(13677);
        internal_counters.push_back(13796);
        internal_counters.push_back(13915);
        internal_counters.push_back(14034);
        internal_counters.push_back(14153);
        internal_counters.push_back(14272);
        internal_counters.push_back(14391);
        internal_counters.push_back(14510);
        internal_counters.push_back(14629);
        internal_counters.push_back(14748);
        internal_counters.push_back(14867);
        internal_counters.push_back(14986);
        internal_counters.push_back(15105);
        internal_counters.push_back(15224);
        internal_counters.push_back(15343);
        internal_counters.push_back(15462);
        internal_counters.push_back(15581);
        internal_counters.push_back(15700);
        internal_counters.push_back(15819);
        internal_counters.push_back(15938);
        internal_counters.push_back(16057);
        internal_counters.push_back(16176);
        internal_counters.push_back(16295);
        internal_counters.push_back(16414);
        internal_counters.push_back(16533);
        internal_counters.push_back(16652);
        internal_counters.push_back(16771);
        internal_counters.push_back(16890);
        internal_counters.push_back(17009);
        internal_counters.push_back(17128);
        internal_counters.push_back(17247);
        internal_counters.push_back(17366);
        internal_counters.push_back(17485);
        internal_counters.push_back(17604);
        internal_counters.push_back(17723);
        internal_counters.push_back(17842);
        internal_counters.push_back(17961);
        internal_counters.push_back(18080);
        internal_counters.push_back(18199);
        internal_counters.push_back(18318);
        internal_counters.push_back(18437);
        internal_counters.push_back(18556);
        internal_counters.push_back(18675);
        internal_counters.push_back(18794);
        internal_counters.push_back(18913);
        internal_counters.push_back(19032);
        internal_counters.push_back(19151);
        internal_counters.push_back(19270);
        internal_counters.push_back(19389);
        internal_counters.push_back(19508);
        internal_counters.push_back(19627);
        internal_counters.push_back(19746);
        internal_counters.push_back(19865);
        internal_counters.push_back(19984);
        internal_counters.push_back(20103);
        internal_counters.push_back(20222);
        internal_counters.push_back(20341);
        internal_counters.push_back(20460);
        internal_counters.push_back(20579);
        internal_counters.push_back(20698);
        internal_counters.push_back(20817);
        internal_counters.push_back(20936);
        internal_counters.push_back(13440);
        internal_counters.push_back(13559);
        internal_counters.push_back(13678);
        internal_counters.push_back(13797);
        internal_counters.push_back(13916);
        internal_counters.push_back(14035);
        internal_counters.push_back(14154);
        internal_counters.push_back(14273);
        internal_counters.push_back(14392);
        internal_counters.push_back(14511);
        internal_counters.push_back(14630);
        internal_counters.push_back(14749);
        internal_counters.push_back(14868);
        internal_counters.push_back(14987);
        internal_counters.push_back(15106);
        internal_counters.push_back(15225);
        internal_counters.push_back(15344);
        internal_counters.push_back(15463);
        internal_counters.push_back(15582);
        internal_counters.push_back(15701);
        internal_counters.push_back(15820);
        internal_counters.push_back(15939);
        internal_counters.push_back(16058);
        internal_counters.push_back(16177);
        internal_counters.push_back(16296);
        internal_counters.push_back(16415);
        internal_counters.push_back(16534);
        internal_counters.push_back(16653);
        internal_counters.push_back(16772);
        internal_counters.push_back(16891);
        internal_counters.push_back(17010);
        internal_counters.push_back(17129);
        internal_counters.push_back(17248);
        internal_counters.push_back(17367);
        internal_counters.push_back(17486);
        internal_counters.push_back(17605);
        internal_counters.push_back(17724);
        internal_counters.push_back(17843);
        internal_counters.push_back(17962);
        internal_counters.push_back(18081);
        internal_counters.push_back(18200);
        internal_counters.push_back(18319);
        internal_counters.push_back(18438);
        internal_counters.push_back(18557);
        internal_counters.push_back(18676);
        internal_counters.push_back(18795);
        internal_counters.push_back(18914);
        internal_counters.push_back(19033);
        internal_counters.push_back(19152);
        internal_counters.push_back(19271);
        internal_counters.push_back(19390);
        internal_counters.push_back(19509);
        internal_counters.push_back(19628);
        internal_counters.push_back(19747);
        internal_counters.push_back(19866);
        internal_counters.push_back(19985);
        internal_counters.push_back(20104);
        internal_counters.push_back(20223);
        internal_counters.push_back(20342);
        internal_counters.push_back(20461);
        internal_counters.push_back(20580);
        internal_counters.push_back(20699);
        internal_counters.push_back(20818);
        internal_counters.push_back(20937);
        internal_counters.push_back(13441);
        internal_counters.push_back(13560);
        internal_counters.push_back(13679);
        internal_counters.push_back(13798);
        internal_counters.push_back(13917);
        internal_counters.push_back(14036);
        internal_counters.push_back(14155);
        internal_counters.push_back(14274);
        internal_counters.push_back(14393);
        internal_counters.push_back(14512);
        internal_counters.push_back(14631);
        internal_counters.push_back(14750);
        internal_counters.push_back(14869);
        internal_counters.push_back(14988);
        internal_counters.push_back(15107);
        internal_counters.push_back(15226);
        internal_counters.push_back(15345);
        internal_counters.push_back(15464);
        internal_counters.push_back(15583);
        internal_counters.push_back(15702);
        internal_counters.push_back(15821);
        internal_counters.push_back(15940);
        internal_counters.push_back(16059);
        internal_counters.push_back(16178);
        internal_counters.push_back(16297);
        internal_counters.push_back(16416);
        internal_counters.push_back(16535);
        internal_counters.push_back(16654);
        internal_counters.push_back(16773);
        internal_counters.push_back(16892);
        internal_counters.push_back(17011);
        internal_counters.push_back(17130);
        internal_counters.push_back(17249);
        internal_counters.push_back(17368);
        internal_counters.push_back(17487);
        internal_counters.push_back(17606);
        internal_counters.push_back(17725);
        internal_counters.push_back(17844);
        internal_counters.push_back(17963);
        internal_counters.push_back(18082);
        internal_counters.push_back(18201);
        internal_counters.push_back(18320);
        internal_counters.push_back(18439);
        internal_counters.push_back(18558);
        internal_counters.push_back(18677);
        internal_counters.push_back(18796);
        internal_counters.push_back(18915);
        internal_counters.push_back(19034);
        internal_counters.push_back(19153);
        internal_counters.push_back(19272);
        internal_counters.push_back(19391);
        internal_counters.push_back(19510);
        internal_counters.push_back(19629);
        internal_counters.push_back(19748);
        internal_counters.push_back(19867);
        internal_counters.push_back(19986);
        internal_counters.push_back(20105);
        internal_counters.push_back(20224);
        internal_counters.push_back(20343);
        internal_counters.push_back(20462);
        internal_counters.push_back(20581);
        internal_counters.push_back(20700);
        internal_counters.push_back(20819);
        internal_counters.push_back(20938);
        internal_counters.push_back(13442);
        internal_counters.push_back(13561);
        internal_counters.push_back(13680);
        internal_counters.push_back(13799);
        internal_counters.push_back(13918);
        internal_counters.push_back(14037);
        internal_counters.push_back(14156);
        internal_counters.push_back(14275);
        internal_counters.push_back(14394);
        internal_counters.push_back(14513);
        internal_counters.push_back(14632);
        internal_counters.push_back(14751);
        internal_counters.push_back(14870);
        internal_counters.push_back(14989);
        internal_counters.push_back(15108);
        internal_counters.push_back(15227);
        internal_counters.push_back(15346);
        internal_counters.push_back(15465);
        internal_counters.push_back(15584);
        internal_counters.push_back(15703);
        internal_counters.push_back(15822);
        internal_counters.push_back(15941);
        internal_counters.push_back(16060);
        internal_counters.push_back(16179);
        internal_counters.push_back(16298);
        internal_counters.push_back(16417);
        internal_counters.push_back(16536);
        internal_counters.push_back(16655);
        internal_counters.push_back(16774);
        internal_counters.push_back(16893);
        internal_counters.push_back(17012);
        internal_counters.push_back(17131);
        internal_counters.push_back(17250);
        internal_counters.push_back(17369);
        internal_counters.push_back(17488);
        internal_counters.push_back(17607);
        internal_counters.push_back(17726);
        internal_counters.push_back(17845);
        internal_counters.push_back(17964);
        internal_counters.push_back(18083);
        internal_counters.push_back(18202);
        internal_counters.push_back(18321);
        internal_counters.push_back(18440);
        internal_counters.push_back(18559);
        internal_counters.push_back(18678);
        internal_counters.push_back(18797);
        internal_counters.push_back(18916);
        internal_counters.push_back(19035);
        internal_counters.push_back(19154);
        internal_counters.push_back(19273);
        internal_counters.push_back(19392);
        internal_counters.push_back(19511);
        internal_counters.push_back(19630);
        internal_counters.push_back(19749);
        internal_counters.push_back(19868);
        internal_counters.push_back(19987);
        internal_counters.push_back(20106);
        internal_counters.push_back(20225);
        internal_counters.push_back(20344);
        internal_counters.push_back(20463);
        internal_counters.push_back(20582);
        internal_counters.push_back(20701);
        internal_counters.push_back(20820);
        internal_counters.push_back(20939);
        internal_counters.push_back(13443);
        internal_counters.push_back(13562);
        internal_counters.push_back(13681);
        internal_counters.push_back(13800);
        internal_counters.push_back(13919);
        internal_counters.push_back(14038);
        internal_counters.push_back(14157);
        internal_counters.push_back(14276);
        internal_counters.push_back(14395);
        internal_counters.push_back(14514);
        internal_counters.push_back(14633);
        internal_counters.push_back(14752);
        internal_counters.push_back(14871);
        internal_counters.push_back(14990);
        internal_counters.push_back(15109);
        internal_counters.push_back(15228);
        internal_counters.push_back(15347);
        internal_counters.push_back(15466);
        internal_counters.push_back(15585);
        internal_counters.push_back(15704);
        internal_counters.push_back(15823);
        internal_counters.push_back(15942);
        internal_counters.push_back(16061);
        internal_counters.push_back(16180);
        internal_counters.push_back(16299);
        internal_counters.push_back(16418);
        internal_counters.push_back(16537);
        internal_counters.push_back(16656);
        internal_counters.push_back(16775);
        internal_counters.push_back(16894);
        internal_counters.push_back(17013);
        internal_counters.push_back(17132);
        internal_counters.push_back(17251);
        internal_counters.push_back(17370);
        internal_counters.push_back(17489);
        internal_counters.push_back(17608);
        internal_counters.push_back(17727);
        internal_counters.push_back(17846);
        internal_counters.push_back(17965);
        internal_counters.push_back(18084);
        internal_counters.push_back(18203);
        internal_counters.push_back(18322);
        internal_counters.push_back(18441);
        internal_counters.push_back(18560);
        internal_counters.push_back(18679);
        internal_counters.push_back(18798);
        internal_counters.push_back(18917);
        internal_counters.push_back(19036);
        internal_counters.push_back(19155);
        internal_counters.push_back(19274);
        internal_counters.push_back(19393);
        internal_counters.push_back(19512);
        internal_counters.push_back(19631);
        internal_counters.push_back(19750);
        internal_counters.push_back(19869);
        internal_counters.push_back(19988);
        internal_counters.push_back(20107);
        internal_counters.push_back(20226);
        internal_counters.push_back(20345);
        internal_counters.push_back(20464);
        internal_counters.push_back(20583);
        internal_counters.push_back(20702);
        internal_counters.push_back(20821);
        internal_counters.push_back(20940);
        internal_counters.push_back(13444);
        internal_counters.push_back(13563);
        internal_counters.push_back(13682);
        internal_counters.push_back(13801);
        internal_counters.push_back(13920);
        internal_counters.push_back(14039);
        internal_counters.push_back(14158);
        internal_counters.push_back(14277);
        internal_counters.push_back(14396);
        internal_counters.push_back(14515);
        internal_counters.push_back(14634);
        internal_counters.push_back(14753);
        internal_counters.push_back(14872);
        internal_counters.push_back(14991);
        internal_counters.push_back(15110);
        internal_counters.push_back(15229);
        internal_counters.push_back(15348);
        internal_counters.push_back(15467);
        internal_counters.push_back(15586);
        internal_counters.push_back(15705);
        internal_counters.push_back(15824);
        internal_counters.push_back(15943);
        internal_counters.push_back(16062);
        internal_counters.push_back(16181);
        internal_counters.push_back(16300);
        internal_counters.push_back(16419);
        internal_counters.push_back(16538);
        internal_counters.push_back(16657);
        internal_counters.push_back(16776);
        internal_counters.push_back(16895);
        internal_counters.push_back(17014);
        internal_counters.push_back(17133);
        internal_counters.push_back(17252);
        internal_counters.push_back(17371);
        internal_counters.push_back(17490);
        internal_counters.push_back(17609);
        internal_counters.push_back(17728);
        internal_counters.push_back(17847);
        internal_counters.push_back(17966);
        internal_counters.push_back(18085);
        internal_counters.push_back(18204);
        internal_counters.push_back(18323);
        internal_counters.push_back(18442);
        internal_counters.push_back(18561);
        internal_counters.push_back(18680);
        internal_counters.push_back(18799);
        internal_counters.push_back(18918);
        internal_counters.push_back(19037);
        internal_counters.push_back(19156);
        internal_counters.push_back(19275);
        internal_counters.push_back(19394);
        internal_counters.push_back(19513);
        internal_counters.push_back(19632);
        internal_counters.push_back(19751);
        internal_counters.push_back(19870);
        internal_counters.push_back(19989);
        internal_counters.push_back(20108);
        internal_counters.push_back(20227);
        internal_counters.push_back(20346);
        internal_counters.push_back(20465);
        internal_counters.push_back(20584);
        internal_counters.push_back(20703);
        internal_counters.push_back(20822);
        internal_counters.push_back(20941);

        c.DefineDerivedCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(2),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,*,+,(4),128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum64,*,+,(6),192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum64,*,+,(8),256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum64,*,+,(10),320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,sum64,*,+,(12),384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,sum64,*,+,(14),448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,sum64,*,+,(16),512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,sum64,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,+,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum64,+,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum64,+,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum64,+,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,sum64,+,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,sum64,+,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,sum64,+,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,sum64,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39289);
        internal_counters.push_back(39546);
        internal_counters.push_back(39803);
        internal_counters.push_back(40060);
        internal_counters.push_back(40317);
        internal_counters.push_back(40574);
        internal_counters.push_back(40831);
        internal_counters.push_back(41088);
        internal_counters.push_back(41345);
        internal_counters.push_back(41602);
        internal_counters.push_back(41859);
        internal_counters.push_back(42116);
        internal_counters.push_back(42373);
        internal_counters.push_back(42630);
        internal_counters.push_back(42887);
        internal_counters.push_back(43144);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39289);
        internal_counters.push_back(39546);
        internal_counters.push_back(39803);
        internal_counters.push_back(40060);
        internal_counters.push_back(40317);
        internal_counters.push_back(40574);
        internal_counters.push_back(40831);
        internal_counters.push_back(41088);
        internal_counters.push_back(41345);
        internal_counters.push_back(41602);
        internal_counters.push_back(41859);
        internal_counters.push_back(42116);
        internal_counters.push_back(42373);
        internal_counters.push_back(42630);
        internal_counters.push_back(42887);
        internal_counters.push_back(43144);

        c.DefineDerivedCounter("DepthStencilTestBusyCycles", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "07ad48f0-49d8-87e7-1ef5-1e24ff2cef49");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39160);
        internal_counters.push_back(39417);
        internal_counters.push_back(39674);
        internal_counters.push_back(39931);
        internal_counters.push_back(40188);
        internal_counters.push_back(40445);
        internal_counters.push_back(40702);
        internal_counters.push_back(40959);
        internal_counters.push_back(41216);
        internal_counters.push_back(41473);
        internal_counters.push_back(41730);
        internal_counters.push_back(41987);
        internal_counters.push_back(42244);
        internal_counters.push_back(42501);
        internal_counters.push_back(42758);
        internal_counters.push_back(43015);
        internal_counters.push_back(39149);
        internal_counters.push_back(39406);
        internal_counters.push_back(39663);
        internal_counters.push_back(39920);
        internal_counters.push_back(40177);
        internal_counters.push_back(40434);
        internal_counters.push_back(40691);
        internal_counters.push_back(40948);
        internal_counters.push_back(41205);
        internal_counters.push_back(41462);
        internal_counters.push_back(41719);
        internal_counters.push_back(41976);
        internal_counters.push_back(42233);
        internal_counters.push_back(42490);
        internal_counters.push_back(42747);
        internal_counters.push_back(43004);

        c.DefineDerivedCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,-,(0),max,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39149);
        internal_counters.push_back(39406);
        internal_counters.push_back(39663);
        internal_counters.push_back(39920);
        internal_counters.push_back(40177);
        internal_counters.push_back(40434);
        internal_counters.push_back(40691);
        internal_counters.push_back(40948);
        internal_counters.push_back(41205);
        internal_counters.push_back(41462);
        internal_counters.push_back(41719);
        internal_counters.push_back(41976);
        internal_counters.push_back(42233);
        internal_counters.push_back(42490);
        internal_counters.push_back(42747);
        internal_counters.push_back(43004);
        internal_counters.push_back(39160);
        internal_counters.push_back(39417);
        internal_counters.push_back(39674);
        internal_counters.push_back(39931);
        internal_counters.push_back(40188);
        internal_counters.push_back(40445);
        internal_counters.push_back(40702);
        internal_counters.push_back(40959);
        internal_counters.push_back(41216);
        internal_counters.push_back(41473);
        internal_counters.push_back(41730);
        internal_counters.push_back(41987);
        internal_counters.push_back(42244);
        internal_counters.push_back(42501);
        internal_counters.push_back(42758);
        internal_counters.push_back(43015);

        c.DefineDerivedCounter("HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max", "95d4e3f6-b2f0-f26e-8423-aacdfaf79ea3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39160);
        internal_counters.push_back(39417);
        internal_counters.push_back(39674);
        internal_counters.push_back(39931);
        internal_counters.push_back(40188);
        internal_counters.push_back(40445);
        internal_counters.push_back(40702);
        internal_counters.push_back(40959);
        internal_counters.push_back(41216);
        internal_counters.push_back(41473);
        internal_counters.push_back(41730);
        internal_counters.push_back(41987);
        internal_counters.push_back(42244);
        internal_counters.push_back(42501);
        internal_counters.push_back(42758);
        internal_counters.push_back(43015);

        c.DefineDerivedCounter("HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "156ba142-7eeb-aa6e-a00a-f8aea4e41e0b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39149);
        internal_counters.push_back(39406);
        internal_counters.push_back(39663);
        internal_counters.push_back(39920);
        internal_counters.push_back(40177);
        internal_counters.push_back(40434);
        internal_counters.push_back(40691);
        internal_counters.push_back(40948);
        internal_counters.push_back(41205);
        internal_counters.push_back(41462);
        internal_counters.push_back(41719);
        internal_counters.push_back(41976);
        internal_counters.push_back(42233);
        internal_counters.push_back(42490);
        internal_counters.push_back(42747);
        internal_counters.push_back(43004);
        internal_counters.push_back(39173);
        internal_counters.push_back(39430);
        internal_counters.push_back(39687);
        internal_counters.push_back(39944);
        internal_counters.push_back(40201);
        internal_counters.push_back(40458);
        internal_counters.push_back(40715);
        internal_counters.push_back(40972);
        internal_counters.push_back(41229);
        internal_counters.push_back(41486);
        internal_counters.push_back(41743);
        internal_counters.push_back(42000);
        internal_counters.push_back(42257);
        internal_counters.push_back(42514);
        internal_counters.push_back(42771);
        internal_counters.push_back(43028);

        c.DefineDerivedCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39173);
        internal_counters.push_back(39430);
        internal_counters.push_back(39687);
        internal_counters.push_back(39944);
        internal_counters.push_back(40201);
        internal_counters.push_back(40458);
        internal_counters.push_back(40715);
        internal_counters.push_back(40972);
        internal_counters.push_back(41229);
        internal_counters.push_back(41486);
        internal_counters.push_back(41743);
        internal_counters.push_back(42000);
        internal_counters.push_back(42257);
        internal_counters.push_back(42514);
        internal_counters.push_back(42771);
        internal_counters.push_back(43028);

        c.DefineDerivedCounter("PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "49262c8a-b1e6-90dd-f096-0fc4921715e9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39149);
        internal_counters.push_back(39406);
        internal_counters.push_back(39663);
        internal_counters.push_back(39920);
        internal_counters.push_back(40177);
        internal_counters.push_back(40434);
        internal_counters.push_back(40691);
        internal_counters.push_back(40948);
        internal_counters.push_back(41205);
        internal_counters.push_back(41462);
        internal_counters.push_back(41719);
        internal_counters.push_back(41976);
        internal_counters.push_back(42233);
        internal_counters.push_back(42490);
        internal_counters.push_back(42747);
        internal_counters.push_back(43004);

        c.DefineDerivedCounter("PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f803eaa4-bbed-bd39-775f-a64df92e2c08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1430);
        internal_counters.push_back(1827);
        internal_counters.push_back(2224);
        internal_counters.push_back(2621);
        internal_counters.push_back(1431);
        internal_counters.push_back(1828);
        internal_counters.push_back(2225);
        internal_counters.push_back(2622);
        internal_counters.push_back(1432);
        internal_counters.push_back(1829);
        internal_counters.push_back(2226);
        internal_counters.push_back(2623);
        internal_counters.push_back(1433);
        internal_counters.push_back(1830);
        internal_counters.push_back(2227);
        internal_counters.push_back(2624);
        internal_counters.push_back(1506);
        internal_counters.push_back(1903);
        internal_counters.push_back(2300);
        internal_counters.push_back(2697);
        internal_counters.push_back(1507);
        internal_counters.push_back(1904);
        internal_counters.push_back(2301);
        internal_counters.push_back(2698);
        internal_counters.push_back(1508);
        internal_counters.push_back(1905);
        internal_counters.push_back(2302);
        internal_counters.push_back(2699);
        internal_counters.push_back(1509);
        internal_counters.push_back(1906);
        internal_counters.push_back(2303);
        internal_counters.push_back(2700);

        c.DefineDerivedCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1430);
        internal_counters.push_back(1827);
        internal_counters.push_back(2224);
        internal_counters.push_back(2621);
        internal_counters.push_back(1431);
        internal_counters.push_back(1828);
        internal_counters.push_back(2225);
        internal_counters.push_back(2622);
        internal_counters.push_back(1432);
        internal_counters.push_back(1829);
        internal_counters.push_back(2226);
        internal_counters.push_back(2623);
        internal_counters.push_back(1433);
        internal_counters.push_back(1830);
        internal_counters.push_back(2227);
        internal_counters.push_back(2624);
        internal_counters.push_back(1506);
        internal_counters.push_back(1903);
        internal_counters.push_back(2300);
        internal_counters.push_back(2697);
        internal_counters.push_back(1507);
        internal_counters.push_back(1904);
        internal_counters.push_back(2301);
        internal_counters.push_back(2698);
        internal_counters.push_back(1508);
        internal_counters.push_back(1905);
        internal_counters.push_back(2302);
        internal_counters.push_back(2699);
        internal_counters.push_back(1509);
        internal_counters.push_back(1906);
        internal_counters.push_back(2303);
        internal_counters.push_back(2700);

        c.DefineDerivedCounter("HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max", "73b0b39d-6df2-3e24-0b5c-7cb0ac8b6f39");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1506);
        internal_counters.push_back(1903);
        internal_counters.push_back(2300);
        internal_counters.push_back(2697);
        internal_counters.push_back(1507);
        internal_counters.push_back(1904);
        internal_counters.push_back(2301);
        internal_counters.push_back(2698);
        internal_counters.push_back(1508);
        internal_counters.push_back(1905);
        internal_counters.push_back(2302);
        internal_counters.push_back(2699);
        internal_counters.push_back(1509);
        internal_counters.push_back(1906);
        internal_counters.push_back(2303);
        internal_counters.push_back(2700);

        c.DefineDerivedCounter("HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "59049ad9-42b5-c7cb-3616-6a8f6a8e4894");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1506);
        internal_counters.push_back(1903);
        internal_counters.push_back(2300);
        internal_counters.push_back(2697);
        internal_counters.push_back(1507);
        internal_counters.push_back(1904);
        internal_counters.push_back(2301);
        internal_counters.push_back(2698);
        internal_counters.push_back(1508);
        internal_counters.push_back(1905);
        internal_counters.push_back(2302);
        internal_counters.push_back(2699);
        internal_counters.push_back(1509);
        internal_counters.push_back(1906);
        internal_counters.push_back(2303);
        internal_counters.push_back(2700);
        internal_counters.push_back(1530);
        internal_counters.push_back(1927);
        internal_counters.push_back(2324);
        internal_counters.push_back(2721);
        internal_counters.push_back(1430);
        internal_counters.push_back(1827);
        internal_counters.push_back(2224);
        internal_counters.push_back(2621);
        internal_counters.push_back(1431);
        internal_counters.push_back(1828);
        internal_counters.push_back(2225);
        internal_counters.push_back(2622);
        internal_counters.push_back(1432);
        internal_counters.push_back(1829);
        internal_counters.push_back(2226);
        internal_counters.push_back(2623);
        internal_counters.push_back(1433);
        internal_counters.push_back(1830);
        internal_counters.push_back(2227);
        internal_counters.push_back(2624);

        c.DefineDerivedCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,-,(0),max,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1506);
        internal_counters.push_back(1903);
        internal_counters.push_back(2300);
        internal_counters.push_back(2697);
        internal_counters.push_back(1507);
        internal_counters.push_back(1904);
        internal_counters.push_back(2301);
        internal_counters.push_back(2698);
        internal_counters.push_back(1508);
        internal_counters.push_back(1905);
        internal_counters.push_back(2302);
        internal_counters.push_back(2699);
        internal_counters.push_back(1509);
        internal_counters.push_back(1906);
        internal_counters.push_back(2303);
        internal_counters.push_back(2700);
        internal_counters.push_back(1530);
        internal_counters.push_back(1927);
        internal_counters.push_back(2324);
        internal_counters.push_back(2721);

        c.DefineDerivedCounter("PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,-,(0),max", "1bf169e6-9304-834e-df5f-0c44d7890a08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1530);
        internal_counters.push_back(1927);
        internal_counters.push_back(2324);
        internal_counters.push_back(2721);

        c.DefineDerivedCounter("PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "50e25e51-3713-89cb-7f92-559cde5e5532");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1530);
        internal_counters.push_back(1927);
        internal_counters.push_back(2324);
        internal_counters.push_back(2721);
        internal_counters.push_back(1430);
        internal_counters.push_back(1827);
        internal_counters.push_back(2224);
        internal_counters.push_back(2621);
        internal_counters.push_back(1431);
        internal_counters.push_back(1828);
        internal_counters.push_back(2225);
        internal_counters.push_back(2622);
        internal_counters.push_back(1432);
        internal_counters.push_back(1829);
        internal_counters.push_back(2226);
        internal_counters.push_back(2623);
        internal_counters.push_back(1433);
        internal_counters.push_back(1830);
        internal_counters.push_back(2227);
        internal_counters.push_back(2624);

        c.DefineDerivedCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1530);
        internal_counters.push_back(1927);
        internal_counters.push_back(2324);
        internal_counters.push_back(2721);

        c.DefineDerivedCounter("PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "08404526-ce35-939b-34c8-a7a35a0ff4d6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39322);
        internal_counters.push_back(39579);
        internal_counters.push_back(39836);
        internal_counters.push_back(40093);
        internal_counters.push_back(40350);
        internal_counters.push_back(40607);
        internal_counters.push_back(40864);
        internal_counters.push_back(41121);
        internal_counters.push_back(41378);
        internal_counters.push_back(41635);
        internal_counters.push_back(41892);
        internal_counters.push_back(42149);
        internal_counters.push_back(42406);
        internal_counters.push_back(42663);
        internal_counters.push_back(42920);
        internal_counters.push_back(43177);

        c.DefineDerivedCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39324);
        internal_counters.push_back(39581);
        internal_counters.push_back(39838);
        internal_counters.push_back(40095);
        internal_counters.push_back(40352);
        internal_counters.push_back(40609);
        internal_counters.push_back(40866);
        internal_counters.push_back(41123);
        internal_counters.push_back(41380);
        internal_counters.push_back(41637);
        internal_counters.push_back(41894);
        internal_counters.push_back(42151);
        internal_counters.push_back(42408);
        internal_counters.push_back(42665);
        internal_counters.push_back(42922);
        internal_counters.push_back(43179);

        c.DefineDerivedCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39323);
        internal_counters.push_back(39580);
        internal_counters.push_back(39837);
        internal_counters.push_back(40094);
        internal_counters.push_back(40351);
        internal_counters.push_back(40608);
        internal_counters.push_back(40865);
        internal_counters.push_back(41122);
        internal_counters.push_back(41379);
        internal_counters.push_back(41636);
        internal_counters.push_back(41893);
        internal_counters.push_back(42150);
        internal_counters.push_back(42407);
        internal_counters.push_back(42664);
        internal_counters.push_back(42921);
        internal_counters.push_back(43178);

        c.DefineDerivedCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39319);
        internal_counters.push_back(39576);
        internal_counters.push_back(39833);
        internal_counters.push_back(40090);
        internal_counters.push_back(40347);
        internal_counters.push_back(40604);
        internal_counters.push_back(40861);
        internal_counters.push_back(41118);
        internal_counters.push_back(41375);
        internal_counters.push_back(41632);
        internal_counters.push_back(41889);
        internal_counters.push_back(42146);
        internal_counters.push_back(42403);
        internal_counters.push_back(42660);
        internal_counters.push_back(42917);
        internal_counters.push_back(43174);

        c.DefineDerivedCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39321);
        internal_counters.push_back(39578);
        internal_counters.push_back(39835);
        internal_counters.push_back(40092);
        internal_counters.push_back(40349);
        internal_counters.push_back(40606);
        internal_counters.push_back(40863);
        internal_counters.push_back(41120);
        internal_counters.push_back(41377);
        internal_counters.push_back(41634);
        internal_counters.push_back(41891);
        internal_counters.push_back(42148);
        internal_counters.push_back(42405);
        internal_counters.push_back(42662);
        internal_counters.push_back(42919);
        internal_counters.push_back(43176);

        c.DefineDerivedCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39320);
        internal_counters.push_back(39577);
        internal_counters.push_back(39834);
        internal_counters.push_back(40091);
        internal_counters.push_back(40348);
        internal_counters.push_back(40605);
        internal_counters.push_back(40862);
        internal_counters.push_back(41119);
        internal_counters.push_back(41376);
        internal_counters.push_back(41633);
        internal_counters.push_back(41890);
        internal_counters.push_back(42147);
        internal_counters.push_back(42404);
        internal_counters.push_back(42661);
        internal_counters.push_back(42918);
        internal_counters.push_back(43175);

        c.DefineDerivedCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39191);
        internal_counters.push_back(39448);
        internal_counters.push_back(39705);
        internal_counters.push_back(39962);
        internal_counters.push_back(40219);
        internal_counters.push_back(40476);
        internal_counters.push_back(40733);
        internal_counters.push_back(40990);
        internal_counters.push_back(41247);
        internal_counters.push_back(41504);
        internal_counters.push_back(41761);
        internal_counters.push_back(42018);
        internal_counters.push_back(42275);
        internal_counters.push_back(42532);
        internal_counters.push_back(42789);
        internal_counters.push_back(43046);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39191);
        internal_counters.push_back(39448);
        internal_counters.push_back(39705);
        internal_counters.push_back(39962);
        internal_counters.push_back(40219);
        internal_counters.push_back(40476);
        internal_counters.push_back(40733);
        internal_counters.push_back(40990);
        internal_counters.push_back(41247);
        internal_counters.push_back(41504);
        internal_counters.push_back(41761);
        internal_counters.push_back(42018);
        internal_counters.push_back(42275);
        internal_counters.push_back(42532);
        internal_counters.push_back(42789);
        internal_counters.push_back(43046);

        c.DefineDerivedCounter("ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "4351fa7f-6737-2c3e-3ffb-b3addbdceedd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39193);
        internal_counters.push_back(39450);
        internal_counters.push_back(39707);
        internal_counters.push_back(39964);
        internal_counters.push_back(40221);
        internal_counters.push_back(40478);
        internal_counters.push_back(40735);
        internal_counters.push_back(40992);
        internal_counters.push_back(41249);
        internal_counters.push_back(41506);
        internal_counters.push_back(41763);
        internal_counters.push_back(42020);
        internal_counters.push_back(42277);
        internal_counters.push_back(42534);
        internal_counters.push_back(42791);
        internal_counters.push_back(43048);
        internal_counters.push_back(39200);
        internal_counters.push_back(39457);
        internal_counters.push_back(39714);
        internal_counters.push_back(39971);
        internal_counters.push_back(40228);
        internal_counters.push_back(40485);
        internal_counters.push_back(40742);
        internal_counters.push_back(40999);
        internal_counters.push_back(41256);
        internal_counters.push_back(41513);
        internal_counters.push_back(41770);
        internal_counters.push_back(42027);
        internal_counters.push_back(42284);
        internal_counters.push_back(42541);
        internal_counters.push_back(42798);
        internal_counters.push_back(43055);

        c.DefineDerivedCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(256),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39205);
        internal_counters.push_back(39462);
        internal_counters.push_back(39719);
        internal_counters.push_back(39976);
        internal_counters.push_back(40233);
        internal_counters.push_back(40490);
        internal_counters.push_back(40747);
        internal_counters.push_back(41004);
        internal_counters.push_back(41261);
        internal_counters.push_back(41518);
        internal_counters.push_back(41775);
        internal_counters.push_back(42032);
        internal_counters.push_back(42289);
        internal_counters.push_back(42546);
        internal_counters.push_back(42803);
        internal_counters.push_back(43060);
        internal_counters.push_back(39208);
        internal_counters.push_back(39465);
        internal_counters.push_back(39722);
        internal_counters.push_back(39979);
        internal_counters.push_back(40236);
        internal_counters.push_back(40493);
        internal_counters.push_back(40750);
        internal_counters.push_back(41007);
        internal_counters.push_back(41264);
        internal_counters.push_back(41521);
        internal_counters.push_back(41778);
        internal_counters.push_back(42035);
        internal_counters.push_back(42292);
        internal_counters.push_back(42549);
        internal_counters.push_back(42806);
        internal_counters.push_back(43063);

        c.DefineDerivedCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(43385);
        internal_counters.push_back(43781);
        internal_counters.push_back(44177);
        internal_counters.push_back(44573);
        internal_counters.push_back(44969);
        internal_counters.push_back(45365);
        internal_counters.push_back(45761);
        internal_counters.push_back(46157);
        internal_counters.push_back(46553);
        internal_counters.push_back(46949);
        internal_counters.push_back(47345);
        internal_counters.push_back(47741);
        internal_counters.push_back(48137);
        internal_counters.push_back(48533);
        internal_counters.push_back(48929);
        internal_counters.push_back(49325);

        c.DefineDerivedCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(43516);
        internal_counters.push_back(43912);
        internal_counters.push_back(44308);
        internal_counters.push_back(44704);
        internal_counters.push_back(45100);
        internal_counters.push_back(45496);
        internal_counters.push_back(45892);
        internal_counters.push_back(46288);
        internal_counters.push_back(46684);
        internal_counters.push_back(47080);
        internal_counters.push_back(47476);
        internal_counters.push_back(47872);
        internal_counters.push_back(48268);
        internal_counters.push_back(48664);
        internal_counters.push_back(49060);
        internal_counters.push_back(49456);
        internal_counters.push_back(43383);
        internal_counters.push_back(43779);
        internal_counters.push_back(44175);
        internal_counters.push_back(44571);
        internal_counters.push_back(44967);
        internal_counters.push_back(45363);
        internal_counters.push_back(45759);
        internal_counters.push_back(46155);
        internal_counters.push_back(46551);
        internal_counters.push_back(46947);
        internal_counters.push_back(47343);
        internal_counters.push_back(47739);
        internal_counters.push_back(48135);
        internal_counters.push_back(48531);
        internal_counters.push_back(48927);
        internal_counters.push_back(49323);
        internal_counters.push_back(43384);
        internal_counters.push_back(43780);
        internal_counters.push_back(44176);
        internal_counters.push_back(44572);
        internal_counters.push_back(44968);
        internal_counters.push_back(45364);
        internal_counters.push_back(45760);
        internal_counters.push_back(46156);
        internal_counters.push_back(46552);
        internal_counters.push_back(46948);
        internal_counters.push_back(47344);
        internal_counters.push_back(47740);
        internal_counters.push_back(48136);
        internal_counters.push_back(48532);
        internal_counters.push_back(48928);
        internal_counters.push_back(49324);
        internal_counters.push_back(43385);
        internal_counters.push_back(43781);
        internal_counters.push_back(44177);
        internal_counters.push_back(44573);
        internal_counters.push_back(44969);
        internal_counters.push_back(45365);
        internal_counters.push_back(45761);
        internal_counters.push_back(46157);
        internal_counters.push_back(46553);
        internal_counters.push_back(46949);
        internal_counters.push_back(47345);
        internal_counters.push_back(47741);
        internal_counters.push_back(48137);
        internal_counters.push_back(48533);
        internal_counters.push_back(48929);
        internal_counters.push_back(49325);

        c.DefineDerivedCounter("CBColorAndMaskRead", "ColorBuffer", "Total number of bytes read from the color and mask buffers.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(32),*", "da41660e-eb6f-32ec-8a64-b32ca17bd7eb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(43375);
        internal_counters.push_back(43771);
        internal_counters.push_back(44167);
        internal_counters.push_back(44563);
        internal_counters.push_back(44959);
        internal_counters.push_back(45355);
        internal_counters.push_back(45751);
        internal_counters.push_back(46147);
        internal_counters.push_back(46543);
        internal_counters.push_back(46939);
        internal_counters.push_back(47335);
        internal_counters.push_back(47731);
        internal_counters.push_back(48127);
        internal_counters.push_back(48523);
        internal_counters.push_back(48919);
        internal_counters.push_back(49315);

        c.DefineDerivedCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(43514);
        internal_counters.push_back(43910);
        internal_counters.push_back(44306);
        internal_counters.push_back(44702);
        internal_counters.push_back(45098);
        internal_counters.push_back(45494);
        internal_counters.push_back(45890);
        internal_counters.push_back(46286);
        internal_counters.push_back(46682);
        internal_counters.push_back(47078);
        internal_counters.push_back(47474);
        internal_counters.push_back(47870);
        internal_counters.push_back(48266);
        internal_counters.push_back(48662);
        internal_counters.push_back(49058);
        internal_counters.push_back(49454);
        internal_counters.push_back(43373);
        internal_counters.push_back(43769);
        internal_counters.push_back(44165);
        internal_counters.push_back(44561);
        internal_counters.push_back(44957);
        internal_counters.push_back(45353);
        internal_counters.push_back(45749);
        internal_counters.push_back(46145);
        internal_counters.push_back(46541);
        internal_counters.push_back(46937);
        internal_counters.push_back(47333);
        internal_counters.push_back(47729);
        internal_counters.push_back(48125);
        internal_counters.push_back(48521);
        internal_counters.push_back(48917);
        internal_counters.push_back(49313);
        internal_counters.push_back(43374);
        internal_counters.push_back(43770);
        internal_counters.push_back(44166);
        internal_counters.push_back(44562);
        internal_counters.push_back(44958);
        internal_counters.push_back(45354);
        internal_counters.push_back(45750);
        internal_counters.push_back(46146);
        internal_counters.push_back(46542);
        internal_counters.push_back(46938);
        internal_counters.push_back(47334);
        internal_counters.push_back(47730);
        internal_counters.push_back(48126);
        internal_counters.push_back(48522);
        internal_counters.push_back(48918);
        internal_counters.push_back(49314);
        internal_counters.push_back(43375);
        internal_counters.push_back(43771);
        internal_counters.push_back(44167);
        internal_counters.push_back(44563);
        internal_counters.push_back(44959);
        internal_counters.push_back(45355);
        internal_counters.push_back(45751);
        internal_counters.push_back(46147);
        internal_counters.push_back(46543);
        internal_counters.push_back(46939);
        internal_counters.push_back(47335);
        internal_counters.push_back(47731);
        internal_counters.push_back(48127);
        internal_counters.push_back(48523);
        internal_counters.push_back(48919);
        internal_counters.push_back(49315);

        c.DefineDerivedCounter("CBColorAndMaskWritten", "ColorBuffer", "Total number of bytes written to the color and mask buffers.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(32),*", "29a04b69-8f5f-b770-a0f2-3453e2c99e49");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(43419);
        internal_counters.push_back(43815);
        internal_counters.push_back(44211);
        internal_counters.push_back(44607);
        internal_counters.push_back(45003);
        internal_counters.push_back(45399);
        internal_counters.push_back(45795);
        internal_counters.push_back(46191);
        internal_counters.push_back(46587);
        internal_counters.push_back(46983);
        internal_counters.push_back(47379);
        internal_counters.push_back(47775);
        internal_counters.push_back(48171);
        internal_counters.push_back(48567);
        internal_counters.push_back(48963);
        internal_counters.push_back(49359);
        internal_counters.push_back(43264);
        internal_counters.push_back(43660);
        internal_counters.push_back(44056);
        internal_counters.push_back(44452);
        internal_counters.push_back(44848);
        internal_counters.push_back(45244);
        internal_counters.push_back(45640);
        internal_counters.push_back(46036);
        internal_counters.push_back(46432);
        internal_counters.push_back(46828);
        internal_counters.push_back(47224);
        internal_counters.push_back(47620);
        internal_counters.push_back(48016);
        internal_counters.push_back(48412);
        internal_counters.push_back(48808);
        internal_counters.push_back(49204);

        c.DefineDerivedCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(43419);
        internal_counters.push_back(43815);
        internal_counters.push_back(44211);
        internal_counters.push_back(44607);
        internal_counters.push_back(45003);
        internal_counters.push_back(45399);
        internal_counters.push_back(45795);
        internal_counters.push_back(46191);
        internal_counters.push_back(46587);
        internal_counters.push_back(46983);
        internal_counters.push_back(47379);
        internal_counters.push_back(47775);
        internal_counters.push_back(48171);
        internal_counters.push_back(48567);
        internal_counters.push_back(48963);
        internal_counters.push_back(49359);

        c.DefineDerivedCounter("CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "47eacbb0-28c8-22b4-5c69-c00d5813bb1c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24490);
        internal_counters.push_back(24670);
        internal_counters.push_back(24850);
        internal_counters.push_back(25030);
        internal_counters.push_back(25210);
        internal_counters.push_back(25390);
        internal_counters.push_back(25570);
        internal_counters.push_back(25750);
        internal_counters.push_back(25930);
        internal_counters.push_back(26110);
        internal_counters.push_back(26290);
        internal_counters.push_back(26470);
        internal_counters.push_back(26650);
        internal_counters.push_back(26830);
        internal_counters.push_back(27010);
        internal_counters.push_back(27190);
        internal_counters.push_back(27370);
        internal_counters.push_back(27550);
        internal_counters.push_back(27730);
        internal_counters.push_back(27910);
        internal_counters.push_back(28090);
        internal_counters.push_back(28270);
        internal_counters.push_back(28450);
        internal_counters.push_back(28630);
        internal_counters.push_back(28810);
        internal_counters.push_back(28990);
        internal_counters.push_back(29170);
        internal_counters.push_back(29350);
        internal_counters.push_back(29530);
        internal_counters.push_back(29710);
        internal_counters.push_back(29890);
        internal_counters.push_back(30070);
        internal_counters.push_back(30250);
        internal_counters.push_back(30430);
        internal_counters.push_back(30610);
        internal_counters.push_back(30790);
        internal_counters.push_back(30970);
        internal_counters.push_back(31150);
        internal_counters.push_back(31330);
        internal_counters.push_back(31510);
        internal_counters.push_back(31690);
        internal_counters.push_back(31870);
        internal_counters.push_back(32050);
        internal_counters.push_back(32230);
        internal_counters.push_back(32410);
        internal_counters.push_back(32590);
        internal_counters.push_back(32770);
        internal_counters.push_back(32950);
        internal_counters.push_back(33130);
        internal_counters.push_back(33310);
        internal_counters.push_back(33490);
        internal_counters.push_back(33670);
        internal_counters.push_back(33850);
        internal_counters.push_back(34030);
        internal_counters.push_back(34210);
        internal_counters.push_back(34390);
        internal_counters.push_back(34570);
        internal_counters.push_back(34750);
        internal_counters.push_back(34930);
        internal_counters.push_back(35110);
        internal_counters.push_back(35290);
        internal_counters.push_back(35470);
        internal_counters.push_back(35650);
        internal_counters.push_back(35830);

        c.DefineDerivedCounter("L0TagConflictReadStalledCycles", "MemoryCache", "The number of cycles read operations from the L0 cache are stalled due to tag conflicts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "e2412737-e2bf-c791-5f2f-64abd4ba47cf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24491);
        internal_counters.push_back(24671);
        internal_counters.push_back(24851);
        internal_counters.push_back(25031);
        internal_counters.push_back(25211);
        internal_counters.push_back(25391);
        internal_counters.push_back(25571);
        internal_counters.push_back(25751);
        internal_counters.push_back(25931);
        internal_counters.push_back(26111);
        internal_counters.push_back(26291);
        internal_counters.push_back(26471);
        internal_counters.push_back(26651);
        internal_counters.push_back(26831);
        internal_counters.push_back(27011);
        internal_counters.push_back(27191);
        internal_counters.push_back(27371);
        internal_counters.push_back(27551);
        internal_counters.push_back(27731);
        internal_counters.push_back(27911);
        internal_counters.push_back(28091);
        internal_counters.push_back(28271);
        internal_counters.push_back(28451);
        internal_counters.push_back(28631);
        internal_counters.push_back(28811);
        internal_counters.push_back(28991);
        internal_counters.push_back(29171);
        internal_counters.push_back(29351);
        internal_counters.push_back(29531);
        internal_counters.push_back(29711);
        internal_counters.push_back(29891);
        internal_counters.push_back(30071);
        internal_counters.push_back(30251);
        internal_counters.push_back(30431);
        internal_counters.push_back(30611);
        internal_counters.push_back(30791);
        internal_counters.push_back(30971);
        internal_counters.push_back(31151);
        internal_counters.push_back(31331);
        internal_counters.push_back(31511);
        internal_counters.push_back(31691);
        internal_counters.push_back(31871);
        internal_counters.push_back(32051);
        internal_counters.push_back(32231);
        internal_counters.push_back(32411);
        internal_counters.push_back(32591);
        internal_counters.push_back(32771);
        internal_counters.push_back(32951);
        internal_counters.push_back(33131);
        internal_counters.push_back(33311);
        internal_counters.push_back(33491);
        internal_counters.push_back(33671);
        internal_counters.push_back(33851);
        internal_counters.push_back(34031);
        internal_counters.push_back(34211);
        internal_counters.push_back(34391);
        internal_counters.push_back(34571);
        internal_counters.push_back(34751);
        internal_counters.push_back(34931);
        internal_counters.push_back(35111);
        internal_counters.push_back(35291);
        internal_counters.push_back(35471);
        internal_counters.push_back(35651);
        internal_counters.push_back(35831);

        c.DefineDerivedCounter("L0TagConflictWriteStalledCycles", "MemoryCache", "The number of cycles write operations to the L0 cache are stalled due to tag conflicts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "0c2571f3-f084-f351-99ba-0d9e23b47e8e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24492);
        internal_counters.push_back(24672);
        internal_counters.push_back(24852);
        internal_counters.push_back(25032);
        internal_counters.push_back(25212);
        internal_counters.push_back(25392);
        internal_counters.push_back(25572);
        internal_counters.push_back(25752);
        internal_counters.push_back(25932);
        internal_counters.push_back(26112);
        internal_counters.push_back(26292);
        internal_counters.push_back(26472);
        internal_counters.push_back(26652);
        internal_counters.push_back(26832);
        internal_counters.push_back(27012);
        internal_counters.push_back(27192);
        internal_counters.push_back(27372);
        internal_counters.push_back(27552);
        internal_counters.push_back(27732);
        internal_counters.push_back(27912);
        internal_counters.push_back(28092);
        internal_counters.push_back(28272);
        internal_counters.push_back(28452);
        internal_counters.push_back(28632);
        internal_counters.push_back(28812);
        internal_counters.push_back(28992);
        internal_counters.push_back(29172);
        internal_counters.push_back(29352);
        internal_counters.push_back(29532);
        internal_counters.push_back(29712);
        internal_counters.push_back(29892);
        internal_counters.push_back(30072);
        internal_counters.push_back(30252);
        internal_counters.push_back(30432);
        internal_counters.push_back(30612);
        internal_counters.push_back(30792);
        internal_counters.push_back(30972);
        internal_counters.push_back(31152);
        internal_counters.push_back(31332);
        internal_counters.push_back(31512);
        internal_counters.push_back(31692);
        internal_counters.push_back(31872);
        internal_counters.push_back(32052);
        internal_counters.push_back(32232);
        internal_counters.push_back(32412);
        internal_counters.push_back(32592);
        internal_counters.push_back(32772);
        internal_counters.push_back(32952);
        internal_counters.push_back(33132);
        internal_counters.push_back(33312);
        internal_counters.push_back(33492);
        internal_counters.push_back(33672);
        internal_counters.push_back(33852);
        internal_counters.push_back(34032);
        internal_counters.push_back(34212);
        internal_counters.push_back(34392);
        internal_counters.push_back(34572);
        internal_counters.push_back(34752);
        internal_counters.push_back(34932);
        internal_counters.push_back(35112);
        internal_counters.push_back(35292);
        internal_counters.push_back(35472);
        internal_counters.push_back(35652);
        internal_counters.push_back(35832);

        c.DefineDerivedCounter("L0TagConflictAtomicStalledCycles", "MemoryCache", "The number of cycles atomic operations on the L0 cache are stalled due to tag conflicts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "f13f8563-4151-1533-f42f-0f9c08a20210");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36038);
        internal_counters.push_back(36230);
        internal_counters.push_back(36422);
        internal_counters.push_back(36614);
        internal_counters.push_back(36806);
        internal_counters.push_back(36998);
        internal_counters.push_back(37190);
        internal_counters.push_back(37382);
        internal_counters.push_back(37574);
        internal_counters.push_back(37766);
        internal_counters.push_back(37958);
        internal_counters.push_back(38150);
        internal_counters.push_back(38342);
        internal_counters.push_back(38534);
        internal_counters.push_back(38726);
        internal_counters.push_back(38918);

        c.DefineDerivedCounter("FetchSize", "GlobalMemory", "The total bytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "664bb3ef-6eca-86b1-1e2d-30cb897b5fa9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36029);
        internal_counters.push_back(36221);
        internal_counters.push_back(36413);
        internal_counters.push_back(36605);
        internal_counters.push_back(36797);
        internal_counters.push_back(36989);
        internal_counters.push_back(37181);
        internal_counters.push_back(37373);
        internal_counters.push_back(37565);
        internal_counters.push_back(37757);
        internal_counters.push_back(37949);
        internal_counters.push_back(38141);
        internal_counters.push_back(38333);
        internal_counters.push_back(38525);
        internal_counters.push_back(38717);
        internal_counters.push_back(38909);

        c.DefineDerivedCounter("WriteSize", "GlobalMemory", "The total bytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "f96f2c16-b1b4-4ec4-229c-fc82e6f80a82");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36021);
        internal_counters.push_back(36213);
        internal_counters.push_back(36405);
        internal_counters.push_back(36597);
        internal_counters.push_back(36789);
        internal_counters.push_back(36981);
        internal_counters.push_back(37173);
        internal_counters.push_back(37365);
        internal_counters.push_back(37557);
        internal_counters.push_back(37749);
        internal_counters.push_back(37941);
        internal_counters.push_back(38133);
        internal_counters.push_back(38325);
        internal_counters.push_back(38517);
        internal_counters.push_back(38709);
        internal_counters.push_back(38901);
        internal_counters.push_back(36022);
        internal_counters.push_back(36214);
        internal_counters.push_back(36406);
        internal_counters.push_back(36598);
        internal_counters.push_back(36790);
        internal_counters.push_back(36982);
        internal_counters.push_back(37174);
        internal_counters.push_back(37366);
        internal_counters.push_back(37558);
        internal_counters.push_back(37750);
        internal_counters.push_back(37942);
        internal_counters.push_back(38134);
        internal_counters.push_back(38326);
        internal_counters.push_back(38518);
        internal_counters.push_back(38710);
        internal_counters.push_back(38902);

        c.DefineDerivedCounter("CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "dfbeebab-f7c1-1211-e502-4aae361e2ad7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36021);
        internal_counters.push_back(36213);
        internal_counters.push_back(36405);
        internal_counters.push_back(36597);
        internal_counters.push_back(36789);
        internal_counters.push_back(36981);
        internal_counters.push_back(37173);
        internal_counters.push_back(37365);
        internal_counters.push_back(37557);
        internal_counters.push_back(37749);
        internal_counters.push_back(37941);
        internal_counters.push_back(38133);
        internal_counters.push_back(38325);
        internal_counters.push_back(38517);
        internal_counters.push_back(38709);
        internal_counters.push_back(38901);
        internal_counters.push_back(36022);
        internal_counters.push_back(36214);
        internal_counters.push_back(36406);
        internal_counters.push_back(36598);
        internal_counters.push_back(36790);
        internal_counters.push_back(36982);
        internal_counters.push_back(37174);
        internal_counters.push_back(37366);
        internal_counters.push_back(37558);
        internal_counters.push_back(37750);
        internal_counters.push_back(37942);
        internal_counters.push_back(38134);
        internal_counters.push_back(38326);
        internal_counters.push_back(38518);
        internal_counters.push_back(38710);
        internal_counters.push_back(38902);

        c.DefineDerivedCounter("CacheMiss", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that miss the data cache. Value range: 0% (optimal) to 100% (all miss).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "aebc0a53-7f87-60bd-4c4b-2b956846ef83");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36021);
        internal_counters.push_back(36213);
        internal_counters.push_back(36405);
        internal_counters.push_back(36597);
        internal_counters.push_back(36789);
        internal_counters.push_back(36981);
        internal_counters.push_back(37173);
        internal_counters.push_back(37365);
        internal_counters.push_back(37557);
        internal_counters.push_back(37749);
        internal_counters.push_back(37941);
        internal_counters.push_back(38133);
        internal_counters.push_back(38325);
        internal_counters.push_back(38517);
        internal_counters.push_back(38709);
        internal_counters.push_back(38901);

        c.DefineDerivedCounter("CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the data cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "43437652-1024-9737-2eb0-0899c0c1feae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36022);
        internal_counters.push_back(36214);
        internal_counters.push_back(36406);
        internal_counters.push_back(36598);
        internal_counters.push_back(36790);
        internal_counters.push_back(36982);
        internal_counters.push_back(37174);
        internal_counters.push_back(37366);
        internal_counters.push_back(37558);
        internal_counters.push_back(37750);
        internal_counters.push_back(37942);
        internal_counters.push_back(38134);
        internal_counters.push_back(38326);
        internal_counters.push_back(38518);
        internal_counters.push_back(38710);
        internal_counters.push_back(38902);

        c.DefineDerivedCounter("CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the data cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "d0f8a812-f41b-644f-09d1-14ee03ea3671");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13362);
        internal_counters.push_back(13481);
        internal_counters.push_back(13600);
        internal_counters.push_back(13719);
        internal_counters.push_back(13838);
        internal_counters.push_back(13957);
        internal_counters.push_back(14076);
        internal_counters.push_back(14195);
        internal_counters.push_back(14314);
        internal_counters.push_back(14433);
        internal_counters.push_back(14552);
        internal_counters.push_back(14671);
        internal_counters.push_back(14790);
        internal_counters.push_back(14909);
        internal_counters.push_back(15028);
        internal_counters.push_back(15147);
        internal_counters.push_back(15266);
        internal_counters.push_back(15385);
        internal_counters.push_back(15504);
        internal_counters.push_back(15623);
        internal_counters.push_back(15742);
        internal_counters.push_back(15861);
        internal_counters.push_back(15980);
        internal_counters.push_back(16099);
        internal_counters.push_back(16218);
        internal_counters.push_back(16337);
        internal_counters.push_back(16456);
        internal_counters.push_back(16575);
        internal_counters.push_back(16694);
        internal_counters.push_back(16813);
        internal_counters.push_back(16932);
        internal_counters.push_back(17051);
        internal_counters.push_back(17170);
        internal_counters.push_back(17289);
        internal_counters.push_back(17408);
        internal_counters.push_back(17527);
        internal_counters.push_back(17646);
        internal_counters.push_back(17765);
        internal_counters.push_back(17884);
        internal_counters.push_back(18003);
        internal_counters.push_back(18122);
        internal_counters.push_back(18241);
        internal_counters.push_back(18360);
        internal_counters.push_back(18479);
        internal_counters.push_back(18598);
        internal_counters.push_back(18717);
        internal_counters.push_back(18836);
        internal_counters.push_back(18955);
        internal_counters.push_back(19074);
        internal_counters.push_back(19193);
        internal_counters.push_back(19312);
        internal_counters.push_back(19431);
        internal_counters.push_back(19550);
        internal_counters.push_back(19669);
        internal_counters.push_back(19788);
        internal_counters.push_back(19907);
        internal_counters.push_back(20026);
        internal_counters.push_back(20145);
        internal_counters.push_back(20264);
        internal_counters.push_back(20383);
        internal_counters.push_back(20502);
        internal_counters.push_back(20621);
        internal_counters.push_back(20740);
        internal_counters.push_back(20859);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13362);
        internal_counters.push_back(13481);
        internal_counters.push_back(13600);
        internal_counters.push_back(13719);
        internal_counters.push_back(13838);
        internal_counters.push_back(13957);
        internal_counters.push_back(14076);
        internal_counters.push_back(14195);
        internal_counters.push_back(14314);
        internal_counters.push_back(14433);
        internal_counters.push_back(14552);
        internal_counters.push_back(14671);
        internal_counters.push_back(14790);
        internal_counters.push_back(14909);
        internal_counters.push_back(15028);
        internal_counters.push_back(15147);
        internal_counters.push_back(15266);
        internal_counters.push_back(15385);
        internal_counters.push_back(15504);
        internal_counters.push_back(15623);
        internal_counters.push_back(15742);
        internal_counters.push_back(15861);
        internal_counters.push_back(15980);
        internal_counters.push_back(16099);
        internal_counters.push_back(16218);
        internal_counters.push_back(16337);
        internal_counters.push_back(16456);
        internal_counters.push_back(16575);
        internal_counters.push_back(16694);
        internal_counters.push_back(16813);
        internal_counters.push_back(16932);
        internal_counters.push_back(17051);
        internal_counters.push_back(17170);
        internal_counters.push_back(17289);
        internal_counters.push_back(17408);
        internal_counters.push_back(17527);
        internal_counters.push_back(17646);
        internal_counters.push_back(17765);
        internal_counters.push_back(17884);
        internal_counters.push_back(18003);
        internal_counters.push_back(18122);
        internal_counters.push_back(18241);
        internal_counters.push_back(18360);
        internal_counters.push_back(18479);
        internal_counters.push_back(18598);
        internal_counters.push_back(18717);
        internal_counters.push_back(18836);
        internal_counters.push_back(18955);
        internal_counters.push_back(19074);
        internal_counters.push_back(19193);
        internal_counters.push_back(19312);
        internal_counters.push_back(19431);
        internal_counters.push_back(19550);
        internal_counters.push_back(19669);
        internal_counters.push_back(19788);
        internal_counters.push_back(19907);
        internal_counters.push_back(20026);
        internal_counters.push_back(20145);
        internal_counters.push_back(20264);
        internal_counters.push_back(20383);
        internal_counters.push_back(20502);
        internal_counters.push_back(20621);
        internal_counters.push_back(20740);
        internal_counters.push_back(20859);

        c.DefineDerivedCounter("MemUnitBusyCycles", "GlobalMemory", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalledCycles). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "168f077c-4797-b2f5-717f-105c725266c8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24486);
        internal_counters.push_back(24666);
        internal_counters.push_back(24846);
        internal_counters.push_back(25026);
        internal_counters.push_back(25206);
        internal_counters.push_back(25386);
        internal_counters.push_back(25566);
        internal_counters.push_back(25746);
        internal_counters.push_back(25926);
        internal_counters.push_back(26106);
        internal_counters.push_back(26286);
        internal_counters.push_back(26466);
        internal_counters.push_back(26646);
        internal_counters.push_back(26826);
        internal_counters.push_back(27006);
        internal_counters.push_back(27186);
        internal_counters.push_back(27366);
        internal_counters.push_back(27546);
        internal_counters.push_back(27726);
        internal_counters.push_back(27906);
        internal_counters.push_back(28086);
        internal_counters.push_back(28266);
        internal_counters.push_back(28446);
        internal_counters.push_back(28626);
        internal_counters.push_back(28806);
        internal_counters.push_back(28986);
        internal_counters.push_back(29166);
        internal_counters.push_back(29346);
        internal_counters.push_back(29526);
        internal_counters.push_back(29706);
        internal_counters.push_back(29886);
        internal_counters.push_back(30066);
        internal_counters.push_back(30246);
        internal_counters.push_back(30426);
        internal_counters.push_back(30606);
        internal_counters.push_back(30786);
        internal_counters.push_back(30966);
        internal_counters.push_back(31146);
        internal_counters.push_back(31326);
        internal_counters.push_back(31506);
        internal_counters.push_back(31686);
        internal_counters.push_back(31866);
        internal_counters.push_back(32046);
        internal_counters.push_back(32226);
        internal_counters.push_back(32406);
        internal_counters.push_back(32586);
        internal_counters.push_back(32766);
        internal_counters.push_back(32946);
        internal_counters.push_back(33126);
        internal_counters.push_back(33306);
        internal_counters.push_back(33486);
        internal_counters.push_back(33666);
        internal_counters.push_back(33846);
        internal_counters.push_back(34026);
        internal_counters.push_back(34206);
        internal_counters.push_back(34386);
        internal_counters.push_back(34566);
        internal_counters.push_back(34746);
        internal_counters.push_back(34926);
        internal_counters.push_back(35106);
        internal_counters.push_back(35286);
        internal_counters.push_back(35466);
        internal_counters.push_back(35646);
        internal_counters.push_back(35826);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(24486);
        internal_counters.push_back(24666);
        internal_counters.push_back(24846);
        internal_counters.push_back(25026);
        internal_counters.push_back(25206);
        internal_counters.push_back(25386);
        internal_counters.push_back(25566);
        internal_counters.push_back(25746);
        internal_counters.push_back(25926);
        internal_counters.push_back(26106);
        internal_counters.push_back(26286);
        internal_counters.push_back(26466);
        internal_counters.push_back(26646);
        internal_counters.push_back(26826);
        internal_counters.push_back(27006);
        internal_counters.push_back(27186);
        internal_counters.push_back(27366);
        internal_counters.push_back(27546);
        internal_counters.push_back(27726);
        internal_counters.push_back(27906);
        internal_counters.push_back(28086);
        internal_counters.push_back(28266);
        internal_counters.push_back(28446);
        internal_counters.push_back(28626);
        internal_counters.push_back(28806);
        internal_counters.push_back(28986);
        internal_counters.push_back(29166);
        internal_counters.push_back(29346);
        internal_counters.push_back(29526);
        internal_counters.push_back(29706);
        internal_counters.push_back(29886);
        internal_counters.push_back(30066);
        internal_counters.push_back(30246);
        internal_counters.push_back(30426);
        internal_counters.push_back(30606);
        internal_counters.push_back(30786);
        internal_counters.push_back(30966);
        internal_counters.push_back(31146);
        internal_counters.push_back(31326);
        internal_counters.push_back(31506);
        internal_counters.push_back(31686);
        internal_counters.push_back(31866);
        internal_counters.push_back(32046);
        internal_counters.push_back(32226);
        internal_counters.push_back(32406);
        internal_counters.push_back(32586);
        internal_counters.push_back(32766);
        internal_counters.push_back(32946);
        internal_counters.push_back(33126);
        internal_counters.push_back(33306);
        internal_counters.push_back(33486);
        internal_counters.push_back(33666);
        internal_counters.push_back(33846);
        internal_counters.push_back(34026);
        internal_counters.push_back(34206);
        internal_counters.push_back(34386);
        internal_counters.push_back(34566);
        internal_counters.push_back(34746);
        internal_counters.push_back(34926);
        internal_counters.push_back(35106);
        internal_counters.push_back(35286);
        internal_counters.push_back(35466);
        internal_counters.push_back(35646);
        internal_counters.push_back(35826);

        c.DefineDerivedCounter("MemUnitStalledCycles", "GlobalMemory", "Number of GPU cycles the memory unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "2745659a-0e40-bace-3b9b-86a54f8e4623");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36031);
        internal_counters.push_back(36223);
        internal_counters.push_back(36415);
        internal_counters.push_back(36607);
        internal_counters.push_back(36799);
        internal_counters.push_back(36991);
        internal_counters.push_back(37183);
        internal_counters.push_back(37375);
        internal_counters.push_back(37567);
        internal_counters.push_back(37759);
        internal_counters.push_back(37951);
        internal_counters.push_back(38143);
        internal_counters.push_back(38335);
        internal_counters.push_back(38527);
        internal_counters.push_back(38719);
        internal_counters.push_back(38911);
        internal_counters.push_back(49743);

        c.DefineDerivedCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36031);
        internal_counters.push_back(36223);
        internal_counters.push_back(36415);
        internal_counters.push_back(36607);
        internal_counters.push_back(36799);
        internal_counters.push_back(36991);
        internal_counters.push_back(37183);
        internal_counters.push_back(37375);
        internal_counters.push_back(37567);
        internal_counters.push_back(37759);
        internal_counters.push_back(37951);
        internal_counters.push_back(38143);
        internal_counters.push_back(38335);
        internal_counters.push_back(38527);
        internal_counters.push_back(38719);
        internal_counters.push_back(38911);

        c.DefineDerivedCounter("WriteUnitStalledCycles", "GlobalMemory", "Number of GPU cycles the Write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "ede3305e-abd4-d6bf-6b00-ffc57a29fce3");
    }
}


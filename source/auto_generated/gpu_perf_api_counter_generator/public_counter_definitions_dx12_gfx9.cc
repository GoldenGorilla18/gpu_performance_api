//==============================================================================
// Copyright (c) 2010-2024 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for DX12 GFX9.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_dx12_gfx9.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersDx12Gfx9(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(57999);

        c.DefineDerivedCounter("GPUTime", "Timing", "Time this API command took to execute on the GPU in nanoseconds from the time the previous command reached the bottom of the pipeline (BOP) to the time this command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "cbd338f2-de6c-7b14-92ad-ba724ca2e501");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(58002);

        c.DefineDerivedCounter("ExecutionDuration", "Timing", "GPU command execution duration in nanoseconds, from the time the command enters the top of the pipeline (TOP) to the time the command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "b2f08d0d-af13-cd66-d3b4-b290ad448e69");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(58003);

        c.DefineDerivedCounter("ExecutionStart", "Timing", "GPU command execution start time in nanoseconds. This is the time the command enters the top of the pipeline (TOP).", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "a368f79d-fcfe-2158-71c4-2f0c4eef5aa4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(58004);

        c.DefineDerivedCounter("ExecutionEnd", "Timing", "GPU command execution end time in nanoseconds. This is the time the command reaches the bottom of the pipeline (BOP).", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "0,TS_FREQ,/,(1000000000),*", "0bce206a-0976-06a2-bf20-03fb351035a8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(23);
        internal_counters.push_back(0);

        c.DefineDerivedCounter("GPUBusy", "Timing", "The percentage of time the GPU command processor was busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,/,(100),*,(100),min", "b1ba5363-1abc-fe66-2fdd-1fe6ee8989a0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(23);

        c.DefineDerivedCounter("GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU command processor was busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0", "451cb045-23af-ac44-4603-d5832fa041d9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(221);
        internal_counters.push_back(369);
        internal_counters.push_back(517);
        internal_counters.push_back(665);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(221);
        internal_counters.push_back(369);
        internal_counters.push_back(517);
        internal_counters.push_back(665);

        c.DefineDerivedCounter("TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,max,2,max,3,max", "60289dcb-7b33-46e7-26d1-8a2121605543");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4061);
        internal_counters.push_back(4257);
        internal_counters.push_back(4453);
        internal_counters.push_back(4649);
        internal_counters.push_back(4080);
        internal_counters.push_back(4276);
        internal_counters.push_back(4472);
        internal_counters.push_back(4668);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("VsGsBusy", "Timing", "The percentage of time the ShaderUnit has VS or GS work to do in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,4,max,(0),8,ifnotzero,1,5,max,(0),9,ifnotzero,max,2,6,max,(0),10,ifnotzero,max,3,7,max,(0),11,ifnotzero,max,12,/,(100),*,(100),min", "969c41c7-eb0b-9706-a7a1-98f27c3af56b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4061);
        internal_counters.push_back(4257);
        internal_counters.push_back(4453);
        internal_counters.push_back(4649);
        internal_counters.push_back(4080);
        internal_counters.push_back(4276);
        internal_counters.push_back(4472);
        internal_counters.push_back(4668);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has VS or GS work to do in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,4,max,(0),8,ifnotzero,1,5,max,(0),9,ifnotzero,max,2,6,max,(0),10,ifnotzero,max,3,7,max,(0),11,ifnotzero,max", "a8420bb7-6bd8-930a-9088-d73b9c039851");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(57999);
        internal_counters.push_back(4061);
        internal_counters.push_back(4257);
        internal_counters.push_back(4453);
        internal_counters.push_back(4649);
        internal_counters.push_back(4080);
        internal_counters.push_back(4276);
        internal_counters.push_back(4472);
        internal_counters.push_back(4668);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("VsGsTime", "Timing", "Time VS or GS are busy in nanoseconds in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "1,5,max,(0),9,ifnotzero,2,6,max,(0),10,ifnotzero,max,3,7,max,(0),11,ifnotzero,max,4,8,max,(0),12,ifnotzero,max,13,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "3ce33b11-210d-b3de-9b6c-b9f3cd04beff");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4092);
        internal_counters.push_back(4288);
        internal_counters.push_back(4484);
        internal_counters.push_back(4680);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PreTessellationBusy", "Timing", "The percentage of time the ShaderUnit has VS and HS work to do in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "346c7430-4666-7065-b5b7-1cb8cbb1c01c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4092);
        internal_counters.push_back(4288);
        internal_counters.push_back(4484);
        internal_counters.push_back(4680);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PreTessellationBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has VS and HS work to do in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "dac68e38-0e3a-9364-2674-308e63bee2d2");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(57999);
        internal_counters.push_back(4092);
        internal_counters.push_back(4288);
        internal_counters.push_back(4484);
        internal_counters.push_back(4680);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PreTessellationTime", "Timing", "Time VS and HS are busy in nanoseconds in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "d5e6c54c-5ffb-b173-6118-bece61f0281c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4061);
        internal_counters.push_back(4257);
        internal_counters.push_back(4453);
        internal_counters.push_back(4649);
        internal_counters.push_back(4080);
        internal_counters.push_back(4276);
        internal_counters.push_back(4472);
        internal_counters.push_back(4668);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PostTessellationBusy", "Timing", "The percentage of time the ShaderUnit has DS or GS work to do in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,max,8,ifnotzero,(0),1,5,max,9,ifnotzero,max,(0),2,6,max,10,ifnotzero,max,(0),3,7,max,11,ifnotzero,max,12,/,(100),*,(100),min", "1a275c68-9340-f358-71c6-a2648390381d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4061);
        internal_counters.push_back(4257);
        internal_counters.push_back(4453);
        internal_counters.push_back(4649);
        internal_counters.push_back(4080);
        internal_counters.push_back(4276);
        internal_counters.push_back(4472);
        internal_counters.push_back(4668);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessellationBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has DS or GS work to do in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,max,8,ifnotzero,(0),1,5,max,9,ifnotzero,max,(0),2,6,max,10,ifnotzero,max,(0),3,7,max,11,ifnotzero,max", "a5ed943b-13ef-942b-56fb-6d519eeb7337");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(57999);
        internal_counters.push_back(4061);
        internal_counters.push_back(4257);
        internal_counters.push_back(4453);
        internal_counters.push_back(4649);
        internal_counters.push_back(4080);
        internal_counters.push_back(4276);
        internal_counters.push_back(4472);
        internal_counters.push_back(4668);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PostTessellationTime", "Timing", "Time DS or GS are busy in nanoseconds in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,max,9,ifnotzero,(0),2,6,max,10,ifnotzero,max,(0),3,7,max,11,ifnotzero,max,(0),4,8,max,12,ifnotzero,max,13,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "9f8dfa40-faee-2014-3467-2630a7d95c1e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4114);
        internal_counters.push_back(4310);
        internal_counters.push_back(4506);
        internal_counters.push_back(4702);
        internal_counters.push_back(4119);
        internal_counters.push_back(4315);
        internal_counters.push_back(4511);
        internal_counters.push_back(4707);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4114);
        internal_counters.push_back(4310);
        internal_counters.push_back(4506);
        internal_counters.push_back(4702);
        internal_counters.push_back(4119);
        internal_counters.push_back(4315);
        internal_counters.push_back(4511);
        internal_counters.push_back(4707);

        c.DefineDerivedCounter("PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "b58bea04-ce8e-2984-80f4-8aba7d4c817b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(57999);
        internal_counters.push_back(4114);
        internal_counters.push_back(4310);
        internal_counters.push_back(4506);
        internal_counters.push_back(4702);
        internal_counters.push_back(4119);
        internal_counters.push_back(4315);
        internal_counters.push_back(4511);
        internal_counters.push_back(4707);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "edca7694-7416-e8a6-0c5a-63a5ad5f3d74");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4102);
        internal_counters.push_back(4298);
        internal_counters.push_back(4494);
        internal_counters.push_back(4690);
        internal_counters.push_back(4106);
        internal_counters.push_back(4302);
        internal_counters.push_back(4498);
        internal_counters.push_back(4694);
        internal_counters.push_back(4108);
        internal_counters.push_back(4304);
        internal_counters.push_back(4500);
        internal_counters.push_back(4696);
        internal_counters.push_back(4112);
        internal_counters.push_back(4308);
        internal_counters.push_back(4504);
        internal_counters.push_back(4700);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,comparemax4,8,9,10,11,12,13,14,15,comparemax4,max,16,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4102);
        internal_counters.push_back(4298);
        internal_counters.push_back(4494);
        internal_counters.push_back(4690);
        internal_counters.push_back(4106);
        internal_counters.push_back(4302);
        internal_counters.push_back(4498);
        internal_counters.push_back(4694);
        internal_counters.push_back(4108);
        internal_counters.push_back(4304);
        internal_counters.push_back(4500);
        internal_counters.push_back(4696);
        internal_counters.push_back(4112);
        internal_counters.push_back(4308);
        internal_counters.push_back(4504);
        internal_counters.push_back(4700);

        c.DefineDerivedCounter("CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,comparemax4,8,9,10,11,12,13,14,15,comparemax4,max", "39bcf1b8-f6b2-4c37-f9af-0a2bb59512f9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(57999);
        internal_counters.push_back(4102);
        internal_counters.push_back(4298);
        internal_counters.push_back(4494);
        internal_counters.push_back(4690);
        internal_counters.push_back(4106);
        internal_counters.push_back(4302);
        internal_counters.push_back(4498);
        internal_counters.push_back(4694);
        internal_counters.push_back(4108);
        internal_counters.push_back(4304);
        internal_counters.push_back(4500);
        internal_counters.push_back(4696);
        internal_counters.push_back(4112);
        internal_counters.push_back(4308);
        internal_counters.push_back(4504);
        internal_counters.push_back(4700);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, 
internal_counters, "1,2,3,4,5,6,7,8,comparemax4,9,10,11,12,13,14,15,16,comparemax4,max,17,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "dbc24916-ecb2-7eef-8d63-7afadaaab6bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(242);
        internal_counters.push_back(390);
        internal_counters.push_back(538);
        internal_counters.push_back(686);
        internal_counters.push_back(97);
        internal_counters.push_back(245);
        internal_counters.push_back(393);
        internal_counters.push_back(541);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsVerticesIn", "VertexGeometry", "The number of unique vertices processed by the VS and GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,(0),8,9,10,11,sum4,ifnotzero", "17d0c775-3ed5-affb-d5ac-5391a198a4aa");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(696);
        internal_counters.push_back(1047);
        internal_counters.push_back(1398);
        internal_counters.push_back(1749);
        internal_counters.push_back(105);
        internal_counters.push_back(253);
        internal_counters.push_back(401);
        internal_counters.push_back(549);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsPrimsIn", "VertexGeometry", "The number of primitives passed into the VS and GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,(0),8,9,10,11,sum4,ifnotzero", "1bbdf2ec-cca3-4d9a-a243-94f4aec5409b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(242);
        internal_counters.push_back(390);
        internal_counters.push_back(538);
        internal_counters.push_back(686);
        internal_counters.push_back(97);
        internal_counters.push_back(245);
        internal_counters.push_back(393);
        internal_counters.push_back(541);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("GSVerticesOut", "VertexGeometry", "The number of vertices output by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero,(0),8,9,10,11,sum4,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9358);
        internal_counters.push_back(9732);
        internal_counters.push_back(10106);
        internal_counters.push_back(10480);
        internal_counters.push_back(9336);
        internal_counters.push_back(9710);
        internal_counters.push_back(10084);
        internal_counters.push_back(10458);
        internal_counters.push_back(7862);
        internal_counters.push_back(8236);
        internal_counters.push_back(8610);
        internal_counters.push_back(8984);
        internal_counters.push_back(7840);
        internal_counters.push_back(8214);
        internal_counters.push_back(8588);
        internal_counters.push_back(8962);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsVALUInstCount", "VertexGeometry", "Average number of vector ALU instructions executed in the VS and GS in a VS-[GS-]PS pipeline. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,12,13,14,15,sum4,/,12,13,14,15,sum4,ifnotzero,(0),16,17,18,19,sum4,ifnotzero", "116a93f9-d02b-060a-9c56-c88fd0ace9d7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9362);
        internal_counters.push_back(9736);
        internal_counters.push_back(10110);
        internal_counters.push_back(10484);
        internal_counters.push_back(9336);
        internal_counters.push_back(9710);
        internal_counters.push_back(10084);
        internal_counters.push_back(10458);
        internal_counters.push_back(7866);
        internal_counters.push_back(8240);
        internal_counters.push_back(8614);
        internal_counters.push_back(8988);
        internal_counters.push_back(7840);
        internal_counters.push_back(8214);
        internal_counters.push_back(8588);
        internal_counters.push_back(8962);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsSALUInstCount", "VertexGeometry", "Average number of scalar ALU instructions executed in the VS and GS in a VS-[GS-]PS pipeline. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,12,13,14,15,sum4,/,12,13,14,15,sum4,ifnotzero,(0),16,17,18,19,sum4,ifnotzero", "8085019d-8d06-62fb-f31b-e784cca2a0c1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9403);
        internal_counters.push_back(9777);
        internal_counters.push_back(10151);
        internal_counters.push_back(10525);
        internal_counters.push_back(7907);
        internal_counters.push_back(8281);
        internal_counters.push_back(8655);
        internal_counters.push_back(9029);
        internal_counters.push_back(23);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsVALUBusy", "VertexGeometry", "The percentage of GPUTime vector ALU instructions are being processed by the VS and GS in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,+,(0),9,10,11,12,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "c35ea07b-ce3b-c0f0-79d7-067069ce7293");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9403);
        internal_counters.push_back(9777);
        internal_counters.push_back(10151);
        internal_counters.push_back(10525);
        internal_counters.push_back(7907);
        internal_counters.push_back(8281);
        internal_counters.push_back(8655);
        internal_counters.push_back(9029);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsVALUBusyCycles", "VertexGeometry", "Number of GPU cycles where vector ALU instructions are being processed by the VS and GS in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,+,(0),8,9,10,11,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "3df27406-faf0-a111-0956-d204e259b38f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9416);
        internal_counters.push_back(9790);
        internal_counters.push_back(10164);
        internal_counters.push_back(10538);
        internal_counters.push_back(7920);
        internal_counters.push_back(8294);
        internal_counters.push_back(8668);
        internal_counters.push_back(9042);
        internal_counters.push_back(23);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsSALUBusy", "VertexGeometry", "The percentage of GPUTime scalar ALU instructions are being processed by the VS and GS in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,+,(0),9,10,11,12,sum4,ifnotzero,(4),*,NUM_CUS,/,8,/,(100),*", "0da470f6-d3f6-80fb-65da-2841c3b3c0bd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9416);
        internal_counters.push_back(9790);
        internal_counters.push_back(10164);
        internal_counters.push_back(10538);
        internal_counters.push_back(7920);
        internal_counters.push_back(8294);
        internal_counters.push_back(8668);
        internal_counters.push_back(9042);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("VsGsSALUBusyCycles", "VertexGeometry", "Number of GPU cycles where scalar ALU instructions are being processed by the VS and GS in a VS-[GS-]PS pipeline.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,+,(0),8,9,10,11,sum4,ifnotzero,(4),*,NUM_CUS,/", "ed8118b8-aff2-9432-1cf6-8fcfe6de4375");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(201);
        internal_counters.push_back(349);
        internal_counters.push_back(497);
        internal_counters.push_back(645);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PreTessVerticesIn", "PreTessellation", "The number of vertices processed by the VS and HS when using tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero", "b0d4c894-2fd0-6f4f-0b07-d5369769ef2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13846);
        internal_counters.push_back(14220);
        internal_counters.push_back(14594);
        internal_counters.push_back(14968);
        internal_counters.push_back(13824);
        internal_counters.push_back(14198);
        internal_counters.push_back(14572);
        internal_counters.push_back(14946);

        c.DefineDerivedCounter("PreTessVALUInstCount", "PreTessellation", "Average number of vector ALU instructions executed for the VS and HS in a pipeline that uses tessellation. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,4,5,6,7,sum4,ifnotzero", "a6894a29-4213-27d4-e186-b9ca6112e3f3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13850);
        internal_counters.push_back(14224);
        internal_counters.push_back(14598);
        internal_counters.push_back(14972);
        internal_counters.push_back(13824);
        internal_counters.push_back(14198);
        internal_counters.push_back(14572);
        internal_counters.push_back(14946);

        c.DefineDerivedCounter("PreTessSALUInstCount", "PreTessellation", "Average number of scalar ALU instructions executed for the VS and HS in a pipeline that uses tessellation. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,4,5,6,7,sum4,ifnotzero", "c6d06968-3557-fb5d-7a28-5eda098190db");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13891);
        internal_counters.push_back(14265);
        internal_counters.push_back(14639);
        internal_counters.push_back(15013);
        internal_counters.push_back(13824);
        internal_counters.push_back(14198);
        internal_counters.push_back(14572);
        internal_counters.push_back(14946);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PreTessVALUBusy", "PreTessellation", "The percentage of GPUTime vector ALU instructions are being processed for the VS and HS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,NUM_SIMDS,/,8,/,(100),*,4,5,6,7,sum4,ifnotzero", "72627e0a-da7e-899a-738c-69e8ba96bf42");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13891);
        internal_counters.push_back(14265);
        internal_counters.push_back(14639);
        internal_counters.push_back(15013);
        internal_counters.push_back(13824);
        internal_counters.push_back(14198);
        internal_counters.push_back(14572);
        internal_counters.push_back(14946);

        c.DefineDerivedCounter("PreTessVALUBusyCycles", "PreTessellation", "Number of GPU cycles vector where ALU instructions are being processed for the VS and HS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,5,6,7,sum4,ifnotzero", "2d750b51-a75e-380b-1b42-40d59f4fbdb6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13904);
        internal_counters.push_back(14278);
        internal_counters.push_back(14652);
        internal_counters.push_back(15026);
        internal_counters.push_back(13824);
        internal_counters.push_back(14198);
        internal_counters.push_back(14572);
        internal_counters.push_back(14946);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PreTessSALUBusy", "PreTessellation", "The percentage of GPUTime scalar ALU instructions are being processed for the VS and HS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,NUM_CUS,/,8,/,(100),*,4,5,6,7,sum4,ifnotzero", "74e778bb-ce25-32cd-caa6-810eb44c95fa");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13904);
        internal_counters.push_back(14278);
        internal_counters.push_back(14652);
        internal_counters.push_back(15026);
        internal_counters.push_back(13824);
        internal_counters.push_back(14198);
        internal_counters.push_back(14572);
        internal_counters.push_back(14946);

        c.DefineDerivedCounter("PreTessSALUBusyCycles", "PreTessellation", "Number of GPU cycles where scalar ALU instructions are being processed for the VS and HS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_CUS,/,4,5,6,7,sum4,ifnotzero", "8aa4a036-313f-f4b0-a820-ff0a6e71b1a2");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(210);
        internal_counters.push_back(358);
        internal_counters.push_back(506);
        internal_counters.push_back(654);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessPrimsOut", "PostTessellation", "The number of primitives output by the DS and GS when using tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero", "d38dabe8-1f13-ea34-d3c1-eb5783b737f1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9358);
        internal_counters.push_back(9732);
        internal_counters.push_back(10106);
        internal_counters.push_back(10480);
        internal_counters.push_back(9336);
        internal_counters.push_back(9710);
        internal_counters.push_back(10084);
        internal_counters.push_back(10458);
        internal_counters.push_back(7862);
        internal_counters.push_back(8236);
        internal_counters.push_back(8610);
        internal_counters.push_back(8984);
        internal_counters.push_back(7840);
        internal_counters.push_back(8214);
        internal_counters.push_back(8588);
        internal_counters.push_back(8962);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessVALUInstCount", "PostTessellation", "Average number of vector ALU instructions executed for the DS and GS in a pipeline that uses tessellation. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),(0),0,1,2,3,sum4,4,5,6,7,sum4,/,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,12,13,14,15,sum4,/,12,13,14,15,sum4,ifnotzero,16,17,18,19,sum4,ifnotzero", "718b7237-1371-4c85-3ad1-f12af258ba08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9362);
        internal_counters.push_back(9736);
        internal_counters.push_back(10110);
        internal_counters.push_back(10484);
        internal_counters.push_back(9336);
        internal_counters.push_back(9710);
        internal_counters.push_back(10084);
        internal_counters.push_back(10458);
        internal_counters.push_back(7866);
        internal_counters.push_back(8240);
        internal_counters.push_back(8614);
        internal_counters.push_back(8988);
        internal_counters.push_back(7840);
        internal_counters.push_back(8214);
        internal_counters.push_back(8588);
        internal_counters.push_back(8962);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessSALUInstCount", "PostTessellation", "Average number of scalar ALU instructions executed for the DS and GS in a pipeline that uses tessellation. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),(0),0,1,2,3,sum4,4,5,6,7,sum4,/,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,12,13,14,15,sum4,/,12,13,14,15,sum4,ifnotzero,16,17,18,19,sum4,ifnotzero", "546cecd8-53d4-c7b7-3b2e-f5b2db6c8282");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9403);
        internal_counters.push_back(9777);
        internal_counters.push_back(10151);
        internal_counters.push_back(10525);
        internal_counters.push_back(7907);
        internal_counters.push_back(8281);
        internal_counters.push_back(8655);
        internal_counters.push_back(9029);
        internal_counters.push_back(23);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessVALUBusy", "PostTessellation", "The percentage of GPUTime vector ALU instructions are being processed for the DS and GS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,+,(4),*,NUM_SIMDS,/,8,/,(100),*,9,10,11,12,sum4,ifnotzero", "068d1738-da17-7b6d-9d88-4013a8b27bf8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9403);
        internal_counters.push_back(9777);
        internal_counters.push_back(10151);
        internal_counters.push_back(10525);
        internal_counters.push_back(7907);
        internal_counters.push_back(8281);
        internal_counters.push_back(8655);
        internal_counters.push_back(9029);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessVALUBusyCycles", "PostTessellation", "Number of GPU cycles vector where ALU instructions are being processed for the DS and GS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,+,(4),*,NUM_SIMDS,/,8,9,10,11,sum4,ifnotzero", "29951e35-e415-22e9-ea59-03955faa8973");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9416);
        internal_counters.push_back(9790);
        internal_counters.push_back(10164);
        internal_counters.push_back(10538);
        internal_counters.push_back(7920);
        internal_counters.push_back(8294);
        internal_counters.push_back(8668);
        internal_counters.push_back(9042);
        internal_counters.push_back(23);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessSALUBusy", "PostTessellation", "The percentage of GPUTime scalar ALU instructions are being processed for the DS and GS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,+,(4),*,NUM_CUS,/,8,/,(100),*,9,10,11,12,sum4,ifnotzero", "776fb8e3-1541-75e5-8a4c-28d43d39662b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9416);
        internal_counters.push_back(9790);
        internal_counters.push_back(10164);
        internal_counters.push_back(10538);
        internal_counters.push_back(7920);
        internal_counters.push_back(8294);
        internal_counters.push_back(8668);
        internal_counters.push_back(9042);
        internal_counters.push_back(4098);
        internal_counters.push_back(4294);
        internal_counters.push_back(4490);
        internal_counters.push_back(4686);

        c.DefineDerivedCounter("PostTessSALUBusyCycles", "PostTessellation", "Number of GPU cycles where scalar ALU instructions are being processed for the DS and GS in a pipeline that uses tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,+,(4),*,NUM_CUS,/,8,9,10,11,sum4,ifnotzero", "fce0317e-c679-a310-fd96-85bbb4a8b79d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(793);
        internal_counters.push_back(1144);
        internal_counters.push_back(1495);
        internal_counters.push_back(1846);
        internal_counters.push_back(797);
        internal_counters.push_back(1148);
        internal_counters.push_back(1499);
        internal_counters.push_back(1850);
        internal_counters.push_back(749);
        internal_counters.push_back(1100);
        internal_counters.push_back(1451);
        internal_counters.push_back(1802);
        internal_counters.push_back(761);
        internal_counters.push_back(1112);
        internal_counters.push_back(1463);
        internal_counters.push_back(1814);
        internal_counters.push_back(750);
        internal_counters.push_back(1101);
        internal_counters.push_back(1452);
        internal_counters.push_back(1803);
        internal_counters.push_back(762);
        internal_counters.push_back(1113);
        internal_counters.push_back(1464);
        internal_counters.push_back(1815);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,24,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(793);
        internal_counters.push_back(1144);
        internal_counters.push_back(1495);
        internal_counters.push_back(1846);
        internal_counters.push_back(797);
        internal_counters.push_back(1148);
        internal_counters.push_back(1499);
        internal_counters.push_back(1850);
        internal_counters.push_back(749);
        internal_counters.push_back(1100);
        internal_counters.push_back(1451);
        internal_counters.push_back(1802);
        internal_counters.push_back(761);
        internal_counters.push_back(1112);
        internal_counters.push_back(1463);
        internal_counters.push_back(1814);
        internal_counters.push_back(750);
        internal_counters.push_back(1101);
        internal_counters.push_back(1452);
        internal_counters.push_back(1803);
        internal_counters.push_back(762);
        internal_counters.push_back(1113);
        internal_counters.push_back(1464);
        internal_counters.push_back(1815);

        c.DefineDerivedCounter("PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max", "99777f2d-9626-c78a-a97c-c4505eba1e5f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(696);
        internal_counters.push_back(1047);
        internal_counters.push_back(1398);
        internal_counters.push_back(1749);

        c.DefineDerivedCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(702);
        internal_counters.push_back(1053);
        internal_counters.push_back(1404);
        internal_counters.push_back(1755);
        internal_counters.push_back(742);
        internal_counters.push_back(1093);
        internal_counters.push_back(1444);
        internal_counters.push_back(1795);
        internal_counters.push_back(743);
        internal_counters.push_back(1094);
        internal_counters.push_back(1445);
        internal_counters.push_back(1796);
        internal_counters.push_back(744);
        internal_counters.push_back(1095);
        internal_counters.push_back(1446);
        internal_counters.push_back(1797);
        internal_counters.push_back(745);
        internal_counters.push_back(1096);
        internal_counters.push_back(1447);
        internal_counters.push_back(1798);

        c.DefineDerivedCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+,10,+,11,+,12,+,13,+,14,+,15,+,16,+,17,+,18,+,19,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(709);
        internal_counters.push_back(1060);
        internal_counters.push_back(1411);
        internal_counters.push_back(1762);

        c.DefineDerivedCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(797);
        internal_counters.push_back(1148);
        internal_counters.push_back(1499);
        internal_counters.push_back(1850);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(797);
        internal_counters.push_back(1148);
        internal_counters.push_back(1499);
        internal_counters.push_back(1850);

        c.DefineDerivedCounter("PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,max,2,max,3,max", "7a8c492a-c566-9328-6805-760dbff5c0f2");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16824);
        internal_counters.push_back(17032);
        internal_counters.push_back(17240);
        internal_counters.push_back(17448);
        internal_counters.push_back(16829);
        internal_counters.push_back(17037);
        internal_counters.push_back(17245);
        internal_counters.push_back(17453);
        internal_counters.push_back(16834);
        internal_counters.push_back(17042);
        internal_counters.push_back(17250);
        internal_counters.push_back(17458);
        internal_counters.push_back(16839);
        internal_counters.push_back(17047);
        internal_counters.push_back(17255);
        internal_counters.push_back(17463);

        c.DefineDerivedCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16826);
        internal_counters.push_back(17034);
        internal_counters.push_back(17242);
        internal_counters.push_back(17450);
        internal_counters.push_back(16831);
        internal_counters.push_back(17039);
        internal_counters.push_back(17247);
        internal_counters.push_back(17455);
        internal_counters.push_back(16836);
        internal_counters.push_back(17044);
        internal_counters.push_back(17252);
        internal_counters.push_back(17460);
        internal_counters.push_back(16841);
        internal_counters.push_back(17049);
        internal_counters.push_back(17257);
        internal_counters.push_back(17465);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16826);
        internal_counters.push_back(17034);
        internal_counters.push_back(17242);
        internal_counters.push_back(17450);
        internal_counters.push_back(16831);
        internal_counters.push_back(17039);
        internal_counters.push_back(17247);
        internal_counters.push_back(17455);
        internal_counters.push_back(16836);
        internal_counters.push_back(17044);
        internal_counters.push_back(17252);
        internal_counters.push_back(17460);
        internal_counters.push_back(16841);
        internal_counters.push_back(17049);
        internal_counters.push_back(17257);
        internal_counters.push_back(17465);

        c.DefineDerivedCounter("PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max", "47c72aad-64e6-0864-d533-d8e0bc27c156");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10854);
        internal_counters.push_back(11228);
        internal_counters.push_back(11602);
        internal_counters.push_back(11976);
        internal_counters.push_back(10832);
        internal_counters.push_back(11206);
        internal_counters.push_back(11580);
        internal_counters.push_back(11954);

        c.DefineDerivedCounter("PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "eb74389e-435c-4137-ecf1-39eb5bc1cbfe");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10858);
        internal_counters.push_back(11232);
        internal_counters.push_back(11606);
        internal_counters.push_back(11980);
        internal_counters.push_back(10832);
        internal_counters.push_back(11206);
        internal_counters.push_back(11580);
        internal_counters.push_back(11954);

        c.DefineDerivedCounter("PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "e6a06580-8a82-96d6-976c-acc121fc5516");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10899);
        internal_counters.push_back(11273);
        internal_counters.push_back(11647);
        internal_counters.push_back(12021);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "6ce6fef7-8e33-10b4-f351-af755e177e85");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10899);
        internal_counters.push_back(11273);
        internal_counters.push_back(11647);
        internal_counters.push_back(12021);

        c.DefineDerivedCounter("PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "1e276f86-cd2a-72e7-fc9d-004f666f2981");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10912);
        internal_counters.push_back(11286);
        internal_counters.push_back(11660);
        internal_counters.push_back(12034);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/,4,/,(100),*", "2ff9f34f-e94b-af4d-18c2-5fbbf6d1727a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10912);
        internal_counters.push_back(11286);
        internal_counters.push_back(11660);
        internal_counters.push_back(12034);

        c.DefineDerivedCounter("PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,sum4,NUM_CUS,/", "29808906-f128-b078-fc79-820a4b3b3b8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,sum8", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4106);
        internal_counters.push_back(4302);
        internal_counters.push_back(4498);
        internal_counters.push_back(4694);
        internal_counters.push_back(4112);
        internal_counters.push_back(4308);
        internal_counters.push_back(4504);
        internal_counters.push_back(4700);

        c.DefineDerivedCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,sum8", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15330);
        internal_counters.push_back(15704);
        internal_counters.push_back(16078);
        internal_counters.push_back(16452);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,sum8,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15330);
        internal_counters.push_back(15704);
        internal_counters.push_back(16078);
        internal_counters.push_back(16452);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSThreadGroupSize", "ComputeShader", "The number of CS threads within each thread group.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,sum8,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "8c65008a-9957-7ca6-4199-f6fe940420f6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15342);
        internal_counters.push_back(15716);
        internal_counters.push_back(16090);
        internal_counters.push_back(16464);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15401);
        internal_counters.push_back(15775);
        internal_counters.push_back(16149);
        internal_counters.push_back(16523);
        internal_counters.push_back(15387);
        internal_counters.push_back(15761);
        internal_counters.push_back(16135);
        internal_counters.push_back(16509);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,(64),*,/,(100),*,8,9,10,11,12,13,14,15,sum8,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15346);
        internal_counters.push_back(15720);
        internal_counters.push_back(16094);
        internal_counters.push_back(16468);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15344);
        internal_counters.push_back(15718);
        internal_counters.push_back(16092);
        internal_counters.push_back(16466);
        internal_counters.push_back(17745);
        internal_counters.push_back(17864);
        internal_counters.push_back(17983);
        internal_counters.push_back(18102);
        internal_counters.push_back(18221);
        internal_counters.push_back(18340);
        internal_counters.push_back(18459);
        internal_counters.push_back(18578);
        internal_counters.push_back(18697);
        internal_counters.push_back(18816);
        internal_counters.push_back(18935);
        internal_counters.push_back(19054);
        internal_counters.push_back(19173);
        internal_counters.push_back(19292);
        internal_counters.push_back(19411);
        internal_counters.push_back(19530);
        internal_counters.push_back(19649);
        internal_counters.push_back(19768);
        internal_counters.push_back(19887);
        internal_counters.push_back(20006);
        internal_counters.push_back(20125);
        internal_counters.push_back(20244);
        internal_counters.push_back(20363);
        internal_counters.push_back(20482);
        internal_counters.push_back(20601);
        internal_counters.push_back(20720);
        internal_counters.push_back(20839);
        internal_counters.push_back(20958);
        internal_counters.push_back(21077);
        internal_counters.push_back(21196);
        internal_counters.push_back(21315);
        internal_counters.push_back(21434);
        internal_counters.push_back(21553);
        internal_counters.push_back(21672);
        internal_counters.push_back(21791);
        internal_counters.push_back(21910);
        internal_counters.push_back(22029);
        internal_counters.push_back(22148);
        internal_counters.push_back(22267);
        internal_counters.push_back(22386);
        internal_counters.push_back(22505);
        internal_counters.push_back(22624);
        internal_counters.push_back(22743);
        internal_counters.push_back(22862);
        internal_counters.push_back(22981);
        internal_counters.push_back(23100);
        internal_counters.push_back(23219);
        internal_counters.push_back(23338);
        internal_counters.push_back(23457);
        internal_counters.push_back(23576);
        internal_counters.push_back(23695);
        internal_counters.push_back(23814);
        internal_counters.push_back(23933);
        internal_counters.push_back(24052);
        internal_counters.push_back(24171);
        internal_counters.push_back(24290);
        internal_counters.push_back(24409);
        internal_counters.push_back(24528);
        internal_counters.push_back(24647);
        internal_counters.push_back(24766);
        internal_counters.push_back(24885);
        internal_counters.push_back(25004);
        internal_counters.push_back(25123);
        internal_counters.push_back(25242);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,sum64,-,68,69,70,71,sum4,/,72,73,74,75,76,77,78,79,sum8,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15347);
        internal_counters.push_back(15721);
        internal_counters.push_back(16095);
        internal_counters.push_back(16469);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15343);
        internal_counters.push_back(15717);
        internal_counters.push_back(16091);
        internal_counters.push_back(16465);
        internal_counters.push_back(17746);
        internal_counters.push_back(17865);
        internal_counters.push_back(17984);
        internal_counters.push_back(18103);
        internal_counters.push_back(18222);
        internal_counters.push_back(18341);
        internal_counters.push_back(18460);
        internal_counters.push_back(18579);
        internal_counters.push_back(18698);
        internal_counters.push_back(18817);
        internal_counters.push_back(18936);
        internal_counters.push_back(19055);
        internal_counters.push_back(19174);
        internal_counters.push_back(19293);
        internal_counters.push_back(19412);
        internal_counters.push_back(19531);
        internal_counters.push_back(19650);
        internal_counters.push_back(19769);
        internal_counters.push_back(19888);
        internal_counters.push_back(20007);
        internal_counters.push_back(20126);
        internal_counters.push_back(20245);
        internal_counters.push_back(20364);
        internal_counters.push_back(20483);
        internal_counters.push_back(20602);
        internal_counters.push_back(20721);
        internal_counters.push_back(20840);
        internal_counters.push_back(20959);
        internal_counters.push_back(21078);
        internal_counters.push_back(21197);
        internal_counters.push_back(21316);
        internal_counters.push_back(21435);
        internal_counters.push_back(21554);
        internal_counters.push_back(21673);
        internal_counters.push_back(21792);
        internal_counters.push_back(21911);
        internal_counters.push_back(22030);
        internal_counters.push_back(22149);
        internal_counters.push_back(22268);
        internal_counters.push_back(22387);
        internal_counters.push_back(22506);
        internal_counters.push_back(22625);
        internal_counters.push_back(22744);
        internal_counters.push_back(22863);
        internal_counters.push_back(22982);
        internal_counters.push_back(23101);
        internal_counters.push_back(23220);
        internal_counters.push_back(23339);
        internal_counters.push_back(23458);
        internal_counters.push_back(23577);
        internal_counters.push_back(23696);
        internal_counters.push_back(23815);
        internal_counters.push_back(23934);
        internal_counters.push_back(24053);
        internal_counters.push_back(24172);
        internal_counters.push_back(24291);
        internal_counters.push_back(24410);
        internal_counters.push_back(24529);
        internal_counters.push_back(24648);
        internal_counters.push_back(24767);
        internal_counters.push_back(24886);
        internal_counters.push_back(25005);
        internal_counters.push_back(25124);
        internal_counters.push_back(25243);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,sum64,-,68,69,70,71,sum4,/,72,73,74,75,76,77,78,79,sum8,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15348);
        internal_counters.push_back(15722);
        internal_counters.push_back(16096);
        internal_counters.push_back(16470);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "2570b477-13e3-f5b6-e6ff-7159373bc74d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15387);
        internal_counters.push_back(15761);
        internal_counters.push_back(16135);
        internal_counters.push_back(16509);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15387);
        internal_counters.push_back(15761);
        internal_counters.push_back(16135);
        internal_counters.push_back(16509);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "2d0d5852-2658-eb73-68d2-f23f7118c9c3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15400);
        internal_counters.push_back(15774);
        internal_counters.push_back(16148);
        internal_counters.push_back(16522);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,NUM_CUS,/,4,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15400);
        internal_counters.push_back(15774);
        internal_counters.push_back(16148);
        internal_counters.push_back(16522);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_CUS,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "de58f8fc-8ed4-a799-648d-62ded7b1c4c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17659);
        internal_counters.push_back(17778);
        internal_counters.push_back(17897);
        internal_counters.push_back(18016);
        internal_counters.push_back(18135);
        internal_counters.push_back(18254);
        internal_counters.push_back(18373);
        internal_counters.push_back(18492);
        internal_counters.push_back(18611);
        internal_counters.push_back(18730);
        internal_counters.push_back(18849);
        internal_counters.push_back(18968);
        internal_counters.push_back(19087);
        internal_counters.push_back(19206);
        internal_counters.push_back(19325);
        internal_counters.push_back(19444);
        internal_counters.push_back(19563);
        internal_counters.push_back(19682);
        internal_counters.push_back(19801);
        internal_counters.push_back(19920);
        internal_counters.push_back(20039);
        internal_counters.push_back(20158);
        internal_counters.push_back(20277);
        internal_counters.push_back(20396);
        internal_counters.push_back(20515);
        internal_counters.push_back(20634);
        internal_counters.push_back(20753);
        internal_counters.push_back(20872);
        internal_counters.push_back(20991);
        internal_counters.push_back(21110);
        internal_counters.push_back(21229);
        internal_counters.push_back(21348);
        internal_counters.push_back(21467);
        internal_counters.push_back(21586);
        internal_counters.push_back(21705);
        internal_counters.push_back(21824);
        internal_counters.push_back(21943);
        internal_counters.push_back(22062);
        internal_counters.push_back(22181);
        internal_counters.push_back(22300);
        internal_counters.push_back(22419);
        internal_counters.push_back(22538);
        internal_counters.push_back(22657);
        internal_counters.push_back(22776);
        internal_counters.push_back(22895);
        internal_counters.push_back(23014);
        internal_counters.push_back(23133);
        internal_counters.push_back(23252);
        internal_counters.push_back(23371);
        internal_counters.push_back(23490);
        internal_counters.push_back(23609);
        internal_counters.push_back(23728);
        internal_counters.push_back(23847);
        internal_counters.push_back(23966);
        internal_counters.push_back(24085);
        internal_counters.push_back(24204);
        internal_counters.push_back(24323);
        internal_counters.push_back(24442);
        internal_counters.push_back(24561);
        internal_counters.push_back(24680);
        internal_counters.push_back(24799);
        internal_counters.push_back(24918);
        internal_counters.push_back(25037);
        internal_counters.push_back(25156);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*,65,66,67,68,69,70,71,72,sum8,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17659);
        internal_counters.push_back(17778);
        internal_counters.push_back(17897);
        internal_counters.push_back(18016);
        internal_counters.push_back(18135);
        internal_counters.push_back(18254);
        internal_counters.push_back(18373);
        internal_counters.push_back(18492);
        internal_counters.push_back(18611);
        internal_counters.push_back(18730);
        internal_counters.push_back(18849);
        internal_counters.push_back(18968);
        internal_counters.push_back(19087);
        internal_counters.push_back(19206);
        internal_counters.push_back(19325);
        internal_counters.push_back(19444);
        internal_counters.push_back(19563);
        internal_counters.push_back(19682);
        internal_counters.push_back(19801);
        internal_counters.push_back(19920);
        internal_counters.push_back(20039);
        internal_counters.push_back(20158);
        internal_counters.push_back(20277);
        internal_counters.push_back(20396);
        internal_counters.push_back(20515);
        internal_counters.push_back(20634);
        internal_counters.push_back(20753);
        internal_counters.push_back(20872);
        internal_counters.push_back(20991);
        internal_counters.push_back(21110);
        internal_counters.push_back(21229);
        internal_counters.push_back(21348);
        internal_counters.push_back(21467);
        internal_counters.push_back(21586);
        internal_counters.push_back(21705);
        internal_counters.push_back(21824);
        internal_counters.push_back(21943);
        internal_counters.push_back(22062);
        internal_counters.push_back(22181);
        internal_counters.push_back(22300);
        internal_counters.push_back(22419);
        internal_counters.push_back(22538);
        internal_counters.push_back(22657);
        internal_counters.push_back(22776);
        internal_counters.push_back(22895);
        internal_counters.push_back(23014);
        internal_counters.push_back(23133);
        internal_counters.push_back(23252);
        internal_counters.push_back(23371);
        internal_counters.push_back(23490);
        internal_counters.push_back(23609);
        internal_counters.push_back(23728);
        internal_counters.push_back(23847);
        internal_counters.push_back(23966);
        internal_counters.push_back(24085);
        internal_counters.push_back(24204);
        internal_counters.push_back(24323);
        internal_counters.push_back(24442);
        internal_counters.push_back(24561);
        internal_counters.push_back(24680);
        internal_counters.push_back(24799);
        internal_counters.push_back(24918);
        internal_counters.push_back(25037);
        internal_counters.push_back(25156);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,65,66,67,68,69,70,71,sum8,ifnotzero", "39d5687f-c727-7c0c-af82-bb711d3897ed");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28914);
        internal_counters.push_back(28999);
        internal_counters.push_back(29084);
        internal_counters.push_back(29169);
        internal_counters.push_back(29254);
        internal_counters.push_back(29339);
        internal_counters.push_back(29424);
        internal_counters.push_back(29509);
        internal_counters.push_back(29594);
        internal_counters.push_back(29679);
        internal_counters.push_back(29764);
        internal_counters.push_back(29849);
        internal_counters.push_back(29934);
        internal_counters.push_back(30019);
        internal_counters.push_back(30104);
        internal_counters.push_back(30189);
        internal_counters.push_back(30274);
        internal_counters.push_back(30359);
        internal_counters.push_back(30444);
        internal_counters.push_back(30529);
        internal_counters.push_back(30614);
        internal_counters.push_back(30699);
        internal_counters.push_back(30784);
        internal_counters.push_back(30869);
        internal_counters.push_back(30954);
        internal_counters.push_back(31039);
        internal_counters.push_back(31124);
        internal_counters.push_back(31209);
        internal_counters.push_back(31294);
        internal_counters.push_back(31379);
        internal_counters.push_back(31464);
        internal_counters.push_back(31549);
        internal_counters.push_back(31634);
        internal_counters.push_back(31719);
        internal_counters.push_back(31804);
        internal_counters.push_back(31889);
        internal_counters.push_back(31974);
        internal_counters.push_back(32059);
        internal_counters.push_back(32144);
        internal_counters.push_back(32229);
        internal_counters.push_back(32314);
        internal_counters.push_back(32399);
        internal_counters.push_back(32484);
        internal_counters.push_back(32569);
        internal_counters.push_back(32654);
        internal_counters.push_back(32739);
        internal_counters.push_back(32824);
        internal_counters.push_back(32909);
        internal_counters.push_back(32994);
        internal_counters.push_back(33079);
        internal_counters.push_back(33164);
        internal_counters.push_back(33249);
        internal_counters.push_back(33334);
        internal_counters.push_back(33419);
        internal_counters.push_back(33504);
        internal_counters.push_back(33589);
        internal_counters.push_back(33674);
        internal_counters.push_back(33759);
        internal_counters.push_back(33844);
        internal_counters.push_back(33929);
        internal_counters.push_back(34014);
        internal_counters.push_back(34099);
        internal_counters.push_back(34184);
        internal_counters.push_back(34269);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*,65,66,67,68,69,70,71,72,sum8,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28914);
        internal_counters.push_back(28999);
        internal_counters.push_back(29084);
        internal_counters.push_back(29169);
        internal_counters.push_back(29254);
        internal_counters.push_back(29339);
        internal_counters.push_back(29424);
        internal_counters.push_back(29509);
        internal_counters.push_back(29594);
        internal_counters.push_back(29679);
        internal_counters.push_back(29764);
        internal_counters.push_back(29849);
        internal_counters.push_back(29934);
        internal_counters.push_back(30019);
        internal_counters.push_back(30104);
        internal_counters.push_back(30189);
        internal_counters.push_back(30274);
        internal_counters.push_back(30359);
        internal_counters.push_back(30444);
        internal_counters.push_back(30529);
        internal_counters.push_back(30614);
        internal_counters.push_back(30699);
        internal_counters.push_back(30784);
        internal_counters.push_back(30869);
        internal_counters.push_back(30954);
        internal_counters.push_back(31039);
        internal_counters.push_back(31124);
        internal_counters.push_back(31209);
        internal_counters.push_back(31294);
        internal_counters.push_back(31379);
        internal_counters.push_back(31464);
        internal_counters.push_back(31549);
        internal_counters.push_back(31634);
        internal_counters.push_back(31719);
        internal_counters.push_back(31804);
        internal_counters.push_back(31889);
        internal_counters.push_back(31974);
        internal_counters.push_back(32059);
        internal_counters.push_back(32144);
        internal_counters.push_back(32229);
        internal_counters.push_back(32314);
        internal_counters.push_back(32399);
        internal_counters.push_back(32484);
        internal_counters.push_back(32569);
        internal_counters.push_back(32654);
        internal_counters.push_back(32739);
        internal_counters.push_back(32824);
        internal_counters.push_back(32909);
        internal_counters.push_back(32994);
        internal_counters.push_back(33079);
        internal_counters.push_back(33164);
        internal_counters.push_back(33249);
        internal_counters.push_back(33334);
        internal_counters.push_back(33419);
        internal_counters.push_back(33504);
        internal_counters.push_back(33589);
        internal_counters.push_back(33674);
        internal_counters.push_back(33759);
        internal_counters.push_back(33844);
        internal_counters.push_back(33929);
        internal_counters.push_back(34014);
        internal_counters.push_back(34099);
        internal_counters.push_back(34184);
        internal_counters.push_back(34269);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,65,66,67,68,69,70,71,sum8,ifnotzero", "51991c84-ed2b-bf31-c4ab-8f8e9eb8f29f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34381);
        internal_counters.push_back(34663);
        internal_counters.push_back(34945);
        internal_counters.push_back(35227);
        internal_counters.push_back(35509);
        internal_counters.push_back(35791);
        internal_counters.push_back(36073);
        internal_counters.push_back(36355);
        internal_counters.push_back(36637);
        internal_counters.push_back(36919);
        internal_counters.push_back(37201);
        internal_counters.push_back(37483);
        internal_counters.push_back(37765);
        internal_counters.push_back(38047);
        internal_counters.push_back(38329);
        internal_counters.push_back(38611);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*,17,18,19,20,21,22,23,24,sum8,ifnotzero", "55118f7a-8f92-726f-78c6-407f689a2eb4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34381);
        internal_counters.push_back(34663);
        internal_counters.push_back(34945);
        internal_counters.push_back(35227);
        internal_counters.push_back(35509);
        internal_counters.push_back(35791);
        internal_counters.push_back(36073);
        internal_counters.push_back(36355);
        internal_counters.push_back(36637);
        internal_counters.push_back(36919);
        internal_counters.push_back(37201);
        internal_counters.push_back(37483);
        internal_counters.push_back(37765);
        internal_counters.push_back(38047);
        internal_counters.push_back(38329);
        internal_counters.push_back(38611);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,17,18,19,20,21,22,23,sum8,ifnotzero", "be164c60-5e48-acac-9622-29616d09aa9a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15351);
        internal_counters.push_back(15725);
        internal_counters.push_back(16099);
        internal_counters.push_back(16473);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15350);
        internal_counters.push_back(15724);
        internal_counters.push_back(16098);
        internal_counters.push_back(16472);
        internal_counters.push_back(15349);
        internal_counters.push_back(15723);
        internal_counters.push_back(16097);
        internal_counters.push_back(16471);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,16,17,18,19,sum8,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15349);
        internal_counters.push_back(15723);
        internal_counters.push_back(16097);
        internal_counters.push_back(16471);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,12,13,14,15,sum8,ifnotzero", "99672cda-de2b-014c-482e-cf73b90068d5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15379);
        internal_counters.push_back(15753);
        internal_counters.push_back(16127);
        internal_counters.push_back(16501);
        internal_counters.push_back(15320);
        internal_counters.push_back(15694);
        internal_counters.push_back(16068);
        internal_counters.push_back(16442);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,/,NUM_SHADER_ENGINES,/,(100),*,9,10,11,12,13,14,15,16,sum8,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15379);
        internal_counters.push_back(15753);
        internal_counters.push_back(16127);
        internal_counters.push_back(16501);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_SHADER_ENGINES,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "8f3d5f25-2159-0374-fafe-e26a7799b6c8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15409);
        internal_counters.push_back(15783);
        internal_counters.push_back(16157);
        internal_counters.push_back(16531);
        internal_counters.push_back(23);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),0,1,2,3,sum4,4,/,NUM_SIMDS,/,(100),*,5,6,7,8,9,10,11,12,sum8,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15409);
        internal_counters.push_back(15783);
        internal_counters.push_back(16157);
        internal_counters.push_back(16531);
        internal_counters.push_back(4103);
        internal_counters.push_back(4299);
        internal_counters.push_back(4495);
        internal_counters.push_back(4691);
        internal_counters.push_back(4109);
        internal_counters.push_back(4305);
        internal_counters.push_back(4501);
        internal_counters.push_back(4697);

        c.DefineDerivedCounter("CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "(0),0,1,2,3,sum4,NUM_SIMDS,/,4,5,6,7,8,9,10,11,sum8,ifnotzero", "1fd1adf3-c51e-94fd-083e-c482a0a0809e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17659);
        internal_counters.push_back(17778);
        internal_counters.push_back(17897);
        internal_counters.push_back(18016);
        internal_counters.push_back(18135);
        internal_counters.push_back(18254);
        internal_counters.push_back(18373);
        internal_counters.push_back(18492);
        internal_counters.push_back(18611);
        internal_counters.push_back(18730);
        internal_counters.push_back(18849);
        internal_counters.push_back(18968);
        internal_counters.push_back(19087);
        internal_counters.push_back(19206);
        internal_counters.push_back(19325);
        internal_counters.push_back(19444);
        internal_counters.push_back(19563);
        internal_counters.push_back(19682);
        internal_counters.push_back(19801);
        internal_counters.push_back(19920);
        internal_counters.push_back(20039);
        internal_counters.push_back(20158);
        internal_counters.push_back(20277);
        internal_counters.push_back(20396);
        internal_counters.push_back(20515);
        internal_counters.push_back(20634);
        internal_counters.push_back(20753);
        internal_counters.push_back(20872);
        internal_counters.push_back(20991);
        internal_counters.push_back(21110);
        internal_counters.push_back(21229);
        internal_counters.push_back(21348);
        internal_counters.push_back(21467);
        internal_counters.push_back(21586);
        internal_counters.push_back(21705);
        internal_counters.push_back(21824);
        internal_counters.push_back(21943);
        internal_counters.push_back(22062);
        internal_counters.push_back(22181);
        internal_counters.push_back(22300);
        internal_counters.push_back(22419);
        internal_counters.push_back(22538);
        internal_counters.push_back(22657);
        internal_counters.push_back(22776);
        internal_counters.push_back(22895);
        internal_counters.push_back(23014);
        internal_counters.push_back(23133);
        internal_counters.push_back(23252);
        internal_counters.push_back(23371);
        internal_counters.push_back(23490);
        internal_counters.push_back(23609);
        internal_counters.push_back(23728);
        internal_counters.push_back(23847);
        internal_counters.push_back(23966);
        internal_counters.push_back(24085);
        internal_counters.push_back(24204);
        internal_counters.push_back(24323);
        internal_counters.push_back(24442);
        internal_counters.push_back(24561);
        internal_counters.push_back(24680);
        internal_counters.push_back(24799);
        internal_counters.push_back(24918);
        internal_counters.push_back(25037);
        internal_counters.push_back(25156);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17659);
        internal_counters.push_back(17778);
        internal_counters.push_back(17897);
        internal_counters.push_back(18016);
        internal_counters.push_back(18135);
        internal_counters.push_back(18254);
        internal_counters.push_back(18373);
        internal_counters.push_back(18492);
        internal_counters.push_back(18611);
        internal_counters.push_back(18730);
        internal_counters.push_back(18849);
        internal_counters.push_back(18968);
        internal_counters.push_back(19087);
        internal_counters.push_back(19206);
        internal_counters.push_back(19325);
        internal_counters.push_back(19444);
        internal_counters.push_back(19563);
        internal_counters.push_back(19682);
        internal_counters.push_back(19801);
        internal_counters.push_back(19920);
        internal_counters.push_back(20039);
        internal_counters.push_back(20158);
        internal_counters.push_back(20277);
        internal_counters.push_back(20396);
        internal_counters.push_back(20515);
        internal_counters.push_back(20634);
        internal_counters.push_back(20753);
        internal_counters.push_back(20872);
        internal_counters.push_back(20991);
        internal_counters.push_back(21110);
        internal_counters.push_back(21229);
        internal_counters.push_back(21348);
        internal_counters.push_back(21467);
        internal_counters.push_back(21586);
        internal_counters.push_back(21705);
        internal_counters.push_back(21824);
        internal_counters.push_back(21943);
        internal_counters.push_back(22062);
        internal_counters.push_back(22181);
        internal_counters.push_back(22300);
        internal_counters.push_back(22419);
        internal_counters.push_back(22538);
        internal_counters.push_back(22657);
        internal_counters.push_back(22776);
        internal_counters.push_back(22895);
        internal_counters.push_back(23014);
        internal_counters.push_back(23133);
        internal_counters.push_back(23252);
        internal_counters.push_back(23371);
        internal_counters.push_back(23490);
        internal_counters.push_back(23609);
        internal_counters.push_back(23728);
        internal_counters.push_back(23847);
        internal_counters.push_back(23966);
        internal_counters.push_back(24085);
        internal_counters.push_back(24204);
        internal_counters.push_back(24323);
        internal_counters.push_back(24442);
        internal_counters.push_back(24561);
        internal_counters.push_back(24680);
        internal_counters.push_back(24799);
        internal_counters.push_back(24918);
        internal_counters.push_back(25037);
        internal_counters.push_back(25156);

        c.DefineDerivedCounter("TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "c68761f2-248c-4f39-6528-c308b1c0807c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17713);
        internal_counters.push_back(17832);
        internal_counters.push_back(17951);
        internal_counters.push_back(18070);
        internal_counters.push_back(18189);
        internal_counters.push_back(18308);
        internal_counters.push_back(18427);
        internal_counters.push_back(18546);
        internal_counters.push_back(18665);
        internal_counters.push_back(18784);
        internal_counters.push_back(18903);
        internal_counters.push_back(19022);
        internal_counters.push_back(19141);
        internal_counters.push_back(19260);
        internal_counters.push_back(19379);
        internal_counters.push_back(19498);
        internal_counters.push_back(19617);
        internal_counters.push_back(19736);
        internal_counters.push_back(19855);
        internal_counters.push_back(19974);
        internal_counters.push_back(20093);
        internal_counters.push_back(20212);
        internal_counters.push_back(20331);
        internal_counters.push_back(20450);
        internal_counters.push_back(20569);
        internal_counters.push_back(20688);
        internal_counters.push_back(20807);
        internal_counters.push_back(20926);
        internal_counters.push_back(21045);
        internal_counters.push_back(21164);
        internal_counters.push_back(21283);
        internal_counters.push_back(21402);
        internal_counters.push_back(21521);
        internal_counters.push_back(21640);
        internal_counters.push_back(21759);
        internal_counters.push_back(21878);
        internal_counters.push_back(21997);
        internal_counters.push_back(22116);
        internal_counters.push_back(22235);
        internal_counters.push_back(22354);
        internal_counters.push_back(22473);
        internal_counters.push_back(22592);
        internal_counters.push_back(22711);
        internal_counters.push_back(22830);
        internal_counters.push_back(22949);
        internal_counters.push_back(23068);
        internal_counters.push_back(23187);
        internal_counters.push_back(23306);
        internal_counters.push_back(23425);
        internal_counters.push_back(23544);
        internal_counters.push_back(23663);
        internal_counters.push_back(23782);
        internal_counters.push_back(23901);
        internal_counters.push_back(24020);
        internal_counters.push_back(24139);
        internal_counters.push_back(24258);
        internal_counters.push_back(24377);
        internal_counters.push_back(24496);
        internal_counters.push_back(24615);
        internal_counters.push_back(24734);
        internal_counters.push_back(24853);
        internal_counters.push_back(24972);
        internal_counters.push_back(25091);
        internal_counters.push_back(25210);
        internal_counters.push_back(17712);
        internal_counters.push_back(17831);
        internal_counters.push_back(17950);
        internal_counters.push_back(18069);
        internal_counters.push_back(18188);
        internal_counters.push_back(18307);
        internal_counters.push_back(18426);
        internal_counters.push_back(18545);
        internal_counters.push_back(18664);
        internal_counters.push_back(18783);
        internal_counters.push_back(18902);
        internal_counters.push_back(19021);
        internal_counters.push_back(19140);
        internal_counters.push_back(19259);
        internal_counters.push_back(19378);
        internal_counters.push_back(19497);
        internal_counters.push_back(19616);
        internal_counters.push_back(19735);
        internal_counters.push_back(19854);
        internal_counters.push_back(19973);
        internal_counters.push_back(20092);
        internal_counters.push_back(20211);
        internal_counters.push_back(20330);
        internal_counters.push_back(20449);
        internal_counters.push_back(20568);
        internal_counters.push_back(20687);
        internal_counters.push_back(20806);
        internal_counters.push_back(20925);
        internal_counters.push_back(21044);
        internal_counters.push_back(21163);
        internal_counters.push_back(21282);
        internal_counters.push_back(21401);
        internal_counters.push_back(21520);
        internal_counters.push_back(21639);
        internal_counters.push_back(21758);
        internal_counters.push_back(21877);
        internal_counters.push_back(21996);
        internal_counters.push_back(22115);
        internal_counters.push_back(22234);
        internal_counters.push_back(22353);
        internal_counters.push_back(22472);
        internal_counters.push_back(22591);
        internal_counters.push_back(22710);
        internal_counters.push_back(22829);
        internal_counters.push_back(22948);
        internal_counters.push_back(23067);
        internal_counters.push_back(23186);
        internal_counters.push_back(23305);
        internal_counters.push_back(23424);
        internal_counters.push_back(23543);
        internal_counters.push_back(23662);
        internal_counters.push_back(23781);
        internal_counters.push_back(23900);
        internal_counters.push_back(24019);
        internal_counters.push_back(24138);
        internal_counters.push_back(24257);
        internal_counters.push_back(24376);
        internal_counters.push_back(24495);
        internal_counters.push_back(24614);
        internal_counters.push_back(24733);
        internal_counters.push_back(24852);
        internal_counters.push_back(24971);
        internal_counters.push_back(25090);
        internal_counters.push_back(25209);

        c.DefineDerivedCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17713);
        internal_counters.push_back(17832);
        internal_counters.push_back(17951);
        internal_counters.push_back(18070);
        internal_counters.push_back(18189);
        internal_counters.push_back(18308);
        internal_counters.push_back(18427);
        internal_counters.push_back(18546);
        internal_counters.push_back(18665);
        internal_counters.push_back(18784);
        internal_counters.push_back(18903);
        internal_counters.push_back(19022);
        internal_counters.push_back(19141);
        internal_counters.push_back(19260);
        internal_counters.push_back(19379);
        internal_counters.push_back(19498);
        internal_counters.push_back(19617);
        internal_counters.push_back(19736);
        internal_counters.push_back(19855);
        internal_counters.push_back(19974);
        internal_counters.push_back(20093);
        internal_counters.push_back(20212);
        internal_counters.push_back(20331);
        internal_counters.push_back(20450);
        internal_counters.push_back(20569);
        internal_counters.push_back(20688);
        internal_counters.push_back(20807);
        internal_counters.push_back(20926);
        internal_counters.push_back(21045);
        internal_counters.push_back(21164);
        internal_counters.push_back(21283);
        internal_counters.push_back(21402);
        internal_counters.push_back(21521);
        internal_counters.push_back(21640);
        internal_counters.push_back(21759);
        internal_counters.push_back(21878);
        internal_counters.push_back(21997);
        internal_counters.push_back(22116);
        internal_counters.push_back(22235);
        internal_counters.push_back(22354);
        internal_counters.push_back(22473);
        internal_counters.push_back(22592);
        internal_counters.push_back(22711);
        internal_counters.push_back(22830);
        internal_counters.push_back(22949);
        internal_counters.push_back(23068);
        internal_counters.push_back(23187);
        internal_counters.push_back(23306);
        internal_counters.push_back(23425);
        internal_counters.push_back(23544);
        internal_counters.push_back(23663);
        internal_counters.push_back(23782);
        internal_counters.push_back(23901);
        internal_counters.push_back(24020);
        internal_counters.push_back(24139);
        internal_counters.push_back(24258);
        internal_counters.push_back(24377);
        internal_counters.push_back(24496);
        internal_counters.push_back(24615);
        internal_counters.push_back(24734);
        internal_counters.push_back(24853);
        internal_counters.push_back(24972);
        internal_counters.push_back(25091);
        internal_counters.push_back(25210);

        c.DefineDerivedCounter("TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "5785b3a1-a513-18db-4b1c-bdeef75bb2b6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17712);
        internal_counters.push_back(17831);
        internal_counters.push_back(17950);
        internal_counters.push_back(18069);
        internal_counters.push_back(18188);
        internal_counters.push_back(18307);
        internal_counters.push_back(18426);
        internal_counters.push_back(18545);
        internal_counters.push_back(18664);
        internal_counters.push_back(18783);
        internal_counters.push_back(18902);
        internal_counters.push_back(19021);
        internal_counters.push_back(19140);
        internal_counters.push_back(19259);
        internal_counters.push_back(19378);
        internal_counters.push_back(19497);
        internal_counters.push_back(19616);
        internal_counters.push_back(19735);
        internal_counters.push_back(19854);
        internal_counters.push_back(19973);
        internal_counters.push_back(20092);
        internal_counters.push_back(20211);
        internal_counters.push_back(20330);
        internal_counters.push_back(20449);
        internal_counters.push_back(20568);
        internal_counters.push_back(20687);
        internal_counters.push_back(20806);
        internal_counters.push_back(20925);
        internal_counters.push_back(21044);
        internal_counters.push_back(21163);
        internal_counters.push_back(21282);
        internal_counters.push_back(21401);
        internal_counters.push_back(21520);
        internal_counters.push_back(21639);
        internal_counters.push_back(21758);
        internal_counters.push_back(21877);
        internal_counters.push_back(21996);
        internal_counters.push_back(22115);
        internal_counters.push_back(22234);
        internal_counters.push_back(22353);
        internal_counters.push_back(22472);
        internal_counters.push_back(22591);
        internal_counters.push_back(22710);
        internal_counters.push_back(22829);
        internal_counters.push_back(22948);
        internal_counters.push_back(23067);
        internal_counters.push_back(23186);
        internal_counters.push_back(23305);
        internal_counters.push_back(23424);
        internal_counters.push_back(23543);
        internal_counters.push_back(23662);
        internal_counters.push_back(23781);
        internal_counters.push_back(23900);
        internal_counters.push_back(24019);
        internal_counters.push_back(24138);
        internal_counters.push_back(24257);
        internal_counters.push_back(24376);
        internal_counters.push_back(24495);
        internal_counters.push_back(24614);
        internal_counters.push_back(24733);
        internal_counters.push_back(24852);
        internal_counters.push_back(24971);
        internal_counters.push_back(25090);
        internal_counters.push_back(25209);

        c.DefineDerivedCounter("NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "179da29a-81af-c06e-ce8c-a0a731ea030d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17715);
        internal_counters.push_back(17834);
        internal_counters.push_back(17953);
        internal_counters.push_back(18072);
        internal_counters.push_back(18191);
        internal_counters.push_back(18310);
        internal_counters.push_back(18429);
        internal_counters.push_back(18548);
        internal_counters.push_back(18667);
        internal_counters.push_back(18786);
        internal_counters.push_back(18905);
        internal_counters.push_back(19024);
        internal_counters.push_back(19143);
        internal_counters.push_back(19262);
        internal_counters.push_back(19381);
        internal_counters.push_back(19500);
        internal_counters.push_back(19619);
        internal_counters.push_back(19738);
        internal_counters.push_back(19857);
        internal_counters.push_back(19976);
        internal_counters.push_back(20095);
        internal_counters.push_back(20214);
        internal_counters.push_back(20333);
        internal_counters.push_back(20452);
        internal_counters.push_back(20571);
        internal_counters.push_back(20690);
        internal_counters.push_back(20809);
        internal_counters.push_back(20928);
        internal_counters.push_back(21047);
        internal_counters.push_back(21166);
        internal_counters.push_back(21285);
        internal_counters.push_back(21404);
        internal_counters.push_back(21523);
        internal_counters.push_back(21642);
        internal_counters.push_back(21761);
        internal_counters.push_back(21880);
        internal_counters.push_back(21999);
        internal_counters.push_back(22118);
        internal_counters.push_back(22237);
        internal_counters.push_back(22356);
        internal_counters.push_back(22475);
        internal_counters.push_back(22594);
        internal_counters.push_back(22713);
        internal_counters.push_back(22832);
        internal_counters.push_back(22951);
        internal_counters.push_back(23070);
        internal_counters.push_back(23189);
        internal_counters.push_back(23308);
        internal_counters.push_back(23427);
        internal_counters.push_back(23546);
        internal_counters.push_back(23665);
        internal_counters.push_back(23784);
        internal_counters.push_back(23903);
        internal_counters.push_back(24022);
        internal_counters.push_back(24141);
        internal_counters.push_back(24260);
        internal_counters.push_back(24379);
        internal_counters.push_back(24498);
        internal_counters.push_back(24617);
        internal_counters.push_back(24736);
        internal_counters.push_back(24855);
        internal_counters.push_back(24974);
        internal_counters.push_back(25093);
        internal_counters.push_back(25212);
        internal_counters.push_back(17714);
        internal_counters.push_back(17833);
        internal_counters.push_back(17952);
        internal_counters.push_back(18071);
        internal_counters.push_back(18190);
        internal_counters.push_back(18309);
        internal_counters.push_back(18428);
        internal_counters.push_back(18547);
        internal_counters.push_back(18666);
        internal_counters.push_back(18785);
        internal_counters.push_back(18904);
        internal_counters.push_back(19023);
        internal_counters.push_back(19142);
        internal_counters.push_back(19261);
        internal_counters.push_back(19380);
        internal_counters.push_back(19499);
        internal_counters.push_back(19618);
        internal_counters.push_back(19737);
        internal_counters.push_back(19856);
        internal_counters.push_back(19975);
        internal_counters.push_back(20094);
        internal_counters.push_back(20213);
        internal_counters.push_back(20332);
        internal_counters.push_back(20451);
        internal_counters.push_back(20570);
        internal_counters.push_back(20689);
        internal_counters.push_back(20808);
        internal_counters.push_back(20927);
        internal_counters.push_back(21046);
        internal_counters.push_back(21165);
        internal_counters.push_back(21284);
        internal_counters.push_back(21403);
        internal_counters.push_back(21522);
        internal_counters.push_back(21641);
        internal_counters.push_back(21760);
        internal_counters.push_back(21879);
        internal_counters.push_back(21998);
        internal_counters.push_back(22117);
        internal_counters.push_back(22236);
        internal_counters.push_back(22355);
        internal_counters.push_back(22474);
        internal_counters.push_back(22593);
        internal_counters.push_back(22712);
        internal_counters.push_back(22831);
        internal_counters.push_back(22950);
        internal_counters.push_back(23069);
        internal_counters.push_back(23188);
        internal_counters.push_back(23307);
        internal_counters.push_back(23426);
        internal_counters.push_back(23545);
        internal_counters.push_back(23664);
        internal_counters.push_back(23783);
        internal_counters.push_back(23902);
        internal_counters.push_back(24021);
        internal_counters.push_back(24140);
        internal_counters.push_back(24259);
        internal_counters.push_back(24378);
        internal_counters.push_back(24497);
        internal_counters.push_back(24616);
        internal_counters.push_back(24735);
        internal_counters.push_back(24854);
        internal_counters.push_back(24973);
        internal_counters.push_back(25092);
        internal_counters.push_back(25211);

        c.DefineDerivedCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17715);
        internal_counters.push_back(17834);
        internal_counters.push_back(17953);
        internal_counters.push_back(18072);
        internal_counters.push_back(18191);
        internal_counters.push_back(18310);
        internal_counters.push_back(18429);
        internal_counters.push_back(18548);
        internal_counters.push_back(18667);
        internal_counters.push_back(18786);
        internal_counters.push_back(18905);
        internal_counters.push_back(19024);
        internal_counters.push_back(19143);
        internal_counters.push_back(19262);
        internal_counters.push_back(19381);
        internal_counters.push_back(19500);
        internal_counters.push_back(19619);
        internal_counters.push_back(19738);
        internal_counters.push_back(19857);
        internal_counters.push_back(19976);
        internal_counters.push_back(20095);
        internal_counters.push_back(20214);
        internal_counters.push_back(20333);
        internal_counters.push_back(20452);
        internal_counters.push_back(20571);
        internal_counters.push_back(20690);
        internal_counters.push_back(20809);
        internal_counters.push_back(20928);
        internal_counters.push_back(21047);
        internal_counters.push_back(21166);
        internal_counters.push_back(21285);
        internal_counters.push_back(21404);
        internal_counters.push_back(21523);
        internal_counters.push_back(21642);
        internal_counters.push_back(21761);
        internal_counters.push_back(21880);
        internal_counters.push_back(21999);
        internal_counters.push_back(22118);
        internal_counters.push_back(22237);
        internal_counters.push_back(22356);
        internal_counters.push_back(22475);
        internal_counters.push_back(22594);
        internal_counters.push_back(22713);
        internal_counters.push_back(22832);
        internal_counters.push_back(22951);
        internal_counters.push_back(23070);
        internal_counters.push_back(23189);
        internal_counters.push_back(23308);
        internal_counters.push_back(23427);
        internal_counters.push_back(23546);
        internal_counters.push_back(23665);
        internal_counters.push_back(23784);
        internal_counters.push_back(23903);
        internal_counters.push_back(24022);
        internal_counters.push_back(24141);
        internal_counters.push_back(24260);
        internal_counters.push_back(24379);
        internal_counters.push_back(24498);
        internal_counters.push_back(24617);
        internal_counters.push_back(24736);
        internal_counters.push_back(24855);
        internal_counters.push_back(24974);
        internal_counters.push_back(25093);
        internal_counters.push_back(25212);

        c.DefineDerivedCounter("TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "4bddc587-d589-8128-e18c-762eab2c871f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17714);
        internal_counters.push_back(17833);
        internal_counters.push_back(17952);
        internal_counters.push_back(18071);
        internal_counters.push_back(18190);
        internal_counters.push_back(18309);
        internal_counters.push_back(18428);
        internal_counters.push_back(18547);
        internal_counters.push_back(18666);
        internal_counters.push_back(18785);
        internal_counters.push_back(18904);
        internal_counters.push_back(19023);
        internal_counters.push_back(19142);
        internal_counters.push_back(19261);
        internal_counters.push_back(19380);
        internal_counters.push_back(19499);
        internal_counters.push_back(19618);
        internal_counters.push_back(19737);
        internal_counters.push_back(19856);
        internal_counters.push_back(19975);
        internal_counters.push_back(20094);
        internal_counters.push_back(20213);
        internal_counters.push_back(20332);
        internal_counters.push_back(20451);
        internal_counters.push_back(20570);
        internal_counters.push_back(20689);
        internal_counters.push_back(20808);
        internal_counters.push_back(20927);
        internal_counters.push_back(21046);
        internal_counters.push_back(21165);
        internal_counters.push_back(21284);
        internal_counters.push_back(21403);
        internal_counters.push_back(21522);
        internal_counters.push_back(21641);
        internal_counters.push_back(21760);
        internal_counters.push_back(21879);
        internal_counters.push_back(21998);
        internal_counters.push_back(22117);
        internal_counters.push_back(22236);
        internal_counters.push_back(22355);
        internal_counters.push_back(22474);
        internal_counters.push_back(22593);
        internal_counters.push_back(22712);
        internal_counters.push_back(22831);
        internal_counters.push_back(22950);
        internal_counters.push_back(23069);
        internal_counters.push_back(23188);
        internal_counters.push_back(23307);
        internal_counters.push_back(23426);
        internal_counters.push_back(23545);
        internal_counters.push_back(23664);
        internal_counters.push_back(23783);
        internal_counters.push_back(23902);
        internal_counters.push_back(24021);
        internal_counters.push_back(24140);
        internal_counters.push_back(24259);
        internal_counters.push_back(24378);
        internal_counters.push_back(24497);
        internal_counters.push_back(24616);
        internal_counters.push_back(24735);
        internal_counters.push_back(24854);
        internal_counters.push_back(24973);
        internal_counters.push_back(25092);
        internal_counters.push_back(25211);

        c.DefineDerivedCounter("NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "9fe1a854-17c6-9d26-b2b9-80610cd5827d");
    }
    {
        vector<GpaUInt32> internal_counters;
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
        internal_counters.push_back(21065);
        internal_counters.push_back(21184);
        internal_counters.push_back(21303);
        internal_counters.push_back(21422);
        internal_counters.push_back(21541);
        internal_counters.push_back(21660);
        internal_counters.push_back(21779);
        internal_counters.push_back(21898);
        internal_counters.push_back(22017);
        internal_counters.push_back(22136);
        internal_counters.push_back(22255);
        internal_counters.push_back(22374);
        internal_counters.push_back(22493);
        internal_counters.push_back(22612);
        internal_counters.push_back(22731);
        internal_counters.push_back(22850);
        internal_counters.push_back(22969);
        internal_counters.push_back(23088);
        internal_counters.push_back(23207);
        internal_counters.push_back(23326);
        internal_counters.push_back(23445);
        internal_counters.push_back(23564);
        internal_counters.push_back(23683);
        internal_counters.push_back(23802);
        internal_counters.push_back(23921);
        internal_counters.push_back(24040);
        internal_counters.push_back(24159);
        internal_counters.push_back(24278);
        internal_counters.push_back(24397);
        internal_counters.push_back(24516);
        internal_counters.push_back(24635);
        internal_counters.push_back(24754);
        internal_counters.push_back(24873);
        internal_counters.push_back(24992);
        internal_counters.push_back(25111);
        internal_counters.push_back(25230);
        internal_counters.push_back(17734);
        internal_counters.push_back(17853);
        internal_counters.push_back(17972);
        internal_counters.push_back(18091);
        internal_counters.push_back(18210);
        internal_counters.push_back(18329);
        internal_counters.push_back(18448);
        internal_counters.push_back(18567);
        internal_counters.push_back(18686);
        internal_counters.push_back(18805);
        internal_counters.push_back(18924);
        internal_counters.push_back(19043);
        internal_counters.push_back(19162);
        internal_counters.push_back(19281);
        internal_counters.push_back(19400);
        internal_counters.push_back(19519);
        internal_counters.push_back(19638);
        internal_counters.push_back(19757);
        internal_counters.push_back(19876);
        internal_counters.push_back(19995);
        internal_counters.push_back(20114);
        internal_counters.push_back(20233);
        internal_counters.push_back(20352);
        internal_counters.push_back(20471);
        internal_counters.push_back(20590);
        internal_counters.push_back(20709);
        internal_counters.push_back(20828);
        internal_counters.push_back(20947);
        internal_counters.push_back(21066);
        internal_counters.push_back(21185);
        internal_counters.push_back(21304);
        internal_counters.push_back(21423);
        internal_counters.push_back(21542);
        internal_counters.push_back(21661);
        internal_counters.push_back(21780);
        internal_counters.push_back(21899);
        internal_counters.push_back(22018);
        internal_counters.push_back(22137);
        internal_counters.push_back(22256);
        internal_counters.push_back(22375);
        internal_counters.push_back(22494);
        internal_counters.push_back(22613);
        internal_counters.push_back(22732);
        internal_counters.push_back(22851);
        internal_counters.push_back(22970);
        internal_counters.push_back(23089);
        internal_counters.push_back(23208);
        internal_counters.push_back(23327);
        internal_counters.push_back(23446);
        internal_counters.push_back(23565);
        internal_counters.push_back(23684);
        internal_counters.push_back(23803);
        internal_counters.push_back(23922);
        internal_counters.push_back(24041);
        internal_counters.push_back(24160);
        internal_counters.push_back(24279);
        internal_counters.push_back(24398);
        internal_counters.push_back(24517);
        internal_counters.push_back(24636);
        internal_counters.push_back(24755);
        internal_counters.push_back(24874);
        internal_counters.push_back(24993);
        internal_counters.push_back(25112);
        internal_counters.push_back(25231);
        internal_counters.push_back(17735);
        internal_counters.push_back(17854);
        internal_counters.push_back(17973);
        internal_counters.push_back(18092);
        internal_counters.push_back(18211);
        internal_counters.push_back(18330);
        internal_counters.push_back(18449);
        internal_counters.push_back(18568);
        internal_counters.push_back(18687);
        internal_counters.push_back(18806);
        internal_counters.push_back(18925);
        internal_counters.push_back(19044);
        internal_counters.push_back(19163);
        internal_counters.push_back(19282);
        internal_counters.push_back(19401);
        internal_counters.push_back(19520);
        internal_counters.push_back(19639);
        internal_counters.push_back(19758);
        internal_counters.push_back(19877);
        internal_counters.push_back(19996);
        internal_counters.push_back(20115);
        internal_counters.push_back(20234);
        internal_counters.push_back(20353);
        internal_counters.push_back(20472);
        internal_counters.push_back(20591);
        internal_counters.push_back(20710);
        internal_counters.push_back(20829);
        internal_counters.push_back(20948);
        internal_counters.push_back(21067);
        internal_counters.push_back(21186);
        internal_counters.push_back(21305);
        internal_counters.push_back(21424);
        internal_counters.push_back(21543);
        internal_counters.push_back(21662);
        internal_counters.push_back(21781);
        internal_counters.push_back(21900);
        internal_counters.push_back(22019);
        internal_counters.push_back(22138);
        internal_counters.push_back(22257);
        internal_counters.push_back(22376);
        internal_counters.push_back(22495);
        internal_counters.push_back(22614);
        internal_counters.push_back(22733);
        internal_counters.push_back(22852);
        internal_counters.push_back(22971);
        internal_counters.push_back(23090);
        internal_counters.push_back(23209);
        internal_counters.push_back(23328);
        internal_counters.push_back(23447);
        internal_counters.push_back(23566);
        internal_counters.push_back(23685);
        internal_counters.push_back(23804);
        internal_counters.push_back(23923);
        internal_counters.push_back(24042);
        internal_counters.push_back(24161);
        internal_counters.push_back(24280);
        internal_counters.push_back(24399);
        internal_counters.push_back(24518);
        internal_counters.push_back(24637);
        internal_counters.push_back(24756);
        internal_counters.push_back(24875);
        internal_counters.push_back(24994);
        internal_counters.push_back(25113);
        internal_counters.push_back(25232);
        internal_counters.push_back(17736);
        internal_counters.push_back(17855);
        internal_counters.push_back(17974);
        internal_counters.push_back(18093);
        internal_counters.push_back(18212);
        internal_counters.push_back(18331);
        internal_counters.push_back(18450);
        internal_counters.push_back(18569);
        internal_counters.push_back(18688);
        internal_counters.push_back(18807);
        internal_counters.push_back(18926);
        internal_counters.push_back(19045);
        internal_counters.push_back(19164);
        internal_counters.push_back(19283);
        internal_counters.push_back(19402);
        internal_counters.push_back(19521);
        internal_counters.push_back(19640);
        internal_counters.push_back(19759);
        internal_counters.push_back(19878);
        internal_counters.push_back(19997);
        internal_counters.push_back(20116);
        internal_counters.push_back(20235);
        internal_counters.push_back(20354);
        internal_counters.push_back(20473);
        internal_counters.push_back(20592);
        internal_counters.push_back(20711);
        internal_counters.push_back(20830);
        internal_counters.push_back(20949);
        internal_counters.push_back(21068);
        internal_counters.push_back(21187);
        internal_counters.push_back(21306);
        internal_counters.push_back(21425);
        internal_counters.push_back(21544);
        internal_counters.push_back(21663);
        internal_counters.push_back(21782);
        internal_counters.push_back(21901);
        internal_counters.push_back(22020);
        internal_counters.push_back(22139);
        internal_counters.push_back(22258);
        internal_counters.push_back(22377);
        internal_counters.push_back(22496);
        internal_counters.push_back(22615);
        internal_counters.push_back(22734);
        internal_counters.push_back(22853);
        internal_counters.push_back(22972);
        internal_counters.push_back(23091);
        internal_counters.push_back(23210);
        internal_counters.push_back(23329);
        internal_counters.push_back(23448);
        internal_counters.push_back(23567);
        internal_counters.push_back(23686);
        internal_counters.push_back(23805);
        internal_counters.push_back(23924);
        internal_counters.push_back(24043);
        internal_counters.push_back(24162);
        internal_counters.push_back(24281);
        internal_counters.push_back(24400);
        internal_counters.push_back(24519);
        internal_counters.push_back(24638);
        internal_counters.push_back(24757);
        internal_counters.push_back(24876);
        internal_counters.push_back(24995);
        internal_counters.push_back(25114);
        internal_counters.push_back(25233);
        internal_counters.push_back(17737);
        internal_counters.push_back(17856);
        internal_counters.push_back(17975);
        internal_counters.push_back(18094);
        internal_counters.push_back(18213);
        internal_counters.push_back(18332);
        internal_counters.push_back(18451);
        internal_counters.push_back(18570);
        internal_counters.push_back(18689);
        internal_counters.push_back(18808);
        internal_counters.push_back(18927);
        internal_counters.push_back(19046);
        internal_counters.push_back(19165);
        internal_counters.push_back(19284);
        internal_counters.push_back(19403);
        internal_counters.push_back(19522);
        internal_counters.push_back(19641);
        internal_counters.push_back(19760);
        internal_counters.push_back(19879);
        internal_counters.push_back(19998);
        internal_counters.push_back(20117);
        internal_counters.push_back(20236);
        internal_counters.push_back(20355);
        internal_counters.push_back(20474);
        internal_counters.push_back(20593);
        internal_counters.push_back(20712);
        internal_counters.push_back(20831);
        internal_counters.push_back(20950);
        internal_counters.push_back(21069);
        internal_counters.push_back(21188);
        internal_counters.push_back(21307);
        internal_counters.push_back(21426);
        internal_counters.push_back(21545);
        internal_counters.push_back(21664);
        internal_counters.push_back(21783);
        internal_counters.push_back(21902);
        internal_counters.push_back(22021);
        internal_counters.push_back(22140);
        internal_counters.push_back(22259);
        internal_counters.push_back(22378);
        internal_counters.push_back(22497);
        internal_counters.push_back(22616);
        internal_counters.push_back(22735);
        internal_counters.push_back(22854);
        internal_counters.push_back(22973);
        internal_counters.push_back(23092);
        internal_counters.push_back(23211);
        internal_counters.push_back(23330);
        internal_counters.push_back(23449);
        internal_counters.push_back(23568);
        internal_counters.push_back(23687);
        internal_counters.push_back(23806);
        internal_counters.push_back(23925);
        internal_counters.push_back(24044);
        internal_counters.push_back(24163);
        internal_counters.push_back(24282);
        internal_counters.push_back(24401);
        internal_counters.push_back(24520);
        internal_counters.push_back(24639);
        internal_counters.push_back(24758);
        internal_counters.push_back(24877);
        internal_counters.push_back(24996);
        internal_counters.push_back(25115);
        internal_counters.push_back(25234);
        internal_counters.push_back(17738);
        internal_counters.push_back(17857);
        internal_counters.push_back(17976);
        internal_counters.push_back(18095);
        internal_counters.push_back(18214);
        internal_counters.push_back(18333);
        internal_counters.push_back(18452);
        internal_counters.push_back(18571);
        internal_counters.push_back(18690);
        internal_counters.push_back(18809);
        internal_counters.push_back(18928);
        internal_counters.push_back(19047);
        internal_counters.push_back(19166);
        internal_counters.push_back(19285);
        internal_counters.push_back(19404);
        internal_counters.push_back(19523);
        internal_counters.push_back(19642);
        internal_counters.push_back(19761);
        internal_counters.push_back(19880);
        internal_counters.push_back(19999);
        internal_counters.push_back(20118);
        internal_counters.push_back(20237);
        internal_counters.push_back(20356);
        internal_counters.push_back(20475);
        internal_counters.push_back(20594);
        internal_counters.push_back(20713);
        internal_counters.push_back(20832);
        internal_counters.push_back(20951);
        internal_counters.push_back(21070);
        internal_counters.push_back(21189);
        internal_counters.push_back(21308);
        internal_counters.push_back(21427);
        internal_counters.push_back(21546);
        internal_counters.push_back(21665);
        internal_counters.push_back(21784);
        internal_counters.push_back(21903);
        internal_counters.push_back(22022);
        internal_counters.push_back(22141);
        internal_counters.push_back(22260);
        internal_counters.push_back(22379);
        internal_counters.push_back(22498);
        internal_counters.push_back(22617);
        internal_counters.push_back(22736);
        internal_counters.push_back(22855);
        internal_counters.push_back(22974);
        internal_counters.push_back(23093);
        internal_counters.push_back(23212);
        internal_counters.push_back(23331);
        internal_counters.push_back(23450);
        internal_counters.push_back(23569);
        internal_counters.push_back(23688);
        internal_counters.push_back(23807);
        internal_counters.push_back(23926);
        internal_counters.push_back(24045);
        internal_counters.push_back(24164);
        internal_counters.push_back(24283);
        internal_counters.push_back(24402);
        internal_counters.push_back(24521);
        internal_counters.push_back(24640);
        internal_counters.push_back(24759);
        internal_counters.push_back(24878);
        internal_counters.push_back(24997);
        internal_counters.push_back(25116);
        internal_counters.push_back(25235);
        internal_counters.push_back(17739);
        internal_counters.push_back(17858);
        internal_counters.push_back(17977);
        internal_counters.push_back(18096);
        internal_counters.push_back(18215);
        internal_counters.push_back(18334);
        internal_counters.push_back(18453);
        internal_counters.push_back(18572);
        internal_counters.push_back(18691);
        internal_counters.push_back(18810);
        internal_counters.push_back(18929);
        internal_counters.push_back(19048);
        internal_counters.push_back(19167);
        internal_counters.push_back(19286);
        internal_counters.push_back(19405);
        internal_counters.push_back(19524);
        internal_counters.push_back(19643);
        internal_counters.push_back(19762);
        internal_counters.push_back(19881);
        internal_counters.push_back(20000);
        internal_counters.push_back(20119);
        internal_counters.push_back(20238);
        internal_counters.push_back(20357);
        internal_counters.push_back(20476);
        internal_counters.push_back(20595);
        internal_counters.push_back(20714);
        internal_counters.push_back(20833);
        internal_counters.push_back(20952);
        internal_counters.push_back(21071);
        internal_counters.push_back(21190);
        internal_counters.push_back(21309);
        internal_counters.push_back(21428);
        internal_counters.push_back(21547);
        internal_counters.push_back(21666);
        internal_counters.push_back(21785);
        internal_counters.push_back(21904);
        internal_counters.push_back(22023);
        internal_counters.push_back(22142);
        internal_counters.push_back(22261);
        internal_counters.push_back(22380);
        internal_counters.push_back(22499);
        internal_counters.push_back(22618);
        internal_counters.push_back(22737);
        internal_counters.push_back(22856);
        internal_counters.push_back(22975);
        internal_counters.push_back(23094);
        internal_counters.push_back(23213);
        internal_counters.push_back(23332);
        internal_counters.push_back(23451);
        internal_counters.push_back(23570);
        internal_counters.push_back(23689);
        internal_counters.push_back(23808);
        internal_counters.push_back(23927);
        internal_counters.push_back(24046);
        internal_counters.push_back(24165);
        internal_counters.push_back(24284);
        internal_counters.push_back(24403);
        internal_counters.push_back(24522);
        internal_counters.push_back(24641);
        internal_counters.push_back(24760);
        internal_counters.push_back(24879);
        internal_counters.push_back(24998);
        internal_counters.push_back(25117);
        internal_counters.push_back(25236);
        internal_counters.push_back(17740);
        internal_counters.push_back(17859);
        internal_counters.push_back(17978);
        internal_counters.push_back(18097);
        internal_counters.push_back(18216);
        internal_counters.push_back(18335);
        internal_counters.push_back(18454);
        internal_counters.push_back(18573);
        internal_counters.push_back(18692);
        internal_counters.push_back(18811);
        internal_counters.push_back(18930);
        internal_counters.push_back(19049);
        internal_counters.push_back(19168);
        internal_counters.push_back(19287);
        internal_counters.push_back(19406);
        internal_counters.push_back(19525);
        internal_counters.push_back(19644);
        internal_counters.push_back(19763);
        internal_counters.push_back(19882);
        internal_counters.push_back(20001);
        internal_counters.push_back(20120);
        internal_counters.push_back(20239);
        internal_counters.push_back(20358);
        internal_counters.push_back(20477);
        internal_counters.push_back(20596);
        internal_counters.push_back(20715);
        internal_counters.push_back(20834);
        internal_counters.push_back(20953);
        internal_counters.push_back(21072);
        internal_counters.push_back(21191);
        internal_counters.push_back(21310);
        internal_counters.push_back(21429);
        internal_counters.push_back(21548);
        internal_counters.push_back(21667);
        internal_counters.push_back(21786);
        internal_counters.push_back(21905);
        internal_counters.push_back(22024);
        internal_counters.push_back(22143);
        internal_counters.push_back(22262);
        internal_counters.push_back(22381);
        internal_counters.push_back(22500);
        internal_counters.push_back(22619);
        internal_counters.push_back(22738);
        internal_counters.push_back(22857);
        internal_counters.push_back(22976);
        internal_counters.push_back(23095);
        internal_counters.push_back(23214);
        internal_counters.push_back(23333);
        internal_counters.push_back(23452);
        internal_counters.push_back(23571);
        internal_counters.push_back(23690);
        internal_counters.push_back(23809);
        internal_counters.push_back(23928);
        internal_counters.push_back(24047);
        internal_counters.push_back(24166);
        internal_counters.push_back(24285);
        internal_counters.push_back(24404);
        internal_counters.push_back(24523);
        internal_counters.push_back(24642);
        internal_counters.push_back(24761);
        internal_counters.push_back(24880);
        internal_counters.push_back(24999);
        internal_counters.push_back(25118);
        internal_counters.push_back(25237);
        internal_counters.push_back(17741);
        internal_counters.push_back(17860);
        internal_counters.push_back(17979);
        internal_counters.push_back(18098);
        internal_counters.push_back(18217);
        internal_counters.push_back(18336);
        internal_counters.push_back(18455);
        internal_counters.push_back(18574);
        internal_counters.push_back(18693);
        internal_counters.push_back(18812);
        internal_counters.push_back(18931);
        internal_counters.push_back(19050);
        internal_counters.push_back(19169);
        internal_counters.push_back(19288);
        internal_counters.push_back(19407);
        internal_counters.push_back(19526);
        internal_counters.push_back(19645);
        internal_counters.push_back(19764);
        internal_counters.push_back(19883);
        internal_counters.push_back(20002);
        internal_counters.push_back(20121);
        internal_counters.push_back(20240);
        internal_counters.push_back(20359);
        internal_counters.push_back(20478);
        internal_counters.push_back(20597);
        internal_counters.push_back(20716);
        internal_counters.push_back(20835);
        internal_counters.push_back(20954);
        internal_counters.push_back(21073);
        internal_counters.push_back(21192);
        internal_counters.push_back(21311);
        internal_counters.push_back(21430);
        internal_counters.push_back(21549);
        internal_counters.push_back(21668);
        internal_counters.push_back(21787);
        internal_counters.push_back(21906);
        internal_counters.push_back(22025);
        internal_counters.push_back(22144);
        internal_counters.push_back(22263);
        internal_counters.push_back(22382);
        internal_counters.push_back(22501);
        internal_counters.push_back(22620);
        internal_counters.push_back(22739);
        internal_counters.push_back(22858);
        internal_counters.push_back(22977);
        internal_counters.push_back(23096);
        internal_counters.push_back(23215);
        internal_counters.push_back(23334);
        internal_counters.push_back(23453);
        internal_counters.push_back(23572);
        internal_counters.push_back(23691);
        internal_counters.push_back(23810);
        internal_counters.push_back(23929);
        internal_counters.push_back(24048);
        internal_counters.push_back(24167);
        internal_counters.push_back(24286);
        internal_counters.push_back(24405);
        internal_counters.push_back(24524);
        internal_counters.push_back(24643);
        internal_counters.push_back(24762);
        internal_counters.push_back(24881);
        internal_counters.push_back(25000);
        internal_counters.push_back(25119);
        internal_counters.push_back(25238);

        c.DefineDerivedCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(2),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,*,+,(4),128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum64,*,+,(6),192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum64,*,+,(8),256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum64,*,+,(10),320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,sum64,*,+,(12),384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,sum64,*,+,(14),448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,sum64,*,+,(16),512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,sum64,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum64,+,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum64,+,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum64,+,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum64,+,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,sum64,+,384,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,400,401,402,403,404,405,406,407,408,409,410,411,412,413,414,415,416,417,418,419,420,421,422,423,424,425,426,427,428,429,430,431,432,433,434,435,436,437,438,439,440,441,442,443,444,445,446,447,sum64,+,448,449,450,451,452,453,454,455,456,457,458,459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,475,476,477,478,479,480,481,482,483,484,485,486,487,488,489,490,491,492,493,494,495,496,497,498,499,500,501,502,503,504,505,506,507,508,509,510,511,sum64,+,512,513,514,515,516,517,518,519,520,521,522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,538,539,540,541,542,543,544,545,546,547,548,549,550,551,552,553,554,555,556,557,558,559,560,561,562,563,564,565,566,567,568,569,570,571,572,573,574,575,sum64,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39074);
        internal_counters.push_back(39402);
        internal_counters.push_back(39730);
        internal_counters.push_back(40058);
        internal_counters.push_back(40386);
        internal_counters.push_back(40714);
        internal_counters.push_back(41042);
        internal_counters.push_back(41370);
        internal_counters.push_back(41698);
        internal_counters.push_back(42026);
        internal_counters.push_back(42354);
        internal_counters.push_back(42682);
        internal_counters.push_back(43010);
        internal_counters.push_back(43338);
        internal_counters.push_back(43666);
        internal_counters.push_back(43994);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39074);
        internal_counters.push_back(39402);
        internal_counters.push_back(39730);
        internal_counters.push_back(40058);
        internal_counters.push_back(40386);
        internal_counters.push_back(40714);
        internal_counters.push_back(41042);
        internal_counters.push_back(41370);
        internal_counters.push_back(41698);
        internal_counters.push_back(42026);
        internal_counters.push_back(42354);
        internal_counters.push_back(42682);
        internal_counters.push_back(43010);
        internal_counters.push_back(43338);
        internal_counters.push_back(43666);
        internal_counters.push_back(43994);

        c.DefineDerivedCounter("DepthStencilTestBusyCycles", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "07ad48f0-49d8-87e7-1ef5-1e24ff2cef49");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38945);
        internal_counters.push_back(39273);
        internal_counters.push_back(39601);
        internal_counters.push_back(39929);
        internal_counters.push_back(40257);
        internal_counters.push_back(40585);
        internal_counters.push_back(40913);
        internal_counters.push_back(41241);
        internal_counters.push_back(41569);
        internal_counters.push_back(41897);
        internal_counters.push_back(42225);
        internal_counters.push_back(42553);
        internal_counters.push_back(42881);
        internal_counters.push_back(43209);
        internal_counters.push_back(43537);
        internal_counters.push_back(43865);
        internal_counters.push_back(38934);
        internal_counters.push_back(39262);
        internal_counters.push_back(39590);
        internal_counters.push_back(39918);
        internal_counters.push_back(40246);
        internal_counters.push_back(40574);
        internal_counters.push_back(40902);
        internal_counters.push_back(41230);
        internal_counters.push_back(41558);
        internal_counters.push_back(41886);
        internal_counters.push_back(42214);
        internal_counters.push_back(42542);
        internal_counters.push_back(42870);
        internal_counters.push_back(43198);
        internal_counters.push_back(43526);
        internal_counters.push_back(43854);

        c.DefineDerivedCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,-,(0),max,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38934);
        internal_counters.push_back(39262);
        internal_counters.push_back(39590);
        internal_counters.push_back(39918);
        internal_counters.push_back(40246);
        internal_counters.push_back(40574);
        internal_counters.push_back(40902);
        internal_counters.push_back(41230);
        internal_counters.push_back(41558);
        internal_counters.push_back(41886);
        internal_counters.push_back(42214);
        internal_counters.push_back(42542);
        internal_counters.push_back(42870);
        internal_counters.push_back(43198);
        internal_counters.push_back(43526);
        internal_counters.push_back(43854);
        internal_counters.push_back(38945);
        internal_counters.push_back(39273);
        internal_counters.push_back(39601);
        internal_counters.push_back(39929);
        internal_counters.push_back(40257);
        internal_counters.push_back(40585);
        internal_counters.push_back(40913);
        internal_counters.push_back(41241);
        internal_counters.push_back(41569);
        internal_counters.push_back(41897);
        internal_counters.push_back(42225);
        internal_counters.push_back(42553);
        internal_counters.push_back(42881);
        internal_counters.push_back(43209);
        internal_counters.push_back(43537);
        internal_counters.push_back(43865);

        c.DefineDerivedCounter("HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max", "95d4e3f6-b2f0-f26e-8423-aacdfaf79ea3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38945);
        internal_counters.push_back(39273);
        internal_counters.push_back(39601);
        internal_counters.push_back(39929);
        internal_counters.push_back(40257);
        internal_counters.push_back(40585);
        internal_counters.push_back(40913);
        internal_counters.push_back(41241);
        internal_counters.push_back(41569);
        internal_counters.push_back(41897);
        internal_counters.push_back(42225);
        internal_counters.push_back(42553);
        internal_counters.push_back(42881);
        internal_counters.push_back(43209);
        internal_counters.push_back(43537);
        internal_counters.push_back(43865);

        c.DefineDerivedCounter("HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "156ba142-7eeb-aa6e-a00a-f8aea4e41e0b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38934);
        internal_counters.push_back(39262);
        internal_counters.push_back(39590);
        internal_counters.push_back(39918);
        internal_counters.push_back(40246);
        internal_counters.push_back(40574);
        internal_counters.push_back(40902);
        internal_counters.push_back(41230);
        internal_counters.push_back(41558);
        internal_counters.push_back(41886);
        internal_counters.push_back(42214);
        internal_counters.push_back(42542);
        internal_counters.push_back(42870);
        internal_counters.push_back(43198);
        internal_counters.push_back(43526);
        internal_counters.push_back(43854);
        internal_counters.push_back(38958);
        internal_counters.push_back(39286);
        internal_counters.push_back(39614);
        internal_counters.push_back(39942);
        internal_counters.push_back(40270);
        internal_counters.push_back(40598);
        internal_counters.push_back(40926);
        internal_counters.push_back(41254);
        internal_counters.push_back(41582);
        internal_counters.push_back(41910);
        internal_counters.push_back(42238);
        internal_counters.push_back(42566);
        internal_counters.push_back(42894);
        internal_counters.push_back(43222);
        internal_counters.push_back(43550);
        internal_counters.push_back(43878);

        c.DefineDerivedCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38958);
        internal_counters.push_back(39286);
        internal_counters.push_back(39614);
        internal_counters.push_back(39942);
        internal_counters.push_back(40270);
        internal_counters.push_back(40598);
        internal_counters.push_back(40926);
        internal_counters.push_back(41254);
        internal_counters.push_back(41582);
        internal_counters.push_back(41910);
        internal_counters.push_back(42238);
        internal_counters.push_back(42566);
        internal_counters.push_back(42894);
        internal_counters.push_back(43222);
        internal_counters.push_back(43550);
        internal_counters.push_back(43878);

        c.DefineDerivedCounter("PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "49262c8a-b1e6-90dd-f096-0fc4921715e9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38934);
        internal_counters.push_back(39262);
        internal_counters.push_back(39590);
        internal_counters.push_back(39918);
        internal_counters.push_back(40246);
        internal_counters.push_back(40574);
        internal_counters.push_back(40902);
        internal_counters.push_back(41230);
        internal_counters.push_back(41558);
        internal_counters.push_back(41886);
        internal_counters.push_back(42214);
        internal_counters.push_back(42542);
        internal_counters.push_back(42870);
        internal_counters.push_back(43198);
        internal_counters.push_back(43526);
        internal_counters.push_back(43854);

        c.DefineDerivedCounter("PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f803eaa4-bbed-bd39-775f-a64df92e2c08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2251);
        internal_counters.push_back(2743);
        internal_counters.push_back(3235);
        internal_counters.push_back(3727);
        internal_counters.push_back(2252);
        internal_counters.push_back(2744);
        internal_counters.push_back(3236);
        internal_counters.push_back(3728);
        internal_counters.push_back(2253);
        internal_counters.push_back(2745);
        internal_counters.push_back(3237);
        internal_counters.push_back(3729);
        internal_counters.push_back(2254);
        internal_counters.push_back(2746);
        internal_counters.push_back(3238);
        internal_counters.push_back(3730);
        internal_counters.push_back(2327);
        internal_counters.push_back(2819);
        internal_counters.push_back(3311);
        internal_counters.push_back(3803);
        internal_counters.push_back(2328);
        internal_counters.push_back(2820);
        internal_counters.push_back(3312);
        internal_counters.push_back(3804);
        internal_counters.push_back(2329);
        internal_counters.push_back(2821);
        internal_counters.push_back(3313);
        internal_counters.push_back(3805);
        internal_counters.push_back(2330);
        internal_counters.push_back(2822);
        internal_counters.push_back(3314);
        internal_counters.push_back(3806);

        c.DefineDerivedCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2251);
        internal_counters.push_back(2743);
        internal_counters.push_back(3235);
        internal_counters.push_back(3727);
        internal_counters.push_back(2252);
        internal_counters.push_back(2744);
        internal_counters.push_back(3236);
        internal_counters.push_back(3728);
        internal_counters.push_back(2253);
        internal_counters.push_back(2745);
        internal_counters.push_back(3237);
        internal_counters.push_back(3729);
        internal_counters.push_back(2254);
        internal_counters.push_back(2746);
        internal_counters.push_back(3238);
        internal_counters.push_back(3730);
        internal_counters.push_back(2327);
        internal_counters.push_back(2819);
        internal_counters.push_back(3311);
        internal_counters.push_back(3803);
        internal_counters.push_back(2328);
        internal_counters.push_back(2820);
        internal_counters.push_back(3312);
        internal_counters.push_back(3804);
        internal_counters.push_back(2329);
        internal_counters.push_back(2821);
        internal_counters.push_back(3313);
        internal_counters.push_back(3805);
        internal_counters.push_back(2330);
        internal_counters.push_back(2822);
        internal_counters.push_back(3314);
        internal_counters.push_back(3806);

        c.DefineDerivedCounter("HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(0),max", "73b0b39d-6df2-3e24-0b5c-7cb0ac8b6f39");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2327);
        internal_counters.push_back(2819);
        internal_counters.push_back(3311);
        internal_counters.push_back(3803);
        internal_counters.push_back(2328);
        internal_counters.push_back(2820);
        internal_counters.push_back(3312);
        internal_counters.push_back(3804);
        internal_counters.push_back(2329);
        internal_counters.push_back(2821);
        internal_counters.push_back(3313);
        internal_counters.push_back(3805);
        internal_counters.push_back(2330);
        internal_counters.push_back(2822);
        internal_counters.push_back(3314);
        internal_counters.push_back(3806);

        c.DefineDerivedCounter("HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "59049ad9-42b5-c7cb-3616-6a8f6a8e4894");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2327);
        internal_counters.push_back(2819);
        internal_counters.push_back(3311);
        internal_counters.push_back(3803);
        internal_counters.push_back(2328);
        internal_counters.push_back(2820);
        internal_counters.push_back(3312);
        internal_counters.push_back(3804);
        internal_counters.push_back(2329);
        internal_counters.push_back(2821);
        internal_counters.push_back(3313);
        internal_counters.push_back(3805);
        internal_counters.push_back(2330);
        internal_counters.push_back(2822);
        internal_counters.push_back(3314);
        internal_counters.push_back(3806);
        internal_counters.push_back(2351);
        internal_counters.push_back(2843);
        internal_counters.push_back(3335);
        internal_counters.push_back(3827);
        internal_counters.push_back(2251);
        internal_counters.push_back(2743);
        internal_counters.push_back(3235);
        internal_counters.push_back(3727);
        internal_counters.push_back(2252);
        internal_counters.push_back(2744);
        internal_counters.push_back(3236);
        internal_counters.push_back(3728);
        internal_counters.push_back(2253);
        internal_counters.push_back(2745);
        internal_counters.push_back(3237);
        internal_counters.push_back(3729);
        internal_counters.push_back(2254);
        internal_counters.push_back(2746);
        internal_counters.push_back(3238);
        internal_counters.push_back(3730);

        c.DefineDerivedCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,-,(0),max,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2327);
        internal_counters.push_back(2819);
        internal_counters.push_back(3311);
        internal_counters.push_back(3803);
        internal_counters.push_back(2328);
        internal_counters.push_back(2820);
        internal_counters.push_back(3312);
        internal_counters.push_back(3804);
        internal_counters.push_back(2329);
        internal_counters.push_back(2821);
        internal_counters.push_back(3313);
        internal_counters.push_back(3805);
        internal_counters.push_back(2330);
        internal_counters.push_back(2822);
        internal_counters.push_back(3314);
        internal_counters.push_back(3806);
        internal_counters.push_back(2351);
        internal_counters.push_back(2843);
        internal_counters.push_back(3335);
        internal_counters.push_back(3827);

        c.DefineDerivedCounter("PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,-,(0),max", "1bf169e6-9304-834e-df5f-0c44d7890a08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2351);
        internal_counters.push_back(2843);
        internal_counters.push_back(3335);
        internal_counters.push_back(3827);

        c.DefineDerivedCounter("PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "50e25e51-3713-89cb-7f92-559cde5e5532");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2351);
        internal_counters.push_back(2843);
        internal_counters.push_back(3335);
        internal_counters.push_back(3827);
        internal_counters.push_back(2251);
        internal_counters.push_back(2743);
        internal_counters.push_back(3235);
        internal_counters.push_back(3727);
        internal_counters.push_back(2252);
        internal_counters.push_back(2744);
        internal_counters.push_back(3236);
        internal_counters.push_back(3728);
        internal_counters.push_back(2253);
        internal_counters.push_back(2745);
        internal_counters.push_back(3237);
        internal_counters.push_back(3729);
        internal_counters.push_back(2254);
        internal_counters.push_back(2746);
        internal_counters.push_back(3238);
        internal_counters.push_back(3730);

        c.DefineDerivedCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2351);
        internal_counters.push_back(2843);
        internal_counters.push_back(3335);
        internal_counters.push_back(3827);

        c.DefineDerivedCounter("PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,sum4", "08404526-ce35-939b-34c8-a7a35a0ff4d6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39107);
        internal_counters.push_back(39435);
        internal_counters.push_back(39763);
        internal_counters.push_back(40091);
        internal_counters.push_back(40419);
        internal_counters.push_back(40747);
        internal_counters.push_back(41075);
        internal_counters.push_back(41403);
        internal_counters.push_back(41731);
        internal_counters.push_back(42059);
        internal_counters.push_back(42387);
        internal_counters.push_back(42715);
        internal_counters.push_back(43043);
        internal_counters.push_back(43371);
        internal_counters.push_back(43699);
        internal_counters.push_back(44027);

        c.DefineDerivedCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39109);
        internal_counters.push_back(39437);
        internal_counters.push_back(39765);
        internal_counters.push_back(40093);
        internal_counters.push_back(40421);
        internal_counters.push_back(40749);
        internal_counters.push_back(41077);
        internal_counters.push_back(41405);
        internal_counters.push_back(41733);
        internal_counters.push_back(42061);
        internal_counters.push_back(42389);
        internal_counters.push_back(42717);
        internal_counters.push_back(43045);
        internal_counters.push_back(43373);
        internal_counters.push_back(43701);
        internal_counters.push_back(44029);

        c.DefineDerivedCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39108);
        internal_counters.push_back(39436);
        internal_counters.push_back(39764);
        internal_counters.push_back(40092);
        internal_counters.push_back(40420);
        internal_counters.push_back(40748);
        internal_counters.push_back(41076);
        internal_counters.push_back(41404);
        internal_counters.push_back(41732);
        internal_counters.push_back(42060);
        internal_counters.push_back(42388);
        internal_counters.push_back(42716);
        internal_counters.push_back(43044);
        internal_counters.push_back(43372);
        internal_counters.push_back(43700);
        internal_counters.push_back(44028);

        c.DefineDerivedCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39104);
        internal_counters.push_back(39432);
        internal_counters.push_back(39760);
        internal_counters.push_back(40088);
        internal_counters.push_back(40416);
        internal_counters.push_back(40744);
        internal_counters.push_back(41072);
        internal_counters.push_back(41400);
        internal_counters.push_back(41728);
        internal_counters.push_back(42056);
        internal_counters.push_back(42384);
        internal_counters.push_back(42712);
        internal_counters.push_back(43040);
        internal_counters.push_back(43368);
        internal_counters.push_back(43696);
        internal_counters.push_back(44024);

        c.DefineDerivedCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39106);
        internal_counters.push_back(39434);
        internal_counters.push_back(39762);
        internal_counters.push_back(40090);
        internal_counters.push_back(40418);
        internal_counters.push_back(40746);
        internal_counters.push_back(41074);
        internal_counters.push_back(41402);
        internal_counters.push_back(41730);
        internal_counters.push_back(42058);
        internal_counters.push_back(42386);
        internal_counters.push_back(42714);
        internal_counters.push_back(43042);
        internal_counters.push_back(43370);
        internal_counters.push_back(43698);
        internal_counters.push_back(44026);

        c.DefineDerivedCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(39105);
        internal_counters.push_back(39433);
        internal_counters.push_back(39761);
        internal_counters.push_back(40089);
        internal_counters.push_back(40417);
        internal_counters.push_back(40745);
        internal_counters.push_back(41073);
        internal_counters.push_back(41401);
        internal_counters.push_back(41729);
        internal_counters.push_back(42057);
        internal_counters.push_back(42385);
        internal_counters.push_back(42713);
        internal_counters.push_back(43041);
        internal_counters.push_back(43369);
        internal_counters.push_back(43697);
        internal_counters.push_back(44025);

        c.DefineDerivedCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38976);
        internal_counters.push_back(39304);
        internal_counters.push_back(39632);
        internal_counters.push_back(39960);
        internal_counters.push_back(40288);
        internal_counters.push_back(40616);
        internal_counters.push_back(40944);
        internal_counters.push_back(41272);
        internal_counters.push_back(41600);
        internal_counters.push_back(41928);
        internal_counters.push_back(42256);
        internal_counters.push_back(42584);
        internal_counters.push_back(42912);
        internal_counters.push_back(43240);
        internal_counters.push_back(43568);
        internal_counters.push_back(43896);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38976);
        internal_counters.push_back(39304);
        internal_counters.push_back(39632);
        internal_counters.push_back(39960);
        internal_counters.push_back(40288);
        internal_counters.push_back(40616);
        internal_counters.push_back(40944);
        internal_counters.push_back(41272);
        internal_counters.push_back(41600);
        internal_counters.push_back(41928);
        internal_counters.push_back(42256);
        internal_counters.push_back(42584);
        internal_counters.push_back(42912);
        internal_counters.push_back(43240);
        internal_counters.push_back(43568);
        internal_counters.push_back(43896);

        c.DefineDerivedCounter("ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "4351fa7f-6737-2c3e-3ffb-b3addbdceedd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38978);
        internal_counters.push_back(39306);
        internal_counters.push_back(39634);
        internal_counters.push_back(39962);
        internal_counters.push_back(40290);
        internal_counters.push_back(40618);
        internal_counters.push_back(40946);
        internal_counters.push_back(41274);
        internal_counters.push_back(41602);
        internal_counters.push_back(41930);
        internal_counters.push_back(42258);
        internal_counters.push_back(42586);
        internal_counters.push_back(42914);
        internal_counters.push_back(43242);
        internal_counters.push_back(43570);
        internal_counters.push_back(43898);
        internal_counters.push_back(38985);
        internal_counters.push_back(39313);
        internal_counters.push_back(39641);
        internal_counters.push_back(39969);
        internal_counters.push_back(40297);
        internal_counters.push_back(40625);
        internal_counters.push_back(40953);
        internal_counters.push_back(41281);
        internal_counters.push_back(41609);
        internal_counters.push_back(41937);
        internal_counters.push_back(42265);
        internal_counters.push_back(42593);
        internal_counters.push_back(42921);
        internal_counters.push_back(43249);
        internal_counters.push_back(43577);
        internal_counters.push_back(43905);

        c.DefineDerivedCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(256),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(38990);
        internal_counters.push_back(39318);
        internal_counters.push_back(39646);
        internal_counters.push_back(39974);
        internal_counters.push_back(40302);
        internal_counters.push_back(40630);
        internal_counters.push_back(40958);
        internal_counters.push_back(41286);
        internal_counters.push_back(41614);
        internal_counters.push_back(41942);
        internal_counters.push_back(42270);
        internal_counters.push_back(42598);
        internal_counters.push_back(42926);
        internal_counters.push_back(43254);
        internal_counters.push_back(43582);
        internal_counters.push_back(43910);
        internal_counters.push_back(38993);
        internal_counters.push_back(39321);
        internal_counters.push_back(39649);
        internal_counters.push_back(39977);
        internal_counters.push_back(40305);
        internal_counters.push_back(40633);
        internal_counters.push_back(40961);
        internal_counters.push_back(41289);
        internal_counters.push_back(41617);
        internal_counters.push_back(41945);
        internal_counters.push_back(42273);
        internal_counters.push_back(42601);
        internal_counters.push_back(42929);
        internal_counters.push_back(43257);
        internal_counters.push_back(43585);
        internal_counters.push_back(43913);

        c.DefineDerivedCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(44306);
        internal_counters.push_back(44750);
        internal_counters.push_back(45194);
        internal_counters.push_back(45638);
        internal_counters.push_back(46082);
        internal_counters.push_back(46526);
        internal_counters.push_back(46970);
        internal_counters.push_back(47414);
        internal_counters.push_back(47858);
        internal_counters.push_back(48302);
        internal_counters.push_back(48746);
        internal_counters.push_back(49190);
        internal_counters.push_back(49634);
        internal_counters.push_back(50078);
        internal_counters.push_back(50522);
        internal_counters.push_back(50966);

        c.DefineDerivedCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(44437);
        internal_counters.push_back(44881);
        internal_counters.push_back(45325);
        internal_counters.push_back(45769);
        internal_counters.push_back(46213);
        internal_counters.push_back(46657);
        internal_counters.push_back(47101);
        internal_counters.push_back(47545);
        internal_counters.push_back(47989);
        internal_counters.push_back(48433);
        internal_counters.push_back(48877);
        internal_counters.push_back(49321);
        internal_counters.push_back(49765);
        internal_counters.push_back(50209);
        internal_counters.push_back(50653);
        internal_counters.push_back(51097);
        internal_counters.push_back(44304);
        internal_counters.push_back(44748);
        internal_counters.push_back(45192);
        internal_counters.push_back(45636);
        internal_counters.push_back(46080);
        internal_counters.push_back(46524);
        internal_counters.push_back(46968);
        internal_counters.push_back(47412);
        internal_counters.push_back(47856);
        internal_counters.push_back(48300);
        internal_counters.push_back(48744);
        internal_counters.push_back(49188);
        internal_counters.push_back(49632);
        internal_counters.push_back(50076);
        internal_counters.push_back(50520);
        internal_counters.push_back(50964);
        internal_counters.push_back(44305);
        internal_counters.push_back(44749);
        internal_counters.push_back(45193);
        internal_counters.push_back(45637);
        internal_counters.push_back(46081);
        internal_counters.push_back(46525);
        internal_counters.push_back(46969);
        internal_counters.push_back(47413);
        internal_counters.push_back(47857);
        internal_counters.push_back(48301);
        internal_counters.push_back(48745);
        internal_counters.push_back(49189);
        internal_counters.push_back(49633);
        internal_counters.push_back(50077);
        internal_counters.push_back(50521);
        internal_counters.push_back(50965);
        internal_counters.push_back(44306);
        internal_counters.push_back(44750);
        internal_counters.push_back(45194);
        internal_counters.push_back(45638);
        internal_counters.push_back(46082);
        internal_counters.push_back(46526);
        internal_counters.push_back(46970);
        internal_counters.push_back(47414);
        internal_counters.push_back(47858);
        internal_counters.push_back(48302);
        internal_counters.push_back(48746);
        internal_counters.push_back(49190);
        internal_counters.push_back(49634);
        internal_counters.push_back(50078);
        internal_counters.push_back(50522);
        internal_counters.push_back(50966);

        c.DefineDerivedCounter("CBColorAndMaskRead", "ColorBuffer", "Total number of bytes read from the color and mask buffers.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(32),*", "da41660e-eb6f-32ec-8a64-b32ca17bd7eb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(44296);
        internal_counters.push_back(44740);
        internal_counters.push_back(45184);
        internal_counters.push_back(45628);
        internal_counters.push_back(46072);
        internal_counters.push_back(46516);
        internal_counters.push_back(46960);
        internal_counters.push_back(47404);
        internal_counters.push_back(47848);
        internal_counters.push_back(48292);
        internal_counters.push_back(48736);
        internal_counters.push_back(49180);
        internal_counters.push_back(49624);
        internal_counters.push_back(50068);
        internal_counters.push_back(50512);
        internal_counters.push_back(50956);

        c.DefineDerivedCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(44435);
        internal_counters.push_back(44879);
        internal_counters.push_back(45323);
        internal_counters.push_back(45767);
        internal_counters.push_back(46211);
        internal_counters.push_back(46655);
        internal_counters.push_back(47099);
        internal_counters.push_back(47543);
        internal_counters.push_back(47987);
        internal_counters.push_back(48431);
        internal_counters.push_back(48875);
        internal_counters.push_back(49319);
        internal_counters.push_back(49763);
        internal_counters.push_back(50207);
        internal_counters.push_back(50651);
        internal_counters.push_back(51095);
        internal_counters.push_back(44294);
        internal_counters.push_back(44738);
        internal_counters.push_back(45182);
        internal_counters.push_back(45626);
        internal_counters.push_back(46070);
        internal_counters.push_back(46514);
        internal_counters.push_back(46958);
        internal_counters.push_back(47402);
        internal_counters.push_back(47846);
        internal_counters.push_back(48290);
        internal_counters.push_back(48734);
        internal_counters.push_back(49178);
        internal_counters.push_back(49622);
        internal_counters.push_back(50066);
        internal_counters.push_back(50510);
        internal_counters.push_back(50954);
        internal_counters.push_back(44295);
        internal_counters.push_back(44739);
        internal_counters.push_back(45183);
        internal_counters.push_back(45627);
        internal_counters.push_back(46071);
        internal_counters.push_back(46515);
        internal_counters.push_back(46959);
        internal_counters.push_back(47403);
        internal_counters.push_back(47847);
        internal_counters.push_back(48291);
        internal_counters.push_back(48735);
        internal_counters.push_back(49179);
        internal_counters.push_back(49623);
        internal_counters.push_back(50067);
        internal_counters.push_back(50511);
        internal_counters.push_back(50955);
        internal_counters.push_back(44296);
        internal_counters.push_back(44740);
        internal_counters.push_back(45184);
        internal_counters.push_back(45628);
        internal_counters.push_back(46072);
        internal_counters.push_back(46516);
        internal_counters.push_back(46960);
        internal_counters.push_back(47404);
        internal_counters.push_back(47848);
        internal_counters.push_back(48292);
        internal_counters.push_back(48736);
        internal_counters.push_back(49180);
        internal_counters.push_back(49624);
        internal_counters.push_back(50068);
        internal_counters.push_back(50512);
        internal_counters.push_back(50956);

        c.DefineDerivedCounter("CBColorAndMaskWritten", "ColorBuffer", "Total number of bytes written to the color and mask buffers.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,(32),*", "29a04b69-8f5f-b770-a0f2-3453e2c99e49");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(44340);
        internal_counters.push_back(44784);
        internal_counters.push_back(45228);
        internal_counters.push_back(45672);
        internal_counters.push_back(46116);
        internal_counters.push_back(46560);
        internal_counters.push_back(47004);
        internal_counters.push_back(47448);
        internal_counters.push_back(47892);
        internal_counters.push_back(48336);
        internal_counters.push_back(48780);
        internal_counters.push_back(49224);
        internal_counters.push_back(49668);
        internal_counters.push_back(50112);
        internal_counters.push_back(50556);
        internal_counters.push_back(51000);
        internal_counters.push_back(44185);
        internal_counters.push_back(44629);
        internal_counters.push_back(45073);
        internal_counters.push_back(45517);
        internal_counters.push_back(45961);
        internal_counters.push_back(46405);
        internal_counters.push_back(46849);
        internal_counters.push_back(47293);
        internal_counters.push_back(47737);
        internal_counters.push_back(48181);
        internal_counters.push_back(48625);
        internal_counters.push_back(49069);
        internal_counters.push_back(49513);
        internal_counters.push_back(49957);
        internal_counters.push_back(50401);
        internal_counters.push_back(50845);

        c.DefineDerivedCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(44340);
        internal_counters.push_back(44784);
        internal_counters.push_back(45228);
        internal_counters.push_back(45672);
        internal_counters.push_back(46116);
        internal_counters.push_back(46560);
        internal_counters.push_back(47004);
        internal_counters.push_back(47448);
        internal_counters.push_back(47892);
        internal_counters.push_back(48336);
        internal_counters.push_back(48780);
        internal_counters.push_back(49224);
        internal_counters.push_back(49668);
        internal_counters.push_back(50112);
        internal_counters.push_back(50556);
        internal_counters.push_back(51000);

        c.DefineDerivedCounter("CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "47eacbb0-28c8-22b4-5c69-c00d5813bb1c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28919);
        internal_counters.push_back(29004);
        internal_counters.push_back(29089);
        internal_counters.push_back(29174);
        internal_counters.push_back(29259);
        internal_counters.push_back(29344);
        internal_counters.push_back(29429);
        internal_counters.push_back(29514);
        internal_counters.push_back(29599);
        internal_counters.push_back(29684);
        internal_counters.push_back(29769);
        internal_counters.push_back(29854);
        internal_counters.push_back(29939);
        internal_counters.push_back(30024);
        internal_counters.push_back(30109);
        internal_counters.push_back(30194);
        internal_counters.push_back(30279);
        internal_counters.push_back(30364);
        internal_counters.push_back(30449);
        internal_counters.push_back(30534);
        internal_counters.push_back(30619);
        internal_counters.push_back(30704);
        internal_counters.push_back(30789);
        internal_counters.push_back(30874);
        internal_counters.push_back(30959);
        internal_counters.push_back(31044);
        internal_counters.push_back(31129);
        internal_counters.push_back(31214);
        internal_counters.push_back(31299);
        internal_counters.push_back(31384);
        internal_counters.push_back(31469);
        internal_counters.push_back(31554);
        internal_counters.push_back(31639);
        internal_counters.push_back(31724);
        internal_counters.push_back(31809);
        internal_counters.push_back(31894);
        internal_counters.push_back(31979);
        internal_counters.push_back(32064);
        internal_counters.push_back(32149);
        internal_counters.push_back(32234);
        internal_counters.push_back(32319);
        internal_counters.push_back(32404);
        internal_counters.push_back(32489);
        internal_counters.push_back(32574);
        internal_counters.push_back(32659);
        internal_counters.push_back(32744);
        internal_counters.push_back(32829);
        internal_counters.push_back(32914);
        internal_counters.push_back(32999);
        internal_counters.push_back(33084);
        internal_counters.push_back(33169);
        internal_counters.push_back(33254);
        internal_counters.push_back(33339);
        internal_counters.push_back(33424);
        internal_counters.push_back(33509);
        internal_counters.push_back(33594);
        internal_counters.push_back(33679);
        internal_counters.push_back(33764);
        internal_counters.push_back(33849);
        internal_counters.push_back(33934);
        internal_counters.push_back(34019);
        internal_counters.push_back(34104);
        internal_counters.push_back(34189);
        internal_counters.push_back(34274);

        c.DefineDerivedCounter("L0TagConflictReadStalledCycles", "MemoryCache", "The number of cycles read operations from the L0 cache are stalled due to tag conflicts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "e2412737-e2bf-c791-5f2f-64abd4ba47cf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28920);
        internal_counters.push_back(29005);
        internal_counters.push_back(29090);
        internal_counters.push_back(29175);
        internal_counters.push_back(29260);
        internal_counters.push_back(29345);
        internal_counters.push_back(29430);
        internal_counters.push_back(29515);
        internal_counters.push_back(29600);
        internal_counters.push_back(29685);
        internal_counters.push_back(29770);
        internal_counters.push_back(29855);
        internal_counters.push_back(29940);
        internal_counters.push_back(30025);
        internal_counters.push_back(30110);
        internal_counters.push_back(30195);
        internal_counters.push_back(30280);
        internal_counters.push_back(30365);
        internal_counters.push_back(30450);
        internal_counters.push_back(30535);
        internal_counters.push_back(30620);
        internal_counters.push_back(30705);
        internal_counters.push_back(30790);
        internal_counters.push_back(30875);
        internal_counters.push_back(30960);
        internal_counters.push_back(31045);
        internal_counters.push_back(31130);
        internal_counters.push_back(31215);
        internal_counters.push_back(31300);
        internal_counters.push_back(31385);
        internal_counters.push_back(31470);
        internal_counters.push_back(31555);
        internal_counters.push_back(31640);
        internal_counters.push_back(31725);
        internal_counters.push_back(31810);
        internal_counters.push_back(31895);
        internal_counters.push_back(31980);
        internal_counters.push_back(32065);
        internal_counters.push_back(32150);
        internal_counters.push_back(32235);
        internal_counters.push_back(32320);
        internal_counters.push_back(32405);
        internal_counters.push_back(32490);
        internal_counters.push_back(32575);
        internal_counters.push_back(32660);
        internal_counters.push_back(32745);
        internal_counters.push_back(32830);
        internal_counters.push_back(32915);
        internal_counters.push_back(33000);
        internal_counters.push_back(33085);
        internal_counters.push_back(33170);
        internal_counters.push_back(33255);
        internal_counters.push_back(33340);
        internal_counters.push_back(33425);
        internal_counters.push_back(33510);
        internal_counters.push_back(33595);
        internal_counters.push_back(33680);
        internal_counters.push_back(33765);
        internal_counters.push_back(33850);
        internal_counters.push_back(33935);
        internal_counters.push_back(34020);
        internal_counters.push_back(34105);
        internal_counters.push_back(34190);
        internal_counters.push_back(34275);

        c.DefineDerivedCounter("L0TagConflictWriteStalledCycles", "MemoryCache", "The number of cycles write operations to the L0 cache are stalled due to tag conflicts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "0c2571f3-f084-f351-99ba-0d9e23b47e8e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28921);
        internal_counters.push_back(29006);
        internal_counters.push_back(29091);
        internal_counters.push_back(29176);
        internal_counters.push_back(29261);
        internal_counters.push_back(29346);
        internal_counters.push_back(29431);
        internal_counters.push_back(29516);
        internal_counters.push_back(29601);
        internal_counters.push_back(29686);
        internal_counters.push_back(29771);
        internal_counters.push_back(29856);
        internal_counters.push_back(29941);
        internal_counters.push_back(30026);
        internal_counters.push_back(30111);
        internal_counters.push_back(30196);
        internal_counters.push_back(30281);
        internal_counters.push_back(30366);
        internal_counters.push_back(30451);
        internal_counters.push_back(30536);
        internal_counters.push_back(30621);
        internal_counters.push_back(30706);
        internal_counters.push_back(30791);
        internal_counters.push_back(30876);
        internal_counters.push_back(30961);
        internal_counters.push_back(31046);
        internal_counters.push_back(31131);
        internal_counters.push_back(31216);
        internal_counters.push_back(31301);
        internal_counters.push_back(31386);
        internal_counters.push_back(31471);
        internal_counters.push_back(31556);
        internal_counters.push_back(31641);
        internal_counters.push_back(31726);
        internal_counters.push_back(31811);
        internal_counters.push_back(31896);
        internal_counters.push_back(31981);
        internal_counters.push_back(32066);
        internal_counters.push_back(32151);
        internal_counters.push_back(32236);
        internal_counters.push_back(32321);
        internal_counters.push_back(32406);
        internal_counters.push_back(32491);
        internal_counters.push_back(32576);
        internal_counters.push_back(32661);
        internal_counters.push_back(32746);
        internal_counters.push_back(32831);
        internal_counters.push_back(32916);
        internal_counters.push_back(33001);
        internal_counters.push_back(33086);
        internal_counters.push_back(33171);
        internal_counters.push_back(33256);
        internal_counters.push_back(33341);
        internal_counters.push_back(33426);
        internal_counters.push_back(33511);
        internal_counters.push_back(33596);
        internal_counters.push_back(33681);
        internal_counters.push_back(33766);
        internal_counters.push_back(33851);
        internal_counters.push_back(33936);
        internal_counters.push_back(34021);
        internal_counters.push_back(34106);
        internal_counters.push_back(34191);
        internal_counters.push_back(34276);

        c.DefineDerivedCounter("L0TagConflictAtomicStalledCycles", "MemoryCache", "The number of cycles atomic operations on the L0 cache are stalled due to tag conflicts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "f13f8563-4151-1533-f42f-0f9c08a20210");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34389);
        internal_counters.push_back(34671);
        internal_counters.push_back(34953);
        internal_counters.push_back(35235);
        internal_counters.push_back(35517);
        internal_counters.push_back(35799);
        internal_counters.push_back(36081);
        internal_counters.push_back(36363);
        internal_counters.push_back(36645);
        internal_counters.push_back(36927);
        internal_counters.push_back(37209);
        internal_counters.push_back(37491);
        internal_counters.push_back(37773);
        internal_counters.push_back(38055);
        internal_counters.push_back(38337);
        internal_counters.push_back(38619);
        internal_counters.push_back(34390);
        internal_counters.push_back(34672);
        internal_counters.push_back(34954);
        internal_counters.push_back(35236);
        internal_counters.push_back(35518);
        internal_counters.push_back(35800);
        internal_counters.push_back(36082);
        internal_counters.push_back(36364);
        internal_counters.push_back(36646);
        internal_counters.push_back(36928);
        internal_counters.push_back(37210);
        internal_counters.push_back(37492);
        internal_counters.push_back(37774);
        internal_counters.push_back(38056);
        internal_counters.push_back(38338);
        internal_counters.push_back(38620);

        c.DefineDerivedCounter("FetchSize", "GlobalMemory", "The total bytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(64),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "664bb3ef-6eca-86b1-1e2d-30cb897b5fa9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34377);
        internal_counters.push_back(34659);
        internal_counters.push_back(34941);
        internal_counters.push_back(35223);
        internal_counters.push_back(35505);
        internal_counters.push_back(35787);
        internal_counters.push_back(36069);
        internal_counters.push_back(36351);
        internal_counters.push_back(36633);
        internal_counters.push_back(36915);
        internal_counters.push_back(37197);
        internal_counters.push_back(37479);
        internal_counters.push_back(37761);
        internal_counters.push_back(38043);
        internal_counters.push_back(38325);
        internal_counters.push_back(38607);
        internal_counters.push_back(34378);
        internal_counters.push_back(34660);
        internal_counters.push_back(34942);
        internal_counters.push_back(35224);
        internal_counters.push_back(35506);
        internal_counters.push_back(35788);
        internal_counters.push_back(36070);
        internal_counters.push_back(36352);
        internal_counters.push_back(36634);
        internal_counters.push_back(36916);
        internal_counters.push_back(37198);
        internal_counters.push_back(37480);
        internal_counters.push_back(37762);
        internal_counters.push_back(38044);
        internal_counters.push_back(38326);
        internal_counters.push_back(38608);

        c.DefineDerivedCounter("WriteSize", "GlobalMemory", "The total bytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(64),*,+", "f96f2c16-b1b4-4ec4-229c-fc82e6f80a82");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28968);
        internal_counters.push_back(29053);
        internal_counters.push_back(29138);
        internal_counters.push_back(29223);
        internal_counters.push_back(29308);
        internal_counters.push_back(29393);
        internal_counters.push_back(29478);
        internal_counters.push_back(29563);
        internal_counters.push_back(29648);
        internal_counters.push_back(29733);
        internal_counters.push_back(29818);
        internal_counters.push_back(29903);
        internal_counters.push_back(29988);
        internal_counters.push_back(30073);
        internal_counters.push_back(30158);
        internal_counters.push_back(30243);
        internal_counters.push_back(30328);
        internal_counters.push_back(30413);
        internal_counters.push_back(30498);
        internal_counters.push_back(30583);
        internal_counters.push_back(30668);
        internal_counters.push_back(30753);
        internal_counters.push_back(30838);
        internal_counters.push_back(30923);
        internal_counters.push_back(31008);
        internal_counters.push_back(31093);
        internal_counters.push_back(31178);
        internal_counters.push_back(31263);
        internal_counters.push_back(31348);
        internal_counters.push_back(31433);
        internal_counters.push_back(31518);
        internal_counters.push_back(31603);
        internal_counters.push_back(31688);
        internal_counters.push_back(31773);
        internal_counters.push_back(31858);
        internal_counters.push_back(31943);
        internal_counters.push_back(32028);
        internal_counters.push_back(32113);
        internal_counters.push_back(32198);
        internal_counters.push_back(32283);
        internal_counters.push_back(32368);
        internal_counters.push_back(32453);
        internal_counters.push_back(32538);
        internal_counters.push_back(32623);
        internal_counters.push_back(32708);
        internal_counters.push_back(32793);
        internal_counters.push_back(32878);
        internal_counters.push_back(32963);
        internal_counters.push_back(33048);
        internal_counters.push_back(33133);
        internal_counters.push_back(33218);
        internal_counters.push_back(33303);
        internal_counters.push_back(33388);
        internal_counters.push_back(33473);
        internal_counters.push_back(33558);
        internal_counters.push_back(33643);
        internal_counters.push_back(33728);
        internal_counters.push_back(33813);
        internal_counters.push_back(33898);
        internal_counters.push_back(33983);
        internal_counters.push_back(34068);
        internal_counters.push_back(34153);
        internal_counters.push_back(34238);
        internal_counters.push_back(34323);
        internal_counters.push_back(28977);
        internal_counters.push_back(29062);
        internal_counters.push_back(29147);
        internal_counters.push_back(29232);
        internal_counters.push_back(29317);
        internal_counters.push_back(29402);
        internal_counters.push_back(29487);
        internal_counters.push_back(29572);
        internal_counters.push_back(29657);
        internal_counters.push_back(29742);
        internal_counters.push_back(29827);
        internal_counters.push_back(29912);
        internal_counters.push_back(29997);
        internal_counters.push_back(30082);
        internal_counters.push_back(30167);
        internal_counters.push_back(30252);
        internal_counters.push_back(30337);
        internal_counters.push_back(30422);
        internal_counters.push_back(30507);
        internal_counters.push_back(30592);
        internal_counters.push_back(30677);
        internal_counters.push_back(30762);
        internal_counters.push_back(30847);
        internal_counters.push_back(30932);
        internal_counters.push_back(31017);
        internal_counters.push_back(31102);
        internal_counters.push_back(31187);
        internal_counters.push_back(31272);
        internal_counters.push_back(31357);
        internal_counters.push_back(31442);
        internal_counters.push_back(31527);
        internal_counters.push_back(31612);
        internal_counters.push_back(31697);
        internal_counters.push_back(31782);
        internal_counters.push_back(31867);
        internal_counters.push_back(31952);
        internal_counters.push_back(32037);
        internal_counters.push_back(32122);
        internal_counters.push_back(32207);
        internal_counters.push_back(32292);
        internal_counters.push_back(32377);
        internal_counters.push_back(32462);
        internal_counters.push_back(32547);
        internal_counters.push_back(32632);
        internal_counters.push_back(32717);
        internal_counters.push_back(32802);
        internal_counters.push_back(32887);
        internal_counters.push_back(32972);
        internal_counters.push_back(33057);
        internal_counters.push_back(33142);
        internal_counters.push_back(33227);
        internal_counters.push_back(33312);
        internal_counters.push_back(33397);
        internal_counters.push_back(33482);
        internal_counters.push_back(33567);
        internal_counters.push_back(33652);
        internal_counters.push_back(33737);
        internal_counters.push_back(33822);
        internal_counters.push_back(33907);
        internal_counters.push_back(33992);
        internal_counters.push_back(34077);
        internal_counters.push_back(34162);
        internal_counters.push_back(34247);
        internal_counters.push_back(34332);
        internal_counters.push_back(28978);
        internal_counters.push_back(29063);
        internal_counters.push_back(29148);
        internal_counters.push_back(29233);
        internal_counters.push_back(29318);
        internal_counters.push_back(29403);
        internal_counters.push_back(29488);
        internal_counters.push_back(29573);
        internal_counters.push_back(29658);
        internal_counters.push_back(29743);
        internal_counters.push_back(29828);
        internal_counters.push_back(29913);
        internal_counters.push_back(29998);
        internal_counters.push_back(30083);
        internal_counters.push_back(30168);
        internal_counters.push_back(30253);
        internal_counters.push_back(30338);
        internal_counters.push_back(30423);
        internal_counters.push_back(30508);
        internal_counters.push_back(30593);
        internal_counters.push_back(30678);
        internal_counters.push_back(30763);
        internal_counters.push_back(30848);
        internal_counters.push_back(30933);
        internal_counters.push_back(31018);
        internal_counters.push_back(31103);
        internal_counters.push_back(31188);
        internal_counters.push_back(31273);
        internal_counters.push_back(31358);
        internal_counters.push_back(31443);
        internal_counters.push_back(31528);
        internal_counters.push_back(31613);
        internal_counters.push_back(31698);
        internal_counters.push_back(31783);
        internal_counters.push_back(31868);
        internal_counters.push_back(31953);
        internal_counters.push_back(32038);
        internal_counters.push_back(32123);
        internal_counters.push_back(32208);
        internal_counters.push_back(32293);
        internal_counters.push_back(32378);
        internal_counters.push_back(32463);
        internal_counters.push_back(32548);
        internal_counters.push_back(32633);
        internal_counters.push_back(32718);
        internal_counters.push_back(32803);
        internal_counters.push_back(32888);
        internal_counters.push_back(32973);
        internal_counters.push_back(33058);
        internal_counters.push_back(33143);
        internal_counters.push_back(33228);
        internal_counters.push_back(33313);
        internal_counters.push_back(33398);
        internal_counters.push_back(33483);
        internal_counters.push_back(33568);
        internal_counters.push_back(33653);
        internal_counters.push_back(33738);
        internal_counters.push_back(33823);
        internal_counters.push_back(33908);
        internal_counters.push_back(33993);
        internal_counters.push_back(34078);
        internal_counters.push_back(34163);
        internal_counters.push_back(34248);
        internal_counters.push_back(34333);
        internal_counters.push_back(28979);
        internal_counters.push_back(29064);
        internal_counters.push_back(29149);
        internal_counters.push_back(29234);
        internal_counters.push_back(29319);
        internal_counters.push_back(29404);
        internal_counters.push_back(29489);
        internal_counters.push_back(29574);
        internal_counters.push_back(29659);
        internal_counters.push_back(29744);
        internal_counters.push_back(29829);
        internal_counters.push_back(29914);
        internal_counters.push_back(29999);
        internal_counters.push_back(30084);
        internal_counters.push_back(30169);
        internal_counters.push_back(30254);
        internal_counters.push_back(30339);
        internal_counters.push_back(30424);
        internal_counters.push_back(30509);
        internal_counters.push_back(30594);
        internal_counters.push_back(30679);
        internal_counters.push_back(30764);
        internal_counters.push_back(30849);
        internal_counters.push_back(30934);
        internal_counters.push_back(31019);
        internal_counters.push_back(31104);
        internal_counters.push_back(31189);
        internal_counters.push_back(31274);
        internal_counters.push_back(31359);
        internal_counters.push_back(31444);
        internal_counters.push_back(31529);
        internal_counters.push_back(31614);
        internal_counters.push_back(31699);
        internal_counters.push_back(31784);
        internal_counters.push_back(31869);
        internal_counters.push_back(31954);
        internal_counters.push_back(32039);
        internal_counters.push_back(32124);
        internal_counters.push_back(32209);
        internal_counters.push_back(32294);
        internal_counters.push_back(32379);
        internal_counters.push_back(32464);
        internal_counters.push_back(32549);
        internal_counters.push_back(32634);
        internal_counters.push_back(32719);
        internal_counters.push_back(32804);
        internal_counters.push_back(32889);
        internal_counters.push_back(32974);
        internal_counters.push_back(33059);
        internal_counters.push_back(33144);
        internal_counters.push_back(33229);
        internal_counters.push_back(33314);
        internal_counters.push_back(33399);
        internal_counters.push_back(33484);
        internal_counters.push_back(33569);
        internal_counters.push_back(33654);
        internal_counters.push_back(33739);
        internal_counters.push_back(33824);
        internal_counters.push_back(33909);
        internal_counters.push_back(33994);
        internal_counters.push_back(34079);
        internal_counters.push_back(34164);
        internal_counters.push_back(34249);
        internal_counters.push_back(34334);
        internal_counters.push_back(28980);
        internal_counters.push_back(29065);
        internal_counters.push_back(29150);
        internal_counters.push_back(29235);
        internal_counters.push_back(29320);
        internal_counters.push_back(29405);
        internal_counters.push_back(29490);
        internal_counters.push_back(29575);
        internal_counters.push_back(29660);
        internal_counters.push_back(29745);
        internal_counters.push_back(29830);
        internal_counters.push_back(29915);
        internal_counters.push_back(30000);
        internal_counters.push_back(30085);
        internal_counters.push_back(30170);
        internal_counters.push_back(30255);
        internal_counters.push_back(30340);
        internal_counters.push_back(30425);
        internal_counters.push_back(30510);
        internal_counters.push_back(30595);
        internal_counters.push_back(30680);
        internal_counters.push_back(30765);
        internal_counters.push_back(30850);
        internal_counters.push_back(30935);
        internal_counters.push_back(31020);
        internal_counters.push_back(31105);
        internal_counters.push_back(31190);
        internal_counters.push_back(31275);
        internal_counters.push_back(31360);
        internal_counters.push_back(31445);
        internal_counters.push_back(31530);
        internal_counters.push_back(31615);
        internal_counters.push_back(31700);
        internal_counters.push_back(31785);
        internal_counters.push_back(31870);
        internal_counters.push_back(31955);
        internal_counters.push_back(32040);
        internal_counters.push_back(32125);
        internal_counters.push_back(32210);
        internal_counters.push_back(32295);
        internal_counters.push_back(32380);
        internal_counters.push_back(32465);
        internal_counters.push_back(32550);
        internal_counters.push_back(32635);
        internal_counters.push_back(32720);
        internal_counters.push_back(32805);
        internal_counters.push_back(32890);
        internal_counters.push_back(32975);
        internal_counters.push_back(33060);
        internal_counters.push_back(33145);
        internal_counters.push_back(33230);
        internal_counters.push_back(33315);
        internal_counters.push_back(33400);
        internal_counters.push_back(33485);
        internal_counters.push_back(33570);
        internal_counters.push_back(33655);
        internal_counters.push_back(33740);
        internal_counters.push_back(33825);
        internal_counters.push_back(33910);
        internal_counters.push_back(33995);
        internal_counters.push_back(34080);
        internal_counters.push_back(34165);
        internal_counters.push_back(34250);
        internal_counters.push_back(34335);

        c.DefineDerivedCounter("L1CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L1 cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "(0),(1),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum256,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,/,-,(100),*,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,ifnotzero", "6deaf002-3cac-2d2d-7b89-566c7a52b08e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28968);
        internal_counters.push_back(29053);
        internal_counters.push_back(29138);
        internal_counters.push_back(29223);
        internal_counters.push_back(29308);
        internal_counters.push_back(29393);
        internal_counters.push_back(29478);
        internal_counters.push_back(29563);
        internal_counters.push_back(29648);
        internal_counters.push_back(29733);
        internal_counters.push_back(29818);
        internal_counters.push_back(29903);
        internal_counters.push_back(29988);
        internal_counters.push_back(30073);
        internal_counters.push_back(30158);
        internal_counters.push_back(30243);
        internal_counters.push_back(30328);
        internal_counters.push_back(30413);
        internal_counters.push_back(30498);
        internal_counters.push_back(30583);
        internal_counters.push_back(30668);
        internal_counters.push_back(30753);
        internal_counters.push_back(30838);
        internal_counters.push_back(30923);
        internal_counters.push_back(31008);
        internal_counters.push_back(31093);
        internal_counters.push_back(31178);
        internal_counters.push_back(31263);
        internal_counters.push_back(31348);
        internal_counters.push_back(31433);
        internal_counters.push_back(31518);
        internal_counters.push_back(31603);
        internal_counters.push_back(31688);
        internal_counters.push_back(31773);
        internal_counters.push_back(31858);
        internal_counters.push_back(31943);
        internal_counters.push_back(32028);
        internal_counters.push_back(32113);
        internal_counters.push_back(32198);
        internal_counters.push_back(32283);
        internal_counters.push_back(32368);
        internal_counters.push_back(32453);
        internal_counters.push_back(32538);
        internal_counters.push_back(32623);
        internal_counters.push_back(32708);
        internal_counters.push_back(32793);
        internal_counters.push_back(32878);
        internal_counters.push_back(32963);
        internal_counters.push_back(33048);
        internal_counters.push_back(33133);
        internal_counters.push_back(33218);
        internal_counters.push_back(33303);
        internal_counters.push_back(33388);
        internal_counters.push_back(33473);
        internal_counters.push_back(33558);
        internal_counters.push_back(33643);
        internal_counters.push_back(33728);
        internal_counters.push_back(33813);
        internal_counters.push_back(33898);
        internal_counters.push_back(33983);
        internal_counters.push_back(34068);
        internal_counters.push_back(34153);
        internal_counters.push_back(34238);
        internal_counters.push_back(34323);
        internal_counters.push_back(28977);
        internal_counters.push_back(29062);
        internal_counters.push_back(29147);
        internal_counters.push_back(29232);
        internal_counters.push_back(29317);
        internal_counters.push_back(29402);
        internal_counters.push_back(29487);
        internal_counters.push_back(29572);
        internal_counters.push_back(29657);
        internal_counters.push_back(29742);
        internal_counters.push_back(29827);
        internal_counters.push_back(29912);
        internal_counters.push_back(29997);
        internal_counters.push_back(30082);
        internal_counters.push_back(30167);
        internal_counters.push_back(30252);
        internal_counters.push_back(30337);
        internal_counters.push_back(30422);
        internal_counters.push_back(30507);
        internal_counters.push_back(30592);
        internal_counters.push_back(30677);
        internal_counters.push_back(30762);
        internal_counters.push_back(30847);
        internal_counters.push_back(30932);
        internal_counters.push_back(31017);
        internal_counters.push_back(31102);
        internal_counters.push_back(31187);
        internal_counters.push_back(31272);
        internal_counters.push_back(31357);
        internal_counters.push_back(31442);
        internal_counters.push_back(31527);
        internal_counters.push_back(31612);
        internal_counters.push_back(31697);
        internal_counters.push_back(31782);
        internal_counters.push_back(31867);
        internal_counters.push_back(31952);
        internal_counters.push_back(32037);
        internal_counters.push_back(32122);
        internal_counters.push_back(32207);
        internal_counters.push_back(32292);
        internal_counters.push_back(32377);
        internal_counters.push_back(32462);
        internal_counters.push_back(32547);
        internal_counters.push_back(32632);
        internal_counters.push_back(32717);
        internal_counters.push_back(32802);
        internal_counters.push_back(32887);
        internal_counters.push_back(32972);
        internal_counters.push_back(33057);
        internal_counters.push_back(33142);
        internal_counters.push_back(33227);
        internal_counters.push_back(33312);
        internal_counters.push_back(33397);
        internal_counters.push_back(33482);
        internal_counters.push_back(33567);
        internal_counters.push_back(33652);
        internal_counters.push_back(33737);
        internal_counters.push_back(33822);
        internal_counters.push_back(33907);
        internal_counters.push_back(33992);
        internal_counters.push_back(34077);
        internal_counters.push_back(34162);
        internal_counters.push_back(34247);
        internal_counters.push_back(34332);
        internal_counters.push_back(28978);
        internal_counters.push_back(29063);
        internal_counters.push_back(29148);
        internal_counters.push_back(29233);
        internal_counters.push_back(29318);
        internal_counters.push_back(29403);
        internal_counters.push_back(29488);
        internal_counters.push_back(29573);
        internal_counters.push_back(29658);
        internal_counters.push_back(29743);
        internal_counters.push_back(29828);
        internal_counters.push_back(29913);
        internal_counters.push_back(29998);
        internal_counters.push_back(30083);
        internal_counters.push_back(30168);
        internal_counters.push_back(30253);
        internal_counters.push_back(30338);
        internal_counters.push_back(30423);
        internal_counters.push_back(30508);
        internal_counters.push_back(30593);
        internal_counters.push_back(30678);
        internal_counters.push_back(30763);
        internal_counters.push_back(30848);
        internal_counters.push_back(30933);
        internal_counters.push_back(31018);
        internal_counters.push_back(31103);
        internal_counters.push_back(31188);
        internal_counters.push_back(31273);
        internal_counters.push_back(31358);
        internal_counters.push_back(31443);
        internal_counters.push_back(31528);
        internal_counters.push_back(31613);
        internal_counters.push_back(31698);
        internal_counters.push_back(31783);
        internal_counters.push_back(31868);
        internal_counters.push_back(31953);
        internal_counters.push_back(32038);
        internal_counters.push_back(32123);
        internal_counters.push_back(32208);
        internal_counters.push_back(32293);
        internal_counters.push_back(32378);
        internal_counters.push_back(32463);
        internal_counters.push_back(32548);
        internal_counters.push_back(32633);
        internal_counters.push_back(32718);
        internal_counters.push_back(32803);
        internal_counters.push_back(32888);
        internal_counters.push_back(32973);
        internal_counters.push_back(33058);
        internal_counters.push_back(33143);
        internal_counters.push_back(33228);
        internal_counters.push_back(33313);
        internal_counters.push_back(33398);
        internal_counters.push_back(33483);
        internal_counters.push_back(33568);
        internal_counters.push_back(33653);
        internal_counters.push_back(33738);
        internal_counters.push_back(33823);
        internal_counters.push_back(33908);
        internal_counters.push_back(33993);
        internal_counters.push_back(34078);
        internal_counters.push_back(34163);
        internal_counters.push_back(34248);
        internal_counters.push_back(34333);
        internal_counters.push_back(28979);
        internal_counters.push_back(29064);
        internal_counters.push_back(29149);
        internal_counters.push_back(29234);
        internal_counters.push_back(29319);
        internal_counters.push_back(29404);
        internal_counters.push_back(29489);
        internal_counters.push_back(29574);
        internal_counters.push_back(29659);
        internal_counters.push_back(29744);
        internal_counters.push_back(29829);
        internal_counters.push_back(29914);
        internal_counters.push_back(29999);
        internal_counters.push_back(30084);
        internal_counters.push_back(30169);
        internal_counters.push_back(30254);
        internal_counters.push_back(30339);
        internal_counters.push_back(30424);
        internal_counters.push_back(30509);
        internal_counters.push_back(30594);
        internal_counters.push_back(30679);
        internal_counters.push_back(30764);
        internal_counters.push_back(30849);
        internal_counters.push_back(30934);
        internal_counters.push_back(31019);
        internal_counters.push_back(31104);
        internal_counters.push_back(31189);
        internal_counters.push_back(31274);
        internal_counters.push_back(31359);
        internal_counters.push_back(31444);
        internal_counters.push_back(31529);
        internal_counters.push_back(31614);
        internal_counters.push_back(31699);
        internal_counters.push_back(31784);
        internal_counters.push_back(31869);
        internal_counters.push_back(31954);
        internal_counters.push_back(32039);
        internal_counters.push_back(32124);
        internal_counters.push_back(32209);
        internal_counters.push_back(32294);
        internal_counters.push_back(32379);
        internal_counters.push_back(32464);
        internal_counters.push_back(32549);
        internal_counters.push_back(32634);
        internal_counters.push_back(32719);
        internal_counters.push_back(32804);
        internal_counters.push_back(32889);
        internal_counters.push_back(32974);
        internal_counters.push_back(33059);
        internal_counters.push_back(33144);
        internal_counters.push_back(33229);
        internal_counters.push_back(33314);
        internal_counters.push_back(33399);
        internal_counters.push_back(33484);
        internal_counters.push_back(33569);
        internal_counters.push_back(33654);
        internal_counters.push_back(33739);
        internal_counters.push_back(33824);
        internal_counters.push_back(33909);
        internal_counters.push_back(33994);
        internal_counters.push_back(34079);
        internal_counters.push_back(34164);
        internal_counters.push_back(34249);
        internal_counters.push_back(34334);
        internal_counters.push_back(28980);
        internal_counters.push_back(29065);
        internal_counters.push_back(29150);
        internal_counters.push_back(29235);
        internal_counters.push_back(29320);
        internal_counters.push_back(29405);
        internal_counters.push_back(29490);
        internal_counters.push_back(29575);
        internal_counters.push_back(29660);
        internal_counters.push_back(29745);
        internal_counters.push_back(29830);
        internal_counters.push_back(29915);
        internal_counters.push_back(30000);
        internal_counters.push_back(30085);
        internal_counters.push_back(30170);
        internal_counters.push_back(30255);
        internal_counters.push_back(30340);
        internal_counters.push_back(30425);
        internal_counters.push_back(30510);
        internal_counters.push_back(30595);
        internal_counters.push_back(30680);
        internal_counters.push_back(30765);
        internal_counters.push_back(30850);
        internal_counters.push_back(30935);
        internal_counters.push_back(31020);
        internal_counters.push_back(31105);
        internal_counters.push_back(31190);
        internal_counters.push_back(31275);
        internal_counters.push_back(31360);
        internal_counters.push_back(31445);
        internal_counters.push_back(31530);
        internal_counters.push_back(31615);
        internal_counters.push_back(31700);
        internal_counters.push_back(31785);
        internal_counters.push_back(31870);
        internal_counters.push_back(31955);
        internal_counters.push_back(32040);
        internal_counters.push_back(32125);
        internal_counters.push_back(32210);
        internal_counters.push_back(32295);
        internal_counters.push_back(32380);
        internal_counters.push_back(32465);
        internal_counters.push_back(32550);
        internal_counters.push_back(32635);
        internal_counters.push_back(32720);
        internal_counters.push_back(32805);
        internal_counters.push_back(32890);
        internal_counters.push_back(32975);
        internal_counters.push_back(33060);
        internal_counters.push_back(33145);
        internal_counters.push_back(33230);
        internal_counters.push_back(33315);
        internal_counters.push_back(33400);
        internal_counters.push_back(33485);
        internal_counters.push_back(33570);
        internal_counters.push_back(33655);
        internal_counters.push_back(33740);
        internal_counters.push_back(33825);
        internal_counters.push_back(33910);
        internal_counters.push_back(33995);
        internal_counters.push_back(34080);
        internal_counters.push_back(34165);
        internal_counters.push_back(34250);
        internal_counters.push_back(34335);

        c.DefineDerivedCounter("L1CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the data in L1 cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,308,309,310,311,312,313,314,315,316,317,318,319,sum256,-", "279c8bff-ec6a-f9bf-96d7-5e8000f77891");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28977);
        internal_counters.push_back(29062);
        internal_counters.push_back(29147);
        internal_counters.push_back(29232);
        internal_counters.push_back(29317);
        internal_counters.push_back(29402);
        internal_counters.push_back(29487);
        internal_counters.push_back(29572);
        internal_counters.push_back(29657);
        internal_counters.push_back(29742);
        internal_counters.push_back(29827);
        internal_counters.push_back(29912);
        internal_counters.push_back(29997);
        internal_counters.push_back(30082);
        internal_counters.push_back(30167);
        internal_counters.push_back(30252);
        internal_counters.push_back(30337);
        internal_counters.push_back(30422);
        internal_counters.push_back(30507);
        internal_counters.push_back(30592);
        internal_counters.push_back(30677);
        internal_counters.push_back(30762);
        internal_counters.push_back(30847);
        internal_counters.push_back(30932);
        internal_counters.push_back(31017);
        internal_counters.push_back(31102);
        internal_counters.push_back(31187);
        internal_counters.push_back(31272);
        internal_counters.push_back(31357);
        internal_counters.push_back(31442);
        internal_counters.push_back(31527);
        internal_counters.push_back(31612);
        internal_counters.push_back(31697);
        internal_counters.push_back(31782);
        internal_counters.push_back(31867);
        internal_counters.push_back(31952);
        internal_counters.push_back(32037);
        internal_counters.push_back(32122);
        internal_counters.push_back(32207);
        internal_counters.push_back(32292);
        internal_counters.push_back(32377);
        internal_counters.push_back(32462);
        internal_counters.push_back(32547);
        internal_counters.push_back(32632);
        internal_counters.push_back(32717);
        internal_counters.push_back(32802);
        internal_counters.push_back(32887);
        internal_counters.push_back(32972);
        internal_counters.push_back(33057);
        internal_counters.push_back(33142);
        internal_counters.push_back(33227);
        internal_counters.push_back(33312);
        internal_counters.push_back(33397);
        internal_counters.push_back(33482);
        internal_counters.push_back(33567);
        internal_counters.push_back(33652);
        internal_counters.push_back(33737);
        internal_counters.push_back(33822);
        internal_counters.push_back(33907);
        internal_counters.push_back(33992);
        internal_counters.push_back(34077);
        internal_counters.push_back(34162);
        internal_counters.push_back(34247);
        internal_counters.push_back(34332);
        internal_counters.push_back(28978);
        internal_counters.push_back(29063);
        internal_counters.push_back(29148);
        internal_counters.push_back(29233);
        internal_counters.push_back(29318);
        internal_counters.push_back(29403);
        internal_counters.push_back(29488);
        internal_counters.push_back(29573);
        internal_counters.push_back(29658);
        internal_counters.push_back(29743);
        internal_counters.push_back(29828);
        internal_counters.push_back(29913);
        internal_counters.push_back(29998);
        internal_counters.push_back(30083);
        internal_counters.push_back(30168);
        internal_counters.push_back(30253);
        internal_counters.push_back(30338);
        internal_counters.push_back(30423);
        internal_counters.push_back(30508);
        internal_counters.push_back(30593);
        internal_counters.push_back(30678);
        internal_counters.push_back(30763);
        internal_counters.push_back(30848);
        internal_counters.push_back(30933);
        internal_counters.push_back(31018);
        internal_counters.push_back(31103);
        internal_counters.push_back(31188);
        internal_counters.push_back(31273);
        internal_counters.push_back(31358);
        internal_counters.push_back(31443);
        internal_counters.push_back(31528);
        internal_counters.push_back(31613);
        internal_counters.push_back(31698);
        internal_counters.push_back(31783);
        internal_counters.push_back(31868);
        internal_counters.push_back(31953);
        internal_counters.push_back(32038);
        internal_counters.push_back(32123);
        internal_counters.push_back(32208);
        internal_counters.push_back(32293);
        internal_counters.push_back(32378);
        internal_counters.push_back(32463);
        internal_counters.push_back(32548);
        internal_counters.push_back(32633);
        internal_counters.push_back(32718);
        internal_counters.push_back(32803);
        internal_counters.push_back(32888);
        internal_counters.push_back(32973);
        internal_counters.push_back(33058);
        internal_counters.push_back(33143);
        internal_counters.push_back(33228);
        internal_counters.push_back(33313);
        internal_counters.push_back(33398);
        internal_counters.push_back(33483);
        internal_counters.push_back(33568);
        internal_counters.push_back(33653);
        internal_counters.push_back(33738);
        internal_counters.push_back(33823);
        internal_counters.push_back(33908);
        internal_counters.push_back(33993);
        internal_counters.push_back(34078);
        internal_counters.push_back(34163);
        internal_counters.push_back(34248);
        internal_counters.push_back(34333);
        internal_counters.push_back(28979);
        internal_counters.push_back(29064);
        internal_counters.push_back(29149);
        internal_counters.push_back(29234);
        internal_counters.push_back(29319);
        internal_counters.push_back(29404);
        internal_counters.push_back(29489);
        internal_counters.push_back(29574);
        internal_counters.push_back(29659);
        internal_counters.push_back(29744);
        internal_counters.push_back(29829);
        internal_counters.push_back(29914);
        internal_counters.push_back(29999);
        internal_counters.push_back(30084);
        internal_counters.push_back(30169);
        internal_counters.push_back(30254);
        internal_counters.push_back(30339);
        internal_counters.push_back(30424);
        internal_counters.push_back(30509);
        internal_counters.push_back(30594);
        internal_counters.push_back(30679);
        internal_counters.push_back(30764);
        internal_counters.push_back(30849);
        internal_counters.push_back(30934);
        internal_counters.push_back(31019);
        internal_counters.push_back(31104);
        internal_counters.push_back(31189);
        internal_counters.push_back(31274);
        internal_counters.push_back(31359);
        internal_counters.push_back(31444);
        internal_counters.push_back(31529);
        internal_counters.push_back(31614);
        internal_counters.push_back(31699);
        internal_counters.push_back(31784);
        internal_counters.push_back(31869);
        internal_counters.push_back(31954);
        internal_counters.push_back(32039);
        internal_counters.push_back(32124);
        internal_counters.push_back(32209);
        internal_counters.push_back(32294);
        internal_counters.push_back(32379);
        internal_counters.push_back(32464);
        internal_counters.push_back(32549);
        internal_counters.push_back(32634);
        internal_counters.push_back(32719);
        internal_counters.push_back(32804);
        internal_counters.push_back(32889);
        internal_counters.push_back(32974);
        internal_counters.push_back(33059);
        internal_counters.push_back(33144);
        internal_counters.push_back(33229);
        internal_counters.push_back(33314);
        internal_counters.push_back(33399);
        internal_counters.push_back(33484);
        internal_counters.push_back(33569);
        internal_counters.push_back(33654);
        internal_counters.push_back(33739);
        internal_counters.push_back(33824);
        internal_counters.push_back(33909);
        internal_counters.push_back(33994);
        internal_counters.push_back(34079);
        internal_counters.push_back(34164);
        internal_counters.push_back(34249);
        internal_counters.push_back(34334);
        internal_counters.push_back(28980);
        internal_counters.push_back(29065);
        internal_counters.push_back(29150);
        internal_counters.push_back(29235);
        internal_counters.push_back(29320);
        internal_counters.push_back(29405);
        internal_counters.push_back(29490);
        internal_counters.push_back(29575);
        internal_counters.push_back(29660);
        internal_counters.push_back(29745);
        internal_counters.push_back(29830);
        internal_counters.push_back(29915);
        internal_counters.push_back(30000);
        internal_counters.push_back(30085);
        internal_counters.push_back(30170);
        internal_counters.push_back(30255);
        internal_counters.push_back(30340);
        internal_counters.push_back(30425);
        internal_counters.push_back(30510);
        internal_counters.push_back(30595);
        internal_counters.push_back(30680);
        internal_counters.push_back(30765);
        internal_counters.push_back(30850);
        internal_counters.push_back(30935);
        internal_counters.push_back(31020);
        internal_counters.push_back(31105);
        internal_counters.push_back(31190);
        internal_counters.push_back(31275);
        internal_counters.push_back(31360);
        internal_counters.push_back(31445);
        internal_counters.push_back(31530);
        internal_counters.push_back(31615);
        internal_counters.push_back(31700);
        internal_counters.push_back(31785);
        internal_counters.push_back(31870);
        internal_counters.push_back(31955);
        internal_counters.push_back(32040);
        internal_counters.push_back(32125);
        internal_counters.push_back(32210);
        internal_counters.push_back(32295);
        internal_counters.push_back(32380);
        internal_counters.push_back(32465);
        internal_counters.push_back(32550);
        internal_counters.push_back(32635);
        internal_counters.push_back(32720);
        internal_counters.push_back(32805);
        internal_counters.push_back(32890);
        internal_counters.push_back(32975);
        internal_counters.push_back(33060);
        internal_counters.push_back(33145);
        internal_counters.push_back(33230);
        internal_counters.push_back(33315);
        internal_counters.push_back(33400);
        internal_counters.push_back(33485);
        internal_counters.push_back(33570);
        internal_counters.push_back(33655);
        internal_counters.push_back(33740);
        internal_counters.push_back(33825);
        internal_counters.push_back(33910);
        internal_counters.push_back(33995);
        internal_counters.push_back(34080);
        internal_counters.push_back(34165);
        internal_counters.push_back(34250);
        internal_counters.push_back(34335);

        c.DefineDerivedCounter("L1CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the data in L1 cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum256", "6e4ee364-41d7-476d-361d-f47b266c15db");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34368);
        internal_counters.push_back(34650);
        internal_counters.push_back(34932);
        internal_counters.push_back(35214);
        internal_counters.push_back(35496);
        internal_counters.push_back(35778);
        internal_counters.push_back(36060);
        internal_counters.push_back(36342);
        internal_counters.push_back(36624);
        internal_counters.push_back(36906);
        internal_counters.push_back(37188);
        internal_counters.push_back(37470);
        internal_counters.push_back(37752);
        internal_counters.push_back(38034);
        internal_counters.push_back(38316);
        internal_counters.push_back(38598);
        internal_counters.push_back(34370);
        internal_counters.push_back(34652);
        internal_counters.push_back(34934);
        internal_counters.push_back(35216);
        internal_counters.push_back(35498);
        internal_counters.push_back(35780);
        internal_counters.push_back(36062);
        internal_counters.push_back(36344);
        internal_counters.push_back(36626);
        internal_counters.push_back(36908);
        internal_counters.push_back(37190);
        internal_counters.push_back(37472);
        internal_counters.push_back(37754);
        internal_counters.push_back(38036);
        internal_counters.push_back(38318);
        internal_counters.push_back(38600);

        c.DefineDerivedCounter("L2CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the L2 cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "d78fdf66-104f-8372-02c1-91d07d7dc62e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34368);
        internal_counters.push_back(34650);
        internal_counters.push_back(34932);
        internal_counters.push_back(35214);
        internal_counters.push_back(35496);
        internal_counters.push_back(35778);
        internal_counters.push_back(36060);
        internal_counters.push_back(36342);
        internal_counters.push_back(36624);
        internal_counters.push_back(36906);
        internal_counters.push_back(37188);
        internal_counters.push_back(37470);
        internal_counters.push_back(37752);
        internal_counters.push_back(38034);
        internal_counters.push_back(38316);
        internal_counters.push_back(38598);
        internal_counters.push_back(34370);
        internal_counters.push_back(34652);
        internal_counters.push_back(34934);
        internal_counters.push_back(35216);
        internal_counters.push_back(35498);
        internal_counters.push_back(35780);
        internal_counters.push_back(36062);
        internal_counters.push_back(36344);
        internal_counters.push_back(36626);
        internal_counters.push_back(36908);
        internal_counters.push_back(37190);
        internal_counters.push_back(37472);
        internal_counters.push_back(37754);
        internal_counters.push_back(38036);
        internal_counters.push_back(38318);
        internal_counters.push_back(38600);

        c.DefineDerivedCounter("L2CacheMiss", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that miss the L2 cache. Value range: 0% (optimal) to 100% (all miss).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "4cd70885-41b3-25cd-92db-c76a0decc634");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34368);
        internal_counters.push_back(34650);
        internal_counters.push_back(34932);
        internal_counters.push_back(35214);
        internal_counters.push_back(35496);
        internal_counters.push_back(35778);
        internal_counters.push_back(36060);
        internal_counters.push_back(36342);
        internal_counters.push_back(36624);
        internal_counters.push_back(36906);
        internal_counters.push_back(37188);
        internal_counters.push_back(37470);
        internal_counters.push_back(37752);
        internal_counters.push_back(38034);
        internal_counters.push_back(38316);
        internal_counters.push_back(38598);

        c.DefineDerivedCounter("L2CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the L2 cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "d0bce171-560c-1895-66b3-bc56abccb077");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34370);
        internal_counters.push_back(34652);
        internal_counters.push_back(34934);
        internal_counters.push_back(35216);
        internal_counters.push_back(35498);
        internal_counters.push_back(35780);
        internal_counters.push_back(36062);
        internal_counters.push_back(36344);
        internal_counters.push_back(36626);
        internal_counters.push_back(36908);
        internal_counters.push_back(37190);
        internal_counters.push_back(37472);
        internal_counters.push_back(37754);
        internal_counters.push_back(38036);
        internal_counters.push_back(38318);
        internal_counters.push_back(38600);

        c.DefineDerivedCounter("L2CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the L2 cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f2ab3a1a-ead6-9893-961b-88ba2a758807");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17659);
        internal_counters.push_back(17778);
        internal_counters.push_back(17897);
        internal_counters.push_back(18016);
        internal_counters.push_back(18135);
        internal_counters.push_back(18254);
        internal_counters.push_back(18373);
        internal_counters.push_back(18492);
        internal_counters.push_back(18611);
        internal_counters.push_back(18730);
        internal_counters.push_back(18849);
        internal_counters.push_back(18968);
        internal_counters.push_back(19087);
        internal_counters.push_back(19206);
        internal_counters.push_back(19325);
        internal_counters.push_back(19444);
        internal_counters.push_back(19563);
        internal_counters.push_back(19682);
        internal_counters.push_back(19801);
        internal_counters.push_back(19920);
        internal_counters.push_back(20039);
        internal_counters.push_back(20158);
        internal_counters.push_back(20277);
        internal_counters.push_back(20396);
        internal_counters.push_back(20515);
        internal_counters.push_back(20634);
        internal_counters.push_back(20753);
        internal_counters.push_back(20872);
        internal_counters.push_back(20991);
        internal_counters.push_back(21110);
        internal_counters.push_back(21229);
        internal_counters.push_back(21348);
        internal_counters.push_back(21467);
        internal_counters.push_back(21586);
        internal_counters.push_back(21705);
        internal_counters.push_back(21824);
        internal_counters.push_back(21943);
        internal_counters.push_back(22062);
        internal_counters.push_back(22181);
        internal_counters.push_back(22300);
        internal_counters.push_back(22419);
        internal_counters.push_back(22538);
        internal_counters.push_back(22657);
        internal_counters.push_back(22776);
        internal_counters.push_back(22895);
        internal_counters.push_back(23014);
        internal_counters.push_back(23133);
        internal_counters.push_back(23252);
        internal_counters.push_back(23371);
        internal_counters.push_back(23490);
        internal_counters.push_back(23609);
        internal_counters.push_back(23728);
        internal_counters.push_back(23847);
        internal_counters.push_back(23966);
        internal_counters.push_back(24085);
        internal_counters.push_back(24204);
        internal_counters.push_back(24323);
        internal_counters.push_back(24442);
        internal_counters.push_back(24561);
        internal_counters.push_back(24680);
        internal_counters.push_back(24799);
        internal_counters.push_back(24918);
        internal_counters.push_back(25037);
        internal_counters.push_back(25156);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17659);
        internal_counters.push_back(17778);
        internal_counters.push_back(17897);
        internal_counters.push_back(18016);
        internal_counters.push_back(18135);
        internal_counters.push_back(18254);
        internal_counters.push_back(18373);
        internal_counters.push_back(18492);
        internal_counters.push_back(18611);
        internal_counters.push_back(18730);
        internal_counters.push_back(18849);
        internal_counters.push_back(18968);
        internal_counters.push_back(19087);
        internal_counters.push_back(19206);
        internal_counters.push_back(19325);
        internal_counters.push_back(19444);
        internal_counters.push_back(19563);
        internal_counters.push_back(19682);
        internal_counters.push_back(19801);
        internal_counters.push_back(19920);
        internal_counters.push_back(20039);
        internal_counters.push_back(20158);
        internal_counters.push_back(20277);
        internal_counters.push_back(20396);
        internal_counters.push_back(20515);
        internal_counters.push_back(20634);
        internal_counters.push_back(20753);
        internal_counters.push_back(20872);
        internal_counters.push_back(20991);
        internal_counters.push_back(21110);
        internal_counters.push_back(21229);
        internal_counters.push_back(21348);
        internal_counters.push_back(21467);
        internal_counters.push_back(21586);
        internal_counters.push_back(21705);
        internal_counters.push_back(21824);
        internal_counters.push_back(21943);
        internal_counters.push_back(22062);
        internal_counters.push_back(22181);
        internal_counters.push_back(22300);
        internal_counters.push_back(22419);
        internal_counters.push_back(22538);
        internal_counters.push_back(22657);
        internal_counters.push_back(22776);
        internal_counters.push_back(22895);
        internal_counters.push_back(23014);
        internal_counters.push_back(23133);
        internal_counters.push_back(23252);
        internal_counters.push_back(23371);
        internal_counters.push_back(23490);
        internal_counters.push_back(23609);
        internal_counters.push_back(23728);
        internal_counters.push_back(23847);
        internal_counters.push_back(23966);
        internal_counters.push_back(24085);
        internal_counters.push_back(24204);
        internal_counters.push_back(24323);
        internal_counters.push_back(24442);
        internal_counters.push_back(24561);
        internal_counters.push_back(24680);
        internal_counters.push_back(24799);
        internal_counters.push_back(24918);
        internal_counters.push_back(25037);
        internal_counters.push_back(25156);

        c.DefineDerivedCounter("MemUnitBusyCycles", "GlobalMemory", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalledCycles). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "168f077c-4797-b2f5-717f-105c725266c8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28914);
        internal_counters.push_back(28999);
        internal_counters.push_back(29084);
        internal_counters.push_back(29169);
        internal_counters.push_back(29254);
        internal_counters.push_back(29339);
        internal_counters.push_back(29424);
        internal_counters.push_back(29509);
        internal_counters.push_back(29594);
        internal_counters.push_back(29679);
        internal_counters.push_back(29764);
        internal_counters.push_back(29849);
        internal_counters.push_back(29934);
        internal_counters.push_back(30019);
        internal_counters.push_back(30104);
        internal_counters.push_back(30189);
        internal_counters.push_back(30274);
        internal_counters.push_back(30359);
        internal_counters.push_back(30444);
        internal_counters.push_back(30529);
        internal_counters.push_back(30614);
        internal_counters.push_back(30699);
        internal_counters.push_back(30784);
        internal_counters.push_back(30869);
        internal_counters.push_back(30954);
        internal_counters.push_back(31039);
        internal_counters.push_back(31124);
        internal_counters.push_back(31209);
        internal_counters.push_back(31294);
        internal_counters.push_back(31379);
        internal_counters.push_back(31464);
        internal_counters.push_back(31549);
        internal_counters.push_back(31634);
        internal_counters.push_back(31719);
        internal_counters.push_back(31804);
        internal_counters.push_back(31889);
        internal_counters.push_back(31974);
        internal_counters.push_back(32059);
        internal_counters.push_back(32144);
        internal_counters.push_back(32229);
        internal_counters.push_back(32314);
        internal_counters.push_back(32399);
        internal_counters.push_back(32484);
        internal_counters.push_back(32569);
        internal_counters.push_back(32654);
        internal_counters.push_back(32739);
        internal_counters.push_back(32824);
        internal_counters.push_back(32909);
        internal_counters.push_back(32994);
        internal_counters.push_back(33079);
        internal_counters.push_back(33164);
        internal_counters.push_back(33249);
        internal_counters.push_back(33334);
        internal_counters.push_back(33419);
        internal_counters.push_back(33504);
        internal_counters.push_back(33589);
        internal_counters.push_back(33674);
        internal_counters.push_back(33759);
        internal_counters.push_back(33844);
        internal_counters.push_back(33929);
        internal_counters.push_back(34014);
        internal_counters.push_back(34099);
        internal_counters.push_back(34184);
        internal_counters.push_back(34269);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64,64,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28914);
        internal_counters.push_back(28999);
        internal_counters.push_back(29084);
        internal_counters.push_back(29169);
        internal_counters.push_back(29254);
        internal_counters.push_back(29339);
        internal_counters.push_back(29424);
        internal_counters.push_back(29509);
        internal_counters.push_back(29594);
        internal_counters.push_back(29679);
        internal_counters.push_back(29764);
        internal_counters.push_back(29849);
        internal_counters.push_back(29934);
        internal_counters.push_back(30019);
        internal_counters.push_back(30104);
        internal_counters.push_back(30189);
        internal_counters.push_back(30274);
        internal_counters.push_back(30359);
        internal_counters.push_back(30444);
        internal_counters.push_back(30529);
        internal_counters.push_back(30614);
        internal_counters.push_back(30699);
        internal_counters.push_back(30784);
        internal_counters.push_back(30869);
        internal_counters.push_back(30954);
        internal_counters.push_back(31039);
        internal_counters.push_back(31124);
        internal_counters.push_back(31209);
        internal_counters.push_back(31294);
        internal_counters.push_back(31379);
        internal_counters.push_back(31464);
        internal_counters.push_back(31549);
        internal_counters.push_back(31634);
        internal_counters.push_back(31719);
        internal_counters.push_back(31804);
        internal_counters.push_back(31889);
        internal_counters.push_back(31974);
        internal_counters.push_back(32059);
        internal_counters.push_back(32144);
        internal_counters.push_back(32229);
        internal_counters.push_back(32314);
        internal_counters.push_back(32399);
        internal_counters.push_back(32484);
        internal_counters.push_back(32569);
        internal_counters.push_back(32654);
        internal_counters.push_back(32739);
        internal_counters.push_back(32824);
        internal_counters.push_back(32909);
        internal_counters.push_back(32994);
        internal_counters.push_back(33079);
        internal_counters.push_back(33164);
        internal_counters.push_back(33249);
        internal_counters.push_back(33334);
        internal_counters.push_back(33419);
        internal_counters.push_back(33504);
        internal_counters.push_back(33589);
        internal_counters.push_back(33674);
        internal_counters.push_back(33759);
        internal_counters.push_back(33844);
        internal_counters.push_back(33929);
        internal_counters.push_back(34014);
        internal_counters.push_back(34099);
        internal_counters.push_back(34184);
        internal_counters.push_back(34269);

        c.DefineDerivedCounter("MemUnitStalledCycles", "GlobalMemory", "Number of GPU cycles the memory unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,max64", "2745659a-0e40-bace-3b9b-86a54f8e4623");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34381);
        internal_counters.push_back(34663);
        internal_counters.push_back(34945);
        internal_counters.push_back(35227);
        internal_counters.push_back(35509);
        internal_counters.push_back(35791);
        internal_counters.push_back(36073);
        internal_counters.push_back(36355);
        internal_counters.push_back(36637);
        internal_counters.push_back(36919);
        internal_counters.push_back(37201);
        internal_counters.push_back(37483);
        internal_counters.push_back(37765);
        internal_counters.push_back(38047);
        internal_counters.push_back(38329);
        internal_counters.push_back(38611);
        internal_counters.push_back(23);

        c.DefineDerivedCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(34381);
        internal_counters.push_back(34663);
        internal_counters.push_back(34945);
        internal_counters.push_back(35227);
        internal_counters.push_back(35509);
        internal_counters.push_back(35791);
        internal_counters.push_back(36073);
        internal_counters.push_back(36355);
        internal_counters.push_back(36637);
        internal_counters.push_back(36919);
        internal_counters.push_back(37201);
        internal_counters.push_back(37483);
        internal_counters.push_back(37765);
        internal_counters.push_back(38047);
        internal_counters.push_back(38329);
        internal_counters.push_back(38611);

        c.DefineDerivedCounter("WriteUnitStalledCycles", "GlobalMemory", "Number of GPU cycles the Write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "ede3305e-abd4-d6bf-6b00-ffc57a29fce3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51967);
        internal_counters.push_back(52050);
        internal_counters.push_back(52133);
        internal_counters.push_back(52216);
        internal_counters.push_back(52299);
        internal_counters.push_back(52382);
        internal_counters.push_back(52465);
        internal_counters.push_back(52548);
        internal_counters.push_back(52631);
        internal_counters.push_back(52714);
        internal_counters.push_back(52797);
        internal_counters.push_back(52880);
        internal_counters.push_back(52963);
        internal_counters.push_back(53046);
        internal_counters.push_back(53129);
        internal_counters.push_back(53212);

        c.DefineDerivedCounter("LocalVidMemBytes", "GlobalMemory", "Number of bytes read from or written to local video memory", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "2a601145-56c1-625b-bedd-66d959c5ecc3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(51969);
        internal_counters.push_back(52052);
        internal_counters.push_back(52135);
        internal_counters.push_back(52218);
        internal_counters.push_back(52301);
        internal_counters.push_back(52384);
        internal_counters.push_back(52467);
        internal_counters.push_back(52550);
        internal_counters.push_back(52633);
        internal_counters.push_back(52716);
        internal_counters.push_back(52799);
        internal_counters.push_back(52882);
        internal_counters.push_back(52965);
        internal_counters.push_back(53048);
        internal_counters.push_back(53131);
        internal_counters.push_back(53214);

        c.DefineDerivedCounter("PcieBytes", "GlobalMemory", "Number of bytes sent and received over the PCIe bus", kGpaDataTypeFloat64, kGpaUsageTypeBytes, 
internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "4bbe92de-f79e-ed39-bfde-9e08390cdb21");
    }
}


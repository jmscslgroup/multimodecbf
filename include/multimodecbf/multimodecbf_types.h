//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: multimodecbf_types.h
//
// Code generated for Simulink model 'multimodecbf'.
//
// Model version                  : 1.57
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Wed Oct 21 13:35:29 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef multimodecbf_types_h_
#define multimodecbf_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_multimodecbf_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_multimodecbf_std_msgs_Float64_

// MsgType=std_msgs/Float64
struct SL_Bus_multimodecbf_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_multimodecbf_std_msgs_Int8_
#define DEFINED_TYPEDEF_FOR_SL_Bus_multimodecbf_std_msgs_Int8_

// MsgType=std_msgs/Int8
struct SL_Bus_multimodecbf_std_msgs_Int8
{
  int8_T Data;
};

#endif

#ifndef struct_e_robotics_slcore_internal_bl_T
#define struct_e_robotics_slcore_internal_bl_T

struct e_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                                // struct_e_robotics_slcore_internal_bl_T

#ifndef struct_ros_slros_internal_block_GetP_T
#define struct_ros_slros_internal_block_GetP_T

struct ros_slros_internal_block_GetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // struct_ros_slros_internal_block_GetP_T

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

// Forward declaration for rtModel
typedef struct tag_RTM_multimodecbf_T RT_MODEL_multimodecbf_T;

#endif                                 // multimodecbf_types_h_

//
// File trailer for generated code.
//
// [EOF]
//

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: multimodecbf.h
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
#ifndef multimodecbf_h_
#define multimodecbf_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "multimodecbf_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <stddef.h>

// Block signals (default storage)
struct B_multimodecbf_T {
  char_T b_zeroDelimTopic[30];
  char_T b_zeroDelimTopic_m[28];
  char_T b_zeroDelimTopic_c[27];
  char_T b_zeroDelimName[25];
  char_T b_zeroDelimName_k[21];
  SL_Bus_multimodecbf_std_msgs_Float64 In1;// '<S18>/In1'
  SL_Bus_multimodecbf_std_msgs_Float64 In1_e;// '<S17>/In1'
  SL_Bus_multimodecbf_std_msgs_Float64 In1_b;// '<S16>/In1'
  SL_Bus_multimodecbf_std_msgs_Float64 In1_bg;// '<S15>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_multimodecbf_T {
  ros_slros_internal_block_GetP_T obj; // '<Root>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_j;// '<Root>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_e;// '<S9>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_jg;// '<S8>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_d;// '<S7>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_a;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S13>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_m;// '<S12>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S11>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_es;// '<S10>/SourceBlock'
  uint32_T durationCounter_1;          // '<S14>/Multimodal CBF'
  uint8_T is_active_c20_multimodecbf;  // '<S14>/Multimodal CBF'
  uint8_T is_c20_multimodecbf;         // '<S14>/Multimodal CBF'
};

// Real-time Model Data Structure
struct tag_RTM_multimodecbf_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_multimodecbf_T multimodecbf_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_multimodecbf_T multimodecbf_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void multimodecbf_initialize(void);
  extern void multimodecbf_step(void);
  extern void multimodecbf_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_multimodecbf_T *const multimodecbf_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S14>/Scope' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'multimodecbf'
//  '<S1>'   : 'multimodecbf/Blank Message1'
//  '<S2>'   : 'multimodecbf/Blank Message2'
//  '<S3>'   : 'multimodecbf/Blank Message3'
//  '<S4>'   : 'multimodecbf/Blank Message4'
//  '<S5>'   : 'multimodecbf/MATLAB Function'
//  '<S6>'   : 'multimodecbf/Publish1'
//  '<S7>'   : 'multimodecbf/Publish2'
//  '<S8>'   : 'multimodecbf/Publish3'
//  '<S9>'   : 'multimodecbf/Publish4'
//  '<S10>'  : 'multimodecbf/Subscribe'
//  '<S11>'  : 'multimodecbf/Subscribe1'
//  '<S12>'  : 'multimodecbf/Subscribe4'
//  '<S13>'  : 'multimodecbf/Subscribe6'
//  '<S14>'  : 'multimodecbf/Subsystem Reference'
//  '<S15>'  : 'multimodecbf/Subscribe/Enabled Subsystem'
//  '<S16>'  : 'multimodecbf/Subscribe1/Enabled Subsystem'
//  '<S17>'  : 'multimodecbf/Subscribe4/Enabled Subsystem'
//  '<S18>'  : 'multimodecbf/Subscribe6/Enabled Subsystem'
//  '<S19>'  : 'multimodecbf/Subsystem Reference/Multimodal CBF'
//  '<S20>'  : 'multimodecbf/Subsystem Reference/base_algorithm'
//  '<S21>'  : 'multimodecbf/Subsystem Reference/Multimodal CBF/nominal'
//  '<S22>'  : 'multimodecbf/Subsystem Reference/Multimodal CBF/stop_and_go'
//  '<S23>'  : 'multimodecbf/Subsystem Reference/Multimodal CBF/transition'
//  '<S24>'  : 'multimodecbf/Subsystem Reference/Multimodal CBF/transition/MATLAB Function'
//  '<S25>'  : 'multimodecbf/Subsystem Reference/base_algorithm/cbf_filter'
//  '<S26>'  : 'multimodecbf/Subsystem Reference/base_algorithm/cbf_filter/MATLAB Function1'

#endif                                 // multimodecbf_h_

//
// File trailer for generated code.
//
// [EOF]
//

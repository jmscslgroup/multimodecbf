//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: multimodecbf.cpp
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
#include "multimodecbf.h"
#include "rtwtypes.h"
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "multimodecbf_types.h"

// Named constants for Chart: '<S14>/Multimodal CBF'
const uint8_T multimodecbf_IN_nominal = 1U;
const uint8_T multimodecbf_IN_stop_and_go = 2U;
const uint8_T multimodecbf_IN_transition = 3U;

// Block signals (default storage)
B_multimodecbf_T multimodecbf_B;

// Block states (default storage)
DW_multimodecbf_T multimodecbf_DW;

// Real-time model
RT_MODEL_multimodecbf_T multimodecbf_M_ = RT_MODEL_multimodecbf_T();
RT_MODEL_multimodecbf_T *const multimodecbf_M = &multimodecbf_M_;

// Model step function
void multimodecbf_step(void)
{
  SL_Bus_multimodecbf_std_msgs_Float64 rtb_BusAssignment1;
  SL_Bus_multimodecbf_std_msgs_Float64 rtb_BusAssignment3;
  SL_Bus_multimodecbf_std_msgs_Float64 rtb_SourceBlock_o2_p_0;
  SL_Bus_multimodecbf_std_msgs_Int8 rtb_BusAssignment2;
  SL_Bus_multimodecbf_std_msgs_Int8 rtb_BusAssignment4;
  real_T d_min;
  real_T e_term;
  real_T rtb_minmax1530;
  int32_T mode;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S10>/SourceBlock'
  b_varargout_1 = Sub_multimodecbf_52.getLatestMessage(&rtb_SourceBlock_o2_p_0);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  // Start for MATLABSystem: '<S10>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S15>/In1'
    multimodecbf_B.In1_bg = rtb_SourceBlock_o2_p_0;
  }

  // End of Start for MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S11>/SourceBlock'
  b_varargout_1 = Sub_multimodecbf_53.getLatestMessage(&rtb_SourceBlock_o2_p_0);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  // Start for MATLABSystem: '<S11>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S16>/In1'
    multimodecbf_B.In1_b = rtb_SourceBlock_o2_p_0;
  }

  // End of Start for MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Chart: '<S14>/Multimodal CBF' incorporates:
  //   Constant: '<S14>/t_min'

  if (multimodecbf_DW.is_active_c20_multimodecbf == 0) {
    multimodecbf_DW.is_active_c20_multimodecbf = 1U;
    multimodecbf_DW.durationCounter_1 = 0U;
    multimodecbf_DW.is_c20_multimodecbf = multimodecbf_IN_nominal;

    // Merge: '<S19>/ Merge ' incorporates:
    //   Constant: '<S21>/d_min_nominal'
    //   SignalConversion generated from: '<S21>/d_min'

    d_min = 15.0;

    // Merge: '<S19>/ Merge 1' incorporates:
    //   Constant: '<S21>/Constant'
    //   SignalConversion generated from: '<S21>/mode'

    mode = 1;

    // Merge: '<S19>/ Merge 2' incorporates:
    //   Constant: '<S21>/Constant1'
    //   SignalConversion generated from: '<S21>/max_accel'

    e_term = 1.5;
  } else {
    switch (multimodecbf_DW.is_c20_multimodecbf) {
     case multimodecbf_IN_nominal:
      if (!(multimodecbf_B.In1_b.Data <= 5.0)) {
        multimodecbf_DW.durationCounter_1 = 0U;
      }

      if ((multimodecbf_B.In1_bg.Data >= (2.0 * multimodecbf_B.In1_b.Data + 15.0)
           - 0.1) && (multimodecbf_DW.durationCounter_1 >= 60U)) {
        multimodecbf_DW.is_c20_multimodecbf = multimodecbf_IN_stop_and_go;

        // Merge: '<S19>/ Merge ' incorporates:
        //   Constant: '<S22>/d_min_stop_and_go'
        //   SignalConversion generated from: '<S22>/d_min'

        d_min = 5.0;

        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S22>/Constant'
        //   SignalConversion generated from: '<S22>/mode'

        mode = 2;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S22>/Constant1'
        //   SignalConversion generated from: '<S22>/max_accel'

        e_term = 1.0;
      } else {
        // Merge: '<S19>/ Merge ' incorporates:
        //   Constant: '<S21>/d_min_nominal'
        //   SignalConversion generated from: '<S21>/d_min'

        d_min = 15.0;

        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S21>/Constant'
        //   SignalConversion generated from: '<S21>/mode'

        mode = 1;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S21>/Constant1'
        //   SignalConversion generated from: '<S21>/max_accel'

        e_term = 1.5;
      }
      break;

     case multimodecbf_IN_stop_and_go:
      if ((multimodecbf_B.In1_b.Data >= 7.5) && (multimodecbf_B.In1_bg.Data >=
           (2.0 * multimodecbf_B.In1_b.Data + 5.0) - 0.1)) {
        multimodecbf_DW.is_c20_multimodecbf = multimodecbf_IN_transition;

        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S23>/Constant1'
        //   SignalConversion generated from: '<S23>/mode'

        mode = 3;

        // MATLAB Function: '<S23>/MATLAB Function'
        e_term = exp((multimodecbf_B.In1_b.Data - 6.25) * 3.0);

        // Merge: '<S19>/ Merge ' incorporates:
        //   MATLAB Function: '<S23>/MATLAB Function'
        //   SignalConversion generated from: '<S23>/d_min'

        d_min = e_term / (e_term + 1.0) * 10.0 + 5.0;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S23>/Constant'
        //   SignalConversion generated from: '<S23>/max_accel'

        e_term = 0.5;
      } else {
        // Merge: '<S19>/ Merge ' incorporates:
        //   Constant: '<S22>/d_min_stop_and_go'
        //   SignalConversion generated from: '<S22>/d_min'

        d_min = 5.0;

        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S22>/Constant'
        //   SignalConversion generated from: '<S22>/mode'

        mode = 2;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S22>/Constant1'
        //   SignalConversion generated from: '<S22>/max_accel'

        e_term = 1.0;
      }
      break;

     default:
      // case IN_transition:
      if (multimodecbf_B.In1_b.Data <= 5.0) {
        multimodecbf_DW.is_c20_multimodecbf = multimodecbf_IN_stop_and_go;

        // Merge: '<S19>/ Merge ' incorporates:
        //   Constant: '<S22>/d_min_stop_and_go'
        //   SignalConversion generated from: '<S22>/d_min'

        d_min = 5.0;

        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S22>/Constant'
        //   SignalConversion generated from: '<S22>/mode'

        mode = 2;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S22>/Constant1'
        //   SignalConversion generated from: '<S22>/max_accel'

        e_term = 1.0;
      } else if ((multimodecbf_B.In1_bg.Data >= (2.0 * multimodecbf_B.In1_b.Data
        + 15.0) - 0.1) && (multimodecbf_B.In1_b.Data > 5.0)) {
        multimodecbf_DW.durationCounter_1 = 0U;
        multimodecbf_DW.is_c20_multimodecbf = multimodecbf_IN_nominal;

        // Merge: '<S19>/ Merge ' incorporates:
        //   Constant: '<S21>/d_min_nominal'
        //   SignalConversion generated from: '<S21>/d_min'

        d_min = 15.0;

        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S21>/Constant'
        //   SignalConversion generated from: '<S21>/mode'

        mode = 1;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S21>/Constant1'
        //   SignalConversion generated from: '<S21>/max_accel'

        e_term = 1.5;
      } else {
        // Merge: '<S19>/ Merge 1' incorporates:
        //   Constant: '<S23>/Constant1'
        //   SignalConversion generated from: '<S23>/mode'

        mode = 3;

        // MATLAB Function: '<S23>/MATLAB Function'
        e_term = exp((multimodecbf_B.In1_b.Data - 6.25) * 3.0);

        // Merge: '<S19>/ Merge ' incorporates:
        //   MATLAB Function: '<S23>/MATLAB Function'
        //   SignalConversion generated from: '<S23>/d_min'

        d_min = e_term / (e_term + 1.0) * 10.0 + 5.0;

        // Merge: '<S19>/ Merge 2' incorporates:
        //   Constant: '<S23>/Constant'
        //   SignalConversion generated from: '<S23>/max_accel'

        e_term = 0.5;
      }
      break;
    }
  }

  if (multimodecbf_B.In1_b.Data <= 5.0) {
    multimodecbf_DW.durationCounter_1++;
  } else {
    multimodecbf_DW.durationCounter_1 = 0U;
  }

  // End of Chart: '<S14>/Multimodal CBF'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S12>/SourceBlock'
  b_varargout_1 = Sub_multimodecbf_54.getLatestMessage(&rtb_SourceBlock_o2_p_0);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  // Start for MATLABSystem: '<S12>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S17>/In1'
    multimodecbf_B.In1_e = rtb_SourceBlock_o2_p_0;
  }

  // End of Start for MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // MATLAB Function: '<S25>/MATLAB Function1' incorporates:
  //   Constant: '<S14>/k'
  //   Constant: '<S14>/t_min'

  d_min = ((multimodecbf_B.In1_bg.Data - 2.0 * multimodecbf_B.In1_b.Data) -
           d_min) * 0.05 + 0.5 * multimodecbf_B.In1_e.Data;

  // MinMax: '<S14>/Min'
  if (d_min <= e_term) {
    e_term = d_min;
  }

  // End of MinMax: '<S14>/Min'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S13>/SourceBlock'
  b_varargout_1 = Sub_multimodecbf_55.getLatestMessage(&rtb_SourceBlock_o2_p_0);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  // Start for MATLABSystem: '<S13>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S18>/In1'
    multimodecbf_B.In1 = rtb_SourceBlock_o2_p_0;
  }

  // End of Start for MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // MATLABSystem: '<Root>/Get Parameter1'
  ParamGet_multimodecbf_97.get_parameter(&d_min);

  // MATLABSystem: '<Root>/Get Parameter2'
  ParamGet_multimodecbf_98.get_parameter(&rtb_minmax1530);

  // MATLAB Function: '<Root>/MATLAB Function' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter1'
  //   MATLABSystem: '<Root>/Get Parameter2'
  //
  if ((multimodecbf_B.In1_b.Data <= d_min) && (e_term <= rtb_minmax1530)) {
    rtb_minmax1530 = -1.0;
  } else {
    rtb_minmax1530 = e_term;
  }

  // MinMax: '<Root>/MinMax' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function'

  if ((e_term <= multimodecbf_B.In1.Data) || rtIsNaN(multimodecbf_B.In1.Data)) {
    d_min = e_term;
  } else {
    d_min = multimodecbf_B.In1.Data;
  }

  if (d_min <= rtb_minmax1530) {
    rtb_minmax1530 = d_min;
  }

  // End of MinMax: '<Root>/MinMax'

  // Saturate: '<Root>/min//max 1.5//-3.0'
  if (rtb_minmax1530 < -3.0) {
    rtb_minmax1530 = -3.0;
  }

  // End of Saturate: '<Root>/min//max 1.5//-3.0'

  // BusAssignment: '<Root>/Bus Assignment1'
  rtb_BusAssignment1.Data = rtb_minmax1530;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_multimodecbf_49.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment4' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'
  //   RelationalOperator: '<Root>/Relational Operator'

  rtb_BusAssignment4.Data = static_cast<int8_T>(rtb_minmax1530 !=
    multimodecbf_B.In1.Data);

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // MATLABSystem: '<S9>/SinkBlock'
  Pub_multimodecbf_113.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<Root>/Publish4'

  // BusAssignment: '<Root>/Bus Assignment3'
  rtb_BusAssignment3.Data = e_term;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_multimodecbf_96.publish(&rtb_BusAssignment3);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion'

  rtb_BusAssignment2.Data = static_cast<int8_T>(mode);

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S7>/SinkBlock'
  Pub_multimodecbf_93.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'
}

// Model initialize function
void multimodecbf_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_0[16];
    char_T b_zeroDelimTopic_2[14];
    char_T b_zeroDelimTopic[10];
    char_T b_zeroDelimTopic_1[8];
    static const char_T b_zeroDelimTopic_3[10] = "lead_dist";
    static const char_T b_zeroDelimTopic_4[10] = "cmd_accel";
    static const char_T b_zeroDelimTopic_5[30] = "multimodecbf_debug/cbf_active";
    static const char_T b_zeroDelimTopic_6[27] = "multimodecbf_debug/cbf_acc";
    static const char_T b_zeroDelimTopic_7[28] = "multimodecbf_debug/cbf_mode";
    static const char_T b_zeroDelimTopic_8[16] = "car/state/vel_x";
    static const char_T b_zeroDelimTopic_9[8] = "rel_vel";
    static const char_T b_zeroDelimTopic_a[14] = "cmd_accel_pre";
    static const char_T b_zeroDelimName[21] = "creep_velocity_limit";
    static const char_T b_zeroDelimName_0[25] = "creep_acceleration_limit";

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    multimodecbf_DW.obj_es.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_es.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Sub_multimodecbf_52.createSubscriber(&b_zeroDelimTopic[0], 1);
    multimodecbf_DW.obj_es.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    multimodecbf_DW.obj_a.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_4[i];
    }

    Pub_multimodecbf_49.createPublisher(&b_zeroDelimTopic[0], 1);
    multimodecbf_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    multimodecbf_DW.obj_e.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      multimodecbf_B.b_zeroDelimTopic[i] = b_zeroDelimTopic_5[i];
    }

    Pub_multimodecbf_113.createPublisher(&multimodecbf_B.b_zeroDelimTopic[0], 1);
    multimodecbf_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    multimodecbf_DW.obj_jg.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_jg.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      multimodecbf_B.b_zeroDelimTopic_c[i] = b_zeroDelimTopic_6[i];
    }

    Pub_multimodecbf_96.createPublisher(&multimodecbf_B.b_zeroDelimTopic_c[0], 1);
    multimodecbf_DW.obj_jg.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    multimodecbf_DW.obj_d.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      multimodecbf_B.b_zeroDelimTopic_m[i] = b_zeroDelimTopic_7[i];
    }

    Pub_multimodecbf_93.createPublisher(&multimodecbf_B.b_zeroDelimTopic_m[0], 1);
    multimodecbf_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    multimodecbf_DW.obj_p.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_8[i];
    }

    Sub_multimodecbf_53.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    multimodecbf_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // Start for MATLABSystem: '<S12>/SourceBlock'
    multimodecbf_DW.obj_m.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_9[i];
    }

    Sub_multimodecbf_54.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    multimodecbf_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // Start for MATLABSystem: '<S13>/SourceBlock'
    multimodecbf_DW.obj_n.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      b_zeroDelimTopic_2[i] = b_zeroDelimTopic_a[i];
    }

    Sub_multimodecbf_55.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    multimodecbf_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // Start for MATLABSystem: '<Root>/Get Parameter1'
    multimodecbf_DW.obj_j.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      multimodecbf_B.b_zeroDelimName_k[i] = b_zeroDelimName[i];
    }

    ParamGet_multimodecbf_97.initialize(&multimodecbf_B.b_zeroDelimName_k[0]);
    ParamGet_multimodecbf_97.initialize_error_codes(0, 1, 2, 3);
    ParamGet_multimodecbf_97.set_initial_value(0.1);
    multimodecbf_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter1'

    // Start for MATLABSystem: '<Root>/Get Parameter2'
    multimodecbf_DW.obj.matlabCodegenIsDeleted = false;
    multimodecbf_DW.obj.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      multimodecbf_B.b_zeroDelimName[i] = b_zeroDelimName_0[i];
    }

    ParamGet_multimodecbf_98.initialize(&multimodecbf_B.b_zeroDelimName[0]);
    ParamGet_multimodecbf_98.initialize_error_codes(0, 1, 2, 3);
    ParamGet_multimodecbf_98.set_initial_value(0.0);
    multimodecbf_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter2'
  }
}

// Model terminate function
void multimodecbf_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!multimodecbf_DW.obj_es.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_es.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  if (!multimodecbf_DW.obj_p.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  if (!multimodecbf_DW.obj_m.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!multimodecbf_DW.obj_n.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for MATLABSystem: '<Root>/Get Parameter1'
  if (!multimodecbf_DW.obj_j.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter1'

  // Terminate for MATLABSystem: '<Root>/Get Parameter2'
  if (!multimodecbf_DW.obj.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter2'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!multimodecbf_DW.obj_a.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  if (!multimodecbf_DW.obj_e.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish4'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!multimodecbf_DW.obj_jg.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_jg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  if (!multimodecbf_DW.obj_d.matlabCodegenIsDeleted) {
    multimodecbf_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'
}

const char_T* RT_MODEL_multimodecbf_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_multimodecbf_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//

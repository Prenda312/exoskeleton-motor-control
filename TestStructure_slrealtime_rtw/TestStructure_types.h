/*
 * TestStructure_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TestStructure".
 *
 * Model version              : 1.311
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Thu Apr 11 15:41:16 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TestStructure_types_h_
#define RTW_HEADER_TestStructure_types_h_
#include "rtwtypes.h"
#include "crl_mutex.hpp"
#ifndef DEFINED_TYPEDEF_FOR_IntentionBus_
#define DEFINED_TYPEDEF_FOR_IntentionBus_

struct IntentionBus
{
  real_T KeyState;
  real_T ForceThreshold_Kick;
  real_T ForceThreshold_Walk;
  real_T ForceVelocityMisMatchState_Kick;
  real_T ForceVelocityMisMatchState_Walk;
  real_T LegPositionMax_Kick;
  real_T LegPositionMax_Walk;
  real_T LegPositionMin_Kick;
  real_T LegPositionMin_Walk;
  real_T LeftFootForce;
  real_T LeftFootPosition;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ControlBus_
#define DEFINED_TYPEDEF_FOR_ControlBus_

struct ControlBus
{
  real_T Motor1Torque;
  real_T Motor2Torque;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SensingBus_
#define DEFINED_TYPEDEF_FOR_SensingBus_

struct SensingBus
{
  real_T Motor1ActuralPosition;
  real_T Motor1ActuralVelocity;
  real_T Motor1ActuralTorque;
  real_T Motor1DCLinkCircuitVoltage;
  real_T Motor2ActuralPosition;
  real_T Motor2ActuralVelocity;
  real_T Motor2ActuralTorque;
  real_T Motor2DCLinkCircuitVoltage;
  real_T Sensor1ADCh1;
  real_T Sensor1ADCh2;
  real_T Sensor1IMUq0;
  real_T Sensor1IMUq1;
  real_T Sensor1IMUq2;
  real_T Sensor1IMUq3;
  real_T Sensor2ADCh1;
  real_T Sensor2ADCh2;
  real_T Sensor2IMUq0;
  real_T Sensor2IMUq1;
  real_T Sensor2IMUq2;
  real_T Sensor2IMUq3;
  real_T Sensor3ADCh1;
  real_T Sensor3ADCh2;
  real_T Sensor3IMUq0;
  real_T Sensor3IMUq1;
  real_T Sensor3IMUq2;
  real_T Sensor3IMUq3;
};

#endif

#ifndef struct_b_dsp_BiquadFilter_0_TestStructure_T
#define struct_b_dsp_BiquadFilter_0_TestStructure_T

struct b_dsp_BiquadFilter_0_TestStructure_T
{
  int32_T S0_isInitialized;
  real_T W0_ZERO_STATES[4];
  real_T W1_POLE_STATES[4];
  int32_T W2_PreviousNumChannels;
  real_T P0_ICRTP;
  real_T P1_RTP1COEFF[6];
  real_T P2_RTP2COEFF[4];
  real_T P3_RTP3COEFF[3];
  boolean_T P4_RTP_COEFF3_BOOL[3];
  real_T P5_IC2RTP;
};

#endif                         /* struct_b_dsp_BiquadFilter_0_TestStructure_T */

#ifndef struct_b_dspcodegen_BiquadFilter_TestStructure_T
#define struct_b_dspcodegen_BiquadFilter_TestStructure_T

struct b_dspcodegen_BiquadFilter_TestStructure_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_dsp_BiquadFilter_0_TestStructure_T cSFunObject;
};

#endif                    /* struct_b_dspcodegen_BiquadFilter_TestStructure_T */

#ifndef struct_cell_wrap_TestStructure_T
#define struct_cell_wrap_TestStructure_T

struct cell_wrap_TestStructure_T
{
  uint32_T f1[8];
};

#endif                                 /* struct_cell_wrap_TestStructure_T */

#ifndef struct_dsp_simulink_LowpassFilter_TestStructure_T
#define struct_dsp_simulink_LowpassFilter_TestStructure_T

struct dsp_simulink_LowpassFilter_TestStructure_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_TestStructure_T inputVarSize;
  int32_T NumChannels;
  b_dspcodegen_BiquadFilter_TestStructure_T *FilterObj;
  b_dspcodegen_BiquadFilter_TestStructure_T _pobj0;
};

#endif                   /* struct_dsp_simulink_LowpassFilter_TestStructure_T */

#ifndef struct_c_dsp_internal_MedianFilterCG_TestStructure_T
#define struct_c_dsp_internal_MedianFilterCG_TestStructure_T

struct c_dsp_internal_MedianFilterCG_TestStructure_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pWinLen;
  real_T pBuf[80];
  real_T pHeap[80];
  real_T pMidHeap;
  real_T pIdx;
  real_T pPos[80];
  real_T pMinHeapLength;
  real_T pMaxHeapLength;
};

#endif                /* struct_c_dsp_internal_MedianFilterCG_TestStructure_T */

#ifndef struct_dsp_simulink_MedianFilter_TestStructure_T
#define struct_dsp_simulink_MedianFilter_TestStructure_T

struct dsp_simulink_MedianFilter_TestStructure_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_TestStructure_T inputVarSize;
  int32_T NumChannels;
  c_dsp_internal_MedianFilterCG_TestStructure_T pMID;
};

#endif                    /* struct_dsp_simulink_MedianFilter_TestStructure_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_TestStructure_T RT_MODEL_TestStructure_T;

#endif                                 /* RTW_HEADER_TestStructure_types_h_ */

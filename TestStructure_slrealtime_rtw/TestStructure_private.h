/*
 * TestStructure_private.h
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

#ifndef RTW_HEADER_TestStructure_private_h_
#define RTW_HEADER_TestStructure_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "multiword_types.h"
#include "TestStructure.h"
#include "TestStructure_cal.h"
#include "TestStructure_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern void TestStructure_SwitchCaseActionSubsystem(real_T rtu_In1, real_T
  *rty_Out1);
extern void TestStructure_SwitchCaseActionSubsystem1(real_T rtu_In1, real_T
  *rty_Default);
extern void TestStructure_LLB_Dispaly(real_T rtu_Enable, real_T rtu_Freq, real_T
  rtu_Torque_Up, real_T rtu_Torque_Down, real_T rtu_Pos_Up, real_T rtu_Pos_Down,
  real_T *rty_Freq_Out, real_T *rty_Torque_Up_Out, real_T *rty_Torque_Down_Out,
  real_T *rty_Pos_Up_Out, real_T *rty_Pos_Down_Out,
  DW_LLB_Dispaly_TestStructure_T *localDW);
extern void TestStructure_LLBAutoTask_Init(DW_LLBAutoTask_TestStructure_T
  *localDW, TestStructure_LLBAutoTask_cal_type *TestStructure_PageSwitching_arg);
extern void TestStructure_LLBAutoTask_Reset(DW_LLBAutoTask_TestStructure_T
  *localDW, TestStructure_LLBAutoTask_cal_type *TestStructure_PageSwitching_arg);
extern void TestStructure_LLBAutoTask_Disable(DW_LLBAutoTask_TestStructure_T
  *localDW);
extern void TestStructure_LLBAutoTask(real_T rtu_Enable, real_T rtu_FinishIndex,
  real_T *rty_TaskFinished, real_T *rty_TaskIndex, real_T *rty_Motor1Torque,
  real_T *rty_Motor2Torque, B_LLBAutoTask_TestStructure_T *localB,
  DW_LLBAutoTask_TestStructure_T *localDW, TestStructure_LLBAutoTask_cal_type
  *TestStructure_PageSwitching_arg);
extern void TestStructure_Subsystem2(real_T rtu_u1, real_T rtu_PositiveLimit,
  real_T rtu_Profile, real_T *rty_Out1, B_Subsystem2_TestStructure_T *localB,
  TestStructure_Subsystem2_cal_type *TestStructure_PageSwitching_arg);
extern void TestStructure_Subsystem3(real_T rtu_u1, real_T rtu_NegtiveLimit,
  real_T rtu_Profile, real_T *rty_Out1, B_Subsystem3_TestStructure_T *localB,
  DW_Subsystem3_TestStructure_T *localDW, TestStructure_Subsystem3_cal_type
  *TestStructure_PageSwitching_arg);
extern void TestStructure_Chart_Init(B_Chart_TestStructure_T *localB,
  DW_Chart_TestStructure_T *localDW);
extern void TestStructure_Chart_Reset(B_Chart_TestStructure_T *localB,
  DW_Chart_TestStructure_T *localDW);
extern void TestStructure_Chart(real_T rtu_ResetState, real_T rtu_Period, real_T
  rtu_SampleTime, real_T rtu_IntVal, B_Chart_TestStructure_T *localB,
  DW_Chart_TestStructure_T *localDW);
extern void TestStructure_IfActionSubsystem8(real_T rtu_y, real_T *rty_Out1);
extern void TestStructure_MATLABFunction1(real_T rtu_u, real_T rtu_Pos,
  B_MATLABFunction1_TestStructure_T *localB);
extern void TestStructure_ULLockTask_Init(B_ULLockTask_TestStructure_T *localB,
  DW_ULLockTask_TestStructure_T *localDW, TestStructure_ULLockTask_cal_type
  *TestStructure_PageSwitching_arg);
extern void TestStructure_ULLockTask_Reset(DW_ULLockTask_TestStructure_T
  *localDW, TestStructure_ULLockTask_cal_type *TestStructure_PageSwitching_arg);
extern void TestStructure_ULLockTask_Disable(DW_ULLockTask_TestStructure_T
  *localDW);
extern void TestStructure_ULLockTask(real_T rtu_Enable, real_T rtu_FinishIndex,
  real_T *rty_TaskFinished, real_T *rty_TaskIndex, B_ULLockTask_TestStructure_T *
  localB, DW_ULLockTask_TestStructure_T *localDW,
  TestStructure_ULLockTask_cal_type *TestStructure_PageSwitching_arg);
extern void TestStructure_LowpassFilter2_Init(DW_LowpassFilter2_TestStructure_T *
  localDW);
extern void TestStructure_LowpassFilter2(real_T rtu_0,
  B_LowpassFilter2_TestStructure_T *localB, DW_LowpassFilter2_TestStructure_T
  *localDW);
extern void TestStructure_MedianFilter1_Init(DW_MedianFilter1_TestStructure_T
  *localDW);
extern void TestStructure_MedianFilter1(real_T rtu_0,
  B_MedianFilter1_TestStructure_T *localB, DW_MedianFilter1_TestStructure_T
  *localDW);
extern void TestStructure_LowpassFilter2_Term(DW_LowpassFilter2_TestStructure_T *
  localDW);
extern void TestStructure_MedianFilter1_Term(DW_MedianFilter1_TestStructure_T
  *localDW);

#endif                                 /* RTW_HEADER_TestStructure_private_h_ */

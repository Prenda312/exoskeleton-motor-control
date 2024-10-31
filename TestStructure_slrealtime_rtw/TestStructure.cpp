/*
 * TestStructure.cpp
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

#include "TestStructure.h"
#include "rtwtypes.h"
#include "TestStructure_cal.h"
#include "TestStructure_types.h"
#include "TestStructure_private.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <cmath>
#include <cstring>
#include "rte_TestStructure_parameters.h"
#include "crl_mutex.hpp"
#include <string.h>
#include "look1_binlxpw.h"
#define Robot_MDLREF_HIDE_CHILD_
#include "Robot.h"

/* Named constants for Chart: '<S92>/Chart' */
const int32_T TestStructure_CALL_EVENT = -1;
const uint32_T TestStructure_IN_IntStateOperation = 1U;
const uint8_T TestStructure_IN_NO_ACTIVE_CHILD = 0U;
const uint32_T TestStructure_IN_ResetOperation = 2U;

/* Named constants for Chart: '<S3>/ControlPannelStateMachine' */
const int32_T TestStructure_CALL_EVENT_f = -1;
const uint32_T TestStructure_IN_LLB_Auto = 1U;
const uint32_T TestStructure_IN_LLB_Manual_Freq = 2U;
const uint32_T TestStructure_IN_LLB_Manual_Pos = 3U;
const uint32_T TestStructure_IN_LLB_Manual_Torque = 4U;
const uint32_T TestStructure_IN_LLFK_Auto = 1U;
const uint32_T TestStructure_IN_LLFK_Manual_Freq = 2U;
const uint32_T TestStructure_IN_LLFK_Manual_Pos = 3U;
const uint32_T TestStructure_IN_LLFK_Manual_Torque = 4U;
const uint32_T TestStructure_IN_LLW_Auto = 1U;
const uint32_T TestStructure_IN_LLW_Manual_Freq = 2U;
const uint32_T TestStructure_IN_LLW_Manual_Pos = 3U;
const uint32_T TestStructure_IN_LLW_Manual_Torque = 4U;
const uint32_T TestStructure_IN_LowerLimb_Breaststroke = 1U;
const uint32_T TestStructure_IN_LowerLimb_FlutterKick = 2U;
const uint32_T TestStructure_IN_LowerLimb_FlutterKick_m = 5U;
const uint32_T TestStructure_IN_LowerLimb_Follow = 3U;
const uint32_T TestStructure_IN_LowerLimb_Follow_e = 1U;
const uint32_T TestStructure_IN_LowerLimb_Walk = 4U;
const uint32_T TestStructure_IN_LowerLimb_Walk_n = 5U;
const uint32_T TestStructure_IN_Lower_Limb_Breaststroke = 5U;
const uint8_T TestStructure_IN_NO_ACTIVE_CHILD_g = 0U;
const uint32_T TestStructure_IN_Pause = 1U;
const uint32_T TestStructure_IN_Start = 2U;
const uint32_T TestStructure_IN_Start_h = 1U;
const uint32_T TestStructure_IN_Stop = 3U;
const uint32_T TestStructure_IN_Stop_b = 5U;
const uint32_T TestStructure_IN_UpperLimb_Lock = 2U;
const uint32_T TestStructure_IN_UpperLimb_UnLock = 3U;

/* Named constants for Chart: '<S3>/KnobStateMachine' */
const uint32_T TestStructure_IN_Adjust = 1U;
const uint32_T TestStructure_IN_Freq_Down = 1U;
const uint32_T TestStructure_IN_Freq_Up = 2U;
const uint32_T TestStructure_IN_LLB_Adjust = 2U;
const uint32_T TestStructure_IN_LLB_Adjust_i = 1U;
const uint32_T TestStructure_IN_LLB_Auto_j = 2U;
const uint32_T TestStructure_IN_LLB_Freq_Adjust = 3U;
const uint32_T TestStructure_IN_LLB_Pos_Adjust = 4U;
const uint32_T TestStructure_IN_LLB_Pos_Adjust_d = 1U;
const uint32_T TestStructure_IN_LLB_Torque_Adjust = 5U;
const uint32_T TestStructure_IN_LLB_Torque_Adjust_e = 1U;
const uint32_T TestStructure_IN_LLFK_Adjust = 3U;
const uint32_T TestStructure_IN_LLFK_Adjust_h = 1U;
const uint32_T TestStructure_IN_LLFK_Auto_k = 2U;
const uint32_T TestStructure_IN_LLFK_Freq_Adjust = 3U;
const uint32_T TestStructure_IN_LLFK_Pos_Adjust = 4U;
const uint32_T TestStructure_IN_LLFK_Pos_Adjust_p = 1U;
const uint32_T TestStructure_IN_LLFK_Torque_Adjust = 5U;
const uint32_T TestStructure_IN_LLFK_Torque_Adjust_f = 1U;
const uint32_T TestStructure_IN_LLF_Adjust = 4U;
const uint32_T TestStructure_IN_LLW_Adjust = 5U;
const uint32_T TestStructure_IN_LLW_Adjust_m = 1U;
const uint32_T TestStructure_IN_LLW_Auto_j = 2U;
const uint32_T TestStructure_IN_LLW_Freq_Adjust = 3U;
const uint32_T TestStructure_IN_LLW_Pos_Adjust = 4U;
const uint32_T TestStructure_IN_LLW_Pos_Adjust_m = 1U;
const uint32_T TestStructure_IN_LLW_Torque_Adjust = 5U;
const uint32_T TestStructure_IN_LLW_Torque_Adjust_m = 1U;
const uint32_T TestStructure_IN_Negtive_Down = 2U;
const uint32_T TestStructure_IN_Negtive_Up = 3U;
const uint32_T TestStructure_IN_Positive_Down = 4U;
const uint32_T TestStructure_IN_Positive_Up = 5U;

/* Named constants for Chart: '<S3>/LowerLimbTaskControlStateMachine' */
const uint32_T TestStructure_IN_LLB = 1U;
const uint32_T TestStructure_IN_LLBAutoTask = 2U;
const uint32_T TestStructure_IN_LLBManualTask = 3U;
const uint32_T TestStructure_IN_LLFK = 2U;
const uint32_T TestStructure_IN_LLFKAutoTask = 2U;
const uint32_T TestStructure_IN_LLFKManualTask = 3U;
const uint32_T TestStructure_IN_LLFK_l = 1U;
const uint32_T TestStructure_IN_LLFTask = 3U;
const uint32_T TestStructure_IN_LLW = 4U;
const uint32_T TestStructure_IN_LLWAutoTask = 2U;
const uint32_T TestStructure_IN_LLWManualTask = 3U;
const uint32_T TestStructure_IN_LLW_c = 1U;
const uint32_T TestStructure_IN_PauseTask = 1U;
const uint32_T TestStructure_IN_StartTask = 2U;
const uint32_T TestStructure_IN_Start_b = 5U;
const uint32_T TestStructure_IN_StopTask = 3U;

/* Named constants for Chart: '<S3>/UpperLimbTaskControlStateMachine' */
const uint32_T TestStructure_IN_LockTask = 1U;
const uint32_T TestStructure_IN_UnlockTask = 2U;

/* Tasks */
RT_MODEL_TestStructure_T task_M_[2];
RT_MODEL_TestStructure_T *task_M[2];

/* Timing bridge */
rtTimingBridge timingBridge[1];

/* Block signals (default storage) */
B_TestStructure_T TestStructure_B;

/* Block states (default storage) */
DW_TestStructure_T TestStructure_DW;

/* Real-time model */
RT_MODEL_TestStructure_T TestStructure_M_ = RT_MODEL_TestStructure_T();
RT_MODEL_TestStructure_T *const TestStructure_M = &TestStructure_M_;

/* Forward declaration for local functions */
static void TestStructure_MedianFilterCG_resetImpl
  (c_dsp_internal_MedianFilterCG_TestStructure_T *obj);
static void TestStructure_MedianFilterCG_trickleDownMin
  (c_dsp_internal_MedianFilterCG_TestStructure_T *obj, real_T i);
static void TestStructure_MedianFilterCG_trickleDownMax
  (c_dsp_internal_MedianFilterCG_TestStructure_T *obj, real_T i);

/* Forward declaration for local functions */
static void TestStructure_enter_internal_LowerLimb_Follow(void);
static void TestStructure_enter_atomic_LLB_Manual_Freq(void);
static void TestStructure_enter_atomic_LLB_Manual_Torque(void);
static void TestStructure_enter_atomic_LLB_Auto(void);
static void TestStructure_enter_atomic_LLB_Manual_Pos(void);
static void TestStructure_enter_atomic_LowerLimb_Walk(void);
static void TestStructure_enter_atomic_LLW_Auto(void);
static void TestStructure_enter_atomic_LLW_Manual_Freq(void);
static void TestStructure_enter_atomic_LLW_Manual_Pos(void);
static void TestStructure_enter_atomic_LLW_Manual_Torque(void);
static void TestStructure_enter_internal_LowerLimb_Walk(void);
static void TestStructure_LowerLimb_Breaststroke(void);
static void TestStructure_enter_atomic_LLFK_Manual_Freq(void);
static void TestStructure_enter_atomic_LLFK_Manual_Torque(void);
static void TestStructure_enter_atomic_LLFK_Auto(void);
static void TestStructure_enter_atomic_LLFK_Manual_Pos(void);
static void TestStructure_enter_atomic_Lower_Limb_Breaststroke(void);
static void TestStructure_enter_internal_LowerLimb_Breaststroke(void);
static void TestStructure_LowerLimb_FlutterKick(void);
static void TestStructure_enter_atomic_LowerLimb_FlutterKick(void);
static void TestStructure_enter_internal_LowerLimb_FlutterKick(void);
static void TestStructure_LowerLimb_Walk(void);
static void TestStructure_enter_internal_Stop(void);
static void TestStructure_enter_atomic_UpperLimb_UnLock(void);
static void TestStructure_Start(void);
static void TestStructure_enter_atomic_LLW_Torque_Adjust(void);
static void TestStructure_LLW_Torque_Adjust(void);
static void TestStructure_enter_atomic_LLW_Freq_Adjust(void);
static void TestStructure_enter_atomic_LLW_Pos_Adjust(void);
static void TestStructure_LLW_Pos_Adjust(void);
static void TestStructure_exit_internal_LLW_Adjust(void);
static void TestStructure_LLW_Adjust(void);
static void TestStructure_enter_atomic_LLB_Torque_Adjust(void);
static void TestStructure_LLB_Torque_Adjust(void);
static void TestStructure_enter_atomic_LLB_Freq_Adjust(void);
static void TestStructure_enter_atomic_LLB_Pos_Adjust(void);
static void TestStructure_LLB_Pos_Adjust(void);
static void TestStructure_exit_internal_LLB_Adjust(void);
static void TestStructure_enter_atomic_LLFK_Torque_Adjust(void);
static void TestStructure_LLFK_Torque_Adjust(void);
static void TestStructure_enter_atomic_LLFK_Freq_Adjust(void);
static void TestStructure_enter_atomic_LLFK_Pos_Adjust(void);
static void TestStructure_LLFK_Pos_Adjust(void);
static void TestStructure_exit_internal_LLFK_Adjust(void);
static void TestStructure_LLFK_Adjust(void);
static void TestStructure_Adjust(void);

/* This function updates active task counters and model execution time. */
void AdvanceTaskCounters(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++TestStructure_M->Timing.clockTick0)) {
    ++TestStructure_M->Timing.clockTickH0;
  }

  TestStructure_M->Timing.t[0] = TestStructure_M->Timing.clockTick0 *
    TestStructure_M->Timing.stepSize0 + TestStructure_M->Timing.clockTickH0 *
    TestStructure_M->Timing.stepSize0 * 4294967296.0;
}

/*
 * Output and update for action system:
 *    '<S30>/Switch Case Action Subsystem'
 *    '<S33>/Switch Case Action Subsystem'
 *    '<S36>/Switch Case Action Subsystem'
 *    '<S39>/Switch Case Action Subsystem'
 *    '<S42>/Switch Case Action Subsystem'
 *    '<S45>/Switch Case Action Subsystem'
 *    '<S48>/Switch Case Action Subsystem'
 *    '<S51>/Switch Case Action Subsystem'
 *    '<S54>/Switch Case Action Subsystem'
 *    '<S57>/Switch Case Action Subsystem'
 *    ...
 */
void TestStructure_SwitchCaseActionSubsystem(real_T rtu_In1, real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S31>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S30>/Switch Case Action Subsystem1'
 *    '<S33>/Switch Case Action Subsystem1'
 *    '<S36>/Switch Case Action Subsystem1'
 *    '<S39>/Switch Case Action Subsystem1'
 *    '<S42>/Switch Case Action Subsystem1'
 *    '<S45>/Switch Case Action Subsystem1'
 *    '<S48>/Switch Case Action Subsystem1'
 *    '<S51>/Switch Case Action Subsystem1'
 *    '<S54>/Switch Case Action Subsystem1'
 *    '<S57>/Switch Case Action Subsystem1'
 *    ...
 */
void TestStructure_SwitchCaseActionSubsystem1(real_T rtu_In1, real_T
  *rty_Default)
{
  /* SignalConversion generated from: '<S32>/In1' */
  *rty_Default = rtu_In1;
}

/*
 * Output and update for enable system:
 *    '<S3>/LLB_Dispaly'
 *    '<S3>/LLFK_Display'
 *    '<S3>/LLW_Dispaly'
 */
void TestStructure_LLB_Dispaly(real_T rtu_Enable, real_T rtu_Freq, real_T
  rtu_Torque_Up, real_T rtu_Torque_Down, real_T rtu_Pos_Up, real_T rtu_Pos_Down,
  real_T *rty_Freq_Out, real_T *rty_Torque_Up_Out, real_T *rty_Torque_Down_Out,
  real_T *rty_Pos_Up_Out, real_T *rty_Pos_Down_Out,
  DW_LLB_Dispaly_TestStructure_T *localDW)
{
  /* Outputs for Enabled SubSystem: '<S3>/LLB_Dispaly' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* SignalConversion generated from: '<S13>/Freq' */
    *rty_Freq_Out = rtu_Freq;

    /* SignalConversion generated from: '<S13>/Torque_Up' */
    *rty_Torque_Up_Out = rtu_Torque_Up;

    /* SignalConversion generated from: '<S13>/Torque_Down' */
    *rty_Torque_Down_Out = rtu_Torque_Down;

    /* SignalConversion generated from: '<S13>/Pos_Up' */
    *rty_Pos_Up_Out = rtu_Pos_Up;

    /* SignalConversion generated from: '<S13>/Pos_Down' */
    *rty_Pos_Down_Out = rtu_Pos_Down;
    srUpdateBC(localDW->LLB_Dispaly_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S3>/LLB_Dispaly' */
}

/*
 * System initialize for enable system:
 *    '<S6>/LLBAutoTask'
 *    '<S6>/LLFKAutoTask'
 *    '<S6>/LLFTask'
 *    '<S6>/LLWAutoTask'
 *    '<S6>/PauseTask'
 */
void TestStructure_LLBAutoTask_Init(DW_LLBAutoTask_TestStructure_T *localDW,
  TestStructure_LLBAutoTask_cal_type *TestStructure_PageSwitching_arg)
{
  /* InitializeConditions for DiscreteIntegrator: '<S77>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE =
    TestStructure_PageSwitching_arg->DiscreteTimeIntegrator_IC;
}

/*
 * System reset for enable system:
 *    '<S6>/LLBAutoTask'
 *    '<S6>/LLFKAutoTask'
 *    '<S6>/LLFTask'
 *    '<S6>/LLWAutoTask'
 *    '<S6>/PauseTask'
 */
void TestStructure_LLBAutoTask_Reset(DW_LLBAutoTask_TestStructure_T *localDW,
  TestStructure_LLBAutoTask_cal_type *TestStructure_PageSwitching_arg)
{
  /* InitializeConditions for DiscreteIntegrator: '<S77>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE =
    TestStructure_PageSwitching_arg->DiscreteTimeIntegrator_IC;
}

/*
 * Disable for enable system:
 *    '<S6>/LLBAutoTask'
 *    '<S6>/LLFKAutoTask'
 *    '<S6>/LLFTask'
 *    '<S6>/LLWAutoTask'
 *    '<S6>/PauseTask'
 */
void TestStructure_LLBAutoTask_Disable(DW_LLBAutoTask_TestStructure_T *localDW)
{
  localDW->LLBAutoTask_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S6>/LLBAutoTask'
 *    '<S6>/LLFKAutoTask'
 *    '<S6>/LLFTask'
 *    '<S6>/LLWAutoTask'
 *    '<S6>/PauseTask'
 */
void TestStructure_LLBAutoTask(real_T rtu_Enable, real_T rtu_FinishIndex, real_T
  *rty_TaskFinished, real_T *rty_TaskIndex, real_T *rty_Motor1Torque, real_T
  *rty_Motor2Torque, B_LLBAutoTask_TestStructure_T *localB,
  DW_LLBAutoTask_TestStructure_T *localDW, TestStructure_LLBAutoTask_cal_type
  *TestStructure_PageSwitching_arg)
{
  /* Outputs for Enabled SubSystem: '<S6>/LLBAutoTask' incorporates:
   *  EnablePort: '<S77>/Enable'
   */
  if (rtu_Enable > 0.0) {
    if (!localDW->LLBAutoTask_MODE) {
      TestStructure_LLBAutoTask_Reset(localDW, TestStructure_PageSwitching_arg);
      localDW->LLBAutoTask_MODE = true;
    }

    /* DiscreteIntegrator: '<S77>/Discrete-Time Integrator' */
    localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

    /* If: '<S77>/If6' incorporates:
     *  Constant: '<S77>/Constant7'
     */
    if (localB->DiscreteTimeIntegrator > 4.0) {
      /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem12' incorporates:
       *  ActionPort: '<S88>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem(rtu_FinishIndex, rty_TaskFinished);

      /* End of Outputs for SubSystem: '<S77>/If Action Subsystem12' */
    } else {
      /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem13' incorporates:
       *  ActionPort: '<S89>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_PageSwitching_arg->Constant7_Value, rty_TaskFinished);

      /* End of Outputs for SubSystem: '<S77>/If Action Subsystem13' */
    }

    /* End of If: '<S77>/If6' */

    /* SignalConversion generated from: '<S77>/TaskIndex' incorporates:
     *  Constant: '<S77>/Constant'
     */
    *rty_TaskIndex = TestStructure_PageSwitching_arg->Constant_Value;

    /* SignalConversion generated from: '<S77>/Motor1Torque' incorporates:
     *  Constant: '<S77>/Constant1'
     */
    *rty_Motor1Torque = TestStructure_PageSwitching_arg->Constant1_Value;

    /* SignalConversion generated from: '<S77>/Motor2Torque' incorporates:
     *  Constant: '<S77>/Constant2'
     */
    *rty_Motor2Torque = TestStructure_PageSwitching_arg->Constant2_Value;

    /* Update for DiscreteIntegrator: '<S77>/Discrete-Time Integrator' incorporates:
     *  Constant: '<S77>/Constant8'
     */
    localDW->DiscreteTimeIntegrator_DSTATE +=
      TestStructure_PageSwitching_arg->DiscreteTimeIntegrator_gainval *
      TestStructure_PageSwitching_arg->Constant8_Value;
    srUpdateBC(localDW->LLBAutoTask_SubsysRanBC);
  } else if (localDW->LLBAutoTask_MODE) {
    TestStructure_LLBAutoTask_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S6>/LLBAutoTask' */
}

/*
 * Output and update for action system:
 *    '<S78>/Subsystem2'
 *    '<S78>/Subsystem'
 *    '<S83>/Subsystem2'
 *    '<S83>/Subsystem'
 */
void TestStructure_Subsystem2(real_T rtu_u1, real_T rtu_PositiveLimit, real_T
  rtu_Profile, real_T *rty_Out1, B_Subsystem2_TestStructure_T *localB,
  TestStructure_Subsystem2_cal_type *TestStructure_PageSwitching_arg)
{
  real_T u0;

  /* MinMax: '<S95>/MinMax' incorporates:
   *  Constant: '<S95>/Constant15'
   */
  u0 = TestStructure_PageSwitching_arg->Constant15_Value;
  if ((!(u0 <= rtu_Profile)) && (!rtIsNaN(rtu_Profile))) {
    u0 = rtu_Profile;
  }

  /* MinMax: '<S95>/MinMax' */
  localB->MinMax = u0;

  /* If: '<S95>/If2' */
  if (rtu_u1 <= rtu_PositiveLimit) {
    /* Outputs for IfAction SubSystem: '<S95>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S103>/Action Port'
     */
    TestStructure_SwitchCaseActionSubsystem(rtu_Profile, rty_Out1);

    /* End of Outputs for SubSystem: '<S95>/If Action Subsystem5' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    TestStructure_SwitchCaseActionSubsystem(localB->MinMax, rty_Out1);

    /* End of Outputs for SubSystem: '<S95>/If Action Subsystem4' */
  }

  /* End of If: '<S95>/If2' */
}

/*
 * Output and update for action system:
 *    '<S78>/Subsystem3'
 *    '<S78>/Subsystem1'
 *    '<S83>/Subsystem3'
 *    '<S83>/Subsystem1'
 */
void TestStructure_Subsystem3(real_T rtu_u1, real_T rtu_NegtiveLimit, real_T
  rtu_Profile, real_T *rty_Out1, B_Subsystem3_TestStructure_T *localB,
  DW_Subsystem3_TestStructure_T *localDW, TestStructure_Subsystem3_cal_type
  *TestStructure_PageSwitching_arg)
{
  real_T u0;

  /* MinMax: '<S96>/MinMax' incorporates:
   *  Constant: '<S96>/Constant16'
   */
  u0 = TestStructure_PageSwitching_arg->Constant16_Value;
  if ((!(u0 >= rtu_Profile)) && (!rtIsNaN(rtu_Profile))) {
    u0 = rtu_Profile;
  }

  /* MinMax: '<S96>/MinMax' */
  localB->MinMax = u0;

  /* If: '<S96>/If1' */
  if (rtu_u1 >= rtu_NegtiveLimit) {
    /* Outputs for IfAction SubSystem: '<S96>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    /* SignalConversion generated from: '<S105>/Motor1Pos' */
    *rty_Out1 = rtu_Profile;

    /* End of Outputs for SubSystem: '<S96>/If Action Subsystem2' */

    /* Update for IfAction SubSystem: '<S96>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    /* Update for If: '<S96>/If1' */
    srUpdateBC(localDW->IfActionSubsystem2_SubsysRanBC);

    /* End of Update for SubSystem: '<S96>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    TestStructure_SwitchCaseActionSubsystem(localB->MinMax, rty_Out1);

    /* End of Outputs for SubSystem: '<S96>/If Action Subsystem1' */
  }

  /* End of If: '<S96>/If1' */
}

/*
 * System initialize for atomic system:
 *    '<S92>/Chart'
 *    '<S116>/Chart'
 */
void TestStructure_Chart_Init(B_Chart_TestStructure_T *localB,
  DW_Chart_TestStructure_T *localDW)
{
  localDW->sfEvent = TestStructure_CALL_EVENT;
  localDW->is_active_c1_TestStructure = 0U;
  localDW->is_c1_TestStructure = TestStructure_IN_NO_ACTIVE_CHILD;
  localDW->Count = 0.0;
  localB->Input = 0.0;
  localB->Reset = 0.0;
}

/*
 * System reset for atomic system:
 *    '<S92>/Chart'
 *    '<S116>/Chart'
 */
void TestStructure_Chart_Reset(B_Chart_TestStructure_T *localB,
  DW_Chart_TestStructure_T *localDW)
{
  localDW->sfEvent = TestStructure_CALL_EVENT;
  localDW->is_active_c1_TestStructure = 0U;
  localDW->is_c1_TestStructure = TestStructure_IN_NO_ACTIVE_CHILD;
  localDW->Count = 0.0;
  localB->Input = 0.0;
  localB->Reset = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S92>/Chart'
 *    '<S116>/Chart'
 */
void TestStructure_Chart(real_T rtu_ResetState, real_T rtu_Period, real_T
  rtu_SampleTime, real_T rtu_IntVal, B_Chart_TestStructure_T *localB,
  DW_Chart_TestStructure_T *localDW)
{
  localDW->sfEvent = TestStructure_CALL_EVENT;

  /* Chart: '<S92>/Chart' */
  if (localDW->is_active_c1_TestStructure == 0U) {
    localDW->is_active_c1_TestStructure = 1U;
    localDW->is_c1_TestStructure = TestStructure_IN_IntStateOperation;
    localDW->Count = 1.0 / (rtu_Period * rtu_SampleTime);
    localB->Input = 1.0 / rtu_Period;
    localB->Reset = 0.0;
  } else if (localDW->is_c1_TestStructure == TestStructure_IN_IntStateOperation)
  {
    boolean_T out;
    out = ((rtu_IntVal >= rtu_Period * rtu_SampleTime * localDW->Count) ||
           (rtu_ResetState == 1.0));
    if (out) {
      localDW->is_c1_TestStructure = TestStructure_IN_ResetOperation;
      localB->Reset = 1.0;
    } else {
      localDW->Count = 1.0 / (rtu_Period * rtu_SampleTime);
      localB->Input = 1.0 / rtu_Period;
      localB->Reset = 0.0;
    }

    /* case IN_ResetOperation: */
  } else if (rtu_IntVal < rtu_Period * rtu_SampleTime * localDW->Count) {
    localDW->is_c1_TestStructure = TestStructure_IN_IntStateOperation;
    localDW->Count = 1.0 / (rtu_Period * rtu_SampleTime);
    localB->Input = 1.0 / rtu_Period;
    localB->Reset = 0.0;
  } else {
    localB->Reset = 1.0;
  }

  /* End of Chart: '<S92>/Chart' */
}

/*
 * Output and update for action system:
 *    '<S85>/If Action Subsystem8'
 *    '<S85>/If Action Subsystem10'
 *    '<S85>/If Action Subsystem11'
 */
void TestStructure_IfActionSubsystem8(real_T rtu_y, real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S140>/y' */
  *rty_Out1 = rtu_y;
}

/*
 * Output and update for atomic system:
 *    '<S85>/MATLAB Function1'
 *    '<S85>/MATLAB Function2'
 *    '<S85>/MATLAB Function3'
 *    '<S85>/MATLAB Function4'
 */
void TestStructure_MATLABFunction1(real_T rtu_u, real_T rtu_Pos,
  B_MATLABFunction1_TestStructure_T *localB)
{
  real_T u0;
  real_T u1;
  real_T y;
  if (rtIsNaN(rtu_u)) {
    y = (rtNaN);
  } else if (rtu_u < 0.0) {
    y = -1.0;
  } else {
    y = (rtu_u > 0.0);
  }

  u0 = std::abs(rtu_u);
  u1 = std::abs(rtu_Pos) * 0.1;
  if ((u0 <= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  localB->y = y * u1;
}

/*
 * System initialize for enable system:
 *    '<S6>/ULLockTask'
 *    '<S6>/ULUnLockTask'
 */
void TestStructure_ULLockTask_Init(B_ULLockTask_TestStructure_T *localB,
  DW_ULLockTask_TestStructure_T *localDW, TestStructure_ULLockTask_cal_type
  *TestStructure_PageSwitching_arg)
{
  /* Start for Constant: '<S86>/Constant1' */
  localB->Constant1 = TestStructure_PageSwitching_arg->Constant1_Value;

  /* Start for Constant: '<S86>/Constant2' */
  localB->Constant2 = TestStructure_PageSwitching_arg->Constant2_Value;

  /* InitializeConditions for DiscreteIntegrator: '<S86>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE =
    TestStructure_PageSwitching_arg->DiscreteTimeIntegrator_IC;

  /* SystemInitialize for SignalConversion generated from: '<S86>/Motor3Torque' */
  localB->OutportBufferForMotor3Torque = localB->Constant1;

  /* SystemInitialize for SignalConversion generated from: '<S86>/Motor4Torque' */
  localB->OutportBufferForMotor4Torque = localB->Constant2;
}

/*
 * System reset for enable system:
 *    '<S6>/ULLockTask'
 *    '<S6>/ULUnLockTask'
 */
void TestStructure_ULLockTask_Reset(DW_ULLockTask_TestStructure_T *localDW,
  TestStructure_ULLockTask_cal_type *TestStructure_PageSwitching_arg)
{
  /* InitializeConditions for DiscreteIntegrator: '<S86>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE =
    TestStructure_PageSwitching_arg->DiscreteTimeIntegrator_IC;
}

/*
 * Disable for enable system:
 *    '<S6>/ULLockTask'
 *    '<S6>/ULUnLockTask'
 */
void TestStructure_ULLockTask_Disable(DW_ULLockTask_TestStructure_T *localDW)
{
  localDW->ULLockTask_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S6>/ULLockTask'
 *    '<S6>/ULUnLockTask'
 */
void TestStructure_ULLockTask(real_T rtu_Enable, real_T rtu_FinishIndex, real_T *
  rty_TaskFinished, real_T *rty_TaskIndex, B_ULLockTask_TestStructure_T *localB,
  DW_ULLockTask_TestStructure_T *localDW, TestStructure_ULLockTask_cal_type
  *TestStructure_PageSwitching_arg)
{
  /* Outputs for Enabled SubSystem: '<S6>/ULLockTask' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  if (rtu_Enable > 0.0) {
    if (!localDW->ULLockTask_MODE) {
      TestStructure_ULLockTask_Reset(localDW, TestStructure_PageSwitching_arg);
      localDW->ULLockTask_MODE = true;
    }

    /* DiscreteIntegrator: '<S86>/Discrete-Time Integrator' */
    localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;

    /* If: '<S86>/If6' incorporates:
     *  Constant: '<S86>/Constant7'
     */
    if (localB->DiscreteTimeIntegrator > 4.0) {
      /* Outputs for IfAction SubSystem: '<S86>/If Action Subsystem12' incorporates:
       *  ActionPort: '<S146>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem(rtu_FinishIndex, rty_TaskFinished);

      /* End of Outputs for SubSystem: '<S86>/If Action Subsystem12' */
    } else {
      /* Outputs for IfAction SubSystem: '<S86>/If Action Subsystem13' incorporates:
       *  ActionPort: '<S147>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_PageSwitching_arg->Constant7_Value, rty_TaskFinished);

      /* End of Outputs for SubSystem: '<S86>/If Action Subsystem13' */
    }

    /* End of If: '<S86>/If6' */

    /* SignalConversion generated from: '<S86>/TaskIndex' incorporates:
     *  Constant: '<S86>/Constant'
     */
    *rty_TaskIndex = TestStructure_PageSwitching_arg->Constant_Value;

    /* Constant: '<S86>/Constant1' */
    localB->Constant1 = TestStructure_PageSwitching_arg->Constant1_Value;

    /* SignalConversion generated from: '<S86>/Motor3Torque' */
    localB->OutportBufferForMotor3Torque = localB->Constant1;

    /* Constant: '<S86>/Constant2' */
    localB->Constant2 = TestStructure_PageSwitching_arg->Constant2_Value;

    /* SignalConversion generated from: '<S86>/Motor4Torque' */
    localB->OutportBufferForMotor4Torque = localB->Constant2;

    /* Update for DiscreteIntegrator: '<S86>/Discrete-Time Integrator' incorporates:
     *  Constant: '<S86>/Constant8'
     */
    localDW->DiscreteTimeIntegrator_DSTATE +=
      TestStructure_PageSwitching_arg->DiscreteTimeIntegrator_gainval *
      TestStructure_PageSwitching_arg->Constant8_Value;
    srUpdateBC(localDW->ULLockTask_SubsysRanBC);
  } else if (localDW->ULLockTask_MODE) {
    TestStructure_ULLockTask_Disable(localDW);
  }

  /* End of Outputs for SubSystem: '<S6>/ULLockTask' */
}

/* System initialize for atomic system: */
void TestStructure_LowpassFilter2_Init(DW_LowpassFilter2_TestStructure_T
  *localDW)
{
  b_dsp_BiquadFilter_0_TestStructure_T *b_obj_0;
  b_dspcodegen_BiquadFilter_TestStructure_T *IIR;
  dsp_simulink_LowpassFilter_TestStructure_T *b_obj;
  dsp_simulink_LowpassFilter_TestStructure_T *obj;
  dsp_simulink_LowpassFilter_TestStructure_T *obj_0;
  static const real_T tmp[6] = { 0.0034953597064341238, -0.006578732550914344,
    0.003495359706434123, 0.013092782752895108, 0.013092782752895108, 0.0 };

  /* Start for MATLABSystem: '<S2>/Lowpass Filter2' */
  localDW->obj._pobj0.matlabCodegenIsDeleted = true;
  localDW->obj.matlabCodegenIsDeleted = true;
  b_obj = &localDW->obj;
  b_obj->isInitialized = 0;
  b_obj->NumChannels = -1;
  b_obj->matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  b_obj = &localDW->obj;
  b_obj->isSetupComplete = false;
  b_obj->isInitialized = 1;
  obj = b_obj;
  if (obj->NumChannels == -1) {
    obj->NumChannels = 1;
  }

  obj = b_obj;
  obj_0 = obj;
  IIR = &obj->_pobj0;
  IIR->isInitialized = 0;
  IIR->isInitialized = 0;
  b_obj_0 = &IIR->cSFunObject;

  /* System object Constructor function: dsp.BiquadFilter */
  b_obj_0->P0_ICRTP = 0.0;
  for (int32_T i = 0; i < 6; i++) {
    b_obj_0->P1_RTP1COEFF[i] = tmp[i];
  }

  b_obj_0->P2_RTP2COEFF[0] = -1.9813548836227339;
  b_obj_0->P2_RTP2COEFF[1] = 0.98194953202832114;
  b_obj_0->P2_RTP2COEFF[2] = -0.98185800405776213;
  b_obj_0->P2_RTP2COEFF[3] = 0.0;
  b_obj_0->P3_RTP3COEFF[0] = 0.0;
  b_obj_0->P3_RTP3COEFF[1] = 0.0;
  b_obj_0->P3_RTP3COEFF[2] = 0.0;
  b_obj_0->P4_RTP_COEFF3_BOOL[0] = false;
  b_obj_0->P4_RTP_COEFF3_BOOL[1] = false;
  b_obj_0->P4_RTP_COEFF3_BOOL[2] = false;
  b_obj_0->P5_IC2RTP = 0.0;
  IIR->matlabCodegenIsDeleted = false;
  obj_0->FilterObj = IIR;
  b_obj->isSetupComplete = true;

  /* End of Start for MATLABSystem: '<S2>/Lowpass Filter2' */

  /* InitializeConditions for MATLABSystem: '<S2>/Lowpass Filter2' */
  b_obj = &localDW->obj;
  IIR = b_obj->FilterObj;
  if (IIR->isInitialized == 1) {
    b_obj_0 = &IIR->cSFunObject;

    /* System object Initialization function: dsp.BiquadFilter */
    b_obj_0->W0_ZERO_STATES[0] = b_obj_0->P0_ICRTP;
    b_obj_0->W0_ZERO_STATES[1] = b_obj_0->P0_ICRTP;
    b_obj_0->W0_ZERO_STATES[2] = b_obj_0->P0_ICRTP;
    b_obj_0->W0_ZERO_STATES[3] = b_obj_0->P0_ICRTP;
    b_obj_0->W1_POLE_STATES[0] = b_obj_0->P5_IC2RTP;
    b_obj_0->W1_POLE_STATES[1] = b_obj_0->P5_IC2RTP;
    b_obj_0->W1_POLE_STATES[2] = b_obj_0->P5_IC2RTP;
    b_obj_0->W1_POLE_STATES[3] = b_obj_0->P5_IC2RTP;
  }

  /* End of InitializeConditions for MATLABSystem: '<S2>/Lowpass Filter2' */
}

/* Output and update for atomic system: */
void TestStructure_LowpassFilter2(real_T rtu_0, B_LowpassFilter2_TestStructure_T
  *localB, DW_LowpassFilter2_TestStructure_T *localDW)
{
  b_dsp_BiquadFilter_0_TestStructure_T *obj_3;
  b_dspcodegen_BiquadFilter_TestStructure_T *obj_0;
  b_dspcodegen_BiquadFilter_TestStructure_T *obj_1;
  b_dspcodegen_BiquadFilter_TestStructure_T *obj_2;
  dsp_simulink_LowpassFilter_TestStructure_T *obj;
  real_T numAccum;
  real_T stageIn;

  /* MATLABSystem: '<S2>/Lowpass Filter2' */
  obj = &localDW->obj;
  obj_0 = obj->FilterObj;
  if (obj_0->isInitialized != 1) {
    obj_1 = obj_0;
    obj_2 = obj_1;
    obj_2->isSetupComplete = false;
    obj_2->isInitialized = 1;
    obj_2->isSetupComplete = true;
    obj_3 = &obj_1->cSFunObject;

    /* System object Initialization function: dsp.BiquadFilter */
    obj_3->W0_ZERO_STATES[0] = obj_3->P0_ICRTP;
    obj_3->W0_ZERO_STATES[1] = obj_3->P0_ICRTP;
    obj_3->W0_ZERO_STATES[2] = obj_3->P0_ICRTP;
    obj_3->W0_ZERO_STATES[3] = obj_3->P0_ICRTP;
    obj_3->W1_POLE_STATES[0] = obj_3->P5_IC2RTP;
    obj_3->W1_POLE_STATES[1] = obj_3->P5_IC2RTP;
    obj_3->W1_POLE_STATES[2] = obj_3->P5_IC2RTP;
    obj_3->W1_POLE_STATES[3] = obj_3->P5_IC2RTP;
  }

  obj_3 = &obj_0->cSFunObject;

  /* System object Outputs function: dsp.BiquadFilter */
  stageIn = rtu_0;
  numAccum = obj_3->P1_RTP1COEFF[0] * stageIn;
  numAccum += obj_3->W0_ZERO_STATES[0] * obj_3->P1_RTP1COEFF[1];
  numAccum += obj_3->W0_ZERO_STATES[1] * obj_3->P1_RTP1COEFF[2];
  numAccum -= obj_3->P2_RTP2COEFF[0] * obj_3->W1_POLE_STATES[0];
  numAccum -= obj_3->P2_RTP2COEFF[1] * obj_3->W1_POLE_STATES[1];
  obj_3->W0_ZERO_STATES[1] = obj_3->W0_ZERO_STATES[0];
  obj_3->W0_ZERO_STATES[0] = stageIn;
  obj_3->W1_POLE_STATES[1] = obj_3->W1_POLE_STATES[0];
  obj_3->W1_POLE_STATES[0] = numAccum;
  stageIn = numAccum;
  numAccum = obj_3->P1_RTP1COEFF[3] * stageIn;
  numAccum += obj_3->W0_ZERO_STATES[2] * obj_3->P1_RTP1COEFF[4];
  numAccum += obj_3->W0_ZERO_STATES[3] * obj_3->P1_RTP1COEFF[5];
  numAccum -= obj_3->P2_RTP2COEFF[2] * obj_3->W1_POLE_STATES[2];
  numAccum -= obj_3->P2_RTP2COEFF[3] * obj_3->W1_POLE_STATES[3];
  obj_3->W0_ZERO_STATES[3] = obj_3->W0_ZERO_STATES[2];
  obj_3->W0_ZERO_STATES[2] = stageIn;
  obj_3->W1_POLE_STATES[3] = obj_3->W1_POLE_STATES[2];
  obj_3->W1_POLE_STATES[2] = numAccum;

  /* MATLABSystem: '<S2>/Lowpass Filter2' */
  localB->Rightback = numAccum;
}

/* Termination for atomic system: */
void TestStructure_LowpassFilter2_Term(DW_LowpassFilter2_TestStructure_T
  *localDW)
{
  b_dspcodegen_BiquadFilter_TestStructure_T *obj_0;
  dsp_simulink_LowpassFilter_TestStructure_T *obj;

  /* Terminate for MATLABSystem: '<S2>/Lowpass Filter2' */
  obj = &localDW->obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete) {
      obj_0 = obj->FilterObj;
      if (obj_0->isInitialized == 1) {
        obj_0->isInitialized = 2;
      }

      obj->NumChannels = -1;
    }
  }

  obj_0 = &localDW->obj._pobj0;
  if (!obj_0->matlabCodegenIsDeleted) {
    obj_0->matlabCodegenIsDeleted = true;
    if (obj_0->isInitialized == 1) {
      obj_0->isInitialized = 2;
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/Lowpass Filter2' */
}

static void TestStructure_MedianFilterCG_resetImpl
  (c_dsp_internal_MedianFilterCG_TestStructure_T *obj)
{
  real_T cnt2;
  real_T wlen;
  std::memset(&obj->pBuf[0], 0, 80U * sizeof(real_T));
  std::memset(&obj->pPos[0], 0, 80U * sizeof(real_T));
  std::memset(&obj->pHeap[0], 0, 80U * sizeof(real_T));
  obj->pWinLen = 80.0;
  obj->pIdx = obj->pWinLen;
  wlen = (obj->pWinLen + 1.0) / 2.0;
  wlen = std::ceil(wlen);
  obj->pMidHeap = wlen;
  wlen = (obj->pWinLen - 1.0) / 2.0;
  if (wlen < 0.0) {
    wlen = std::ceil(wlen);
  } else {
    wlen = std::floor(wlen);
  }

  obj->pMinHeapLength = wlen;
  wlen = obj->pWinLen / 2.0;
  if (wlen < 0.0) {
    wlen = std::ceil(wlen);
  } else {
    wlen = std::floor(wlen);
  }

  obj->pMaxHeapLength = wlen;
  wlen = 1.0;
  cnt2 = obj->pWinLen;
  for (int32_T i = 0; i < 80; i++) {
    int32_T b_index;
    int32_T r;
    boolean_T rEQ0;
    b_index = 80 - i;
    r = static_cast<int32_T>(std::fmod(static_cast<real_T>(b_index), 2.0));
    rEQ0 = (r == 0);
    if (rEQ0) {
      r = 0;
    }

    if (r == 0) {
      obj->pPos[b_index - 1] = wlen;
      wlen++;
    } else {
      obj->pPos[b_index - 1] = cnt2;
      cnt2--;
    }

    obj->pHeap[static_cast<int32_T>(obj->pPos[b_index - 1]) - 1] = b_index;
  }
}

static void TestStructure_MedianFilterCG_trickleDownMin
  (c_dsp_internal_MedianFilterCG_TestStructure_T *obj, real_T i)
{
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_0;
  boolean_T exitg1;
  exitg1 = false;
  while ((!exitg1) && (i <= obj->pMinHeapLength)) {
    real_T ind1;
    real_T x;
    boolean_T flag;
    if ((i > 1.0) && (i < obj->pMinHeapLength)) {
      obj_0 = obj;
      ind1 = i + 1.0;
      flag = (obj_0->pBuf[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>
               (ind1 + obj_0->pMidHeap) - 1]) - 1] < obj_0->pBuf
              [static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(i +
                obj_0->pMidHeap) - 1]) - 1]);
      if (flag) {
        i++;
      }
    }

    x = i / 2.0;
    if (x < 0.0) {
      x = std::ceil(x);
    } else {
      x = std::floor(x);
    }

    obj_0 = obj;
    flag = (obj_0->pBuf[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(i
              + obj_0->pMidHeap) - 1]) - 1] < obj_0->pBuf[static_cast<int32_T>
            (obj_0->pHeap[static_cast<int32_T>(x + obj_0->pMidHeap) - 1]) - 1]);
    if (!flag) {
      exitg1 = true;
    } else {
      real_T temp;
      x = i / 2.0;
      if (x < 0.0) {
        x = std::ceil(x);
      } else {
        x = std::floor(x);
      }

      obj_0 = obj;
      ind1 = i;
      ind1 += obj_0->pMidHeap;
      x += obj_0->pMidHeap;
      temp = obj_0->pHeap[static_cast<int32_T>(ind1) - 1];
      obj_0->pHeap[static_cast<int32_T>(ind1) - 1] = obj_0->pHeap
        [static_cast<int32_T>(x) - 1];
      obj_0->pHeap[static_cast<int32_T>(x) - 1] = temp;
      obj_0->pPos[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(ind1) -
        1]) - 1] = ind1;
      obj_0->pPos[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(x) - 1])
        - 1] = x;
      i *= 2.0;
    }
  }
}

static void TestStructure_MedianFilterCG_trickleDownMax
  (c_dsp_internal_MedianFilterCG_TestStructure_T *obj, real_T i)
{
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_0;
  boolean_T exitg1;
  exitg1 = false;
  while ((!exitg1) && (i >= -obj->pMaxHeapLength)) {
    real_T ind2;
    real_T x;
    boolean_T flag;
    if ((i < -1.0) && (i > -obj->pMaxHeapLength)) {
      obj_0 = obj;
      ind2 = i - 1.0;
      flag = (obj_0->pBuf[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>
               (i + obj_0->pMidHeap) - 1]) - 1] < obj_0->pBuf
              [static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(ind2 +
                obj_0->pMidHeap) - 1]) - 1]);
      if (flag) {
        i--;
      }
    }

    x = i / 2.0;
    if (x < 0.0) {
      x = std::ceil(x);
    } else {
      x = std::floor(x);
    }

    obj_0 = obj;
    flag = (obj_0->pBuf[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(x
              + obj_0->pMidHeap) - 1]) - 1] < obj_0->pBuf[static_cast<int32_T>
            (obj_0->pHeap[static_cast<int32_T>(i + obj_0->pMidHeap) - 1]) - 1]);
    if (!flag) {
      exitg1 = true;
    } else {
      real_T temp;
      x = i / 2.0;
      if (x < 0.0) {
        x = std::ceil(x);
      } else {
        x = std::floor(x);
      }

      obj_0 = obj;
      ind2 = i;
      x += obj_0->pMidHeap;
      ind2 += obj_0->pMidHeap;
      temp = obj_0->pHeap[static_cast<int32_T>(x) - 1];
      obj_0->pHeap[static_cast<int32_T>(x) - 1] = obj_0->pHeap
        [static_cast<int32_T>(ind2) - 1];
      obj_0->pHeap[static_cast<int32_T>(ind2) - 1] = temp;
      obj_0->pPos[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(x) - 1])
        - 1] = x;
      obj_0->pPos[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>(ind2) -
        1]) - 1] = ind2;
      i *= 2.0;
    }
  }
}

/* System initialize for atomic system: */
void TestStructure_MedianFilter1_Init(DW_MedianFilter1_TestStructure_T *localDW)
{
  c_dsp_internal_MedianFilterCG_TestStructure_T *b_obj_0;
  dsp_simulink_MedianFilter_TestStructure_T *b_obj;
  dsp_simulink_MedianFilter_TestStructure_T *obj;

  /* Start for MATLABSystem: '<S2>/Median Filter1' */
  localDW->obj.matlabCodegenIsDeleted = true;
  b_obj = &localDW->obj;
  b_obj->isInitialized = 0;
  b_obj->NumChannels = -1;
  b_obj->matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  b_obj = &localDW->obj;
  b_obj->isSetupComplete = false;
  b_obj->isInitialized = 1;
  obj = b_obj;
  obj->NumChannels = 1;
  b_obj_0 = &obj->pMID;
  b_obj_0->isInitialized = 0;
  b_obj_0->isInitialized = 0;
  b_obj->isSetupComplete = true;

  /* InitializeConditions for MATLABSystem: '<S2>/Median Filter1' */
  b_obj = &localDW->obj;
  b_obj_0 = &b_obj->pMID;
  if (b_obj_0->isInitialized == 1) {
    TestStructure_MedianFilterCG_resetImpl(b_obj_0);
  }

  /* End of InitializeConditions for MATLABSystem: '<S2>/Median Filter1' */
}

/* Output and update for atomic system: */
void TestStructure_MedianFilter1(real_T rtu_0, B_MedianFilter1_TestStructure_T
  *localB, DW_MedianFilter1_TestStructure_T *localDW)
{
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_0;
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_1;
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_2;
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_3;
  dsp_simulink_MedianFilter_TestStructure_T *obj;
  real_T p;
  real_T vprev;

  /* MATLABSystem: '<S2>/Median Filter1' */
  obj = &localDW->obj;
  obj_0 = &obj->pMID;
  if (obj_0->isInitialized != 1) {
    obj_1 = obj_0;
    obj_2 = obj_1;
    obj_2->isSetupComplete = false;
    obj_2->isInitialized = 1;
    obj_2->isSetupComplete = true;
    TestStructure_MedianFilterCG_resetImpl(obj_1);
  }

  obj_1 = obj_0;
  vprev = obj_1->pBuf[static_cast<int32_T>(obj_1->pIdx) - 1];
  obj_1->pBuf[static_cast<int32_T>(obj_1->pIdx) - 1] = rtu_0;
  p = obj_1->pPos[static_cast<int32_T>(obj_1->pIdx) - 1];
  obj_1->pIdx++;
  if (obj_1->pWinLen + 1.0 == obj_1->pIdx) {
    obj_1->pIdx = 1.0;
  }

  if (p > obj_1->pMidHeap) {
    if (vprev < rtu_0) {
      TestStructure_MedianFilterCG_trickleDownMin(obj_1, (p - obj_1->pMidHeap) *
        2.0);
    } else {
      boolean_T exitg1;
      boolean_T flag;
      obj_2 = obj_1;
      p -= obj_2->pMidHeap;
      exitg1 = false;
      while ((!exitg1) && (p > 0.0)) {
        vprev = p / 2.0;
        vprev = std::floor(vprev);
        obj_3 = obj_2;
        flag = (obj_3->pBuf[static_cast<int32_T>(obj_3->pHeap
                 [static_cast<int32_T>(p + obj_3->pMidHeap) - 1]) - 1] <
                obj_3->pBuf[static_cast<int32_T>(obj_3->pHeap
                 [static_cast<int32_T>(vprev + obj_3->pMidHeap) - 1]) - 1]);
        if (!flag) {
          exitg1 = true;
        } else {
          real_T ind2;
          real_T temp;
          vprev = p / 2.0;
          vprev = std::floor(vprev);
          obj_3 = obj_2;
          ind2 = p;
          ind2 += obj_3->pMidHeap;
          vprev += obj_3->pMidHeap;
          temp = obj_3->pHeap[static_cast<int32_T>(ind2) - 1];
          obj_3->pHeap[static_cast<int32_T>(ind2) - 1] = obj_3->pHeap[
            static_cast<int32_T>(vprev) - 1];
          obj_3->pHeap[static_cast<int32_T>(vprev) - 1] = temp;
          obj_3->pPos[static_cast<int32_T>(obj_3->pHeap[static_cast<int32_T>
            (ind2) - 1]) - 1] = ind2;
          obj_3->pPos[static_cast<int32_T>(obj_3->pHeap[static_cast<int32_T>
            (vprev) - 1]) - 1] = vprev;
          p /= 2.0;
          p = std::floor(p);
        }
      }

      flag = (p == 0.0);
      if (flag) {
        TestStructure_MedianFilterCG_trickleDownMax(obj_1, -1.0);
      }
    }
  } else if (p < obj_1->pMidHeap) {
    if (rtu_0 < vprev) {
      TestStructure_MedianFilterCG_trickleDownMax(obj_1, (p - obj_1->pMidHeap) *
        2.0);
    } else {
      boolean_T exitg1;
      boolean_T flag;
      obj_2 = obj_1;
      p -= obj_2->pMidHeap;
      exitg1 = false;
      while ((!exitg1) && (p < 0.0)) {
        vprev = p / 2.0;
        if (vprev < 0.0) {
          vprev = std::ceil(vprev);
        } else {
          vprev = -0.0;
        }

        obj_3 = obj_2;
        flag = (obj_3->pBuf[static_cast<int32_T>(obj_3->pHeap
                 [static_cast<int32_T>(vprev + obj_3->pMidHeap) - 1]) - 1] <
                obj_3->pBuf[static_cast<int32_T>(obj_3->pHeap
                 [static_cast<int32_T>(p + obj_3->pMidHeap) - 1]) - 1]);
        if (!flag) {
          exitg1 = true;
        } else {
          real_T ind2;
          real_T temp;
          vprev = p / 2.0;
          if (vprev < 0.0) {
            vprev = std::ceil(vprev);
          } else {
            vprev = -0.0;
          }

          obj_3 = obj_2;
          ind2 = p;
          vprev += obj_3->pMidHeap;
          ind2 += obj_3->pMidHeap;
          temp = obj_3->pHeap[static_cast<int32_T>(vprev) - 1];
          obj_3->pHeap[static_cast<int32_T>(vprev) - 1] = obj_3->pHeap[
            static_cast<int32_T>(ind2) - 1];
          obj_3->pHeap[static_cast<int32_T>(ind2) - 1] = temp;
          obj_3->pPos[static_cast<int32_T>(obj_3->pHeap[static_cast<int32_T>
            (vprev) - 1]) - 1] = vprev;
          obj_3->pPos[static_cast<int32_T>(obj_3->pHeap[static_cast<int32_T>
            (ind2) - 1]) - 1] = ind2;
          p /= 2.0;
          if (p < 0.0) {
            p = std::ceil(p);
          } else {
            p = -0.0;
          }
        }
      }

      flag = (p == 0.0);
      if (flag) {
        TestStructure_MedianFilterCG_trickleDownMin(obj_1, 1.0);
      }
    }
  } else {
    if (obj_1->pMaxHeapLength != 0.0) {
      TestStructure_MedianFilterCG_trickleDownMax(obj_1, -1.0);
    }

    if (obj_1->pMinHeapLength > 0.0) {
      TestStructure_MedianFilterCG_trickleDownMin(obj_1, 1.0);
    }
  }

  p = obj_0->pBuf[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>
    (obj_0->pMidHeap) - 1]) - 1];
  p = (obj_0->pBuf[static_cast<int32_T>(obj_0->pHeap[static_cast<int32_T>
        (obj_0->pMidHeap - 1.0) - 1]) - 1] + p) / 2.0;

  /* MATLABSystem: '<S2>/Median Filter1' */
  localB->MedianFilter1 = p;
}

/* Termination for atomic system: */
void TestStructure_MedianFilter1_Term(DW_MedianFilter1_TestStructure_T *localDW)
{
  c_dsp_internal_MedianFilterCG_TestStructure_T *obj_0;
  dsp_simulink_MedianFilter_TestStructure_T *obj;

  /* Terminate for MATLABSystem: '<S2>/Median Filter1' */
  obj = &localDW->obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete) {
      obj->NumChannels = -1;
      obj_0 = &obj->pMID;
      if (obj_0->isInitialized == 1) {
        obj_0->isInitialized = 2;
      }
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/Median Filter1' */
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_internal_LowerLimb_Follow(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[17] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'o', 'l', 'l', 'o', 'w' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  TestStructure_DW.is_LowerLimb_Follow = TestStructure_IN_LowerLimb_Follow_e;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 17; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[17] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLB_Manual_Freq(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T d[15] = { 'L', 'L', 'B', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'F', 'r', 'e', 'q' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 23; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[23] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLB_Manual_Torque(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T d[17] = { 'L', 'L', 'B', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'T', 'o', 'r', 'q', 'u', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 23; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[23] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 17; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[17] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLB_Auto(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T d[8] = { 'L', 'L', 'B', '_', 'A', 'u', 't', 'o' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 23; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[23] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[8] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLB_Manual_Pos(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T d[14] = { 'L', 'L', 'B', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'P', 'o', 's' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 23; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[23] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 14; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[14] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LowerLimb_Walk(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLW_Auto(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T d[8] = { 'L', 'L', 'W', '_', 'A', 'u', 't', 'o' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[8] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLW_Manual_Freq(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T d[15] = { 'L', 'L', 'W', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'F', 'r', 'e', 'q' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLW_Manual_Pos(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T d[14] = { 'L', 'L', 'W', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'P', 'o', 's' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 14; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[14] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLW_Manual_Torque(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T d[17] = { 'L', 'L', 'W', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'T', 'o', 'r', 'q', 'u', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 17; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[17] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_internal_LowerLimb_Walk(void)
{
  switch (TestStructure_DW.was_LowerLimb_Walk) {
   case TestStructure_IN_LLW_Auto:
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Auto;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Auto;
    TestStructure_enter_atomic_LLW_Auto();
    break;

   case TestStructure_IN_LLW_Manual_Freq:
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Freq;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Freq;
    TestStructure_enter_atomic_LLW_Manual_Freq();
    break;

   case TestStructure_IN_LLW_Manual_Pos:
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Pos;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Pos;
    TestStructure_enter_atomic_LLW_Manual_Pos();
    break;

   case TestStructure_IN_LLW_Manual_Torque:
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Torque;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Torque;
    TestStructure_enter_atomic_LLW_Manual_Torque();
    break;

   case TestStructure_IN_LowerLimb_Walk_n:
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LowerLimb_Walk_n;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LowerLimb_Walk_n;
    TestStructure_enter_atomic_LowerLimb_Walk();
    break;

   default:
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LowerLimb_Walk_n;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LowerLimb_Walk_n;
    TestStructure_enter_atomic_LowerLimb_Walk();
    break;
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_LowerLimb_Breaststroke(void)
{
  boolean_T out;
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[4] = { 'S', 't', 'o', 'p' };

  static const char_T d[4] = { 'S', 't', 'o', 'p' };

  static const char_T e[4] = { 'S', 't', 'o', 'p' };

  static const char_T f[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T g[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T h[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T i[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  static const char_T j[8] = { 'L', 'L', 'B', '_', 'A', 'u', 't', 'o' };

  static const char_T k[15] = { 'L', 'L', 'B', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'F', 'r', 'e', 'q' };

  static const char_T l[14] = { 'L', 'L', 'B', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'P', 'o', 's' };

  static const char_T m[17] = { 'L', 'L', 'B', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'T', 'o', 'r', 'q', 'u', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  out = ((TestStructure_DW.PatternButtonPressed_temp == 0.0) &&
         (TestStructure_B.PatternButton > 0.0));
  if (out) {
    TestStructure_DW.PatternButtonPressed_temp = 1.0;
    TestStructure_DW.is_LowerLimb_Breaststroke =
      TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Walk;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Walk;
    TestStructure_enter_internal_LowerLimb_Walk();
  } else {
    switch (TestStructure_DW.is_LowerLimb_Breaststroke) {
     case TestStructure_IN_LLB_Auto:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Breaststroke =
          TestStructure_IN_LLB_Manual_Freq;
        TestStructure_DW.was_LowerLimb_Breaststroke =
          TestStructure_IN_LLB_Manual_Freq;
        TestStructure_enter_atomic_LLB_Manual_Freq();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &b[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &f[0];
        for (int32_T i_0 = 0; i_0 < 23; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[23] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &j[0];
        for (int32_T i_0 = 0; i_0 < 8; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[8] = '\x00';
      }
      break;

     case TestStructure_IN_LLB_Manual_Freq:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Breaststroke =
          TestStructure_IN_LLB_Manual_Torque;
        TestStructure_DW.was_LowerLimb_Breaststroke =
          TestStructure_IN_LLB_Manual_Torque;
        TestStructure_enter_atomic_LLB_Manual_Torque();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &c[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &g[0];
        for (int32_T i_0 = 0; i_0 < 23; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[23] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &k[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
      }
      break;

     case TestStructure_IN_LLB_Manual_Pos:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Breaststroke = TestStructure_IN_LLB_Auto;
        TestStructure_DW.was_LowerLimb_Breaststroke = TestStructure_IN_LLB_Auto;
        TestStructure_enter_atomic_LLB_Auto();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &d[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &h[0];
        for (int32_T i_0 = 0; i_0 < 23; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[23] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &l[0];
        for (int32_T i_0 = 0; i_0 < 14; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[14] = '\x00';
      }
      break;

     case TestStructure_IN_LLB_Manual_Torque:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Breaststroke =
          TestStructure_IN_LLB_Manual_Pos;
        TestStructure_DW.was_LowerLimb_Breaststroke =
          TestStructure_IN_LLB_Manual_Pos;
        TestStructure_enter_atomic_LLB_Manual_Pos();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &e[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &i[0];
        for (int32_T i_0 = 0; i_0 < 23; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[23] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &m[0];
        for (int32_T i_0 = 0; i_0 < 17; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[17] = '\x00';
      }
      break;

     default:
      /* case IN_Lower_Limb_Breaststroke: */
      TestStructure_DW.is_LowerLimb_Breaststroke =
        TestStructure_IN_LLB_Manual_Freq;
      TestStructure_DW.was_LowerLimb_Breaststroke =
        TestStructure_IN_LLB_Manual_Freq;
      TestStructure_enter_atomic_LLB_Manual_Freq();
      break;
    }
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLFK_Manual_Freq(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T d[16] = { 'L', 'L', 'F', 'K', '_', 'M', 'a', 'n', 'u', 'a',
    'l', '_', 'F', 'r', 'e', 'q' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 22; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[22] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 16; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[16] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLFK_Manual_Torque(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T d[18] = { 'L', 'L', 'F', 'K', '_', 'M', 'a', 'n', 'u', 'a',
    'l', '_', 'T', 'o', 'r', 'q', 'u', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 22; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[22] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 18; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[18] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLFK_Auto(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T d[9] = { 'L', 'L', 'F', 'K', '_', 'A', 'u', 't', 'o' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 22; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[22] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 9; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[9] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LLFK_Manual_Pos(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T d[15] = { 'L', 'L', 'F', 'K', '_', 'M', 'a', 'n', 'u', 'a',
    'l', '_', 'P', 'o', 's' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.ManualAutoButton == 0.0) {
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 22; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[22] = '\x00';
  strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
  TestStructure_B.ManualAuto[255] = '\x00';
  tmp_1 = &TestStructure_B.ManualAuto;
  tmp_0 = &d[0];
  for (int32_T i = 0; i < 15; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[15] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_Lower_Limb_Breaststroke(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[23] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'B', 'r', 'e', 'a', 's', 't', 's', 't', 'r', 'o', 'k', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 23; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[23] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_internal_LowerLimb_Breaststroke(void)
{
  switch (TestStructure_DW.was_LowerLimb_Breaststroke) {
   case TestStructure_IN_LLB_Auto:
    TestStructure_DW.is_LowerLimb_Breaststroke = TestStructure_IN_LLB_Auto;
    TestStructure_DW.was_LowerLimb_Breaststroke = TestStructure_IN_LLB_Auto;
    TestStructure_enter_atomic_LLB_Auto();
    break;

   case TestStructure_IN_LLB_Manual_Freq:
    TestStructure_DW.is_LowerLimb_Breaststroke =
      TestStructure_IN_LLB_Manual_Freq;
    TestStructure_DW.was_LowerLimb_Breaststroke =
      TestStructure_IN_LLB_Manual_Freq;
    TestStructure_enter_atomic_LLB_Manual_Freq();
    break;

   case TestStructure_IN_LLB_Manual_Pos:
    TestStructure_DW.is_LowerLimb_Breaststroke = TestStructure_IN_LLB_Manual_Pos;
    TestStructure_DW.was_LowerLimb_Breaststroke =
      TestStructure_IN_LLB_Manual_Pos;
    TestStructure_enter_atomic_LLB_Manual_Pos();
    break;

   case TestStructure_IN_LLB_Manual_Torque:
    TestStructure_DW.is_LowerLimb_Breaststroke =
      TestStructure_IN_LLB_Manual_Torque;
    TestStructure_DW.was_LowerLimb_Breaststroke =
      TestStructure_IN_LLB_Manual_Torque;
    TestStructure_enter_atomic_LLB_Manual_Torque();
    break;

   case TestStructure_IN_Lower_Limb_Breaststroke:
    TestStructure_DW.is_LowerLimb_Breaststroke =
      TestStructure_IN_Lower_Limb_Breaststroke;
    TestStructure_DW.was_LowerLimb_Breaststroke =
      TestStructure_IN_Lower_Limb_Breaststroke;
    TestStructure_enter_atomic_Lower_Limb_Breaststroke();
    break;

   default:
    TestStructure_DW.is_LowerLimb_Breaststroke =
      TestStructure_IN_Lower_Limb_Breaststroke;
    TestStructure_DW.was_LowerLimb_Breaststroke =
      TestStructure_IN_Lower_Limb_Breaststroke;
    TestStructure_enter_atomic_Lower_Limb_Breaststroke();
    break;
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_LowerLimb_FlutterKick(void)
{
  boolean_T out;
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[4] = { 'S', 't', 'o', 'p' };

  static const char_T d[4] = { 'S', 't', 'o', 'p' };

  static const char_T e[4] = { 'S', 't', 'o', 'p' };

  static const char_T f[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T g[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T h[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T i[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  static const char_T j[9] = { 'L', 'L', 'F', 'K', '_', 'A', 'u', 't', 'o' };

  static const char_T k[16] = { 'L', 'L', 'F', 'K', '_', 'M', 'a', 'n', 'u', 'a',
    'l', '_', 'F', 'r', 'e', 'q' };

  static const char_T l[15] = { 'L', 'L', 'F', 'K', '_', 'M', 'a', 'n', 'u', 'a',
    'l', '_', 'P', 'o', 's' };

  static const char_T m[18] = { 'L', 'L', 'F', 'K', '_', 'M', 'a', 'n', 'u', 'a',
    'l', '_', 'T', 'o', 'r', 'q', 'u', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  out = ((TestStructure_DW.PatternButtonPressed_temp == 0.0) &&
         (TestStructure_B.PatternButton > 0.0));
  if (out) {
    TestStructure_DW.PatternButtonPressed_temp = 1.0;
    TestStructure_DW.is_LowerLimb_FlutterKick =
      TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Breaststroke;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Breaststroke;
    TestStructure_enter_internal_LowerLimb_Breaststroke();
  } else {
    switch (TestStructure_DW.is_LowerLimb_FlutterKick) {
     case TestStructure_IN_LLFK_Auto:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_FlutterKick =
          TestStructure_IN_LLFK_Manual_Freq;
        TestStructure_DW.was_LowerLimb_FlutterKick =
          TestStructure_IN_LLFK_Manual_Freq;
        TestStructure_enter_atomic_LLFK_Manual_Freq();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &b[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &f[0];
        for (int32_T i_0 = 0; i_0 < 22; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[22] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &j[0];
        for (int32_T i_0 = 0; i_0 < 9; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[9] = '\x00';
      }
      break;

     case TestStructure_IN_LLFK_Manual_Freq:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_FlutterKick =
          TestStructure_IN_LLFK_Manual_Torque;
        TestStructure_DW.was_LowerLimb_FlutterKick =
          TestStructure_IN_LLFK_Manual_Torque;
        TestStructure_enter_atomic_LLFK_Manual_Torque();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &c[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &g[0];
        for (int32_T i_0 = 0; i_0 < 22; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[22] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &k[0];
        for (int32_T i_0 = 0; i_0 < 16; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[16] = '\x00';
      }
      break;

     case TestStructure_IN_LLFK_Manual_Pos:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_FlutterKick = TestStructure_IN_LLFK_Auto;
        TestStructure_DW.was_LowerLimb_FlutterKick = TestStructure_IN_LLFK_Auto;
        TestStructure_enter_atomic_LLFK_Auto();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &d[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &h[0];
        for (int32_T i_0 = 0; i_0 < 22; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[22] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &l[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
      }
      break;

     case TestStructure_IN_LLFK_Manual_Torque:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_FlutterKick =
          TestStructure_IN_LLFK_Manual_Pos;
        TestStructure_DW.was_LowerLimb_FlutterKick =
          TestStructure_IN_LLFK_Manual_Pos;
        TestStructure_enter_atomic_LLFK_Manual_Pos();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &e[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &i[0];
        for (int32_T i_0 = 0; i_0 < 22; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[22] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &m[0];
        for (int32_T i_0 = 0; i_0 < 18; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[18] = '\x00';
      }
      break;

     default:
      /* case IN_LowerLimb_FlutterKick: */
      TestStructure_DW.is_LowerLimb_FlutterKick =
        TestStructure_IN_LLFK_Manual_Freq;
      TestStructure_DW.was_LowerLimb_FlutterKick =
        TestStructure_IN_LLFK_Manual_Freq;
      TestStructure_enter_atomic_LLFK_Manual_Freq();
      break;
    }
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_LowerLimb_FlutterKick(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[22] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'F', 'l', 'u', 't', 't', 'e', 'r', 'K', 'i', 'c', 'k' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PatternButton == 0.0) {
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 4; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[4] = '\x00';
  strncpy(&TestStructure_B.Mode[0], "", 255U);
  TestStructure_B.Mode[255] = '\x00';
  tmp_1 = &TestStructure_B.Mode;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 22; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[22] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_internal_LowerLimb_FlutterKick(void)
{
  switch (TestStructure_DW.was_LowerLimb_FlutterKick) {
   case TestStructure_IN_LLFK_Auto:
    TestStructure_DW.is_LowerLimb_FlutterKick = TestStructure_IN_LLFK_Auto;
    TestStructure_DW.was_LowerLimb_FlutterKick = TestStructure_IN_LLFK_Auto;
    TestStructure_enter_atomic_LLFK_Auto();
    break;

   case TestStructure_IN_LLFK_Manual_Freq:
    TestStructure_DW.is_LowerLimb_FlutterKick =
      TestStructure_IN_LLFK_Manual_Freq;
    TestStructure_DW.was_LowerLimb_FlutterKick =
      TestStructure_IN_LLFK_Manual_Freq;
    TestStructure_enter_atomic_LLFK_Manual_Freq();
    break;

   case TestStructure_IN_LLFK_Manual_Pos:
    TestStructure_DW.is_LowerLimb_FlutterKick = TestStructure_IN_LLFK_Manual_Pos;
    TestStructure_DW.was_LowerLimb_FlutterKick =
      TestStructure_IN_LLFK_Manual_Pos;
    TestStructure_enter_atomic_LLFK_Manual_Pos();
    break;

   case TestStructure_IN_LLFK_Manual_Torque:
    TestStructure_DW.is_LowerLimb_FlutterKick =
      TestStructure_IN_LLFK_Manual_Torque;
    TestStructure_DW.was_LowerLimb_FlutterKick =
      TestStructure_IN_LLFK_Manual_Torque;
    TestStructure_enter_atomic_LLFK_Manual_Torque();
    break;

   case TestStructure_IN_LowerLimb_FlutterKick_m:
    TestStructure_DW.is_LowerLimb_FlutterKick =
      TestStructure_IN_LowerLimb_FlutterKick_m;
    TestStructure_DW.was_LowerLimb_FlutterKick =
      TestStructure_IN_LowerLimb_FlutterKick_m;
    TestStructure_enter_atomic_LowerLimb_FlutterKick();
    break;

   default:
    TestStructure_DW.is_LowerLimb_FlutterKick =
      TestStructure_IN_LowerLimb_FlutterKick_m;
    TestStructure_DW.was_LowerLimb_FlutterKick =
      TestStructure_IN_LowerLimb_FlutterKick_m;
    TestStructure_enter_atomic_LowerLimb_FlutterKick();
    break;
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_LowerLimb_Walk(void)
{
  boolean_T out;
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[4] = { 'S', 't', 'o', 'p' };

  static const char_T d[4] = { 'S', 't', 'o', 'p' };

  static const char_T e[4] = { 'S', 't', 'o', 'p' };

  static const char_T f[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T g[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T h[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T i[15] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm', 'b',
    '_', 'W', 'a', 'l', 'k' };

  static const char_T j[8] = { 'L', 'L', 'W', '_', 'A', 'u', 't', 'o' };

  static const char_T k[15] = { 'L', 'L', 'W', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'F', 'r', 'e', 'q' };

  static const char_T l[14] = { 'L', 'L', 'W', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'P', 'o', 's' };

  static const char_T m[17] = { 'L', 'L', 'W', '_', 'M', 'a', 'n', 'u', 'a', 'l',
    '_', 'T', 'o', 'r', 'q', 'u', 'e' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  out = ((TestStructure_DW.PatternButtonPressed_temp == 0.0) &&
         (TestStructure_B.PatternButton > 0.0));
  if (out) {
    TestStructure_DW.PatternButtonPressed_temp = 1.0;
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Follow;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Follow;
    TestStructure_enter_internal_LowerLimb_Follow();
  } else {
    switch (TestStructure_DW.is_LowerLimb_Walk) {
     case TestStructure_IN_LLW_Auto:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Freq;
        TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Freq;
        TestStructure_enter_atomic_LLW_Manual_Freq();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &b[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &f[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &j[0];
        for (int32_T i_0 = 0; i_0 < 8; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[8] = '\x00';
      }
      break;

     case TestStructure_IN_LLW_Manual_Freq:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Torque;
        TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Torque;
        TestStructure_enter_atomic_LLW_Manual_Torque();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &c[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &g[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &k[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
      }
      break;

     case TestStructure_IN_LLW_Manual_Pos:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Auto;
        TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Auto;
        TestStructure_enter_atomic_LLW_Auto();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &d[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &h[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &l[0];
        for (int32_T i_0 = 0; i_0 < 14; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[14] = '\x00';
      }
      break;

     case TestStructure_IN_LLW_Manual_Torque:
      out = ((TestStructure_DW.Manual_AutoButtonPressed_temp == 0.0) &&
             (TestStructure_B.ManualAutoButton > 0.0));
      if (out) {
        TestStructure_DW.Manual_AutoButtonPressed_temp = 1.0;
        TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Pos;
        TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Pos;
        TestStructure_enter_atomic_LLW_Manual_Pos();
      } else {
        if (TestStructure_B.PatternButton == 0.0) {
          TestStructure_DW.PatternButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.ManualAutoButton == 0.0) {
          TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &e[0];
        for (int32_T i_0 = 0; i_0 < 4; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[4] = '\x00';
        strncpy(&TestStructure_B.Mode[0], "", 255U);
        TestStructure_B.Mode[255] = '\x00';
        tmp_1 = &TestStructure_B.Mode;
        tmp_0 = &i[0];
        for (int32_T i_0 = 0; i_0 < 15; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[15] = '\x00';
        strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
        TestStructure_B.ManualAuto[255] = '\x00';
        tmp_1 = &TestStructure_B.ManualAuto;
        tmp_0 = &m[0];
        for (int32_T i_0 = 0; i_0 < 17; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[17] = '\x00';
      }
      break;

     default:
      /* case IN_LowerLimb_Walk: */
      TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Freq;
      TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_LLW_Manual_Freq;
      TestStructure_enter_atomic_LLW_Manual_Freq();
      break;
    }
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_internal_Stop(void)
{
  static const char_T b[4] = { 'S', 't', 'o', 'p' };

  static const char_T c[4] = { 'S', 't', 'o', 'p' };

  char_T (*tmp)[6];
  const char_T *tmp_0;
  switch (TestStructure_DW.was_Stop) {
   case TestStructure_IN_LowerLimb_Breaststroke:
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Breaststroke;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Breaststroke;
    TestStructure_enter_internal_LowerLimb_Breaststroke();
    break;

   case TestStructure_IN_LowerLimb_FlutterKick:
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_FlutterKick;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_FlutterKick;
    TestStructure_enter_internal_LowerLimb_FlutterKick();
    break;

   case TestStructure_IN_LowerLimb_Follow:
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Follow;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Follow;
    TestStructure_enter_internal_LowerLimb_Follow();
    break;

   case TestStructure_IN_LowerLimb_Walk:
    TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Walk;
    TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Walk;
    TestStructure_enter_internal_LowerLimb_Walk();
    break;

   case TestStructure_IN_Stop_b:
    TestStructure_DW.is_Stop = TestStructure_IN_Stop_b;
    TestStructure_DW.was_Stop = TestStructure_IN_Stop_b;
    strncpy(&TestStructure_B.State[0], "", 5U);
    TestStructure_B.State[5] = '\x00';
    tmp = &TestStructure_B.State;
    tmp_0 = &c[0];
    for (int32_T i = 0; i < 4; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[4] = '\x00';
    break;

   default:
    TestStructure_DW.is_Stop = TestStructure_IN_Stop_b;
    TestStructure_DW.was_Stop = TestStructure_IN_Stop_b;
    strncpy(&TestStructure_B.State[0], "", 5U);
    TestStructure_B.State[5] = '\x00';
    tmp = &TestStructure_B.State;
    tmp_0 = &b[0];
    for (int32_T i = 0; i < 4; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[4] = '\x00';
    break;
  }
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_enter_atomic_UpperLimb_UnLock(void)
{
  static const char_T b[5] = { 'S', 't', 'a', 'r', 't' };

  static const char_T c[16] = { 'U', 'p', 'p', 'e', 'r', 'L', 'i', 'm', 'b', '_',
    'U', 'n', 'l', 'o', 'c', 'k' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  if (TestStructure_B.PauseStartButton == 0.0) {
    TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
  }

  if (TestStructure_B.UnlockLockButton == 0.0) {
    TestStructure_DW.Unlock_LockButtonPressed_temp = 0.0;
  }

  strncpy(&TestStructure_B.State[0], "", 5U);
  TestStructure_B.State[5] = '\x00';
  tmp = &TestStructure_B.State;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 5; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[5] = '\x00';
  strncpy(&TestStructure_B.UnlockLock[0], "", 255U);
  TestStructure_B.UnlockLock[255] = '\x00';
  tmp_1 = &TestStructure_B.UnlockLock;
  tmp_0 = &c[0];
  for (int32_T i = 0; i < 16; i++) {
    (*tmp_1)[i] = tmp_0[i];
  }

  (*tmp_1)[16] = '\x00';
}

/* Function for Chart: '<S3>/ControlPannelStateMachine' */
static void TestStructure_Start(void)
{
  boolean_T out;
  static const char_T b[16] = { 'U', 'p', 'p', 'e', 'r', 'L', 'i', 'm', 'b', '_',
    'U', 'n', 'l', 'o', 'c', 'k' };

  static const char_T c[5] = { 'S', 't', 'a', 'r', 't' };

  static const char_T d[5] = { 'S', 't', 'a', 'r', 't' };

  static const char_T e[14] = { 'U', 'p', 'p', 'e', 'r', 'L', 'i', 'm', 'b', '_',
    'L', 'o', 'c', 'k' };

  static const char_T f[16] = { 'U', 'p', 'p', 'e', 'r', 'L', 'i', 'm', 'b', '_',
    'U', 'n', 'l', 'o', 'c', 'k' };

  static const char_T g[5] = { 'P', 'a', 'u', 's', 'e' };

  static const char_T h[5] = { 'S', 't', 'a', 'r', 't' };

  static const char_T i[14] = { 'U', 'p', 'p', 'e', 'r', 'L', 'i', 'm', 'b', '_',
    'L', 'o', 'c', 'k' };

  char_T (*tmp_1)[256];
  char_T (*tmp)[6];
  const char_T *tmp_0;
  out = ((TestStructure_DW.Pause_StartButtonPressed_temp == 0.0) &&
         (TestStructure_B.PauseStartButton > 0.0));
  if (out) {
    TestStructure_DW.Pause_StartButtonPressed_temp = 1.0;
    strncpy(&TestStructure_B.UnlockLock[0], "", 255U);
    TestStructure_B.UnlockLock[255] = '\x00';
    tmp_1 = &TestStructure_B.UnlockLock;
    tmp_0 = &b[0];
    for (int32_T i_0 = 0; i_0 < 16; i_0++) {
      (*tmp_1)[i_0] = tmp_0[i_0];
    }

    (*tmp_1)[16] = '\x00';
    TestStructure_DW.is_Start = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_c6_TestStructure = TestStructure_IN_Pause;
    strncpy(&TestStructure_B.State[0], "", 5U);
    TestStructure_B.State[5] = '\x00';
    tmp = &TestStructure_B.State;
    tmp_0 = &g[0];
    for (int32_T i_0 = 0; i_0 < 5; i_0++) {
      (*tmp)[i_0] = tmp_0[i_0];
    }

    (*tmp)[5] = '\x00';
    if (TestStructure_B.PauseStartButton == 0.0) {
      TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
    }
  } else {
    switch (TestStructure_DW.is_Start) {
     case TestStructure_IN_Start_h:
      TestStructure_DW.is_Start = TestStructure_IN_UpperLimb_UnLock;
      TestStructure_enter_atomic_UpperLimb_UnLock();
      break;

     case TestStructure_IN_UpperLimb_Lock:
      out = ((TestStructure_DW.Unlock_LockButtonPressed_temp == 0.0) &&
             (TestStructure_B.UnlockLockButton > 0.0));
      if (out) {
        TestStructure_DW.Unlock_LockButtonPressed_temp = 1.0;
        TestStructure_DW.is_Start = TestStructure_IN_UpperLimb_UnLock;
        TestStructure_enter_atomic_UpperLimb_UnLock();
      } else {
        if (TestStructure_B.PauseStartButton == 0.0) {
          TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.UnlockLockButton == 0.0) {
          TestStructure_DW.Unlock_LockButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &c[0];
        for (int32_T i_0 = 0; i_0 < 5; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[5] = '\x00';
        strncpy(&TestStructure_B.UnlockLock[0], "", 255U);
        TestStructure_B.UnlockLock[255] = '\x00';
        tmp_1 = &TestStructure_B.UnlockLock;
        tmp_0 = &e[0];
        for (int32_T i_0 = 0; i_0 < 14; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[14] = '\x00';
      }
      break;

     default:
      /* case IN_UpperLimb_UnLock: */
      out = ((TestStructure_DW.Unlock_LockButtonPressed_temp == 0.0) &&
             (TestStructure_B.UnlockLockButton > 0.0));
      if (out) {
        TestStructure_DW.Unlock_LockButtonPressed_temp = 1.0;
        TestStructure_DW.is_Start = TestStructure_IN_UpperLimb_Lock;
        if (TestStructure_B.PauseStartButton == 0.0) {
          TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.UnlockLockButton == 0.0) {
          TestStructure_DW.Unlock_LockButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &h[0];
        for (int32_T i_0 = 0; i_0 < 5; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[5] = '\x00';
        strncpy(&TestStructure_B.UnlockLock[0], "", 255U);
        TestStructure_B.UnlockLock[255] = '\x00';
        tmp_1 = &TestStructure_B.UnlockLock;
        tmp_0 = &i[0];
        for (int32_T i_0 = 0; i_0 < 14; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[14] = '\x00';
      } else {
        if (TestStructure_B.PauseStartButton == 0.0) {
          TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
        }

        if (TestStructure_B.UnlockLockButton == 0.0) {
          TestStructure_DW.Unlock_LockButtonPressed_temp = 0.0;
        }

        strncpy(&TestStructure_B.State[0], "", 5U);
        TestStructure_B.State[5] = '\x00';
        tmp = &TestStructure_B.State;
        tmp_0 = &d[0];
        for (int32_T i_0 = 0; i_0 < 5; i_0++) {
          (*tmp)[i_0] = tmp_0[i_0];
        }

        (*tmp)[5] = '\x00';
        strncpy(&TestStructure_B.UnlockLock[0], "", 255U);
        TestStructure_B.UnlockLock[255] = '\x00';
        tmp_1 = &TestStructure_B.UnlockLock;
        tmp_0 = &f[0];
        for (int32_T i_0 = 0; i_0 < 16; i_0++) {
          (*tmp_1)[i_0] = tmp_0[i_0];
        }

        (*tmp_1)[16] = '\x00';
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLW_Torque_Adjust(void)
{
  static const char_T b[8] = { 'L', 'L', 'W', '_', 'T', 'o', 'r', 'q' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[8] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Negtive_Up_temp = 0.0;
  TestStructure_DW.Negtive_Down_temp = 0.0;
  TestStructure_DW.Positive_Up_temp = 0.0;
  TestStructure_DW.Positive_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLW_Torque_Adjust(void)
{
  static const char_T b[10] = { 'L', 'L', 'W', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T c[8] = { 'L', 'L', 'W', '_', 'T', 'o', 'r', 'q' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.ManualAuto[0];
  i = strcmp(&tmp_1[0], "LLW_Manual_Torque");
  if (i != 0) {
    TestStructure_DW.is_LLW_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Adjust_m;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 10; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[10] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLW_Torque_Adjust) {
     case TestStructure_IN_LLW_Torque_Adjust_m:
      {
        boolean_T out;
        out = ((TestStructure_DW.Positive_Down_temp == 0.0) &&
               (TestStructure_B.Positive_Down > 0.0));
        if (out) {
          TestStructure_DW.Positive_Down_temp = 1.0;
          TestStructure_DW.is_LLW_Torque_Adjust = TestStructure_IN_Positive_Down;
          if (TestStructure_B.Positive_Down == 0.0) {
            TestStructure_DW.Positive_Down_temp = 0.0;
            TestStructure_B.LLW_Torque_Up_f = -1.0;
          }
        } else {
          out = ((TestStructure_DW.Negtive_Down_temp == 0.0) &&
                 (TestStructure_B.Negtive_Down > 0.0));
          if (out) {
            TestStructure_DW.Negtive_Down_temp = 1.0;
            TestStructure_DW.is_LLW_Torque_Adjust =
              TestStructure_IN_Negtive_Down;
            if (TestStructure_B.Negtive_Down == 0.0) {
              TestStructure_DW.Negtive_Down_temp = 0.0;
              TestStructure_B.LLW_Torque_Down_k = -1.0;
            }
          } else {
            out = ((TestStructure_DW.Positive_Up_temp == 0.0) &&
                   (TestStructure_B.Positive_Up > 0.0));
            if (out) {
              TestStructure_DW.Positive_Up_temp = 1.0;
              TestStructure_DW.is_LLW_Torque_Adjust =
                TestStructure_IN_Positive_Up;
              if (TestStructure_B.Positive_Up == 0.0) {
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 1.0;
              }
            } else {
              out = ((TestStructure_DW.Negtive_Up_temp == 0.0) &&
                     (TestStructure_B.Negtive_Up > 0.0));
              if (out) {
                TestStructure_DW.Negtive_Up_temp = 1.0;
                TestStructure_DW.is_LLW_Torque_Adjust =
                  TestStructure_IN_Negtive_Up;
                if (TestStructure_B.Negtive_Up == 0.0) {
                  TestStructure_DW.Negtive_Up_temp = 0.0;
                  TestStructure_B.LLW_Torque_Down_k = 1.0;
                }
              } else {
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp = &TestStructure_B.kState;
                tmp_0 = &c[0];
                for (i = 0; i < 8; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[8] = '\x00';
                TestStructure_B.LLFK_Freq_n = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 0.0;
                TestStructure_B.LLFK_Torque_Down_a = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 0.0;
                TestStructure_B.LLFK_Pos_Down_g = 0.0;
                TestStructure_B.LLB_Freq_e = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 0.0;
                TestStructure_B.LLB_Torque_Down_m = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 0.0;
                TestStructure_B.LLB_Pos_Down_k = 0.0;
                TestStructure_B.LLW_Freq_k = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 0.0;
                TestStructure_B.LLW_Torque_Down_k = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 0.0;
                TestStructure_B.LLW_Pos_Down_n = 0.0;
                TestStructure_DW.Negtive_Up_temp = 0.0;
                TestStructure_DW.Negtive_Down_temp = 0.0;
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_DW.Positive_Down_temp = 0.0;
              }
            }
          }
        }
      }
      break;

     case TestStructure_IN_Negtive_Down:
      if (TestStructure_DW.Negtive_Down_temp == 0.0) {
        TestStructure_DW.is_LLW_Torque_Adjust =
          TestStructure_IN_LLW_Torque_Adjust_m;
        TestStructure_enter_atomic_LLW_Torque_Adjust();
      } else if (TestStructure_B.Negtive_Down == 0.0) {
        TestStructure_DW.Negtive_Down_temp = 0.0;
        TestStructure_B.LLW_Torque_Down_k = -1.0;
      }
      break;

     case TestStructure_IN_Negtive_Up:
      if (TestStructure_DW.Negtive_Up_temp == 0.0) {
        TestStructure_DW.is_LLW_Torque_Adjust =
          TestStructure_IN_LLW_Torque_Adjust_m;
        TestStructure_enter_atomic_LLW_Torque_Adjust();
      } else if (TestStructure_B.Negtive_Up == 0.0) {
        TestStructure_DW.Negtive_Up_temp = 0.0;
        TestStructure_B.LLW_Torque_Down_k = 1.0;
      }
      break;

     case TestStructure_IN_Positive_Down:
      if (TestStructure_DW.Positive_Down_temp == 0.0) {
        TestStructure_DW.is_LLW_Torque_Adjust =
          TestStructure_IN_LLW_Torque_Adjust_m;
        TestStructure_enter_atomic_LLW_Torque_Adjust();
      } else if (TestStructure_B.Positive_Down == 0.0) {
        TestStructure_DW.Positive_Down_temp = 0.0;
        TestStructure_B.LLW_Torque_Up_f = -1.0;
      }
      break;

     default:
      /* case IN_Positive_Up: */
      if (TestStructure_DW.Positive_Up_temp == 0.0) {
        TestStructure_DW.is_LLW_Torque_Adjust =
          TestStructure_IN_LLW_Torque_Adjust_m;
        TestStructure_enter_atomic_LLW_Torque_Adjust();
      } else if (TestStructure_B.Positive_Up == 0.0) {
        TestStructure_DW.Positive_Up_temp = 0.0;
        TestStructure_B.LLW_Torque_Up_f = 1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLW_Freq_Adjust(void)
{
  static const char_T b[8] = { 'L', 'L', 'W', '_', 'F', 'r', 'e', 'q' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[8] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Freq_Up_temp = 0.0;
  TestStructure_DW.Freq_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLW_Pos_Adjust(void)
{
  static const char_T b[7] = { 'L', 'L', 'W', '_', 'P', 'o', 's' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 7; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[7] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Negtive_Up_temp = 0.0;
  TestStructure_DW.Negtive_Down_temp = 0.0;
  TestStructure_DW.Positive_Up_temp = 0.0;
  TestStructure_DW.Positive_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLW_Pos_Adjust(void)
{
  static const char_T b[10] = { 'L', 'L', 'W', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T c[7] = { 'L', 'L', 'W', '_', 'P', 'o', 's' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.ManualAuto[0];
  i = strcmp(&tmp_1[0], "LLW_Manual_Pos");
  if (i != 0) {
    TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Adjust_m;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 10; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[10] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLW_Pos_Adjust) {
     case TestStructure_IN_LLW_Pos_Adjust_m:
      {
        boolean_T out;
        out = ((TestStructure_DW.Positive_Down_temp == 0.0) &&
               (TestStructure_B.Positive_Down > 0.0));
        if (out) {
          TestStructure_DW.Positive_Down_temp = 1.0;
          TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_Positive_Down;
          if (TestStructure_B.Positive_Down == 0.0) {
            TestStructure_DW.Positive_Down_temp = 0.0;
            TestStructure_B.LLW_Pos_Up_c = -1.0;
          }
        } else {
          out = ((TestStructure_DW.Negtive_Down_temp == 0.0) &&
                 (TestStructure_B.Negtive_Down > 0.0));
          if (out) {
            TestStructure_DW.Negtive_Down_temp = 1.0;
            TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_Negtive_Down;
            if (TestStructure_B.Negtive_Down == 0.0) {
              TestStructure_DW.Negtive_Down_temp = 0.0;
              TestStructure_B.LLW_Pos_Down_n = -1.0;
            }
          } else {
            out = ((TestStructure_DW.Positive_Up_temp == 0.0) &&
                   (TestStructure_B.Positive_Up > 0.0));
            if (out) {
              TestStructure_DW.Positive_Up_temp = 1.0;
              TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_Positive_Up;
              if (TestStructure_B.Positive_Up == 0.0) {
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 1.0;
              }
            } else {
              out = ((TestStructure_DW.Negtive_Up_temp == 0.0) &&
                     (TestStructure_B.Negtive_Up > 0.0));
              if (out) {
                TestStructure_DW.Negtive_Up_temp = 1.0;
                TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_Negtive_Up;
                if (TestStructure_B.Negtive_Up == 0.0) {
                  TestStructure_DW.Negtive_Up_temp = 0.0;
                  TestStructure_B.LLW_Pos_Down_n = 1.0;
                }
              } else {
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp = &TestStructure_B.kState;
                tmp_0 = &c[0];
                for (i = 0; i < 7; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[7] = '\x00';
                TestStructure_B.LLFK_Freq_n = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 0.0;
                TestStructure_B.LLFK_Torque_Down_a = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 0.0;
                TestStructure_B.LLFK_Pos_Down_g = 0.0;
                TestStructure_B.LLB_Freq_e = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 0.0;
                TestStructure_B.LLB_Torque_Down_m = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 0.0;
                TestStructure_B.LLB_Pos_Down_k = 0.0;
                TestStructure_B.LLW_Freq_k = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 0.0;
                TestStructure_B.LLW_Torque_Down_k = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 0.0;
                TestStructure_B.LLW_Pos_Down_n = 0.0;
                TestStructure_DW.Negtive_Up_temp = 0.0;
                TestStructure_DW.Negtive_Down_temp = 0.0;
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_DW.Positive_Down_temp = 0.0;
              }
            }
          }
        }
      }
      break;

     case TestStructure_IN_Negtive_Down:
      if (TestStructure_DW.Negtive_Down_temp == 0.0) {
        TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_LLW_Pos_Adjust_m;
        TestStructure_enter_atomic_LLW_Pos_Adjust();
      } else if (TestStructure_B.Negtive_Down == 0.0) {
        TestStructure_DW.Negtive_Down_temp = 0.0;
        TestStructure_B.LLW_Pos_Down_n = -1.0;
      }
      break;

     case TestStructure_IN_Negtive_Up:
      if (TestStructure_DW.Negtive_Up_temp == 0.0) {
        TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_LLW_Pos_Adjust_m;
        TestStructure_enter_atomic_LLW_Pos_Adjust();
      } else if (TestStructure_B.Negtive_Up == 0.0) {
        TestStructure_DW.Negtive_Up_temp = 0.0;
        TestStructure_B.LLW_Pos_Down_n = 1.0;
      }
      break;

     case TestStructure_IN_Positive_Down:
      if (TestStructure_DW.Positive_Down_temp == 0.0) {
        TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_LLW_Pos_Adjust_m;
        TestStructure_enter_atomic_LLW_Pos_Adjust();
      } else if (TestStructure_B.Positive_Down == 0.0) {
        TestStructure_DW.Positive_Down_temp = 0.0;
        TestStructure_B.LLW_Pos_Up_c = -1.0;
      }
      break;

     default:
      /* case IN_Positive_Up: */
      if (TestStructure_DW.Positive_Up_temp == 0.0) {
        TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_LLW_Pos_Adjust_m;
        TestStructure_enter_atomic_LLW_Pos_Adjust();
      } else if (TestStructure_B.Positive_Up == 0.0) {
        TestStructure_DW.Positive_Up_temp = 0.0;
        TestStructure_B.LLW_Pos_Up_c = 1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_exit_internal_LLW_Adjust(void)
{
  TestStructure_DW.is_LLW_Freq_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLW_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLW_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLW_Adjust(void)
{
  static const char_T b[6] = { 'A', 'd', 'j', 'u', 's', 't' };

  static const char_T c[10] = { 'L', 'L', 'W', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T d[10] = { 'L', 'L', 'W', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T e[10] = { 'L', 'L', 'W', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T f[8] = { 'L', 'L', 'W', '_', 'F', 'r', 'e', 'q' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.Mode[0];
  i = strcmp(&tmp_1[0], "Lower_Limb_Walk");
  if (i != 0) {
    TestStructure_exit_internal_LLW_Adjust();
    TestStructure_DW.is_Adjust = TestStructure_IN_Adjust;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 6; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[6] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLW_Adjust) {
     case TestStructure_IN_LLW_Adjust_m:
      tmp_1 = &TestStructure_B.ManualAuto[0];
      i = strcmp(&tmp_1[0], "LLW_Manual_Pos");
      if (i == 0) {
        TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Pos_Adjust;
        TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_LLW_Pos_Adjust_m;
        TestStructure_enter_atomic_LLW_Pos_Adjust();
      } else {
        tmp_1 = &TestStructure_B.ManualAuto[0];
        i = strcmp(&tmp_1[0], "LLW_Manual_Torque");
        if (i == 0) {
          TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Torque_Adjust;
          TestStructure_DW.is_LLW_Torque_Adjust =
            TestStructure_IN_LLW_Torque_Adjust_m;
          TestStructure_enter_atomic_LLW_Torque_Adjust();
        } else {
          tmp_1 = &TestStructure_B.ManualAuto[0];
          i = strcmp(&tmp_1[0], "LLW_Manual_Freq");
          if (i == 0) {
            TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Freq_Adjust;
            TestStructure_DW.is_LLW_Freq_Adjust =
              TestStructure_IN_LLW_Freq_Adjust;
            TestStructure_enter_atomic_LLW_Freq_Adjust();
          } else {
            tmp_1 = &TestStructure_B.ManualAuto[0];
            i = strcmp(&tmp_1[0], "LLW_Auto");
            if (i == 0) {
              TestStructure_B.Display_State = 1.0;
              TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Auto_j;
            } else {
              strncpy(&TestStructure_B.kState[0], "", 255U);
              TestStructure_B.kState[255] = '\x00';
              tmp = &TestStructure_B.kState;
              tmp_0 = &c[0];
              for (i = 0; i < 10; i++) {
                (*tmp)[i] = tmp_0[i];
              }

              (*tmp)[10] = '\x00';
            }
          }
        }
      }
      break;

     case TestStructure_IN_LLW_Auto_j:
      tmp_1 = &TestStructure_B.ManualAuto[0];
      i = strcmp(&tmp_1[0], "LLW_Auto");
      if (i != 0) {
        TestStructure_B.Display_State = 4.0;
        TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Adjust_m;
        strncpy(&TestStructure_B.kState[0], "", 255U);
        TestStructure_B.kState[255] = '\x00';
        tmp = &TestStructure_B.kState;
        tmp_0 = &d[0];
        for (i = 0; i < 10; i++) {
          (*tmp)[i] = tmp_0[i];
        }

        (*tmp)[10] = '\x00';
      }
      break;

     case TestStructure_IN_LLW_Freq_Adjust:
      {
        tmp_1 = &TestStructure_B.ManualAuto[0];
        i = strcmp(&tmp_1[0], "LLW_Manual_Freq");
        if (i != 0) {
          TestStructure_DW.is_LLW_Freq_Adjust =
            TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Adjust_m;
          strncpy(&TestStructure_B.kState[0], "", 255U);
          TestStructure_B.kState[255] = '\x00';
          tmp = &TestStructure_B.kState;
          tmp_0 = &e[0];
          for (i = 0; i < 10; i++) {
            (*tmp)[i] = tmp_0[i];
          }

          (*tmp)[10] = '\x00';
        } else {
          switch (TestStructure_DW.is_LLW_Freq_Adjust) {
           case TestStructure_IN_Freq_Down:
            if (TestStructure_DW.Freq_Down_temp == 0.0) {
              TestStructure_DW.is_LLW_Freq_Adjust =
                TestStructure_IN_LLW_Freq_Adjust;
              TestStructure_enter_atomic_LLW_Freq_Adjust();
            } else if (TestStructure_B.Freq_Down == 0.0) {
              TestStructure_DW.Freq_Down_temp = 0.0;
              TestStructure_B.LLW_Freq_k = -1.0;
            }
            break;

           case TestStructure_IN_Freq_Up:
            if (TestStructure_DW.Freq_Up_temp == 0.0) {
              TestStructure_DW.is_LLW_Freq_Adjust =
                TestStructure_IN_LLW_Freq_Adjust;
              TestStructure_enter_atomic_LLW_Freq_Adjust();
            } else if (TestStructure_B.Freq_Up == 0.0) {
              TestStructure_DW.Freq_Up_temp = 0.0;
              TestStructure_B.LLW_Freq_k = 1.0;
            }
            break;

           default:
            {
              boolean_T out;

              /* case IN_LLW_Freq_Adjust: */
              out = ((TestStructure_DW.Freq_Up_temp == 0.0) &&
                     (TestStructure_B.Freq_Up > 0.0));
              if (out) {
                TestStructure_DW.Freq_Up_temp = 1.0;
                TestStructure_DW.is_LLW_Freq_Adjust = TestStructure_IN_Freq_Up;
                if (TestStructure_B.Freq_Up == 0.0) {
                  TestStructure_DW.Freq_Up_temp = 0.0;
                  TestStructure_B.LLW_Freq_k = 1.0;
                }
              } else {
                out = ((TestStructure_DW.Freq_Down_temp == 0.0) &&
                       (TestStructure_B.Freq_Down > 0.0));
                if (out) {
                  TestStructure_DW.Freq_Down_temp = 1.0;
                  TestStructure_DW.is_LLW_Freq_Adjust =
                    TestStructure_IN_Freq_Down;
                  if (TestStructure_B.Freq_Down == 0.0) {
                    TestStructure_DW.Freq_Down_temp = 0.0;
                    TestStructure_B.LLW_Freq_k = -1.0;
                  }
                } else {
                  strncpy(&TestStructure_B.kState[0], "", 255U);
                  TestStructure_B.kState[255] = '\x00';
                  tmp = &TestStructure_B.kState;
                  tmp_0 = &f[0];
                  for (i = 0; i < 8; i++) {
                    (*tmp)[i] = tmp_0[i];
                  }

                  (*tmp)[8] = '\x00';
                  TestStructure_B.LLFK_Freq_n = 0.0;
                  TestStructure_B.LLFK_Torque_Up_g = 0.0;
                  TestStructure_B.LLFK_Torque_Down_a = 0.0;
                  TestStructure_B.LLFK_Pos_Up_p = 0.0;
                  TestStructure_B.LLFK_Pos_Down_g = 0.0;
                  TestStructure_B.LLB_Freq_e = 0.0;
                  TestStructure_B.LLB_Torque_Up_m = 0.0;
                  TestStructure_B.LLB_Torque_Down_m = 0.0;
                  TestStructure_B.LLB_Pos_Up_d = 0.0;
                  TestStructure_B.LLB_Pos_Down_k = 0.0;
                  TestStructure_B.LLW_Freq_k = 0.0;
                  TestStructure_B.LLW_Torque_Up_f = 0.0;
                  TestStructure_B.LLW_Torque_Down_k = 0.0;
                  TestStructure_B.LLW_Pos_Up_c = 0.0;
                  TestStructure_B.LLW_Pos_Down_n = 0.0;
                  TestStructure_DW.Freq_Up_temp = 0.0;
                  TestStructure_DW.Freq_Down_temp = 0.0;
                }
              }
            }
            break;
          }
        }
      }
      break;

     case TestStructure_IN_LLW_Pos_Adjust:
      TestStructure_LLW_Pos_Adjust();
      break;

     default:
      /* case IN_LLW_Torque_Adjust: */
      TestStructure_LLW_Torque_Adjust();
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLB_Torque_Adjust(void)
{
  static const char_T b[8] = { 'L', 'L', 'B', '_', 'T', 'o', 'r', 'q' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[8] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Negtive_Up_temp = 0.0;
  TestStructure_DW.Negtive_Down_temp = 0.0;
  TestStructure_DW.Positive_Up_temp = 0.0;
  TestStructure_DW.Positive_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLB_Torque_Adjust(void)
{
  static const char_T b[10] = { 'L', 'L', 'B', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T c[8] = { 'L', 'L', 'B', '_', 'T', 'o', 'r', 'q' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.ManualAuto[0];
  i = strcmp(&tmp_1[0], "LLB_Manual_Torque");
  if (i != 0) {
    TestStructure_DW.is_LLB_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Adjust_i;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 10; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[10] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLB_Torque_Adjust) {
     case TestStructure_IN_LLB_Torque_Adjust_e:
      {
        boolean_T out;
        out = ((TestStructure_DW.Positive_Down_temp == 0.0) &&
               (TestStructure_B.Positive_Down > 0.0));
        if (out) {
          TestStructure_DW.Positive_Down_temp = 1.0;
          TestStructure_DW.is_LLB_Torque_Adjust = TestStructure_IN_Positive_Down;
          if (TestStructure_B.Positive_Down == 0.0) {
            TestStructure_DW.Positive_Down_temp = 0.0;
            TestStructure_B.LLB_Torque_Up_m = -1.0;
          }
        } else {
          out = ((TestStructure_DW.Negtive_Down_temp == 0.0) &&
                 (TestStructure_B.Negtive_Down > 0.0));
          if (out) {
            TestStructure_DW.Negtive_Down_temp = 1.0;
            TestStructure_DW.is_LLB_Torque_Adjust =
              TestStructure_IN_Negtive_Down;
            if (TestStructure_B.Negtive_Down == 0.0) {
              TestStructure_DW.Negtive_Down_temp = 0.0;
              TestStructure_B.LLB_Torque_Down_m = -1.0;
            }
          } else {
            out = ((TestStructure_DW.Positive_Up_temp == 0.0) &&
                   (TestStructure_B.Positive_Up > 0.0));
            if (out) {
              TestStructure_DW.Positive_Up_temp = 1.0;
              TestStructure_DW.is_LLB_Torque_Adjust =
                TestStructure_IN_Positive_Up;
              if (TestStructure_B.Positive_Up == 0.0) {
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 1.0;
              }
            } else {
              out = ((TestStructure_DW.Negtive_Up_temp == 0.0) &&
                     (TestStructure_B.Negtive_Up > 0.0));
              if (out) {
                TestStructure_DW.Negtive_Up_temp = 1.0;
                TestStructure_DW.is_LLB_Torque_Adjust =
                  TestStructure_IN_Negtive_Up;
                if (TestStructure_B.Negtive_Up == 0.0) {
                  TestStructure_DW.Negtive_Up_temp = 0.0;
                  TestStructure_B.LLB_Torque_Down_m = 1.0;
                }
              } else {
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp = &TestStructure_B.kState;
                tmp_0 = &c[0];
                for (i = 0; i < 8; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[8] = '\x00';
                TestStructure_B.LLFK_Freq_n = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 0.0;
                TestStructure_B.LLFK_Torque_Down_a = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 0.0;
                TestStructure_B.LLFK_Pos_Down_g = 0.0;
                TestStructure_B.LLB_Freq_e = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 0.0;
                TestStructure_B.LLB_Torque_Down_m = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 0.0;
                TestStructure_B.LLB_Pos_Down_k = 0.0;
                TestStructure_B.LLW_Freq_k = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 0.0;
                TestStructure_B.LLW_Torque_Down_k = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 0.0;
                TestStructure_B.LLW_Pos_Down_n = 0.0;
                TestStructure_DW.Negtive_Up_temp = 0.0;
                TestStructure_DW.Negtive_Down_temp = 0.0;
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_DW.Positive_Down_temp = 0.0;
              }
            }
          }
        }
      }
      break;

     case TestStructure_IN_Negtive_Down:
      if (TestStructure_DW.Negtive_Down_temp == 0.0) {
        TestStructure_DW.is_LLB_Torque_Adjust =
          TestStructure_IN_LLB_Torque_Adjust_e;
        TestStructure_enter_atomic_LLB_Torque_Adjust();
      } else if (TestStructure_B.Negtive_Down == 0.0) {
        TestStructure_DW.Negtive_Down_temp = 0.0;
        TestStructure_B.LLB_Torque_Down_m = -1.0;
      }
      break;

     case TestStructure_IN_Negtive_Up:
      if (TestStructure_DW.Negtive_Up_temp == 0.0) {
        TestStructure_DW.is_LLB_Torque_Adjust =
          TestStructure_IN_LLB_Torque_Adjust_e;
        TestStructure_enter_atomic_LLB_Torque_Adjust();
      } else if (TestStructure_B.Negtive_Up == 0.0) {
        TestStructure_DW.Negtive_Up_temp = 0.0;
        TestStructure_B.LLB_Torque_Down_m = 1.0;
      }
      break;

     case TestStructure_IN_Positive_Down:
      if (TestStructure_DW.Positive_Down_temp == 0.0) {
        TestStructure_DW.is_LLB_Torque_Adjust =
          TestStructure_IN_LLB_Torque_Adjust_e;
        TestStructure_enter_atomic_LLB_Torque_Adjust();
      } else if (TestStructure_B.Positive_Down == 0.0) {
        TestStructure_DW.Positive_Down_temp = 0.0;
        TestStructure_B.LLB_Torque_Up_m = -1.0;
      }
      break;

     default:
      /* case IN_Positive_Up: */
      if (TestStructure_DW.Positive_Up_temp == 0.0) {
        TestStructure_DW.is_LLB_Torque_Adjust =
          TestStructure_IN_LLB_Torque_Adjust_e;
        TestStructure_enter_atomic_LLB_Torque_Adjust();
      } else if (TestStructure_B.Positive_Up == 0.0) {
        TestStructure_DW.Positive_Up_temp = 0.0;
        TestStructure_B.LLB_Torque_Up_m = 1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLB_Freq_Adjust(void)
{
  static const char_T b[8] = { 'L', 'L', 'B', '_', 'F', 'r', 'e', 'q' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[8] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Freq_Up_temp = 0.0;
  TestStructure_DW.Freq_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLB_Pos_Adjust(void)
{
  static const char_T b[7] = { 'L', 'L', 'B', '_', 'P', 'o', 's' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 7; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[7] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Negtive_Up_temp = 0.0;
  TestStructure_DW.Negtive_Down_temp = 0.0;
  TestStructure_DW.Positive_Up_temp = 0.0;
  TestStructure_DW.Positive_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLB_Pos_Adjust(void)
{
  static const char_T b[10] = { 'L', 'L', 'B', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T c[7] = { 'L', 'L', 'B', '_', 'P', 'o', 's' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.ManualAuto[0];
  i = strcmp(&tmp_1[0], "LLB_Manual_Pos");
  if (i != 0) {
    TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Adjust_i;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 10; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[10] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLB_Pos_Adjust) {
     case TestStructure_IN_LLB_Pos_Adjust_d:
      {
        boolean_T out;
        out = ((TestStructure_DW.Positive_Down_temp == 0.0) &&
               (TestStructure_B.Positive_Down > 0.0));
        if (out) {
          TestStructure_DW.Positive_Down_temp = 1.0;
          TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_Positive_Down;
          if (TestStructure_B.Positive_Down == 0.0) {
            TestStructure_DW.Positive_Down_temp = 0.0;
            TestStructure_B.LLB_Pos_Up_d = -1.0;
          }
        } else {
          out = ((TestStructure_DW.Negtive_Down_temp == 0.0) &&
                 (TestStructure_B.Negtive_Down > 0.0));
          if (out) {
            TestStructure_DW.Negtive_Down_temp = 1.0;
            TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_Negtive_Down;
            if (TestStructure_B.Negtive_Down == 0.0) {
              TestStructure_DW.Negtive_Down_temp = 0.0;
              TestStructure_B.LLB_Pos_Down_k = -1.0;
            }
          } else {
            out = ((TestStructure_DW.Positive_Up_temp == 0.0) &&
                   (TestStructure_B.Positive_Up > 0.0));
            if (out) {
              TestStructure_DW.Positive_Up_temp = 1.0;
              TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_Positive_Up;
              if (TestStructure_B.Positive_Up == 0.0) {
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 1.0;
              }
            } else {
              out = ((TestStructure_DW.Negtive_Up_temp == 0.0) &&
                     (TestStructure_B.Negtive_Up > 0.0));
              if (out) {
                TestStructure_DW.Negtive_Up_temp = 1.0;
                TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_Negtive_Up;
                if (TestStructure_B.Negtive_Up == 0.0) {
                  TestStructure_DW.Negtive_Up_temp = 0.0;
                  TestStructure_B.LLB_Pos_Down_k = 1.0;
                }
              } else {
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp = &TestStructure_B.kState;
                tmp_0 = &c[0];
                for (i = 0; i < 7; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[7] = '\x00';
                TestStructure_B.LLFK_Freq_n = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 0.0;
                TestStructure_B.LLFK_Torque_Down_a = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 0.0;
                TestStructure_B.LLFK_Pos_Down_g = 0.0;
                TestStructure_B.LLB_Freq_e = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 0.0;
                TestStructure_B.LLB_Torque_Down_m = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 0.0;
                TestStructure_B.LLB_Pos_Down_k = 0.0;
                TestStructure_B.LLW_Freq_k = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 0.0;
                TestStructure_B.LLW_Torque_Down_k = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 0.0;
                TestStructure_B.LLW_Pos_Down_n = 0.0;
                TestStructure_DW.Negtive_Up_temp = 0.0;
                TestStructure_DW.Negtive_Down_temp = 0.0;
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_DW.Positive_Down_temp = 0.0;
              }
            }
          }
        }
      }
      break;

     case TestStructure_IN_Negtive_Down:
      if (TestStructure_DW.Negtive_Down_temp == 0.0) {
        TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_LLB_Pos_Adjust_d;
        TestStructure_enter_atomic_LLB_Pos_Adjust();
      } else if (TestStructure_B.Negtive_Down == 0.0) {
        TestStructure_DW.Negtive_Down_temp = 0.0;
        TestStructure_B.LLB_Pos_Down_k = -1.0;
      }
      break;

     case TestStructure_IN_Negtive_Up:
      if (TestStructure_DW.Negtive_Up_temp == 0.0) {
        TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_LLB_Pos_Adjust_d;
        TestStructure_enter_atomic_LLB_Pos_Adjust();
      } else if (TestStructure_B.Negtive_Up == 0.0) {
        TestStructure_DW.Negtive_Up_temp = 0.0;
        TestStructure_B.LLB_Pos_Down_k = 1.0;
      }
      break;

     case TestStructure_IN_Positive_Down:
      if (TestStructure_DW.Positive_Down_temp == 0.0) {
        TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_LLB_Pos_Adjust_d;
        TestStructure_enter_atomic_LLB_Pos_Adjust();
      } else if (TestStructure_B.Positive_Down == 0.0) {
        TestStructure_DW.Positive_Down_temp = 0.0;
        TestStructure_B.LLB_Pos_Up_d = -1.0;
      }
      break;

     default:
      /* case IN_Positive_Up: */
      if (TestStructure_DW.Positive_Up_temp == 0.0) {
        TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_LLB_Pos_Adjust_d;
        TestStructure_enter_atomic_LLB_Pos_Adjust();
      } else if (TestStructure_B.Positive_Up == 0.0) {
        TestStructure_DW.Positive_Up_temp = 0.0;
        TestStructure_B.LLB_Pos_Up_d = 1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_exit_internal_LLB_Adjust(void)
{
  TestStructure_DW.is_LLB_Freq_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLB_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLB_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLFK_Torque_Adjust(void)
{
  static const char_T b[9] = { 'L', 'L', 'F', 'K', '_', 'T', 'o', 'r', 'q' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 9; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[9] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Negtive_Up_temp = 0.0;
  TestStructure_DW.Negtive_Down_temp = 0.0;
  TestStructure_DW.Positive_Up_temp = 0.0;
  TestStructure_DW.Positive_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLFK_Torque_Adjust(void)
{
  static const char_T b[11] = { 'L', 'L', 'F', 'K', '_', 'A', 'd', 'j', 'u', 's',
    't' };

  static const char_T c[9] = { 'L', 'L', 'F', 'K', '_', 'T', 'o', 'r', 'q' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.ManualAuto[0];
  i = strcmp(&tmp_1[0], "LLFK_Manual_Torque");
  if (i != 0) {
    TestStructure_DW.is_LLFK_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Adjust_h;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 11; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[11] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLFK_Torque_Adjust) {
     case TestStructure_IN_LLFK_Torque_Adjust_f:
      {
        boolean_T out;
        out = ((TestStructure_DW.Positive_Down_temp == 0.0) &&
               (TestStructure_B.Positive_Down > 0.0));
        if (out) {
          TestStructure_DW.Positive_Down_temp = 1.0;
          TestStructure_DW.is_LLFK_Torque_Adjust =
            TestStructure_IN_Positive_Down;
          if (TestStructure_B.Positive_Down == 0.0) {
            TestStructure_DW.Positive_Down_temp = 0.0;
            TestStructure_B.LLFK_Torque_Up_g = -1.0;
          }
        } else {
          out = ((TestStructure_DW.Negtive_Down_temp == 0.0) &&
                 (TestStructure_B.Negtive_Down > 0.0));
          if (out) {
            TestStructure_DW.Negtive_Down_temp = 1.0;
            TestStructure_DW.is_LLFK_Torque_Adjust =
              TestStructure_IN_Negtive_Down;
            if (TestStructure_B.Negtive_Down == 0.0) {
              TestStructure_DW.Negtive_Down_temp = 0.0;
              TestStructure_B.LLFK_Torque_Down_a = -1.0;
            }
          } else {
            out = ((TestStructure_DW.Positive_Up_temp == 0.0) &&
                   (TestStructure_B.Positive_Up > 0.0));
            if (out) {
              TestStructure_DW.Positive_Up_temp = 1.0;
              TestStructure_DW.is_LLFK_Torque_Adjust =
                TestStructure_IN_Positive_Up;
              if (TestStructure_B.Positive_Up == 0.0) {
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 1.0;
              }
            } else {
              out = ((TestStructure_DW.Negtive_Up_temp == 0.0) &&
                     (TestStructure_B.Negtive_Up > 0.0));
              if (out) {
                TestStructure_DW.Negtive_Up_temp = 1.0;
                TestStructure_DW.is_LLFK_Torque_Adjust =
                  TestStructure_IN_Negtive_Up;
                if (TestStructure_B.Negtive_Up == 0.0) {
                  TestStructure_DW.Negtive_Up_temp = 0.0;
                  TestStructure_B.LLFK_Torque_Down_a = 1.0;
                }
              } else {
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp = &TestStructure_B.kState;
                tmp_0 = &c[0];
                for (i = 0; i < 9; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[9] = '\x00';
                TestStructure_B.LLFK_Freq_n = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 0.0;
                TestStructure_B.LLFK_Torque_Down_a = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 0.0;
                TestStructure_B.LLFK_Pos_Down_g = 0.0;
                TestStructure_B.LLB_Freq_e = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 0.0;
                TestStructure_B.LLB_Torque_Down_m = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 0.0;
                TestStructure_B.LLB_Pos_Down_k = 0.0;
                TestStructure_B.LLW_Freq_k = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 0.0;
                TestStructure_B.LLW_Torque_Down_k = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 0.0;
                TestStructure_B.LLW_Pos_Down_n = 0.0;
                TestStructure_DW.Negtive_Up_temp = 0.0;
                TestStructure_DW.Negtive_Down_temp = 0.0;
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_DW.Positive_Down_temp = 0.0;
              }
            }
          }
        }
      }
      break;

     case TestStructure_IN_Negtive_Down:
      if (TestStructure_DW.Negtive_Down_temp == 0.0) {
        TestStructure_DW.is_LLFK_Torque_Adjust =
          TestStructure_IN_LLFK_Torque_Adjust_f;
        TestStructure_enter_atomic_LLFK_Torque_Adjust();
      } else if (TestStructure_B.Negtive_Down == 0.0) {
        TestStructure_DW.Negtive_Down_temp = 0.0;
        TestStructure_B.LLFK_Torque_Down_a = -1.0;
      }
      break;

     case TestStructure_IN_Negtive_Up:
      if (TestStructure_DW.Negtive_Up_temp == 0.0) {
        TestStructure_DW.is_LLFK_Torque_Adjust =
          TestStructure_IN_LLFK_Torque_Adjust_f;
        TestStructure_enter_atomic_LLFK_Torque_Adjust();
      } else if (TestStructure_B.Negtive_Up == 0.0) {
        TestStructure_DW.Negtive_Up_temp = 0.0;
        TestStructure_B.LLFK_Torque_Down_a = 1.0;
      }
      break;

     case TestStructure_IN_Positive_Down:
      if (TestStructure_DW.Positive_Down_temp == 0.0) {
        TestStructure_DW.is_LLFK_Torque_Adjust =
          TestStructure_IN_LLFK_Torque_Adjust_f;
        TestStructure_enter_atomic_LLFK_Torque_Adjust();
      } else if (TestStructure_B.Positive_Down == 0.0) {
        TestStructure_DW.Positive_Down_temp = 0.0;
        TestStructure_B.LLFK_Torque_Up_g = -1.0;
      }
      break;

     default:
      /* case IN_Positive_Up: */
      if (TestStructure_DW.Positive_Up_temp == 0.0) {
        TestStructure_DW.is_LLFK_Torque_Adjust =
          TestStructure_IN_LLFK_Torque_Adjust_f;
        TestStructure_enter_atomic_LLFK_Torque_Adjust();
      } else if (TestStructure_B.Positive_Up == 0.0) {
        TestStructure_DW.Positive_Up_temp = 0.0;
        TestStructure_B.LLFK_Torque_Up_g = 1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLFK_Freq_Adjust(void)
{
  static const char_T b[9] = { 'L', 'L', 'F', 'K', '_', 'F', 'r', 'e', 'q' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 9; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[9] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Freq_Up_temp = 0.0;
  TestStructure_DW.Freq_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_enter_atomic_LLFK_Pos_Adjust(void)
{
  static const char_T b[8] = { 'L', 'L', 'F', 'K', '_', 'P', 'o', 's' };

  char_T (*tmp)[256];
  const char_T *tmp_0;
  strncpy(&TestStructure_B.kState[0], "", 255U);
  TestStructure_B.kState[255] = '\x00';
  tmp = &TestStructure_B.kState;
  tmp_0 = &b[0];
  for (int32_T i = 0; i < 8; i++) {
    (*tmp)[i] = tmp_0[i];
  }

  (*tmp)[8] = '\x00';
  TestStructure_B.LLFK_Freq_n = 0.0;
  TestStructure_B.LLFK_Torque_Up_g = 0.0;
  TestStructure_B.LLFK_Torque_Down_a = 0.0;
  TestStructure_B.LLFK_Pos_Up_p = 0.0;
  TestStructure_B.LLFK_Pos_Down_g = 0.0;
  TestStructure_B.LLB_Freq_e = 0.0;
  TestStructure_B.LLB_Torque_Up_m = 0.0;
  TestStructure_B.LLB_Torque_Down_m = 0.0;
  TestStructure_B.LLB_Pos_Up_d = 0.0;
  TestStructure_B.LLB_Pos_Down_k = 0.0;
  TestStructure_B.LLW_Freq_k = 0.0;
  TestStructure_B.LLW_Torque_Up_f = 0.0;
  TestStructure_B.LLW_Torque_Down_k = 0.0;
  TestStructure_B.LLW_Pos_Up_c = 0.0;
  TestStructure_B.LLW_Pos_Down_n = 0.0;
  TestStructure_DW.Negtive_Up_temp = 0.0;
  TestStructure_DW.Negtive_Down_temp = 0.0;
  TestStructure_DW.Positive_Up_temp = 0.0;
  TestStructure_DW.Positive_Down_temp = 0.0;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLFK_Pos_Adjust(void)
{
  static const char_T b[11] = { 'L', 'L', 'F', 'K', '_', 'A', 'd', 'j', 'u', 's',
    't' };

  static const char_T c[8] = { 'L', 'L', 'F', 'K', '_', 'P', 'o', 's' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.ManualAuto[0];
  i = strcmp(&tmp_1[0], "LLFK_Manual_Pos");
  if (i != 0) {
    TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Adjust_h;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 11; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[11] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLFK_Pos_Adjust) {
     case TestStructure_IN_LLFK_Pos_Adjust_p:
      {
        boolean_T out;
        out = ((TestStructure_DW.Positive_Down_temp == 0.0) &&
               (TestStructure_B.Positive_Down > 0.0));
        if (out) {
          TestStructure_DW.Positive_Down_temp = 1.0;
          TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_Positive_Down;
          if (TestStructure_B.Positive_Down == 0.0) {
            TestStructure_DW.Positive_Down_temp = 0.0;
            TestStructure_B.LLFK_Pos_Up_p = -1.0;
          }
        } else {
          out = ((TestStructure_DW.Negtive_Down_temp == 0.0) &&
                 (TestStructure_B.Negtive_Down > 0.0));
          if (out) {
            TestStructure_DW.Negtive_Down_temp = 1.0;
            TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_Negtive_Down;
            if (TestStructure_B.Negtive_Down == 0.0) {
              TestStructure_DW.Negtive_Down_temp = 0.0;
              TestStructure_B.LLFK_Pos_Down_g = -1.0;
            }
          } else {
            out = ((TestStructure_DW.Positive_Up_temp == 0.0) &&
                   (TestStructure_B.Positive_Up > 0.0));
            if (out) {
              TestStructure_DW.Positive_Up_temp = 1.0;
              TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_Positive_Up;
              if (TestStructure_B.Positive_Up == 0.0) {
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 1.0;
              }
            } else {
              out = ((TestStructure_DW.Negtive_Up_temp == 0.0) &&
                     (TestStructure_B.Negtive_Up > 0.0));
              if (out) {
                TestStructure_DW.Negtive_Up_temp = 1.0;
                TestStructure_DW.is_LLFK_Pos_Adjust =
                  TestStructure_IN_Negtive_Up;
                if (TestStructure_B.Negtive_Up == 0.0) {
                  TestStructure_DW.Negtive_Up_temp = 0.0;
                  TestStructure_B.LLFK_Pos_Down_g = 1.0;
                }
              } else {
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp = &TestStructure_B.kState;
                tmp_0 = &c[0];
                for (i = 0; i < 8; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[8] = '\x00';
                TestStructure_B.LLFK_Freq_n = 0.0;
                TestStructure_B.LLFK_Torque_Up_g = 0.0;
                TestStructure_B.LLFK_Torque_Down_a = 0.0;
                TestStructure_B.LLFK_Pos_Up_p = 0.0;
                TestStructure_B.LLFK_Pos_Down_g = 0.0;
                TestStructure_B.LLB_Freq_e = 0.0;
                TestStructure_B.LLB_Torque_Up_m = 0.0;
                TestStructure_B.LLB_Torque_Down_m = 0.0;
                TestStructure_B.LLB_Pos_Up_d = 0.0;
                TestStructure_B.LLB_Pos_Down_k = 0.0;
                TestStructure_B.LLW_Freq_k = 0.0;
                TestStructure_B.LLW_Torque_Up_f = 0.0;
                TestStructure_B.LLW_Torque_Down_k = 0.0;
                TestStructure_B.LLW_Pos_Up_c = 0.0;
                TestStructure_B.LLW_Pos_Down_n = 0.0;
                TestStructure_DW.Negtive_Up_temp = 0.0;
                TestStructure_DW.Negtive_Down_temp = 0.0;
                TestStructure_DW.Positive_Up_temp = 0.0;
                TestStructure_DW.Positive_Down_temp = 0.0;
              }
            }
          }
        }
      }
      break;

     case TestStructure_IN_Negtive_Down:
      if (TestStructure_DW.Negtive_Down_temp == 0.0) {
        TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_LLFK_Pos_Adjust_p;
        TestStructure_enter_atomic_LLFK_Pos_Adjust();
      } else if (TestStructure_B.Negtive_Down == 0.0) {
        TestStructure_DW.Negtive_Down_temp = 0.0;
        TestStructure_B.LLFK_Pos_Down_g = -1.0;
      }
      break;

     case TestStructure_IN_Negtive_Up:
      if (TestStructure_DW.Negtive_Up_temp == 0.0) {
        TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_LLFK_Pos_Adjust_p;
        TestStructure_enter_atomic_LLFK_Pos_Adjust();
      } else if (TestStructure_B.Negtive_Up == 0.0) {
        TestStructure_DW.Negtive_Up_temp = 0.0;
        TestStructure_B.LLFK_Pos_Down_g = 1.0;
      }
      break;

     case TestStructure_IN_Positive_Down:
      if (TestStructure_DW.Positive_Down_temp == 0.0) {
        TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_LLFK_Pos_Adjust_p;
        TestStructure_enter_atomic_LLFK_Pos_Adjust();
      } else if (TestStructure_B.Positive_Down == 0.0) {
        TestStructure_DW.Positive_Down_temp = 0.0;
        TestStructure_B.LLFK_Pos_Up_p = -1.0;
      }
      break;

     default:
      /* case IN_Positive_Up: */
      if (TestStructure_DW.Positive_Up_temp == 0.0) {
        TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_LLFK_Pos_Adjust_p;
        TestStructure_enter_atomic_LLFK_Pos_Adjust();
      } else if (TestStructure_B.Positive_Up == 0.0) {
        TestStructure_DW.Positive_Up_temp = 0.0;
        TestStructure_B.LLFK_Pos_Up_p = 1.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_exit_internal_LLFK_Adjust(void)
{
  TestStructure_DW.is_LLFK_Freq_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLFK_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
  TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_LLFK_Adjust(void)
{
  static const char_T b[6] = { 'A', 'd', 'j', 'u', 's', 't' };

  static const char_T c[11] = { 'L', 'L', 'F', 'K', '_', 'A', 'd', 'j', 'u', 's',
    't' };

  static const char_T d[11] = { 'L', 'L', 'F', 'K', '_', 'A', 'd', 'j', 'u', 's',
    't' };

  static const char_T e[11] = { 'L', 'L', 'F', 'K', '_', 'A', 'd', 'j', 'u', 's',
    't' };

  static const char_T f[9] = { 'L', 'L', 'F', 'K', '_', 'F', 'r', 'e', 'q' };

  int32_T i;
  char_T (*tmp)[256];
  const char_T *tmp_0;
  char_T *tmp_1;
  tmp_1 = &TestStructure_B.Mode[0];
  i = strcmp(&tmp_1[0], "Lower_Limb_FlutterKick");
  if (i != 0) {
    TestStructure_exit_internal_LLFK_Adjust();
    TestStructure_DW.is_Adjust = TestStructure_IN_Adjust;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp = &TestStructure_B.kState;
    tmp_0 = &b[0];
    for (i = 0; i < 6; i++) {
      (*tmp)[i] = tmp_0[i];
    }

    (*tmp)[6] = '\x00';
  } else {
    switch (TestStructure_DW.is_LLFK_Adjust) {
     case TestStructure_IN_LLFK_Adjust_h:
      tmp_1 = &TestStructure_B.ManualAuto[0];
      i = strcmp(&tmp_1[0], "LLFK_Manual_Pos");
      if (i == 0) {
        TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Pos_Adjust;
        TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_LLFK_Pos_Adjust_p;
        TestStructure_enter_atomic_LLFK_Pos_Adjust();
      } else {
        tmp_1 = &TestStructure_B.ManualAuto[0];
        i = strcmp(&tmp_1[0], "LLFK_Manual_Torque");
        if (i == 0) {
          TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Torque_Adjust;
          TestStructure_DW.is_LLFK_Torque_Adjust =
            TestStructure_IN_LLFK_Torque_Adjust_f;
          TestStructure_enter_atomic_LLFK_Torque_Adjust();
        } else {
          tmp_1 = &TestStructure_B.ManualAuto[0];
          i = strcmp(&tmp_1[0], "LLFK_Manual_Freq");
          if (i == 0) {
            TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Freq_Adjust;
            TestStructure_DW.is_LLFK_Freq_Adjust =
              TestStructure_IN_LLFK_Freq_Adjust;
            TestStructure_enter_atomic_LLFK_Freq_Adjust();
          } else {
            tmp_1 = &TestStructure_B.ManualAuto[0];
            i = strcmp(&tmp_1[0], "LLFK_Auto");
            if (i == 0) {
              TestStructure_B.Display_State = 1.0;
              TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Auto_k;
            } else {
              strncpy(&TestStructure_B.kState[0], "", 255U);
              TestStructure_B.kState[255] = '\x00';
              tmp = &TestStructure_B.kState;
              tmp_0 = &c[0];
              for (i = 0; i < 11; i++) {
                (*tmp)[i] = tmp_0[i];
              }

              (*tmp)[11] = '\x00';
            }
          }
        }
      }
      break;

     case TestStructure_IN_LLFK_Auto_k:
      tmp_1 = &TestStructure_B.ManualAuto[0];
      i = strcmp(&tmp_1[0], "LLFK_Auto");
      if (i != 0) {
        TestStructure_B.Display_State = 2.0;
        TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Adjust_h;
        strncpy(&TestStructure_B.kState[0], "", 255U);
        TestStructure_B.kState[255] = '\x00';
        tmp = &TestStructure_B.kState;
        tmp_0 = &d[0];
        for (i = 0; i < 11; i++) {
          (*tmp)[i] = tmp_0[i];
        }

        (*tmp)[11] = '\x00';
      }
      break;

     case TestStructure_IN_LLFK_Freq_Adjust:
      {
        tmp_1 = &TestStructure_B.ManualAuto[0];
        i = strcmp(&tmp_1[0], "LLFK_Manual_Freq");
        if (i != 0) {
          TestStructure_DW.is_LLFK_Freq_Adjust =
            TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Adjust_h;
          strncpy(&TestStructure_B.kState[0], "", 255U);
          TestStructure_B.kState[255] = '\x00';
          tmp = &TestStructure_B.kState;
          tmp_0 = &e[0];
          for (i = 0; i < 11; i++) {
            (*tmp)[i] = tmp_0[i];
          }

          (*tmp)[11] = '\x00';
        } else {
          switch (TestStructure_DW.is_LLFK_Freq_Adjust) {
           case TestStructure_IN_Freq_Down:
            if (TestStructure_DW.Freq_Down_temp == 0.0) {
              TestStructure_DW.is_LLFK_Freq_Adjust =
                TestStructure_IN_LLFK_Freq_Adjust;
              TestStructure_enter_atomic_LLFK_Freq_Adjust();
            } else if (TestStructure_B.Freq_Down == 0.0) {
              TestStructure_DW.Freq_Down_temp = 0.0;
              TestStructure_B.LLFK_Freq_n = -1.0;
            }
            break;

           case TestStructure_IN_Freq_Up:
            if (TestStructure_DW.Freq_Up_temp == 0.0) {
              TestStructure_DW.is_LLFK_Freq_Adjust =
                TestStructure_IN_LLFK_Freq_Adjust;
              TestStructure_enter_atomic_LLFK_Freq_Adjust();
            } else if (TestStructure_B.Freq_Up == 0.0) {
              TestStructure_DW.Freq_Up_temp = 0.0;
              TestStructure_B.LLFK_Freq_n = 1.0;
            }
            break;

           default:
            {
              boolean_T out;

              /* case IN_LLFK_Freq_Adjust: */
              out = ((TestStructure_DW.Freq_Up_temp == 0.0) &&
                     (TestStructure_B.Freq_Up > 0.0));
              if (out) {
                TestStructure_DW.Freq_Up_temp = 1.0;
                TestStructure_DW.is_LLFK_Freq_Adjust = TestStructure_IN_Freq_Up;
                if (TestStructure_B.Freq_Up == 0.0) {
                  TestStructure_DW.Freq_Up_temp = 0.0;
                  TestStructure_B.LLFK_Freq_n = 1.0;
                }
              } else {
                out = ((TestStructure_DW.Freq_Down_temp == 0.0) &&
                       (TestStructure_B.Freq_Down > 0.0));
                if (out) {
                  TestStructure_DW.Freq_Down_temp = 1.0;
                  TestStructure_DW.is_LLFK_Freq_Adjust =
                    TestStructure_IN_Freq_Down;
                  if (TestStructure_B.Freq_Down == 0.0) {
                    TestStructure_DW.Freq_Down_temp = 0.0;
                    TestStructure_B.LLFK_Freq_n = -1.0;
                  }
                } else {
                  strncpy(&TestStructure_B.kState[0], "", 255U);
                  TestStructure_B.kState[255] = '\x00';
                  tmp = &TestStructure_B.kState;
                  tmp_0 = &f[0];
                  for (i = 0; i < 9; i++) {
                    (*tmp)[i] = tmp_0[i];
                  }

                  (*tmp)[9] = '\x00';
                  TestStructure_B.LLFK_Freq_n = 0.0;
                  TestStructure_B.LLFK_Torque_Up_g = 0.0;
                  TestStructure_B.LLFK_Torque_Down_a = 0.0;
                  TestStructure_B.LLFK_Pos_Up_p = 0.0;
                  TestStructure_B.LLFK_Pos_Down_g = 0.0;
                  TestStructure_B.LLB_Freq_e = 0.0;
                  TestStructure_B.LLB_Torque_Up_m = 0.0;
                  TestStructure_B.LLB_Torque_Down_m = 0.0;
                  TestStructure_B.LLB_Pos_Up_d = 0.0;
                  TestStructure_B.LLB_Pos_Down_k = 0.0;
                  TestStructure_B.LLW_Freq_k = 0.0;
                  TestStructure_B.LLW_Torque_Up_f = 0.0;
                  TestStructure_B.LLW_Torque_Down_k = 0.0;
                  TestStructure_B.LLW_Pos_Up_c = 0.0;
                  TestStructure_B.LLW_Pos_Down_n = 0.0;
                  TestStructure_DW.Freq_Up_temp = 0.0;
                  TestStructure_DW.Freq_Down_temp = 0.0;
                }
              }
            }
            break;
          }
        }
      }
      break;

     case TestStructure_IN_LLFK_Pos_Adjust:
      TestStructure_LLFK_Pos_Adjust();
      break;

     default:
      /* case IN_LLFK_Torque_Adjust: */
      TestStructure_LLFK_Torque_Adjust();
      break;
    }
  }
}

/* Function for Chart: '<S3>/KnobStateMachine' */
static void TestStructure_Adjust(void)
{
  static const char_T b[6] = { 'A', 'd', 'j', 'u', 's', 't' };

  static const char_T c[5] = { 'S', 't', 'a', 'r', 't' };

  static const char_T d[6] = { 'A', 'd', 'j', 'u', 's', 't' };

  static const char_T e[6] = { 'A', 'd', 'j', 'u', 's', 't' };

  static const char_T f[10] = { 'L', 'L', 'B', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T g[10] = { 'L', 'L', 'W', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T h[11] = { 'L', 'L', 'F', 'K', '_', 'A', 'd', 'j', 'u', 's',
    't' };

  static const char_T i[10] = { 'L', 'L', 'B', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T j[10] = { 'L', 'L', 'B', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T k[10] = { 'L', 'L', 'B', '_', 'A', 'd', 'j', 'u', 's', 't'
  };

  static const char_T l[8] = { 'L', 'L', 'B', '_', 'F', 'r', 'e', 'q' };

  int32_T i_0;
  char_T (*tmp_0)[256];
  char_T tmp[6];
  const char_T *tmp_1;
  char_T *tmp_2;
  for (i_0 = 0; i_0 < 6; i_0++) {
    tmp[i_0] = TestStructure_B.State[i_0];
  }

  i_0 = strcmp(&tmp[0], "Stop");
  if (i_0 != 0) {
    TestStructure_exit_internal_LLB_Adjust();
    TestStructure_exit_internal_LLFK_Adjust();
    TestStructure_exit_internal_LLW_Adjust();
    TestStructure_DW.is_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_c7_TestStructure = TestStructure_IN_Start;
    strncpy(&TestStructure_B.kState[0], "", 255U);
    TestStructure_B.kState[255] = '\x00';
    tmp_0 = &TestStructure_B.kState;
    tmp_1 = &c[0];
    for (i_0 = 0; i_0 < 5; i_0++) {
      (*tmp_0)[i_0] = tmp_1[i_0];
    }

    (*tmp_0)[5] = '\x00';
  } else {
    switch (TestStructure_DW.is_Adjust) {
     case TestStructure_IN_Adjust:
      tmp_2 = &TestStructure_B.Mode[0];
      i_0 = strcmp(&tmp_2[0], "Lower_Limb_Walk");
      if (i_0 == 0) {
        TestStructure_B.Display_State = 4.0;
        TestStructure_DW.is_Adjust = TestStructure_IN_LLW_Adjust;
        TestStructure_DW.is_LLW_Adjust = TestStructure_IN_LLW_Adjust_m;
        strncpy(&TestStructure_B.kState[0], "", 255U);
        TestStructure_B.kState[255] = '\x00';
        tmp_0 = &TestStructure_B.kState;
        tmp_1 = &g[0];
        for (i_0 = 0; i_0 < 10; i_0++) {
          (*tmp_0)[i_0] = tmp_1[i_0];
        }

        (*tmp_0)[10] = '\x00';
      } else {
        tmp_2 = &TestStructure_B.Mode[0];
        i_0 = strcmp(&tmp_2[0], "Lower_Limb_FlutterKick");
        if (i_0 == 0) {
          TestStructure_B.Display_State = 2.0;
          TestStructure_DW.is_Adjust = TestStructure_IN_LLFK_Adjust;
          TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_LLFK_Adjust_h;
          strncpy(&TestStructure_B.kState[0], "", 255U);
          TestStructure_B.kState[255] = '\x00';
          tmp_0 = &TestStructure_B.kState;
          tmp_1 = &h[0];
          for (i_0 = 0; i_0 < 11; i_0++) {
            (*tmp_0)[i_0] = tmp_1[i_0];
          }

          (*tmp_0)[11] = '\x00';
        } else {
          tmp_2 = &TestStructure_B.Mode[0];
          i_0 = strcmp(&tmp_2[0], "Lower_Limb_Breaststroke");
          if (i_0 == 0) {
            TestStructure_B.Display_State = 3.0;
            TestStructure_DW.is_Adjust = TestStructure_IN_LLB_Adjust;
            TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Adjust_i;
            strncpy(&TestStructure_B.kState[0], "", 255U);
            TestStructure_B.kState[255] = '\x00';
            tmp_0 = &TestStructure_B.kState;
            tmp_1 = &j[0];
            for (i_0 = 0; i_0 < 10; i_0++) {
              (*tmp_0)[i_0] = tmp_1[i_0];
            }

            (*tmp_0)[10] = '\x00';
          } else {
            tmp_2 = &TestStructure_B.Mode[0];
            i_0 = strcmp(&tmp_2[0], "Lower_Limb_Follow");
            if (i_0 == 0) {
              TestStructure_B.Display_State = 1.0;
              TestStructure_DW.is_Adjust = TestStructure_IN_LLF_Adjust;
            } else {
              strncpy(&TestStructure_B.kState[0], "", 255U);
              TestStructure_B.kState[255] = '\x00';
              tmp_0 = &TestStructure_B.kState;
              tmp_1 = &b[0];
              for (i_0 = 0; i_0 < 6; i_0++) {
                (*tmp_0)[i_0] = tmp_1[i_0];
              }

              (*tmp_0)[6] = '\x00';
            }
          }
        }
      }
      break;

     case TestStructure_IN_LLB_Adjust:
      {
        tmp_2 = &TestStructure_B.Mode[0];
        i_0 = strcmp(&tmp_2[0], "Lower_Limb_Breaststroke");
        if (i_0 != 0) {
          TestStructure_exit_internal_LLB_Adjust();
          TestStructure_DW.is_Adjust = TestStructure_IN_Adjust;
          strncpy(&TestStructure_B.kState[0], "", 255U);
          TestStructure_B.kState[255] = '\x00';
          tmp_0 = &TestStructure_B.kState;
          tmp_1 = &e[0];
          for (i_0 = 0; i_0 < 6; i_0++) {
            (*tmp_0)[i_0] = tmp_1[i_0];
          }

          (*tmp_0)[6] = '\x00';
        } else {
          switch (TestStructure_DW.is_LLB_Adjust) {
           case TestStructure_IN_LLB_Adjust_i:
            tmp_2 = &TestStructure_B.ManualAuto[0];
            i_0 = strcmp(&tmp_2[0], "LLB_Manual_Pos");
            if (i_0 == 0) {
              TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Pos_Adjust;
              TestStructure_DW.is_LLB_Pos_Adjust =
                TestStructure_IN_LLB_Pos_Adjust_d;
              TestStructure_enter_atomic_LLB_Pos_Adjust();
            } else {
              tmp_2 = &TestStructure_B.ManualAuto[0];
              i_0 = strcmp(&tmp_2[0], "LLB_Manual_Torque");
              if (i_0 == 0) {
                TestStructure_DW.is_LLB_Adjust =
                  TestStructure_IN_LLB_Torque_Adjust;
                TestStructure_DW.is_LLB_Torque_Adjust =
                  TestStructure_IN_LLB_Torque_Adjust_e;
                TestStructure_enter_atomic_LLB_Torque_Adjust();
              } else {
                tmp_2 = &TestStructure_B.ManualAuto[0];
                i_0 = strcmp(&tmp_2[0], "LLB_Manual_Freq");
                if (i_0 == 0) {
                  TestStructure_DW.is_LLB_Adjust =
                    TestStructure_IN_LLB_Freq_Adjust;
                  TestStructure_DW.is_LLB_Freq_Adjust =
                    TestStructure_IN_LLB_Freq_Adjust;
                  TestStructure_enter_atomic_LLB_Freq_Adjust();
                } else {
                  tmp_2 = &TestStructure_B.ManualAuto[0];
                  i_0 = strcmp(&tmp_2[0], "LLB_Auto");
                  if (i_0 == 0) {
                    TestStructure_B.Display_State = 1.0;
                    TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Auto_j;
                  } else {
                    strncpy(&TestStructure_B.kState[0], "", 255U);
                    TestStructure_B.kState[255] = '\x00';
                    tmp_0 = &TestStructure_B.kState;
                    tmp_1 = &f[0];
                    for (i_0 = 0; i_0 < 10; i_0++) {
                      (*tmp_0)[i_0] = tmp_1[i_0];
                    }

                    (*tmp_0)[10] = '\x00';
                  }
                }
              }
            }
            break;

           case TestStructure_IN_LLB_Auto_j:
            tmp_2 = &TestStructure_B.ManualAuto[0];
            i_0 = strcmp(&tmp_2[0], "LLB_Auto");
            if (i_0 != 0) {
              TestStructure_B.Display_State = 3.0;
              TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Adjust_i;
              strncpy(&TestStructure_B.kState[0], "", 255U);
              TestStructure_B.kState[255] = '\x00';
              tmp_0 = &TestStructure_B.kState;
              tmp_1 = &i[0];
              for (i_0 = 0; i_0 < 10; i_0++) {
                (*tmp_0)[i_0] = tmp_1[i_0];
              }

              (*tmp_0)[10] = '\x00';
            }
            break;

           case TestStructure_IN_LLB_Freq_Adjust:
            {
              tmp_2 = &TestStructure_B.ManualAuto[0];
              i_0 = strcmp(&tmp_2[0], "LLB_Manual_Freq");
              if (i_0 != 0) {
                TestStructure_DW.is_LLB_Freq_Adjust =
                  TestStructure_IN_NO_ACTIVE_CHILD_g;
                TestStructure_DW.is_LLB_Adjust = TestStructure_IN_LLB_Adjust_i;
                strncpy(&TestStructure_B.kState[0], "", 255U);
                TestStructure_B.kState[255] = '\x00';
                tmp_0 = &TestStructure_B.kState;
                tmp_1 = &k[0];
                for (i_0 = 0; i_0 < 10; i_0++) {
                  (*tmp_0)[i_0] = tmp_1[i_0];
                }

                (*tmp_0)[10] = '\x00';
              } else {
                switch (TestStructure_DW.is_LLB_Freq_Adjust) {
                 case TestStructure_IN_Freq_Down:
                  if (TestStructure_DW.Freq_Down_temp == 0.0) {
                    TestStructure_DW.is_LLB_Freq_Adjust =
                      TestStructure_IN_LLB_Freq_Adjust;
                    TestStructure_enter_atomic_LLB_Freq_Adjust();
                  } else if (TestStructure_B.Freq_Down == 0.0) {
                    TestStructure_DW.Freq_Down_temp = 0.0;
                    TestStructure_B.LLB_Freq_e = -1.0;
                  }
                  break;

                 case TestStructure_IN_Freq_Up:
                  if (TestStructure_DW.Freq_Up_temp == 0.0) {
                    TestStructure_DW.is_LLB_Freq_Adjust =
                      TestStructure_IN_LLB_Freq_Adjust;
                    TestStructure_enter_atomic_LLB_Freq_Adjust();
                  } else if (TestStructure_B.Freq_Up == 0.0) {
                    TestStructure_DW.Freq_Up_temp = 0.0;
                    TestStructure_B.LLB_Freq_e = 1.0;
                  }
                  break;

                 default:
                  {
                    boolean_T out;

                    /* case IN_LLB_Freq_Adjust: */
                    out = ((TestStructure_DW.Freq_Up_temp == 0.0) &&
                           (TestStructure_B.Freq_Up > 0.0));
                    if (out) {
                      TestStructure_DW.Freq_Up_temp = 1.0;
                      TestStructure_DW.is_LLB_Freq_Adjust =
                        TestStructure_IN_Freq_Up;
                      if (TestStructure_B.Freq_Up == 0.0) {
                        TestStructure_DW.Freq_Up_temp = 0.0;
                        TestStructure_B.LLB_Freq_e = 1.0;
                      }
                    } else {
                      out = ((TestStructure_DW.Freq_Down_temp == 0.0) &&
                             (TestStructure_B.Freq_Down > 0.0));
                      if (out) {
                        TestStructure_DW.Freq_Down_temp = 1.0;
                        TestStructure_DW.is_LLB_Freq_Adjust =
                          TestStructure_IN_Freq_Down;
                        if (TestStructure_B.Freq_Down == 0.0) {
                          TestStructure_DW.Freq_Down_temp = 0.0;
                          TestStructure_B.LLB_Freq_e = -1.0;
                        }
                      } else {
                        strncpy(&TestStructure_B.kState[0], "", 255U);
                        TestStructure_B.kState[255] = '\x00';
                        tmp_0 = &TestStructure_B.kState;
                        tmp_1 = &l[0];
                        for (i_0 = 0; i_0 < 8; i_0++) {
                          (*tmp_0)[i_0] = tmp_1[i_0];
                        }

                        (*tmp_0)[8] = '\x00';
                        TestStructure_B.LLFK_Freq_n = 0.0;
                        TestStructure_B.LLFK_Torque_Up_g = 0.0;
                        TestStructure_B.LLFK_Torque_Down_a = 0.0;
                        TestStructure_B.LLFK_Pos_Up_p = 0.0;
                        TestStructure_B.LLFK_Pos_Down_g = 0.0;
                        TestStructure_B.LLB_Freq_e = 0.0;
                        TestStructure_B.LLB_Torque_Up_m = 0.0;
                        TestStructure_B.LLB_Torque_Down_m = 0.0;
                        TestStructure_B.LLB_Pos_Up_d = 0.0;
                        TestStructure_B.LLB_Pos_Down_k = 0.0;
                        TestStructure_B.LLW_Freq_k = 0.0;
                        TestStructure_B.LLW_Torque_Up_f = 0.0;
                        TestStructure_B.LLW_Torque_Down_k = 0.0;
                        TestStructure_B.LLW_Pos_Up_c = 0.0;
                        TestStructure_B.LLW_Pos_Down_n = 0.0;
                        TestStructure_DW.Freq_Up_temp = 0.0;
                        TestStructure_DW.Freq_Down_temp = 0.0;
                      }
                    }
                  }
                  break;
                }
              }
            }
            break;

           case TestStructure_IN_LLB_Pos_Adjust:
            TestStructure_LLB_Pos_Adjust();
            break;

           default:
            /* case IN_LLB_Torque_Adjust: */
            TestStructure_LLB_Torque_Adjust();
            break;
          }
        }
      }
      break;

     case TestStructure_IN_LLFK_Adjust:
      TestStructure_LLFK_Adjust();
      break;

     case TestStructure_IN_LLF_Adjust:
      tmp_2 = &TestStructure_B.Mode[0];
      i_0 = strcmp(&tmp_2[0], "Lower_Limb_Follow");
      if (i_0 != 0) {
        TestStructure_DW.is_Adjust = TestStructure_IN_Adjust;
        strncpy(&TestStructure_B.kState[0], "", 255U);
        TestStructure_B.kState[255] = '\x00';
        tmp_0 = &TestStructure_B.kState;
        tmp_1 = &d[0];
        for (i_0 = 0; i_0 < 6; i_0++) {
          (*tmp_0)[i_0] = tmp_1[i_0];
        }

        (*tmp_0)[6] = '\x00';
      }
      break;

     default:
      /* case IN_LLW_Adjust: */
      TestStructure_LLW_Adjust();
      break;
    }
  }
}

/* OutputUpdate for Task: Periodic_Task */
void Periodic_Task_step(void)          /* Sample time: [0.001s, 0.0s] */
{
  /* Reset subsysRan breadcrumbs */
  srClearBC
    (TestStructure_DW.SwitchCaseActionSubsystem.SwitchCaseActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (TestStructure_DW.SwitchCaseActionSubsystem1.SwitchCaseActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.LLB_Dispaly.LLB_Dispaly_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.LLF_Display_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.LLBAutoTask.LLBAutoTask_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.Subsystem2.Subsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.Subsystem3.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.Subsystem3.Subsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.LLBManualTask_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.LLFKManualTask_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.LLWManualTask_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.IfActionSubsystem8.IfActionSubsystem8_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.StopTask_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(TestStructure_DW.ULLockTask.ULLockTask_SubsysRanBC);

  /* Outputs for Atomic SubSystem: '<Root>/SensingAndIntention' */
  /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
  TestStructure_B.PulseGenerator = (TestStructure_DW.clockTickCounter <
    TestStructure_cal->PulseGenerator_Duty) &&
    (TestStructure_DW.clockTickCounter >= 0) ?
    TestStructure_cal->PulseGenerator_Amp : 0.0;

  /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
  if (TestStructure_DW.clockTickCounter >= TestStructure_cal->PulseGenerator_T -
      1.0) {
    TestStructure_DW.clockTickCounter = 0;
  } else {
    TestStructure_DW.clockTickCounter++;
  }

  /* Bias: '<S2>/Bias' */
  TestStructure_B.Bias = TestStructure_B.PulseGenerator +
    TestStructure_cal->Bias_Bias;

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  TestStructure_B.BusCreator.LeftFootPosition = TestStructure_B.Bias;

  /* BusCreator: '<S2>/Bus Creator' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant10'
   *  Constant: '<S2>/Constant11'
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Constant4'
   *  Constant: '<S2>/Constant5'
   *  Constant: '<S2>/Constant6'
   *  Constant: '<S2>/Constant7'
   *  Constant: '<S2>/Constant8'
   */
  TestStructure_B.BusCreator.KeyState = TestStructure_cal->Constant11_Value_j;
  TestStructure_B.BusCreator.ForceThreshold_Kick =
    TestStructure_cal->Constant2_Value_i2;
  TestStructure_B.BusCreator.ForceThreshold_Walk =
    TestStructure_cal->Constant1_Value_ia;
  TestStructure_B.BusCreator.ForceVelocityMisMatchState_Kick =
    TestStructure_cal->Constant_Value_o;
  TestStructure_B.BusCreator.ForceVelocityMisMatchState_Walk =
    TestStructure_cal->Constant4_Value_g;
  TestStructure_B.BusCreator.LegPositionMax_Kick =
    TestStructure_cal->Constant5_Value_c;
  TestStructure_B.BusCreator.LegPositionMax_Walk =
    TestStructure_cal->Constant6_Value_c;
  TestStructure_B.BusCreator.LegPositionMin_Kick =
    TestStructure_cal->Constant7_Value_j;
  TestStructure_B.BusCreator.LegPositionMin_Walk =
    TestStructure_cal->Constant8_Value_h;
  TestStructure_B.BusCreator.LeftFootForce =
    TestStructure_cal->Constant10_ParamForce;

  /* Memory: '<S2>/Memory' */
  TestStructure_B.Memory = TestStructure_DW.Memory_PreviousInput;

  /* SignalConversion generated from: '<S2>/Bus Selector3' */
  TestStructure_B.Sensor1ADCh1 = TestStructure_B.Memory.Sensor1ADCh1;
  TestStructure_MedianFilter1(TestStructure_B.Sensor1ADCh1,
    &TestStructure_B.MedianFilter2, &TestStructure_DW.MedianFilter2);
  TestStructure_LowpassFilter2(TestStructure_B.MedianFilter2.MedianFilter1,
    &TestStructure_B.LowpassFilter3, &TestStructure_DW.LowpassFilter3);

  /* SignalConversion generated from: '<S2>/Bus Selector3' */
  TestStructure_B.Sensor1ADCh2 = TestStructure_B.Memory.Sensor1ADCh2;
  TestStructure_MedianFilter1(TestStructure_B.Sensor1ADCh2,
    &TestStructure_B.MedianFilter1, &TestStructure_DW.MedianFilter1);
  TestStructure_LowpassFilter2(TestStructure_B.MedianFilter1.MedianFilter1,
    &TestStructure_B.LowpassFilter2, &TestStructure_DW.LowpassFilter2);

  /* SignalConversion generated from: '<S2>/Bus Selector3' */
  TestStructure_B.Sensor3ADCh1 = TestStructure_B.Memory.Sensor3ADCh1;
  TestStructure_MedianFilter1(TestStructure_B.Sensor3ADCh1,
    &TestStructure_B.MedianFilter3, &TestStructure_DW.MedianFilter3);
  TestStructure_LowpassFilter2(TestStructure_B.MedianFilter3.MedianFilter1,
    &TestStructure_B.LowpassFilter4, &TestStructure_DW.LowpassFilter4);

  /* SignalConversion generated from: '<S2>/Bus Selector3' */
  TestStructure_B.Sensor3ADCh2 = TestStructure_B.Memory.Sensor3ADCh2;
  TestStructure_MedianFilter1(TestStructure_B.Sensor3ADCh2,
    &TestStructure_B.MedianFilter4, &TestStructure_DW.MedianFilter4);
  TestStructure_LowpassFilter2(TestStructure_B.MedianFilter4.MedianFilter1,
    &TestStructure_B.LowpassFilter5, &TestStructure_DW.LowpassFilter5);

  /* SignalConversion generated from: '<S2>/Bus Selector2' */
  TestStructure_B.Motor1ActuralPosition =
    TestStructure_B.Memory.Motor1ActuralPosition;

  /* SignalConversion generated from: '<S2>/Bus Selector2' */
  TestStructure_B.Motor2ActuralPosition =
    TestStructure_B.Memory.Motor2ActuralPosition;

  /* Memory: '<S2>/Memory1' */
  TestStructure_B.Memory1 = TestStructure_DW.Memory1_PreviousInput;

  /* Constant: '<S2>/Constant9' */
  TestStructure_B.Constant9 = TestStructure_cal->Constant9_ParamPosition;

  /* End of Outputs for SubSystem: '<Root>/SensingAndIntention' */

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport1_buf_2 =
    TestStructure_B.BusCreator;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_B.TmpTaskTransAtSensingAndIntentionOutport1 =
    TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport1_buf_2;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_post(TestStructure_DW.sw_buf_2);

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport2_buf_3 =
    TestStructure_B.Motor1ActuralPosition;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_B.TmpTaskTransAtSensingAndIntentionOutport2 =
    TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport2_buf_3;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_post(TestStructure_DW.sw_buf_3);

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport3_buf_4 =
    TestStructure_B.Motor2ActuralPosition;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_B.TmpTaskTransAtSensingAndIntentionOutport3 =
    TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport3_buf_4;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_post(TestStructure_DW.sw_buf_4);

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport4_buf_5 =
    TestStructure_B.Memory1;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  TestStructure_B.TmpTaskTransAtSensingAndIntentionOutport4 =
    TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport4_buf_5;

  /* TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_post(TestStructure_DW.sw_buf_5);

  /* TaskTransBlk generated from: '<Root>/DevicesModel' */
  rtw_slrealtime_sem_wait(TestStructure_DW.sw_buf_1);

  /* TaskTransBlk generated from: '<Root>/DevicesModel' */
  TestStructure_B.TmpTaskTransAtDevicesModelInport1 =
    TestStructure_DW.TmpTaskTransAtControlOutport1_buf_1;

  /* ModelReference: '<Root>/DevicesModel' */
  Robot(&TestStructure_B.TmpTaskTransAtDevicesModelInport1,
        &TestStructure_B.DevicesModel_o1, &TestStructure_B.State_g);

  /* Update for Atomic SubSystem: '<Root>/SensingAndIntention' */
  /* Update for Memory: '<S2>/Memory' */
  TestStructure_DW.Memory_PreviousInput = TestStructure_B.DevicesModel_o1;

  /* Update for Memory: '<S2>/Memory1' */
  TestStructure_DW.Memory1_PreviousInput = TestStructure_B.State_g;

  /* End of Update for SubSystem: '<Root>/SensingAndIntention' */

  /* Update for ModelReference: '<Root>/DevicesModel' */
  Robot_Update();

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++task_M[0]->Timing.clockTick0)) {
    ++task_M[0]->Timing.clockTickH0;
  }

  task_M[0]->Timing.t[0] = task_M[0]->Timing.clockTick0 * task_M[0]
    ->Timing.stepSize0 + task_M[0]->Timing.clockTickH0 * task_M[0]
    ->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  task_M[0]->Timing.clockTick1++;
  if (!task_M[0]->Timing.clockTick1) {
    task_M[0]->Timing.clockTickH1++;
  }
}

/* OutputUpdate for Task: Periodic_Task1 */
void Periodic_Task1_step(void)         /* Sample time: [0.001s, 0.0s] */
{
  {
    static const char_T b[5] = { 'P', 'a', 'u', 's', 'e' };

    static const char_T c[5] = { 'S', 't', 'a', 'r', 't' };

    static const char_T d[4] = { 'S', 't', 'o', 'p' };

    static const char_T e[17] = { 'L', 'o', 'w', 'e', 'r', '_', 'L', 'i', 'm',
      'b', '_', 'F', 'o', 'l', 'l', 'o', 'w' };

    static const char_T f[5] = { 'S', 't', 'a', 'r', 't' };

    static const char_T b_0[5] = { 'S', 't', 'a', 'r', 't' };

    static const char_T c_0[5] = { 'S', 't', 'a', 'r', 't' };

    static const char_T d_0[6] = { 'A', 'd', 'j', 'u', 's', 't' };

    real_T tmp_4;
    real_T u;
    int32_T i;
    char_T (*tmp_1)[256];
    char_T tmp_2[6];
    char_T (*tmp)[6];
    const char_T *tmp_0;
    char_T *tmp_3;

    /* Outputs for Atomic SubSystem: '<Root>/Control' */
    /* Outputs for Enabled SubSystem: '<S6>/LLWManualTask' incorporates:
     *  EnablePort: '<S83>/Enable'
     */
    /* Constant: '<S116>/Constant3' */
    tmp_4 = *get_SampleTime();

    /* End of Outputs for SubSystem: '<S6>/LLWManualTask' */
    /* End of Outputs for SubSystem: '<Root>/Control' */

    /* TaskTransBlk generated from: '<Root>/Control' */
    rtw_slrealtime_sem_wait(TestStructure_DW.sw_buf_2);

    /* TaskTransBlk generated from: '<Root>/Control' */
    TestStructure_B.TmpTaskTransAtControlInport1 =
      TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport1_buf_2;

    /* TaskTransBlk generated from: '<Root>/Control' */
    rtw_slrealtime_sem_wait(TestStructure_DW.sw_buf_3);

    /* TaskTransBlk generated from: '<Root>/Control' */
    TestStructure_B.TmpTaskTransAtControlInport2 =
      TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport2_buf_3;

    /* TaskTransBlk generated from: '<Root>/Control' */
    rtw_slrealtime_sem_wait(TestStructure_DW.sw_buf_4);

    /* TaskTransBlk generated from: '<Root>/Control' */
    TestStructure_B.TmpTaskTransAtControlInport3 =
      TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport3_buf_4;

    /* TaskTransBlk generated from: '<Root>/Control' */
    rtw_slrealtime_sem_wait(TestStructure_DW.sw_buf_5);

    /* TaskTransBlk generated from: '<Root>/Control' */
    TestStructure_B.TmpTaskTransAtControlInport4 =
      TestStructure_DW.TmpTaskTransAtSensingAndIntentionOutport4_buf_5;

    /* Outputs for Atomic SubSystem: '<Root>/Control' */
    /* DiscreteIntegrator: '<S3>/LLFK_Freq' */
    TestStructure_B.LLFK_Freq = TestStructure_DW.LLFK_Freq_DSTATE;

    /* Memory: '<S3>/Memory1' */
    TestStructure_B.Memory1_a = TestStructure_DW.Memory1_PreviousInput_e;

    /* Constant: '<S3>/StopButton' */
    TestStructure_B.StopButton = TestStructure_cal->StopButton_Value;

    /* Constant: '<S3>/Pause//StartButton' */
    TestStructure_B.PauseStartButton = TestStructure_cal->PauseStartButton_Value;

    /* Constant: '<S3>/PatternButton' */
    TestStructure_B.PatternButton = TestStructure_cal->PatternButton_Value;

    /* Constant: '<S3>/Manual//AutoButton' */
    TestStructure_B.ManualAutoButton = TestStructure_cal->ManualAutoButton_Value;

    /* Constant: '<S3>/Unlock//LockButton' */
    TestStructure_B.UnlockLockButton = TestStructure_cal->UnlockLockButton_Value;

    /* Chart: '<S3>/ControlPannelStateMachine' */
    TestStructure_DW.sfEvent_po = TestStructure_CALL_EVENT_f;
    if (TestStructure_DW.is_active_c6_TestStructure == 0U) {
      TestStructure_DW.is_active_c6_TestStructure = 1U;
      TestStructure_DW.is_c6_TestStructure = TestStructure_IN_Stop;
      TestStructure_enter_internal_Stop();
    } else {
      switch (TestStructure_DW.is_c6_TestStructure) {
       case TestStructure_IN_Pause:
        {
          boolean_T b_out;
          b_out = ((TestStructure_DW.Pause_StartButtonPressed_temp == 0.0) &&
                   (TestStructure_B.PauseStartButton > 0.0) &&
                   (TestStructure_B.Memory1_a == 9.0));
          if (b_out) {
            TestStructure_DW.Pause_StartButtonPressed_temp = 1.0;
            TestStructure_DW.is_c6_TestStructure = TestStructure_IN_Start;
            TestStructure_DW.is_Start = TestStructure_IN_Start_h;
            strncpy(&TestStructure_B.State[0], "", 5U);
            TestStructure_B.State[5] = '\x00';
            tmp = &TestStructure_B.State;
            tmp_0 = &c[0];
            for (i = 0; i < 5; i++) {
              (*tmp)[i] = tmp_0[i];
            }

            (*tmp)[5] = '\x00';
            if (TestStructure_B.PauseStartButton == 0.0) {
              TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
            }
          } else if (TestStructure_B.StopButton > 0.0) {
            TestStructure_DW.is_c6_TestStructure = TestStructure_IN_Stop;
            TestStructure_enter_internal_Stop();
          } else {
            strncpy(&TestStructure_B.State[0], "", 5U);
            TestStructure_B.State[5] = '\x00';
            tmp = &TestStructure_B.State;
            tmp_0 = &b[0];
            for (i = 0; i < 5; i++) {
              (*tmp)[i] = tmp_0[i];
            }

            (*tmp)[5] = '\x00';
            if (TestStructure_B.PauseStartButton == 0.0) {
              TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
            }
          }
        }
        break;

       case TestStructure_IN_Start:
        TestStructure_Start();
        break;

       default:
        {
          boolean_T b_out;

          /* case IN_Stop: */
          b_out = ((TestStructure_B.PauseStartButton > 0.0) &&
                   (TestStructure_B.Memory1_a == 1.0));
          if (b_out) {
            TestStructure_DW.Pause_StartButtonPressed_temp = 1.0;
            TestStructure_DW.is_LowerLimb_Breaststroke =
              TestStructure_IN_NO_ACTIVE_CHILD_g;
            TestStructure_DW.is_LowerLimb_FlutterKick =
              TestStructure_IN_NO_ACTIVE_CHILD_g;
            TestStructure_DW.is_LowerLimb_Follow =
              TestStructure_IN_NO_ACTIVE_CHILD_g;
            TestStructure_DW.is_LowerLimb_Walk =
              TestStructure_IN_NO_ACTIVE_CHILD_g;
            TestStructure_DW.is_Stop = TestStructure_IN_NO_ACTIVE_CHILD_g;
            TestStructure_DW.is_c6_TestStructure = TestStructure_IN_Start;
            TestStructure_DW.is_Start = TestStructure_IN_Start_h;
            strncpy(&TestStructure_B.State[0], "", 5U);
            TestStructure_B.State[5] = '\x00';
            tmp = &TestStructure_B.State;
            tmp_0 = &f[0];
            for (i = 0; i < 5; i++) {
              (*tmp)[i] = tmp_0[i];
            }

            (*tmp)[5] = '\x00';
            if (TestStructure_B.PauseStartButton == 0.0) {
              TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
            }
          } else {
            switch (TestStructure_DW.is_Stop) {
             case TestStructure_IN_LowerLimb_Breaststroke:
              TestStructure_LowerLimb_Breaststroke();
              break;

             case TestStructure_IN_LowerLimb_FlutterKick:
              TestStructure_LowerLimb_FlutterKick();
              break;

             case TestStructure_IN_LowerLimb_Follow:
              b_out = ((TestStructure_DW.PatternButtonPressed_temp == 0.0) &&
                       (TestStructure_B.PatternButton > 0.0));
              if (b_out) {
                TestStructure_DW.PatternButtonPressed_temp = 1.0;
                TestStructure_DW.is_LowerLimb_Follow =
                  TestStructure_IN_NO_ACTIVE_CHILD_g;
                TestStructure_DW.is_Stop =
                  TestStructure_IN_LowerLimb_FlutterKick;
                TestStructure_DW.was_Stop =
                  TestStructure_IN_LowerLimb_FlutterKick;
                TestStructure_enter_internal_LowerLimb_FlutterKick();
              } else {
                if (TestStructure_B.PatternButton == 0.0) {
                  TestStructure_DW.PatternButtonPressed_temp = 0.0;
                }

                strncpy(&TestStructure_B.State[0], "", 5U);
                TestStructure_B.State[5] = '\x00';
                tmp = &TestStructure_B.State;
                tmp_0 = &d[0];
                for (i = 0; i < 4; i++) {
                  (*tmp)[i] = tmp_0[i];
                }

                (*tmp)[4] = '\x00';
                strncpy(&TestStructure_B.Mode[0], "", 255U);
                TestStructure_B.Mode[255] = '\x00';
                tmp_1 = &TestStructure_B.Mode;
                tmp_0 = &e[0];
                for (i = 0; i < 17; i++) {
                  (*tmp_1)[i] = tmp_0[i];
                }

                (*tmp_1)[17] = '\x00';
                strncpy(&TestStructure_B.ManualAuto[0], "", 255U);
                TestStructure_B.ManualAuto[255] = '\x00';
              }
              break;

             case TestStructure_IN_LowerLimb_Walk:
              TestStructure_LowerLimb_Walk();
              break;

             default:
              /* case IN_Stop: */
              TestStructure_DW.is_Stop = TestStructure_IN_LowerLimb_Follow;
              TestStructure_DW.was_Stop = TestStructure_IN_LowerLimb_Follow;
              TestStructure_enter_internal_LowerLimb_Follow();
              break;
            }
          }
        }
        break;
      }
    }

    /* End of Chart: '<S3>/ControlPannelStateMachine' */

    /* DiscreteIntegrator: '<S3>/LLB_Torque_Up' */
    TestStructure_B.LLB_Torque_Up = TestStructure_DW.LLB_Torque_Up_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLB_Torque_Down' */
    TestStructure_B.LLB_Torque_Down = TestStructure_DW.LLB_Torque_Down_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLB_Pos_Up' */
    TestStructure_B.LLB_Pos_Up = TestStructure_DW.LLB_Pos_Up_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLB_Pos_Down' */
    TestStructure_B.LLB_Pos_Down = TestStructure_DW.LLB_Pos_Down_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLW_Freq' */
    TestStructure_B.LLW_Freq = TestStructure_DW.LLW_Freq_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLW_Torque_Up' */
    TestStructure_B.LLW_Torque_Up = TestStructure_DW.LLW_Torque_Up_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLW_Torque_Down' */
    TestStructure_B.LLW_Torque_Down = TestStructure_DW.LLW_Torque_Down_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLW_Pos_Up' */
    TestStructure_B.LLW_Pos_Up = TestStructure_DW.LLW_Pos_Up_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLW_Pos_Down' */
    TestStructure_B.LLW_Pos_Down = TestStructure_DW.LLW_Pos_Down_DSTATE;

    /* Constant: '<S3>/Freq_Up' */
    TestStructure_B.Freq_Up = TestStructure_cal->Freq_Up_Value;

    /* Constant: '<S3>/Freq_Down' */
    TestStructure_B.Freq_Down = TestStructure_cal->Freq_Down_Value;

    /* Constant: '<S3>/Positive_Up' */
    TestStructure_B.Positive_Up = TestStructure_cal->Positive_Up_Value;

    /* Constant: '<S3>/Positive_Down' */
    TestStructure_B.Positive_Down = TestStructure_cal->Positive_Down_Value;

    /* Constant: '<S3>/Negtive_Up' */
    TestStructure_B.Negtive_Up = TestStructure_cal->Negtive_Up_Value;

    /* Constant: '<S3>/Negtive_Down' */
    TestStructure_B.Negtive_Down = TestStructure_cal->Negtive_Down_Value;

    /* Chart: '<S3>/KnobStateMachine' */
    TestStructure_DW.sfEvent_p4 = TestStructure_CALL_EVENT_f;
    if (TestStructure_DW.is_active_c7_TestStructure == 0U) {
      TestStructure_DW.is_active_c7_TestStructure = 1U;
      TestStructure_DW.is_c7_TestStructure = TestStructure_IN_Start;
      strncpy(&TestStructure_B.kState[0], "", 255U);
      TestStructure_B.kState[255] = '\x00';
      tmp_1 = &TestStructure_B.kState;
      tmp_0 = &c_0[0];
      for (i = 0; i < 5; i++) {
        (*tmp_1)[i] = tmp_0[i];
      }

      (*tmp_1)[5] = '\x00';
    } else if (TestStructure_DW.is_c7_TestStructure == TestStructure_IN_Adjust)
    {
      TestStructure_Adjust();
    } else {
      /* case IN_Start: */
      for (i = 0; i < 6; i++) {
        tmp_2[i] = TestStructure_B.State[i];
      }

      i = strcmp(&tmp_2[0], "Stop");
      if (i == 0) {
        TestStructure_DW.is_c7_TestStructure = TestStructure_IN_Adjust;
        TestStructure_DW.is_Adjust = TestStructure_IN_Adjust;
        strncpy(&TestStructure_B.kState[0], "", 255U);
        TestStructure_B.kState[255] = '\x00';
        tmp_1 = &TestStructure_B.kState;
        tmp_0 = &d_0[0];
        for (i = 0; i < 6; i++) {
          (*tmp_1)[i] = tmp_0[i];
        }

        (*tmp_1)[6] = '\x00';
      } else {
        strncpy(&TestStructure_B.kState[0], "", 255U);
        TestStructure_B.kState[255] = '\x00';
        tmp_1 = &TestStructure_B.kState;
        tmp_0 = &b_0[0];
        for (i = 0; i < 5; i++) {
          (*tmp_1)[i] = tmp_0[i];
        }

        (*tmp_1)[5] = '\x00';
      }
    }

    /* End of Chart: '<S3>/KnobStateMachine' */

    /* SwitchCase: '<S8>/Switch Case' incorporates:
     *  Constant: '<S30>/Constant'
     *  Constant: '<S30>/Constant1'
     */
    u = TestStructure_B.Display_State;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 1) {
      /* Outputs for IfAction SubSystem: '<S30>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_l, &TestStructure_B.Merge);

      /* End of Outputs for SubSystem: '<S30>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S30>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S32>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_e, &TestStructure_B.Merge);

      /* End of Outputs for SubSystem: '<S30>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S8>/Switch Case' */

    /* Outputs for Enabled SubSystem: '<S3>/LLF_Display' incorporates:
     *  EnablePort: '<S15>/Enable'
     */
    if (TestStructure_B.Merge > 0.0) {
      /* Merge: '<S3>/Merge1' incorporates:
       *  Constant: '<S15>/Constant'
       *  SignalConversion generated from: '<S15>/Freq_Out'
       */
      TestStructure_B.Merge1 = TestStructure_cal->Constant_Value;

      /* Merge: '<S3>/Merge2' incorporates:
       *  Constant: '<S15>/Constant1'
       *  SignalConversion generated from: '<S15>/Torque_Up_Out'
       */
      TestStructure_B.Merge2 = TestStructure_cal->Constant1_Value;

      /* Merge: '<S3>/Merge3' incorporates:
       *  Constant: '<S15>/Constant2'
       *  SignalConversion generated from: '<S15>/Torque_Down_Out'
       */
      TestStructure_B.Merge3 = TestStructure_cal->Constant2_Value;

      /* Merge: '<S3>/Merge4' incorporates:
       *  Constant: '<S15>/Constant3'
       *  SignalConversion generated from: '<S15>/Pos_Up_Out'
       */
      TestStructure_B.Merge4 = TestStructure_cal->Constant3_Value;

      /* Merge: '<S3>/Merge5' incorporates:
       *  Constant: '<S15>/Constant4'
       *  SignalConversion generated from: '<S15>/Pos_Down_Out'
       */
      TestStructure_B.Merge5 = TestStructure_cal->Constant4_Value;
      srUpdateBC(TestStructure_DW.LLF_Display_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S3>/LLF_Display' */

    /* DiscreteIntegrator: '<S3>/LLFK_Torque_Up' */
    TestStructure_B.LLFK_Torque_Up = TestStructure_DW.LLFK_Torque_Up_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLFK_Torque_Down' */
    TestStructure_B.LLFK_Torque_Down = TestStructure_DW.LLFK_Torque_Down_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLFK_Pos_Up' */
    TestStructure_B.LLFK_Pos_Up = TestStructure_DW.LLFK_Pos_Up_DSTATE;

    /* DiscreteIntegrator: '<S3>/LLFK_Pos_Down' */
    TestStructure_B.LLFK_Pos_Down = TestStructure_DW.LLFK_Pos_Down_DSTATE;

    /* SwitchCase: '<S9>/Switch Case' incorporates:
     *  Constant: '<S33>/Constant'
     *  Constant: '<S33>/Constant1'
     */
    u = TestStructure_B.Display_State;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 2) {
      /* Outputs for IfAction SubSystem: '<S33>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_k, &TestStructure_B.Merge_m);

      /* End of Outputs for SubSystem: '<S33>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S33>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_in, &TestStructure_B.Merge_m);

      /* End of Outputs for SubSystem: '<S33>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S9>/Switch Case' */

    /* Outputs for Enabled SubSystem: '<S3>/LLFK_Display' */
    TestStructure_LLB_Dispaly(TestStructure_B.Merge_m, TestStructure_B.LLFK_Freq,
      TestStructure_B.LLFK_Torque_Up, TestStructure_B.LLFK_Torque_Down,
      TestStructure_B.LLFK_Pos_Up, TestStructure_B.LLFK_Pos_Down,
      &TestStructure_B.Merge1, &TestStructure_B.Merge2, &TestStructure_B.Merge3,
      &TestStructure_B.Merge4, &TestStructure_B.Merge5,
      &TestStructure_DW.LLFK_Display);

    /* End of Outputs for SubSystem: '<S3>/LLFK_Display' */

    /* DiscreteIntegrator: '<S3>/LLB_Freq' */
    TestStructure_B.LLB_Freq = TestStructure_DW.LLB_Freq_DSTATE;

    /* SwitchCase: '<S10>/Switch Case' incorporates:
     *  Constant: '<S36>/Constant'
     *  Constant: '<S36>/Constant1'
     */
    u = TestStructure_B.Display_State;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 3) {
      /* Outputs for IfAction SubSystem: '<S36>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S37>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_ci, &TestStructure_B.Merge_n);

      /* End of Outputs for SubSystem: '<S36>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S36>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S38>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_c, &TestStructure_B.Merge_n);

      /* End of Outputs for SubSystem: '<S36>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S10>/Switch Case' */

    /* Outputs for Enabled SubSystem: '<S3>/LLB_Dispaly' */
    TestStructure_LLB_Dispaly(TestStructure_B.Merge_n, TestStructure_B.LLB_Freq,
      TestStructure_B.LLB_Torque_Up, TestStructure_B.LLB_Torque_Down,
      TestStructure_B.LLB_Pos_Up, TestStructure_B.LLB_Pos_Down,
      &TestStructure_B.Merge1, &TestStructure_B.Merge2, &TestStructure_B.Merge3,
      &TestStructure_B.Merge4, &TestStructure_B.Merge5,
      &TestStructure_DW.LLB_Dispaly);

    /* End of Outputs for SubSystem: '<S3>/LLB_Dispaly' */

    /* SwitchCase: '<S11>/Switch Case' incorporates:
     *  Constant: '<S39>/Constant'
     *  Constant: '<S39>/Constant1'
     */
    u = TestStructure_B.Display_State;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 4) {
      /* Outputs for IfAction SubSystem: '<S39>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S40>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_pk, &TestStructure_B.Merge_e);

      /* End of Outputs for SubSystem: '<S39>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S39>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S41>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_d, &TestStructure_B.Merge_e);

      /* End of Outputs for SubSystem: '<S39>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S11>/Switch Case' */

    /* Outputs for Enabled SubSystem: '<S3>/LLW_Dispaly' */
    TestStructure_LLB_Dispaly(TestStructure_B.Merge_e, TestStructure_B.LLW_Freq,
      TestStructure_B.LLW_Torque_Up, TestStructure_B.LLW_Torque_Down,
      TestStructure_B.LLW_Pos_Up, TestStructure_B.LLW_Pos_Down,
      &TestStructure_B.Merge1, &TestStructure_B.Merge2, &TestStructure_B.Merge3,
      &TestStructure_B.Merge4, &TestStructure_B.Merge5,
      &TestStructure_DW.LLW_Dispaly);

    /* End of Outputs for SubSystem: '<S3>/LLW_Dispaly' */

    /* Delay: '<S3>/Delay' */
    TestStructure_B.Delay = TestStructure_DW.Delay_DSTATE[0];

    /* Constant: '<S30>/Constant2' */
    TestStructure_B.Constant2 =
      TestStructure_cal->Display_State_1_Enable_TaskIndex;

    /* Constant: '<S33>/Constant2' */
    TestStructure_B.Constant2_d =
      TestStructure_cal->Display_State_2_Enable_TaskIndex;

    /* Constant: '<S36>/Constant2' */
    TestStructure_B.Constant2_p =
      TestStructure_cal->Display_State_3_Enable_TaskIndex;

    /* Constant: '<S39>/Constant2' */
    TestStructure_B.Constant2_pk =
      TestStructure_cal->Display_State_4_Enable_TaskIndex;

    /* Chart: '<S3>/LowerLimbTaskControlStateMachine' incorporates:
     *  Chart: '<S3>/UpperLimbTaskControlStateMachine'
     */
    TestStructure_DW.sfEvent_p = TestStructure_CALL_EVENT_f;
    if (TestStructure_DW.is_active_c8_TestStructure == 0U) {
      TestStructure_DW.is_active_c8_TestStructure = 1U;
      TestStructure_DW.is_c8_TestStructure = TestStructure_IN_PauseTask;
      TestStructure_B.ControlState_j = 9.0;
      TestStructure_B.ResetState = 0.0;
    } else {
      switch (TestStructure_DW.is_c8_TestStructure) {
       case TestStructure_IN_PauseTask:
        for (i = 0; i < 6; i++) {
          tmp_2[i] = TestStructure_B.State[i];
        }

        i = strcmp(&tmp_2[0], "Stop");
        if (i == 0) {
          TestStructure_B.ResetState = 1.0;
          TestStructure_DW.is_c8_TestStructure = TestStructure_IN_StopTask;
          TestStructure_B.ControlState_j = 1.0;
        } else {
          for (i = 0; i < 6; i++) {
            tmp_2[i] = TestStructure_B.State[i];
          }

          i = strcmp(&tmp_2[0], "Start");
          if (i == 0) {
            TestStructure_DW.is_c8_TestStructure = TestStructure_IN_StartTask;
            TestStructure_DW.is_StartTask_f = TestStructure_IN_Start_b;
          } else {
            TestStructure_B.ControlState_j = 9.0;
            TestStructure_B.ResetState = 0.0;
          }
        }
        break;

       case TestStructure_IN_StartTask:
        for (i = 0; i < 6; i++) {
          tmp_2[i] = TestStructure_B.State[i];
        }

        i = strcmp(&tmp_2[0], "Pause");
        if (i == 0) {
          TestStructure_DW.is_LLB = TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_LLFK = TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_LLW = TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_StartTask_f = TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_c8_TestStructure = TestStructure_IN_PauseTask;
          TestStructure_B.ControlState_j = 9.0;
          TestStructure_B.ResetState = 0.0;
        } else {
          switch (TestStructure_DW.is_StartTask_f) {
           case TestStructure_IN_LLB:
            tmp_3 = &TestStructure_B.Mode[0];
            i = strcmp(&tmp_3[0], "Lower_Limb_Breaststroke");
            if (i != 0) {
              TestStructure_DW.is_LLB = TestStructure_IN_NO_ACTIVE_CHILD_g;
              TestStructure_DW.is_StartTask_f = TestStructure_IN_Start_b;
            } else {
              switch (TestStructure_DW.is_LLB) {
               case TestStructure_IN_LLB:
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLB_Auto");
                if (i != 0) {
                  TestStructure_DW.is_LLB = TestStructure_IN_LLBManualTask;
                  TestStructure_B.ControlState_j = 5.0;
                } else {
                  tmp_3 = &TestStructure_B.ManualAuto[0];
                  i = strcmp(&tmp_3[0], "LLB_Auto");
                  if (i == 0) {
                    TestStructure_DW.is_LLB = TestStructure_IN_LLBAutoTask;
                    TestStructure_B.ControlState_j = 6.0;
                  }
                }
                break;

               case TestStructure_IN_LLBAutoTask:
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLB_Auto");
                if (i != 0) {
                  TestStructure_DW.is_LLB = TestStructure_IN_LLB;
                } else {
                  TestStructure_B.ControlState_j = 6.0;
                }
                break;

               default:
                /* case IN_LLBManualTask: */
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLB_Auto");
                if (i == 0) {
                  TestStructure_DW.is_LLB = TestStructure_IN_LLB;
                } else {
                  TestStructure_B.ControlState_j = 5.0;
                }
                break;
              }
            }
            break;

           case TestStructure_IN_LLFK:
            tmp_3 = &TestStructure_B.Mode[0];
            i = strcmp(&tmp_3[0], "Lower_Limb_FlutterKick");
            if (i != 0) {
              TestStructure_DW.is_LLFK = TestStructure_IN_NO_ACTIVE_CHILD_g;
              TestStructure_DW.is_StartTask_f = TestStructure_IN_Start_b;
            } else {
              switch (TestStructure_DW.is_LLFK) {
               case TestStructure_IN_LLFK_l:
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLFK_Auto");
                if (i != 0) {
                  TestStructure_DW.is_LLFK = TestStructure_IN_LLFKManualTask;
                  TestStructure_B.ControlState_j = 3.0;
                } else {
                  tmp_3 = &TestStructure_B.ManualAuto[0];
                  i = strcmp(&tmp_3[0], "LLFK_Auto");
                  if (i == 0) {
                    TestStructure_DW.is_LLFK = TestStructure_IN_LLFKAutoTask;
                    TestStructure_B.ControlState_j = 4.0;
                  }
                }
                break;

               case TestStructure_IN_LLFKAutoTask:
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLFK_Auto");
                if (i != 0) {
                  TestStructure_DW.is_LLFK = TestStructure_IN_LLFK_l;
                } else {
                  TestStructure_B.ControlState_j = 4.0;
                }
                break;

               default:
                /* case IN_LLFKManualTask: */
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLFK_Auto");
                if (i == 0) {
                  TestStructure_DW.is_LLFK = TestStructure_IN_LLFK_l;
                } else {
                  TestStructure_B.ControlState_j = 3.0;
                }
                break;
              }
            }
            break;

           case TestStructure_IN_LLFTask:
            tmp_3 = &TestStructure_B.Mode[0];
            i = strcmp(&tmp_3[0], "Lower_Limb_Follow");
            if (i != 0) {
              TestStructure_DW.is_StartTask_f = TestStructure_IN_Start_b;
            } else {
              TestStructure_B.ControlState_j = 2.0;
            }
            break;

           case TestStructure_IN_LLW:
            tmp_3 = &TestStructure_B.Mode[0];
            i = strcmp(&tmp_3[0], "Lower_Limb_Walk");
            if (i != 0) {
              TestStructure_DW.is_LLW = TestStructure_IN_NO_ACTIVE_CHILD_g;
              TestStructure_DW.is_StartTask_f = TestStructure_IN_Start_b;
            } else {
              switch (TestStructure_DW.is_LLW) {
               case TestStructure_IN_LLW_c:
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLW_Auto");
                if (i != 0) {
                  TestStructure_DW.is_LLW = TestStructure_IN_LLWManualTask;
                  TestStructure_B.ControlState_j = 7.0;
                } else {
                  tmp_3 = &TestStructure_B.ManualAuto[0];
                  i = strcmp(&tmp_3[0], "LLW_Auto");
                  if (i == 0) {
                    TestStructure_DW.is_LLW = TestStructure_IN_LLWAutoTask;
                    TestStructure_B.ControlState_j = 8.0;
                  }
                }
                break;

               case TestStructure_IN_LLWAutoTask:
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLW_Auto");
                if (i != 0) {
                  TestStructure_DW.is_LLW = TestStructure_IN_LLW_c;
                } else {
                  TestStructure_B.ControlState_j = 8.0;
                }
                break;

               default:
                /* case IN_LLWManualTask: */
                tmp_3 = &TestStructure_B.ManualAuto[0];
                i = strcmp(&tmp_3[0], "LLW_Auto");
                if (i == 0) {
                  TestStructure_DW.is_LLW = TestStructure_IN_LLW_c;
                } else {
                  TestStructure_B.ControlState_j = 7.0;
                }
                break;
              }
            }
            break;

           default:
            /* case IN_Start: */
            tmp_3 = &TestStructure_B.Mode[0];
            i = strcmp(&tmp_3[0], "Lower_Limb_Follow");
            if (i == 0) {
              TestStructure_DW.is_StartTask_f = TestStructure_IN_LLFTask;
              TestStructure_B.ControlState_j = 2.0;
            } else {
              tmp_3 = &TestStructure_B.Mode[0];
              i = strcmp(&tmp_3[0], "Lower_Limb_FlutterKick");
              if (i == 0) {
                TestStructure_DW.is_StartTask_f = TestStructure_IN_LLFK;
                TestStructure_DW.is_LLFK = TestStructure_IN_LLFK_l;
              } else {
                tmp_3 = &TestStructure_B.Mode[0];
                i = strcmp(&tmp_3[0], "Lower_Limb_Breaststroke");
                if (i == 0) {
                  TestStructure_DW.is_StartTask_f = TestStructure_IN_LLB;
                  TestStructure_DW.is_LLB = TestStructure_IN_LLB;
                } else {
                  tmp_3 = &TestStructure_B.Mode[0];
                  i = strcmp(&tmp_3[0], "Lower_Limb_Walk");
                  if (i == 0) {
                    TestStructure_DW.is_StartTask_f = TestStructure_IN_LLW;
                    TestStructure_DW.is_LLW = TestStructure_IN_LLW_c;
                  }
                }
              }
            }
            break;
          }
        }
        break;

       default:
        /* case IN_StopTask: */
        for (i = 0; i < 6; i++) {
          tmp_2[i] = TestStructure_B.State[i];
        }

        i = strcmp(&tmp_2[0], "Start");
        if (i == 0) {
          TestStructure_B.ResetState = 0.0;
          TestStructure_DW.is_c8_TestStructure = TestStructure_IN_StartTask;
          TestStructure_DW.is_StartTask_f = TestStructure_IN_Start_b;
        } else {
          TestStructure_B.ControlState_j = 1.0;
        }
        break;
      }
    }

    /* SwitchCase: '<S16>/Switch Case' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S42>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 1) {
      /* Outputs for IfAction SubSystem: '<S42>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S43>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_m, &TestStructure_B.Merge_k);

      /* End of Outputs for SubSystem: '<S42>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S42>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S44>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_p, &TestStructure_B.Merge_k);

      /* End of Outputs for SubSystem: '<S42>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S16>/Switch Case' */

    /* SwitchCase: '<S17>/Switch Case' incorporates:
     *  Constant: '<S45>/Constant'
     *  Constant: '<S45>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 2) {
      /* Outputs for IfAction SubSystem: '<S45>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S46>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_i, &TestStructure_B.Merge_h);

      /* End of Outputs for SubSystem: '<S45>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S45>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S47>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_l, &TestStructure_B.Merge_h);

      /* End of Outputs for SubSystem: '<S45>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S17>/Switch Case' */

    /* SwitchCase: '<S18>/Switch Case' incorporates:
     *  Constant: '<S48>/Constant'
     *  Constant: '<S48>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 3) {
      /* Outputs for IfAction SubSystem: '<S48>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S49>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_n, &TestStructure_B.Merge_a);

      /* End of Outputs for SubSystem: '<S48>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S48>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S50>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_cj, &TestStructure_B.Merge_a);

      /* End of Outputs for SubSystem: '<S48>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S18>/Switch Case' */

    /* SwitchCase: '<S19>/Switch Case' incorporates:
     *  Constant: '<S51>/Constant'
     *  Constant: '<S51>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 4) {
      /* Outputs for IfAction SubSystem: '<S51>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S52>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_h, &TestStructure_B.Merge_l);

      /* End of Outputs for SubSystem: '<S51>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S51>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S53>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_ea, &TestStructure_B.Merge_l);

      /* End of Outputs for SubSystem: '<S51>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S19>/Switch Case' */

    /* SwitchCase: '<S20>/Switch Case' incorporates:
     *  Constant: '<S54>/Constant'
     *  Constant: '<S54>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 5) {
      /* Outputs for IfAction SubSystem: '<S54>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S55>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_pa, &TestStructure_B.Merge_i);

      /* End of Outputs for SubSystem: '<S54>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S54>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S56>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_el, &TestStructure_B.Merge_i);

      /* End of Outputs for SubSystem: '<S54>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S20>/Switch Case' */

    /* SwitchCase: '<S21>/Switch Case' incorporates:
     *  Constant: '<S57>/Constant'
     *  Constant: '<S57>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 6) {
      /* Outputs for IfAction SubSystem: '<S57>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S58>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_ho, &TestStructure_B.Merge_j);

      /* End of Outputs for SubSystem: '<S57>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_ft, &TestStructure_B.Merge_j);

      /* End of Outputs for SubSystem: '<S57>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S21>/Switch Case' */

    /* SwitchCase: '<S22>/Switch Case' incorporates:
     *  Constant: '<S60>/Constant'
     *  Constant: '<S60>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 7) {
      /* Outputs for IfAction SubSystem: '<S60>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S61>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_cr, &TestStructure_B.Merge_jz);

      /* End of Outputs for SubSystem: '<S60>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S60>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S62>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_ly, &TestStructure_B.Merge_jz);

      /* End of Outputs for SubSystem: '<S60>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S22>/Switch Case' */

    /* SwitchCase: '<S23>/Switch Case' incorporates:
     *  Constant: '<S63>/Constant'
     *  Constant: '<S63>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 8) {
      /* Outputs for IfAction SubSystem: '<S63>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S64>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_db, &TestStructure_B.Merge_ev);

      /* End of Outputs for SubSystem: '<S63>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S63>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S65>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_eg, &TestStructure_B.Merge_ev);

      /* End of Outputs for SubSystem: '<S63>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S23>/Switch Case' */

    /* SwitchCase: '<S24>/Switch Case' incorporates:
     *  Constant: '<S66>/Constant'
     *  Constant: '<S66>/Constant1'
     */
    u = TestStructure_B.ControlState_j;
    if (u < 0.0) {
      u = std::ceil(u);
    } else {
      u = std::floor(u);
    }

    if (rtIsNaN(u) || rtIsInf(u)) {
      u = 0.0;
    } else {
      u = std::fmod(u, 4.294967296E+9);
    }

    if ((u < 0.0 ? -static_cast<int32_T>(static_cast<uint32_T>(-u)) :
         static_cast<int32_T>(static_cast<uint32_T>(u))) == 9) {
      /* Outputs for IfAction SubSystem: '<S66>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S67>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_k0, &TestStructure_B.Merge_o);

      /* End of Outputs for SubSystem: '<S66>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S66>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S68>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_a, &TestStructure_B.Merge_o);

      /* End of Outputs for SubSystem: '<S66>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S24>/Switch Case' */

    /* Memory: '<S3>/Memory' */
    TestStructure_B.Memory_l = TestStructure_DW.Memory_PreviousInput_i;

    /* Outputs for Enabled SubSystem: '<S6>/StopTask' incorporates:
     *  EnablePort: '<S85>/Enable'
     */
    if (TestStructure_B.Merge_k > 0.0) {
      if (!TestStructure_DW.StopTask_MODE) {
        /* InitializeConditions for DiscreteIntegrator: '<S85>/Discrete-Time Integrator' */
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE =
          TestStructure_cal->DiscreteTimeIntegrator_IC_f;
        TestStructure_DW.StopTask_MODE = true;
      }

      /* DiscreteIntegrator: '<S85>/Discrete-Time Integrator' */
      TestStructure_B.DiscreteTimeIntegrator =
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE;

      /* If: '<S85>/If6' incorporates:
       *  Constant: '<S42>/Constant2'
       *  Constant: '<S85>/Constant7'
       */
      if (TestStructure_B.DiscreteTimeIntegrator > 4.0) {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem12' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->LLTaskControl_State_1_Enable_TaskIndex,
           &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem12' */
      } else {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem13' incorporates:
         *  ActionPort: '<S135>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant7_Value_k, &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem13' */
      }

      /* End of If: '<S85>/If6' */

      /* Merge: '<S6>/Merge' incorporates:
       *  Constant: '<S85>/Constant'
       *  SignalConversion generated from: '<S85>/TaskIndex'
       */
      TestStructure_B.Merge_f = TestStructure_cal->Constant_Value_d;

      /* Abs: '<S85>/Abs' */
      TestStructure_B.Abs = std::abs
        (TestStructure_B.TmpTaskTransAtControlInport2);

      /* Abs: '<S85>/Abs1' */
      TestStructure_B.Abs1 = std::abs
        (TestStructure_B.TmpTaskTransAtControlInport3);

      /* If: '<S85>/If5' incorporates:
       *  Constant: '<S85>/Constant5'
       *  Constant: '<S85>/Constant6'
       */
      if (TestStructure_B.TmpTaskTransAtControlInport3 < -0.0) {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem10' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        TestStructure_IfActionSubsystem8(TestStructure_cal->Constant5_Value_l,
          &TestStructure_B.Merge5_c);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem10' */
      } else {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem11' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        TestStructure_IfActionSubsystem8(TestStructure_cal->Constant6_Value_f,
          &TestStructure_B.Merge5_c);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem11' */
      }

      /* End of If: '<S85>/If5' */

      /* If: '<S85>/If4' incorporates:
       *  Constant: '<S85>/Constant1'
       *  Constant: '<S85>/Constant4'
       */
      if (TestStructure_B.TmpTaskTransAtControlInport2 < -0.0) {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem8' incorporates:
         *  ActionPort: '<S140>/Action Port'
         */
        TestStructure_IfActionSubsystem8(TestStructure_cal->Constant1_Value_m,
          &TestStructure_B.Merge4_o);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem8' */
      } else {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem9' incorporates:
         *  ActionPort: '<S141>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant4_Value_i, &TestStructure_B.Merge4_o);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem9' */
      }

      /* End of If: '<S85>/If4' */

      /* If: '<S85>/If2' incorporates:
       *  Constant: '<S85>/Constant3'
       */
      if (TestStructure_B.Abs <= 1.0) {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S136>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant3_Value_e, &TestStructure_B.Motor1Torque);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem4' */
      } else {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S137>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem(TestStructure_B.Merge4_o,
          &TestStructure_B.Motor1Torque);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem5' */
      }

      /* End of If: '<S85>/If2' */

      /* If: '<S85>/If3' incorporates:
       *  Constant: '<S85>/Constant3'
       */
      if (TestStructure_B.Abs1 <= 1.0) {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S138>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant3_Value_e, &TestStructure_B.Motor2Torque);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem6' */
      } else {
        /* Outputs for IfAction SubSystem: '<S85>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S139>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem(TestStructure_B.Merge5_c,
          &TestStructure_B.Motor2Torque);

        /* End of Outputs for SubSystem: '<S85>/If Action Subsystem7' */
      }

      /* End of If: '<S85>/If3' */

      /* MATLAB Function: '<S85>/MATLAB Function1' incorporates:
       *  Constant: '<S85>/Constant1'
       */
      TestStructure_MATLABFunction1(TestStructure_cal->Constant1_Value_m,
        TestStructure_B.TmpTaskTransAtControlInport2,
        &TestStructure_B.sf_MATLABFunction1);

      /* MATLAB Function: '<S85>/MATLAB Function2' incorporates:
       *  Constant: '<S85>/Constant4'
       */
      TestStructure_MATLABFunction1(TestStructure_cal->Constant4_Value_i,
        TestStructure_B.TmpTaskTransAtControlInport2,
        &TestStructure_B.sf_MATLABFunction2);

      /* MATLAB Function: '<S85>/MATLAB Function3' incorporates:
       *  Constant: '<S85>/Constant5'
       */
      TestStructure_MATLABFunction1(TestStructure_cal->Constant5_Value_l,
        TestStructure_B.TmpTaskTransAtControlInport3,
        &TestStructure_B.sf_MATLABFunction3);

      /* MATLAB Function: '<S85>/MATLAB Function4' incorporates:
       *  Constant: '<S85>/Constant6'
       */
      TestStructure_MATLABFunction1(TestStructure_cal->Constant6_Value_f,
        TestStructure_B.TmpTaskTransAtControlInport3,
        &TestStructure_B.sf_MATLABFunction4);

      /* Constant: '<S85>/Constant2' */
      TestStructure_B.Constant2_m = TestStructure_cal->Constant2_Value_a;

      /* Update for DiscreteIntegrator: '<S85>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S85>/Constant8'
       */
      TestStructure_DW.DiscreteTimeIntegrator_DSTATE +=
        TestStructure_cal->DiscreteTimeIntegrator_gainval_a *
        TestStructure_cal->Constant8_Value_l;
      srUpdateBC(TestStructure_DW.StopTask_SubsysRanBC);
    } else {
      TestStructure_DW.StopTask_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S6>/StopTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLFTask' */
    /* Constant: '<S45>/Constant2' */
    TestStructure_LLBAutoTask(TestStructure_B.Merge_h,
      TestStructure_cal->LLTaskControl_State_2_Enable_TaskIndex,
      &TestStructure_B.Merge6, &TestStructure_B.Merge_f,
      &TestStructure_B.Motor1Torque, &TestStructure_B.Motor2Torque,
      &TestStructure_B.LLFTask, &TestStructure_DW.LLFTask,
      &TestStructure_cal->TestStructure_LLFTask_cal);

    /* End of Outputs for SubSystem: '<S6>/LLFTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLFKManualTask' incorporates:
     *  EnablePort: '<S80>/Enable'
     */
    if (TestStructure_B.Merge_a > 0.0) {
      if (!TestStructure_DW.LLFKManualTask_MODE) {
        /* InitializeConditions for DiscreteIntegrator: '<S80>/Discrete-Time Integrator' */
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE_g =
          TestStructure_cal->DiscreteTimeIntegrator_IC_b;
        TestStructure_DW.LLFKManualTask_MODE = true;
      }

      /* DiscreteIntegrator: '<S80>/Discrete-Time Integrator' */
      TestStructure_B.DiscreteTimeIntegrator_i =
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE_g;

      /* If: '<S80>/If6' incorporates:
       *  Constant: '<S48>/Constant2'
       *  Constant: '<S80>/Constant7'
       */
      if (TestStructure_B.DiscreteTimeIntegrator_i > 4.0) {
        /* Outputs for IfAction SubSystem: '<S80>/If Action Subsystem12' incorporates:
         *  ActionPort: '<S108>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->LLTaskControl_State_3_Enable_TaskIndex,
           &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S80>/If Action Subsystem12' */
      } else {
        /* Outputs for IfAction SubSystem: '<S80>/If Action Subsystem13' incorporates:
         *  ActionPort: '<S109>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant7_Value_h, &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S80>/If Action Subsystem13' */
      }

      /* End of If: '<S80>/If6' */

      /* Merge: '<S6>/Merge' incorporates:
       *  Constant: '<S80>/Constant'
       *  SignalConversion generated from: '<S80>/TaskIndex'
       */
      TestStructure_B.Merge_f = TestStructure_cal->Constant_Value_p;

      /* Merge: '<S6>/Merge3' incorporates:
       *  Constant: '<S80>/Constant1'
       *  SignalConversion generated from: '<S80>/Motor1Torque'
       */
      TestStructure_B.Motor1Torque = TestStructure_cal->Constant1_Value_f;

      /* Merge: '<S6>/Merge4' incorporates:
       *  Constant: '<S80>/Constant2'
       *  SignalConversion generated from: '<S80>/Motor2Torque'
       */
      TestStructure_B.Motor2Torque = TestStructure_cal->Constant2_Value_d;

      /* Update for DiscreteIntegrator: '<S80>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S80>/Constant8'
       */
      TestStructure_DW.DiscreteTimeIntegrator_DSTATE_g +=
        TestStructure_cal->DiscreteTimeIntegrator_gainval_j *
        TestStructure_cal->Constant8_Value_m;
      srUpdateBC(TestStructure_DW.LLFKManualTask_SubsysRanBC);
    } else {
      TestStructure_DW.LLFKManualTask_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S6>/LLFKManualTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLFKAutoTask' */
    /* Constant: '<S51>/Constant2' */
    TestStructure_LLBAutoTask(TestStructure_B.Merge_l,
      TestStructure_cal->LLTaskControl_State_4_Enable_TaskIndex,
      &TestStructure_B.Merge6, &TestStructure_B.Merge_f,
      &TestStructure_B.Motor1Torque, &TestStructure_B.Motor2Torque,
      &TestStructure_B.LLFKAutoTask, &TestStructure_DW.LLFKAutoTask,
      &TestStructure_cal->TestStructure_LLFKAutoTask_cal);

    /* End of Outputs for SubSystem: '<S6>/LLFKAutoTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLBManualTask' incorporates:
     *  EnablePort: '<S78>/Enable'
     */
    if (TestStructure_B.Merge_i > 0.0) {
      if (!TestStructure_DW.LLBManualTask_MODE) {
        /* InitializeConditions for DiscreteIntegrator: '<S78>/Discrete-Time Integrator' */
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE_o =
          TestStructure_cal->DiscreteTimeIntegrator_IC;

        /* InitializeConditions for Memory: '<S92>/Memory' */
        TestStructure_DW.Memory_PreviousInput_g =
          TestStructure_cal->Memory_InitialCondition_b;

        /* InitializeConditions for DiscreteIntegrator: '<S92>/Discrete-Time Integrator1' */
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
          TestStructure_cal->DiscreteTimeIntegrator1_IC;
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o = 2;

        /* SystemReset for Chart: '<S92>/Chart' */
        TestStructure_Chart_Reset(&TestStructure_B.sf_Chart,
          &TestStructure_DW.sf_Chart);
        TestStructure_DW.LLBManualTask_MODE = true;
      }

      /* DiscreteIntegrator: '<S78>/Discrete-Time Integrator' */
      TestStructure_B.DiscreteTimeIntegrator_ij =
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE_o;

      /* If: '<S78>/If6' incorporates:
       *  Constant: '<S54>/Constant2'
       *  Constant: '<S78>/Constant7'
       */
      if (TestStructure_B.DiscreteTimeIntegrator_ij > 4.0) {
        /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem12' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->LLTaskControl_State_5_Enable_TaskIndex,
           &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S78>/If Action Subsystem12' */
      } else {
        /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem13' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant7_Value, &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S78>/If Action Subsystem13' */
      }

      /* End of If: '<S78>/If6' */

      /* Merge: '<S6>/Merge' incorporates:
       *  Constant: '<S78>/Constant'
       *  SignalConversion generated from: '<S78>/TaskIndex'
       */
      TestStructure_B.Merge_f = TestStructure_cal->Constant_Value_e;

      /* Math: '<S92>/Math Function'
       *
       * About '<S92>/Math Function':
       *  Operator: reciprocal
       */
      u = TestStructure_B.Merge1;

      /* Math: '<S92>/Math Function'
       *
       * About '<S92>/Math Function':
       *  Operator: reciprocal
       */
      TestStructure_B.MathFunction_o = 1.0 / u;

      /* Constant: '<S92>/Constant3' */
      TestStructure_B.Constant3_h = tmp_4;

      /* Memory: '<S92>/Memory' */
      TestStructure_B.Memory_e = TestStructure_DW.Memory_PreviousInput_g;

      /* Chart: '<S92>/Chart' */
      TestStructure_Chart(TestStructure_B.Delay, TestStructure_B.MathFunction_o,
                          TestStructure_B.Constant3_h, TestStructure_B.Memory_e,
                          &TestStructure_B.sf_Chart, &TestStructure_DW.sf_Chart);

      /* DiscreteIntegrator: '<S92>/Discrete-Time Integrator1' */
      if ((TestStructure_B.sf_Chart.Reset > 0.0) &&
          (TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o <= 0)) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
          TestStructure_cal->DiscreteTimeIntegrator1_IC;
      }

      if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n >=
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat;
      } else if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n <=
                 TestStructure_cal->DiscreteTimeIntegrator1_LowerSat) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
          TestStructure_cal->DiscreteTimeIntegrator1_LowerSat;
      }

      /* DiscreteIntegrator: '<S92>/Discrete-Time Integrator1' */
      TestStructure_B.DiscreteTimeIntegrator1_a =
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n;

      /* Gain: '<S78>/Gain' */
      TestStructure_B.Gain_c = TestStructure_cal->Gain_Gain *
        TestStructure_B.Merge3;

      /* SignalConversion generated from: '<S78>/1-D Lookup Table1' incorporates:
       *  Constant: '<S78>/Constant10'
       *  Constant: '<S78>/Constant12'
       *  Constant: '<S78>/Constant14'
       */
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[0] =
        TestStructure_cal->Constant10_Value;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[1] =
        TestStructure_B.Gain_c;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[2] =
        TestStructure_B.Gain_c;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[3] =
        TestStructure_cal->Constant12_Value;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[4] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[5] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p[6] =
        TestStructure_cal->Constant14_Value;

      /* Lookup_n-D: '<S78>/1-D Lookup Table1' incorporates:
       *  DiscreteIntegrator: '<S92>/Discrete-Time Integrator1'
       */
      TestStructure_B.uDLookupTable1_o = look1_binlxpw
        (TestStructure_B.DiscreteTimeIntegrator1_a,
         TestStructure_cal->uDLookupTable1_bp01Data,
         TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2_p, 6U);

      /* SignalConversion generated from: '<S78>/1-D Lookup Table' incorporates:
       *  Constant: '<S78>/Constant3'
       *  Constant: '<S78>/Constant5'
       *  Constant: '<S78>/Constant9'
       */
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[0] =
        TestStructure_cal->Constant3_Value_n;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[1] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[2] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[3] =
        TestStructure_cal->Constant5_Value;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[4] =
        TestStructure_B.Gain_c;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[5] =
        TestStructure_B.Gain_c;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h[6] =
        TestStructure_cal->Constant9_Value;

      /* Lookup_n-D: '<S78>/1-D Lookup Table' incorporates:
       *  DiscreteIntegrator: '<S92>/Discrete-Time Integrator1'
       */
      TestStructure_B.uDLookupTable_o = look1_binlxpw
        (TestStructure_B.DiscreteTimeIntegrator1_a,
         TestStructure_cal->uDLookupTable_bp01Data,
         TestStructure_B.TmpSignalConversionAt1DLookupTableInport2_h, 6U);

      /* Gain: '<S78>/Gain1' */
      TestStructure_B.Gain1_n = TestStructure_cal->Gain1_Gain *
        TestStructure_B.Merge5;

      /* Gain: '<S78>/Gain2' */
      TestStructure_B.Gain2_l = TestStructure_cal->Gain2_Gain *
        TestStructure_B.Gain1_n;

      /* Gain: '<S78>/Gain3' */
      TestStructure_B.Gain3_d = TestStructure_cal->Gain3_Gain *
        TestStructure_B.Merge4;

      /* If: '<S78>/If1' */
      if (TestStructure_B.TmpTaskTransAtControlInport3 >= 0.0) {
        /* Outputs for IfAction SubSystem: '<S78>/Subsystem2' incorporates:
         *  ActionPort: '<S95>/Action Port'
         */
        TestStructure_Subsystem2(TestStructure_B.TmpTaskTransAtControlInport3,
          TestStructure_B.Gain2_l, TestStructure_B.uDLookupTable1_o,
          &TestStructure_B.Motor2Torque, &TestStructure_B.Subsystem2,
          &TestStructure_cal->TestStructure_Subsystem2_cal);

        /* End of Outputs for SubSystem: '<S78>/Subsystem2' */
      } else {
        /* Outputs for IfAction SubSystem: '<S78>/Subsystem3' incorporates:
         *  ActionPort: '<S96>/Action Port'
         */
        TestStructure_Subsystem3(TestStructure_B.TmpTaskTransAtControlInport3,
          TestStructure_B.Gain3_d, TestStructure_B.uDLookupTable1_o,
          &TestStructure_B.Motor2Torque, &TestStructure_B.Subsystem3,
          &TestStructure_DW.Subsystem3,
          &TestStructure_cal->TestStructure_Subsystem3_cal);

        /* End of Outputs for SubSystem: '<S78>/Subsystem3' */
      }

      /* End of If: '<S78>/If1' */

      /* If: '<S78>/If5' */
      if (TestStructure_B.TmpTaskTransAtControlInport2 >= 0.0) {
        /* Outputs for IfAction SubSystem: '<S78>/Subsystem' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        TestStructure_Subsystem2(TestStructure_B.TmpTaskTransAtControlInport2,
          TestStructure_B.Merge4, TestStructure_B.uDLookupTable_o,
          &TestStructure_B.Motor1Torque, &TestStructure_B.Subsystem,
          &TestStructure_cal->TestStructure_Subsystem_cal);

        /* End of Outputs for SubSystem: '<S78>/Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S78>/Subsystem1' incorporates:
         *  ActionPort: '<S94>/Action Port'
         */
        TestStructure_Subsystem3(TestStructure_B.TmpTaskTransAtControlInport2,
          TestStructure_B.Gain1_n, TestStructure_B.uDLookupTable_o,
          &TestStructure_B.Motor1Torque, &TestStructure_B.Subsystem1,
          &TestStructure_DW.Subsystem1,
          &TestStructure_cal->TestStructure_Subsystem1_cal);

        /* End of Outputs for SubSystem: '<S78>/Subsystem1' */
      }

      /* End of If: '<S78>/If5' */

      /* Constant: '<S78>/Constant1' */
      TestStructure_B.Constant1_c = TestStructure_cal->Constant1_Value_i;

      /* Constant: '<S78>/Constant11' */
      TestStructure_B.Constant11_g = TestStructure_cal->Constant11_Value;

      /* Constant: '<S78>/Constant13' */
      TestStructure_B.Constant13_l = TestStructure_cal->Constant13_Value;

      /* Constant: '<S78>/Constant2' */
      TestStructure_B.Constant2_j = TestStructure_cal->Constant2_Value_i;

      /* Constant: '<S78>/Constant4' */
      TestStructure_B.Constant4_h = TestStructure_cal->Constant4_Value_f;

      /* Constant: '<S78>/Constant6' */
      TestStructure_B.Constant6_b = TestStructure_cal->Constant6_Value;

      /* Update for DiscreteIntegrator: '<S78>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S78>/Constant8'
       */
      TestStructure_DW.DiscreteTimeIntegrator_DSTATE_o +=
        TestStructure_cal->DiscreteTimeIntegrator_gainval *
        TestStructure_cal->Constant8_Value;

      /* Update for Memory: '<S92>/Memory' */
      TestStructure_DW.Memory_PreviousInput_g =
        TestStructure_B.DiscreteTimeIntegrator1_a;

      /* Update for DiscreteIntegrator: '<S92>/Discrete-Time Integrator1' */
      TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n +=
        TestStructure_cal->DiscreteTimeIntegrator1_gainval *
        TestStructure_B.sf_Chart.Input;
      if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n >=
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat;
      } else if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n <=
                 TestStructure_cal->DiscreteTimeIntegrator1_LowerSat) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
          TestStructure_cal->DiscreteTimeIntegrator1_LowerSat;
      }

      if (TestStructure_B.sf_Chart.Reset > 0.0) {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o = 1;
      } else if (TestStructure_B.sf_Chart.Reset < 0.0) {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o = -1;
      } else if (TestStructure_B.sf_Chart.Reset == 0.0) {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o = 0;
      } else {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o = 2;
      }

      /* End of Update for DiscreteIntegrator: '<S92>/Discrete-Time Integrator1' */
      srUpdateBC(TestStructure_DW.LLBManualTask_SubsysRanBC);
    } else {
      TestStructure_DW.LLBManualTask_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S6>/LLBManualTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLBAutoTask' */
    /* Constant: '<S57>/Constant2' */
    TestStructure_LLBAutoTask(TestStructure_B.Merge_j,
      TestStructure_cal->LLTaskControl_State_6_Enable_TaskIndex,
      &TestStructure_B.Merge6, &TestStructure_B.Merge_f,
      &TestStructure_B.Motor1Torque, &TestStructure_B.Motor2Torque,
      &TestStructure_B.LLBAutoTask, &TestStructure_DW.LLBAutoTask,
      &TestStructure_cal->TestStructure_LLBAutoTask_cal);

    /* End of Outputs for SubSystem: '<S6>/LLBAutoTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLWManualTask' incorporates:
     *  EnablePort: '<S83>/Enable'
     */
    if (TestStructure_B.Merge_jz > 0.0) {
      /* DiscreteIntegrator: '<S83>/Discrete-Time Integrator' */
      TestStructure_B.DiscreteTimeIntegrator_p =
        TestStructure_DW.DiscreteTimeIntegrator_DSTATE_f;

      /* If: '<S83>/If6' incorporates:
       *  Constant: '<S60>/Constant2'
       *  Constant: '<S83>/Constant7'
       */
      if (TestStructure_B.DiscreteTimeIntegrator_p > 4.0) {
        /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem12' incorporates:
         *  ActionPort: '<S114>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->LLTaskControl_State_7_Enable_TaskIndex,
           &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S83>/If Action Subsystem12' */
      } else {
        /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem13' incorporates:
         *  ActionPort: '<S115>/Action Port'
         */
        TestStructure_SwitchCaseActionSubsystem
          (TestStructure_cal->Constant7_Value_a, &TestStructure_B.Merge6);

        /* End of Outputs for SubSystem: '<S83>/If Action Subsystem13' */
      }

      /* End of If: '<S83>/If6' */

      /* Merge: '<S6>/Merge' incorporates:
       *  Constant: '<S83>/Constant'
       *  SignalConversion generated from: '<S83>/TaskIndex'
       */
      TestStructure_B.Merge_f = TestStructure_cal->Constant_Value_c;

      /* Math: '<S116>/Math Function'
       *
       * About '<S116>/Math Function':
       *  Operator: reciprocal
       */
      u = TestStructure_B.Merge1;

      /* Math: '<S116>/Math Function'
       *
       * About '<S116>/Math Function':
       *  Operator: reciprocal
       */
      TestStructure_B.MathFunction = 1.0 / u;

      /* Constant: '<S116>/Constant3' */
      TestStructure_B.Constant3 = tmp_4;

      /* Memory: '<S116>/Memory' */
      TestStructure_B.Memory_j = TestStructure_DW.Memory_PreviousInput_h;

      /* Chart: '<S116>/Chart' */
      TestStructure_Chart(TestStructure_B.Delay, TestStructure_B.MathFunction,
                          TestStructure_B.Constant3, TestStructure_B.Memory_j,
                          &TestStructure_B.sf_Chart_d,
                          &TestStructure_DW.sf_Chart_d);

      /* DiscreteIntegrator: '<S116>/Discrete-Time Integrator1' */
      if ((TestStructure_B.sf_Chart_d.Reset > 0.0) &&
          (TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState <= 0)) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE =
          TestStructure_cal->DiscreteTimeIntegrator1_IC_i;
      }

      if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE >=
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat_l) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE =
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat_l;
      } else if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE <=
                 TestStructure_cal->DiscreteTimeIntegrator1_LowerSat_o) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE =
          TestStructure_cal->DiscreteTimeIntegrator1_LowerSat_o;
      }

      /* DiscreteIntegrator: '<S116>/Discrete-Time Integrator1' */
      TestStructure_B.DiscreteTimeIntegrator1 =
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE;

      /* Gain: '<S83>/Gain' */
      TestStructure_B.Gain = TestStructure_cal->Gain_Gain_m *
        TestStructure_B.Merge3;

      /* SignalConversion generated from: '<S83>/1-D Lookup Table1' incorporates:
       *  Constant: '<S83>/Constant10'
       *  Constant: '<S83>/Constant12'
       *  Constant: '<S83>/Constant14'
       */
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[0] =
        TestStructure_cal->Constant10_Value_a;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[1] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[2] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[3] =
        TestStructure_cal->Constant12_Value_g;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[4] =
        TestStructure_B.Gain;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[5] =
        TestStructure_B.Gain;
      TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2[6] =
        TestStructure_cal->Constant14_Value_o;

      /* Lookup_n-D: '<S83>/1-D Lookup Table1' incorporates:
       *  DiscreteIntegrator: '<S116>/Discrete-Time Integrator1'
       */
      TestStructure_B.uDLookupTable1 = look1_binlxpw
        (TestStructure_B.DiscreteTimeIntegrator1,
         TestStructure_cal->uDLookupTable1_bp01Data_f,
         TestStructure_B.TmpSignalConversionAt1DLookupTable1Inport2, 6U);

      /* SignalConversion generated from: '<S83>/1-D Lookup Table' incorporates:
       *  Constant: '<S83>/Constant3'
       *  Constant: '<S83>/Constant5'
       *  Constant: '<S83>/Constant9'
       */
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[0] =
        TestStructure_cal->Constant3_Value_nz;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[1] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[2] =
        TestStructure_B.Merge2;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[3] =
        TestStructure_cal->Constant5_Value_d;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[4] =
        TestStructure_B.Gain;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[5] =
        TestStructure_B.Gain;
      TestStructure_B.TmpSignalConversionAt1DLookupTableInport2[6] =
        TestStructure_cal->Constant9_Value_d;

      /* Lookup_n-D: '<S83>/1-D Lookup Table' incorporates:
       *  DiscreteIntegrator: '<S116>/Discrete-Time Integrator1'
       */
      TestStructure_B.uDLookupTable = look1_binlxpw
        (TestStructure_B.DiscreteTimeIntegrator1,
         TestStructure_cal->uDLookupTable_bp01Data_a,
         TestStructure_B.TmpSignalConversionAt1DLookupTableInport2, 6U);

      /* Gain: '<S83>/Gain1' */
      TestStructure_B.Gain1 = TestStructure_cal->Gain1_Gain_d *
        TestStructure_B.Merge5;

      /* Gain: '<S83>/Gain2' */
      TestStructure_B.Gain2 = TestStructure_cal->Gain2_Gain_d *
        TestStructure_B.Gain1;

      /* Gain: '<S83>/Gain3' */
      TestStructure_B.Gain3 = TestStructure_cal->Gain3_Gain_g *
        TestStructure_B.Merge4;

      /* If: '<S83>/If1' */
      if (TestStructure_B.TmpTaskTransAtControlInport3 >= 0.0) {
        /* Outputs for IfAction SubSystem: '<S83>/Subsystem2' incorporates:
         *  ActionPort: '<S119>/Action Port'
         */
        TestStructure_Subsystem2(TestStructure_B.TmpTaskTransAtControlInport3,
          TestStructure_B.Gain2, TestStructure_B.uDLookupTable1,
          &TestStructure_B.Motor2Torque, &TestStructure_B.Subsystem2_l,
          &TestStructure_cal->TestStructure_Subsystem2_l_cal);

        /* End of Outputs for SubSystem: '<S83>/Subsystem2' */
      } else {
        /* Outputs for IfAction SubSystem: '<S83>/Subsystem3' incorporates:
         *  ActionPort: '<S120>/Action Port'
         */
        TestStructure_Subsystem3(TestStructure_B.TmpTaskTransAtControlInport3,
          TestStructure_B.Gain3, TestStructure_B.uDLookupTable1,
          &TestStructure_B.Motor2Torque, &TestStructure_B.Subsystem3_l,
          &TestStructure_DW.Subsystem3_l,
          &TestStructure_cal->TestStructure_Subsystem3_l_cal);

        /* End of Outputs for SubSystem: '<S83>/Subsystem3' */
      }

      /* End of If: '<S83>/If1' */

      /* If: '<S83>/If5' */
      if (TestStructure_B.TmpTaskTransAtControlInport2 >= 0.0) {
        /* Outputs for IfAction SubSystem: '<S83>/Subsystem' incorporates:
         *  ActionPort: '<S117>/Action Port'
         */
        TestStructure_Subsystem2(TestStructure_B.TmpTaskTransAtControlInport2,
          TestStructure_B.Merge4, TestStructure_B.uDLookupTable,
          &TestStructure_B.Motor1Torque, &TestStructure_B.Subsystem_j,
          &TestStructure_cal->TestStructure_Subsystem_j_cal);

        /* End of Outputs for SubSystem: '<S83>/Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S83>/Subsystem1' incorporates:
         *  ActionPort: '<S118>/Action Port'
         */
        TestStructure_Subsystem3(TestStructure_B.TmpTaskTransAtControlInport2,
          TestStructure_B.Gain1, TestStructure_B.uDLookupTable,
          &TestStructure_B.Motor1Torque, &TestStructure_B.Subsystem1_e,
          &TestStructure_DW.Subsystem1_e,
          &TestStructure_cal->TestStructure_Subsystem1_e_cal);

        /* End of Outputs for SubSystem: '<S83>/Subsystem1' */
      }

      /* End of If: '<S83>/If5' */

      /* Constant: '<S83>/Constant1' */
      TestStructure_B.Constant1 = TestStructure_cal->Constant1_Value_fn;

      /* Constant: '<S83>/Constant11' */
      TestStructure_B.Constant11 = TestStructure_cal->Constant11_Value_c;

      /* Constant: '<S83>/Constant13' */
      TestStructure_B.Constant13 = TestStructure_cal->Constant13_Value_i;

      /* Constant: '<S83>/Constant2' */
      TestStructure_B.Constant2_a = TestStructure_cal->Constant2_Value_m;

      /* Constant: '<S83>/Constant4' */
      TestStructure_B.Constant4 = TestStructure_cal->Constant4_Value_p;

      /* Constant: '<S83>/Constant6' */
      TestStructure_B.Constant6 = TestStructure_cal->Constant6_Value_o;

      /* Update for DiscreteIntegrator: '<S83>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S83>/Constant8'
       */
      TestStructure_DW.DiscreteTimeIntegrator_DSTATE_f +=
        TestStructure_cal->DiscreteTimeIntegrator_gainval_i *
        TestStructure_cal->Constant8_Value_o;

      /* Update for Memory: '<S116>/Memory' */
      TestStructure_DW.Memory_PreviousInput_h =
        TestStructure_B.DiscreteTimeIntegrator1;

      /* Update for DiscreteIntegrator: '<S116>/Discrete-Time Integrator1' */
      TestStructure_DW.DiscreteTimeIntegrator1_DSTATE +=
        TestStructure_cal->DiscreteTimeIntegrator1_gainval_n *
        TestStructure_B.sf_Chart_d.Input;
      if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE >=
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat_l) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE =
          TestStructure_cal->DiscreteTimeIntegrator1_UpperSat_l;
      } else if (TestStructure_DW.DiscreteTimeIntegrator1_DSTATE <=
                 TestStructure_cal->DiscreteTimeIntegrator1_LowerSat_o) {
        TestStructure_DW.DiscreteTimeIntegrator1_DSTATE =
          TestStructure_cal->DiscreteTimeIntegrator1_LowerSat_o;
      }

      if (TestStructure_B.sf_Chart_d.Reset > 0.0) {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState = 1;
      } else if (TestStructure_B.sf_Chart_d.Reset < 0.0) {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState = -1;
      } else if (TestStructure_B.sf_Chart_d.Reset == 0.0) {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState = 0;
      } else {
        TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState = 2;
      }

      /* End of Update for DiscreteIntegrator: '<S116>/Discrete-Time Integrator1' */
      srUpdateBC(TestStructure_DW.LLWManualTask_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S6>/LLWManualTask' */

    /* Outputs for Enabled SubSystem: '<S6>/LLWAutoTask' */
    /* Constant: '<S63>/Constant2' */
    TestStructure_LLBAutoTask(TestStructure_B.Merge_ev,
      TestStructure_cal->LLTaskControl_State_8_Enable_TaskIndex,
      &TestStructure_B.Merge6, &TestStructure_B.Merge_f,
      &TestStructure_B.Motor1Torque, &TestStructure_B.Motor2Torque,
      &TestStructure_B.LLWAutoTask, &TestStructure_DW.LLWAutoTask,
      &TestStructure_cal->TestStructure_LLWAutoTask_cal);

    /* End of Outputs for SubSystem: '<S6>/LLWAutoTask' */

    /* Outputs for Enabled SubSystem: '<S6>/PauseTask' */
    /* Constant: '<S66>/Constant2' */
    TestStructure_LLBAutoTask(TestStructure_B.Merge_o,
      TestStructure_cal->LLTaskControl_State_9_Enable_TaskIndex,
      &TestStructure_B.Merge6, &TestStructure_B.Merge_f,
      &TestStructure_B.Motor1Torque, &TestStructure_B.Motor2Torque,
      &TestStructure_B.PauseTask, &TestStructure_DW.PauseTask,
      &TestStructure_cal->TestStructure_PauseTask_cal);

    /* End of Outputs for SubSystem: '<S6>/PauseTask' */

    /* Chart: '<S3>/UpperLimbTaskControlStateMachine' incorporates:
     *  Chart: '<S3>/LowerLimbTaskControlStateMachine'
     */
    TestStructure_DW.sfEvent = TestStructure_CALL_EVENT_f;
    if (TestStructure_DW.is_active_c9_TestStructure == 0U) {
      TestStructure_DW.is_active_c9_TestStructure = 1U;
      TestStructure_DW.is_c9_TestStructure = TestStructure_IN_PauseTask;
      TestStructure_B.ControlState = 1.0;
    } else {
      switch (TestStructure_DW.is_c9_TestStructure) {
       case TestStructure_IN_PauseTask:
        for (i = 0; i < 6; i++) {
          tmp_2[i] = TestStructure_B.State[i];
        }

        i = strcmp(&tmp_2[0], "Stop");
        if (i == 0) {
          TestStructure_DW.is_c9_TestStructure = TestStructure_IN_StopTask;
          TestStructure_B.ControlState = 1.0;
        } else {
          for (i = 0; i < 6; i++) {
            tmp_2[i] = TestStructure_B.State[i];
          }

          i = strcmp(&tmp_2[0], "Start");
          if (i == 0) {
            TestStructure_DW.is_c9_TestStructure = TestStructure_IN_StartTask;
            TestStructure_DW.is_StartTask = TestStructure_IN_UnlockTask;
            TestStructure_B.ControlState = 1.0;
          } else {
            TestStructure_B.ControlState = 1.0;
          }
        }
        break;

       case TestStructure_IN_StartTask:
        for (i = 0; i < 6; i++) {
          tmp_2[i] = TestStructure_B.State[i];
        }

        i = strcmp(&tmp_2[0], "Pause");
        if (i == 0) {
          TestStructure_DW.is_StartTask = TestStructure_IN_NO_ACTIVE_CHILD_g;
          TestStructure_DW.is_c9_TestStructure = TestStructure_IN_PauseTask;
          TestStructure_B.ControlState = 1.0;
        } else if (TestStructure_DW.is_StartTask == TestStructure_IN_LockTask) {
          tmp_3 = &TestStructure_B.UnlockLock[0];
          i = strcmp(&tmp_3[0], "UpperLimb_Unlock");
          if (i == 0) {
            TestStructure_DW.is_StartTask = TestStructure_IN_UnlockTask;
            TestStructure_B.ControlState = 1.0;
          } else {
            TestStructure_B.ControlState = 2.0;
          }
        } else {
          /* case IN_UnlockTask: */
          tmp_3 = &TestStructure_B.UnlockLock[0];
          i = strcmp(&tmp_3[0], "UpperLimb_Lock");
          if (i == 0) {
            TestStructure_DW.is_StartTask = TestStructure_IN_LockTask;
            TestStructure_B.ControlState = 2.0;
          } else {
            TestStructure_B.ControlState = 1.0;
          }
        }
        break;

       default:
        /* case IN_StopTask: */
        for (i = 0; i < 6; i++) {
          tmp_2[i] = TestStructure_B.State[i];
        }

        i = strcmp(&tmp_2[0], "Start");
        if (i == 0) {
          TestStructure_DW.is_c9_TestStructure = TestStructure_IN_StartTask;
          TestStructure_DW.is_StartTask = TestStructure_IN_UnlockTask;
          TestStructure_B.ControlState = 1.0;
        } else {
          TestStructure_B.ControlState = 1.0;
        }
        break;
      }
    }

    /* SwitchCase: '<S27>/Switch Case' incorporates:
     *  Constant: '<S69>/Constant'
     *  Constant: '<S69>/Constant1'
     */
    i = static_cast<int32_T>(TestStructure_B.ControlState);
    if (i == 1) {
      /* Outputs for IfAction SubSystem: '<S69>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S70>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_nb, &TestStructure_B.Merge_e0);

      /* End of Outputs for SubSystem: '<S69>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S69>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S71>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_lx, &TestStructure_B.Merge_e0);

      /* End of Outputs for SubSystem: '<S69>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S27>/Switch Case' */

    /* Outputs for Enabled SubSystem: '<S6>/ULUnLockTask' */
    /* Constant: '<S69>/Constant2' */
    TestStructure_ULLockTask(TestStructure_B.Merge_e0,
      TestStructure_cal->ULTaskControl_State_1_Enable_TaskIndex,
      &TestStructure_B.Merge7, &TestStructure_B.Merge1_j,
      &TestStructure_B.ULUnLockTask, &TestStructure_DW.ULUnLockTask,
      &TestStructure_cal->TestStructure_ULUnLockTask_cal);

    /* End of Outputs for SubSystem: '<S6>/ULUnLockTask' */

    /* SwitchCase: '<S28>/Switch Case' incorporates:
     *  Constant: '<S72>/Constant'
     *  Constant: '<S72>/Constant1'
     */
    i = static_cast<int32_T>(TestStructure_B.ControlState);
    if (i == 2) {
      /* Outputs for IfAction SubSystem: '<S72>/Switch Case Action Subsystem' incorporates:
       *  ActionPort: '<S73>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_ef, &TestStructure_B.Merge_d);

      /* End of Outputs for SubSystem: '<S72>/Switch Case Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S72>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S74>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem1
        (TestStructure_cal->Constant1_Value_d3, &TestStructure_B.Merge_d);

      /* End of Outputs for SubSystem: '<S72>/Switch Case Action Subsystem1' */
    }

    /* End of SwitchCase: '<S28>/Switch Case' */

    /* Outputs for Enabled SubSystem: '<S6>/ULLockTask' */
    /* Constant: '<S72>/Constant2' */
    TestStructure_ULLockTask(TestStructure_B.Merge_d,
      TestStructure_cal->ULTaskControl_State_2_Enable_TaskIndex,
      &TestStructure_B.Merge7, &TestStructure_B.Merge1_j,
      &TestStructure_B.ULLockTask, &TestStructure_DW.ULLockTask,
      &TestStructure_cal->TestStructure_ULLockTask_cal);

    /* End of Outputs for SubSystem: '<S6>/ULLockTask' */

    /* BusCreator: '<S6>/Bus Creator' */
    TestStructure_B.BusCreator_i.Motor1Torque = TestStructure_B.Motor1Torque;
    TestStructure_B.BusCreator_i.Motor2Torque = TestStructure_B.Motor2Torque;

    /* SignalConversion generated from: '<S6>/Bus Selector1' */
    TestStructure_B.KeyState =
      TestStructure_B.TmpTaskTransAtControlInport1.KeyState;

    /* If: '<S4>/If' incorporates:
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant1'
     */
    if (TestStructure_B.TmpTaskTransAtControlInport4 == 5.0) {
      /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
       *  ActionPort: '<S75>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant1_Value_g, &TestStructure_B.Merge1_l);

      /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S76>/Action Port'
       */
      TestStructure_SwitchCaseActionSubsystem
        (TestStructure_cal->Constant_Value_cl, &TestStructure_B.Merge1_l);

      /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
    }

    /* End of If: '<S4>/If' */

    /* Stop: '<S5>/Stop Simulation' incorporates:
     *  Constant: '<S5>/Constant'
     */
    if (TestStructure_cal->Constant_Value_d2 != 0.0) {
      rtmSetStopRequested(TestStructure_M, 1);
    }

    /* End of Stop: '<S5>/Stop Simulation' */

    /* Update for DiscreteIntegrator: '<S3>/LLFK_Freq' */
    TestStructure_DW.LLFK_Freq_DSTATE += TestStructure_cal->LLFK_Freq_gainval *
      TestStructure_B.LLFK_Freq_n;
    if (TestStructure_DW.LLFK_Freq_DSTATE >=
        TestStructure_cal->LLFK_Freq_UpperSat) {
      TestStructure_DW.LLFK_Freq_DSTATE = TestStructure_cal->LLFK_Freq_UpperSat;
    } else if (TestStructure_DW.LLFK_Freq_DSTATE <=
               TestStructure_cal->LLFK_Freq_LowerSat) {
      TestStructure_DW.LLFK_Freq_DSTATE = TestStructure_cal->LLFK_Freq_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLFK_Freq' */

    /* Update for Memory: '<S3>/Memory1' */
    TestStructure_DW.Memory1_PreviousInput_e = TestStructure_B.Merge6;

    /* Update for DiscreteIntegrator: '<S3>/LLB_Torque_Up' */
    TestStructure_DW.LLB_Torque_Up_DSTATE +=
      TestStructure_cal->LLB_Torque_Up_gainval * TestStructure_B.LLB_Torque_Up_m;
    if (TestStructure_DW.LLB_Torque_Up_DSTATE >=
        TestStructure_cal->LLB_Torque_Up_UpperSat) {
      TestStructure_DW.LLB_Torque_Up_DSTATE =
        TestStructure_cal->LLB_Torque_Up_UpperSat;
    } else if (TestStructure_DW.LLB_Torque_Up_DSTATE <=
               TestStructure_cal->LLB_Torque_Up_LowerSat) {
      TestStructure_DW.LLB_Torque_Up_DSTATE =
        TestStructure_cal->LLB_Torque_Up_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLB_Torque_Up' */

    /* Update for DiscreteIntegrator: '<S3>/LLB_Torque_Down' */
    TestStructure_DW.LLB_Torque_Down_DSTATE +=
      TestStructure_cal->LLB_Torque_Down_gainval *
      TestStructure_B.LLB_Torque_Down_m;
    if (TestStructure_DW.LLB_Torque_Down_DSTATE >=
        TestStructure_cal->LLB_Torque_Down_UpperSat) {
      TestStructure_DW.LLB_Torque_Down_DSTATE =
        TestStructure_cal->LLB_Torque_Down_UpperSat;
    } else if (TestStructure_DW.LLB_Torque_Down_DSTATE <=
               TestStructure_cal->LLB_Torque_Down_LowerSat) {
      TestStructure_DW.LLB_Torque_Down_DSTATE =
        TestStructure_cal->LLB_Torque_Down_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLB_Torque_Down' */

    /* Update for DiscreteIntegrator: '<S3>/LLB_Pos_Up' */
    TestStructure_DW.LLB_Pos_Up_DSTATE += TestStructure_cal->LLB_Pos_Up_gainval *
      TestStructure_B.LLB_Pos_Up_d;
    if (TestStructure_DW.LLB_Pos_Up_DSTATE >=
        TestStructure_cal->LLB_Pos_Up_UpperSat) {
      TestStructure_DW.LLB_Pos_Up_DSTATE =
        TestStructure_cal->LLB_Pos_Up_UpperSat;
    } else if (TestStructure_DW.LLB_Pos_Up_DSTATE <=
               TestStructure_cal->LLB_Pos_Up_LowerSat) {
      TestStructure_DW.LLB_Pos_Up_DSTATE =
        TestStructure_cal->LLB_Pos_Up_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLB_Pos_Up' */

    /* Update for DiscreteIntegrator: '<S3>/LLB_Pos_Down' */
    TestStructure_DW.LLB_Pos_Down_DSTATE +=
      TestStructure_cal->LLB_Pos_Down_gainval * TestStructure_B.LLB_Pos_Down_k;
    if (TestStructure_DW.LLB_Pos_Down_DSTATE >=
        TestStructure_cal->LLB_Pos_Down_UpperSat) {
      TestStructure_DW.LLB_Pos_Down_DSTATE =
        TestStructure_cal->LLB_Pos_Down_UpperSat;
    } else if (TestStructure_DW.LLB_Pos_Down_DSTATE <=
               TestStructure_cal->LLB_Pos_Down_LowerSat) {
      TestStructure_DW.LLB_Pos_Down_DSTATE =
        TestStructure_cal->LLB_Pos_Down_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLB_Pos_Down' */

    /* Update for DiscreteIntegrator: '<S3>/LLW_Freq' */
    TestStructure_DW.LLW_Freq_DSTATE += TestStructure_cal->LLW_Freq_gainval *
      TestStructure_B.LLW_Freq_k;
    if (TestStructure_DW.LLW_Freq_DSTATE >= TestStructure_cal->LLW_Freq_UpperSat)
    {
      TestStructure_DW.LLW_Freq_DSTATE = TestStructure_cal->LLW_Freq_UpperSat;
    } else if (TestStructure_DW.LLW_Freq_DSTATE <=
               TestStructure_cal->LLW_Freq_LowerSat) {
      TestStructure_DW.LLW_Freq_DSTATE = TestStructure_cal->LLW_Freq_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLW_Freq' */

    /* Update for DiscreteIntegrator: '<S3>/LLW_Torque_Up' */
    TestStructure_DW.LLW_Torque_Up_DSTATE +=
      TestStructure_cal->LLW_Torque_Up_gainval * TestStructure_B.LLW_Torque_Up_f;
    if (TestStructure_DW.LLW_Torque_Up_DSTATE >=
        TestStructure_cal->LLW_Torque_Up_UpperSat) {
      TestStructure_DW.LLW_Torque_Up_DSTATE =
        TestStructure_cal->LLW_Torque_Up_UpperSat;
    } else if (TestStructure_DW.LLW_Torque_Up_DSTATE <=
               TestStructure_cal->LLW_Torque_Up_LowerSat) {
      TestStructure_DW.LLW_Torque_Up_DSTATE =
        TestStructure_cal->LLW_Torque_Up_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLW_Torque_Up' */

    /* Update for DiscreteIntegrator: '<S3>/LLW_Torque_Down' */
    TestStructure_DW.LLW_Torque_Down_DSTATE +=
      TestStructure_cal->LLW_Torque_Down_gainval *
      TestStructure_B.LLW_Torque_Down_k;
    if (TestStructure_DW.LLW_Torque_Down_DSTATE >=
        TestStructure_cal->LLW_Torque_Down_UpperSat) {
      TestStructure_DW.LLW_Torque_Down_DSTATE =
        TestStructure_cal->LLW_Torque_Down_UpperSat;
    } else if (TestStructure_DW.LLW_Torque_Down_DSTATE <=
               TestStructure_cal->LLW_Torque_Down_LowerSat) {
      TestStructure_DW.LLW_Torque_Down_DSTATE =
        TestStructure_cal->LLW_Torque_Down_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLW_Torque_Down' */

    /* Update for DiscreteIntegrator: '<S3>/LLW_Pos_Up' */
    TestStructure_DW.LLW_Pos_Up_DSTATE += TestStructure_cal->LLW_Pos_Up_gainval *
      TestStructure_B.LLW_Pos_Up_c;
    if (TestStructure_DW.LLW_Pos_Up_DSTATE >=
        TestStructure_cal->LLW_Pos_Up_UpperSat) {
      TestStructure_DW.LLW_Pos_Up_DSTATE =
        TestStructure_cal->LLW_Pos_Up_UpperSat;
    } else if (TestStructure_DW.LLW_Pos_Up_DSTATE <=
               TestStructure_cal->LLW_Pos_Up_LowerSat) {
      TestStructure_DW.LLW_Pos_Up_DSTATE =
        TestStructure_cal->LLW_Pos_Up_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLW_Pos_Up' */

    /* Update for DiscreteIntegrator: '<S3>/LLW_Pos_Down' */
    TestStructure_DW.LLW_Pos_Down_DSTATE +=
      TestStructure_cal->LLW_Pos_Down_gainval * TestStructure_B.LLW_Pos_Down_n;
    if (TestStructure_DW.LLW_Pos_Down_DSTATE >=
        TestStructure_cal->LLW_Pos_Down_UpperSat) {
      TestStructure_DW.LLW_Pos_Down_DSTATE =
        TestStructure_cal->LLW_Pos_Down_UpperSat;
    } else if (TestStructure_DW.LLW_Pos_Down_DSTATE <=
               TestStructure_cal->LLW_Pos_Down_LowerSat) {
      TestStructure_DW.LLW_Pos_Down_DSTATE =
        TestStructure_cal->LLW_Pos_Down_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLW_Pos_Down' */

    /* Update for DiscreteIntegrator: '<S3>/LLFK_Torque_Up' */
    TestStructure_DW.LLFK_Torque_Up_DSTATE +=
      TestStructure_cal->LLFK_Torque_Up_gainval *
      TestStructure_B.LLFK_Torque_Up_g;
    if (TestStructure_DW.LLFK_Torque_Up_DSTATE >=
        TestStructure_cal->LLFK_Torque_Up_UpperSat) {
      TestStructure_DW.LLFK_Torque_Up_DSTATE =
        TestStructure_cal->LLFK_Torque_Up_UpperSat;
    } else if (TestStructure_DW.LLFK_Torque_Up_DSTATE <=
               TestStructure_cal->LLFK_Torque_Up_LowerSat) {
      TestStructure_DW.LLFK_Torque_Up_DSTATE =
        TestStructure_cal->LLFK_Torque_Up_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLFK_Torque_Up' */

    /* Update for DiscreteIntegrator: '<S3>/LLFK_Torque_Down' */
    TestStructure_DW.LLFK_Torque_Down_DSTATE +=
      TestStructure_cal->LLFK_Torque_Down_gainval *
      TestStructure_B.LLFK_Torque_Down_a;
    if (TestStructure_DW.LLFK_Torque_Down_DSTATE >=
        TestStructure_cal->LLFK_Torque_Down_UpperSat) {
      TestStructure_DW.LLFK_Torque_Down_DSTATE =
        TestStructure_cal->LLFK_Torque_Down_UpperSat;
    } else if (TestStructure_DW.LLFK_Torque_Down_DSTATE <=
               TestStructure_cal->LLFK_Torque_Down_LowerSat) {
      TestStructure_DW.LLFK_Torque_Down_DSTATE =
        TestStructure_cal->LLFK_Torque_Down_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLFK_Torque_Down' */

    /* Update for DiscreteIntegrator: '<S3>/LLFK_Pos_Up' */
    TestStructure_DW.LLFK_Pos_Up_DSTATE +=
      TestStructure_cal->LLFK_Pos_Up_gainval * TestStructure_B.LLFK_Pos_Up_p;
    if (TestStructure_DW.LLFK_Pos_Up_DSTATE >=
        TestStructure_cal->LLFK_Pos_Up_UpperSat) {
      TestStructure_DW.LLFK_Pos_Up_DSTATE =
        TestStructure_cal->LLFK_Pos_Up_UpperSat;
    } else if (TestStructure_DW.LLFK_Pos_Up_DSTATE <=
               TestStructure_cal->LLFK_Pos_Up_LowerSat) {
      TestStructure_DW.LLFK_Pos_Up_DSTATE =
        TestStructure_cal->LLFK_Pos_Up_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLFK_Pos_Up' */

    /* Update for DiscreteIntegrator: '<S3>/LLFK_Pos_Down' */
    TestStructure_DW.LLFK_Pos_Down_DSTATE +=
      TestStructure_cal->LLFK_Pos_Down_gainval * TestStructure_B.LLFK_Pos_Down_g;
    if (TestStructure_DW.LLFK_Pos_Down_DSTATE >=
        TestStructure_cal->LLFK_Pos_Down_UpperSat) {
      TestStructure_DW.LLFK_Pos_Down_DSTATE =
        TestStructure_cal->LLFK_Pos_Down_UpperSat;
    } else if (TestStructure_DW.LLFK_Pos_Down_DSTATE <=
               TestStructure_cal->LLFK_Pos_Down_LowerSat) {
      TestStructure_DW.LLFK_Pos_Down_DSTATE =
        TestStructure_cal->LLFK_Pos_Down_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLFK_Pos_Down' */

    /* Update for DiscreteIntegrator: '<S3>/LLB_Freq' */
    TestStructure_DW.LLB_Freq_DSTATE += TestStructure_cal->LLB_Freq_gainval *
      TestStructure_B.LLB_Freq_e;
    if (TestStructure_DW.LLB_Freq_DSTATE >= TestStructure_cal->LLB_Freq_UpperSat)
    {
      TestStructure_DW.LLB_Freq_DSTATE = TestStructure_cal->LLB_Freq_UpperSat;
    } else if (TestStructure_DW.LLB_Freq_DSTATE <=
               TestStructure_cal->LLB_Freq_LowerSat) {
      TestStructure_DW.LLB_Freq_DSTATE = TestStructure_cal->LLB_Freq_LowerSat;
    }

    /* End of Update for DiscreteIntegrator: '<S3>/LLB_Freq' */

    /* Update for Delay: '<S3>/Delay' */
    TestStructure_DW.Delay_DSTATE[0] = TestStructure_DW.Delay_DSTATE[1];
    TestStructure_DW.Delay_DSTATE[1] = TestStructure_DW.Delay_DSTATE[2];
    TestStructure_DW.Delay_DSTATE[2] = TestStructure_B.ResetState;

    /* Update for Memory: '<S3>/Memory' */
    TestStructure_DW.Memory_PreviousInput_i = TestStructure_B.Merge7;

    /* End of Outputs for SubSystem: '<Root>/Control' */
    /* TaskTransBlk generated from: '<Root>/Control' */
    TestStructure_DW.TmpTaskTransAtControlOutport1_buf_1 =
      TestStructure_B.BusCreator_i;

    /* TaskTransBlk generated from: '<Root>/Control' */
    TestStructure_B.TmpTaskTransAtControlOutport1 =
      TestStructure_DW.TmpTaskTransAtControlOutport1_buf_1;

    /* TaskTransBlk generated from: '<Root>/Control' */
    rtw_slrealtime_sem_post(TestStructure_DW.sw_buf_1);
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++task_M[1]->Timing.clockTick0)) {
    ++task_M[1]->Timing.clockTickH0;
  }

  task_M[1]->Timing.t[0] = task_M[1]->Timing.clockTick0 * task_M[1]
    ->Timing.stepSize0 + task_M[1]->Timing.clockTickH0 * task_M[1]
    ->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  task_M[1]->Timing.clockTick1++;
  if (!task_M[1]->Timing.clockTick1) {
    task_M[1]->Timing.clockTickH1++;
  }
}

/* Model initialize function */
void TestStructure_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Set task counter limit used by the static main program */
  (TestStructure_M)->Timing.TaskCounters.cLimit[0] = 1;
  (TestStructure_M)->Timing.TaskCounters.cLimit[1] = 1;
  rtmSetTPtr(TestStructure_M, &TestStructure_M->Timing.tArray[0]);
  TestStructure_M->Timing.stepSize0 = 0.001;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&TestStructure_B)), 0,
                     sizeof(B_TestStructure_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&TestStructure_DW), 0,
                     sizeof(DW_TestStructure_T));

  {
    /* user code (registration function declaration) */
    int_T tIdx;
    for (tIdx = 0; tIdx < 2; tIdx++) {
      task_M[tIdx] = &task_M_[tIdx];

      /* initialize real-time model */
      (void) std::memset(static_cast<void *>(task_M[tIdx]), 0,
                         sizeof(RT_MODEL_TestStructure_T));
      task_M[tIdx]->Timing.TaskCounters.cLimit[0] = 1;
      task_M[tIdx]->Timing.TaskCounters.cLimit[1] = 1;
    }

    for (tIdx = 0; tIdx < 2; tIdx++) {
      {
        /* Setup solver object */
        rtsiSetSimTimeStepPtr(&task_M[tIdx]->solverInfo, &task_M[tIdx]
                              ->Timing.simTimeStep);
        rtsiSetTPtr(&task_M[tIdx]->solverInfo, &rtmGetTPtr(task_M[tIdx]));
        rtsiSetStepSizePtr(&task_M[tIdx]->solverInfo, &task_M[tIdx]
                           ->Timing.stepSize0);
        rtsiSetErrorStatusPtr(&task_M[tIdx]->solverInfo, (&rtmGetErrorStatus
          (TestStructure_M)));
        rtsiSetRTModelPtr(&task_M[tIdx]->solverInfo, task_M[tIdx]);
      }

      rtsiSetSimTimeStep(&task_M[tIdx]->solverInfo, MAJOR_TIME_STEP);
      rtsiSetSolverOutputComputed(&task_M[tIdx]->solverInfo, false);
      rtsiSetSolverName(&task_M[tIdx]->solverInfo,"FixedStepDiscrete");
      rtmSetTPtr(task_M[tIdx], &task_M[tIdx]->Timing.tArray[0]);
      task_M[tIdx]->Timing.stepSize0 = 0.001;
    }

    ;
    ;
  }

  {
    static uint32_T *clockTickPtrs[2];
    static uint32_T *clockTickHPtrs[2];
    static real_T *taskTimePtrs[2];
    timingBridge[0].nTasks = 2;
    clockTickPtrs[0] = &(task_M[0]->Timing.clockTick0);
    clockTickHPtrs[0] = &(task_M[0]->Timing.clockTickH0);
    clockTickPtrs[1] = &(task_M[0]->Timing.clockTick1);
    clockTickHPtrs[1] = &(task_M[0]->Timing.clockTickH1);
    timingBridge[0].clockTick = clockTickPtrs;
    timingBridge[0].clockTickH = clockTickHPtrs;
    taskTimePtrs[0] = &(rtmGetT(task_M[0]));
    taskTimePtrs[1] = (NULL);
    timingBridge[0].taskTime = taskTimePtrs;
  }

  /* Model Initialize function for ModelReference Block: '<Root>/DevicesModel' */
  Robot_initialize(rtmGetErrorStatusPointer(TestStructure_M), &(task_M[0]
    ->solverInfo), &timingBridge[0], 0, 1);

  {
    real_T tmp;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* SystemInitialize for Enabled SubSystem: '<S6>/LLWManualTask' */
    /* Start for Constant: '<S116>/Constant3' */
    tmp = *get_SampleTime();

    /* End of SystemInitialize for SubSystem: '<S6>/LLWManualTask' */
    /* End of SystemInitialize for SubSystem: '<Root>/Control' */

    /* InitializeConditions for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
    rtw_slrealtime_sem_init(&TestStructure_DW.sw_buf_2, 0);

    /* InitializeConditions for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
    rtw_slrealtime_sem_init(&TestStructure_DW.sw_buf_3, 0);

    /* InitializeConditions for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
    rtw_slrealtime_sem_init(&TestStructure_DW.sw_buf_4, 0);

    /* InitializeConditions for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
    rtw_slrealtime_sem_init(&TestStructure_DW.sw_buf_5, 0);

    /* InitializeConditions for TaskTransBlk generated from: '<Root>/Control' */
    rtw_slrealtime_sem_init(&TestStructure_DW.sw_buf_1, 0);

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* Start for Constant: '<S3>/StopButton' */
    TestStructure_B.StopButton = TestStructure_cal->StopButton_Value;

    /* Start for Constant: '<S3>/Pause//StartButton' */
    TestStructure_B.PauseStartButton = TestStructure_cal->PauseStartButton_Value;

    /* Start for Constant: '<S3>/PatternButton' */
    TestStructure_B.PatternButton = TestStructure_cal->PatternButton_Value;

    /* Start for Constant: '<S3>/Manual//AutoButton' */
    TestStructure_B.ManualAutoButton = TestStructure_cal->ManualAutoButton_Value;

    /* Start for Constant: '<S3>/Unlock//LockButton' */
    TestStructure_B.UnlockLockButton = TestStructure_cal->UnlockLockButton_Value;

    /* Start for Constant: '<S3>/Freq_Up' */
    TestStructure_B.Freq_Up = TestStructure_cal->Freq_Up_Value;

    /* Start for Constant: '<S3>/Freq_Down' */
    TestStructure_B.Freq_Down = TestStructure_cal->Freq_Down_Value;

    /* Start for Constant: '<S3>/Positive_Up' */
    TestStructure_B.Positive_Up = TestStructure_cal->Positive_Up_Value;

    /* Start for Constant: '<S3>/Positive_Down' */
    TestStructure_B.Positive_Down = TestStructure_cal->Positive_Down_Value;

    /* Start for Constant: '<S3>/Negtive_Up' */
    TestStructure_B.Negtive_Up = TestStructure_cal->Negtive_Up_Value;

    /* Start for Constant: '<S3>/Negtive_Down' */
    TestStructure_B.Negtive_Down = TestStructure_cal->Negtive_Down_Value;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLFK_Freq' */
    TestStructure_DW.LLFK_Freq_DSTATE =
      TestStructure_cal->PanelController_LLFK_Freq_init;

    /* InitializeConditions for Memory: '<S3>/Memory1' */
    TestStructure_DW.Memory1_PreviousInput_e =
      TestStructure_cal->Memory1_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLB_Torque_Up' */
    TestStructure_DW.LLB_Torque_Up_DSTATE =
      TestStructure_cal->PanelController_LLB_Torque_Up_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLB_Torque_Down' */
    TestStructure_DW.LLB_Torque_Down_DSTATE =
      TestStructure_cal->PanelController_LLB_Torque_Down_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLB_Pos_Up' */
    TestStructure_DW.LLB_Pos_Up_DSTATE =
      TestStructure_cal->PanelController_LLB_Pos_Up_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLB_Pos_Down' */
    TestStructure_DW.LLB_Pos_Down_DSTATE =
      TestStructure_cal->PanelController_LLB_Pos_Down_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLW_Freq' */
    TestStructure_DW.LLW_Freq_DSTATE =
      TestStructure_cal->PanelController_LLW_Freq_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLW_Torque_Up' */
    TestStructure_DW.LLW_Torque_Up_DSTATE =
      TestStructure_cal->PanelController_LLW_Torque_Up_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLW_Torque_Down' */
    TestStructure_DW.LLW_Torque_Down_DSTATE =
      TestStructure_cal->PanelController_LLW_Torque_Down_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLW_Pos_Up' */
    TestStructure_DW.LLW_Pos_Up_DSTATE =
      TestStructure_cal->PanelController_LLW_Pos_Up_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLW_Pos_Down' */
    TestStructure_DW.LLW_Pos_Down_DSTATE =
      TestStructure_cal->PanelController_LLW_Pos_Down_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLFK_Torque_Up' */
    TestStructure_DW.LLFK_Torque_Up_DSTATE =
      TestStructure_cal->PanelController_LLFK_Torque_Up_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLFK_Torque_Down' */
    TestStructure_DW.LLFK_Torque_Down_DSTATE =
      TestStructure_cal->PanelController_LLFK_Torque_Down_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLFK_Pos_Up' */
    TestStructure_DW.LLFK_Pos_Up_DSTATE =
      TestStructure_cal->PanelController_LLFK_Pos_Up_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLFK_Pos_Down' */
    TestStructure_DW.LLFK_Pos_Down_DSTATE =
      TestStructure_cal->PanelController_LLFK_Pos_Down_init;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/LLB_Freq' */
    TestStructure_DW.LLB_Freq_DSTATE =
      TestStructure_cal->PanelController_LLB_Freq_init;

    /* InitializeConditions for Delay: '<S3>/Delay' */
    TestStructure_DW.Delay_DSTATE[0] = TestStructure_cal->Delay_InitialCondition;
    TestStructure_DW.Delay_DSTATE[1] = TestStructure_cal->Delay_InitialCondition;
    TestStructure_DW.Delay_DSTATE[2] = TestStructure_cal->Delay_InitialCondition;

    /* InitializeConditions for Memory: '<S3>/Memory' */
    TestStructure_DW.Memory_PreviousInput_i =
      TestStructure_cal->Memory_InitialCondition_k;

    /* SystemInitialize for Chart: '<S3>/ControlPannelStateMachine' */
    TestStructure_DW.sfEvent_po = TestStructure_CALL_EVENT_f;
    TestStructure_DW.is_Start = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_Stop = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.was_Stop = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LowerLimb_Breaststroke =
      TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.was_LowerLimb_Breaststroke =
      TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LowerLimb_FlutterKick =
      TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.was_LowerLimb_FlutterKick =
      TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LowerLimb_Follow = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LowerLimb_Walk = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.was_LowerLimb_Walk = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_active_c6_TestStructure = 0U;
    TestStructure_DW.is_c6_TestStructure = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.Pause_StartButtonPressed_temp = 0.0;
    TestStructure_DW.Manual_AutoButtonPressed_temp = 0.0;
    TestStructure_DW.PatternButtonPressed_temp = 0.0;
    TestStructure_DW.Unlock_LockButtonPressed_temp = 0.0;
    strncpy(&TestStructure_B.State[0], "", 5U);

    /* End of SystemInitialize for SubSystem: '<Root>/Control' */
    TestStructure_B.State[5] = '\x00';

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* SystemInitialize for Chart: '<S3>/ControlPannelStateMachine' */
    strncpy(&TestStructure_B.Mode[0], "", 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Control' */
    TestStructure_B.Mode[255] = '\x00';

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* SystemInitialize for Chart: '<S3>/ControlPannelStateMachine' */
    strncpy(&TestStructure_B.ManualAuto[0], "", 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Control' */
    TestStructure_B.ManualAuto[255] = '\x00';

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* SystemInitialize for Chart: '<S3>/ControlPannelStateMachine' */
    strncpy(&TestStructure_B.UnlockLock[0], "", 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Control' */
    TestStructure_B.UnlockLock[255] = '\x00';

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* SystemInitialize for Chart: '<S3>/KnobStateMachine' */
    TestStructure_DW.sfEvent_p4 = TestStructure_CALL_EVENT_f;
    TestStructure_DW.is_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB_Freq_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK_Freq_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW_Freq_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW_Pos_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW_Torque_Adjust = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_active_c7_TestStructure = 0U;
    TestStructure_DW.is_c7_TestStructure = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.Freq_Up_temp = 0.0;
    TestStructure_DW.Freq_Down_temp = 0.0;
    TestStructure_DW.Positive_Up_temp = 0.0;
    TestStructure_DW.Negtive_Up_temp = 0.0;
    TestStructure_DW.Positive_Down_temp = 0.0;
    TestStructure_DW.Negtive_Down_temp = 0.0;
    strncpy(&TestStructure_B.kState[0], "", 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Control' */
    TestStructure_B.kState[255] = '\x00';

    /* SystemInitialize for Atomic SubSystem: '<Root>/Control' */
    /* SystemInitialize for Chart: '<S3>/KnobStateMachine' */
    TestStructure_B.Display_State = 0.0;
    TestStructure_B.LLFK_Torque_Up_g = 0.0;
    TestStructure_B.LLFK_Torque_Down_a = 0.0;
    TestStructure_B.LLFK_Freq_n = 0.0;
    TestStructure_B.LLFK_Pos_Up_p = 0.0;
    TestStructure_B.LLFK_Pos_Down_g = 0.0;
    TestStructure_B.LLB_Freq_e = 0.0;
    TestStructure_B.LLB_Torque_Up_m = 0.0;
    TestStructure_B.LLB_Torque_Down_m = 0.0;
    TestStructure_B.LLB_Pos_Up_d = 0.0;
    TestStructure_B.LLB_Pos_Down_k = 0.0;
    TestStructure_B.LLW_Freq_k = 0.0;
    TestStructure_B.LLW_Torque_Up_f = 0.0;
    TestStructure_B.LLW_Torque_Down_k = 0.0;
    TestStructure_B.LLW_Pos_Up_c = 0.0;
    TestStructure_B.LLW_Pos_Down_n = 0.0;

    /* SystemInitialize for Chart: '<S3>/LowerLimbTaskControlStateMachine' */
    TestStructure_DW.sfEvent_p = TestStructure_CALL_EVENT_f;
    TestStructure_DW.is_StartTask_f = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLB = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLFK = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_LLW = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_active_c8_TestStructure = 0U;
    TestStructure_DW.is_c8_TestStructure = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_B.ControlState_j = 0.0;
    TestStructure_B.ResetState = 0.0;

    /* SystemInitialize for Merge: '<S3>/Merge1' */
    TestStructure_B.Merge1 = TestStructure_cal->Merge1_InitialOutput;

    /* SystemInitialize for Merge: '<S3>/Merge2' */
    TestStructure_B.Merge2 = TestStructure_cal->Merge2_InitialOutput;

    /* SystemInitialize for Merge: '<S3>/Merge3' */
    TestStructure_B.Merge3 = TestStructure_cal->Merge3_InitialOutput;

    /* SystemInitialize for Merge: '<S3>/Merge4' */
    TestStructure_B.Merge4 = TestStructure_cal->Merge4_InitialOutput;

    /* SystemInitialize for Merge: '<S3>/Merge5' */
    TestStructure_B.Merge5 = TestStructure_cal->Merge5_InitialOutput;

    /* SystemInitialize for Enabled SubSystem: '<S6>/StopTask' */
    /* InitializeConditions for DiscreteIntegrator: '<S85>/Discrete-Time Integrator' */
    TestStructure_DW.DiscreteTimeIntegrator_DSTATE =
      TestStructure_cal->DiscreteTimeIntegrator_IC_f;

    /* End of SystemInitialize for SubSystem: '<S6>/StopTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/LLFTask' */
    TestStructure_LLBAutoTask_Init(&TestStructure_DW.LLFTask,
      &TestStructure_cal->TestStructure_LLFTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/LLFTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/LLFKManualTask' */
    /* InitializeConditions for DiscreteIntegrator: '<S80>/Discrete-Time Integrator' */
    TestStructure_DW.DiscreteTimeIntegrator_DSTATE_g =
      TestStructure_cal->DiscreteTimeIntegrator_IC_b;

    /* End of SystemInitialize for SubSystem: '<S6>/LLFKManualTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/LLFKAutoTask' */
    TestStructure_LLBAutoTask_Init(&TestStructure_DW.LLFKAutoTask,
      &TestStructure_cal->TestStructure_LLFKAutoTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/LLFKAutoTask' */

    /* Start for Constant: '<S92>/Constant3' */
    TestStructure_B.Constant3_h = tmp;

    /* InitializeConditions for DiscreteIntegrator: '<S78>/Discrete-Time Integrator' */
    TestStructure_DW.DiscreteTimeIntegrator_DSTATE_o =
      TestStructure_cal->DiscreteTimeIntegrator_IC;

    /* InitializeConditions for Memory: '<S92>/Memory' */
    TestStructure_DW.Memory_PreviousInput_g =
      TestStructure_cal->Memory_InitialCondition_b;

    /* InitializeConditions for DiscreteIntegrator: '<S92>/Discrete-Time Integrator1' */
    TestStructure_DW.DiscreteTimeIntegrator1_DSTATE_n =
      TestStructure_cal->DiscreteTimeIntegrator1_IC;
    TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState_o = 2;

    /* SystemInitialize for Chart: '<S92>/Chart' */
    TestStructure_Chart_Init(&TestStructure_B.sf_Chart,
      &TestStructure_DW.sf_Chart);

    /* End of SystemInitialize for SubSystem: '<S6>/LLBManualTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/LLBAutoTask' */
    TestStructure_LLBAutoTask_Init(&TestStructure_DW.LLBAutoTask,
      &TestStructure_cal->TestStructure_LLBAutoTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/LLBAutoTask' */

    /* Start for Constant: '<S116>/Constant3' */
    TestStructure_B.Constant3 = tmp;

    /* InitializeConditions for DiscreteIntegrator: '<S83>/Discrete-Time Integrator' */
    TestStructure_DW.DiscreteTimeIntegrator_DSTATE_f =
      TestStructure_cal->DiscreteTimeIntegrator_IC_a;

    /* InitializeConditions for Memory: '<S116>/Memory' */
    TestStructure_DW.Memory_PreviousInput_h =
      TestStructure_cal->Memory_InitialCondition_f;

    /* InitializeConditions for DiscreteIntegrator: '<S116>/Discrete-Time Integrator1' */
    TestStructure_DW.DiscreteTimeIntegrator1_DSTATE =
      TestStructure_cal->DiscreteTimeIntegrator1_IC_i;
    TestStructure_DW.DiscreteTimeIntegrator1_PrevResetState = 2;

    /* SystemInitialize for Chart: '<S116>/Chart' */
    TestStructure_Chart_Init(&TestStructure_B.sf_Chart_d,
      &TestStructure_DW.sf_Chart_d);

    /* End of SystemInitialize for SubSystem: '<S6>/LLWManualTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/LLWAutoTask' */
    TestStructure_LLBAutoTask_Init(&TestStructure_DW.LLWAutoTask,
      &TestStructure_cal->TestStructure_LLWAutoTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/LLWAutoTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/PauseTask' */
    TestStructure_LLBAutoTask_Init(&TestStructure_DW.PauseTask,
      &TestStructure_cal->TestStructure_PauseTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/PauseTask' */

    /* SystemInitialize for Merge: '<S3>/Merge6' */
    TestStructure_B.Merge6 = TestStructure_cal->Merge6_InitialOutput;

    /* SystemInitialize for Enabled SubSystem: '<S6>/ULUnLockTask' */
    TestStructure_ULLockTask_Init(&TestStructure_B.ULUnLockTask,
      &TestStructure_DW.ULUnLockTask,
      &TestStructure_cal->TestStructure_ULUnLockTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/ULUnLockTask' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/ULLockTask' */
    TestStructure_ULLockTask_Init(&TestStructure_B.ULLockTask,
      &TestStructure_DW.ULLockTask,
      &TestStructure_cal->TestStructure_ULLockTask_cal);

    /* End of SystemInitialize for SubSystem: '<S6>/ULLockTask' */

    /* SystemInitialize for Merge: '<S3>/Merge7' */
    TestStructure_B.Merge7 = TestStructure_cal->Merge7_InitialOutput;

    /* SystemInitialize for Chart: '<S3>/UpperLimbTaskControlStateMachine' */
    TestStructure_DW.sfEvent = TestStructure_CALL_EVENT_f;
    TestStructure_DW.is_StartTask = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_DW.is_active_c9_TestStructure = 0U;
    TestStructure_DW.is_c9_TestStructure = TestStructure_IN_NO_ACTIVE_CHILD_g;
    TestStructure_B.ControlState = 0.0;

    /* SystemInitialize for Merge: '<S6>/Merge' */
    TestStructure_B.Merge_f = TestStructure_cal->Merge_InitialOutput;

    /* SystemInitialize for Merge: '<S6>/Merge1' */
    TestStructure_B.Merge1_j = TestStructure_cal->Merge1_InitialOutput_c;

    /* SystemInitialize for Merge: '<S6>/Merge3' */
    TestStructure_B.Motor1Torque = TestStructure_cal->Merge3_InitialOutput_m;

    /* SystemInitialize for Merge: '<S6>/Merge4' */
    TestStructure_B.Motor2Torque = TestStructure_cal->Merge4_InitialOutput_p;

    /* End of SystemInitialize for SubSystem: '<Root>/Control' */

    /* SystemInitialize for ModelReference: '<Root>/DevicesModel' */
    Robot_Init(&TestStructure_B.State_g);

    /* InitializeConditions for DiscretePulseGenerator: '<S2>/Pulse Generator' */
    TestStructure_DW.clockTickCounter = -1000;

    /* InitializeConditions for Memory: '<S2>/Memory' */
    TestStructure_DW.Memory_PreviousInput =
      TestStructure_cal->Memory_InitialCondition;

    /* InitializeConditions for Memory: '<S2>/Memory1' */
    TestStructure_DW.Memory1_PreviousInput =
      TestStructure_cal->Memory1_InitialCondition_o;
    TestStructure_MedianFilter1_Init(&TestStructure_DW.MedianFilter2);
    TestStructure_LowpassFilter2_Init(&TestStructure_DW.LowpassFilter3);
    TestStructure_MedianFilter1_Init(&TestStructure_DW.MedianFilter1);
    TestStructure_LowpassFilter2_Init(&TestStructure_DW.LowpassFilter2);
    TestStructure_MedianFilter1_Init(&TestStructure_DW.MedianFilter3);
    TestStructure_LowpassFilter2_Init(&TestStructure_DW.LowpassFilter4);
    TestStructure_MedianFilter1_Init(&TestStructure_DW.MedianFilter4);
    TestStructure_LowpassFilter2_Init(&TestStructure_DW.LowpassFilter5);

    /* End of SystemInitialize for SubSystem: '<Root>/SensingAndIntention' */
  }
}

/* Model terminate function */
void TestStructure_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/SensingAndIntention' */
  TestStructure_MedianFilter1_Term(&TestStructure_DW.MedianFilter2);
  TestStructure_LowpassFilter2_Term(&TestStructure_DW.LowpassFilter3);
  TestStructure_MedianFilter1_Term(&TestStructure_DW.MedianFilter1);
  TestStructure_LowpassFilter2_Term(&TestStructure_DW.LowpassFilter2);
  TestStructure_MedianFilter1_Term(&TestStructure_DW.MedianFilter3);
  TestStructure_LowpassFilter2_Term(&TestStructure_DW.LowpassFilter4);
  TestStructure_MedianFilter1_Term(&TestStructure_DW.MedianFilter4);
  TestStructure_LowpassFilter2_Term(&TestStructure_DW.LowpassFilter5);

  /* Terminate for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_destroy(TestStructure_DW.sw_buf_2);

  /* Terminate for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_destroy(TestStructure_DW.sw_buf_3);

  /* Terminate for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_destroy(TestStructure_DW.sw_buf_4);

  /* Terminate for TaskTransBlk generated from: '<Root>/SensingAndIntention' */
  rtw_slrealtime_sem_destroy(TestStructure_DW.sw_buf_5);

  /* Terminate for TaskTransBlk generated from: '<Root>/Control' */
  rtw_slrealtime_sem_destroy(TestStructure_DW.sw_buf_1);

  /* Terminate for ModelReference: '<Root>/DevicesModel' */
  Robot_Term();
}

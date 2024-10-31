/*
 * TestStructure.h
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

#ifndef RTW_HEADER_TestStructure_h_
#define RTW_HEADER_TestStructure_h_
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "TestStructure_types.h"
#include "rtGetNaN.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "TestStructure_cal.h"
#include "model_reference_types.h"
#include "rtGetInf.h"
#include <cstring>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<S30>/Switch Case Action Subsystem' */
struct DW_SwitchCaseActionSubsystem_TestStructure_T {
  int8_T SwitchCaseActionSubsystem_SubsysRanBC;
                                      /* '<S30>/Switch Case Action Subsystem' */
};

/* Block states (default storage) for system '<S30>/Switch Case Action Subsystem1' */
struct DW_SwitchCaseActionSubsystem1_TestStructure_T {
  int8_T SwitchCaseActionSubsystem1_SubsysRanBC;
                                     /* '<S30>/Switch Case Action Subsystem1' */
};

/* Block states (default storage) for system '<S3>/LLB_Dispaly' */
struct DW_LLB_Dispaly_TestStructure_T {
  int8_T LLB_Dispaly_SubsysRanBC;      /* '<S3>/LLB_Dispaly' */
};

/* Block signals for system '<S6>/LLBAutoTask' */
struct B_LLBAutoTask_TestStructure_T {
  real_T DiscreteTimeIntegrator;       /* '<S77>/Discrete-Time Integrator' */
};

/* Block states (default storage) for system '<S6>/LLBAutoTask' */
struct DW_LLBAutoTask_TestStructure_T {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S77>/Discrete-Time Integrator' */
  int8_T LLBAutoTask_SubsysRanBC;      /* '<S6>/LLBAutoTask' */
  boolean_T LLBAutoTask_MODE;          /* '<S6>/LLBAutoTask' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem13;/* '<S77>/If Action Subsystem13' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem12;/* '<S77>/If Action Subsystem12' */
};

/* Block signals for system '<S78>/Subsystem2' */
struct B_Subsystem2_TestStructure_T {
  real_T MinMax;                       /* '<S95>/MinMax' */
};

/* Block states (default storage) for system '<S78>/Subsystem2' */
struct DW_Subsystem2_TestStructure_T {
  int8_T Subsystem2_SubsysRanBC;       /* '<S78>/Subsystem2' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem4;/* '<S95>/If Action Subsystem4' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem5;/* '<S95>/If Action Subsystem5' */
};

/* Block signals for system '<S78>/Subsystem3' */
struct B_Subsystem3_TestStructure_T {
  real_T MinMax;                       /* '<S96>/MinMax' */
};

/* Block states (default storage) for system '<S78>/Subsystem3' */
struct DW_Subsystem3_TestStructure_T {
  int8_T Subsystem3_SubsysRanBC;       /* '<S78>/Subsystem3' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S96>/If Action Subsystem2' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem1;/* '<S96>/If Action Subsystem1' */
};

/* Block signals for system '<S92>/Chart' */
struct B_Chart_TestStructure_T {
  real_T Input;                        /* '<S92>/Chart' */
  real_T Reset;                        /* '<S92>/Chart' */
};

/* Block states (default storage) for system '<S92>/Chart' */
struct DW_Chart_TestStructure_T {
  real_T Count;                        /* '<S92>/Chart' */
  int32_T sfEvent;                     /* '<S92>/Chart' */
  uint32_T is_c1_TestStructure;        /* '<S92>/Chart' */
  uint8_T is_active_c1_TestStructure;  /* '<S92>/Chart' */
};

/* Block states (default storage) for system '<S85>/If Action Subsystem8' */
struct DW_IfActionSubsystem8_TestStructure_T {
  int8_T IfActionSubsystem8_SubsysRanBC;/* '<S85>/If Action Subsystem8' */
};

/* Block signals for system '<S85>/MATLAB Function1' */
struct B_MATLABFunction1_TestStructure_T {
  real_T y;                            /* '<S85>/MATLAB Function1' */
};

/* Block signals for system '<S6>/ULLockTask' */
struct B_ULLockTask_TestStructure_T {
  real_T DiscreteTimeIntegrator;       /* '<S86>/Discrete-Time Integrator' */
  real_T Constant1;                    /* '<S86>/Constant1' */
  real_T OutportBufferForMotor3Torque; /* '<S86>/Constant1' */
  real_T Constant2;                    /* '<S86>/Constant2' */
  real_T OutportBufferForMotor4Torque; /* '<S86>/Constant2' */
};

/* Block states (default storage) for system '<S6>/ULLockTask' */
struct DW_ULLockTask_TestStructure_T {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S86>/Discrete-Time Integrator' */
  int8_T ULLockTask_SubsysRanBC;       /* '<S6>/ULLockTask' */
  boolean_T ULLockTask_MODE;           /* '<S6>/ULLockTask' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem13;/* '<S86>/If Action Subsystem13' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem12;/* '<S86>/If Action Subsystem12' */
};

/* Block signals for system '<S2>/Lowpass Filter2' */
struct B_LowpassFilter2_TestStructure_T {
  real_T Rightback;                    /* '<S2>/Lowpass Filter2' */
};

/* Block states (default storage) for system '<S2>/Lowpass Filter2' */
struct DW_LowpassFilter2_TestStructure_T {
  dsp_simulink_LowpassFilter_TestStructure_T obj;/* '<S2>/Lowpass Filter2' */
  boolean_T objisempty;                /* '<S2>/Lowpass Filter2' */
  boolean_T isInitialized;             /* '<S2>/Lowpass Filter2' */
};

/* Block signals for system '<S2>/Median Filter1' */
struct B_MedianFilter1_TestStructure_T {
  real_T MedianFilter1;                /* '<S2>/Median Filter1' */
};

/* Block states (default storage) for system '<S2>/Median Filter1' */
struct DW_MedianFilter1_TestStructure_T {
  dsp_simulink_MedianFilter_TestStructure_T obj;/* '<S2>/Median Filter1' */
  boolean_T objisempty;                /* '<S2>/Median Filter1' */
};

/* Block signals (default storage) */
struct B_TestStructure_T {
  SensingBus DevicesModel_o1;          /* '<Root>/DevicesModel' */
  SensingBus Memory;                   /* '<S2>/Memory' */
  IntentionBus TmpTaskTransAtSensingAndIntentionOutport1;/* '<Root>/SensingAndIntention' */
  IntentionBus TmpTaskTransAtControlInport1;/* '<Root>/SensingAndIntention' */
  IntentionBus BusCreator;             /* '<S2>/Bus Creator' */
  ControlBus TmpTaskTransAtControlOutport1;/* '<Root>/Control' */
  ControlBus TmpTaskTransAtDevicesModelInport1;/* '<Root>/Control' */
  ControlBus BusCreator_i;             /* '<S6>/Bus Creator' */
  char_T kState[256];                  /* '<S3>/KnobStateMachine' */
  char_T Mode[256];                    /* '<S3>/ControlPannelStateMachine' */
  char_T ManualAuto[256];              /* '<S3>/ControlPannelStateMachine' */
  char_T UnlockLock[256];              /* '<S3>/ControlPannelStateMachine' */
  char_T State[6];                     /* '<S3>/ControlPannelStateMachine' */
  real_T TmpTaskTransAtSensingAndIntentionOutport2;/* '<Root>/SensingAndIntention' */
  real_T TmpTaskTransAtControlInport2;
                                     /* '<Root>/TmpTaskTransAtControlInport2' */
  real_T TmpTaskTransAtSensingAndIntentionOutport3;/* '<Root>/SensingAndIntention' */
  real_T TmpTaskTransAtControlInport3;
                                     /* '<Root>/TmpTaskTransAtControlInport3' */
  real_T TmpTaskTransAtSensingAndIntentionOutport4;/* '<Root>/SensingAndIntention' */
  real_T TmpTaskTransAtControlInport4; /* '<Root>/SensingAndIntention' */
  real_T State_g;                      /* '<Root>/DevicesModel' */
  real_T PulseGenerator;               /* '<S2>/Pulse Generator' */
  real_T Bias;                         /* '<S2>/Bias' */
  real_T Sensor1ADCh1;
               /* '<S2>/SigConversion_InsertedFor_Bus Selector3_at_outport_0' */
  real_T Sensor1ADCh2;
               /* '<S2>/SigConversion_InsertedFor_Bus Selector3_at_outport_1' */
  real_T Sensor3ADCh1;
               /* '<S2>/SigConversion_InsertedFor_Bus Selector3_at_outport_2' */
  real_T Sensor3ADCh2;
               /* '<S2>/SigConversion_InsertedFor_Bus Selector3_at_outport_3' */
  real_T Motor1ActuralPosition;
  real_T Motor2ActuralPosition;
  real_T Memory1;                      /* '<S2>/Memory1' */
  real_T Constant9;                    /* '<S2>/Constant9' */
  real_T LLFK_Freq;                    /* '<S3>/LLFK_Freq' */
  real_T Memory1_a;                    /* '<S3>/Memory1' */
  real_T StopButton;                   /* '<S3>/StopButton' */
  real_T PauseStartButton;             /* '<S3>/Pause//StartButton' */
  real_T PatternButton;                /* '<S3>/PatternButton' */
  real_T ManualAutoButton;             /* '<S3>/Manual//AutoButton' */
  real_T UnlockLockButton;             /* '<S3>/Unlock//LockButton' */
  real_T LLB_Torque_Up;                /* '<S3>/LLB_Torque_Up' */
  real_T LLB_Torque_Down;              /* '<S3>/LLB_Torque_Down' */
  real_T LLB_Pos_Up;                   /* '<S3>/LLB_Pos_Up' */
  real_T LLB_Pos_Down;                 /* '<S3>/LLB_Pos_Down' */
  real_T LLW_Freq;                     /* '<S3>/LLW_Freq' */
  real_T LLW_Torque_Up;                /* '<S3>/LLW_Torque_Up' */
  real_T LLW_Torque_Down;              /* '<S3>/LLW_Torque_Down' */
  real_T LLW_Pos_Up;                   /* '<S3>/LLW_Pos_Up' */
  real_T LLW_Pos_Down;                 /* '<S3>/LLW_Pos_Down' */
  real_T Freq_Up;                      /* '<S3>/Freq_Up' */
  real_T Freq_Down;                    /* '<S3>/Freq_Down' */
  real_T Positive_Up;                  /* '<S3>/Positive_Up' */
  real_T Positive_Down;                /* '<S3>/Positive_Down' */
  real_T Negtive_Up;                   /* '<S3>/Negtive_Up' */
  real_T Negtive_Down;                 /* '<S3>/Negtive_Down' */
  real_T Merge;                        /* '<S30>/Merge' */
  real_T LLFK_Torque_Up;               /* '<S3>/LLFK_Torque_Up' */
  real_T LLFK_Torque_Down;             /* '<S3>/LLFK_Torque_Down' */
  real_T LLFK_Pos_Up;                  /* '<S3>/LLFK_Pos_Up' */
  real_T LLFK_Pos_Down;                /* '<S3>/LLFK_Pos_Down' */
  real_T Merge_m;                      /* '<S33>/Merge' */
  real_T LLB_Freq;                     /* '<S3>/LLB_Freq' */
  real_T Merge_n;                      /* '<S36>/Merge' */
  real_T Merge_e;                      /* '<S39>/Merge' */
  real_T Merge1;                       /* '<S3>/Merge1' */
  real_T Merge2;                       /* '<S3>/Merge2' */
  real_T Merge3;                       /* '<S3>/Merge3' */
  real_T Merge4;                       /* '<S3>/Merge4' */
  real_T Merge5;                       /* '<S3>/Merge5' */
  real_T Delay;                        /* '<S3>/Delay' */
  real_T Constant2;                    /* '<S30>/Constant2' */
  real_T Constant2_d;                  /* '<S33>/Constant2' */
  real_T Constant2_p;                  /* '<S36>/Constant2' */
  real_T Constant2_pk;                 /* '<S39>/Constant2' */
  real_T Merge_k;                      /* '<S42>/Merge' */
  real_T Merge_h;                      /* '<S45>/Merge' */
  real_T Merge_a;                      /* '<S48>/Merge' */
  real_T Merge_l;                      /* '<S51>/Merge' */
  real_T Merge_i;                      /* '<S54>/Merge' */
  real_T Merge_j;                      /* '<S57>/Merge' */
  real_T Merge_jz;                     /* '<S60>/Merge' */
  real_T Merge_ev;                     /* '<S63>/Merge' */
  real_T Merge_o;                      /* '<S66>/Merge' */
  real_T Memory_l;                     /* '<S3>/Memory' */
  real_T Merge6;                       /* '<S3>/Merge6' */
  real_T Merge_e0;                     /* '<S69>/Merge' */
  real_T Merge_d;                      /* '<S72>/Merge' */
  real_T Merge7;                       /* '<S3>/Merge7' */
  real_T Merge_f;                      /* '<S6>/Merge' */
  real_T Merge1_j;                     /* '<S6>/Merge1' */
  real_T Motor1Torque;                 /* '<S6>/Merge3' */
  real_T Motor2Torque;                 /* '<S6>/Merge4' */
  real_T KeyState;
  real_T Merge1_l;                     /* '<S4>/Merge1' */
  real_T DiscreteTimeIntegrator;       /* '<S85>/Discrete-Time Integrator' */
  real_T Abs;                          /* '<S85>/Abs' */
  real_T Abs1;                         /* '<S85>/Abs1' */
  real_T Merge4_o;                     /* '<S85>/Merge4' */
  real_T Merge5_c;                     /* '<S85>/Merge5' */
  real_T Constant2_m;                  /* '<S85>/Constant2' */
  real_T DiscreteTimeIntegrator_p;     /* '<S83>/Discrete-Time Integrator' */
  real_T MathFunction;                 /* '<S116>/Math Function' */
  real_T Constant3;                    /* '<S116>/Constant3' */
  real_T Memory_j;                     /* '<S116>/Memory' */
  real_T DiscreteTimeIntegrator1;      /* '<S116>/Discrete-Time Integrator1' */
  real_T Gain;                         /* '<S83>/Gain' */
  real_T TmpSignalConversionAt1DLookupTable1Inport2[7];
  real_T uDLookupTable1;               /* '<S83>/1-D Lookup Table1' */
  real_T TmpSignalConversionAt1DLookupTableInport2[7];
  real_T uDLookupTable;                /* '<S83>/1-D Lookup Table' */
  real_T Gain1;                        /* '<S83>/Gain1' */
  real_T Gain2;                        /* '<S83>/Gain2' */
  real_T Gain3;                        /* '<S83>/Gain3' */
  real_T Constant1;                    /* '<S83>/Constant1' */
  real_T Constant11;                   /* '<S83>/Constant11' */
  real_T Constant13;                   /* '<S83>/Constant13' */
  real_T Constant2_a;                  /* '<S83>/Constant2' */
  real_T Constant4;                    /* '<S83>/Constant4' */
  real_T Constant6;                    /* '<S83>/Constant6' */
  real_T DiscreteTimeIntegrator_i;     /* '<S80>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_ij;    /* '<S78>/Discrete-Time Integrator' */
  real_T MathFunction_o;               /* '<S92>/Math Function' */
  real_T Constant3_h;                  /* '<S92>/Constant3' */
  real_T Memory_e;                     /* '<S92>/Memory' */
  real_T DiscreteTimeIntegrator1_a;    /* '<S92>/Discrete-Time Integrator1' */
  real_T Gain_c;                       /* '<S78>/Gain' */
  real_T TmpSignalConversionAt1DLookupTable1Inport2_p[7];
  real_T uDLookupTable1_o;             /* '<S78>/1-D Lookup Table1' */
  real_T TmpSignalConversionAt1DLookupTableInport2_h[7];
  real_T uDLookupTable_o;              /* '<S78>/1-D Lookup Table' */
  real_T Gain1_n;                      /* '<S78>/Gain1' */
  real_T Gain2_l;                      /* '<S78>/Gain2' */
  real_T Gain3_d;                      /* '<S78>/Gain3' */
  real_T Constant1_c;                  /* '<S78>/Constant1' */
  real_T Constant11_g;                 /* '<S78>/Constant11' */
  real_T Constant13_l;                 /* '<S78>/Constant13' */
  real_T Constant2_j;                  /* '<S78>/Constant2' */
  real_T Constant4_h;                  /* '<S78>/Constant4' */
  real_T Constant6_b;                  /* '<S78>/Constant6' */
  real_T ControlState;             /* '<S3>/UpperLimbTaskControlStateMachine' */
  real_T ControlState_j;           /* '<S3>/LowerLimbTaskControlStateMachine' */
  real_T ResetState;               /* '<S3>/LowerLimbTaskControlStateMachine' */
  real_T Display_State;                /* '<S3>/KnobStateMachine' */
  real_T LLFK_Torque_Up_g;             /* '<S3>/KnobStateMachine' */
  real_T LLFK_Torque_Down_a;           /* '<S3>/KnobStateMachine' */
  real_T LLFK_Freq_n;                  /* '<S3>/KnobStateMachine' */
  real_T LLFK_Pos_Up_p;                /* '<S3>/KnobStateMachine' */
  real_T LLFK_Pos_Down_g;              /* '<S3>/KnobStateMachine' */
  real_T LLB_Freq_e;                   /* '<S3>/KnobStateMachine' */
  real_T LLB_Torque_Up_m;              /* '<S3>/KnobStateMachine' */
  real_T LLB_Torque_Down_m;            /* '<S3>/KnobStateMachine' */
  real_T LLB_Pos_Up_d;                 /* '<S3>/KnobStateMachine' */
  real_T LLB_Pos_Down_k;               /* '<S3>/KnobStateMachine' */
  real_T LLW_Freq_k;                   /* '<S3>/KnobStateMachine' */
  real_T LLW_Torque_Up_f;              /* '<S3>/KnobStateMachine' */
  real_T LLW_Torque_Down_k;            /* '<S3>/KnobStateMachine' */
  real_T LLW_Pos_Up_c;                 /* '<S3>/KnobStateMachine' */
  real_T LLW_Pos_Down_n;               /* '<S3>/KnobStateMachine' */
  B_MedianFilter1_TestStructure_T MedianFilter4;/* '<S2>/Median Filter1' */
  B_MedianFilter1_TestStructure_T MedianFilter3;/* '<S2>/Median Filter1' */
  B_MedianFilter1_TestStructure_T MedianFilter2;/* '<S2>/Median Filter1' */
  B_MedianFilter1_TestStructure_T MedianFilter1;/* '<S2>/Median Filter1' */
  B_LowpassFilter2_TestStructure_T LowpassFilter5;/* '<S2>/Lowpass Filter2' */
  B_LowpassFilter2_TestStructure_T LowpassFilter4;/* '<S2>/Lowpass Filter2' */
  B_LowpassFilter2_TestStructure_T LowpassFilter3;/* '<S2>/Lowpass Filter2' */
  B_LowpassFilter2_TestStructure_T LowpassFilter2;/* '<S2>/Lowpass Filter2' */
  B_ULLockTask_TestStructure_T ULUnLockTask;/* '<S6>/ULUnLockTask' */
  B_ULLockTask_TestStructure_T ULLockTask;/* '<S6>/ULLockTask' */
  B_MATLABFunction1_TestStructure_T sf_MATLABFunction4;/* '<S85>/MATLAB Function4' */
  B_MATLABFunction1_TestStructure_T sf_MATLABFunction3;/* '<S85>/MATLAB Function3' */
  B_MATLABFunction1_TestStructure_T sf_MATLABFunction2;/* '<S85>/MATLAB Function2' */
  B_MATLABFunction1_TestStructure_T sf_MATLABFunction1;/* '<S85>/MATLAB Function1' */
  B_LLBAutoTask_TestStructure_T PauseTask;/* '<S6>/PauseTask' */
  B_Chart_TestStructure_T sf_Chart_d;  /* '<S116>/Chart' */
  B_Subsystem3_TestStructure_T Subsystem1_e;/* '<S83>/Subsystem1' */
  B_Subsystem2_TestStructure_T Subsystem_j;/* '<S83>/Subsystem' */
  B_Subsystem3_TestStructure_T Subsystem3_l;/* '<S83>/Subsystem3' */
  B_Subsystem2_TestStructure_T Subsystem2_l;/* '<S83>/Subsystem2' */
  B_LLBAutoTask_TestStructure_T LLWAutoTask;/* '<S6>/LLWAutoTask' */
  B_LLBAutoTask_TestStructure_T LLFTask;/* '<S6>/LLFTask' */
  B_LLBAutoTask_TestStructure_T LLFKAutoTask;/* '<S6>/LLFKAutoTask' */
  B_Chart_TestStructure_T sf_Chart;    /* '<S92>/Chart' */
  B_Subsystem3_TestStructure_T Subsystem1;/* '<S78>/Subsystem1' */
  B_Subsystem2_TestStructure_T Subsystem;/* '<S78>/Subsystem' */
  B_Subsystem3_TestStructure_T Subsystem3;/* '<S78>/Subsystem3' */
  B_Subsystem2_TestStructure_T Subsystem2;/* '<S78>/Subsystem2' */
  B_LLBAutoTask_TestStructure_T LLBAutoTask;/* '<S6>/LLBAutoTask' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_TestStructure_T {
  SensingBus Memory_PreviousInput;     /* '<S2>/Memory' */
  IntentionBus TmpTaskTransAtSensingAndIntentionOutport1_buf_2;/* synthesized block */
  ControlBus TmpTaskTransAtControlOutport1_buf_1;/* synthesized block */
  real_T LLFK_Freq_DSTATE;             /* '<S3>/LLFK_Freq' */
  real_T LLB_Torque_Up_DSTATE;         /* '<S3>/LLB_Torque_Up' */
  real_T LLB_Torque_Down_DSTATE;       /* '<S3>/LLB_Torque_Down' */
  real_T LLB_Pos_Up_DSTATE;            /* '<S3>/LLB_Pos_Up' */
  real_T LLB_Pos_Down_DSTATE;          /* '<S3>/LLB_Pos_Down' */
  real_T LLW_Freq_DSTATE;              /* '<S3>/LLW_Freq' */
  real_T LLW_Torque_Up_DSTATE;         /* '<S3>/LLW_Torque_Up' */
  real_T LLW_Torque_Down_DSTATE;       /* '<S3>/LLW_Torque_Down' */
  real_T LLW_Pos_Up_DSTATE;            /* '<S3>/LLW_Pos_Up' */
  real_T LLW_Pos_Down_DSTATE;          /* '<S3>/LLW_Pos_Down' */
  real_T LLFK_Torque_Up_DSTATE;        /* '<S3>/LLFK_Torque_Up' */
  real_T LLFK_Torque_Down_DSTATE;      /* '<S3>/LLFK_Torque_Down' */
  real_T LLFK_Pos_Up_DSTATE;           /* '<S3>/LLFK_Pos_Up' */
  real_T LLFK_Pos_Down_DSTATE;         /* '<S3>/LLFK_Pos_Down' */
  real_T LLB_Freq_DSTATE;              /* '<S3>/LLB_Freq' */
  real_T Delay_DSTATE[3];              /* '<S3>/Delay' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S85>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_f;/* '<S83>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S116>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S80>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S78>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE_n;/* '<S92>/Discrete-Time Integrator1' */
  real_T TmpTaskTransAtSensingAndIntentionOutport2_buf_3;/* synthesized block */
  real_T TmpTaskTransAtSensingAndIntentionOutport3_buf_4;/* synthesized block */
  real_T TmpTaskTransAtSensingAndIntentionOutport4_buf_5;/* synthesized block */
  real_T Memory1_PreviousInput;        /* '<S2>/Memory1' */
  real_T Memory1_PreviousInput_e;      /* '<S3>/Memory1' */
  real_T Memory_PreviousInput_i;       /* '<S3>/Memory' */
  real_T Memory_PreviousInput_h;       /* '<S116>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S92>/Memory' */
  real_T Freq_Up_temp;                 /* '<S3>/KnobStateMachine' */
  real_T Freq_Down_temp;               /* '<S3>/KnobStateMachine' */
  real_T Positive_Up_temp;             /* '<S3>/KnobStateMachine' */
  real_T Negtive_Up_temp;              /* '<S3>/KnobStateMachine' */
  real_T Positive_Down_temp;           /* '<S3>/KnobStateMachine' */
  real_T Negtive_Down_temp;            /* '<S3>/KnobStateMachine' */
  real_T Pause_StartButtonPressed_temp;/* '<S3>/ControlPannelStateMachine' */
  real_T Manual_AutoButtonPressed_temp;/* '<S3>/ControlPannelStateMachine' */
  real_T PatternButtonPressed_temp;    /* '<S3>/ControlPannelStateMachine' */
  real_T Unlock_LockButtonPressed_temp;/* '<S3>/ControlPannelStateMachine' */
  void* sw_buf_2;                      /* synthesized block */
  void* sw_buf_3;                      /* synthesized block */
  void* sw_buf_4;                      /* synthesized block */
  void* sw_buf_5;                      /* synthesized block */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Control_at_outport_0_PWORK;/* synthesized block */

  void* sw_buf_1;                      /* synthesized block */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_DevicesModel_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BusSelector3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BusSelector3_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BusSelector3_at_outport_2_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BusSelector3_at_outport_3_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LowpassFilter2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LowpassFilter3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LowpassFilter4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LowpassFilter5_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_1DLookupTable1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_1DLookupTable_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor1Pos_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor2Pos_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_RythmModel_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_1DLookupTable1_at_outport_0_PWORK_b;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_1DLookupTable_at_outport_0_PWORK_g;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor1Pos_at_outport_0_PWORK_f;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor2Pos_at_outport_0_PWORK_m;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_RythmModel_at_outport_0_PWORK_a;/* synthesized block */

  int32_T clockTickCounter;            /* '<S2>/Pulse Generator' */
  int32_T sfEvent;                 /* '<S3>/UpperLimbTaskControlStateMachine' */
  int32_T sfEvent_p;               /* '<S3>/LowerLimbTaskControlStateMachine' */
  int32_T sfEvent_p4;                  /* '<S3>/KnobStateMachine' */
  int32_T sfEvent_po;                  /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_c9_TestStructure;    /* '<S3>/UpperLimbTaskControlStateMachine' */
  uint32_T is_StartTask;           /* '<S3>/UpperLimbTaskControlStateMachine' */
  uint32_T is_c8_TestStructure;    /* '<S3>/LowerLimbTaskControlStateMachine' */
  uint32_T is_StartTask_f;         /* '<S3>/LowerLimbTaskControlStateMachine' */
  uint32_T is_LLFK;                /* '<S3>/LowerLimbTaskControlStateMachine' */
  uint32_T is_LLB;                 /* '<S3>/LowerLimbTaskControlStateMachine' */
  uint32_T is_LLW;                 /* '<S3>/LowerLimbTaskControlStateMachine' */
  uint32_T is_c7_TestStructure;        /* '<S3>/KnobStateMachine' */
  uint32_T is_Adjust;                  /* '<S3>/KnobStateMachine' */
  uint32_T is_LLFK_Adjust;             /* '<S3>/KnobStateMachine' */
  uint32_T is_LLFK_Freq_Adjust;        /* '<S3>/KnobStateMachine' */
  uint32_T is_LLFK_Torque_Adjust;      /* '<S3>/KnobStateMachine' */
  uint32_T is_LLFK_Pos_Adjust;         /* '<S3>/KnobStateMachine' */
  uint32_T is_LLB_Adjust;              /* '<S3>/KnobStateMachine' */
  uint32_T is_LLB_Freq_Adjust;         /* '<S3>/KnobStateMachine' */
  uint32_T is_LLB_Torque_Adjust;       /* '<S3>/KnobStateMachine' */
  uint32_T is_LLB_Pos_Adjust;          /* '<S3>/KnobStateMachine' */
  uint32_T is_LLW_Adjust;              /* '<S3>/KnobStateMachine' */
  uint32_T is_LLW_Freq_Adjust;         /* '<S3>/KnobStateMachine' */
  uint32_T is_LLW_Torque_Adjust;       /* '<S3>/KnobStateMachine' */
  uint32_T is_LLW_Pos_Adjust;          /* '<S3>/KnobStateMachine' */
  uint32_T is_c6_TestStructure;        /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_Stop;                    /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_LowerLimb_Follow;        /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_LowerLimb_FlutterKick;   /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_LowerLimb_Breaststroke;  /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_LowerLimb_Walk;          /* '<S3>/ControlPannelStateMachine' */
  uint32_T is_Start;                   /* '<S3>/ControlPannelStateMachine' */
  uint32_T was_Stop;                   /* '<S3>/ControlPannelStateMachine' */
  uint32_T was_LowerLimb_Breaststroke; /* '<S3>/ControlPannelStateMachine' */
  uint32_T was_LowerLimb_FlutterKick;  /* '<S3>/ControlPannelStateMachine' */
  uint32_T was_LowerLimb_Walk;         /* '<S3>/ControlPannelStateMachine' */
  int8_T StopTask_SubsysRanBC;         /* '<S6>/StopTask' */
  int8_T LLWManualTask_SubsysRanBC;    /* '<S6>/LLWManualTask' */
  int8_T DiscreteTimeIntegrator1_PrevResetState;/* '<S116>/Discrete-Time Integrator1' */
  int8_T LLFKManualTask_SubsysRanBC;   /* '<S6>/LLFKManualTask' */
  int8_T LLBManualTask_SubsysRanBC;    /* '<S6>/LLBManualTask' */
  int8_T DiscreteTimeIntegrator1_PrevResetState_o;/* '<S92>/Discrete-Time Integrator1' */
  int8_T LLF_Display_SubsysRanBC;      /* '<S3>/LLF_Display' */
  uint8_T is_active_c9_TestStructure;
                                   /* '<S3>/UpperLimbTaskControlStateMachine' */
  uint8_T is_active_c8_TestStructure;
                                   /* '<S3>/LowerLimbTaskControlStateMachine' */
  uint8_T is_active_c7_TestStructure;  /* '<S3>/KnobStateMachine' */
  uint8_T is_active_c6_TestStructure;  /* '<S3>/ControlPannelStateMachine' */
  boolean_T StopTask_MODE;             /* '<S6>/StopTask' */
  boolean_T LLFKManualTask_MODE;       /* '<S6>/LLFKManualTask' */
  boolean_T LLBManualTask_MODE;        /* '<S6>/LLBManualTask' */
  DW_MedianFilter1_TestStructure_T MedianFilter4;/* '<S2>/Median Filter1' */
  DW_MedianFilter1_TestStructure_T MedianFilter3;/* '<S2>/Median Filter1' */
  DW_MedianFilter1_TestStructure_T MedianFilter2;/* '<S2>/Median Filter1' */
  DW_MedianFilter1_TestStructure_T MedianFilter1;/* '<S2>/Median Filter1' */
  DW_LowpassFilter2_TestStructure_T LowpassFilter5;/* '<S2>/Lowpass Filter2' */
  DW_LowpassFilter2_TestStructure_T LowpassFilter4;/* '<S2>/Lowpass Filter2' */
  DW_LowpassFilter2_TestStructure_T LowpassFilter3;/* '<S2>/Lowpass Filter2' */
  DW_LowpassFilter2_TestStructure_T LowpassFilter2;/* '<S2>/Lowpass Filter2' */
  DW_ULLockTask_TestStructure_T ULUnLockTask;/* '<S6>/ULUnLockTask' */
  DW_ULLockTask_TestStructure_T ULLockTask;/* '<S6>/ULLockTask' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem13_b;/* '<S85>/If Action Subsystem13' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem12_m;/* '<S85>/If Action Subsystem12' */
  DW_IfActionSubsystem8_TestStructure_T IfActionSubsystem11;/* '<S85>/If Action Subsystem11' */
  DW_IfActionSubsystem8_TestStructure_T IfActionSubsystem10;/* '<S85>/If Action Subsystem10' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem9;/* '<S85>/If Action Subsystem9' */
  DW_IfActionSubsystem8_TestStructure_T IfActionSubsystem8;/* '<S85>/If Action Subsystem8' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem7;/* '<S85>/If Action Subsystem7' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem6;/* '<S85>/If Action Subsystem6' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem5;/* '<S85>/If Action Subsystem5' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem4;/* '<S85>/If Action Subsystem4' */
  DW_LLBAutoTask_TestStructure_T PauseTask;/* '<S6>/PauseTask' */
  DW_Chart_TestStructure_T sf_Chart_d; /* '<S116>/Chart' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem13_h;/* '<S83>/If Action Subsystem13' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem12_i;/* '<S83>/If Action Subsystem12' */
  DW_Subsystem3_TestStructure_T Subsystem1_e;/* '<S83>/Subsystem1' */
  DW_Subsystem2_TestStructure_T Subsystem_j;/* '<S83>/Subsystem' */
  DW_Subsystem3_TestStructure_T Subsystem3_l;/* '<S83>/Subsystem3' */
  DW_Subsystem2_TestStructure_T Subsystem2_l;/* '<S83>/Subsystem2' */
  DW_LLBAutoTask_TestStructure_T LLWAutoTask;/* '<S6>/LLWAutoTask' */
  DW_LLBAutoTask_TestStructure_T LLFTask;/* '<S6>/LLFTask' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem13_o;/* '<S80>/If Action Subsystem13' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem12_k;/* '<S80>/If Action Subsystem12' */
  DW_LLBAutoTask_TestStructure_T LLFKAutoTask;/* '<S6>/LLFKAutoTask' */
  DW_Chart_TestStructure_T sf_Chart;   /* '<S92>/Chart' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem13;/* '<S78>/If Action Subsystem13' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem12;/* '<S78>/If Action Subsystem12' */
  DW_Subsystem3_TestStructure_T Subsystem1;/* '<S78>/Subsystem1' */
  DW_Subsystem2_TestStructure_T Subsystem;/* '<S78>/Subsystem' */
  DW_Subsystem3_TestStructure_T Subsystem3;/* '<S78>/Subsystem3' */
  DW_Subsystem2_TestStructure_T Subsystem2;/* '<S78>/Subsystem2' */
  DW_LLBAutoTask_TestStructure_T LLBAutoTask;/* '<S6>/LLBAutoTask' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem1;/* '<S4>/If Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T IfActionSubsystem;/* '<S4>/If Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_h;
                                     /* '<S72>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_d;
                                      /* '<S72>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_n;
                                     /* '<S69>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_ly;
                                      /* '<S69>/Switch Case Action Subsystem' */
  DW_LLB_Dispaly_TestStructure_T LLW_Dispaly;/* '<S3>/LLW_Dispaly' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_d3;
                                     /* '<S66>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_g;
                                      /* '<S66>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_e;
                                     /* '<S63>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_nk;
                                      /* '<S63>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_do;
                                     /* '<S60>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_k;
                                      /* '<S60>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_l;
                                     /* '<S57>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_c;
                                      /* '<S57>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_d;
                                     /* '<S54>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_n;
                                      /* '<S54>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_o;
                                     /* '<S51>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_e;
                                      /* '<S51>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_c;
                                     /* '<S48>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_h;
                                      /* '<S48>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_fa;
                                     /* '<S45>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_b;
                                      /* '<S45>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_ma;
                                     /* '<S42>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_i;
                                      /* '<S42>/Switch Case Action Subsystem' */
  DW_LLB_Dispaly_TestStructure_T LLFK_Display;/* '<S3>/LLFK_Display' */
  DW_LLB_Dispaly_TestStructure_T LLB_Dispaly;/* '<S3>/LLB_Dispaly' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_m;
                                     /* '<S39>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_m;
                                      /* '<S39>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_p;
                                     /* '<S36>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_ld;
                                      /* '<S36>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1_f;
                                     /* '<S33>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem_l;
                                      /* '<S33>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_TestStructure_T SwitchCaseActionSubsystem1;
                                     /* '<S30>/Switch Case Action Subsystem1' */
  DW_SwitchCaseActionSubsystem_TestStructure_T SwitchCaseActionSubsystem;
                                      /* '<S30>/Switch Case Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_TestStructure_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint32_T TID[2];
      uint32_T cLimit[2];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_TestStructure_T TestStructure_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_TestStructure_T TestStructure_DW;
extern void AdvanceTaskCounters(void);

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void TestStructure_initialize(void);
  extern void Periodic_Task_step(void);
  extern void Periodic_Task1_step(void);
  extern void TestStructure_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_TestStructure_T *const TestStructure_M;

#ifdef __cplusplus

}

#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TestStructure'
 * '<S1>'   : 'TestStructure/Control'
 * '<S2>'   : 'TestStructure/SensingAndIntention'
 * '<S3>'   : 'TestStructure/Control/PanelController'
 * '<S4>'   : 'TestStructure/Control/RobotInitState'
 * '<S5>'   : 'TestStructure/Control/RobotStop'
 * '<S6>'   : 'TestStructure/Control/Tasks'
 * '<S7>'   : 'TestStructure/Control/PanelController/ControlPannelStateMachine'
 * '<S8>'   : 'TestStructure/Control/PanelController/Display_State_1_Enable'
 * '<S9>'   : 'TestStructure/Control/PanelController/Display_State_2_Enable'
 * '<S10>'  : 'TestStructure/Control/PanelController/Display_State_3_Enable'
 * '<S11>'  : 'TestStructure/Control/PanelController/Display_State_4_Enable'
 * '<S12>'  : 'TestStructure/Control/PanelController/KnobStateMachine'
 * '<S13>'  : 'TestStructure/Control/PanelController/LLB_Dispaly'
 * '<S14>'  : 'TestStructure/Control/PanelController/LLFK_Display'
 * '<S15>'  : 'TestStructure/Control/PanelController/LLF_Display'
 * '<S16>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_1_Enable'
 * '<S17>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_2_Enable'
 * '<S18>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_3_Enable'
 * '<S19>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_4_Enable'
 * '<S20>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_5_Enable'
 * '<S21>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_6_Enable'
 * '<S22>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_7_Enable'
 * '<S23>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_8_Enable'
 * '<S24>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_9_Enable'
 * '<S25>'  : 'TestStructure/Control/PanelController/LLW_Dispaly'
 * '<S26>'  : 'TestStructure/Control/PanelController/LowerLimbTaskControlStateMachine'
 * '<S27>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_1_Enable'
 * '<S28>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_2_Enable'
 * '<S29>'  : 'TestStructure/Control/PanelController/UpperLimbTaskControlStateMachine'
 * '<S30>'  : 'TestStructure/Control/PanelController/Display_State_1_Enable/Subsystem'
 * '<S31>'  : 'TestStructure/Control/PanelController/Display_State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S32>'  : 'TestStructure/Control/PanelController/Display_State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S33>'  : 'TestStructure/Control/PanelController/Display_State_2_Enable/Subsystem'
 * '<S34>'  : 'TestStructure/Control/PanelController/Display_State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S35>'  : 'TestStructure/Control/PanelController/Display_State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S36>'  : 'TestStructure/Control/PanelController/Display_State_3_Enable/Subsystem'
 * '<S37>'  : 'TestStructure/Control/PanelController/Display_State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S38>'  : 'TestStructure/Control/PanelController/Display_State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S39>'  : 'TestStructure/Control/PanelController/Display_State_4_Enable/Subsystem'
 * '<S40>'  : 'TestStructure/Control/PanelController/Display_State_4_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S41>'  : 'TestStructure/Control/PanelController/Display_State_4_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S42>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_1_Enable/Subsystem'
 * '<S43>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S44>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S45>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_2_Enable/Subsystem'
 * '<S46>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S47>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S48>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_3_Enable/Subsystem'
 * '<S49>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S50>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S51>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_4_Enable/Subsystem'
 * '<S52>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_4_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S53>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_4_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S54>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_5_Enable/Subsystem'
 * '<S55>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_5_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S56>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_5_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S57>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_6_Enable/Subsystem'
 * '<S58>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_6_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S59>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_6_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S60>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_7_Enable/Subsystem'
 * '<S61>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_7_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S62>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_7_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S63>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_8_Enable/Subsystem'
 * '<S64>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_8_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S65>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_8_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S66>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_9_Enable/Subsystem'
 * '<S67>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_9_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S68>'  : 'TestStructure/Control/PanelController/LLTaskControl_State_9_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S69>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_1_Enable/Subsystem'
 * '<S70>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S71>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S72>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_2_Enable/Subsystem'
 * '<S73>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S74>'  : 'TestStructure/Control/PanelController/ULTaskControl_State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S75>'  : 'TestStructure/Control/RobotInitState/If Action Subsystem'
 * '<S76>'  : 'TestStructure/Control/RobotInitState/If Action Subsystem1'
 * '<S77>'  : 'TestStructure/Control/Tasks/LLBAutoTask'
 * '<S78>'  : 'TestStructure/Control/Tasks/LLBManualTask'
 * '<S79>'  : 'TestStructure/Control/Tasks/LLFKAutoTask'
 * '<S80>'  : 'TestStructure/Control/Tasks/LLFKManualTask'
 * '<S81>'  : 'TestStructure/Control/Tasks/LLFTask'
 * '<S82>'  : 'TestStructure/Control/Tasks/LLWAutoTask'
 * '<S83>'  : 'TestStructure/Control/Tasks/LLWManualTask'
 * '<S84>'  : 'TestStructure/Control/Tasks/PauseTask'
 * '<S85>'  : 'TestStructure/Control/Tasks/StopTask'
 * '<S86>'  : 'TestStructure/Control/Tasks/ULLockTask'
 * '<S87>'  : 'TestStructure/Control/Tasks/ULUnLockTask'
 * '<S88>'  : 'TestStructure/Control/Tasks/LLBAutoTask/If Action Subsystem12'
 * '<S89>'  : 'TestStructure/Control/Tasks/LLBAutoTask/If Action Subsystem13'
 * '<S90>'  : 'TestStructure/Control/Tasks/LLBManualTask/If Action Subsystem12'
 * '<S91>'  : 'TestStructure/Control/Tasks/LLBManualTask/If Action Subsystem13'
 * '<S92>'  : 'TestStructure/Control/Tasks/LLBManualTask/RythmModel'
 * '<S93>'  : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem'
 * '<S94>'  : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem1'
 * '<S95>'  : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem2'
 * '<S96>'  : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem3'
 * '<S97>'  : 'TestStructure/Control/Tasks/LLBManualTask/RythmModel/Chart'
 * '<S98>'  : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem/If Action Subsystem4'
 * '<S99>'  : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem/If Action Subsystem5'
 * '<S100>' : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem1/If Action Subsystem1'
 * '<S101>' : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem1/If Action Subsystem2'
 * '<S102>' : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem2/If Action Subsystem4'
 * '<S103>' : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem2/If Action Subsystem5'
 * '<S104>' : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem3/If Action Subsystem1'
 * '<S105>' : 'TestStructure/Control/Tasks/LLBManualTask/Subsystem3/If Action Subsystem2'
 * '<S106>' : 'TestStructure/Control/Tasks/LLFKAutoTask/If Action Subsystem12'
 * '<S107>' : 'TestStructure/Control/Tasks/LLFKAutoTask/If Action Subsystem13'
 * '<S108>' : 'TestStructure/Control/Tasks/LLFKManualTask/If Action Subsystem12'
 * '<S109>' : 'TestStructure/Control/Tasks/LLFKManualTask/If Action Subsystem13'
 * '<S110>' : 'TestStructure/Control/Tasks/LLFTask/If Action Subsystem12'
 * '<S111>' : 'TestStructure/Control/Tasks/LLFTask/If Action Subsystem13'
 * '<S112>' : 'TestStructure/Control/Tasks/LLWAutoTask/If Action Subsystem12'
 * '<S113>' : 'TestStructure/Control/Tasks/LLWAutoTask/If Action Subsystem13'
 * '<S114>' : 'TestStructure/Control/Tasks/LLWManualTask/If Action Subsystem12'
 * '<S115>' : 'TestStructure/Control/Tasks/LLWManualTask/If Action Subsystem13'
 * '<S116>' : 'TestStructure/Control/Tasks/LLWManualTask/RythmModel'
 * '<S117>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem'
 * '<S118>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem1'
 * '<S119>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem2'
 * '<S120>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem3'
 * '<S121>' : 'TestStructure/Control/Tasks/LLWManualTask/RythmModel/Chart'
 * '<S122>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem/If Action Subsystem4'
 * '<S123>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem/If Action Subsystem5'
 * '<S124>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem1/If Action Subsystem1'
 * '<S125>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem1/If Action Subsystem2'
 * '<S126>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem2/If Action Subsystem4'
 * '<S127>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem2/If Action Subsystem5'
 * '<S128>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem3/If Action Subsystem1'
 * '<S129>' : 'TestStructure/Control/Tasks/LLWManualTask/Subsystem3/If Action Subsystem2'
 * '<S130>' : 'TestStructure/Control/Tasks/PauseTask/If Action Subsystem12'
 * '<S131>' : 'TestStructure/Control/Tasks/PauseTask/If Action Subsystem13'
 * '<S132>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem10'
 * '<S133>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem11'
 * '<S134>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem12'
 * '<S135>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem13'
 * '<S136>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem4'
 * '<S137>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem5'
 * '<S138>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem6'
 * '<S139>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem7'
 * '<S140>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem8'
 * '<S141>' : 'TestStructure/Control/Tasks/StopTask/If Action Subsystem9'
 * '<S142>' : 'TestStructure/Control/Tasks/StopTask/MATLAB Function1'
 * '<S143>' : 'TestStructure/Control/Tasks/StopTask/MATLAB Function2'
 * '<S144>' : 'TestStructure/Control/Tasks/StopTask/MATLAB Function3'
 * '<S145>' : 'TestStructure/Control/Tasks/StopTask/MATLAB Function4'
 * '<S146>' : 'TestStructure/Control/Tasks/ULLockTask/If Action Subsystem12'
 * '<S147>' : 'TestStructure/Control/Tasks/ULLockTask/If Action Subsystem13'
 * '<S148>' : 'TestStructure/Control/Tasks/ULUnLockTask/If Action Subsystem12'
 * '<S149>' : 'TestStructure/Control/Tasks/ULUnLockTask/If Action Subsystem13'
 */
#endif                                 /* RTW_HEADER_TestStructure_h_ */

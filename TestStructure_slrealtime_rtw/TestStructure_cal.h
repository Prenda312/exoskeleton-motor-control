#ifndef RTW_HEADER_TestStructure_cal_h_
#define RTW_HEADER_TestStructure_cal_h_
#include "rtwtypes.h"
#include "TestStructure_types.h"

/* Storage class 'PageSwitching', for system '<S6>/LLBAutoTask' */
struct TestStructure_LLBAutoTask_cal_type {
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S77>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S77>/Discrete-Time Integrator'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S77>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S77>/Constant8'
                                        */
  real_T Constant_Value;               /* Expression: 6
                                        * Referenced by: '<S77>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S77>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S77>/Constant2'
                                        */
};

/* Storage class 'PageSwitching', for system '<S78>/Subsystem2' */
struct TestStructure_Subsystem2_cal_type {
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S95>/Constant15'
                                        */
};

/* Storage class 'PageSwitching', for system '<S78>/Subsystem3' */
struct TestStructure_Subsystem3_cal_type {
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S96>/Constant16'
                                        */
};

/* Storage class 'PageSwitching', for system '<S6>/ULLockTask' */
struct TestStructure_ULLockTask_cal_type {
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S86>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S86>/Discrete-Time Integrator'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S86>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S86>/Constant8'
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S86>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S86>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S86>/Constant2'
                                        */
};

/* Storage class 'PageSwitching', for system '<Root>' */
struct TestStructure_cal_type {
  TestStructure_ULLockTask_cal_type TestStructure_ULUnLockTask_cal;/* '<S6>/ULUnLockTask' */
  TestStructure_ULLockTask_cal_type TestStructure_ULLockTask_cal;/* '<S6>/ULLockTask' */
  TestStructure_LLBAutoTask_cal_type TestStructure_PauseTask_cal;/* '<S6>/PauseTask' */
  TestStructure_Subsystem3_cal_type TestStructure_Subsystem1_e_cal;/* '<S83>/Subsystem1' */
  TestStructure_Subsystem2_cal_type TestStructure_Subsystem_j_cal;/* '<S83>/Subsystem' */
  TestStructure_Subsystem3_cal_type TestStructure_Subsystem3_l_cal;/* '<S83>/Subsystem3' */
  TestStructure_Subsystem2_cal_type TestStructure_Subsystem2_l_cal;/* '<S83>/Subsystem2' */
  TestStructure_LLBAutoTask_cal_type TestStructure_LLWAutoTask_cal;/* '<S6>/LLWAutoTask' */
  TestStructure_LLBAutoTask_cal_type TestStructure_LLFTask_cal;/* '<S6>/LLFTask' */
  TestStructure_LLBAutoTask_cal_type TestStructure_LLFKAutoTask_cal;/* '<S6>/LLFKAutoTask' */
  TestStructure_Subsystem3_cal_type TestStructure_Subsystem1_cal;/* '<S78>/Subsystem1' */
  TestStructure_Subsystem2_cal_type TestStructure_Subsystem_cal;/* '<S78>/Subsystem' */
  TestStructure_Subsystem3_cal_type TestStructure_Subsystem3_cal;/* '<S78>/Subsystem3' */
  TestStructure_Subsystem2_cal_type TestStructure_Subsystem2_cal;/* '<S78>/Subsystem2' */
  TestStructure_LLBAutoTask_cal_type TestStructure_LLBAutoTask_cal;/* '<S6>/LLBAutoTask' */
  SensingBus Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S2>/Memory'
                                   */
  real_T uDLookupTable1_bp01Data[7]; /* Expression: [0;0.2;0.35;0.5;0.65;0.85;1]
                                      * Referenced by: '<S78>/1-D Lookup Table1'
                                      */
  real_T uDLookupTable_bp01Data[7];  /* Expression: [0;0.2;0.35;0.5;0.65;0.85;1]
                                      * Referenced by: '<S78>/1-D Lookup Table'
                                      */
  real_T uDLookupTable1_bp01Data_f[7];
                                     /* Expression: [0;0.2;0.35;0.5;0.65;0.85;1]
                                      * Referenced by: '<S83>/1-D Lookup Table1'
                                      */
  real_T uDLookupTable_bp01Data_a[7];/* Expression: [0;0.2;0.35;0.5;0.65;0.85;1]
                                      * Referenced by: '<S83>/1-D Lookup Table'
                                      */
  real_T PanelController_LLB_Freq_init;
                                /* Mask Parameter: PanelController_LLB_Freq_init
                                 * Referenced by: '<S3>/LLB_Freq'
                                 */
  real_T PanelController_LLB_Pos_Down_init;
                            /* Mask Parameter: PanelController_LLB_Pos_Down_init
                             * Referenced by: '<S3>/LLB_Pos_Down'
                             */
  real_T PanelController_LLB_Pos_Up_init;
                              /* Mask Parameter: PanelController_LLB_Pos_Up_init
                               * Referenced by: '<S3>/LLB_Pos_Up'
                               */
  real_T PanelController_LLB_Torque_Down_init;
                         /* Mask Parameter: PanelController_LLB_Torque_Down_init
                          * Referenced by: '<S3>/LLB_Torque_Down'
                          */
  real_T PanelController_LLB_Torque_Up_init;
                           /* Mask Parameter: PanelController_LLB_Torque_Up_init
                            * Referenced by: '<S3>/LLB_Torque_Up'
                            */
  real_T PanelController_LLFK_Freq_init;
                               /* Mask Parameter: PanelController_LLFK_Freq_init
                                * Referenced by: '<S3>/LLFK_Freq'
                                */
  real_T PanelController_LLFK_Pos_Down_init;
                           /* Mask Parameter: PanelController_LLFK_Pos_Down_init
                            * Referenced by: '<S3>/LLFK_Pos_Down'
                            */
  real_T PanelController_LLFK_Pos_Up_init;
                             /* Mask Parameter: PanelController_LLFK_Pos_Up_init
                              * Referenced by: '<S3>/LLFK_Pos_Up'
                              */
  real_T PanelController_LLFK_Torque_Down_init;
                        /* Mask Parameter: PanelController_LLFK_Torque_Down_init
                         * Referenced by: '<S3>/LLFK_Torque_Down'
                         */
  real_T PanelController_LLFK_Torque_Up_init;
                          /* Mask Parameter: PanelController_LLFK_Torque_Up_init
                           * Referenced by: '<S3>/LLFK_Torque_Up'
                           */
  real_T PanelController_LLW_Freq_init;
                                /* Mask Parameter: PanelController_LLW_Freq_init
                                 * Referenced by: '<S3>/LLW_Freq'
                                 */
  real_T PanelController_LLW_Pos_Down_init;
                            /* Mask Parameter: PanelController_LLW_Pos_Down_init
                             * Referenced by: '<S3>/LLW_Pos_Down'
                             */
  real_T PanelController_LLW_Pos_Up_init;
                              /* Mask Parameter: PanelController_LLW_Pos_Up_init
                               * Referenced by: '<S3>/LLW_Pos_Up'
                               */
  real_T PanelController_LLW_Torque_Down_init;
                         /* Mask Parameter: PanelController_LLW_Torque_Down_init
                          * Referenced by: '<S3>/LLW_Torque_Down'
                          */
  real_T PanelController_LLW_Torque_Up_init;
                           /* Mask Parameter: PanelController_LLW_Torque_Up_init
                            * Referenced by: '<S3>/LLW_Torque_Up'
                            */
  real_T Constant10_ParamForce;        /* Mask Parameter: Constant10_ParamForce
                                        * Referenced by: '<S2>/Constant10'
                                        */
  real_T Constant9_ParamPosition;     /* Mask Parameter: Constant9_ParamPosition
                                       * Referenced by: '<S2>/Constant9'
                                       */
  real_T PulseGenerator_T;             /* Mask Parameter: PulseGenerator_T
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T Display_State_1_Enable_TaskIndex;
                             /* Mask Parameter: Display_State_1_Enable_TaskIndex
                              * Referenced by: '<S30>/Constant2'
                              */
  real_T Display_State_2_Enable_TaskIndex;
                             /* Mask Parameter: Display_State_2_Enable_TaskIndex
                              * Referenced by: '<S33>/Constant2'
                              */
  real_T Display_State_3_Enable_TaskIndex;
                             /* Mask Parameter: Display_State_3_Enable_TaskIndex
                              * Referenced by: '<S36>/Constant2'
                              */
  real_T Display_State_4_Enable_TaskIndex;
                             /* Mask Parameter: Display_State_4_Enable_TaskIndex
                              * Referenced by: '<S39>/Constant2'
                              */
  real_T LLTaskControl_State_1_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_1_Enable_TaskIndex
                        * Referenced by: '<S42>/Constant2'
                        */
  real_T LLTaskControl_State_2_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_2_Enable_TaskIndex
                        * Referenced by: '<S45>/Constant2'
                        */
  real_T LLTaskControl_State_3_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_3_Enable_TaskIndex
                        * Referenced by: '<S48>/Constant2'
                        */
  real_T LLTaskControl_State_4_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_4_Enable_TaskIndex
                        * Referenced by: '<S51>/Constant2'
                        */
  real_T LLTaskControl_State_5_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_5_Enable_TaskIndex
                        * Referenced by: '<S54>/Constant2'
                        */
  real_T LLTaskControl_State_6_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_6_Enable_TaskIndex
                        * Referenced by: '<S57>/Constant2'
                        */
  real_T LLTaskControl_State_7_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_7_Enable_TaskIndex
                        * Referenced by: '<S60>/Constant2'
                        */
  real_T LLTaskControl_State_8_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_8_Enable_TaskIndex
                        * Referenced by: '<S63>/Constant2'
                        */
  real_T LLTaskControl_State_9_Enable_TaskIndex;
                       /* Mask Parameter: LLTaskControl_State_9_Enable_TaskIndex
                        * Referenced by: '<S66>/Constant2'
                        */
  real_T ULTaskControl_State_1_Enable_TaskIndex;
                       /* Mask Parameter: ULTaskControl_State_1_Enable_TaskIndex
                        * Referenced by: '<S69>/Constant2'
                        */
  real_T ULTaskControl_State_2_Enable_TaskIndex;
                       /* Mask Parameter: ULTaskControl_State_2_Enable_TaskIndex
                        * Referenced by: '<S72>/Constant2'
                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S15>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S15>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S15>/Constant4'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S78>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S78>/Discrete-Time Integrator'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S78>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S78>/Constant8'
                                        */
  real_T Constant_Value_e;             /* Expression: 5
                                        * Referenced by: '<S78>/Constant'
                                        */
  real_T Memory_InitialCondition_b;    /* Expression: 0
                                        * Referenced by: '<S92>/Memory'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S92>/Discrete-Time Integrator1'
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S92>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator1_UpperSat;/* Expression: 1
                                           * Referenced by: '<S92>/Discrete-Time Integrator1'
                                           */
  real_T DiscreteTimeIntegrator1_LowerSat;/* Expression: 0
                                           * Referenced by: '<S92>/Discrete-Time Integrator1'
                                           */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S78>/Constant10'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S78>/Gain'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S78>/Constant12'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S78>/Constant14'
                                        */
  real_T Constant3_Value_n;            /* Expression: 0
                                        * Referenced by: '<S78>/Constant3'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S78>/Constant5'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S78>/Constant9'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S78>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S78>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S78>/Gain3'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S78>/Constant1'
                                        */
  real_T Constant11_Value;             /* Expression: -0.2
                                        * Referenced by: '<S78>/Constant11'
                                        */
  real_T Constant13_Value;             /* Expression: 0.2
                                        * Referenced by: '<S78>/Constant13'
                                        */
  real_T Constant2_Value_i;            /* Expression: 0
                                        * Referenced by: '<S78>/Constant2'
                                        */
  real_T Constant4_Value_f;            /* Expression: 0.2
                                        * Referenced by: '<S78>/Constant4'
                                        */
  real_T Constant6_Value;              /* Expression: -0.2
                                        * Referenced by: '<S78>/Constant6'
                                        */
  real_T DiscreteTimeIntegrator_gainval_j;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_j
                          * Referenced by: '<S80>/Discrete-Time Integrator'
                          */
  real_T DiscreteTimeIntegrator_IC_b;  /* Expression: 0
                                        * Referenced by: '<S80>/Discrete-Time Integrator'
                                        */
  real_T Constant7_Value_h;            /* Expression: 0
                                        * Referenced by: '<S80>/Constant7'
                                        */
  real_T Constant8_Value_m;            /* Expression: 1
                                        * Referenced by: '<S80>/Constant8'
                                        */
  real_T Constant_Value_p;             /* Expression: 3
                                        * Referenced by: '<S80>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: 0
                                        * Referenced by: '<S80>/Constant1'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S80>/Constant2'
                                        */
  real_T DiscreteTimeIntegrator_gainval_i;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_i
                          * Referenced by: '<S83>/Discrete-Time Integrator'
                          */
  real_T DiscreteTimeIntegrator_IC_a;  /* Expression: 0
                                        * Referenced by: '<S83>/Discrete-Time Integrator'
                                        */
  real_T Constant7_Value_a;            /* Expression: 0
                                        * Referenced by: '<S83>/Constant7'
                                        */
  real_T Constant8_Value_o;            /* Expression: 1
                                        * Referenced by: '<S83>/Constant8'
                                        */
  real_T Constant_Value_c;             /* Expression: 7
                                        * Referenced by: '<S83>/Constant'
                                        */
  real_T Memory_InitialCondition_f;    /* Expression: 0
                                        * Referenced by: '<S116>/Memory'
                                        */
  real_T DiscreteTimeIntegrator1_gainval_n;
                        /* Computed Parameter: DiscreteTimeIntegrator1_gainval_n
                         * Referenced by: '<S116>/Discrete-Time Integrator1'
                         */
  real_T DiscreteTimeIntegrator1_IC_i; /* Expression: 0
                                        * Referenced by: '<S116>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator1_UpperSat_l;/* Expression: 1
                                             * Referenced by: '<S116>/Discrete-Time Integrator1'
                                             */
  real_T DiscreteTimeIntegrator1_LowerSat_o;/* Expression: 0
                                             * Referenced by: '<S116>/Discrete-Time Integrator1'
                                             */
  real_T Constant10_Value_a;           /* Expression: 0
                                        * Referenced by: '<S83>/Constant10'
                                        */
  real_T Constant12_Value_g;           /* Expression: 0
                                        * Referenced by: '<S83>/Constant12'
                                        */
  real_T Gain_Gain_m;                  /* Expression: -1
                                        * Referenced by: '<S83>/Gain'
                                        */
  real_T Constant14_Value_o;           /* Expression: 0
                                        * Referenced by: '<S83>/Constant14'
                                        */
  real_T Constant3_Value_nz;           /* Expression: 0
                                        * Referenced by: '<S83>/Constant3'
                                        */
  real_T Constant5_Value_d;            /* Expression: 0
                                        * Referenced by: '<S83>/Constant5'
                                        */
  real_T Constant9_Value_d;            /* Expression: 0
                                        * Referenced by: '<S83>/Constant9'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: -1
                                        * Referenced by: '<S83>/Gain1'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: -1
                                        * Referenced by: '<S83>/Gain2'
                                        */
  real_T Gain3_Gain_g;                 /* Expression: -1
                                        * Referenced by: '<S83>/Gain3'
                                        */
  real_T Constant1_Value_fn;           /* Expression: 0
                                        * Referenced by: '<S83>/Constant1'
                                        */
  real_T Constant11_Value_c;           /* Expression: -0.2
                                        * Referenced by: '<S83>/Constant11'
                                        */
  real_T Constant13_Value_i;           /* Expression: 0.2
                                        * Referenced by: '<S83>/Constant13'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0
                                        * Referenced by: '<S83>/Constant2'
                                        */
  real_T Constant4_Value_p;            /* Expression: 0.2
                                        * Referenced by: '<S83>/Constant4'
                                        */
  real_T Constant6_Value_o;            /* Expression: -0.2
                                        * Referenced by: '<S83>/Constant6'
                                        */
  real_T DiscreteTimeIntegrator_gainval_a;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_a
                          * Referenced by: '<S85>/Discrete-Time Integrator'
                          */
  real_T DiscreteTimeIntegrator_IC_f;  /* Expression: 0
                                        * Referenced by: '<S85>/Discrete-Time Integrator'
                                        */
  real_T Constant7_Value_k;            /* Expression: 0
                                        * Referenced by: '<S85>/Constant7'
                                        */
  real_T Constant8_Value_l;            /* Expression: 1
                                        * Referenced by: '<S85>/Constant8'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S85>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 6
                                        * Referenced by: '<S85>/Constant1'
                                        */
  real_T Constant3_Value_e;            /* Expression: 0
                                        * Referenced by: '<S85>/Constant3'
                                        */
  real_T Constant4_Value_i;            /* Expression: -6
                                        * Referenced by: '<S85>/Constant4'
                                        */
  real_T Constant5_Value_l;            /* Expression: 4
                                        * Referenced by: '<S85>/Constant5'
                                        */
  real_T Constant6_Value_f;            /* Expression: -4
                                        * Referenced by: '<S85>/Constant6'
                                        */
  real_T Constant2_Value_a;            /* Expression: 1
                                        * Referenced by: '<S85>/Constant2'
                                        */
  real_T LLFK_Freq_gainval;            /* Computed Parameter: LLFK_Freq_gainval
                                        * Referenced by: '<S3>/LLFK_Freq'
                                        */
  real_T LLFK_Freq_UpperSat;           /* Expression: 2.5
                                        * Referenced by: '<S3>/LLFK_Freq'
                                        */
  real_T LLFK_Freq_LowerSat;           /* Expression: 0.3
                                        * Referenced by: '<S3>/LLFK_Freq'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S3>/Memory1'
                                        */
  real_T StopButton_Value;             /* Expression: 0
                                        * Referenced by: '<S3>/StopButton'
                                        */
  real_T PauseStartButton_Value;       /* Expression: 0
                                        * Referenced by: '<S3>/Pause//StartButton'
                                        */
  real_T PatternButton_Value;          /* Expression: 0
                                        * Referenced by: '<S3>/PatternButton'
                                        */
  real_T ManualAutoButton_Value;       /* Expression: 0
                                        * Referenced by: '<S3>/Manual//AutoButton'
                                        */
  real_T UnlockLockButton_Value;       /* Expression: 0
                                        * Referenced by: '<S3>/Unlock//LockButton'
                                        */
  real_T LLB_Torque_Up_gainval;     /* Computed Parameter: LLB_Torque_Up_gainval
                                     * Referenced by: '<S3>/LLB_Torque_Up'
                                     */
  real_T LLB_Torque_Up_UpperSat;       /* Expression: 10
                                        * Referenced by: '<S3>/LLB_Torque_Up'
                                        */
  real_T LLB_Torque_Up_LowerSat;       /* Expression: 0
                                        * Referenced by: '<S3>/LLB_Torque_Up'
                                        */
  real_T LLB_Torque_Down_gainval; /* Computed Parameter: LLB_Torque_Down_gainval
                                   * Referenced by: '<S3>/LLB_Torque_Down'
                                   */
  real_T LLB_Torque_Down_UpperSat;     /* Expression: 10
                                        * Referenced by: '<S3>/LLB_Torque_Down'
                                        */
  real_T LLB_Torque_Down_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S3>/LLB_Torque_Down'
                                        */
  real_T LLB_Pos_Up_gainval;           /* Computed Parameter: LLB_Pos_Up_gainval
                                        * Referenced by: '<S3>/LLB_Pos_Up'
                                        */
  real_T LLB_Pos_Up_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S3>/LLB_Pos_Up'
                                        */
  real_T LLB_Pos_Up_LowerSat;          /* Expression: 10
                                        * Referenced by: '<S3>/LLB_Pos_Up'
                                        */
  real_T LLB_Pos_Down_gainval;       /* Computed Parameter: LLB_Pos_Down_gainval
                                      * Referenced by: '<S3>/LLB_Pos_Down'
                                      */
  real_T LLB_Pos_Down_UpperSat;        /* Expression: 140
                                        * Referenced by: '<S3>/LLB_Pos_Down'
                                        */
  real_T LLB_Pos_Down_LowerSat;        /* Expression: 5
                                        * Referenced by: '<S3>/LLB_Pos_Down'
                                        */
  real_T LLW_Freq_gainval;             /* Computed Parameter: LLW_Freq_gainval
                                        * Referenced by: '<S3>/LLW_Freq'
                                        */
  real_T LLW_Freq_UpperSat;            /* Expression: 2.5
                                        * Referenced by: '<S3>/LLW_Freq'
                                        */
  real_T LLW_Freq_LowerSat;            /* Expression: 0.3
                                        * Referenced by: '<S3>/LLW_Freq'
                                        */
  real_T LLW_Torque_Up_gainval;     /* Computed Parameter: LLW_Torque_Up_gainval
                                     * Referenced by: '<S3>/LLW_Torque_Up'
                                     */
  real_T LLW_Torque_Up_UpperSat;       /* Expression: 10
                                        * Referenced by: '<S3>/LLW_Torque_Up'
                                        */
  real_T LLW_Torque_Up_LowerSat;       /* Expression: 0
                                        * Referenced by: '<S3>/LLW_Torque_Up'
                                        */
  real_T LLW_Torque_Down_gainval; /* Computed Parameter: LLW_Torque_Down_gainval
                                   * Referenced by: '<S3>/LLW_Torque_Down'
                                   */
  real_T LLW_Torque_Down_UpperSat;     /* Expression: 10
                                        * Referenced by: '<S3>/LLW_Torque_Down'
                                        */
  real_T LLW_Torque_Down_LowerSat;     /* Expression: 0
                                        * Referenced by: '<S3>/LLW_Torque_Down'
                                        */
  real_T LLW_Pos_Up_gainval;           /* Computed Parameter: LLW_Pos_Up_gainval
                                        * Referenced by: '<S3>/LLW_Pos_Up'
                                        */
  real_T LLW_Pos_Up_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S3>/LLW_Pos_Up'
                                        */
  real_T LLW_Pos_Up_LowerSat;          /* Expression: 10
                                        * Referenced by: '<S3>/LLW_Pos_Up'
                                        */
  real_T LLW_Pos_Down_gainval;       /* Computed Parameter: LLW_Pos_Down_gainval
                                      * Referenced by: '<S3>/LLW_Pos_Down'
                                      */
  real_T LLW_Pos_Down_UpperSat;        /* Expression: 140
                                        * Referenced by: '<S3>/LLW_Pos_Down'
                                        */
  real_T LLW_Pos_Down_LowerSat;        /* Expression: 5
                                        * Referenced by: '<S3>/LLW_Pos_Down'
                                        */
  real_T Freq_Up_Value;                /* Expression: 0
                                        * Referenced by: '<S3>/Freq_Up'
                                        */
  real_T Freq_Down_Value;              /* Expression: 0
                                        * Referenced by: '<S3>/Freq_Down'
                                        */
  real_T Positive_Up_Value;            /* Expression: 0
                                        * Referenced by: '<S3>/Positive_Up'
                                        */
  real_T Positive_Down_Value;          /* Expression: 0
                                        * Referenced by: '<S3>/Positive_Down'
                                        */
  real_T Negtive_Up_Value;             /* Expression: 0
                                        * Referenced by: '<S3>/Negtive_Up'
                                        */
  real_T Negtive_Down_Value;           /* Expression: 0
                                        * Referenced by: '<S3>/Negtive_Down'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T LLFK_Torque_Up_gainval;   /* Computed Parameter: LLFK_Torque_Up_gainval
                                    * Referenced by: '<S3>/LLFK_Torque_Up'
                                    */
  real_T LLFK_Torque_Up_UpperSat;      /* Expression: 10
                                        * Referenced by: '<S3>/LLFK_Torque_Up'
                                        */
  real_T LLFK_Torque_Up_LowerSat;      /* Expression: 0
                                        * Referenced by: '<S3>/LLFK_Torque_Up'
                                        */
  real_T LLFK_Torque_Down_gainval;
                                 /* Computed Parameter: LLFK_Torque_Down_gainval
                                  * Referenced by: '<S3>/LLFK_Torque_Down'
                                  */
  real_T LLFK_Torque_Down_UpperSat;    /* Expression: 10
                                        * Referenced by: '<S3>/LLFK_Torque_Down'
                                        */
  real_T LLFK_Torque_Down_LowerSat;    /* Expression: 0
                                        * Referenced by: '<S3>/LLFK_Torque_Down'
                                        */
  real_T LLFK_Pos_Up_gainval;         /* Computed Parameter: LLFK_Pos_Up_gainval
                                       * Referenced by: '<S3>/LLFK_Pos_Up'
                                       */
  real_T LLFK_Pos_Up_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S3>/LLFK_Pos_Up'
                                        */
  real_T LLFK_Pos_Up_LowerSat;         /* Expression: 10
                                        * Referenced by: '<S3>/LLFK_Pos_Up'
                                        */
  real_T LLFK_Pos_Down_gainval;     /* Computed Parameter: LLFK_Pos_Down_gainval
                                     * Referenced by: '<S3>/LLFK_Pos_Down'
                                     */
  real_T LLFK_Pos_Down_UpperSat;       /* Expression: 140
                                        * Referenced by: '<S3>/LLFK_Pos_Down'
                                        */
  real_T LLFK_Pos_Down_LowerSat;       /* Expression: 5
                                        * Referenced by: '<S3>/LLFK_Pos_Down'
                                        */
  real_T Constant1_Value_in;           /* Expression: 0
                                        * Referenced by: '<S33>/Constant1'
                                        */
  real_T Constant_Value_k;             /* Expression: 1
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T LLB_Freq_gainval;             /* Computed Parameter: LLB_Freq_gainval
                                        * Referenced by: '<S3>/LLB_Freq'
                                        */
  real_T LLB_Freq_UpperSat;            /* Expression: 2.5
                                        * Referenced by: '<S3>/LLB_Freq'
                                        */
  real_T LLB_Freq_LowerSat;            /* Expression: 0.3
                                        * Referenced by: '<S3>/LLB_Freq'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S36>/Constant1'
                                        */
  real_T Constant_Value_ci;            /* Expression: 1
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T Constant_Value_pk;            /* Expression: 1
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S3>/Merge1'
                                      */
  real_T Merge2_InitialOutput;       /* Computed Parameter: Merge2_InitialOutput
                                      * Referenced by: '<S3>/Merge2'
                                      */
  real_T Merge3_InitialOutput;       /* Computed Parameter: Merge3_InitialOutput
                                      * Referenced by: '<S3>/Merge3'
                                      */
  real_T Merge4_InitialOutput;       /* Computed Parameter: Merge4_InitialOutput
                                      * Referenced by: '<S3>/Merge4'
                                      */
  real_T Merge5_InitialOutput;       /* Computed Parameter: Merge5_InitialOutput
                                      * Referenced by: '<S3>/Merge5'
                                      */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S3>/Delay'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S42>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S42>/Constant1'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S45>/Constant1'
                                        */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Constant1_Value_cj;           /* Expression: 0
                                        * Referenced by: '<S48>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T Constant1_Value_ea;           /* Expression: 0
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T Constant_Value_pa;            /* Expression: 1
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T Constant1_Value_el;           /* Expression: 0
                                        * Referenced by: '<S54>/Constant1'
                                        */
  real_T Constant_Value_ho;            /* Expression: 1
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T Constant1_Value_ft;           /* Expression: 0
                                        * Referenced by: '<S57>/Constant1'
                                        */
  real_T Constant_Value_cr;            /* Expression: 1
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T Constant1_Value_ly;           /* Expression: 0
                                        * Referenced by: '<S60>/Constant1'
                                        */
  real_T Constant_Value_db;            /* Expression: 1
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T Constant1_Value_eg;           /* Expression: 0
                                        * Referenced by: '<S63>/Constant1'
                                        */
  real_T Constant_Value_k0;            /* Expression: 1
                                        * Referenced by: '<S66>/Constant'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S66>/Constant1'
                                        */
  real_T Memory_InitialCondition_k;    /* Expression: 0
                                        * Referenced by: '<S3>/Memory'
                                        */
  real_T Merge6_InitialOutput;       /* Computed Parameter: Merge6_InitialOutput
                                      * Referenced by: '<S3>/Merge6'
                                      */
  real_T Constant1_Value_lx;           /* Expression: 0
                                        * Referenced by: '<S69>/Constant1'
                                        */
  real_T Constant_Value_nb;            /* Expression: 1
                                        * Referenced by: '<S69>/Constant'
                                        */
  real_T Constant1_Value_d3;           /* Expression: 0
                                        * Referenced by: '<S72>/Constant1'
                                        */
  real_T Constant_Value_ef;            /* Expression: 1
                                        * Referenced by: '<S72>/Constant'
                                        */
  real_T Merge7_InitialOutput;       /* Computed Parameter: Merge7_InitialOutput
                                      * Referenced by: '<S3>/Merge7'
                                      */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S6>/Merge'
                                       */
  real_T Merge1_InitialOutput_c;   /* Computed Parameter: Merge1_InitialOutput_c
                                    * Referenced by: '<S6>/Merge1'
                                    */
  real_T Merge3_InitialOutput_m;   /* Computed Parameter: Merge3_InitialOutput_m
                                    * Referenced by: '<S6>/Merge3'
                                    */
  real_T Merge4_InitialOutput_p;   /* Computed Parameter: Merge4_InitialOutput_p
                                    * Referenced by: '<S6>/Merge4'
                                    */
  real_T Constant_Value_cl;            /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant1_Value_g;            /* Expression: 1
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant_Value_d2;            /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 62
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: round(0.5*T)
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: round(0.5*T)
                                        * Referenced by: '<S2>/Pulse Generator'
                                        */
  real_T Bias_Bias;                    /* Expression: -31
                                        * Referenced by: '<S2>/Bias'
                                        */
  real_T Constant11_Value_j;           /* Expression: 1
                                        * Referenced by: '<S2>/Constant11'
                                        */
  real_T Constant2_Value_i2;           /* Expression: 200
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant1_Value_ia;           /* Expression: 250
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant_Value_o;             /* Expression: round(Param)
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant4_Value_g;            /* Expression: 0
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T Constant5_Value_c;            /* Expression: 30
                                        * Referenced by: '<S2>/Constant5'
                                        */
  real_T Constant6_Value_c;            /* Expression: 40
                                        * Referenced by: '<S2>/Constant6'
                                        */
  real_T Constant7_Value_j;            /* Expression: -30
                                        * Referenced by: '<S2>/Constant7'
                                        */
  real_T Constant8_Value_h;            /* Expression: -10
                                        * Referenced by: '<S2>/Constant8'
                                        */
  real_T Memory1_InitialCondition_o;   /* Expression: 0
                                        * Referenced by: '<S2>/Memory1'
                                        */
};

/* Storage class 'PageSwitching' */
extern TestStructure_cal_type TestStructure_cal_impl;
extern TestStructure_cal_type *TestStructure_cal;

#endif                                 /* RTW_HEADER_TestStructure_cal_h_ */

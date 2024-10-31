/*
 * Robot.h
 *
 * Code generation for model "Robot".
 *
 * Model version              : 1.96
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Wed Jan 10 16:25:31 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Robot_h_
#define RTW_HEADER_Robot_h_
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "stddef.h"
#include "stdlib.h"
#include "string"
#include "Logger.hpp"
#include "slecatutils.h"
#include "sl_types_def.h"
#include "StartCallbackAPI.h"
#include "sysran_types.h"
#include "Robot_types.h"
#include "Robot_cal.h"

extern "C"
{

#include "rtGetInf.h"

}

#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
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

/* Block signals for system '<S2>/Chart' */
struct B_Chart_Robot_T {
  real_T State;                        /* '<S2>/Chart' */
  real_T TaskFinished;                 /* '<S2>/Chart' */
};

/* Block states (default storage) for system '<S2>/Chart' */
struct DW_Chart_Robot_T {
  int32_T sfEvent;                     /* '<S2>/Chart' */
  uint32_T is_c1_Robot;                /* '<S2>/Chart' */
  uint8_T is_active_c1_Robot;          /* '<S2>/Chart' */
};

/* Block signals for system '<S13>/If Action Subsystem7' */
struct B_IfActionSubsystem7_Robot_T {
  real_T DiscreteTimeIntegrator;       /* '<S29>/Discrete-Time Integrator' */
};

/* Block states (default storage) for system '<S13>/If Action Subsystem7' */
struct DW_IfActionSubsystem7_Robot_T {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S29>/Discrete-Time Integrator' */
  int8_T IfActionSubsystem7_SubsysRanBC;/* '<S13>/If Action Subsystem7' */
};

/* Block states (default storage) for system '<S13>/If Action Subsystem5' */
struct DW_IfActionSubsystem5_Robot_T {
  int8_T IfActionSubsystem5_SubsysRanBC;/* '<S13>/If Action Subsystem5' */
};

/* Block states (default storage) for system '<S14>/If Action Subsystem' */
struct DW_IfActionSubsystem_Robot_T {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S14>/If Action Subsystem' */
};

/* Block states (default storage) for system '<S55>/Switch Case Action Subsystem1' */
struct DW_SwitchCaseActionSubsystem1_Robot_T {
  int8_T SwitchCaseActionSubsystem1_SubsysRanBC;
                                     /* '<S55>/Switch Case Action Subsystem1' */
};

/* Block signals (default storage) */
struct B_Robot_T {
  SensingBus BusCreator;               /* '<Root>/Bus Creator' */
  int64_T Gain2;                       /* '<S299>/Gain2' */
  int64_T Gain3;                       /* '<S303>/Gain3' */
  int64_T Gain4;                       /* '<S301>/Gain4' */
  int64_T Gain6;                       /* '<S298>/Gain6' */
  int64_T Gain5;                       /* '<S304>/Gain5' */
  int64_T Gain6_m;                     /* '<S302>/Gain6' */
  real_T Gain1;                        /* '<S295>/Gain1' */
  real_T Constant2;                    /* '<S280>/Constant2' */
  real_T Memory1;                      /* '<Root>/Memory1' */
  real_T Merge;                        /* '<S280>/Merge' */
  real_T Divide2;                      /* '<S295>/Divide2' */
  real_T Gain1_p;                      /* '<S297>/Gain1' */
  real_T Constant2_a;                  /* '<S283>/Constant2' */
  real_T Merge_i;                      /* '<S283>/Merge' */
  real_T Divide2_i;                    /* '<S297>/Divide2' */
  real_T Gain1_e;                      /* '<S300>/Gain1' */
  real_T Constant2_f;                  /* '<S286>/Constant2' */
  real_T Merge_a;                      /* '<S286>/Merge' */
  real_T Divide2_c;                    /* '<S300>/Divide2' */
  real_T Gain1_g;                      /* '<S296>/Gain1' */
  real_T Constant2_i;                  /* '<S289>/Constant2' */
  real_T Merge_e;                      /* '<S289>/Merge' */
  real_T Divide2_l;                    /* '<S296>/Divide2' */
  real_T Merge_eh;                     /* '<S292>/Merge' */
  real_T DataTypeConversion6;          /* '<S301>/Data Type Conversion6' */
  real_T DataTypeConversion7;          /* '<S298>/Data Type Conversion7' */
  real_T DataTypeConversion4;          /* '<S299>/Data Type Conversion4' */
  real_T Motor1DCLinkCircuitVoltage;   /* '<S11>/Data Type Conversion8' */
  real_T DataTypeConversion9;          /* '<S304>/Data Type Conversion9' */
  real_T DataTypeConversion7_k;        /* '<S302>/Data Type Conversion7' */
  real_T DataTypeConversion5;          /* '<S303>/Data Type Conversion5' */
  real_T Motor2DCLinkCircuitVoltage;   /* '<S11>/Data Type Conversion11' */
  real_T DataTypeConversion12;         /* '<S306>/Data Type Conversion12' */
  real_T DataTypeConversion12_i;       /* '<S307>/Data Type Conversion12' */
  real_T Sensor1IMUq0;                 /* '<S11>/Data Type Conversion14' */
  real_T Sensor1IMUq1;                 /* '<S11>/Data Type Conversion15' */
  real_T Sensor1IMUq2;                 /* '<S11>/Data Type Conversion16' */
  real_T Sensor1IMUq3;                 /* '<S11>/Data Type Conversion17' */
  real_T Sensor2ADCh1;                 /* '<S11>/Data Type Conversion18' */
  real_T Sensor2ADCh2;                 /* '<S11>/Data Type Conversion19' */
  real_T Sensor2IMUq0;                 /* '<S11>/Data Type Conversion20' */
  real_T Sensor2IMUq1;                 /* '<S11>/Data Type Conversion21' */
  real_T Sensor2IMUq2;                 /* '<S11>/Data Type Conversion22' */
  real_T Sensor2IMUq3;                 /* '<S11>/Data Type Conversion23' */
  real_T DataTypeConversion12_c;       /* '<S308>/Data Type Conversion12' */
  real_T DataTypeConversion12_cg;      /* '<S309>/Data Type Conversion12' */
  real_T Sensor3IMUq0;                 /* '<S11>/Data Type Conversion26' */
  real_T Sensor3IMUq1;                 /* '<S11>/Data Type Conversion27' */
  real_T Sensor3IMUq2;                 /* '<S11>/Data Type Conversion28' */
  real_T Sensor3IMUq3;                 /* '<S11>/Data Type Conversion29' */
  real_T Merge1;                       /* '<Root>/Merge1' */
  real_T Constant2_e;                  /* '<S292>/Constant2' */
  real_T Memory1_j;                    /* '<S5>/Memory1' */
  real_T Merge_iu;                     /* '<S262>/Merge' */
  real_T Merge_g;                      /* '<S268>/Merge' */
  real_T Merge_d;                      /* '<S271>/Merge' */
  real_T Merge_g2;                     /* '<S274>/Merge' */
  real_T Merge_f;                      /* '<S256>/Merge' */
  real_T Merge_n;                      /* '<S259>/Merge' */
  real_T Merge_j;                      /* '<S265>/Merge' */
  real_T Merge1_g;                     /* '<S5>/Merge1' */
  real_T Merge_m;                      /* '<S277>/Merge' */
  real_T Constant2_c;                  /* '<S277>/Constant2' */
  real_T Clock;                        /* '<S219>/Clock' */
  real_T Clock_o;                      /* '<S218>/Clock' */
  real_T Clock_f;                      /* '<S217>/Clock' */
  real_T Clock_b;                      /* '<S216>/Clock' */
  real_T Clock_d;                      /* '<S215>/Clock' */
  real_T Clock_k;                      /* '<S214>/Clock' */
  real_T Clock_kz;                     /* '<S213>/Clock' */
  real_T Memory1_a;                    /* '<S4>/Memory1' */
  real_T Merge_eb;                     /* '<S194>/Merge' */
  real_T Merge_o;                      /* '<S200>/Merge' */
  real_T Merge_ev;                     /* '<S203>/Merge' */
  real_T Merge_p;                      /* '<S206>/Merge' */
  real_T Merge_di;                     /* '<S188>/Merge' */
  real_T Merge_ne;                     /* '<S191>/Merge' */
  real_T Merge_g5;                     /* '<S197>/Merge' */
  real_T Merge1_p;                     /* '<S4>/Merge1' */
  real_T Merge_b;                      /* '<S209>/Merge' */
  real_T Constant2_iq;                 /* '<S209>/Constant2' */
  real_T Clock_n;                      /* '<S151>/Clock' */
  real_T Clock_g;                      /* '<S150>/Clock' */
  real_T Clock_bp;                     /* '<S149>/Clock' */
  real_T Clock_m;                      /* '<S148>/Clock' */
  real_T Clock_oe;                     /* '<S147>/Clock' */
  real_T Clock_j;                      /* '<S146>/Clock' */
  real_T Clock_e;                      /* '<S145>/Clock' */
  real_T Memory1_k;                    /* '<S3>/Memory1' */
  real_T Merge_h;                      /* '<S126>/Merge' */
  real_T Merge_o4;                     /* '<S132>/Merge' */
  real_T Merge_ex;                     /* '<S135>/Merge' */
  real_T Merge_k;                      /* '<S138>/Merge' */
  real_T Merge_jq;                     /* '<S120>/Merge' */
  real_T Merge_op;                     /* '<S123>/Merge' */
  real_T Merge_by;                     /* '<S129>/Merge' */
  real_T Merge1_h;                     /* '<S3>/Merge1' */
  real_T Merge_mo;                     /* '<S141>/Merge' */
  real_T Constant2_e5;                 /* '<S141>/Constant2' */
  real_T Clock_gk;                     /* '<S83>/Clock' */
  real_T Clock_gy;                     /* '<S82>/Clock' */
  real_T Clock_h;                      /* '<S81>/Clock' */
  real_T Clock_nw;                     /* '<S80>/Clock' */
  real_T Clock_ke;                     /* '<S79>/Clock' */
  real_T Clock_fl;                     /* '<S78>/Clock' */
  real_T Clock_a;                      /* '<S77>/Clock' */
  real_T Memory1_o;                    /* '<S2>/Memory1' */
  real_T Merge_nf;                     /* '<S67>/Merge' */
  real_T Merge_gf;                     /* '<S70>/Merge' */
  real_T Merge_dt;                     /* '<S73>/Merge' */
  real_T Merge_au;                     /* '<S55>/Merge' */
  real_T Merge_g1;                     /* '<S58>/Merge' */
  real_T Merge_l;                      /* '<S61>/Merge' */
  real_T Merge_oj;                     /* '<S64>/Merge' */
  real_T Merge1_pg;                    /* '<S2>/Merge1' */
  real_T Clock_nm;                     /* '<S19>/Clock' */
  real_T Clock_c;                      /* '<S18>/Clock' */
  real_T Clock_m3;                     /* '<S17>/Clock' */
  real_T Clock_mk;                     /* '<S16>/Clock' */
  real_T Clock_nj;                     /* '<S15>/Clock' */
  real_T Clock_ea;                     /* '<S14>/Clock' */
  real_T Clock_i;                      /* '<S13>/Clock' */
  real_T State;                        /* '<Root>/Chart' */
  uint32_T EtherCATPDOReceive4;        /* '<S310>/EtherCAT PDO Receive4' */
  uint32_T EtherCATPDOReceive4_m;      /* '<S311>/EtherCAT PDO Receive4' */
  uint32_T EtherCATPDOReceive4_d;      /* '<S312>/EtherCAT PDO Receive4' */
  uint32_T EtherCATPDOReceive4_g;      /* '<S313>/EtherCAT PDO Receive4' */
  uint32_T SetDeviceState_o2;          /* '<S219>/Set Device State' */
  uint32_T SetDeviceState_o2_j;        /* '<S218>/Set Device State' */
  uint32_T EtherCATAsyncSDODownload_o2;
                                      /* '<S217>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDODownload_o2_g;
                                      /* '<S216>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDOUpload_o1;  /* '<S215>/EtherCAT Async SDO Upload' */
  uint32_T EtherCATAsyncSDOUpload_o3;  /* '<S215>/EtherCAT Async SDO Upload' */
  uint32_T SetDeviceState_o2_m;        /* '<S151>/Set Device State' */
  uint32_T SetDeviceState_o2_a;        /* '<S150>/Set Device State' */
  uint32_T EtherCATAsyncSDODownload_o2_h;
                                      /* '<S149>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDODownload_o2_f;
                                      /* '<S148>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDOUpload_o1_l;/* '<S147>/EtherCAT Async SDO Upload' */
  uint32_T EtherCATAsyncSDOUpload_o3_a;/* '<S147>/EtherCAT Async SDO Upload' */
  uint32_T SetDeviceState_o2_d;        /* '<S83>/Set Device State' */
  uint32_T SetDeviceState_o2_ay;       /* '<S82>/Set Device State' */
  uint32_T EtherCATAsyncSDODownload_o2_i;/* '<S81>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDODownload_o2_a;/* '<S80>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDOUpload_o1_p;/* '<S79>/EtherCAT Async SDO Upload' */
  uint32_T EtherCATAsyncSDOUpload_o3_e;/* '<S79>/EtherCAT Async SDO Upload' */
  uint32_T SetDeviceState_o2_i;        /* '<S19>/Set Device State' */
  uint32_T SetDeviceState_o2_e;        /* '<S18>/Set Device State' */
  uint32_T EtherCATAsyncSDODownload_o2_n;/* '<S17>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDODownload_o2_fm;/* '<S16>/EtherCAT Async SDO Download' */
  uint32_T EtherCATAsyncSDOUpload_o1_lg;/* '<S15>/EtherCAT Async SDO Upload' */
  uint32_T EtherCATAsyncSDOUpload_o3_k;/* '<S15>/EtherCAT Async SDO Upload' */
  real32_T Gain8;                      /* '<S306>/Gain8' */
  real32_T Bias;                       /* '<S306>/Bias' */
  real32_T Gain8_b;                    /* '<S307>/Gain8' */
  real32_T Bias_l;                     /* '<S307>/Bias' */
  real32_T Gain8_a;                    /* '<S308>/Gain8' */
  real32_T Bias_e;                     /* '<S308>/Bias' */
  real32_T Gain8_j;                    /* '<S309>/Gain8' */
  real32_T Bias_lu;                    /* '<S309>/Bias' */
  real32_T EtherCATPDOReceive1;        /* '<S314>/EtherCAT PDO Receive1' */
  real32_T EtherCATPDOReceive2;        /* '<S314>/EtherCAT PDO Receive2' */
  real32_T EtherCATPDOReceive3;        /* '<S314>/EtherCAT PDO Receive3' */
  real32_T EtherCATPDOReceive4_gz;     /* '<S314>/EtherCAT PDO Receive4' */
  real32_T EtherCATPDOReceive5;        /* '<S314>/EtherCAT PDO Receive5' */
  real32_T EtherCATPDOReceive6;        /* '<S314>/EtherCAT PDO Receive6' */
  real32_T EtherCATPDOReceive1_h;      /* '<S315>/EtherCAT PDO Receive1' */
  real32_T EtherCATPDOReceive2_p;      /* '<S315>/EtherCAT PDO Receive2' */
  real32_T EtherCATPDOReceive3_f;      /* '<S315>/EtherCAT PDO Receive3' */
  real32_T EtherCATPDOReceive4_n;      /* '<S315>/EtherCAT PDO Receive4' */
  real32_T EtherCATPDOReceive5_p;      /* '<S315>/EtherCAT PDO Receive5' */
  real32_T EtherCATPDOReceive6_c;      /* '<S315>/EtherCAT PDO Receive6' */
  real32_T EtherCATPDOReceive1_p;      /* '<S316>/EtherCAT PDO Receive1' */
  real32_T EtherCATPDOReceive2_ps;     /* '<S316>/EtherCAT PDO Receive2' */
  real32_T EtherCATPDOReceive3_g;      /* '<S316>/EtherCAT PDO Receive3' */
  real32_T EtherCATPDOReceive4_h;      /* '<S316>/EtherCAT PDO Receive4' */
  real32_T EtherCATPDOReceive5_p4;     /* '<S316>/EtherCAT PDO Receive5' */
  real32_T EtherCATPDOReceive6_p;      /* '<S316>/EtherCAT PDO Receive6' */
  int32_T EtherCATInit[6];             /* '<Root>/EtherCAT Init' */
  int32_T Bias2;                       /* '<S301>/Bias2' */
  int32_T DotProduct;                  /* '<S299>/Dot Product' */
  int32_T Bias3;                       /* '<S304>/Bias3' */
  int32_T DotProduct1;                 /* '<S303>/Dot Product1' */
  int32_T EtherCATPDOReceive1_m;       /* '<S310>/EtherCAT PDO Receive1' */
  int32_T EtherCATPDOReceive2_d;       /* '<S310>/EtherCAT PDO Receive2' */
  int32_T EtherCATPDOReceive1_d;       /* '<S311>/EtherCAT PDO Receive1' */
  int32_T EtherCATPDOReceive2_n;       /* '<S311>/EtherCAT PDO Receive2' */
  int32_T EtherCATPDOReceive1_hi;      /* '<S312>/EtherCAT PDO Receive1' */
  int32_T EtherCATPDOReceive2_k;       /* '<S312>/EtherCAT PDO Receive2' */
  int32_T EtherCATPDOReceive1_mt;      /* '<S313>/EtherCAT PDO Receive1' */
  int32_T EtherCATPDOReceive2_c;       /* '<S313>/EtherCAT PDO Receive2' */
  int32_T SetDeviceState_o1;           /* '<S219>/Set Device State' */
  int32_T SetDeviceState_o1_n;         /* '<S218>/Set Device State' */
  int32_T EtherCATAsyncSDODownload_o1;/* '<S217>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDODownload_o1_o;
                                      /* '<S216>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDOUpload_o2;   /* '<S215>/EtherCAT Async SDO Upload' */
  int32_T GetDeviceState;              /* '<S213>/Get Device State' */
  int32_T SetDeviceState_o1_f;         /* '<S151>/Set Device State' */
  int32_T SetDeviceState_o1_h;         /* '<S150>/Set Device State' */
  int32_T EtherCATAsyncSDODownload_o1_k;
                                      /* '<S149>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDODownload_o1_m;
                                      /* '<S148>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDOUpload_o2_g; /* '<S147>/EtherCAT Async SDO Upload' */
  int32_T GetDeviceState_g;            /* '<S145>/Get Device State' */
  int32_T SetDeviceState_o1_m;         /* '<S83>/Set Device State' */
  int32_T SetDeviceState_o1_k;         /* '<S82>/Set Device State' */
  int32_T EtherCATAsyncSDODownload_o1_g;/* '<S81>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDODownload_o1_c;/* '<S80>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDOUpload_o2_b; /* '<S79>/EtherCAT Async SDO Upload' */
  int32_T GetDeviceState_d;            /* '<S77>/Get Device State' */
  int32_T SetDeviceState_o1_l;         /* '<S19>/Set Device State' */
  int32_T SetDeviceState_o1_a;         /* '<S18>/Set Device State' */
  int32_T EtherCATAsyncSDODownload_o1_gk;/* '<S17>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDODownload_o1_cq;/* '<S16>/EtherCAT Async SDO Download' */
  int32_T EtherCATAsyncSDOUpload_o2_l; /* '<S15>/EtherCAT Async SDO Upload' */
  int32_T GetDeviceState_i;            /* '<S13>/Get Device State' */
  uint16_T EtherCATPDOReceive1_hy;     /* '<S214>/EtherCAT PDO Receive1' */
  uint16_T Output;                     /* '<S231>/Output' */
  uint16_T Memory;                     /* '<S214>/Memory' */
  uint16_T Merge_ks;                   /* '<S214>/Merge' */
  uint16_T FixPtSum1;                  /* '<S239>/FixPt Sum1' */
  uint16_T FixPtSwitch;                /* '<S240>/FixPt Switch' */
  uint16_T EtherCATPDOReceive1_l;      /* '<S213>/EtherCAT PDO Receive1' */
  uint16_T EtherCATPDOReceive1_dh;     /* '<S146>/EtherCAT PDO Receive1' */
  uint16_T Output_j;                   /* '<S163>/Output' */
  uint16_T Memory_a;                   /* '<S146>/Memory' */
  uint16_T Merge_dtp;                  /* '<S146>/Merge' */
  uint16_T FixPtSum1_m;                /* '<S171>/FixPt Sum1' */
  uint16_T FixPtSwitch_h;              /* '<S172>/FixPt Switch' */
  uint16_T EtherCATPDOReceive1_f;      /* '<S145>/EtherCAT PDO Receive1' */
  uint16_T EtherCATPDOReceive1_lv;     /* '<S78>/EtherCAT PDO Receive1' */
  uint16_T Output_f;                   /* '<S95>/Output' */
  uint16_T Memory_p;                   /* '<S78>/Memory' */
  uint16_T Merge_ov;                   /* '<S78>/Merge' */
  uint16_T FixPtSum1_b;                /* '<S103>/FixPt Sum1' */
  uint16_T FixPtSwitch_k;              /* '<S104>/FixPt Switch' */
  uint16_T EtherCATPDOReceive1_pn;     /* '<S77>/EtherCAT PDO Receive1' */
  uint16_T EtherCATPDOReceive1_g;      /* '<S14>/EtherCAT PDO Receive1' */
  uint16_T Output_e;                   /* '<S30>/Output' */
  uint16_T Memory_j;                   /* '<S14>/Memory' */
  uint16_T Merge_ir;                   /* '<S14>/Merge' */
  uint16_T FixPtSum1_k;                /* '<S38>/FixPt Sum1' */
  uint16_T FixPtSwitch_b;              /* '<S39>/FixPt Switch' */
  uint16_T EtherCATPDOReceive1_e;      /* '<S13>/EtherCAT PDO Receive1' */
  int16_T DataTypeConversion1;         /* '<S295>/Data Type Conversion1' */
  int16_T DataTypeConversion1_m;       /* '<S297>/Data Type Conversion1' */
  int16_T DataTypeConversion1_j;       /* '<S300>/Data Type Conversion1' */
  int16_T DataTypeConversion1_o;       /* '<S296>/Data Type Conversion1' */
  int16_T DataTypeConversion2;         /* '<S299>/Data Type Conversion2' */
  int16_T DataTypeConversion3;         /* '<S303>/Data Type Conversion3' */
  int16_T EtherCATPDOReceive3_j;       /* '<S310>/EtherCAT PDO Receive3' */
  int16_T EtherCATPDOReceive3_fr;      /* '<S311>/EtherCAT PDO Receive3' */
  int16_T EtherCATPDOReceive3_l;       /* '<S312>/EtherCAT PDO Receive3' */
  int16_T EtherCATPDOReceive3_ji;      /* '<S313>/EtherCAT PDO Receive3' */
  int8_T EtherCATPDOReceive5_f;        /* '<S310>/EtherCAT PDO Receive5' */
  int8_T EtherCATPDOReceive5_p4t;      /* '<S311>/EtherCAT PDO Receive5' */
  int8_T EtherCATPDOReceive5_h;        /* '<S312>/EtherCAT PDO Receive5' */
  int8_T EtherCATPDOReceive5_b;        /* '<S313>/EtherCAT PDO Receive5' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_g;/* '<S219>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_kq;/* '<S218>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_dt;/* '<S217>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_hk;/* '<S216>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_jt;/* '<S215>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_pb;/* '<S214>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_nv;/* '<S213>/If Action Subsystem7' */
  B_Chart_Robot_T sf_Chart_i;          /* '<S5>/Chart' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_n;/* '<S151>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_ld;/* '<S150>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_k;/* '<S149>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_a;/* '<S148>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_e;/* '<S147>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_d;/* '<S146>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_lp;/* '<S145>/If Action Subsystem7' */
  B_Chart_Robot_T sf_Chart_a;          /* '<S4>/Chart' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_p5;/* '<S83>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_m;/* '<S82>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_l;/* '<S81>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_ji;/* '<S80>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_he;/* '<S79>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_hj;/* '<S78>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_hm;/* '<S77>/If Action Subsystem7' */
  B_Chart_Robot_T sf_Chart_o;          /* '<S3>/Chart' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_i;/* '<S19>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_pl;/* '<S18>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_px;/* '<S17>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_j;/* '<S16>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_h;/* '<S15>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7_p;/* '<S14>/If Action Subsystem7' */
  B_IfActionSubsystem7_Robot_T IfActionSubsystem7;/* '<S13>/If Action Subsystem7' */
  B_Chart_Robot_T sf_Chart_g;          /* '<S2>/Chart' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_Robot_T {
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
  real_T Memory1_PreviousInput_h;      /* '<S5>/Memory1' */
  real_T Memory1_PreviousInput_l;      /* '<S4>/Memory1' */
  real_T Memory1_PreviousInput_j;      /* '<S3>/Memory1' */
  real_T Memory1_PreviousInput_k;      /* '<S2>/Memory1' */
  struct {
    real_T EXECRATIO;
  } EtherCATInit_RWORK;                /* '<Root>/EtherCAT Init' */

  struct {
    void *AQHandles;
  } TAQOutportLogging_InsertedFor_BusCreator_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor1RatedCurrent_at_outport_0_PWOR;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor2RatedCurrent_at_outport_0_PWOR;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor3RatedCurrent_at_outport_0_PWOR;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Motor4RatedCurrent_at_outport_0_PWOR;/* synthesized block */

  int32_T sfEvent;                     /* '<Root>/Chart' */
  uint32_T is_c3_Robot;                /* '<Root>/Chart' */
  int_T EtherCATPDOReceive1_IWORK[7];  /* '<S310>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK[7];  /* '<S310>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK[7];  /* '<S310>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK[7];  /* '<S310>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK[7];  /* '<S310>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOTransmit_IWORK[7];  /* '<S310>/EtherCAT PDO Transmit' */
  int_T EtherCATPDOReceive1_IWORK_p[7];/* '<S311>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK_j[7];/* '<S311>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK_d[7];/* '<S311>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_n[7];/* '<S311>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK_c[7];/* '<S311>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOTransmit_IWORK_i[7];/* '<S311>/EtherCAT PDO Transmit' */
  int_T EtherCATPDOReceive1_IWORK_a[7];/* '<S312>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK_n[7];/* '<S312>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK_n[7];/* '<S312>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_b[7];/* '<S312>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK_g[7];/* '<S312>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOTransmit_IWORK_p[7];/* '<S312>/EtherCAT PDO Transmit' */
  int_T EtherCATPDOReceive1_IWORK_d[7];/* '<S313>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK_e[7];/* '<S313>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK_c[7];/* '<S313>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_by[7];/* '<S313>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK_cp[7];/* '<S313>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOTransmit_IWORK_m[7];/* '<S313>/EtherCAT PDO Transmit' */
  int_T EtherCATPDOReceive1_IWORK_dd[7];/* '<S314>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK_nx[7];/* '<S314>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK_n4[7];/* '<S314>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_i[7];/* '<S314>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK_i[7];/* '<S314>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOReceive6_IWORK[7];  /* '<S314>/EtherCAT PDO Receive6' */
  int_T EtherCATPDOReceive1_IWORK_h[7];/* '<S315>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK_h[7];/* '<S315>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK_o[7];/* '<S315>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_e[7];/* '<S315>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK_b[7];/* '<S315>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOReceive6_IWORK_i[7];/* '<S315>/EtherCAT PDO Receive6' */
  int_T EtherCATPDOReceive1_IWORK_l[7];/* '<S316>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOReceive2_IWORK_m[7];/* '<S316>/EtherCAT PDO Receive2' */
  int_T EtherCATPDOReceive3_IWORK_dp[7];/* '<S316>/EtherCAT PDO Receive3' */
  int_T EtherCATPDOReceive4_IWORK_c[7];/* '<S316>/EtherCAT PDO Receive4' */
  int_T EtherCATPDOReceive5_IWORK_g5[7];/* '<S316>/EtherCAT PDO Receive5' */
  int_T EtherCATPDOReceive6_IWORK_o[7];/* '<S316>/EtherCAT PDO Receive6' */
  int_T EtherCATAsyncSDODownload_IWORK[9];
                                      /* '<S217>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDODownload_IWORK_b[9];
                                      /* '<S216>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDOUpload_IWORK[9];/* '<S215>/EtherCAT Async SDO Upload' */
  int_T EtherCATPDOReceive1_IWORK_c[7];/* '<S214>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOTransmit1_IWORK[7]; /* '<S214>/EtherCAT PDO Transmit1' */
  int_T EtherCATPDOReceive1_IWORK_f[7];/* '<S213>/EtherCAT PDO Receive1' */
  int_T GetDeviceState_IWORK[5];       /* '<S213>/Get Device State' */
  int_T EtherCATAsyncSDODownload_IWORK_bg[9];
                                      /* '<S149>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDODownload_IWORK_l[9];
                                      /* '<S148>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDOUpload_IWORK_o[9];/* '<S147>/EtherCAT Async SDO Upload' */
  int_T EtherCATPDOReceive1_IWORK_j[7];/* '<S146>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOTransmit1_IWORK_p[7];/* '<S146>/EtherCAT PDO Transmit1' */
  int_T EtherCATPDOReceive1_IWORK_am[7];/* '<S145>/EtherCAT PDO Receive1' */
  int_T GetDeviceState_IWORK_k[5];     /* '<S145>/Get Device State' */
  int_T EtherCATAsyncSDODownload_IWORK_lr[9];/* '<S81>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDODownload_IWORK_a[9];/* '<S80>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDOUpload_IWORK_m[9];/* '<S79>/EtherCAT Async SDO Upload' */
  int_T EtherCATPDOReceive1_IWORK_o[7];/* '<S78>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOTransmit1_IWORK_g[7];/* '<S78>/EtherCAT PDO Transmit1' */
  int_T EtherCATPDOReceive1_IWORK_l5[7];/* '<S77>/EtherCAT PDO Receive1' */
  int_T GetDeviceState_IWORK_o[5];     /* '<S77>/Get Device State' */
  int_T EtherCATAsyncSDODownload_IWORK_f[9];/* '<S17>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDODownload_IWORK_lx[9];/* '<S16>/EtherCAT Async SDO Download' */
  int_T EtherCATAsyncSDOUpload_IWORK_k[9];/* '<S15>/EtherCAT Async SDO Upload' */
  int_T EtherCATPDOReceive1_IWORK_ow[7];/* '<S14>/EtherCAT PDO Receive1' */
  int_T EtherCATPDOTransmit1_IWORK_k[7];/* '<S14>/EtherCAT PDO Transmit1' */
  int_T EtherCATPDOReceive1_IWORK_g[7];/* '<S13>/EtherCAT PDO Receive1' */
  int_T GetDeviceState_IWORK_oc[5];    /* '<S13>/Get Device State' */
  uint16_T Output_DSTATE;              /* '<S231>/Output' */
  uint16_T Output_DSTATE_g;            /* '<S163>/Output' */
  uint16_T Output_DSTATE_e;            /* '<S95>/Output' */
  uint16_T Output_DSTATE_f;            /* '<S30>/Output' */
  uint16_T Memory_PreviousInput;       /* '<S214>/Memory' */
  uint16_T Memory_PreviousInput_d;     /* '<S146>/Memory' */
  uint16_T Memory_PreviousInput_b;     /* '<S78>/Memory' */
  uint16_T Memory_PreviousInput_dn;    /* '<S14>/Memory' */
  int8_T Robot_SubsysRanBC;            /* '<S11>/Robot' */
  int8_T Motor4TorqueControlInitFrame_SubsysRanBC;
                                 /* '<Root>/Motor4 Torque Control Init Frame' */
  int8_T SetMasterStatetoSafeOPFrame_SubsysRanBC;
                                    /* '<S5>/Set MasterState to SafeOP Frame' */
  int8_T If1_ActiveSubsystem;          /* '<S219>/If1' */
  int8_T SetMasterStatetoOPFrame_SubsysRanBC;/* '<S5>/Set MasterState to OP Frame' */
  int8_T If1_ActiveSubsystem_n;        /* '<S218>/If1' */
  int8_T SDOSet0x60801Frame_SubsysRanBC;/* '<S5>/SDO Set 0x6080:-1 Frame' */
  int8_T If1_ActiveSubsystem_f;        /* '<S217>/If1' */
  int8_T SDOSet0x606010Frame_SubsysRanBC;/* '<S5>/SDO Set 0x6060:10 Frame' */
  int8_T If1_ActiveSubsystem_b;        /* '<S216>/If1' */
  int8_T SDOGet0x6075Frame_SubsysRanBC;/* '<S5>/SDO Get 0x6075 Frame' */
  int8_T If1_ActiveSubsystem_l;        /* '<S215>/If1' */
  int8_T PDOSet0x60406715Frame_SubsysRanBC;
                                      /* '<S5>/PDO Set 0x6040:6->7->15 Frame' */
  int8_T If1_ActiveSubsystem_m;        /* '<S214>/If1' */
  int8_T GetMasterStateOPFrame_SubsysRanBC;/* '<S5>/Get MasterState OP Frame' */
  int8_T If1_ActiveSubsystem_p;        /* '<S213>/If1' */
  int8_T Motor3TorqueControlInitFrame_SubsysRanBC;
                                 /* '<Root>/Motor3 Torque Control Init Frame' */
  int8_T SetMasterStatetoSafeOPFrame_SubsysRanBC_j;
                                    /* '<S4>/Set MasterState to SafeOP Frame' */
  int8_T If1_ActiveSubsystem_l2;       /* '<S151>/If1' */
  int8_T SetMasterStatetoOPFrame_SubsysRanBC_k;/* '<S4>/Set MasterState to OP Frame' */
  int8_T If1_ActiveSubsystem_g;        /* '<S150>/If1' */
  int8_T SDOSet0x60801Frame_SubsysRanBC_l;/* '<S4>/SDO Set 0x6080:-1 Frame' */
  int8_T If1_ActiveSubsystem_k;        /* '<S149>/If1' */
  int8_T SDOSet0x606010Frame_SubsysRanBC_m;/* '<S4>/SDO Set 0x6060:10 Frame' */
  int8_T If1_ActiveSubsystem_h;        /* '<S148>/If1' */
  int8_T SDOGet0x6075Frame_SubsysRanBC_m;/* '<S4>/SDO Get 0x6075 Frame' */
  int8_T If1_ActiveSubsystem_c;        /* '<S147>/If1' */
  int8_T PDOSet0x60406715Frame_SubsysRanBC_b;
                                      /* '<S4>/PDO Set 0x6040:6->7->15 Frame' */
  int8_T If1_ActiveSubsystem_mz;       /* '<S146>/If1' */
  int8_T GetMasterStateOPFrame_SubsysRanBC_l;/* '<S4>/Get MasterState OP Frame' */
  int8_T If1_ActiveSubsystem_mo;       /* '<S145>/If1' */
  int8_T Motor2TorqueControlInitFrame_SubsysRanBC;
                                 /* '<Root>/Motor2 Torque Control Init Frame' */
  int8_T SetMasterStatetoSafeOPFrame_SubsysRanBC_g;
                                    /* '<S3>/Set MasterState to SafeOP Frame' */
  int8_T If1_ActiveSubsystem_a;        /* '<S83>/If1' */
  int8_T SetMasterStatetoOPFrame_SubsysRanBC_j;/* '<S3>/Set MasterState to OP Frame' */
  int8_T If1_ActiveSubsystem_i;        /* '<S82>/If1' */
  int8_T SDOSet0x60801Frame_SubsysRanBC_a;/* '<S3>/SDO Set 0x6080:-1 Frame' */
  int8_T If1_ActiveSubsystem_d;        /* '<S81>/If1' */
  int8_T SDOSet0x606010Frame_SubsysRanBC_p;/* '<S3>/SDO Set 0x6060:10 Frame' */
  int8_T If1_ActiveSubsystem_iq;       /* '<S80>/If1' */
  int8_T SDOGet0x6075Frame_SubsysRanBC_g;/* '<S3>/SDO Get 0x6075 Frame' */
  int8_T If1_ActiveSubsystem_ma;       /* '<S79>/If1' */
  int8_T PDOSet0x60406715Frame_SubsysRanBC_p;
                                      /* '<S3>/PDO Set 0x6040:6->7->15 Frame' */
  int8_T If1_ActiveSubsystem_gn;       /* '<S78>/If1' */
  int8_T GetMasterStateOPFrame_SubsysRanBC_p;/* '<S3>/Get MasterState OP Frame' */
  int8_T If1_ActiveSubsystem_e;        /* '<S77>/If1' */
  int8_T Motor1TorqueControlInitFrame_SubsysRanBC;
                                 /* '<Root>/Motor1 Torque Control Init Frame' */
  int8_T SetMasterStatetoSafeOPFrame_SubsysRanBC_c;
                                    /* '<S2>/Set MasterState to SafeOP Frame' */
  int8_T If1_ActiveSubsystem_ke;       /* '<S19>/If1' */
  int8_T SetMasterStatetoOPFrame_SubsysRanBC_l;/* '<S2>/Set MasterState to OP Frame' */
  int8_T If1_ActiveSubsystem_p4;       /* '<S18>/If1' */
  int8_T SDOSet0x60801Frame_SubsysRanBC_e;/* '<S2>/SDO Set 0x6080:-1 Frame' */
  int8_T If1_ActiveSubsystem_hv;       /* '<S17>/If1' */
  int8_T SDOSet0x606010Frame_SubsysRanBC_o;/* '<S2>/SDO Set 0x6060:10 Frame' */
  int8_T If1_ActiveSubsystem_pj;       /* '<S16>/If1' */
  int8_T SDOGet0x6075Frame_SubsysRanBC_l;/* '<S2>/SDO Get 0x6075 Frame' */
  int8_T If1_ActiveSubsystem_lk;       /* '<S15>/If1' */
  int8_T PDOSet0x60406715Frame_SubsysRanBC_b1;
                                      /* '<S2>/PDO Set 0x6040:6->7->15 Frame' */
  int8_T If1_ActiveSubsystem_if;       /* '<S14>/If1' */
  int8_T GetMasterStateOPFrame_SubsysRanBC_g;/* '<S2>/Get MasterState OP Frame' */
  int8_T If1_ActiveSubsystem_j;        /* '<S13>/If1' */
  uint8_T is_active_c3_Robot;          /* '<Root>/Chart' */
  boolean_T Motor4TorqueControlInitFrame_MODE;
                                 /* '<Root>/Motor4 Torque Control Init Frame' */
  boolean_T SetMasterStatetoSafeOPFrame_MODE;
                                    /* '<S5>/Set MasterState to SafeOP Frame' */
  boolean_T SetMasterStatetoOPFrame_MODE;/* '<S5>/Set MasterState to OP Frame' */
  boolean_T SDOSet0x60801Frame_MODE;   /* '<S5>/SDO Set 0x6080:-1 Frame' */
  boolean_T SDOSet0x606010Frame_MODE;  /* '<S5>/SDO Set 0x6060:10 Frame' */
  boolean_T SDOGet0x6075Frame_MODE;    /* '<S5>/SDO Get 0x6075 Frame' */
  boolean_T PDOSet0x60406715Frame_MODE;
                                      /* '<S5>/PDO Set 0x6040:6->7->15 Frame' */
  boolean_T GetMasterStateOPFrame_MODE;/* '<S5>/Get MasterState OP Frame' */
  boolean_T Motor3TorqueControlInitFrame_MODE;
                                 /* '<Root>/Motor3 Torque Control Init Frame' */
  boolean_T SetMasterStatetoSafeOPFrame_MODE_a;
                                    /* '<S4>/Set MasterState to SafeOP Frame' */
  boolean_T SetMasterStatetoOPFrame_MODE_h;/* '<S4>/Set MasterState to OP Frame' */
  boolean_T SDOSet0x60801Frame_MODE_g; /* '<S4>/SDO Set 0x6080:-1 Frame' */
  boolean_T SDOSet0x606010Frame_MODE_p;/* '<S4>/SDO Set 0x6060:10 Frame' */
  boolean_T SDOGet0x6075Frame_MODE_i;  /* '<S4>/SDO Get 0x6075 Frame' */
  boolean_T PDOSet0x60406715Frame_MODE_a;
                                      /* '<S4>/PDO Set 0x6040:6->7->15 Frame' */
  boolean_T GetMasterStateOPFrame_MODE_j;/* '<S4>/Get MasterState OP Frame' */
  boolean_T Motor2TorqueControlInitFrame_MODE;
                                 /* '<Root>/Motor2 Torque Control Init Frame' */
  boolean_T SetMasterStatetoSafeOPFrame_MODE_e;
                                    /* '<S3>/Set MasterState to SafeOP Frame' */
  boolean_T SetMasterStatetoOPFrame_MODE_c;/* '<S3>/Set MasterState to OP Frame' */
  boolean_T SDOSet0x60801Frame_MODE_h; /* '<S3>/SDO Set 0x6080:-1 Frame' */
  boolean_T SDOSet0x606010Frame_MODE_k;/* '<S3>/SDO Set 0x6060:10 Frame' */
  boolean_T SDOGet0x6075Frame_MODE_e;  /* '<S3>/SDO Get 0x6075 Frame' */
  boolean_T PDOSet0x60406715Frame_MODE_e;
                                      /* '<S3>/PDO Set 0x6040:6->7->15 Frame' */
  boolean_T GetMasterStateOPFrame_MODE_e;/* '<S3>/Get MasterState OP Frame' */
  boolean_T Motor1TorqueControlInitFrame_MODE;
                                 /* '<Root>/Motor1 Torque Control Init Frame' */
  boolean_T SetMasterStatetoSafeOPFrame_MODE_l;
                                    /* '<S2>/Set MasterState to SafeOP Frame' */
  boolean_T SetMasterStatetoOPFrame_MODE_hr;/* '<S2>/Set MasterState to OP Frame' */
  boolean_T SDOSet0x60801Frame_MODE_b; /* '<S2>/SDO Set 0x6080:-1 Frame' */
  boolean_T SDOSet0x606010Frame_MODE_pk;/* '<S2>/SDO Set 0x6060:10 Frame' */
  boolean_T SDOGet0x6075Frame_MODE_ie; /* '<S2>/SDO Get 0x6075 Frame' */
  boolean_T PDOSet0x60406715Frame_MODE_h;
                                      /* '<S2>/PDO Set 0x6040:6->7->15 Frame' */
  boolean_T GetMasterStateOPFrame_MODE_b;/* '<S2>/Get MasterState OP Frame' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_f;
                                    /* '<S292>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_f5;
                                     /* '<S292>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_n;
                                    /* '<S289>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_l;
                                     /* '<S289>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_h;
                                    /* '<S286>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_k;
                                     /* '<S286>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_a;
                                    /* '<S283>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_f;
                                     /* '<S283>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1;
                                    /* '<S280>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem;
                                     /* '<S280>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_gz;
                                    /* '<S277>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_ka;
                                     /* '<S277>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_do;
                                    /* '<S274>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_dr;
                                     /* '<S274>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_dw;
                                    /* '<S271>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_gb;
                                     /* '<S271>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_ec;
                                    /* '<S268>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_eb;
                                     /* '<S268>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_as;
                                    /* '<S265>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_o1;
                                     /* '<S265>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_kr;
                                    /* '<S262>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_gi;
                                     /* '<S262>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_ef;
                                    /* '<S259>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_nx;
                                     /* '<S259>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_bf;
                                    /* '<S256>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_la;
                                     /* '<S256>/Switch Case Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_m;/* '<S219>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_de;/* '<S219>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_g;/* '<S219>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_n1;/* '<S218>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_ev;/* '<S218>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_kq;/* '<S218>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_k;/* '<S217>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_pd;/* '<S217>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_dt;/* '<S217>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_aik;/* '<S216>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_k;/* '<S216>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_hk;/* '<S216>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_g;/* '<S215>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_ek;/* '<S215>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_jt;/* '<S215>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_im;/* '<S214>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_i;/* '<S214>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_pb;/* '<S214>/If Action Subsystem7' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem4_g;/* '<S214>/If Action Subsystem4' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem2_c;/* '<S214>/If Action Subsystem2' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem1_o;/* '<S214>/If Action Subsystem1' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem_l1;/* '<S214>/If Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_hv;/* '<S213>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_o;/* '<S213>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_nv;/* '<S213>/If Action Subsystem7' */
  DW_Chart_Robot_T sf_Chart_i;         /* '<S5>/Chart' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_ed;
                                    /* '<S209>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_n;
                                     /* '<S209>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_i0;
                                    /* '<S206>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_o2;
                                     /* '<S206>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_ay;
                                    /* '<S203>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_hy;
                                     /* '<S203>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_ni;
                                    /* '<S200>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_o;
                                     /* '<S200>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_d;
                                    /* '<S197>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_ao;
                                     /* '<S197>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_kf;
                                    /* '<S194>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_lw;
                                     /* '<S194>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_j;
                                    /* '<S191>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_ga;
                                     /* '<S191>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_k;
                                    /* '<S188>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_hh;
                                     /* '<S188>/Switch Case Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_d2;/* '<S151>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_a;/* '<S151>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_n;/* '<S151>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_f;/* '<S150>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_dq;/* '<S150>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_ld;/* '<S150>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_p3;/* '<S149>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_cl;/* '<S149>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_k;/* '<S149>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_as;/* '<S148>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_g;/* '<S148>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_a;/* '<S148>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_l;/* '<S147>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_c3;/* '<S147>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_e;/* '<S147>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_ai;/* '<S146>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_e;/* '<S146>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_d;/* '<S146>/If Action Subsystem7' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem4_e;/* '<S146>/If Action Subsystem4' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem2_h;/* '<S146>/If Action Subsystem2' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem1_b;/* '<S146>/If Action Subsystem1' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem_i;/* '<S146>/If Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_ip;/* '<S145>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_pc;/* '<S145>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_lp;/* '<S145>/If Action Subsystem7' */
  DW_Chart_Robot_T sf_Chart_a;         /* '<S4>/Chart' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_a5;
                                    /* '<S141>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_e;
                                     /* '<S141>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_lz;
                                    /* '<S138>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_jg;
                                     /* '<S138>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_o;
                                    /* '<S135>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_m5;
                                     /* '<S135>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_hh;
                                    /* '<S132>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_kj;
                                     /* '<S132>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_l;
                                    /* '<S129>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_fm;
                                     /* '<S129>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_g;
                                    /* '<S126>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_gd;
                                     /* '<S126>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_b;
                                    /* '<S123>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_h;
                                     /* '<S123>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_m;
                                    /* '<S120>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_m;
                                     /* '<S120>/Switch Case Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_p0;/* '<S83>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_c;/* '<S83>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_p5;/* '<S83>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_ax;/* '<S82>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_h0;/* '<S82>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_m;/* '<S82>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_i;/* '<S81>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_j;/* '<S81>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_l;/* '<S81>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_a;/* '<S80>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_f;/* '<S80>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_ji;/* '<S80>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_ow;/* '<S79>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_hh;/* '<S79>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_he;/* '<S79>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_e;/* '<S78>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_ni;/* '<S78>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_hj;/* '<S78>/If Action Subsystem7' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem4_p;/* '<S78>/If Action Subsystem4' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem2_d;/* '<S78>/If Action Subsystem2' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem1_k;/* '<S78>/If Action Subsystem1' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem_l;/* '<S78>/If Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_p;/* '<S77>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_h;/* '<S77>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_hm;/* '<S77>/If Action Subsystem7' */
  DW_Chart_Robot_T sf_Chart_o;         /* '<S3>/Chart' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_hy;
                                     /* '<S73>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_j2;
                                      /* '<S73>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_eh;
                                     /* '<S70>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_a;
                                      /* '<S70>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_nk;
                                     /* '<S67>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_j;
                                      /* '<S67>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_i;
                                     /* '<S64>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_p;
                                      /* '<S64>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_c;
                                     /* '<S61>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_i;
                                      /* '<S61>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_e;
                                     /* '<S58>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_d;
                                      /* '<S58>/Switch Case Action Subsystem' */
  DW_SwitchCaseActionSubsystem1_Robot_T SwitchCaseActionSubsystem1_f4;
                                     /* '<S55>/Switch Case Action Subsystem1' */
  DW_IfActionSubsystem5_Robot_T SwitchCaseActionSubsystem_g;
                                      /* '<S55>/Switch Case Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_o;/* '<S19>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_d;/* '<S19>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_i;/* '<S19>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_d;/* '<S18>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_l;/* '<S18>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_pl;/* '<S18>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_h;/* '<S17>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_b;/* '<S17>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_px;/* '<S17>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_np;/* '<S16>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_p;/* '<S16>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_j;/* '<S16>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_n;/* '<S15>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_m;/* '<S15>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_h;/* '<S15>/If Action Subsystem7' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6_b;/* '<S14>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5_n;/* '<S14>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7_p;/* '<S14>/If Action Subsystem7' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem4;/* '<S14>/If Action Subsystem4' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem2;/* '<S14>/If Action Subsystem2' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem1;/* '<S14>/If Action Subsystem1' */
  DW_IfActionSubsystem_Robot_T IfActionSubsystem;/* '<S14>/If Action Subsystem' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem6;/* '<S13>/If Action Subsystem6' */
  DW_IfActionSubsystem5_Robot_T IfActionSubsystem5;/* '<S13>/If Action Subsystem5' */
  DW_IfActionSubsystem7_Robot_T IfActionSubsystem7;/* '<S13>/If Action Subsystem7' */
  DW_Chart_Robot_T sf_Chart_g;         /* '<S2>/Chart' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_Robot_T {
  ControlBus BusIn;                    /* '<Root>/BusIn' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_Robot_T {
  SensingBus BusOut;                   /* '<Root>/BusOut' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Robot_T {
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

  extern struct B_Robot_T Robot_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_Robot_T Robot_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_Robot_T Robot_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern struct ExtY_Robot_T Robot_Y;

#ifdef __cplusplus

}

#endif

/* External data declarations for dependent source files */
extern const ControlBus Robot_rtZControlBus;/* ControlBus ground */
extern const SensingBus Robot_rtZSensingBus;/* SensingBus ground */

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void Robot_initialize(void);
  extern void Robot_step(void);
  extern void Robot_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_Robot_T *const Robot_M;

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
 * '<Root>' : 'Robot'
 * '<S1>'   : 'Robot/Chart'
 * '<S2>'   : 'Robot/Motor1 Torque Control Init Frame'
 * '<S3>'   : 'Robot/Motor2 Torque Control Init Frame'
 * '<S4>'   : 'Robot/Motor3 Torque Control Init Frame'
 * '<S5>'   : 'Robot/Motor4 Torque Control Init Frame'
 * '<S6>'   : 'Robot/State_1_Enable'
 * '<S7>'   : 'Robot/State_2_Enable'
 * '<S8>'   : 'Robot/State_3_Enable'
 * '<S9>'   : 'Robot/State_4_Enable'
 * '<S10>'  : 'Robot/State_5_Enable'
 * '<S11>'  : 'Robot/Subsystem'
 * '<S12>'  : 'Robot/Motor1 Torque Control Init Frame/Chart'
 * '<S13>'  : 'Robot/Motor1 Torque Control Init Frame/Get MasterState OP Frame'
 * '<S14>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame'
 * '<S15>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Get 0x6075 Frame'
 * '<S16>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6060:10 Frame'
 * '<S17>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6080:-1 Frame'
 * '<S18>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to OP Frame'
 * '<S19>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to SafeOP Frame'
 * '<S20>'  : 'Robot/Motor1 Torque Control Init Frame/State_10_Enable'
 * '<S21>'  : 'Robot/Motor1 Torque Control Init Frame/State_11_Enable'
 * '<S22>'  : 'Robot/Motor1 Torque Control Init Frame/State_12_Enable'
 * '<S23>'  : 'Robot/Motor1 Torque Control Init Frame/State_13_Enable'
 * '<S24>'  : 'Robot/Motor1 Torque Control Init Frame/State_1_Enable'
 * '<S25>'  : 'Robot/Motor1 Torque Control Init Frame/State_2_Enable'
 * '<S26>'  : 'Robot/Motor1 Torque Control Init Frame/State_3_Enable'
 * '<S27>'  : 'Robot/Motor1 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem5'
 * '<S28>'  : 'Robot/Motor1 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem6'
 * '<S29>'  : 'Robot/Motor1 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem7'
 * '<S30>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited'
 * '<S31>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem'
 * '<S32>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem1'
 * '<S33>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem2'
 * '<S34>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem4'
 * '<S35>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem5'
 * '<S36>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem6'
 * '<S37>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem7'
 * '<S38>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Increment Real World'
 * '<S39>'  : 'Robot/Motor1 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Wrap To Zero'
 * '<S40>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem5'
 * '<S41>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem6'
 * '<S42>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem7'
 * '<S43>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem5'
 * '<S44>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem6'
 * '<S45>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem7'
 * '<S46>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem5'
 * '<S47>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem6'
 * '<S48>'  : 'Robot/Motor1 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem7'
 * '<S49>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem5'
 * '<S50>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem6'
 * '<S51>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem7'
 * '<S52>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem5'
 * '<S53>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem6'
 * '<S54>'  : 'Robot/Motor1 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem7'
 * '<S55>'  : 'Robot/Motor1 Torque Control Init Frame/State_10_Enable/Subsystem'
 * '<S56>'  : 'Robot/Motor1 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S57>'  : 'Robot/Motor1 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S58>'  : 'Robot/Motor1 Torque Control Init Frame/State_11_Enable/Subsystem'
 * '<S59>'  : 'Robot/Motor1 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S60>'  : 'Robot/Motor1 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S61>'  : 'Robot/Motor1 Torque Control Init Frame/State_12_Enable/Subsystem'
 * '<S62>'  : 'Robot/Motor1 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S63>'  : 'Robot/Motor1 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S64>'  : 'Robot/Motor1 Torque Control Init Frame/State_13_Enable/Subsystem'
 * '<S65>'  : 'Robot/Motor1 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S66>'  : 'Robot/Motor1 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S67>'  : 'Robot/Motor1 Torque Control Init Frame/State_1_Enable/Subsystem'
 * '<S68>'  : 'Robot/Motor1 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S69>'  : 'Robot/Motor1 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S70>'  : 'Robot/Motor1 Torque Control Init Frame/State_2_Enable/Subsystem'
 * '<S71>'  : 'Robot/Motor1 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S72>'  : 'Robot/Motor1 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S73>'  : 'Robot/Motor1 Torque Control Init Frame/State_3_Enable/Subsystem'
 * '<S74>'  : 'Robot/Motor1 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S75>'  : 'Robot/Motor1 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S76>'  : 'Robot/Motor2 Torque Control Init Frame/Chart'
 * '<S77>'  : 'Robot/Motor2 Torque Control Init Frame/Get MasterState OP Frame'
 * '<S78>'  : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame'
 * '<S79>'  : 'Robot/Motor2 Torque Control Init Frame/SDO Get 0x6075 Frame'
 * '<S80>'  : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6060:10 Frame'
 * '<S81>'  : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6080:-1 Frame'
 * '<S82>'  : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to OP Frame'
 * '<S83>'  : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to SafeOP Frame'
 * '<S84>'  : 'Robot/Motor2 Torque Control Init Frame/State_10_Enable'
 * '<S85>'  : 'Robot/Motor2 Torque Control Init Frame/State_11_Enable'
 * '<S86>'  : 'Robot/Motor2 Torque Control Init Frame/State_12_Enable'
 * '<S87>'  : 'Robot/Motor2 Torque Control Init Frame/State_13_Enable'
 * '<S88>'  : 'Robot/Motor2 Torque Control Init Frame/State_1_Enable'
 * '<S89>'  : 'Robot/Motor2 Torque Control Init Frame/State_2_Enable'
 * '<S90>'  : 'Robot/Motor2 Torque Control Init Frame/State_3_Enable'
 * '<S91>'  : 'Robot/Motor2 Torque Control Init Frame/State_9_Enable'
 * '<S92>'  : 'Robot/Motor2 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem5'
 * '<S93>'  : 'Robot/Motor2 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem6'
 * '<S94>'  : 'Robot/Motor2 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem7'
 * '<S95>'  : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited'
 * '<S96>'  : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem'
 * '<S97>'  : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem1'
 * '<S98>'  : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem2'
 * '<S99>'  : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem4'
 * '<S100>' : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem5'
 * '<S101>' : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem6'
 * '<S102>' : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem7'
 * '<S103>' : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Increment Real World'
 * '<S104>' : 'Robot/Motor2 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Wrap To Zero'
 * '<S105>' : 'Robot/Motor2 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem5'
 * '<S106>' : 'Robot/Motor2 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem6'
 * '<S107>' : 'Robot/Motor2 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem7'
 * '<S108>' : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem5'
 * '<S109>' : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem6'
 * '<S110>' : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem7'
 * '<S111>' : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem5'
 * '<S112>' : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem6'
 * '<S113>' : 'Robot/Motor2 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem7'
 * '<S114>' : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem5'
 * '<S115>' : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem6'
 * '<S116>' : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem7'
 * '<S117>' : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem5'
 * '<S118>' : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem6'
 * '<S119>' : 'Robot/Motor2 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem7'
 * '<S120>' : 'Robot/Motor2 Torque Control Init Frame/State_10_Enable/Subsystem'
 * '<S121>' : 'Robot/Motor2 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S122>' : 'Robot/Motor2 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S123>' : 'Robot/Motor2 Torque Control Init Frame/State_11_Enable/Subsystem'
 * '<S124>' : 'Robot/Motor2 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S125>' : 'Robot/Motor2 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S126>' : 'Robot/Motor2 Torque Control Init Frame/State_12_Enable/Subsystem'
 * '<S127>' : 'Robot/Motor2 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S128>' : 'Robot/Motor2 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S129>' : 'Robot/Motor2 Torque Control Init Frame/State_13_Enable/Subsystem'
 * '<S130>' : 'Robot/Motor2 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S131>' : 'Robot/Motor2 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S132>' : 'Robot/Motor2 Torque Control Init Frame/State_1_Enable/Subsystem'
 * '<S133>' : 'Robot/Motor2 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S134>' : 'Robot/Motor2 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S135>' : 'Robot/Motor2 Torque Control Init Frame/State_2_Enable/Subsystem'
 * '<S136>' : 'Robot/Motor2 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S137>' : 'Robot/Motor2 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S138>' : 'Robot/Motor2 Torque Control Init Frame/State_3_Enable/Subsystem'
 * '<S139>' : 'Robot/Motor2 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S140>' : 'Robot/Motor2 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S141>' : 'Robot/Motor2 Torque Control Init Frame/State_9_Enable/Subsystem'
 * '<S142>' : 'Robot/Motor2 Torque Control Init Frame/State_9_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S143>' : 'Robot/Motor2 Torque Control Init Frame/State_9_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S144>' : 'Robot/Motor3 Torque Control Init Frame/Chart'
 * '<S145>' : 'Robot/Motor3 Torque Control Init Frame/Get MasterState OP Frame'
 * '<S146>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame'
 * '<S147>' : 'Robot/Motor3 Torque Control Init Frame/SDO Get 0x6075 Frame'
 * '<S148>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6060:10 Frame'
 * '<S149>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6080:-1 Frame'
 * '<S150>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to OP Frame'
 * '<S151>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to SafeOP Frame'
 * '<S152>' : 'Robot/Motor3 Torque Control Init Frame/State_10_Enable'
 * '<S153>' : 'Robot/Motor3 Torque Control Init Frame/State_11_Enable'
 * '<S154>' : 'Robot/Motor3 Torque Control Init Frame/State_12_Enable'
 * '<S155>' : 'Robot/Motor3 Torque Control Init Frame/State_13_Enable'
 * '<S156>' : 'Robot/Motor3 Torque Control Init Frame/State_1_Enable'
 * '<S157>' : 'Robot/Motor3 Torque Control Init Frame/State_2_Enable'
 * '<S158>' : 'Robot/Motor3 Torque Control Init Frame/State_3_Enable'
 * '<S159>' : 'Robot/Motor3 Torque Control Init Frame/State_9_Enable'
 * '<S160>' : 'Robot/Motor3 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem5'
 * '<S161>' : 'Robot/Motor3 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem6'
 * '<S162>' : 'Robot/Motor3 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem7'
 * '<S163>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited'
 * '<S164>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem'
 * '<S165>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem1'
 * '<S166>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem2'
 * '<S167>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem4'
 * '<S168>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem5'
 * '<S169>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem6'
 * '<S170>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem7'
 * '<S171>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Increment Real World'
 * '<S172>' : 'Robot/Motor3 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Wrap To Zero'
 * '<S173>' : 'Robot/Motor3 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem5'
 * '<S174>' : 'Robot/Motor3 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem6'
 * '<S175>' : 'Robot/Motor3 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem7'
 * '<S176>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem5'
 * '<S177>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem6'
 * '<S178>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem7'
 * '<S179>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem5'
 * '<S180>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem6'
 * '<S181>' : 'Robot/Motor3 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem7'
 * '<S182>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem5'
 * '<S183>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem6'
 * '<S184>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem7'
 * '<S185>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem5'
 * '<S186>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem6'
 * '<S187>' : 'Robot/Motor3 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem7'
 * '<S188>' : 'Robot/Motor3 Torque Control Init Frame/State_10_Enable/Subsystem'
 * '<S189>' : 'Robot/Motor3 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S190>' : 'Robot/Motor3 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S191>' : 'Robot/Motor3 Torque Control Init Frame/State_11_Enable/Subsystem'
 * '<S192>' : 'Robot/Motor3 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S193>' : 'Robot/Motor3 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S194>' : 'Robot/Motor3 Torque Control Init Frame/State_12_Enable/Subsystem'
 * '<S195>' : 'Robot/Motor3 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S196>' : 'Robot/Motor3 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S197>' : 'Robot/Motor3 Torque Control Init Frame/State_13_Enable/Subsystem'
 * '<S198>' : 'Robot/Motor3 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S199>' : 'Robot/Motor3 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S200>' : 'Robot/Motor3 Torque Control Init Frame/State_1_Enable/Subsystem'
 * '<S201>' : 'Robot/Motor3 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S202>' : 'Robot/Motor3 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S203>' : 'Robot/Motor3 Torque Control Init Frame/State_2_Enable/Subsystem'
 * '<S204>' : 'Robot/Motor3 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S205>' : 'Robot/Motor3 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S206>' : 'Robot/Motor3 Torque Control Init Frame/State_3_Enable/Subsystem'
 * '<S207>' : 'Robot/Motor3 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S208>' : 'Robot/Motor3 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S209>' : 'Robot/Motor3 Torque Control Init Frame/State_9_Enable/Subsystem'
 * '<S210>' : 'Robot/Motor3 Torque Control Init Frame/State_9_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S211>' : 'Robot/Motor3 Torque Control Init Frame/State_9_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S212>' : 'Robot/Motor4 Torque Control Init Frame/Chart'
 * '<S213>' : 'Robot/Motor4 Torque Control Init Frame/Get MasterState OP Frame'
 * '<S214>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame'
 * '<S215>' : 'Robot/Motor4 Torque Control Init Frame/SDO Get 0x6075 Frame'
 * '<S216>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6060:10 Frame'
 * '<S217>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6080:-1 Frame'
 * '<S218>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to OP Frame'
 * '<S219>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to SafeOP Frame'
 * '<S220>' : 'Robot/Motor4 Torque Control Init Frame/State_10_Enable'
 * '<S221>' : 'Robot/Motor4 Torque Control Init Frame/State_11_Enable'
 * '<S222>' : 'Robot/Motor4 Torque Control Init Frame/State_12_Enable'
 * '<S223>' : 'Robot/Motor4 Torque Control Init Frame/State_13_Enable'
 * '<S224>' : 'Robot/Motor4 Torque Control Init Frame/State_1_Enable'
 * '<S225>' : 'Robot/Motor4 Torque Control Init Frame/State_2_Enable'
 * '<S226>' : 'Robot/Motor4 Torque Control Init Frame/State_3_Enable'
 * '<S227>' : 'Robot/Motor4 Torque Control Init Frame/State_9_Enable'
 * '<S228>' : 'Robot/Motor4 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem5'
 * '<S229>' : 'Robot/Motor4 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem6'
 * '<S230>' : 'Robot/Motor4 Torque Control Init Frame/Get MasterState OP Frame/If Action Subsystem7'
 * '<S231>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited'
 * '<S232>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem'
 * '<S233>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem1'
 * '<S234>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem2'
 * '<S235>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem4'
 * '<S236>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem5'
 * '<S237>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem6'
 * '<S238>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/If Action Subsystem7'
 * '<S239>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Increment Real World'
 * '<S240>' : 'Robot/Motor4 Torque Control Init Frame/PDO Set 0x6040:6->7->15 Frame/Counter Limited/Wrap To Zero'
 * '<S241>' : 'Robot/Motor4 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem5'
 * '<S242>' : 'Robot/Motor4 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem6'
 * '<S243>' : 'Robot/Motor4 Torque Control Init Frame/SDO Get 0x6075 Frame/If Action Subsystem7'
 * '<S244>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem5'
 * '<S245>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem6'
 * '<S246>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6060:10 Frame/If Action Subsystem7'
 * '<S247>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem5'
 * '<S248>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem6'
 * '<S249>' : 'Robot/Motor4 Torque Control Init Frame/SDO Set 0x6080:-1 Frame/If Action Subsystem7'
 * '<S250>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem5'
 * '<S251>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem6'
 * '<S252>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to OP Frame/If Action Subsystem7'
 * '<S253>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem5'
 * '<S254>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem6'
 * '<S255>' : 'Robot/Motor4 Torque Control Init Frame/Set MasterState to SafeOP Frame/If Action Subsystem7'
 * '<S256>' : 'Robot/Motor4 Torque Control Init Frame/State_10_Enable/Subsystem'
 * '<S257>' : 'Robot/Motor4 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S258>' : 'Robot/Motor4 Torque Control Init Frame/State_10_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S259>' : 'Robot/Motor4 Torque Control Init Frame/State_11_Enable/Subsystem'
 * '<S260>' : 'Robot/Motor4 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S261>' : 'Robot/Motor4 Torque Control Init Frame/State_11_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S262>' : 'Robot/Motor4 Torque Control Init Frame/State_12_Enable/Subsystem'
 * '<S263>' : 'Robot/Motor4 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S264>' : 'Robot/Motor4 Torque Control Init Frame/State_12_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S265>' : 'Robot/Motor4 Torque Control Init Frame/State_13_Enable/Subsystem'
 * '<S266>' : 'Robot/Motor4 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S267>' : 'Robot/Motor4 Torque Control Init Frame/State_13_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S268>' : 'Robot/Motor4 Torque Control Init Frame/State_1_Enable/Subsystem'
 * '<S269>' : 'Robot/Motor4 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S270>' : 'Robot/Motor4 Torque Control Init Frame/State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S271>' : 'Robot/Motor4 Torque Control Init Frame/State_2_Enable/Subsystem'
 * '<S272>' : 'Robot/Motor4 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S273>' : 'Robot/Motor4 Torque Control Init Frame/State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S274>' : 'Robot/Motor4 Torque Control Init Frame/State_3_Enable/Subsystem'
 * '<S275>' : 'Robot/Motor4 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S276>' : 'Robot/Motor4 Torque Control Init Frame/State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S277>' : 'Robot/Motor4 Torque Control Init Frame/State_9_Enable/Subsystem'
 * '<S278>' : 'Robot/Motor4 Torque Control Init Frame/State_9_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S279>' : 'Robot/Motor4 Torque Control Init Frame/State_9_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S280>' : 'Robot/State_1_Enable/Subsystem'
 * '<S281>' : 'Robot/State_1_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S282>' : 'Robot/State_1_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S283>' : 'Robot/State_2_Enable/Subsystem'
 * '<S284>' : 'Robot/State_2_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S285>' : 'Robot/State_2_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S286>' : 'Robot/State_3_Enable/Subsystem'
 * '<S287>' : 'Robot/State_3_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S288>' : 'Robot/State_3_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S289>' : 'Robot/State_4_Enable/Subsystem'
 * '<S290>' : 'Robot/State_4_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S291>' : 'Robot/State_4_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S292>' : 'Robot/State_5_Enable/Subsystem'
 * '<S293>' : 'Robot/State_5_Enable/Subsystem/Switch Case Action Subsystem'
 * '<S294>' : 'Robot/State_5_Enable/Subsystem/Switch Case Action Subsystem1'
 * '<S295>' : 'Robot/Subsystem/M1_Current->TorqueCommand'
 * '<S296>' : 'Robot/Subsystem/M24_Current->TorqueCommand'
 * '<S297>' : 'Robot/Subsystem/M2_Current->TorqueCommand'
 * '<S298>' : 'Robot/Subsystem/M3_Cnt->Deg'
 * '<S299>' : 'Robot/Subsystem/M3_Command->Current'
 * '<S300>' : 'Robot/Subsystem/M3_Current->TorqueCommand'
 * '<S301>' : 'Robot/Subsystem/M3_PositionCalibrate'
 * '<S302>' : 'Robot/Subsystem/M4_Cnt->Deg'
 * '<S303>' : 'Robot/Subsystem/M4_Command->Current'
 * '<S304>' : 'Robot/Subsystem/M4_PositionCalibrate'
 * '<S305>' : 'Robot/Subsystem/Robot'
 * '<S306>' : 'Robot/Subsystem/S1ch1_ForceCalibrate'
 * '<S307>' : 'Robot/Subsystem/S1ch2_ForceCalibrate'
 * '<S308>' : 'Robot/Subsystem/S3ch1_ForceCalibrate'
 * '<S309>' : 'Robot/Subsystem/S3ch2_ForceCalibrate'
 * '<S310>' : 'Robot/Subsystem/Robot/Motor1'
 * '<S311>' : 'Robot/Subsystem/Robot/Motor2'
 * '<S312>' : 'Robot/Subsystem/Robot/Motor3'
 * '<S313>' : 'Robot/Subsystem/Robot/Motor4'
 * '<S314>' : 'Robot/Subsystem/Robot/STM32Device1'
 * '<S315>' : 'Robot/Subsystem/Robot/STM32Device2'
 * '<S316>' : 'Robot/Subsystem/Robot/STM32Device3'
 */
#endif                                 /* RTW_HEADER_Robot_h_ */

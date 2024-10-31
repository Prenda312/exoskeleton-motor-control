/*
 * Robot_private.h
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

#ifndef RTW_HEADER_Robot_private_h_
#define RTW_HEADER_Robot_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Robot.h"
#include "Robot_cal.h"
#include "Robot_types.h"

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

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong/long check: insufficient preprocessor integer range. */

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
extern unsigned int xmlecatArr_0_count;
extern unsigned char xmlecatArr_0[];
extern int_T slrtEcatDCM[8];           // From master shift controller
namespace slrealtime
{
  namespace tracing
  {
    struct IamRoot;
  }
}

extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern void Robot_Chart_Init(B_Chart_Robot_T *localB, DW_Chart_Robot_T *localDW);
extern void Robot_Chart(real_T rtu_FinishIndex, real_T rtu_TaskFinishedState,
  B_Chart_Robot_T *localB, DW_Chart_Robot_T *localDW);
extern void Robot_IfActionSubsystem7_Init(B_IfActionSubsystem7_Robot_T *localB,
  DW_IfActionSubsystem7_Robot_T *localDW, Robot_IfActionSubsystem7_cal_type
  *Robot_PageSwitching_arg);
extern void Robot_IfActionSubsystem7_Update(real_T rtu_In1,
  DW_IfActionSubsystem7_Robot_T *localDW, Robot_IfActionSubsystem7_cal_type
  *Robot_PageSwitching_arg);
extern void Robot_IfActionSubsystem7(B_IfActionSubsystem7_Robot_T *localB,
  DW_IfActionSubsystem7_Robot_T *localDW);
extern void Robot_IfActionSubsystem5(real_T rtu_In1, real_T *rty_Out1);
extern void Robot_IfActionSubsystem(uint16_T rtu_In1, uint16_T *rty_Out1);
extern void Robot_SwitchCaseActionSubsystem1(real_T rtu_In1, real_T *rty_Default);

#endif                                 /* RTW_HEADER_Robot_private_h_ */

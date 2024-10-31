/*
 * Code generation for system model 'Robot'
 *
 * Model                      : Robot
 * Model version              : 1.101
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Thu Apr 11 15:40:11 2024
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Robot.h"
#include "rtwtypes.h"
#include "Robot_cal.h"
#include "Robot_types.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "Robot_private.h"
#include <cstring>

/* Named constants for Chart: '<S2>/Chart' */
const uint32_T Robot_IN_Init_step0 = 1U;
const uint32_T Robot_IN_Init_step01 = 2U;
const uint32_T Robot_IN_Init_step02 = 3U;
const uint32_T Robot_IN_Init_step03 = 4U;
const uint32_T Robot_IN_Init_step04 = 5U;
const uint32_T Robot_IN_Init_step05 = 6U;
const uint32_T Robot_IN_Init_step06 = 7U;
const uint32_T Robot_IN_Init_step07 = 8U;
const uint32_T Robot_IN_Init_step08 = 9U;
const uint32_T Robot_IN_Init_step09 = 10U;
const uint32_T Robot_IN_Init_step10 = 11U;
const uint32_T Robot_IN_Init_step11 = 12U;
const uint32_T Robot_IN_Init_step12 = 13U;
const uint32_T Robot_IN_Init_step13 = 14U;
const uint32_T Robot_IN_Init_step14 = 15U;
const uint8_T Robot_IN_NO_ACTIVE_CHILD = 0U;

/* Named constants for Chart: '<Root>/Chart' */
const uint32_T Robot_IN_InitMotor1 = 1U;
const uint32_T Robot_IN_InitMotor2 = 2U;
const uint32_T Robot_IN_InitMotor3 = 3U;
const uint32_T Robot_IN_InitMotor4 = 4U;
const uint8_T Robot_IN_NO_ACTIVE_CHILD_i = 0U;
const uint32_T Robot_IN_Run = 5U;
const uint32_T Robot_IN_Start = 6U;
int_T Robot_GlobalTID[2];
const rtTimingBridge *Robot_TimingBrdg;
MdlrefDW_Robot_T Robot_MdlrefDW;

/* Block signals (default storage) */
B_Robot_c_T Robot_B;

/* Block states (default storage) */
DW_Robot_f_T Robot_DW;
void Root_EtherCATInit_callback(void * const ptr_rtm )
{
  int_T status = 1;
  static const char_T *errMsg;
  int_T j;
  static char_T msg[256];
  std::string logfile( "" );           //logFileName );
  std::string DeviceType( "I8254x" );
  mwStateClear( 0 );
  LOG(info,0) << "EtherCAT going to state 8";
  status = slrtEcatInit(0,
                        DeviceType.c_str(),
                        1,
                        1,
                        (unsigned char *)xmlecatArr_0,
                        xmlecatArr_0_count,
                        1,
                        1,
                        logfile.c_str(),
                        0.001,
                        0,
                        8 );
  if (status != XPC_ECAT_OK) {
    // Create a local <refmodelname>_rtm ptr and copy from the rtm ptr passed in
    RT_MODEL_Robot_T *Robot_M = (RT_MODEL_Robot_T * const)ptr_rtm;
    if ((((uint32_T)status >> 16) & 0xffff) == 0xffff ) {
      // Our error conditions, negative numbers.
      switch ( status )
      {
       case -10:        // very rare, sg_getEthercatInterface can't be executed!
        errMsg =
          "Speedgoat library files for EtherCAT port identification are not properly installed on the target";
        break;

       case -11:          // rare, sg_getEthercatInterface didn't create eciface
        errMsg = "Ethernet port mapping failed";// eciface didn't get created
        break;

       case -12:
              // common, User entered a 1 based port number that isn't reserved.
        errMsg = "EtherCAT port 1 is not reserved for EtherCAT";
        break;
      }
    } else {
      if ((uint32_T)status == 0x9811000C )
        errMsg =
          "Network port 1 is not accessible to EtherCAT.\nIt is either non-existant or not configured for EtherCAT.";
      else
        errMsg = xpcPrintEtherCATError(0, 0);
    }

    rtmSetErrorStatus(Robot_M, errMsg);
    return;
  }
}

void S15_EtherCATAsyncSDOUpload_callback(void *ptr)
{
  registerAsyncSDOUpload( 156, 4, 0);
}

void S17_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 4;
  registerAsyncSDODownload( 463, width, 0);
}

void S16_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 1;
  registerAsyncSDODownload( 403, width, 0);
}

void S79_EtherCATAsyncSDOUpload_callback(void *ptr)
{
  registerAsyncSDOUpload( 960, 4, 0);
}

void S81_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 4;
  registerAsyncSDODownload( 1267, width, 0);
}

void S80_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 1;
  registerAsyncSDODownload( 1207, width, 0);
}

void S147_EtherCATAsyncSDOUpload_callback(void *ptr)
{
  registerAsyncSDOUpload( 2111, 4, 0);
}

void S149_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 4;
  registerAsyncSDODownload( 2418, width, 0);
}

void S148_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 1;
  registerAsyncSDODownload( 2358, width, 0);
}

void S215_EtherCATAsyncSDOUpload_callback(void *ptr)
{
  registerAsyncSDOUpload( 2915, 4, 0);
}

void S217_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 4;
  registerAsyncSDODownload( 3222, width, 0);
}

void S216_EtherCATAsyncSDODownload_callback(void *ptr)
{
  int_T width = 1;
  registerAsyncSDODownload( 3162, width, 0);
}

/*
 * System initialize for atomic system:
 *    '<S2>/Chart'
 *    '<S3>/Chart'
 *    '<S4>/Chart'
 *    '<S5>/Chart'
 */
void Robot_Chart_Init(B_Chart_Robot_T *localB, DW_Chart_Robot_T *localDW)
{
  localDW->is_active_c1_Robot = 0U;
  localDW->is_c1_Robot = Robot_IN_NO_ACTIVE_CHILD;
  localB->State = 0.0;
  localB->TaskFinished = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S2>/Chart'
 *    '<S3>/Chart'
 *    '<S4>/Chart'
 *    '<S5>/Chart'
 */
void Robot_Chart(real_T rtu_FinishIndex, real_T rtu_TaskFinishedState,
                 B_Chart_Robot_T *localB, DW_Chart_Robot_T *localDW)
{
  /* Chart: '<S2>/Chart' */
  if (localDW->is_active_c1_Robot == 0U) {
    localDW->is_active_c1_Robot = 1U;
    localDW->is_c1_Robot = Robot_IN_Init_step0;
    localB->State = 0.0;
    localB->TaskFinished = 0.0;
  } else {
    switch (localDW->is_c1_Robot) {
     case Robot_IN_Init_step0:
      localDW->is_c1_Robot = Robot_IN_Init_step01;
      localB->State = 1.0;
      break;

     case Robot_IN_Init_step01:
      if (rtu_TaskFinishedState == 1.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step02;
        localB->State = 2.0;
      } else {
        localB->State = 1.0;
      }
      break;

     case Robot_IN_Init_step02:
      if (rtu_TaskFinishedState == 2.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step03;
        localB->State = 3.0;
      } else {
        localB->State = 2.0;
      }
      break;

     case Robot_IN_Init_step03:
      if (rtu_TaskFinishedState == 3.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step10;
        localB->State = 10.0;
      } else {
        localB->State = 3.0;
      }
      break;

     case Robot_IN_Init_step04:
      if (rtu_TaskFinishedState == 4.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step05;
        localB->State = 5.0;
      } else {
        localB->State = 4.0;
      }
      break;

     case Robot_IN_Init_step05:
      if (rtu_TaskFinishedState == 5.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step06;
        localB->State = 6.0;
      } else {
        localB->State = 5.0;
      }
      break;

     case Robot_IN_Init_step06:
      if (rtu_TaskFinishedState == 6.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step07;
        localB->State = 7.0;
      } else {
        localB->State = 6.0;
      }
      break;

     case Robot_IN_Init_step07:
      if (rtu_TaskFinishedState == 7.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step08;
        localB->State = 8.0;
      } else {
        localB->State = 7.0;
      }
      break;

     case Robot_IN_Init_step08:
      if (rtu_TaskFinishedState == 8.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step09;
        localB->State = 9.0;
      } else {
        localB->State = 8.0;
      }
      break;

     case Robot_IN_Init_step09:
      localB->State = 9.0;
      break;

     case Robot_IN_Init_step10:
      if (rtu_TaskFinishedState == 10.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step11;
        localB->State = 11.0;
      } else {
        localB->State = 10.0;
      }
      break;

     case Robot_IN_Init_step11:
      if (rtu_TaskFinishedState == 11.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step12;
        localB->State = 12.0;
      } else {
        localB->State = 11.0;
      }
      break;

     case Robot_IN_Init_step12:
      if (rtu_TaskFinishedState == 12.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step13;
        localB->State = 13.0;
      } else {
        localB->State = 12.0;
      }
      break;

     case Robot_IN_Init_step13:
      if (rtu_TaskFinishedState == 13.0) {
        localDW->is_c1_Robot = Robot_IN_Init_step14;
        localB->State = 14.0;
        localB->TaskFinished = rtu_FinishIndex;
      } else {
        localB->State = 13.0;
      }
      break;

     default:
      /* case IN_Init_step14: */
      localB->State = 14.0;
      localB->TaskFinished = rtu_FinishIndex;
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */
}

/*
 * System initialize for action system:
 *    '<S13>/If Action Subsystem7'
 *    '<S14>/If Action Subsystem7'
 *    '<S15>/If Action Subsystem7'
 *    '<S16>/If Action Subsystem7'
 *    '<S17>/If Action Subsystem7'
 *    '<S18>/If Action Subsystem7'
 *    '<S19>/If Action Subsystem7'
 *    '<S77>/If Action Subsystem7'
 *    '<S78>/If Action Subsystem7'
 *    '<S79>/If Action Subsystem7'
 *    ...
 */
void Robot_IfActionSubsystem7_Init(B_IfActionSubsystem7_Robot_T *localB,
  DW_IfActionSubsystem7_Robot_T *localDW, Robot_IfActionSubsystem7_cal_type
  *Robot_PageSwitching_arg)
{
  /* InitializeConditions for DiscreteIntegrator: '<S29>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE =
    Robot_PageSwitching_arg->DiscreteTimeIntegrator_IC;

  /* SystemInitialize for DiscreteIntegrator: '<S29>/Discrete-Time Integrator' incorporates:
   *  Outport: '<S29>/Out1'
   */
  localB->DiscreteTimeIntegrator = Robot_PageSwitching_arg->Out1_Y0;
}

/*
 * Outputs for action system:
 *    '<S13>/If Action Subsystem7'
 *    '<S14>/If Action Subsystem7'
 *    '<S15>/If Action Subsystem7'
 *    '<S16>/If Action Subsystem7'
 *    '<S17>/If Action Subsystem7'
 *    '<S18>/If Action Subsystem7'
 *    '<S19>/If Action Subsystem7'
 *    '<S77>/If Action Subsystem7'
 *    '<S78>/If Action Subsystem7'
 *    '<S79>/If Action Subsystem7'
 *    ...
 */
void Robot_IfActionSubsystem7(B_IfActionSubsystem7_Robot_T *localB,
  DW_IfActionSubsystem7_Robot_T *localDW)
{
  /* DiscreteIntegrator: '<S29>/Discrete-Time Integrator' */
  localB->DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DSTATE;
}

/*
 * Update for action system:
 *    '<S13>/If Action Subsystem7'
 *    '<S14>/If Action Subsystem7'
 *    '<S15>/If Action Subsystem7'
 *    '<S16>/If Action Subsystem7'
 *    '<S17>/If Action Subsystem7'
 *    '<S18>/If Action Subsystem7'
 *    '<S19>/If Action Subsystem7'
 *    '<S77>/If Action Subsystem7'
 *    '<S78>/If Action Subsystem7'
 *    '<S79>/If Action Subsystem7'
 *    ...
 */
void Robot_IfActionSubsystem7_Update(real_T rtu_In1,
  DW_IfActionSubsystem7_Robot_T *localDW, Robot_IfActionSubsystem7_cal_type
  *Robot_PageSwitching_arg)
{
  /* Update for DiscreteIntegrator: '<S29>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE +=
    Robot_PageSwitching_arg->DiscreteTimeIntegrator_gainval * rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S13>/If Action Subsystem5'
 *    '<S13>/If Action Subsystem6'
 *    '<S14>/If Action Subsystem5'
 *    '<S14>/If Action Subsystem6'
 *    '<S15>/If Action Subsystem5'
 *    '<S15>/If Action Subsystem6'
 *    '<S16>/If Action Subsystem5'
 *    '<S16>/If Action Subsystem6'
 *    '<S17>/If Action Subsystem5'
 *    '<S17>/If Action Subsystem6'
 *    ...
 */
void Robot_IfActionSubsystem5(real_T rtu_In1, real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S27>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S14>/If Action Subsystem'
 *    '<S14>/If Action Subsystem1'
 *    '<S14>/If Action Subsystem2'
 *    '<S14>/If Action Subsystem4'
 *    '<S78>/If Action Subsystem'
 *    '<S78>/If Action Subsystem1'
 *    '<S78>/If Action Subsystem2'
 *    '<S78>/If Action Subsystem4'
 *    '<S146>/If Action Subsystem'
 *    '<S146>/If Action Subsystem1'
 *    ...
 */
void Robot_IfActionSubsystem(uint16_T rtu_In1, uint16_T *rty_Out1)
{
  /* SignalConversion generated from: '<S31>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<S55>/Switch Case Action Subsystem1'
 *    '<S58>/Switch Case Action Subsystem1'
 *    '<S61>/Switch Case Action Subsystem1'
 *    '<S64>/Switch Case Action Subsystem1'
 *    '<S67>/Switch Case Action Subsystem1'
 *    '<S70>/Switch Case Action Subsystem1'
 *    '<S73>/Switch Case Action Subsystem1'
 *    '<S120>/Switch Case Action Subsystem1'
 *    '<S123>/Switch Case Action Subsystem1'
 *    '<S126>/Switch Case Action Subsystem1'
 *    ...
 */
void Robot_SwitchCaseActionSubsystem1(real_T rtu_In1, real_T *rty_Default)
{
  /* SignalConversion generated from: '<S57>/In1' */
  *rty_Default = rtu_In1;
}

/* System initialize for referenced model: 'Robot' */
void Robot_Init(real_T *rty_State)
{
  RT_MODEL_Robot_T *const Robot_M = &(Robot_MdlrefDW.rtm);

  /* Start for S-Function (slecatinit): '<Root>/EtherCAT Init' */
  slrealtime::StartCallbackService::registerCB( std::bind
    ( Root_EtherCATInit_callback, (void * const)Robot_M ), 10 );

  /* InitializeConditions for Memory: '<Root>/Memory1' */
  Robot_DW.Memory1_PreviousInput = Robot_cal->Memory1_InitialCondition_m;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Robot_DW.is_active_c3_Robot = 0U;
  Robot_DW.is_c3_Robot = Robot_IN_NO_ACTIVE_CHILD_i;
  *rty_State = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<Root>/Motor1 Torque Control Init Frame' */
  /* InitializeConditions for Memory: '<S2>/Memory1' */
  Robot_DW.Memory1_PreviousInput_k = Robot_cal->Memory1_InitialCondition;

  /* SystemInitialize for Chart: '<S2>/Chart' */
  Robot_Chart_Init(&Robot_B.sf_Chart_g, &Robot_DW.sf_Chart_g);

  /* Start for If: '<S19>/If1' */
  Robot_DW.If1_ActiveSubsystem_ke = -1;

  /* SystemInitialize for IfAction SubSystem: '<S19>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_i,
    &Robot_DW.IfActionSubsystem7_i, &Robot_cal->Robot_IfActionSubsystem7_i_cal);

  /* End of SystemInitialize for SubSystem: '<S19>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S2>/Set MasterState to SafeOP Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' */
  /* Start for S-Function (slecatasyncsdoread): '<S15>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S15>/Constant'
   */

  /*------------ S-Function Block: <S15>/EtherCAT Async SDO Upload Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S15_EtherCATAsyncSDOUpload_callback, nullptr ), 0 );

  /* Start for If: '<S15>/If1' */
  Robot_DW.If1_ActiveSubsystem_lk = -1;

  /* SystemInitialize for IfAction SubSystem: '<S15>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_h,
    &Robot_DW.IfActionSubsystem7_h, &Robot_cal->Robot_IfActionSubsystem7_h_cal);

  /* End of SystemInitialize for SubSystem: '<S15>/If Action Subsystem7' */

  /* SystemInitialize for S-Function (slecatasyncsdoread): '<S15>/EtherCAT Async SDO Upload' incorporates:
   *  Outport: '<S15>/RatedCurrent'
   */
  Robot_B.EtherCATAsyncSDOUpload_o1_lg = Robot_cal->RatedCurrent_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/SDO Get 0x6075 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S17>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   */

  /*------------ S-Function Block: <S17>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S17_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S17>/If1' */
  Robot_DW.If1_ActiveSubsystem_hv = -1;

  /* SystemInitialize for IfAction SubSystem: '<S17>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_px,
    &Robot_DW.IfActionSubsystem7_px, &Robot_cal->Robot_IfActionSubsystem7_px_cal);

  /* End of SystemInitialize for SubSystem: '<S17>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S16>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   */

  /*------------ S-Function Block: <S16>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S16_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S16>/If1' */
  Robot_DW.If1_ActiveSubsystem_pj = -1;

  /* SystemInitialize for IfAction SubSystem: '<S16>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_j,
    &Robot_DW.IfActionSubsystem7_j, &Robot_cal->Robot_IfActionSubsystem7_j_cal);

  /* End of SystemInitialize for SubSystem: '<S16>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */

  /* Start for If: '<S18>/If1' */
  Robot_DW.If1_ActiveSubsystem_p4 = -1;

  /* SystemInitialize for IfAction SubSystem: '<S18>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_pl,
    &Robot_DW.IfActionSubsystem7_pl, &Robot_cal->Robot_IfActionSubsystem7_pl_cal);

  /* End of SystemInitialize for SubSystem: '<S18>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S2>/Set MasterState to OP Frame' */

  /* Start for S-Function (slecatgetslavestate): '<S13>/Get Device State' */
  *&Robot_B.GetDeviceState_i = (int32_T)0;

  /* Start for If: '<S13>/If1' */
  Robot_DW.If1_ActiveSubsystem_j = -1;

  /* SystemInitialize for IfAction SubSystem: '<S13>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7,
    &Robot_DW.IfActionSubsystem7, &Robot_cal->Robot_IfActionSubsystem7_cal);

  /* End of SystemInitialize for SubSystem: '<S13>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S2>/Get MasterState OP Frame' */

  /* Start for If: '<S14>/If1' */
  Robot_DW.If1_ActiveSubsystem_if = -1;

  /* InitializeConditions for UnitDelay: '<S30>/Output' */
  Robot_DW.Output_DSTATE_f = Robot_cal->Output_InitialCondition;

  /* InitializeConditions for Memory: '<S14>/Memory' */
  Robot_DW.Memory_PreviousInput_dn = Robot_cal->Memory_InitialCondition;

  /* SystemInitialize for IfAction SubSystem: '<S14>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_p,
    &Robot_DW.IfActionSubsystem7_p, &Robot_cal->Robot_IfActionSubsystem7_p_cal);

  /* End of SystemInitialize for SubSystem: '<S14>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */

  /* SystemInitialize for Merge: '<S2>/Merge1' */
  Robot_B.Merge1_pg = Robot_cal->Merge1_InitialOutput;

  /* End of SystemInitialize for SubSystem: '<Root>/Motor1 Torque Control Init Frame' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Motor2 Torque Control Init Frame' */
  /* InitializeConditions for Memory: '<S3>/Memory1' */
  Robot_DW.Memory1_PreviousInput_j = Robot_cal->Memory1_InitialCondition_f;

  /* SystemInitialize for Chart: '<S3>/Chart' */
  Robot_Chart_Init(&Robot_B.sf_Chart_o, &Robot_DW.sf_Chart_o);

  /* Start for S-Function (slecatgetslavestate): '<S77>/Get Device State' */
  *&Robot_B.GetDeviceState_d = (int32_T)0;

  /* Start for If: '<S77>/If1' */
  Robot_DW.If1_ActiveSubsystem_e = -1;

  /* SystemInitialize for IfAction SubSystem: '<S77>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_hm,
    &Robot_DW.IfActionSubsystem7_hm, &Robot_cal->Robot_IfActionSubsystem7_hm_cal);

  /* End of SystemInitialize for SubSystem: '<S77>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S3>/Get MasterState OP Frame' */

  /* Start for If: '<S83>/If1' */
  Robot_DW.If1_ActiveSubsystem_a = -1;

  /* SystemInitialize for IfAction SubSystem: '<S83>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_p5,
    &Robot_DW.IfActionSubsystem7_p5, &Robot_cal->Robot_IfActionSubsystem7_p5_cal);

  /* End of SystemInitialize for SubSystem: '<S83>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S3>/Set MasterState to SafeOP Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' */
  /* Start for S-Function (slecatasyncsdoread): '<S79>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S79>/Constant'
   */

  /*------------ S-Function Block: <S79>/EtherCAT Async SDO Upload Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S79_EtherCATAsyncSDOUpload_callback, nullptr ), 0 );

  /* Start for If: '<S79>/If1' */
  Robot_DW.If1_ActiveSubsystem_ma = -1;

  /* SystemInitialize for IfAction SubSystem: '<S79>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_he,
    &Robot_DW.IfActionSubsystem7_he, &Robot_cal->Robot_IfActionSubsystem7_he_cal);

  /* End of SystemInitialize for SubSystem: '<S79>/If Action Subsystem7' */

  /* SystemInitialize for S-Function (slecatasyncsdoread): '<S79>/EtherCAT Async SDO Upload' incorporates:
   *  Outport: '<S79>/RatedCurrent'
   */
  Robot_B.EtherCATAsyncSDOUpload_o1_p = Robot_cal->RatedCurrent_Y0_a;

  /* End of SystemInitialize for SubSystem: '<S3>/SDO Get 0x6075 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S81>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S81>/Constant'
   *  Constant: '<S81>/Constant1'
   */

  /*------------ S-Function Block: <S81>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S81_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S81>/If1' */
  Robot_DW.If1_ActiveSubsystem_d = -1;

  /* SystemInitialize for IfAction SubSystem: '<S81>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_l,
    &Robot_DW.IfActionSubsystem7_l, &Robot_cal->Robot_IfActionSubsystem7_l_cal);

  /* End of SystemInitialize for SubSystem: '<S81>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S80>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S80>/Constant'
   *  Constant: '<S80>/Constant1'
   */

  /*------------ S-Function Block: <S80>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S80_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S80>/If1' */
  Robot_DW.If1_ActiveSubsystem_iq = -1;

  /* SystemInitialize for IfAction SubSystem: '<S80>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_ji,
    &Robot_DW.IfActionSubsystem7_ji, &Robot_cal->Robot_IfActionSubsystem7_ji_cal);

  /* End of SystemInitialize for SubSystem: '<S80>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */

  /* Start for If: '<S82>/If1' */
  Robot_DW.If1_ActiveSubsystem_i = -1;

  /* SystemInitialize for IfAction SubSystem: '<S82>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_m,
    &Robot_DW.IfActionSubsystem7_m, &Robot_cal->Robot_IfActionSubsystem7_m_cal);

  /* End of SystemInitialize for SubSystem: '<S82>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S3>/Set MasterState to OP Frame' */

  /* Start for If: '<S78>/If1' */
  Robot_DW.If1_ActiveSubsystem_gn = -1;

  /* InitializeConditions for UnitDelay: '<S95>/Output' */
  Robot_DW.Output_DSTATE_e = Robot_cal->Output_InitialCondition_i;

  /* InitializeConditions for Memory: '<S78>/Memory' */
  Robot_DW.Memory_PreviousInput_b = Robot_cal->Memory_InitialCondition_m;

  /* SystemInitialize for IfAction SubSystem: '<S78>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_hj,
    &Robot_DW.IfActionSubsystem7_hj, &Robot_cal->Robot_IfActionSubsystem7_hj_cal);

  /* End of SystemInitialize for SubSystem: '<S78>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */

  /* SystemInitialize for Merge: '<S3>/Merge1' */
  Robot_B.Merge1_h = Robot_cal->Merge1_InitialOutput_k;

  /* End of SystemInitialize for SubSystem: '<Root>/Motor2 Torque Control Init Frame' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Motor3 Torque Control Init Frame' */
  /* InitializeConditions for Memory: '<S4>/Memory1' */
  Robot_DW.Memory1_PreviousInput_l = Robot_cal->Memory1_InitialCondition_i;

  /* SystemInitialize for Chart: '<S4>/Chart' */
  Robot_Chart_Init(&Robot_B.sf_Chart_a, &Robot_DW.sf_Chart_a);

  /* Start for S-Function (slecatgetslavestate): '<S145>/Get Device State' */
  *&Robot_B.GetDeviceState_g = (int32_T)0;

  /* Start for If: '<S145>/If1' */
  Robot_DW.If1_ActiveSubsystem_mo = -1;

  /* SystemInitialize for IfAction SubSystem: '<S145>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_lp,
    &Robot_DW.IfActionSubsystem7_lp, &Robot_cal->Robot_IfActionSubsystem7_lp_cal);

  /* End of SystemInitialize for SubSystem: '<S145>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S4>/Get MasterState OP Frame' */

  /* Start for If: '<S151>/If1' */
  Robot_DW.If1_ActiveSubsystem_l2 = -1;

  /* SystemInitialize for IfAction SubSystem: '<S151>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_n,
    &Robot_DW.IfActionSubsystem7_n, &Robot_cal->Robot_IfActionSubsystem7_n_cal);

  /* End of SystemInitialize for SubSystem: '<S151>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S4>/Set MasterState to SafeOP Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' */
  /* Start for S-Function (slecatasyncsdoread): '<S147>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S147>/Constant'
   */

  /*------------ S-Function Block: <S147>/EtherCAT Async SDO Upload Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S147_EtherCATAsyncSDOUpload_callback, nullptr ), 0 );

  /* Start for If: '<S147>/If1' */
  Robot_DW.If1_ActiveSubsystem_c = -1;

  /* SystemInitialize for IfAction SubSystem: '<S147>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_e,
    &Robot_DW.IfActionSubsystem7_e, &Robot_cal->Robot_IfActionSubsystem7_e_cal);

  /* End of SystemInitialize for SubSystem: '<S147>/If Action Subsystem7' */

  /* SystemInitialize for S-Function (slecatasyncsdoread): '<S147>/EtherCAT Async SDO Upload' incorporates:
   *  Outport: '<S147>/RatedCurrent'
   */
  Robot_B.EtherCATAsyncSDOUpload_o1_l = Robot_cal->RatedCurrent_Y0_b;

  /* End of SystemInitialize for SubSystem: '<S4>/SDO Get 0x6075 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S149>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S149>/Constant'
   *  Constant: '<S149>/Constant1'
   */

  /*------------ S-Function Block: <S149>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S149_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S149>/If1' */
  Robot_DW.If1_ActiveSubsystem_k = -1;

  /* SystemInitialize for IfAction SubSystem: '<S149>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_k,
    &Robot_DW.IfActionSubsystem7_k, &Robot_cal->Robot_IfActionSubsystem7_k_cal);

  /* End of SystemInitialize for SubSystem: '<S149>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S148>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S148>/Constant'
   *  Constant: '<S148>/Constant1'
   */

  /*------------ S-Function Block: <S148>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S148_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S148>/If1' */
  Robot_DW.If1_ActiveSubsystem_h = -1;

  /* SystemInitialize for IfAction SubSystem: '<S148>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_a,
    &Robot_DW.IfActionSubsystem7_a, &Robot_cal->Robot_IfActionSubsystem7_a_cal);

  /* End of SystemInitialize for SubSystem: '<S148>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */

  /* Start for If: '<S150>/If1' */
  Robot_DW.If1_ActiveSubsystem_g = -1;

  /* SystemInitialize for IfAction SubSystem: '<S150>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_ld,
    &Robot_DW.IfActionSubsystem7_ld, &Robot_cal->Robot_IfActionSubsystem7_ld_cal);

  /* End of SystemInitialize for SubSystem: '<S150>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S4>/Set MasterState to OP Frame' */

  /* Start for If: '<S146>/If1' */
  Robot_DW.If1_ActiveSubsystem_mz = -1;

  /* InitializeConditions for UnitDelay: '<S163>/Output' */
  Robot_DW.Output_DSTATE_g = Robot_cal->Output_InitialCondition_j;

  /* InitializeConditions for Memory: '<S146>/Memory' */
  Robot_DW.Memory_PreviousInput_d = Robot_cal->Memory_InitialCondition_m1;

  /* SystemInitialize for IfAction SubSystem: '<S146>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_d,
    &Robot_DW.IfActionSubsystem7_d, &Robot_cal->Robot_IfActionSubsystem7_d_cal);

  /* End of SystemInitialize for SubSystem: '<S146>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */

  /* SystemInitialize for Merge: '<S4>/Merge1' */
  Robot_B.Merge1_p = Robot_cal->Merge1_InitialOutput_l;

  /* End of SystemInitialize for SubSystem: '<Root>/Motor3 Torque Control Init Frame' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
  /* InitializeConditions for Memory: '<S5>/Memory1' */
  Robot_DW.Memory1_PreviousInput_h = Robot_cal->Memory1_InitialCondition_fh;

  /* SystemInitialize for Chart: '<S5>/Chart' */
  Robot_Chart_Init(&Robot_B.sf_Chart_i, &Robot_DW.sf_Chart_i);

  /* Start for S-Function (slecatgetslavestate): '<S213>/Get Device State' */
  *&Robot_B.GetDeviceState = (int32_T)0;

  /* Start for If: '<S213>/If1' */
  Robot_DW.If1_ActiveSubsystem_p = -1;

  /* SystemInitialize for IfAction SubSystem: '<S213>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_nv,
    &Robot_DW.IfActionSubsystem7_nv, &Robot_cal->Robot_IfActionSubsystem7_nv_cal);

  /* End of SystemInitialize for SubSystem: '<S213>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S5>/Get MasterState OP Frame' */

  /* Start for If: '<S219>/If1' */
  Robot_DW.If1_ActiveSubsystem = -1;

  /* SystemInitialize for IfAction SubSystem: '<S219>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_g,
    &Robot_DW.IfActionSubsystem7_g, &Robot_cal->Robot_IfActionSubsystem7_g_cal);

  /* End of SystemInitialize for SubSystem: '<S219>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S5>/Set MasterState to SafeOP Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' */
  /* Start for S-Function (slecatasyncsdoread): '<S215>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S215>/Constant'
   */

  /*------------ S-Function Block: <S215>/EtherCAT Async SDO Upload Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S215_EtherCATAsyncSDOUpload_callback, nullptr ), 0 );

  /* Start for If: '<S215>/If1' */
  Robot_DW.If1_ActiveSubsystem_l = -1;

  /* SystemInitialize for IfAction SubSystem: '<S215>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_jt,
    &Robot_DW.IfActionSubsystem7_jt, &Robot_cal->Robot_IfActionSubsystem7_jt_cal);

  /* End of SystemInitialize for SubSystem: '<S215>/If Action Subsystem7' */

  /* SystemInitialize for S-Function (slecatasyncsdoread): '<S215>/EtherCAT Async SDO Upload' incorporates:
   *  Outport: '<S215>/RatedCurrent'
   */
  Robot_B.EtherCATAsyncSDOUpload_o1 = Robot_cal->RatedCurrent_Y0_g;

  /* End of SystemInitialize for SubSystem: '<S5>/SDO Get 0x6075 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S217>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S217>/Constant'
   *  Constant: '<S217>/Constant1'
   */

  /*------------ S-Function Block: <S217>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S217_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S217>/If1' */
  Robot_DW.If1_ActiveSubsystem_f = -1;

  /* SystemInitialize for IfAction SubSystem: '<S217>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_dt,
    &Robot_DW.IfActionSubsystem7_dt, &Robot_cal->Robot_IfActionSubsystem7_dt_cal);

  /* End of SystemInitialize for SubSystem: '<S217>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */

  /* SystemInitialize for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */
  /* Start for S-Function (slecatasyncsdowrite): '<S216>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S216>/Constant'
   *  Constant: '<S216>/Constant1'
   */

  /*------------ S-Function Block: <S216>/EtherCAT Async SDO Download Start ------------*/
  slrealtime::StartCallbackService::registerCB( std::bind
    ( S216_EtherCATAsyncSDODownload_callback, nullptr ), 0 );

  /* Start for If: '<S216>/If1' */
  Robot_DW.If1_ActiveSubsystem_b = -1;

  /* SystemInitialize for IfAction SubSystem: '<S216>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_hk,
    &Robot_DW.IfActionSubsystem7_hk, &Robot_cal->Robot_IfActionSubsystem7_hk_cal);

  /* End of SystemInitialize for SubSystem: '<S216>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */

  /* Start for If: '<S218>/If1' */
  Robot_DW.If1_ActiveSubsystem_n = -1;

  /* SystemInitialize for IfAction SubSystem: '<S218>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_kq,
    &Robot_DW.IfActionSubsystem7_kq, &Robot_cal->Robot_IfActionSubsystem7_kq_cal);

  /* End of SystemInitialize for SubSystem: '<S218>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S5>/Set MasterState to OP Frame' */

  /* Start for If: '<S214>/If1' */
  Robot_DW.If1_ActiveSubsystem_m = -1;

  /* InitializeConditions for UnitDelay: '<S231>/Output' */
  Robot_DW.Output_DSTATE = Robot_cal->Output_InitialCondition_c;

  /* InitializeConditions for Memory: '<S214>/Memory' */
  Robot_DW.Memory_PreviousInput = Robot_cal->Memory_InitialCondition_k;

  /* SystemInitialize for IfAction SubSystem: '<S214>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_Init(&Robot_B.IfActionSubsystem7_pb,
    &Robot_DW.IfActionSubsystem7_pb, &Robot_cal->Robot_IfActionSubsystem7_pb_cal);

  /* End of SystemInitialize for SubSystem: '<S214>/If Action Subsystem7' */
  /* End of SystemInitialize for SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */

  /* SystemInitialize for Merge: '<S5>/Merge1' */
  Robot_B.Merge1_g = Robot_cal->Merge1_InitialOutput_j;

  /* End of SystemInitialize for SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
  /* SystemInitialize for S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/M1_ActuralPosition'
   */
  Robot_B.EtherCATPDOReceive1_m = Robot_cal->M1_ActuralPosition_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/M1_ActuralVelocity'
   */
  Robot_B.EtherCATPDOReceive2_d = Robot_cal->M1_ActuralVelocity_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/M1_ActuralTorque'
   */
  Robot_B.EtherCATPDOReceive3_j = Robot_cal->M1_ActuralTorque_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/M1_DCLinkCircuitVoltage'
   */
  Robot_B.EtherCATPDOReceive4 = Robot_cal->M1_DCLinkCircuitVoltage_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/M1_ModeofOperationDisplay'
   */
  Robot_B.EtherCATPDOReceive5_f = Robot_cal->M1_ModeofOperationDisplay_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/M2_ActuralPosition'
   */
  Robot_B.EtherCATPDOReceive1_d = Robot_cal->M2_ActuralPosition_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/M2_ActuralVelocity'
   */
  Robot_B.EtherCATPDOReceive2_n = Robot_cal->M2_ActuralVelocity_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/M2_ActuralTorque'
   */
  Robot_B.EtherCATPDOReceive3_fr = Robot_cal->M2_ActuralTorque_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/M2_DCLinkCircuitVoltage'
   */
  Robot_B.EtherCATPDOReceive4_m = Robot_cal->M2_DCLinkCircuitVoltage_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/M2_ModeofOperationDisplay'
   */
  Robot_B.EtherCATPDOReceive5_p4t = Robot_cal->M2_ModeofOperationDisplay_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/M3_ActuralPosition'
   */
  Robot_B.EtherCATPDOReceive1_hi = Robot_cal->M3_ActuralPosition_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/M3_ActuralVelocity'
   */
  Robot_B.EtherCATPDOReceive2_k = Robot_cal->M3_ActuralVelocity_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/M3_ActuralTorque'
   */
  Robot_B.EtherCATPDOReceive3_l = Robot_cal->M3_ActuralTorque_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/M3_DCLinkCircuitVoltage'
   */
  Robot_B.EtherCATPDOReceive4_d = Robot_cal->M3_DCLinkCircuitVoltage_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/M3_ModeofOperationDisplay'
   */
  Robot_B.EtherCATPDOReceive5_h = Robot_cal->M3_ModeofOperationDisplay_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/M4_ActuralPosition'
   */
  Robot_B.EtherCATPDOReceive1_mt = Robot_cal->M4_ActuralPosition_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/M4_ActuralVelocity'
   */
  Robot_B.EtherCATPDOReceive2_c = Robot_cal->M4_ActuralVelocity_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/M4_ActuralTorque'
   */
  Robot_B.EtherCATPDOReceive3_ji = Robot_cal->M4_ActuralTorque_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/M4_DCLinkCircuitVoltage'
   */
  Robot_B.EtherCATPDOReceive4_g = Robot_cal->M4_DCLinkCircuitVoltage_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/M4_ModeofOperationDisplay'
   */
  Robot_B.EtherCATPDOReceive5_b = Robot_cal->M4_ModeofOperationDisplay_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/S1_AD_Ch1'
   */
  Robot_B.EtherCATPDOReceive1 = Robot_cal->S1_AD_Ch1_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/S1_AD_Ch2'
   */
  Robot_B.EtherCATPDOReceive2 = Robot_cal->S1_AD_Ch2_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/S1_Quaternions_q0'
   */
  Robot_B.EtherCATPDOReceive3 = Robot_cal->S1_Quaternions_q0_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/S1_Quaternions_q1'
   */
  Robot_B.EtherCATPDOReceive4_gz = Robot_cal->S1_Quaternions_q1_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/S1_Quaternions_q2'
   */
  Robot_B.EtherCATPDOReceive5 = Robot_cal->S1_Quaternions_q2_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive6' incorporates:
   *  Outport: '<S305>/S1_Quaternions_q3'
   */
  Robot_B.EtherCATPDOReceive6 = Robot_cal->S1_Quaternions_q3_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/S2_AD_Ch1'
   */
  Robot_B.EtherCATPDOReceive1_h = Robot_cal->S2_AD_Ch1_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/S2_AD_Ch2'
   */
  Robot_B.EtherCATPDOReceive2_p = Robot_cal->S2_AD_Ch2_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/S2_Quaternions_q0'
   */
  Robot_B.EtherCATPDOReceive3_f = Robot_cal->S2_Quaternions_q0_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/S2_Quaternions_q1'
   */
  Robot_B.EtherCATPDOReceive4_n = Robot_cal->S2_Quaternions_q1_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/S2_Quaternions_q2'
   */
  Robot_B.EtherCATPDOReceive5_p = Robot_cal->S2_Quaternions_q2_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive6' incorporates:
   *  Outport: '<S305>/S2_Quaternions_q3'
   */
  Robot_B.EtherCATPDOReceive6_c = Robot_cal->S2_Quaternions_q3_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive1' incorporates:
   *  Outport: '<S305>/S3_AD_Ch1'
   */
  Robot_B.EtherCATPDOReceive1_p = Robot_cal->S3_AD_Ch1_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive2' incorporates:
   *  Outport: '<S305>/S3_AD_Ch2'
   */
  Robot_B.EtherCATPDOReceive2_ps = Robot_cal->S3_AD_Ch2_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive3' incorporates:
   *  Outport: '<S305>/S3_Quaternions_q0'
   */
  Robot_B.EtherCATPDOReceive3_g = Robot_cal->S3_Quaternions_q0_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive4' incorporates:
   *  Outport: '<S305>/S3_Quaternions_q1'
   */
  Robot_B.EtherCATPDOReceive4_h = Robot_cal->S3_Quaternions_q1_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive5' incorporates:
   *  Outport: '<S305>/S3_Quaternions_q2'
   */
  Robot_B.EtherCATPDOReceive5_p4 = Robot_cal->S3_Quaternions_q2_Y0;

  /* SystemInitialize for S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive6' incorporates:
   *  Outport: '<S305>/S3_Quaternions_q3'
   */
  Robot_B.EtherCATPDOReceive6_p = Robot_cal->S3_Quaternions_q3_Y0;

  /* End of SystemInitialize for SubSystem: '<S11>/Robot' */

  /* SystemInitialize for Merge: '<Root>/Merge1' */
  Robot_B.Merge1 = Robot_cal->Merge1_InitialOutput_g;
}

/* System reset for referenced model: 'Robot' */
void Robot_Reset(real_T *rty_State)
{
  /* InitializeConditions for Memory: '<Root>/Memory1' */
  Robot_DW.Memory1_PreviousInput = Robot_cal->Memory1_InitialCondition_m;

  /* SystemReset for Chart: '<Root>/Chart' */
  Robot_DW.is_active_c3_Robot = 0U;
  Robot_DW.is_c3_Robot = Robot_IN_NO_ACTIVE_CHILD_i;
  *rty_State = 0.0;
}

/* Disable for referenced model: 'Robot' */
void Robot_Disable(void)
{
  /* Disable for Enabled SubSystem: '<Root>/Motor1 Torque Control Init Frame' */
  if (Robot_DW.Motor1TorqueControlInitFrame_MODE) {
    /* Disable for Enabled SubSystem: '<S2>/Set MasterState to SafeOP Frame' */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f) {
      /* Disable for If: '<S19>/If1' */
      Robot_DW.If1_ActiveSubsystem_ke = -1;
      Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f = false;
    }

    /* End of Disable for SubSystem: '<S2>/Set MasterState to SafeOP Frame' */

    /* Disable for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' */
    if (Robot_DW.SDOGet0x6075Frame_MODE_ca) {
      /* Disable for If: '<S15>/If1' */
      Robot_DW.If1_ActiveSubsystem_lk = -1;
      Robot_DW.SDOGet0x6075Frame_MODE_ca = false;
    }

    /* End of Disable for SubSystem: '<S2>/SDO Get 0x6075 Frame' */

    /* Disable for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */
    if (Robot_DW.SDOSet0x60801Frame_MODE_g) {
      /* Disable for If: '<S17>/If1' */
      Robot_DW.If1_ActiveSubsystem_hv = -1;
      Robot_DW.SDOSet0x60801Frame_MODE_g = false;
    }

    /* End of Disable for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */

    /* Disable for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */
    if (Robot_DW.SDOSet0x606010Frame_MODE_l) {
      /* Disable for If: '<S16>/If1' */
      Robot_DW.If1_ActiveSubsystem_pj = -1;
      Robot_DW.SDOSet0x606010Frame_MODE_l = false;
    }

    /* End of Disable for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */

    /* Disable for Enabled SubSystem: '<S2>/Set MasterState to OP Frame' */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE_m) {
      /* Disable for If: '<S18>/If1' */
      Robot_DW.If1_ActiveSubsystem_p4 = -1;
      Robot_DW.SetMasterStatetoOPFrame_MODE_m = false;
    }

    /* End of Disable for SubSystem: '<S2>/Set MasterState to OP Frame' */

    /* Disable for Enabled SubSystem: '<S2>/Get MasterState OP Frame' */
    if (Robot_DW.GetMasterStateOPFrame_MODE_e) {
      /* Disable for If: '<S13>/If1' */
      Robot_DW.If1_ActiveSubsystem_j = -1;
      Robot_DW.GetMasterStateOPFrame_MODE_e = false;
    }

    /* End of Disable for SubSystem: '<S2>/Get MasterState OP Frame' */

    /* Disable for Enabled SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
    if (Robot_DW.PDOSet0x60406715Frame_MODE_m) {
      /* Disable for If: '<S14>/If1' */
      Robot_DW.If1_ActiveSubsystem_if = -1;
      Robot_DW.PDOSet0x60406715Frame_MODE_m = false;
    }

    /* End of Disable for SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
    Robot_DW.Motor1TorqueControlInitFrame_MODE = false;
  }

  /* End of Disable for SubSystem: '<Root>/Motor1 Torque Control Init Frame' */

  /* Disable for Enabled SubSystem: '<Root>/Motor2 Torque Control Init Frame' */
  if (Robot_DW.Motor2TorqueControlInitFrame_MODE) {
    /* Disable for Enabled SubSystem: '<S3>/Get MasterState OP Frame' */
    if (Robot_DW.GetMasterStateOPFrame_MODE_m) {
      /* Disable for If: '<S77>/If1' */
      Robot_DW.If1_ActiveSubsystem_e = -1;
      Robot_DW.GetMasterStateOPFrame_MODE_m = false;
    }

    /* End of Disable for SubSystem: '<S3>/Get MasterState OP Frame' */

    /* Disable for Enabled SubSystem: '<S3>/Set MasterState to SafeOP Frame' */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n) {
      /* Disable for If: '<S83>/If1' */
      Robot_DW.If1_ActiveSubsystem_a = -1;
      Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n = false;
    }

    /* End of Disable for SubSystem: '<S3>/Set MasterState to SafeOP Frame' */

    /* Disable for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' */
    if (Robot_DW.SDOGet0x6075Frame_MODE_h) {
      /* Disable for If: '<S79>/If1' */
      Robot_DW.If1_ActiveSubsystem_ma = -1;
      Robot_DW.SDOGet0x6075Frame_MODE_h = false;
    }

    /* End of Disable for SubSystem: '<S3>/SDO Get 0x6075 Frame' */

    /* Disable for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */
    if (Robot_DW.SDOSet0x60801Frame_MODE_b) {
      /* Disable for If: '<S81>/If1' */
      Robot_DW.If1_ActiveSubsystem_d = -1;
      Robot_DW.SDOSet0x60801Frame_MODE_b = false;
    }

    /* End of Disable for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */

    /* Disable for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */
    if (Robot_DW.SDOSet0x606010Frame_MODE_b) {
      /* Disable for If: '<S80>/If1' */
      Robot_DW.If1_ActiveSubsystem_iq = -1;
      Robot_DW.SDOSet0x606010Frame_MODE_b = false;
    }

    /* End of Disable for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */

    /* Disable for Enabled SubSystem: '<S3>/Set MasterState to OP Frame' */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE_a) {
      /* Disable for If: '<S82>/If1' */
      Robot_DW.If1_ActiveSubsystem_i = -1;
      Robot_DW.SetMasterStatetoOPFrame_MODE_a = false;
    }

    /* End of Disable for SubSystem: '<S3>/Set MasterState to OP Frame' */

    /* Disable for Enabled SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
    if (Robot_DW.PDOSet0x60406715Frame_MODE_l) {
      /* Disable for If: '<S78>/If1' */
      Robot_DW.If1_ActiveSubsystem_gn = -1;
      Robot_DW.PDOSet0x60406715Frame_MODE_l = false;
    }

    /* End of Disable for SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
    Robot_DW.Motor2TorqueControlInitFrame_MODE = false;
  }

  /* End of Disable for SubSystem: '<Root>/Motor2 Torque Control Init Frame' */

  /* Disable for Enabled SubSystem: '<Root>/Motor3 Torque Control Init Frame' */
  if (Robot_DW.Motor3TorqueControlInitFrame_MODE) {
    /* Disable for Enabled SubSystem: '<S4>/Get MasterState OP Frame' */
    if (Robot_DW.GetMasterStateOPFrame_MODE_j) {
      /* Disable for If: '<S145>/If1' */
      Robot_DW.If1_ActiveSubsystem_mo = -1;
      Robot_DW.GetMasterStateOPFrame_MODE_j = false;
    }

    /* End of Disable for SubSystem: '<S4>/Get MasterState OP Frame' */

    /* Disable for Enabled SubSystem: '<S4>/Set MasterState to SafeOP Frame' */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j) {
      /* Disable for If: '<S151>/If1' */
      Robot_DW.If1_ActiveSubsystem_l2 = -1;
      Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j = false;
    }

    /* End of Disable for SubSystem: '<S4>/Set MasterState to SafeOP Frame' */

    /* Disable for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' */
    if (Robot_DW.SDOGet0x6075Frame_MODE_c) {
      /* Disable for If: '<S147>/If1' */
      Robot_DW.If1_ActiveSubsystem_c = -1;
      Robot_DW.SDOGet0x6075Frame_MODE_c = false;
    }

    /* End of Disable for SubSystem: '<S4>/SDO Get 0x6075 Frame' */

    /* Disable for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */
    if (Robot_DW.SDOSet0x60801Frame_MODE_m) {
      /* Disable for If: '<S149>/If1' */
      Robot_DW.If1_ActiveSubsystem_k = -1;
      Robot_DW.SDOSet0x60801Frame_MODE_m = false;
    }

    /* End of Disable for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */

    /* Disable for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */
    if (Robot_DW.SDOSet0x606010Frame_MODE_m) {
      /* Disable for If: '<S148>/If1' */
      Robot_DW.If1_ActiveSubsystem_h = -1;
      Robot_DW.SDOSet0x606010Frame_MODE_m = false;
    }

    /* End of Disable for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */

    /* Disable for Enabled SubSystem: '<S4>/Set MasterState to OP Frame' */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE_g) {
      /* Disable for If: '<S150>/If1' */
      Robot_DW.If1_ActiveSubsystem_g = -1;
      Robot_DW.SetMasterStatetoOPFrame_MODE_g = false;
    }

    /* End of Disable for SubSystem: '<S4>/Set MasterState to OP Frame' */

    /* Disable for Enabled SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
    if (Robot_DW.PDOSet0x60406715Frame_MODE_h) {
      /* Disable for If: '<S146>/If1' */
      Robot_DW.If1_ActiveSubsystem_mz = -1;
      Robot_DW.PDOSet0x60406715Frame_MODE_h = false;
    }

    /* End of Disable for SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
    Robot_DW.Motor3TorqueControlInitFrame_MODE = false;
  }

  /* End of Disable for SubSystem: '<Root>/Motor3 Torque Control Init Frame' */

  /* Disable for Enabled SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
  if (Robot_DW.Motor4TorqueControlInitFrame_MODE) {
    /* Disable for Enabled SubSystem: '<S5>/Get MasterState OP Frame' */
    if (Robot_DW.GetMasterStateOPFrame_MODE) {
      /* Disable for If: '<S213>/If1' */
      Robot_DW.If1_ActiveSubsystem_p = -1;
      Robot_DW.GetMasterStateOPFrame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/Get MasterState OP Frame' */

    /* Disable for Enabled SubSystem: '<S5>/Set MasterState to SafeOP Frame' */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE) {
      /* Disable for If: '<S219>/If1' */
      Robot_DW.If1_ActiveSubsystem = -1;
      Robot_DW.SetMasterStatetoSafeOPFrame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/Set MasterState to SafeOP Frame' */

    /* Disable for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' */
    if (Robot_DW.SDOGet0x6075Frame_MODE) {
      /* Disable for If: '<S215>/If1' */
      Robot_DW.If1_ActiveSubsystem_l = -1;
      Robot_DW.SDOGet0x6075Frame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/SDO Get 0x6075 Frame' */

    /* Disable for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */
    if (Robot_DW.SDOSet0x60801Frame_MODE) {
      /* Disable for If: '<S217>/If1' */
      Robot_DW.If1_ActiveSubsystem_f = -1;
      Robot_DW.SDOSet0x60801Frame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */

    /* Disable for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */
    if (Robot_DW.SDOSet0x606010Frame_MODE) {
      /* Disable for If: '<S216>/If1' */
      Robot_DW.If1_ActiveSubsystem_b = -1;
      Robot_DW.SDOSet0x606010Frame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */

    /* Disable for Enabled SubSystem: '<S5>/Set MasterState to OP Frame' */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE) {
      /* Disable for If: '<S218>/If1' */
      Robot_DW.If1_ActiveSubsystem_n = -1;
      Robot_DW.SetMasterStatetoOPFrame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/Set MasterState to OP Frame' */

    /* Disable for Enabled SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
    if (Robot_DW.PDOSet0x60406715Frame_MODE) {
      /* Disable for If: '<S214>/If1' */
      Robot_DW.If1_ActiveSubsystem_m = -1;
      Robot_DW.PDOSet0x60406715Frame_MODE = false;
    }

    /* End of Disable for SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
    Robot_DW.Motor4TorqueControlInitFrame_MODE = false;
  }

  /* End of Disable for SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
}

/* Outputs for referenced model: 'Robot' */
void Robot(const ControlBus *rtu_BusIn, SensingBus *rty_BusOut, real_T
           *rty_State)
{
  RT_MODEL_Robot_T *const Robot_M = &(Robot_MdlrefDW.rtm);
  real_T u;
  int8_T rtAction;

  {
    /* user code (Output function Header) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init Process Received Frames ------------*/
      unsigned int data[6]= { 0 };

      int32_T msdata[4] = { 0 };

      xpcEtherCATReadProcessData(0,NULL);
      mwErrorGet((int_T)0,
                 &data[0], &data[1], &data[2], (int *)&data[3], &data[4], (int *)
                 &data[5]);
      memcpy(&Robot_B.EtherCATInit[0], data,6*sizeof(int32_T));
      mwErrorClear( (int_T)0 );

      // Clear all momentary triggered values
    }

    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Memory: '<Root>/Memory1' */
      Robot_B.Memory1 = Robot_DW.Memory1_PreviousInput;

      /* Chart: '<Root>/Chart' */
      if (Robot_DW.is_active_c3_Robot == 0U) {
        Robot_DW.is_active_c3_Robot = 1U;
        Robot_DW.is_c3_Robot = Robot_IN_Start;
        *rty_State = 0.0;
      } else {
        switch (Robot_DW.is_c3_Robot) {
         case Robot_IN_InitMotor1:
          if (Robot_B.Memory1 == 1.0) {
            Robot_DW.is_c3_Robot = Robot_IN_InitMotor2;
            *rty_State = 2.0;
          } else {
            *rty_State = 1.0;
          }
          break;

         case Robot_IN_InitMotor2:
          if (Robot_B.Memory1 == 2.0) {
            Robot_DW.is_c3_Robot = Robot_IN_InitMotor3;
            *rty_State = 3.0;
          } else {
            *rty_State = 2.0;
          }
          break;

         case Robot_IN_InitMotor3:
          if (Robot_B.Memory1 == 3.0) {
            Robot_DW.is_c3_Robot = Robot_IN_InitMotor4;
            *rty_State = 4.0;
          } else {
            *rty_State = 3.0;
          }
          break;

         case Robot_IN_InitMotor4:
          if (Robot_B.Memory1 == 4.0) {
            Robot_DW.is_c3_Robot = Robot_IN_Run;
            *rty_State = 5.0;
          } else {
            *rty_State = 4.0;
          }
          break;

         case Robot_IN_Run:
          *rty_State = 5.0;
          break;

         default:
          /* case IN_Start: */
          if (Robot_B.EtherCATInit[1] == 8) {
            Robot_DW.is_c3_Robot = Robot_IN_InitMotor1;
            *rty_State = 1.0;
          } else {
            *rty_State = 0.0;
          }
          break;
        }
      }

      /* End of Chart: '<Root>/Chart' */

      /* SwitchCase: '<S6>/Switch Case' incorporates:
       *  Constant: '<S280>/Constant'
       *  Constant: '<S280>/Constant1'
       */
      u = *rty_State;
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
        /* Outputs for IfAction SubSystem: '<S280>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S281>/Action Port'
         */
        Robot_IfActionSubsystem5(Robot_cal->Constant_Value_pt, &Robot_B.Merge);

        /* End of Outputs for SubSystem: '<S280>/Switch Case Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S280>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S282>/Action Port'
         */
        Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_dg,
          &Robot_B.Merge);

        /* End of Outputs for SubSystem: '<S280>/Switch Case Action Subsystem1' */
      }

      /* End of SwitchCase: '<S6>/Switch Case' */

      /* Gain: '<S295>/Gain1' incorporates:
       *  Constant: '<Root>/Constant'
       */
      Robot_B.Gain1 = Robot_cal->Gain1_Gain * Robot_cal->Constant_Value_k;

      /* Outputs for Enabled SubSystem: '<Root>/Motor1 Torque Control Init Frame' incorporates:
       *  EnablePort: '<S2>/Enable'
       */
      if (Robot_B.Merge > 0.0) {
        Robot_DW.Motor1TorqueControlInitFrame_MODE = true;
      } else if (Robot_DW.Motor1TorqueControlInitFrame_MODE) {
        /* Disable for Enabled SubSystem: '<S2>/Set MasterState to SafeOP Frame' */
        if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f) {
          /* Disable for If: '<S19>/If1' */
          Robot_DW.If1_ActiveSubsystem_ke = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f = false;
        }

        /* End of Disable for SubSystem: '<S2>/Set MasterState to SafeOP Frame' */

        /* Disable for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' */
        if (Robot_DW.SDOGet0x6075Frame_MODE_ca) {
          /* Disable for If: '<S15>/If1' */
          Robot_DW.If1_ActiveSubsystem_lk = -1;
          Robot_DW.SDOGet0x6075Frame_MODE_ca = false;
        }

        /* End of Disable for SubSystem: '<S2>/SDO Get 0x6075 Frame' */

        /* Disable for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */
        if (Robot_DW.SDOSet0x60801Frame_MODE_g) {
          /* Disable for If: '<S17>/If1' */
          Robot_DW.If1_ActiveSubsystem_hv = -1;
          Robot_DW.SDOSet0x60801Frame_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */

        /* Disable for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */
        if (Robot_DW.SDOSet0x606010Frame_MODE_l) {
          /* Disable for If: '<S16>/If1' */
          Robot_DW.If1_ActiveSubsystem_pj = -1;
          Robot_DW.SDOSet0x606010Frame_MODE_l = false;
        }

        /* End of Disable for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */

        /* Disable for Enabled SubSystem: '<S2>/Set MasterState to OP Frame' */
        if (Robot_DW.SetMasterStatetoOPFrame_MODE_m) {
          /* Disable for If: '<S18>/If1' */
          Robot_DW.If1_ActiveSubsystem_p4 = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE_m = false;
        }

        /* End of Disable for SubSystem: '<S2>/Set MasterState to OP Frame' */

        /* Disable for Enabled SubSystem: '<S2>/Get MasterState OP Frame' */
        if (Robot_DW.GetMasterStateOPFrame_MODE_e) {
          /* Disable for If: '<S13>/If1' */
          Robot_DW.If1_ActiveSubsystem_j = -1;
          Robot_DW.GetMasterStateOPFrame_MODE_e = false;
        }

        /* End of Disable for SubSystem: '<S2>/Get MasterState OP Frame' */

        /* Disable for Enabled SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
        if (Robot_DW.PDOSet0x60406715Frame_MODE_m) {
          /* Disable for If: '<S14>/If1' */
          Robot_DW.If1_ActiveSubsystem_if = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE_m = false;
        }

        /* End of Disable for SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
        Robot_DW.Motor1TorqueControlInitFrame_MODE = false;
      }

      /* End of Outputs for SubSystem: '<Root>/Motor1 Torque Control Init Frame' */
    }

    /* Outputs for Enabled SubSystem: '<Root>/Motor1 Torque Control Init Frame' incorporates:
     *  EnablePort: '<S2>/Enable'
     */
    if (Robot_DW.Motor1TorqueControlInitFrame_MODE) {
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Memory: '<S2>/Memory1' */
        Robot_B.Memory1_o = Robot_DW.Memory1_PreviousInput_k;

        /* Chart: '<S2>/Chart' incorporates:
         *  Constant: '<S280>/Constant2'
         */
        Robot_Chart(Robot_cal->State_1_Enable_TaskIndex_njg, Robot_B.Memory1_o,
                    &Robot_B.sf_Chart_g, &Robot_DW.sf_Chart_g);

        /* SwitchCase: '<S24>/Switch Case' incorporates:
         *  Constant: '<S67>/Constant'
         *  Constant: '<S67>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
          /* Outputs for IfAction SubSystem: '<S67>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S68>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value, &Robot_B.Merge_nf);

          /* End of Outputs for SubSystem: '<S67>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S67>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S69>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value,
            &Robot_B.Merge_nf);

          /* End of Outputs for SubSystem: '<S67>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S24>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/Set MasterState to SafeOP Frame' incorporates:
         *  EnablePort: '<S19>/Enable'
         */
        if (Robot_B.Merge_nf > 0.0) {
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f = true;
        } else if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f) {
          /* Disable for If: '<S19>/If1' */
          Robot_DW.If1_ActiveSubsystem_ke = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f = false;
        }

        /* End of Outputs for SubSystem: '<S2>/Set MasterState to SafeOP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/Set MasterState to SafeOP Frame' incorporates:
       *  EnablePort: '<S19>/Enable'
       */
      if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S19>/Set Device State' incorporates:
           *  Constant: '<S19>/Constant1'
           *  Constant: '<S19>/Constant2'
           */
          {
            /*------------ S-Function Block: <S19>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_e;
            enable = (bool) *&Robot_cal->Constant1_Value_hu;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1001,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_l = prevstate;
              *&Robot_B.SetDeviceState_o2_i = res;
            }
          }

          /* If: '<S19>/If1' */
          if (Robot_B.SetDeviceState_o1_l == 4) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S54>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_i,
              &Robot_DW.IfActionSubsystem7_i);

            /* End of Outputs for SubSystem: '<S19>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_ke = rtAction;

          /* End of If: '<S19>/If1' */

          /* If: '<S19>/If2' incorporates:
           *  Constant: '<S19>/Constant4'
           *  Constant: '<S67>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_i.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S52>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_1_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S19>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S53>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_oi,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S19>/If Action Subsystem6' */
          }

          /* End of If: '<S19>/If2' */
        }

        /* Clock: '<S19>/Clock' */
        Robot_B.Clock_nm = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/Set MasterState to SafeOP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S25>/Switch Case' incorporates:
         *  Constant: '<S70>/Constant'
         *  Constant: '<S70>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
          /* Outputs for IfAction SubSystem: '<S70>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S71>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_l,
            &Robot_B.Merge_gf);

          /* End of Outputs for SubSystem: '<S70>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S70>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S72>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_e,
            &Robot_B.Merge_gf);

          /* End of Outputs for SubSystem: '<S70>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S25>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' incorporates:
         *  EnablePort: '<S15>/Enable'
         */
        if (Robot_B.Merge_gf > 0.0) {
          Robot_DW.SDOGet0x6075Frame_MODE_ca = true;
        } else if (Robot_DW.SDOGet0x6075Frame_MODE_ca) {
          /* Disable for If: '<S15>/If1' */
          Robot_DW.If1_ActiveSubsystem_lk = -1;
          Robot_DW.SDOGet0x6075Frame_MODE_ca = false;
        }

        /* End of Outputs for SubSystem: '<S2>/SDO Get 0x6075 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' incorporates:
       *  EnablePort: '<S15>/Enable'
       */
      if (Robot_DW.SDOGet0x6075Frame_MODE_ca) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdoread): '<S15>/EtherCAT Async SDO Upload' incorporates:
           *  Constant: '<S15>/Constant'
           */
          {
            /*------------ S-Function Block: <S15>/EtherCAT Async SDO Upload Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T actLen;
            int_T res;
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDOUpload( 0,
                1001,
                (unsigned short)24693,
                (unsigned char)0,
                (void *)&Robot_B.EtherCATAsyncSDOUpload_o1_lg,
                4,
                &actLen,
                3000,
                156,
                (int32_T *)&Robot_B.EtherCATAsyncSDOUpload_o2_l,
                *(int32_T *)&Robot_cal->Constant_Value_mh,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDOUpload_o3_k = res;
            }
          }

          /* If: '<S15>/If2' incorporates:
           *  Constant: '<S15>/Constant4'
           *  Constant: '<S70>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDOUpload_o2_l == 2) {
            /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S40>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_2_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S15>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S15>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S41>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_o,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S15>/If Action Subsystem6' */
          }

          /* End of If: '<S15>/If2' */

          /* If: '<S15>/If1' */
          Robot_DW.If1_ActiveSubsystem_lk = 1;
        }

        /* Clock: '<S15>/Clock' */
        Robot_B.Clock_nj = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/SDO Get 0x6075 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S26>/Switch Case' incorporates:
         *  Constant: '<S73>/Constant'
         *  Constant: '<S73>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
          /* Outputs for IfAction SubSystem: '<S73>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S74>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_lp,
            &Robot_B.Merge_dt);

          /* End of Outputs for SubSystem: '<S73>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S73>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S75>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_j,
            &Robot_B.Merge_dt);

          /* End of Outputs for SubSystem: '<S73>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S26>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' incorporates:
         *  EnablePort: '<S17>/Enable'
         */
        if (Robot_B.Merge_dt > 0.0) {
          Robot_DW.SDOSet0x60801Frame_MODE_g = true;
        } else if (Robot_DW.SDOSet0x60801Frame_MODE_g) {
          /* Disable for If: '<S17>/If1' */
          Robot_DW.If1_ActiveSubsystem_hv = -1;
          Robot_DW.SDOSet0x60801Frame_MODE_g = false;
        }

        /* End of Outputs for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' incorporates:
       *  EnablePort: '<S17>/Enable'
       */
      if (Robot_DW.SDOSet0x60801Frame_MODE_g) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S17>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S17>/Constant'
           *  Constant: '<S17>/Constant1'
           */
          {
            /*------------ S-Function Block: <S17>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 4;
            char *buf = (char *)&Robot_cal->Constant_Value_cn;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1001,
                (unsigned short)24704,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_cn,
                width,
                3000,
                463,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_gk,
                *(int32_T *)&Robot_cal->Constant1_Value_pd,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_n = res;
            }
          }

          /* If: '<S17>/If2' incorporates:
           *  Constant: '<S17>/Constant4'
           *  Constant: '<S73>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_gk == 2) {
            /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S46>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_3_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S17>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S47>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_l,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S17>/If Action Subsystem6' */
          }

          /* End of If: '<S17>/If2' */

          /* If: '<S17>/If1' */
          Robot_DW.If1_ActiveSubsystem_hv = 1;
        }

        /* Clock: '<S17>/Clock' */
        Robot_B.Clock_m3 = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S20>/Switch Case' incorporates:
         *  Constant: '<S55>/Constant'
         *  Constant: '<S55>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 10) {
          /* Outputs for IfAction SubSystem: '<S55>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S56>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_p,
            &Robot_B.Merge_au);

          /* End of Outputs for SubSystem: '<S55>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S55>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S57>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_o,
            &Robot_B.Merge_au);

          /* End of Outputs for SubSystem: '<S55>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S20>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' incorporates:
         *  EnablePort: '<S16>/Enable'
         */
        if (Robot_B.Merge_au > 0.0) {
          Robot_DW.SDOSet0x606010Frame_MODE_l = true;
        } else if (Robot_DW.SDOSet0x606010Frame_MODE_l) {
          /* Disable for If: '<S16>/If1' */
          Robot_DW.If1_ActiveSubsystem_pj = -1;
          Robot_DW.SDOSet0x606010Frame_MODE_l = false;
        }

        /* End of Outputs for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' incorporates:
       *  EnablePort: '<S16>/Enable'
       */
      if (Robot_DW.SDOSet0x606010Frame_MODE_l) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S16>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S16>/Constant'
           *  Constant: '<S16>/Constant1'
           */
          {
            /*------------ S-Function Block: <S16>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 1;
            char *buf = (char *)&Robot_cal->Constant_Value_ju;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1001,
                (unsigned short)24672,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_ju,
                width,
                2000,
                403,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_cq,
                *(int32_T *)&Robot_cal->Constant1_Value_gd,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_fm = res;
            }
          }

          /* If: '<S16>/If2' incorporates:
           *  Constant: '<S16>/Constant4'
           *  Constant: '<S55>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_cq == 2) {
            /* Outputs for IfAction SubSystem: '<S16>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S43>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_10_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S16>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S16>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S44>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_i,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S16>/If Action Subsystem6' */
          }

          /* End of If: '<S16>/If2' */

          /* If: '<S16>/If1' */
          Robot_DW.If1_ActiveSubsystem_pj = 1;
        }

        /* Clock: '<S16>/Clock' */
        Robot_B.Clock_mk = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S21>/Switch Case' incorporates:
         *  Constant: '<S58>/Constant'
         *  Constant: '<S58>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 11) {
          /* Outputs for IfAction SubSystem: '<S58>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S59>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_i,
            &Robot_B.Merge_g1);

          /* End of Outputs for SubSystem: '<S58>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S58>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S60>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_n,
            &Robot_B.Merge_g1);

          /* End of Outputs for SubSystem: '<S58>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S21>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/Set MasterState to OP Frame' incorporates:
         *  EnablePort: '<S18>/Enable'
         */
        if (Robot_B.Merge_g1 > 0.0) {
          Robot_DW.SetMasterStatetoOPFrame_MODE_m = true;
        } else if (Robot_DW.SetMasterStatetoOPFrame_MODE_m) {
          /* Disable for If: '<S18>/If1' */
          Robot_DW.If1_ActiveSubsystem_p4 = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE_m = false;
        }

        /* End of Outputs for SubSystem: '<S2>/Set MasterState to OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/Set MasterState to OP Frame' incorporates:
       *  EnablePort: '<S18>/Enable'
       */
      if (Robot_DW.SetMasterStatetoOPFrame_MODE_m) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S18>/Set Device State' incorporates:
           *  Constant: '<S18>/Constant1'
           *  Constant: '<S18>/Constant2'
           */
          {
            /*------------ S-Function Block: <S18>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value;
            enable = (bool) *&Robot_cal->Constant1_Value_l0;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1001,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_a = prevstate;
              *&Robot_B.SetDeviceState_o2_e = res;
            }
          }

          /* If: '<S18>/If1' */
          if (Robot_B.SetDeviceState_o1_a == 8) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S51>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_pl,
              &Robot_DW.IfActionSubsystem7_pl);

            /* End of Outputs for SubSystem: '<S18>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_p4 = rtAction;

          /* End of If: '<S18>/If1' */

          /* If: '<S18>/If2' incorporates:
           *  Constant: '<S18>/Constant4'
           *  Constant: '<S58>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_pl.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S49>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_11_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S18>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S50>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_j,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S18>/If Action Subsystem6' */
          }

          /* End of If: '<S18>/If2' */
        }

        /* Clock: '<S18>/Clock' */
        Robot_B.Clock_c = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/Set MasterState to OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S22>/Switch Case' incorporates:
         *  Constant: '<S61>/Constant'
         *  Constant: '<S61>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 12) {
          /* Outputs for IfAction SubSystem: '<S61>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S62>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_h, &Robot_B.Merge_l);

          /* End of Outputs for SubSystem: '<S61>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S61>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S63>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_i,
            &Robot_B.Merge_l);

          /* End of Outputs for SubSystem: '<S61>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S22>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/Get MasterState OP Frame' incorporates:
         *  EnablePort: '<S13>/Enable'
         */
        if (Robot_B.Merge_l > 0.0) {
          Robot_DW.GetMasterStateOPFrame_MODE_e = true;
        } else if (Robot_DW.GetMasterStateOPFrame_MODE_e) {
          /* Disable for If: '<S13>/If1' */
          Robot_DW.If1_ActiveSubsystem_j = -1;
          Robot_DW.GetMasterStateOPFrame_MODE_e = false;
        }

        /* End of Outputs for SubSystem: '<S2>/Get MasterState OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/Get MasterState OP Frame' incorporates:
       *  EnablePort: '<S13>/Enable'
       */
      if (Robot_DW.GetMasterStateOPFrame_MODE_e) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S13>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S13>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_e;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 744;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* S-Function (slecatgetslavestate): '<S13>/Get Device State' */
          {
            /*------------ S-Function Block: <S13>/Get Device State Outputs  ------------*/
            unsigned short curstate;
            int res;
            res = slEtherCATgetSlaveState( 0,
              1001,
              &curstate );
            *&Robot_B.GetDeviceState_i = 0xff & (int32_T)curstate;

            // The function returns unsigned short, but our block returns int32.
          }

          /* If: '<S13>/If2' incorporates:
           *  Constant: '<S13>/Constant4'
           *  Constant: '<S61>/Constant2'
           */
          if (Robot_B.GetDeviceState_i == 8) {
            /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_12_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S13>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S28>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S13>/If Action Subsystem6' */
          }

          /* End of If: '<S13>/If2' */

          /* If: '<S13>/If1' */
          Robot_DW.If1_ActiveSubsystem_j = 1;
        }

        /* Clock: '<S13>/Clock' */
        Robot_B.Clock_i = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/Get MasterState OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S23>/Switch Case' incorporates:
         *  Constant: '<S64>/Constant'
         *  Constant: '<S64>/Constant1'
         */
        u = Robot_B.sf_Chart_g.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 13) {
          /* Outputs for IfAction SubSystem: '<S64>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S65>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_a,
            &Robot_B.Merge_oj);

          /* End of Outputs for SubSystem: '<S64>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S64>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S66>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_f,
            &Robot_B.Merge_oj);

          /* End of Outputs for SubSystem: '<S64>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S23>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' incorporates:
         *  EnablePort: '<S14>/Enable'
         */
        if (Robot_B.Merge_oj > 0.0) {
          Robot_DW.PDOSet0x60406715Frame_MODE_m = true;
        } else if (Robot_DW.PDOSet0x60406715Frame_MODE_m) {
          /* Disable for If: '<S14>/If1' */
          Robot_DW.If1_ActiveSubsystem_if = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE_m = false;
        }

        /* End of Outputs for SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' incorporates:
       *  EnablePort: '<S14>/Enable'
       */
      if (Robot_DW.PDOSet0x60406715Frame_MODE_m) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S14>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S14>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_g;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 744;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* UnitDelay: '<S30>/Output' */
          Robot_B.Output_e = Robot_DW.Output_DSTATE_f;

          /* Memory: '<S14>/Memory' */
          Robot_B.Memory_j = Robot_DW.Memory_PreviousInput_dn;

          /* If: '<S14>/If' incorporates:
           *  Constant: '<S14>/Constant'
           *  Constant: '<S14>/Constant1'
           *  Constant: '<S14>/Constant2'
           */
          if ((Robot_B.EtherCATPDOReceive1_g == 720) && (Robot_B.Output_e == 500))
          {
            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
             *  ActionPort: '<S31>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant_Value_hu,
              &Robot_B.Merge_ir);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
          } else if ((Robot_B.EtherCATPDOReceive1_g == 689) && (Robot_B.Output_e
                      == 500)) {
            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant1_Value_dk,
              &Robot_B.Merge_ir);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
          } else if ((Robot_B.EtherCATPDOReceive1_g == 691) && (Robot_B.Output_e
                      == 500)) {
            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S33>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant2_Value_a,
              &Robot_B.Merge_ir);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem2' */
          } else {
            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S34>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_B.Memory_j, &Robot_B.Merge_ir);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem4' */
          }

          /* End of If: '<S14>/If' */

          /* If: '<S14>/If1' */
          if ((Robot_B.EtherCATPDOReceive1_g == 4663) ||
              (Robot_B.EtherCATPDOReceive1_g == 4791)) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S37>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_p,
              &Robot_DW.IfActionSubsystem7_p);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_if = rtAction;

          /* End of If: '<S14>/If1' */

          /* S-Function (slecatpdotx): '<S14>/EtherCAT PDO Transmit1' */
          {
            /*------------ S-Function Block: <S14>/EtherCAT PDO Transmit1 PDO transmit block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            int_T i;
            uint8_T *sigInputPtr = (uint8_T *)&Robot_B.Merge_ir;
            uint8_T *ecatTxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
            bitOffset = 712;
            for (i = 0; i < 1; i++) {
              switch ( 5 ){
               case SS_DOUBLE:
                *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                  [i];
                break;

               case SS_SINGLE:
                *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                  sigInputPtr)[i];
                break;

               case SS_INT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_UINT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint8_T *)sigInputPtr)));
                }
                break;

               case SS_BOOLEAN:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_INT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int16_T *)sigInputPtr)));
                }
                break;

               case SS_UINT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint16_T *)sigInputPtr)));
                }
                break;

               case SS_INT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int32_T *)sigInputPtr)));
                }
                break;

               case SS_UINT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint32_T *)sigInputPtr)));
                }
                break;

               default:
                /* Fatal error. Should never happen as this is checked in mdlStart. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* Sum: '<S38>/FixPt Sum1' incorporates:
           *  Constant: '<S38>/FixPt Constant'
           */
          Robot_B.FixPtSum1_k = static_cast<uint16_T>(static_cast<uint32_T>
            (Robot_B.Output_e) + Robot_cal->FixPtConstant_Value);

          /* Switch: '<S39>/FixPt Switch' */
          if (Robot_B.FixPtSum1_k > Robot_cal->CounterLimited_uplimit) {
            /* Switch: '<S39>/FixPt Switch' incorporates:
             *  Constant: '<S39>/Constant'
             */
            Robot_B.FixPtSwitch_b = Robot_cal->Constant_Value_js;
          } else {
            /* Switch: '<S39>/FixPt Switch' */
            Robot_B.FixPtSwitch_b = Robot_B.FixPtSum1_k;
          }

          /* End of Switch: '<S39>/FixPt Switch' */

          /* If: '<S14>/If2' incorporates:
           *  Constant: '<S14>/Constant4'
           *  Constant: '<S64>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_p.DiscreteTimeIntegrator >= 0.1) {
            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S35>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_13_Enable_TaskIndex,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S36>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_n,
              &Robot_B.Merge1_pg);

            /* End of Outputs for SubSystem: '<S14>/If Action Subsystem6' */
          }

          /* End of If: '<S14>/If2' */
        }

        /* Clock: '<S14>/Clock' */
        Robot_B.Clock_ea = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Merge: '<Root>/Merge1' incorporates:
         *  SignalConversion generated from: '<S2>/TaskFinished'
         */
        Robot_B.Merge1 = Robot_B.sf_Chart_g.TaskFinished;
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Motor1 Torque Control Init Frame' */
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Product: '<S295>/Divide2' */
      Robot_B.Divide2 = Robot_B.Gain1 / static_cast<real_T>
        (Robot_B.EtherCATAsyncSDOUpload_o1_lg);

      /* DataTypeConversion: '<S295>/Data Type Conversion1' */
      u = std::floor(Robot_B.Divide2);
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = std::fmod(u, 65536.0);
      }

      /* DataTypeConversion: '<S295>/Data Type Conversion1' */
      Robot_B.DataTypeConversion1 = static_cast<int16_T>(u < 0.0 ? static_cast<
        int32_T>(static_cast<int16_T>(-static_cast<int16_T>(static_cast<uint16_T>
        (-u)))) : static_cast<int32_T>(static_cast<int16_T>(static_cast<uint16_T>
        (u))));

      /* Gain: '<S297>/Gain1' incorporates:
       *  Constant: '<Root>/Constant'
       */
      Robot_B.Gain1_p = Robot_cal->Gain1_Gain_o * Robot_cal->Constant_Value_k;

      /* SwitchCase: '<S7>/Switch Case' incorporates:
       *  Constant: '<S283>/Constant'
       *  Constant: '<S283>/Constant1'
       */
      u = *rty_State;
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
        /* Outputs for IfAction SubSystem: '<S283>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S284>/Action Port'
         */
        Robot_IfActionSubsystem5(Robot_cal->Constant_Value_j, &Robot_B.Merge_i);

        /* End of Outputs for SubSystem: '<S283>/Switch Case Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S283>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S285>/Action Port'
         */
        Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_kn,
          &Robot_B.Merge_i);

        /* End of Outputs for SubSystem: '<S283>/Switch Case Action Subsystem1' */
      }

      /* End of SwitchCase: '<S7>/Switch Case' */

      /* Outputs for Enabled SubSystem: '<Root>/Motor2 Torque Control Init Frame' incorporates:
       *  EnablePort: '<S3>/Enable'
       */
      if (Robot_B.Merge_i > 0.0) {
        Robot_DW.Motor2TorqueControlInitFrame_MODE = true;
      } else if (Robot_DW.Motor2TorqueControlInitFrame_MODE) {
        /* Disable for Enabled SubSystem: '<S3>/Get MasterState OP Frame' */
        if (Robot_DW.GetMasterStateOPFrame_MODE_m) {
          /* Disable for If: '<S77>/If1' */
          Robot_DW.If1_ActiveSubsystem_e = -1;
          Robot_DW.GetMasterStateOPFrame_MODE_m = false;
        }

        /* End of Disable for SubSystem: '<S3>/Get MasterState OP Frame' */

        /* Disable for Enabled SubSystem: '<S3>/Set MasterState to SafeOP Frame' */
        if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n) {
          /* Disable for If: '<S83>/If1' */
          Robot_DW.If1_ActiveSubsystem_a = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n = false;
        }

        /* End of Disable for SubSystem: '<S3>/Set MasterState to SafeOP Frame' */

        /* Disable for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' */
        if (Robot_DW.SDOGet0x6075Frame_MODE_h) {
          /* Disable for If: '<S79>/If1' */
          Robot_DW.If1_ActiveSubsystem_ma = -1;
          Robot_DW.SDOGet0x6075Frame_MODE_h = false;
        }

        /* End of Disable for SubSystem: '<S3>/SDO Get 0x6075 Frame' */

        /* Disable for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */
        if (Robot_DW.SDOSet0x60801Frame_MODE_b) {
          /* Disable for If: '<S81>/If1' */
          Robot_DW.If1_ActiveSubsystem_d = -1;
          Robot_DW.SDOSet0x60801Frame_MODE_b = false;
        }

        /* End of Disable for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */

        /* Disable for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */
        if (Robot_DW.SDOSet0x606010Frame_MODE_b) {
          /* Disable for If: '<S80>/If1' */
          Robot_DW.If1_ActiveSubsystem_iq = -1;
          Robot_DW.SDOSet0x606010Frame_MODE_b = false;
        }

        /* End of Disable for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */

        /* Disable for Enabled SubSystem: '<S3>/Set MasterState to OP Frame' */
        if (Robot_DW.SetMasterStatetoOPFrame_MODE_a) {
          /* Disable for If: '<S82>/If1' */
          Robot_DW.If1_ActiveSubsystem_i = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE_a = false;
        }

        /* End of Disable for SubSystem: '<S3>/Set MasterState to OP Frame' */

        /* Disable for Enabled SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
        if (Robot_DW.PDOSet0x60406715Frame_MODE_l) {
          /* Disable for If: '<S78>/If1' */
          Robot_DW.If1_ActiveSubsystem_gn = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE_l = false;
        }

        /* End of Disable for SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
        Robot_DW.Motor2TorqueControlInitFrame_MODE = false;
      }

      /* End of Outputs for SubSystem: '<Root>/Motor2 Torque Control Init Frame' */
    }

    /* Outputs for Enabled SubSystem: '<Root>/Motor2 Torque Control Init Frame' incorporates:
     *  EnablePort: '<S3>/Enable'
     */
    if (Robot_DW.Motor2TorqueControlInitFrame_MODE) {
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Memory: '<S3>/Memory1' */
        Robot_B.Memory1_k = Robot_DW.Memory1_PreviousInput_j;

        /* Chart: '<S3>/Chart' incorporates:
         *  Constant: '<S283>/Constant2'
         */
        Robot_Chart(Robot_cal->State_2_Enable_TaskIndex_g, Robot_B.Memory1_k,
                    &Robot_B.sf_Chart_o, &Robot_DW.sf_Chart_o);

        /* SwitchCase: '<S86>/Switch Case' incorporates:
         *  Constant: '<S126>/Constant'
         *  Constant: '<S126>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 12) {
          /* Outputs for IfAction SubSystem: '<S126>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S127>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_f, &Robot_B.Merge_h);

          /* End of Outputs for SubSystem: '<S126>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S126>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S128>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_nv,
            &Robot_B.Merge_h);

          /* End of Outputs for SubSystem: '<S126>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S86>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/Get MasterState OP Frame' incorporates:
         *  EnablePort: '<S77>/Enable'
         */
        if (Robot_B.Merge_h > 0.0) {
          Robot_DW.GetMasterStateOPFrame_MODE_m = true;
        } else if (Robot_DW.GetMasterStateOPFrame_MODE_m) {
          /* Disable for If: '<S77>/If1' */
          Robot_DW.If1_ActiveSubsystem_e = -1;
          Robot_DW.GetMasterStateOPFrame_MODE_m = false;
        }

        /* End of Outputs for SubSystem: '<S3>/Get MasterState OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/Get MasterState OP Frame' incorporates:
       *  EnablePort: '<S77>/Enable'
       */
      if (Robot_DW.GetMasterStateOPFrame_MODE_m) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S77>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S77>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_pn;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 12544;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* S-Function (slecatgetslavestate): '<S77>/Get Device State' */
          {
            /*------------ S-Function Block: <S77>/Get Device State Outputs  ------------*/
            unsigned short curstate;
            int res;
            res = slEtherCATgetSlaveState( 0,
              1002,
              &curstate );
            *&Robot_B.GetDeviceState_d = 0xff & (int32_T)curstate;

            // The function returns unsigned short, but our block returns int32.
          }

          /* If: '<S77>/If2' incorporates:
           *  Constant: '<S126>/Constant2'
           *  Constant: '<S77>/Constant4'
           */
          if (Robot_B.GetDeviceState_d == 8) {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S92>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_12_Enable_TaskIndex_g,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S93>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_b,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem6' */
          }

          /* End of If: '<S77>/If2' */

          /* If: '<S77>/If1' */
          Robot_DW.If1_ActiveSubsystem_e = 1;
        }

        /* Clock: '<S77>/Clock' */
        Robot_B.Clock_a = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/Get MasterState OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S88>/Switch Case' incorporates:
         *  Constant: '<S132>/Constant'
         *  Constant: '<S132>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
          /* Outputs for IfAction SubSystem: '<S132>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S133>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_g,
            &Robot_B.Merge_o4);

          /* End of Outputs for SubSystem: '<S132>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S132>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S134>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_np,
            &Robot_B.Merge_o4);

          /* End of Outputs for SubSystem: '<S132>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S88>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/Set MasterState to SafeOP Frame' incorporates:
         *  EnablePort: '<S83>/Enable'
         */
        if (Robot_B.Merge_o4 > 0.0) {
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n = true;
        } else if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n) {
          /* Disable for If: '<S83>/If1' */
          Robot_DW.If1_ActiveSubsystem_a = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n = false;
        }

        /* End of Outputs for SubSystem: '<S3>/Set MasterState to SafeOP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/Set MasterState to SafeOP Frame' incorporates:
       *  EnablePort: '<S83>/Enable'
       */
      if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S83>/Set Device State' incorporates:
           *  Constant: '<S83>/Constant1'
           *  Constant: '<S83>/Constant2'
           */
          {
            /*------------ S-Function Block: <S83>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_f;
            enable = (bool) *&Robot_cal->Constant1_Value_jd;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1002,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_m = prevstate;
              *&Robot_B.SetDeviceState_o2_d = res;
            }
          }

          /* If: '<S83>/If1' */
          if (Robot_B.SetDeviceState_o1_m == 4) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S119>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_p5,
              &Robot_DW.IfActionSubsystem7_p5);

            /* End of Outputs for SubSystem: '<S83>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_a = rtAction;

          /* End of If: '<S83>/If1' */

          /* If: '<S83>/If2' incorporates:
           *  Constant: '<S132>/Constant2'
           *  Constant: '<S83>/Constant4'
           */
          if (Robot_B.IfActionSubsystem7_p5.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S117>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_1_Enable_TaskIndex_n,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S83>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S83>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S118>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_g,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S83>/If Action Subsystem6' */
          }

          /* End of If: '<S83>/If2' */
        }

        /* Clock: '<S83>/Clock' */
        Robot_B.Clock_gk = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/Set MasterState to SafeOP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S89>/Switch Case' incorporates:
         *  Constant: '<S135>/Constant'
         *  Constant: '<S135>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
          /* Outputs for IfAction SubSystem: '<S135>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S136>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_fc,
            &Robot_B.Merge_ex);

          /* End of Outputs for SubSystem: '<S135>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S135>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S137>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_c,
            &Robot_B.Merge_ex);

          /* End of Outputs for SubSystem: '<S135>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S89>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' incorporates:
         *  EnablePort: '<S79>/Enable'
         */
        if (Robot_B.Merge_ex > 0.0) {
          Robot_DW.SDOGet0x6075Frame_MODE_h = true;
        } else if (Robot_DW.SDOGet0x6075Frame_MODE_h) {
          /* Disable for If: '<S79>/If1' */
          Robot_DW.If1_ActiveSubsystem_ma = -1;
          Robot_DW.SDOGet0x6075Frame_MODE_h = false;
        }

        /* End of Outputs for SubSystem: '<S3>/SDO Get 0x6075 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' incorporates:
       *  EnablePort: '<S79>/Enable'
       */
      if (Robot_DW.SDOGet0x6075Frame_MODE_h) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdoread): '<S79>/EtherCAT Async SDO Upload' incorporates:
           *  Constant: '<S79>/Constant'
           */
          {
            /*------------ S-Function Block: <S79>/EtherCAT Async SDO Upload Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T actLen;
            int_T res;
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDOUpload( 0,
                1002,
                (unsigned short)24693,
                (unsigned char)0,
                (void *)&Robot_B.EtherCATAsyncSDOUpload_o1_p,
                4,
                &actLen,
                3000,
                960,
                (int32_T *)&Robot_B.EtherCATAsyncSDOUpload_o2_b,
                *(int32_T *)&Robot_cal->Constant_Value_k0,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDOUpload_o3_e = res;
            }
          }

          /* If: '<S79>/If2' incorporates:
           *  Constant: '<S135>/Constant2'
           *  Constant: '<S79>/Constant4'
           */
          if (Robot_B.EtherCATAsyncSDOUpload_o2_b == 2) {
            /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S105>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_2_Enable_TaskIndex_o,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S79>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_a,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S79>/If Action Subsystem6' */
          }

          /* End of If: '<S79>/If2' */

          /* If: '<S79>/If1' */
          Robot_DW.If1_ActiveSubsystem_ma = 1;
        }

        /* Clock: '<S79>/Clock' */
        Robot_B.Clock_ke = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/SDO Get 0x6075 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S90>/Switch Case' incorporates:
         *  Constant: '<S138>/Constant'
         *  Constant: '<S138>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
          /* Outputs for IfAction SubSystem: '<S138>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S139>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_n, &Robot_B.Merge_k);

          /* End of Outputs for SubSystem: '<S138>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S138>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S140>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_d,
            &Robot_B.Merge_k);

          /* End of Outputs for SubSystem: '<S138>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S90>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' incorporates:
         *  EnablePort: '<S81>/Enable'
         */
        if (Robot_B.Merge_k > 0.0) {
          Robot_DW.SDOSet0x60801Frame_MODE_b = true;
        } else if (Robot_DW.SDOSet0x60801Frame_MODE_b) {
          /* Disable for If: '<S81>/If1' */
          Robot_DW.If1_ActiveSubsystem_d = -1;
          Robot_DW.SDOSet0x60801Frame_MODE_b = false;
        }

        /* End of Outputs for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' incorporates:
       *  EnablePort: '<S81>/Enable'
       */
      if (Robot_DW.SDOSet0x60801Frame_MODE_b) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S81>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S81>/Constant'
           *  Constant: '<S81>/Constant1'
           */
          {
            /*------------ S-Function Block: <S81>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 4;
            char *buf = (char *)&Robot_cal->Constant_Value_n3i;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1002,
                (unsigned short)24704,
                subindex,              //(unsigned char)0,
                (void *)buf,          // (void *)&Robot_cal->Constant_Value_n3i,
                width,
                3000,
                1267,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_g,
                *(int32_T *)&Robot_cal->Constant1_Value_d1,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_i = res;
            }
          }

          /* If: '<S81>/If2' incorporates:
           *  Constant: '<S138>/Constant2'
           *  Constant: '<S81>/Constant4'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_g == 2) {
            /* Outputs for IfAction SubSystem: '<S81>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S111>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_3_Enable_TaskIndex_i,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S81>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S81>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S112>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_a4,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S81>/If Action Subsystem6' */
          }

          /* End of If: '<S81>/If2' */

          /* If: '<S81>/If1' */
          Robot_DW.If1_ActiveSubsystem_d = 1;
        }

        /* Clock: '<S81>/Clock' */
        Robot_B.Clock_h = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S84>/Switch Case' incorporates:
         *  Constant: '<S120>/Constant'
         *  Constant: '<S120>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 10) {
          /* Outputs for IfAction SubSystem: '<S120>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S121>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_fj,
            &Robot_B.Merge_jq);

          /* End of Outputs for SubSystem: '<S120>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S120>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S122>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_jv,
            &Robot_B.Merge_jq);

          /* End of Outputs for SubSystem: '<S120>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S84>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' incorporates:
         *  EnablePort: '<S80>/Enable'
         */
        if (Robot_B.Merge_jq > 0.0) {
          Robot_DW.SDOSet0x606010Frame_MODE_b = true;
        } else if (Robot_DW.SDOSet0x606010Frame_MODE_b) {
          /* Disable for If: '<S80>/If1' */
          Robot_DW.If1_ActiveSubsystem_iq = -1;
          Robot_DW.SDOSet0x606010Frame_MODE_b = false;
        }

        /* End of Outputs for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' incorporates:
       *  EnablePort: '<S80>/Enable'
       */
      if (Robot_DW.SDOSet0x606010Frame_MODE_b) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S80>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S80>/Constant'
           *  Constant: '<S80>/Constant1'
           */
          {
            /*------------ S-Function Block: <S80>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 1;
            char *buf = (char *)&Robot_cal->Constant_Value_f4;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1002,
                (unsigned short)24672,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_f4,
                width,
                2000,
                1207,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_c,
                *(int32_T *)&Robot_cal->Constant1_Value_ow,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_a = res;
            }
          }

          /* If: '<S80>/If2' incorporates:
           *  Constant: '<S120>/Constant2'
           *  Constant: '<S80>/Constant4'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_c == 2) {
            /* Outputs for IfAction SubSystem: '<S80>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S108>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_10_Enable_TaskIndex_b,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S80>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S80>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S109>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_f,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S80>/If Action Subsystem6' */
          }

          /* End of If: '<S80>/If2' */

          /* If: '<S80>/If1' */
          Robot_DW.If1_ActiveSubsystem_iq = 1;
        }

        /* Clock: '<S80>/Clock' */
        Robot_B.Clock_nw = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S85>/Switch Case' incorporates:
         *  Constant: '<S123>/Constant'
         *  Constant: '<S123>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 11) {
          /* Outputs for IfAction SubSystem: '<S123>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S124>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_l0,
            &Robot_B.Merge_op);

          /* End of Outputs for SubSystem: '<S123>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S123>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S125>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_nd,
            &Robot_B.Merge_op);

          /* End of Outputs for SubSystem: '<S123>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S85>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/Set MasterState to OP Frame' incorporates:
         *  EnablePort: '<S82>/Enable'
         */
        if (Robot_B.Merge_op > 0.0) {
          Robot_DW.SetMasterStatetoOPFrame_MODE_a = true;
        } else if (Robot_DW.SetMasterStatetoOPFrame_MODE_a) {
          /* Disable for If: '<S82>/If1' */
          Robot_DW.If1_ActiveSubsystem_i = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE_a = false;
        }

        /* End of Outputs for SubSystem: '<S3>/Set MasterState to OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/Set MasterState to OP Frame' incorporates:
       *  EnablePort: '<S82>/Enable'
       */
      if (Robot_DW.SetMasterStatetoOPFrame_MODE_a) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S82>/Set Device State' incorporates:
           *  Constant: '<S82>/Constant1'
           *  Constant: '<S82>/Constant2'
           */
          {
            /*------------ S-Function Block: <S82>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_l;
            enable = (bool) *&Robot_cal->Constant1_Value_it;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1002,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_k = prevstate;
              *&Robot_B.SetDeviceState_o2_ay = res;
            }
          }

          /* If: '<S82>/If1' */
          if (Robot_B.SetDeviceState_o1_k == 8) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S82>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S116>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_m,
              &Robot_DW.IfActionSubsystem7_m);

            /* End of Outputs for SubSystem: '<S82>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_i = rtAction;

          /* End of If: '<S82>/If1' */

          /* If: '<S82>/If2' incorporates:
           *  Constant: '<S123>/Constant2'
           *  Constant: '<S82>/Constant4'
           */
          if (Robot_B.IfActionSubsystem7_m.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S82>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S114>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_11_Enable_TaskIndex_n,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S82>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S82>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S115>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_fs,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S82>/If Action Subsystem6' */
          }

          /* End of If: '<S82>/If2' */
        }

        /* Clock: '<S82>/Clock' */
        Robot_B.Clock_gy = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/Set MasterState to OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S87>/Switch Case' incorporates:
         *  Constant: '<S129>/Constant'
         *  Constant: '<S129>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 13) {
          /* Outputs for IfAction SubSystem: '<S129>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S130>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_nn,
            &Robot_B.Merge_by);

          /* End of Outputs for SubSystem: '<S129>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S129>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S131>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_ie,
            &Robot_B.Merge_by);

          /* End of Outputs for SubSystem: '<S129>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S87>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' incorporates:
         *  EnablePort: '<S78>/Enable'
         */
        if (Robot_B.Merge_by > 0.0) {
          Robot_DW.PDOSet0x60406715Frame_MODE_l = true;
        } else if (Robot_DW.PDOSet0x60406715Frame_MODE_l) {
          /* Disable for If: '<S78>/If1' */
          Robot_DW.If1_ActiveSubsystem_gn = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE_l = false;
        }

        /* End of Outputs for SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' incorporates:
       *  EnablePort: '<S78>/Enable'
       */
      if (Robot_DW.PDOSet0x60406715Frame_MODE_l) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S78>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S78>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_lv;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 12544;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* UnitDelay: '<S95>/Output' */
          Robot_B.Output_f = Robot_DW.Output_DSTATE_e;

          /* Memory: '<S78>/Memory' */
          Robot_B.Memory_p = Robot_DW.Memory_PreviousInput_b;

          /* If: '<S78>/If' incorporates:
           *  Constant: '<S78>/Constant'
           *  Constant: '<S78>/Constant1'
           *  Constant: '<S78>/Constant2'
           */
          if ((Robot_B.EtherCATPDOReceive1_lv == 720) && (Robot_B.Output_f ==
               500)) {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem' incorporates:
             *  ActionPort: '<S96>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant_Value_ll,
              &Robot_B.Merge_ov);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem' */
          } else if ((Robot_B.EtherCATPDOReceive1_lv == 689) &&
                     (Robot_B.Output_f == 500)) {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S97>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant1_Value_jt,
              &Robot_B.Merge_ov);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem1' */
          } else if ((Robot_B.EtherCATPDOReceive1_lv == 691) &&
                     (Robot_B.Output_f == 500)) {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S98>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant2_Value_ff,
              &Robot_B.Merge_ov);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem2' */
          } else {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S99>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_B.Memory_p, &Robot_B.Merge_ov);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem4' */
          }

          /* End of If: '<S78>/If' */

          /* If: '<S78>/If1' */
          if ((Robot_B.EtherCATPDOReceive1_lv == 4663) ||
              (Robot_B.EtherCATPDOReceive1_lv == 4791)) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S102>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_hj,
              &Robot_DW.IfActionSubsystem7_hj);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_gn = rtAction;

          /* End of If: '<S78>/If1' */

          /* S-Function (slecatpdotx): '<S78>/EtherCAT PDO Transmit1' */
          {
            /*------------ S-Function Block: <S78>/EtherCAT PDO Transmit1 PDO transmit block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            int_T i;
            uint8_T *sigInputPtr = (uint8_T *)&Robot_B.Merge_ov;
            uint8_T *ecatTxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
            bitOffset = 12512;
            for (i = 0; i < 1; i++) {
              switch ( 5 ){
               case SS_DOUBLE:
                *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                  [i];
                break;

               case SS_SINGLE:
                *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                  sigInputPtr)[i];
                break;

               case SS_INT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_UINT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint8_T *)sigInputPtr)));
                }
                break;

               case SS_BOOLEAN:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_INT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int16_T *)sigInputPtr)));
                }
                break;

               case SS_UINT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint16_T *)sigInputPtr)));
                }
                break;

               case SS_INT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int32_T *)sigInputPtr)));
                }
                break;

               case SS_UINT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint32_T *)sigInputPtr)));
                }
                break;

               default:
                /* Fatal error. Should never happen as this is checked in mdlStart. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* Sum: '<S103>/FixPt Sum1' incorporates:
           *  Constant: '<S103>/FixPt Constant'
           */
          Robot_B.FixPtSum1_b = static_cast<uint16_T>(static_cast<uint32_T>
            (Robot_B.Output_f) + Robot_cal->FixPtConstant_Value_f);

          /* Switch: '<S104>/FixPt Switch' */
          if (Robot_B.FixPtSum1_b > Robot_cal->CounterLimited_uplimit_l) {
            /* Switch: '<S104>/FixPt Switch' incorporates:
             *  Constant: '<S104>/Constant'
             */
            Robot_B.FixPtSwitch_k = Robot_cal->Constant_Value_ij;
          } else {
            /* Switch: '<S104>/FixPt Switch' */
            Robot_B.FixPtSwitch_k = Robot_B.FixPtSum1_b;
          }

          /* End of Switch: '<S104>/FixPt Switch' */

          /* If: '<S78>/If2' incorporates:
           *  Constant: '<S129>/Constant2'
           *  Constant: '<S78>/Constant4'
           */
          if (Robot_B.IfActionSubsystem7_hj.DiscreteTimeIntegrator >= 0.1) {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S100>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_13_Enable_TaskIndex_m,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S101>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_o1,
              &Robot_B.Merge1_h);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem6' */
          }

          /* End of If: '<S78>/If2' */
        }

        /* Clock: '<S78>/Clock' */
        Robot_B.Clock_fl = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Merge: '<Root>/Merge1' incorporates:
         *  SignalConversion generated from: '<S3>/TaskFinished'
         */
        Robot_B.Merge1 = Robot_B.sf_Chart_o.TaskFinished;

        /* SwitchCase: '<S91>/Switch Case' incorporates:
         *  Constant: '<S141>/Constant'
         *  Constant: '<S141>/Constant1'
         */
        u = Robot_B.sf_Chart_o.State;
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
          /* Outputs for IfAction SubSystem: '<S141>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S142>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_d,
            &Robot_B.Merge_mo);

          /* End of Outputs for SubSystem: '<S141>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S141>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S143>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_g,
            &Robot_B.Merge_mo);

          /* End of Outputs for SubSystem: '<S141>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S91>/Switch Case' */

        /* Constant: '<S141>/Constant2' */
        Robot_B.Constant2_e = Robot_cal->State_9_Enable_TaskIndex;
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Motor2 Torque Control Init Frame' */
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Product: '<S297>/Divide2' */
      Robot_B.Divide2_i = Robot_B.Gain1_p / static_cast<real_T>
        (Robot_B.EtherCATAsyncSDOUpload_o1_p);

      /* DataTypeConversion: '<S297>/Data Type Conversion1' */
      u = std::floor(Robot_B.Divide2_i);
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = std::fmod(u, 65536.0);
      }

      /* DataTypeConversion: '<S297>/Data Type Conversion1' */
      Robot_B.DataTypeConversion1_m = static_cast<int16_T>(u < 0.0 ?
        static_cast<int32_T>(static_cast<int16_T>(-static_cast<int16_T>(
        static_cast<uint16_T>(-u)))) : static_cast<int32_T>(static_cast<int16_T>
        (static_cast<uint16_T>(u))));

      /* Gain: '<S300>/Gain1' */
      Robot_B.Gain1_e = Robot_cal->Gain1_Gain_n * rtu_BusIn->Motor1Torque;

      /* SwitchCase: '<S8>/Switch Case' incorporates:
       *  Constant: '<S286>/Constant'
       *  Constant: '<S286>/Constant1'
       */
      u = *rty_State;
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
        /* Outputs for IfAction SubSystem: '<S286>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S287>/Action Port'
         */
        Robot_IfActionSubsystem5(Robot_cal->Constant_Value_ap, &Robot_B.Merge_a);

        /* End of Outputs for SubSystem: '<S286>/Switch Case Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S286>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S288>/Action Port'
         */
        Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_iy,
          &Robot_B.Merge_a);

        /* End of Outputs for SubSystem: '<S286>/Switch Case Action Subsystem1' */
      }

      /* End of SwitchCase: '<S8>/Switch Case' */

      /* Outputs for Enabled SubSystem: '<Root>/Motor3 Torque Control Init Frame' incorporates:
       *  EnablePort: '<S4>/Enable'
       */
      if (Robot_B.Merge_a > 0.0) {
        Robot_DW.Motor3TorqueControlInitFrame_MODE = true;
      } else if (Robot_DW.Motor3TorqueControlInitFrame_MODE) {
        /* Disable for Enabled SubSystem: '<S4>/Get MasterState OP Frame' */
        if (Robot_DW.GetMasterStateOPFrame_MODE_j) {
          /* Disable for If: '<S145>/If1' */
          Robot_DW.If1_ActiveSubsystem_mo = -1;
          Robot_DW.GetMasterStateOPFrame_MODE_j = false;
        }

        /* End of Disable for SubSystem: '<S4>/Get MasterState OP Frame' */

        /* Disable for Enabled SubSystem: '<S4>/Set MasterState to SafeOP Frame' */
        if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j) {
          /* Disable for If: '<S151>/If1' */
          Robot_DW.If1_ActiveSubsystem_l2 = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j = false;
        }

        /* End of Disable for SubSystem: '<S4>/Set MasterState to SafeOP Frame' */

        /* Disable for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' */
        if (Robot_DW.SDOGet0x6075Frame_MODE_c) {
          /* Disable for If: '<S147>/If1' */
          Robot_DW.If1_ActiveSubsystem_c = -1;
          Robot_DW.SDOGet0x6075Frame_MODE_c = false;
        }

        /* End of Disable for SubSystem: '<S4>/SDO Get 0x6075 Frame' */

        /* Disable for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */
        if (Robot_DW.SDOSet0x60801Frame_MODE_m) {
          /* Disable for If: '<S149>/If1' */
          Robot_DW.If1_ActiveSubsystem_k = -1;
          Robot_DW.SDOSet0x60801Frame_MODE_m = false;
        }

        /* End of Disable for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */

        /* Disable for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */
        if (Robot_DW.SDOSet0x606010Frame_MODE_m) {
          /* Disable for If: '<S148>/If1' */
          Robot_DW.If1_ActiveSubsystem_h = -1;
          Robot_DW.SDOSet0x606010Frame_MODE_m = false;
        }

        /* End of Disable for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */

        /* Disable for Enabled SubSystem: '<S4>/Set MasterState to OP Frame' */
        if (Robot_DW.SetMasterStatetoOPFrame_MODE_g) {
          /* Disable for If: '<S150>/If1' */
          Robot_DW.If1_ActiveSubsystem_g = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S4>/Set MasterState to OP Frame' */

        /* Disable for Enabled SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
        if (Robot_DW.PDOSet0x60406715Frame_MODE_h) {
          /* Disable for If: '<S146>/If1' */
          Robot_DW.If1_ActiveSubsystem_mz = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE_h = false;
        }

        /* End of Disable for SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
        Robot_DW.Motor3TorqueControlInitFrame_MODE = false;
      }

      /* End of Outputs for SubSystem: '<Root>/Motor3 Torque Control Init Frame' */
    }

    /* Outputs for Enabled SubSystem: '<Root>/Motor3 Torque Control Init Frame' incorporates:
     *  EnablePort: '<S4>/Enable'
     */
    if (Robot_DW.Motor3TorqueControlInitFrame_MODE) {
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Memory: '<S4>/Memory1' */
        Robot_B.Memory1_a = Robot_DW.Memory1_PreviousInput_l;

        /* Chart: '<S4>/Chart' incorporates:
         *  Constant: '<S286>/Constant2'
         */
        Robot_Chart(Robot_cal->State_3_Enable_TaskIndex_a, Robot_B.Memory1_a,
                    &Robot_B.sf_Chart_a, &Robot_DW.sf_Chart_a);

        /* SwitchCase: '<S154>/Switch Case' incorporates:
         *  Constant: '<S194>/Constant'
         *  Constant: '<S194>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 12) {
          /* Outputs for IfAction SubSystem: '<S194>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S195>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_gr,
            &Robot_B.Merge_eb);

          /* End of Outputs for SubSystem: '<S194>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S194>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S196>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_l,
            &Robot_B.Merge_eb);

          /* End of Outputs for SubSystem: '<S194>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S154>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/Get MasterState OP Frame' incorporates:
         *  EnablePort: '<S145>/Enable'
         */
        if (Robot_B.Merge_eb > 0.0) {
          Robot_DW.GetMasterStateOPFrame_MODE_j = true;
        } else if (Robot_DW.GetMasterStateOPFrame_MODE_j) {
          /* Disable for If: '<S145>/If1' */
          Robot_DW.If1_ActiveSubsystem_mo = -1;
          Robot_DW.GetMasterStateOPFrame_MODE_j = false;
        }

        /* End of Outputs for SubSystem: '<S4>/Get MasterState OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/Get MasterState OP Frame' incorporates:
       *  EnablePort: '<S145>/Enable'
       */
      if (Robot_DW.GetMasterStateOPFrame_MODE_j) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S145>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S145>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_f;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 24832;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* S-Function (slecatgetslavestate): '<S145>/Get Device State' */
          {
            /*------------ S-Function Block: <S145>/Get Device State Outputs  ------------*/
            unsigned short curstate;
            int res;
            res = slEtherCATgetSlaveState( 0,
              1003,
              &curstate );
            *&Robot_B.GetDeviceState_g = 0xff & (int32_T)curstate;

            // The function returns unsigned short, but our block returns int32.
          }

          /* If: '<S145>/If2' incorporates:
           *  Constant: '<S145>/Constant4'
           *  Constant: '<S194>/Constant2'
           */
          if (Robot_B.GetDeviceState_g == 8) {
            /* Outputs for IfAction SubSystem: '<S145>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S160>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_12_Enable_TaskIndex_n,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S145>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S145>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S161>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_p,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S145>/If Action Subsystem6' */
          }

          /* End of If: '<S145>/If2' */

          /* If: '<S145>/If1' */
          Robot_DW.If1_ActiveSubsystem_mo = 1;
        }

        /* Clock: '<S145>/Clock' */
        Robot_B.Clock_e = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/Get MasterState OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S156>/Switch Case' incorporates:
         *  Constant: '<S200>/Constant'
         *  Constant: '<S200>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
          /* Outputs for IfAction SubSystem: '<S200>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S201>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_m, &Robot_B.Merge_o);

          /* End of Outputs for SubSystem: '<S200>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S200>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S202>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_ce,
            &Robot_B.Merge_o);

          /* End of Outputs for SubSystem: '<S200>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S156>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/Set MasterState to SafeOP Frame' incorporates:
         *  EnablePort: '<S151>/Enable'
         */
        if (Robot_B.Merge_o > 0.0) {
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j = true;
        } else if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j) {
          /* Disable for If: '<S151>/If1' */
          Robot_DW.If1_ActiveSubsystem_l2 = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j = false;
        }

        /* End of Outputs for SubSystem: '<S4>/Set MasterState to SafeOP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/Set MasterState to SafeOP Frame' incorporates:
       *  EnablePort: '<S151>/Enable'
       */
      if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S151>/Set Device State' incorporates:
           *  Constant: '<S151>/Constant1'
           *  Constant: '<S151>/Constant2'
           */
          {
            /*------------ S-Function Block: <S151>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_k;
            enable = (bool) *&Robot_cal->Constant1_Value_ma;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1003,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_f = prevstate;
              *&Robot_B.SetDeviceState_o2_m = res;
            }
          }

          /* If: '<S151>/If1' */
          if (Robot_B.SetDeviceState_o1_f == 4) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S151>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S187>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_n,
              &Robot_DW.IfActionSubsystem7_n);

            /* End of Outputs for SubSystem: '<S151>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_l2 = rtAction;

          /* End of If: '<S151>/If1' */

          /* If: '<S151>/If2' incorporates:
           *  Constant: '<S151>/Constant4'
           *  Constant: '<S200>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_n.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S151>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S185>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_1_Enable_TaskIndex_nj,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S151>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S151>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S186>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_fi,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S151>/If Action Subsystem6' */
          }

          /* End of If: '<S151>/If2' */
        }

        /* Clock: '<S151>/Clock' */
        Robot_B.Clock_n = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/Set MasterState to SafeOP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S157>/Switch Case' incorporates:
         *  Constant: '<S203>/Constant'
         *  Constant: '<S203>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
          /* Outputs for IfAction SubSystem: '<S203>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S204>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_o,
            &Robot_B.Merge_ev);

          /* End of Outputs for SubSystem: '<S203>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S203>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S205>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_b,
            &Robot_B.Merge_ev);

          /* End of Outputs for SubSystem: '<S203>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S157>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' incorporates:
         *  EnablePort: '<S147>/Enable'
         */
        if (Robot_B.Merge_ev > 0.0) {
          Robot_DW.SDOGet0x6075Frame_MODE_c = true;
        } else if (Robot_DW.SDOGet0x6075Frame_MODE_c) {
          /* Disable for If: '<S147>/If1' */
          Robot_DW.If1_ActiveSubsystem_c = -1;
          Robot_DW.SDOGet0x6075Frame_MODE_c = false;
        }

        /* End of Outputs for SubSystem: '<S4>/SDO Get 0x6075 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' incorporates:
       *  EnablePort: '<S147>/Enable'
       */
      if (Robot_DW.SDOGet0x6075Frame_MODE_c) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdoread): '<S147>/EtherCAT Async SDO Upload' incorporates:
           *  Constant: '<S147>/Constant'
           */
          {
            /*------------ S-Function Block: <S147>/EtherCAT Async SDO Upload Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T actLen;
            int_T res;
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDOUpload( 0,
                1003,
                (unsigned short)24693,
                (unsigned char)0,
                (void *)&Robot_B.EtherCATAsyncSDOUpload_o1_l,
                4,
                &actLen,
                3000,
                2111,
                (int32_T *)&Robot_B.EtherCATAsyncSDOUpload_o2_g,
                *(int32_T *)&Robot_cal->Constant_Value_pa,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDOUpload_o3_a = res;
            }
          }

          /* If: '<S147>/If2' incorporates:
           *  Constant: '<S147>/Constant4'
           *  Constant: '<S203>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDOUpload_o2_g == 2) {
            /* Outputs for IfAction SubSystem: '<S147>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S173>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_2_Enable_TaskIndex_l,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S147>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S147>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S174>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_ne,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S147>/If Action Subsystem6' */
          }

          /* End of If: '<S147>/If2' */

          /* If: '<S147>/If1' */
          Robot_DW.If1_ActiveSubsystem_c = 1;
        }

        /* Clock: '<S147>/Clock' */
        Robot_B.Clock_oe = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/SDO Get 0x6075 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S158>/Switch Case' incorporates:
         *  Constant: '<S206>/Constant'
         *  Constant: '<S206>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
          /* Outputs for IfAction SubSystem: '<S206>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S207>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_n3,
            &Robot_B.Merge_p);

          /* End of Outputs for SubSystem: '<S206>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S206>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S208>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_nq,
            &Robot_B.Merge_p);

          /* End of Outputs for SubSystem: '<S206>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S158>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' incorporates:
         *  EnablePort: '<S149>/Enable'
         */
        if (Robot_B.Merge_p > 0.0) {
          Robot_DW.SDOSet0x60801Frame_MODE_m = true;
        } else if (Robot_DW.SDOSet0x60801Frame_MODE_m) {
          /* Disable for If: '<S149>/If1' */
          Robot_DW.If1_ActiveSubsystem_k = -1;
          Robot_DW.SDOSet0x60801Frame_MODE_m = false;
        }

        /* End of Outputs for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' incorporates:
       *  EnablePort: '<S149>/Enable'
       */
      if (Robot_DW.SDOSet0x60801Frame_MODE_m) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S149>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S149>/Constant'
           *  Constant: '<S149>/Constant1'
           */
          {
            /*------------ S-Function Block: <S149>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 4;
            char *buf = (char *)&Robot_cal->Constant_Value_ha;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1003,
                (unsigned short)24704,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_ha,
                width,
                3000,
                2418,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_k,
                *(int32_T *)&Robot_cal->Constant1_Value_co,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_h = res;
            }
          }

          /* If: '<S149>/If2' incorporates:
           *  Constant: '<S149>/Constant4'
           *  Constant: '<S206>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_k == 2) {
            /* Outputs for IfAction SubSystem: '<S149>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S179>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_3_Enable_TaskIndex_b,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S149>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S149>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S180>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_nc,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S149>/If Action Subsystem6' */
          }

          /* End of If: '<S149>/If2' */

          /* If: '<S149>/If1' */
          Robot_DW.If1_ActiveSubsystem_k = 1;
        }

        /* Clock: '<S149>/Clock' */
        Robot_B.Clock_bp = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S152>/Switch Case' incorporates:
         *  Constant: '<S188>/Constant'
         *  Constant: '<S188>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 10) {
          /* Outputs for IfAction SubSystem: '<S188>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_b,
            &Robot_B.Merge_di);

          /* End of Outputs for SubSystem: '<S188>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S188>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S190>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_bw,
            &Robot_B.Merge_di);

          /* End of Outputs for SubSystem: '<S188>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S152>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' incorporates:
         *  EnablePort: '<S148>/Enable'
         */
        if (Robot_B.Merge_di > 0.0) {
          Robot_DW.SDOSet0x606010Frame_MODE_m = true;
        } else if (Robot_DW.SDOSet0x606010Frame_MODE_m) {
          /* Disable for If: '<S148>/If1' */
          Robot_DW.If1_ActiveSubsystem_h = -1;
          Robot_DW.SDOSet0x606010Frame_MODE_m = false;
        }

        /* End of Outputs for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' incorporates:
       *  EnablePort: '<S148>/Enable'
       */
      if (Robot_DW.SDOSet0x606010Frame_MODE_m) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S148>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S148>/Constant'
           *  Constant: '<S148>/Constant1'
           */
          {
            /*------------ S-Function Block: <S148>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 1;
            char *buf = (char *)&Robot_cal->Constant_Value_fy;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1003,
                (unsigned short)24672,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_fy,
                width,
                2000,
                2358,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_m,
                *(int32_T *)&Robot_cal->Constant1_Value_kb,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_f = res;
            }
          }

          /* If: '<S148>/If2' incorporates:
           *  Constant: '<S148>/Constant4'
           *  Constant: '<S188>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_m == 2) {
            /* Outputs for IfAction SubSystem: '<S148>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S176>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_10_Enable_TaskIndex_m,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S148>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S148>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S177>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_e,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S148>/If Action Subsystem6' */
          }

          /* End of If: '<S148>/If2' */

          /* If: '<S148>/If1' */
          Robot_DW.If1_ActiveSubsystem_h = 1;
        }

        /* Clock: '<S148>/Clock' */
        Robot_B.Clock_m = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S153>/Switch Case' incorporates:
         *  Constant: '<S191>/Constant'
         *  Constant: '<S191>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 11) {
          /* Outputs for IfAction SubSystem: '<S191>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S192>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_n0,
            &Robot_B.Merge_ne);

          /* End of Outputs for SubSystem: '<S191>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S191>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S193>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_h,
            &Robot_B.Merge_ne);

          /* End of Outputs for SubSystem: '<S191>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S153>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/Set MasterState to OP Frame' incorporates:
         *  EnablePort: '<S150>/Enable'
         */
        if (Robot_B.Merge_ne > 0.0) {
          Robot_DW.SetMasterStatetoOPFrame_MODE_g = true;
        } else if (Robot_DW.SetMasterStatetoOPFrame_MODE_g) {
          /* Disable for If: '<S150>/If1' */
          Robot_DW.If1_ActiveSubsystem_g = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE_g = false;
        }

        /* End of Outputs for SubSystem: '<S4>/Set MasterState to OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/Set MasterState to OP Frame' incorporates:
       *  EnablePort: '<S150>/Enable'
       */
      if (Robot_DW.SetMasterStatetoOPFrame_MODE_g) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S150>/Set Device State' incorporates:
           *  Constant: '<S150>/Constant1'
           *  Constant: '<S150>/Constant2'
           */
          {
            /*------------ S-Function Block: <S150>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_m;
            enable = (bool) *&Robot_cal->Constant1_Value_bv;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1003,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_h = prevstate;
              *&Robot_B.SetDeviceState_o2_a = res;
            }
          }

          /* If: '<S150>/If1' */
          if (Robot_B.SetDeviceState_o1_h == 8) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S150>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S184>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_ld,
              &Robot_DW.IfActionSubsystem7_ld);

            /* End of Outputs for SubSystem: '<S150>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_g = rtAction;

          /* End of If: '<S150>/If1' */

          /* If: '<S150>/If2' incorporates:
           *  Constant: '<S150>/Constant4'
           *  Constant: '<S191>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_ld.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S150>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S182>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_11_Enable_TaskIndex_p,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S150>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S150>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S183>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_be,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S150>/If Action Subsystem6' */
          }

          /* End of If: '<S150>/If2' */
        }

        /* Clock: '<S150>/Clock' */
        Robot_B.Clock_g = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/Set MasterState to OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S155>/Switch Case' incorporates:
         *  Constant: '<S197>/Constant'
         *  Constant: '<S197>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 13) {
          /* Outputs for IfAction SubSystem: '<S197>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S198>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_o0,
            &Robot_B.Merge_g5);

          /* End of Outputs for SubSystem: '<S197>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S197>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S199>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_hn,
            &Robot_B.Merge_g5);

          /* End of Outputs for SubSystem: '<S197>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S155>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' incorporates:
         *  EnablePort: '<S146>/Enable'
         */
        if (Robot_B.Merge_g5 > 0.0) {
          Robot_DW.PDOSet0x60406715Frame_MODE_h = true;
        } else if (Robot_DW.PDOSet0x60406715Frame_MODE_h) {
          /* Disable for If: '<S146>/If1' */
          Robot_DW.If1_ActiveSubsystem_mz = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE_h = false;
        }

        /* End of Outputs for SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' incorporates:
       *  EnablePort: '<S146>/Enable'
       */
      if (Robot_DW.PDOSet0x60406715Frame_MODE_h) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S146>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S146>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_dh;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 24832;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* UnitDelay: '<S163>/Output' */
          Robot_B.Output_j = Robot_DW.Output_DSTATE_g;

          /* Memory: '<S146>/Memory' */
          Robot_B.Memory_a = Robot_DW.Memory_PreviousInput_d;

          /* If: '<S146>/If' incorporates:
           *  Constant: '<S146>/Constant'
           *  Constant: '<S146>/Constant1'
           *  Constant: '<S146>/Constant2'
           */
          if ((Robot_B.EtherCATPDOReceive1_dh == 720) && (Robot_B.Output_j ==
               500)) {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem' incorporates:
             *  ActionPort: '<S164>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant_Value_cw,
              &Robot_B.Merge_dtp);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem' */
          } else if ((Robot_B.EtherCATPDOReceive1_dh == 689) &&
                     (Robot_B.Output_j == 500)) {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S165>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant1_Value_ek,
              &Robot_B.Merge_dtp);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem1' */
          } else if ((Robot_B.EtherCATPDOReceive1_dh == 691) &&
                     (Robot_B.Output_j == 500)) {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S166>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant2_Value_fp,
              &Robot_B.Merge_dtp);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem2' */
          } else {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S167>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_B.Memory_a, &Robot_B.Merge_dtp);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem4' */
          }

          /* End of If: '<S146>/If' */

          /* If: '<S146>/If1' */
          if ((Robot_B.EtherCATPDOReceive1_dh == 4663) ||
              (Robot_B.EtherCATPDOReceive1_dh == 4791)) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S170>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_d,
              &Robot_DW.IfActionSubsystem7_d);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_mz = rtAction;

          /* End of If: '<S146>/If1' */

          /* S-Function (slecatpdotx): '<S146>/EtherCAT PDO Transmit1' */
          {
            /*------------ S-Function Block: <S146>/EtherCAT PDO Transmit1 PDO transmit block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            int_T i;
            uint8_T *sigInputPtr = (uint8_T *)&Robot_B.Merge_dtp;
            uint8_T *ecatTxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
            bitOffset = 24800;
            for (i = 0; i < 1; i++) {
              switch ( 5 ){
               case SS_DOUBLE:
                *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                  [i];
                break;

               case SS_SINGLE:
                *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                  sigInputPtr)[i];
                break;

               case SS_INT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_UINT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint8_T *)sigInputPtr)));
                }
                break;

               case SS_BOOLEAN:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_INT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int16_T *)sigInputPtr)));
                }
                break;

               case SS_UINT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint16_T *)sigInputPtr)));
                }
                break;

               case SS_INT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int32_T *)sigInputPtr)));
                }
                break;

               case SS_UINT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint32_T *)sigInputPtr)));
                }
                break;

               default:
                /* Fatal error. Should never happen as this is checked in mdlStart. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* Sum: '<S171>/FixPt Sum1' incorporates:
           *  Constant: '<S171>/FixPt Constant'
           */
          Robot_B.FixPtSum1_m = static_cast<uint16_T>(static_cast<uint32_T>
            (Robot_B.Output_j) + Robot_cal->FixPtConstant_Value_j);

          /* Switch: '<S172>/FixPt Switch' */
          if (Robot_B.FixPtSum1_m > Robot_cal->CounterLimited_uplimit_lw) {
            /* Switch: '<S172>/FixPt Switch' incorporates:
             *  Constant: '<S172>/Constant'
             */
            Robot_B.FixPtSwitch_h = Robot_cal->Constant_Value_jt;
          } else {
            /* Switch: '<S172>/FixPt Switch' */
            Robot_B.FixPtSwitch_h = Robot_B.FixPtSum1_m;
          }

          /* End of Switch: '<S172>/FixPt Switch' */

          /* If: '<S146>/If2' incorporates:
           *  Constant: '<S146>/Constant4'
           *  Constant: '<S197>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_d.DiscreteTimeIntegrator >= 0.1) {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S168>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_13_Enable_TaskIndex_c,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S146>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_d,
              &Robot_B.Merge1_p);

            /* End of Outputs for SubSystem: '<S146>/If Action Subsystem6' */
          }

          /* End of If: '<S146>/If2' */
        }

        /* Clock: '<S146>/Clock' */
        Robot_B.Clock_j = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Merge: '<Root>/Merge1' incorporates:
         *  SignalConversion generated from: '<S4>/TaskFinished'
         */
        Robot_B.Merge1 = Robot_B.sf_Chart_a.TaskFinished;

        /* SwitchCase: '<S159>/Switch Case' incorporates:
         *  Constant: '<S209>/Constant'
         *  Constant: '<S209>/Constant1'
         */
        u = Robot_B.sf_Chart_a.State;
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
          /* Outputs for IfAction SubSystem: '<S209>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S210>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_dx,
            &Robot_B.Merge_b);

          /* End of Outputs for SubSystem: '<S209>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S209>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S211>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_k,
            &Robot_B.Merge_b);

          /* End of Outputs for SubSystem: '<S209>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S159>/Switch Case' */

        /* Constant: '<S209>/Constant2' */
        Robot_B.Constant2_i = Robot_cal->State_9_Enable_TaskIndex_c;
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Motor3 Torque Control Init Frame' */
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Product: '<S300>/Divide2' */
      Robot_B.Divide2_c = Robot_B.Gain1_e / static_cast<real_T>
        (Robot_B.EtherCATAsyncSDOUpload_o1_l);

      /* DataTypeConversion: '<S300>/Data Type Conversion1' */
      u = std::floor(Robot_B.Divide2_c);
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = std::fmod(u, 65536.0);
      }

      /* DataTypeConversion: '<S300>/Data Type Conversion1' */
      Robot_B.DataTypeConversion1_j = static_cast<int16_T>(u < 0.0 ?
        static_cast<int32_T>(static_cast<int16_T>(-static_cast<int16_T>(
        static_cast<uint16_T>(-u)))) : static_cast<int32_T>(static_cast<int16_T>
        (static_cast<uint16_T>(u))));

      /* Gain: '<S296>/Gain1' */
      Robot_B.Gain1_g = Robot_cal->Gain1_Gain_j * rtu_BusIn->Motor2Torque;

      /* SwitchCase: '<S9>/Switch Case' incorporates:
       *  Constant: '<S289>/Constant'
       *  Constant: '<S289>/Constant1'
       */
      u = *rty_State;
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
        /* Outputs for IfAction SubSystem: '<S289>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S290>/Action Port'
         */
        Robot_IfActionSubsystem5(Robot_cal->Constant_Value_nu, &Robot_B.Merge_e);

        /* End of Outputs for SubSystem: '<S289>/Switch Case Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S289>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S291>/Action Port'
         */
        Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_or,
          &Robot_B.Merge_e);

        /* End of Outputs for SubSystem: '<S289>/Switch Case Action Subsystem1' */
      }

      /* End of SwitchCase: '<S9>/Switch Case' */

      /* Outputs for Enabled SubSystem: '<Root>/Motor4 Torque Control Init Frame' incorporates:
       *  EnablePort: '<S5>/Enable'
       */
      if (Robot_B.Merge_e > 0.0) {
        Robot_DW.Motor4TorqueControlInitFrame_MODE = true;
      } else if (Robot_DW.Motor4TorqueControlInitFrame_MODE) {
        /* Disable for Enabled SubSystem: '<S5>/Get MasterState OP Frame' */
        if (Robot_DW.GetMasterStateOPFrame_MODE) {
          /* Disable for If: '<S213>/If1' */
          Robot_DW.If1_ActiveSubsystem_p = -1;
          Robot_DW.GetMasterStateOPFrame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/Get MasterState OP Frame' */

        /* Disable for Enabled SubSystem: '<S5>/Set MasterState to SafeOP Frame' */
        if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE) {
          /* Disable for If: '<S219>/If1' */
          Robot_DW.If1_ActiveSubsystem = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/Set MasterState to SafeOP Frame' */

        /* Disable for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' */
        if (Robot_DW.SDOGet0x6075Frame_MODE) {
          /* Disable for If: '<S215>/If1' */
          Robot_DW.If1_ActiveSubsystem_l = -1;
          Robot_DW.SDOGet0x6075Frame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/SDO Get 0x6075 Frame' */

        /* Disable for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */
        if (Robot_DW.SDOSet0x60801Frame_MODE) {
          /* Disable for If: '<S217>/If1' */
          Robot_DW.If1_ActiveSubsystem_f = -1;
          Robot_DW.SDOSet0x60801Frame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */

        /* Disable for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */
        if (Robot_DW.SDOSet0x606010Frame_MODE) {
          /* Disable for If: '<S216>/If1' */
          Robot_DW.If1_ActiveSubsystem_b = -1;
          Robot_DW.SDOSet0x606010Frame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */

        /* Disable for Enabled SubSystem: '<S5>/Set MasterState to OP Frame' */
        if (Robot_DW.SetMasterStatetoOPFrame_MODE) {
          /* Disable for If: '<S218>/If1' */
          Robot_DW.If1_ActiveSubsystem_n = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/Set MasterState to OP Frame' */

        /* Disable for Enabled SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
        if (Robot_DW.PDOSet0x60406715Frame_MODE) {
          /* Disable for If: '<S214>/If1' */
          Robot_DW.If1_ActiveSubsystem_m = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE = false;
        }

        /* End of Disable for SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
        Robot_DW.Motor4TorqueControlInitFrame_MODE = false;
      }

      /* End of Outputs for SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
    }

    /* Outputs for Enabled SubSystem: '<Root>/Motor4 Torque Control Init Frame' incorporates:
     *  EnablePort: '<S5>/Enable'
     */
    if (Robot_DW.Motor4TorqueControlInitFrame_MODE) {
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Memory: '<S5>/Memory1' */
        Robot_B.Memory1_j = Robot_DW.Memory1_PreviousInput_h;

        /* Chart: '<S5>/Chart' incorporates:
         *  Constant: '<S289>/Constant2'
         */
        Robot_Chart(Robot_cal->State_4_Enable_TaskIndex, Robot_B.Memory1_j,
                    &Robot_B.sf_Chart_i, &Robot_DW.sf_Chart_i);

        /* SwitchCase: '<S222>/Switch Case' incorporates:
         *  Constant: '<S262>/Constant'
         *  Constant: '<S262>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 12) {
          /* Outputs for IfAction SubSystem: '<S262>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S263>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_lg,
            &Robot_B.Merge_iu);

          /* End of Outputs for SubSystem: '<S262>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S262>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S264>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_cr,
            &Robot_B.Merge_iu);

          /* End of Outputs for SubSystem: '<S262>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S222>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/Get MasterState OP Frame' incorporates:
         *  EnablePort: '<S213>/Enable'
         */
        if (Robot_B.Merge_iu > 0.0) {
          Robot_DW.GetMasterStateOPFrame_MODE = true;
        } else if (Robot_DW.GetMasterStateOPFrame_MODE) {
          /* Disable for If: '<S213>/If1' */
          Robot_DW.If1_ActiveSubsystem_p = -1;
          Robot_DW.GetMasterStateOPFrame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/Get MasterState OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/Get MasterState OP Frame' incorporates:
       *  EnablePort: '<S213>/Enable'
       */
      if (Robot_DW.GetMasterStateOPFrame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S213>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S213>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_l;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 39136;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* S-Function (slecatgetslavestate): '<S213>/Get Device State' */
          {
            /*------------ S-Function Block: <S213>/Get Device State Outputs  ------------*/
            unsigned short curstate;
            int res;
            res = slEtherCATgetSlaveState( 0,
              1004,
              &curstate );
            *&Robot_B.GetDeviceState = 0xff & (int32_T)curstate;

            // The function returns unsigned short, but our block returns int32.
          }

          /* If: '<S213>/If2' incorporates:
           *  Constant: '<S213>/Constant4'
           *  Constant: '<S262>/Constant2'
           */
          if (Robot_B.GetDeviceState == 8) {
            /* Outputs for IfAction SubSystem: '<S213>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S228>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_12_Enable_TaskIndex_m,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S213>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S213>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S229>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_au,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S213>/If Action Subsystem6' */
          }

          /* End of If: '<S213>/If2' */

          /* If: '<S213>/If1' */
          Robot_DW.If1_ActiveSubsystem_p = 1;
        }

        /* Clock: '<S213>/Clock' */
        Robot_B.Clock_kz = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/Get MasterState OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S224>/Switch Case' incorporates:
         *  Constant: '<S268>/Constant'
         *  Constant: '<S268>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
          /* Outputs for IfAction SubSystem: '<S268>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S269>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_ii,
            &Robot_B.Merge_g);

          /* End of Outputs for SubSystem: '<S268>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S268>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S270>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_ik,
            &Robot_B.Merge_g);

          /* End of Outputs for SubSystem: '<S268>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S224>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/Set MasterState to SafeOP Frame' incorporates:
         *  EnablePort: '<S219>/Enable'
         */
        if (Robot_B.Merge_g > 0.0) {
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE = true;
        } else if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE) {
          /* Disable for If: '<S219>/If1' */
          Robot_DW.If1_ActiveSubsystem = -1;
          Robot_DW.SetMasterStatetoSafeOPFrame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/Set MasterState to SafeOP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/Set MasterState to SafeOP Frame' incorporates:
       *  EnablePort: '<S219>/Enable'
       */
      if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S219>/Set Device State' incorporates:
           *  Constant: '<S219>/Constant1'
           *  Constant: '<S219>/Constant2'
           */
          {
            /*------------ S-Function Block: <S219>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_eo;
            enable = (bool) *&Robot_cal->Constant1_Value_lg;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1004,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1 = prevstate;
              *&Robot_B.SetDeviceState_o2 = res;
            }
          }

          /* If: '<S219>/If1' */
          if (Robot_B.SetDeviceState_o1 == 4) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S219>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S255>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_g,
              &Robot_DW.IfActionSubsystem7_g);

            /* End of Outputs for SubSystem: '<S219>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem = rtAction;

          /* End of If: '<S219>/If1' */

          /* If: '<S219>/If2' incorporates:
           *  Constant: '<S219>/Constant4'
           *  Constant: '<S268>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_g.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S219>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S253>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_1_Enable_TaskIndex_l,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S219>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S219>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S254>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_i1,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S219>/If Action Subsystem6' */
          }

          /* End of If: '<S219>/If2' */
        }

        /* Clock: '<S219>/Clock' */
        Robot_B.Clock = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/Set MasterState to SafeOP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S225>/Switch Case' incorporates:
         *  Constant: '<S271>/Constant'
         *  Constant: '<S271>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
          /* Outputs for IfAction SubSystem: '<S271>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S272>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_fq,
            &Robot_B.Merge_d);

          /* End of Outputs for SubSystem: '<S271>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S271>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S273>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_p,
            &Robot_B.Merge_d);

          /* End of Outputs for SubSystem: '<S271>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S225>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' incorporates:
         *  EnablePort: '<S215>/Enable'
         */
        if (Robot_B.Merge_d > 0.0) {
          Robot_DW.SDOGet0x6075Frame_MODE = true;
        } else if (Robot_DW.SDOGet0x6075Frame_MODE) {
          /* Disable for If: '<S215>/If1' */
          Robot_DW.If1_ActiveSubsystem_l = -1;
          Robot_DW.SDOGet0x6075Frame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/SDO Get 0x6075 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' incorporates:
       *  EnablePort: '<S215>/Enable'
       */
      if (Robot_DW.SDOGet0x6075Frame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdoread): '<S215>/EtherCAT Async SDO Upload' incorporates:
           *  Constant: '<S215>/Constant'
           */
          {
            /*------------ S-Function Block: <S215>/EtherCAT Async SDO Upload Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T actLen;
            int_T res;
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDOUpload( 0,
                1004,
                (unsigned short)24693,
                (unsigned char)0,
                (void *)&Robot_B.EtherCATAsyncSDOUpload_o1,
                4,
                &actLen,
                3000,
                2915,
                (int32_T *)&Robot_B.EtherCATAsyncSDOUpload_o2,
                *(int32_T *)&Robot_cal->Constant_Value_fe,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDOUpload_o3 = res;
            }
          }

          /* If: '<S215>/If2' incorporates:
           *  Constant: '<S215>/Constant4'
           *  Constant: '<S271>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDOUpload_o2 == 2) {
            /* Outputs for IfAction SubSystem: '<S215>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S241>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_2_Enable_TaskIndex_c,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S215>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S215>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S242>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_e2,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S215>/If Action Subsystem6' */
          }

          /* End of If: '<S215>/If2' */

          /* If: '<S215>/If1' */
          Robot_DW.If1_ActiveSubsystem_l = 1;
        }

        /* Clock: '<S215>/Clock' */
        Robot_B.Clock_d = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/SDO Get 0x6075 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S226>/Switch Case' incorporates:
         *  Constant: '<S274>/Constant'
         *  Constant: '<S274>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
          /* Outputs for IfAction SubSystem: '<S274>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S275>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_dm,
            &Robot_B.Merge_g2);

          /* End of Outputs for SubSystem: '<S274>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S274>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S276>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_gt,
            &Robot_B.Merge_g2);

          /* End of Outputs for SubSystem: '<S274>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S226>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' incorporates:
         *  EnablePort: '<S217>/Enable'
         */
        if (Robot_B.Merge_g2 > 0.0) {
          Robot_DW.SDOSet0x60801Frame_MODE = true;
        } else if (Robot_DW.SDOSet0x60801Frame_MODE) {
          /* Disable for If: '<S217>/If1' */
          Robot_DW.If1_ActiveSubsystem_f = -1;
          Robot_DW.SDOSet0x60801Frame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' incorporates:
       *  EnablePort: '<S217>/Enable'
       */
      if (Robot_DW.SDOSet0x60801Frame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S217>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S217>/Constant'
           *  Constant: '<S217>/Constant1'
           */
          {
            /*------------ S-Function Block: <S217>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 4;
            char *buf = (char *)&Robot_cal->Constant_Value_kf;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1004,
                (unsigned short)24704,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_kf,
                width,
                3000,
                3222,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1,
                *(int32_T *)&Robot_cal->Constant1_Value_a,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2 = res;
            }
          }

          /* If: '<S217>/If2' incorporates:
           *  Constant: '<S217>/Constant4'
           *  Constant: '<S274>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1 == 2) {
            /* Outputs for IfAction SubSystem: '<S217>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S247>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_3_Enable_TaskIndex_p,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S217>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S217>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S248>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_k,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S217>/If Action Subsystem6' */
          }

          /* End of If: '<S217>/If2' */

          /* If: '<S217>/If1' */
          Robot_DW.If1_ActiveSubsystem_f = 1;
        }

        /* Clock: '<S217>/Clock' */
        Robot_B.Clock_f = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S220>/Switch Case' incorporates:
         *  Constant: '<S256>/Constant'
         *  Constant: '<S256>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 10) {
          /* Outputs for IfAction SubSystem: '<S256>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S257>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_hw,
            &Robot_B.Merge_f);

          /* End of Outputs for SubSystem: '<S256>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S256>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S258>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_m,
            &Robot_B.Merge_f);

          /* End of Outputs for SubSystem: '<S256>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S220>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' incorporates:
         *  EnablePort: '<S216>/Enable'
         */
        if (Robot_B.Merge_f > 0.0) {
          Robot_DW.SDOSet0x606010Frame_MODE = true;
        } else if (Robot_DW.SDOSet0x606010Frame_MODE) {
          /* Disable for If: '<S216>/If1' */
          Robot_DW.If1_ActiveSubsystem_b = -1;
          Robot_DW.SDOSet0x606010Frame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' incorporates:
       *  EnablePort: '<S216>/Enable'
       */
      if (Robot_DW.SDOSet0x606010Frame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatasyncsdowrite): '<S216>/EtherCAT Async SDO Download' incorporates:
           *  Constant: '<S216>/Constant'
           *  Constant: '<S216>/Constant1'
           */
          {
            /*------------ S-Function Block: <S216>/EtherCAT Async SDO Download Outputs  ------------*/
            int_T state = xpcEtherCATgetState( 0 );
            int_T res;
            int_T width = 1;
            char *buf = (char *)&Robot_cal->Constant_Value_bb;
            uint16_T subindex = (uint16_T)0;

            // Some, but not all SDO commands will work as early as PreOp
            // Others will timeout.
            if (state >= 2 )        // At least PreOp state before SDO will work
            {
              res= ecatAsyncSDODownload( 0,
                1004,
                (unsigned short)24672,
                subindex,              //(unsigned char)0,
                (void *)buf,           // (void *)&Robot_cal->Constant_Value_bb,
                width,
                2000,
                3162,
                (int32_T *)&Robot_B.EtherCATAsyncSDODownload_o1_o,
                *(int32_T *)&Robot_cal->Constant1_Value_jj,
                0 );
              *(uint32_T *)&Robot_B.EtherCATAsyncSDODownload_o2_g = res;
            }
          }

          /* If: '<S216>/If2' incorporates:
           *  Constant: '<S216>/Constant4'
           *  Constant: '<S256>/Constant2'
           */
          if (Robot_B.EtherCATAsyncSDODownload_o1_o == 2) {
            /* Outputs for IfAction SubSystem: '<S216>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S244>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_10_Enable_TaskIndex_mi,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S216>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S216>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S245>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_m,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S216>/If Action Subsystem6' */
          }

          /* End of If: '<S216>/If2' */

          /* If: '<S216>/If1' */
          Robot_DW.If1_ActiveSubsystem_b = 1;
        }

        /* Clock: '<S216>/Clock' */
        Robot_B.Clock_b = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S221>/Switch Case' incorporates:
         *  Constant: '<S259>/Constant'
         *  Constant: '<S259>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 11) {
          /* Outputs for IfAction SubSystem: '<S259>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S260>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_dr,
            &Robot_B.Merge_n);

          /* End of Outputs for SubSystem: '<S259>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S259>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S261>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_c5,
            &Robot_B.Merge_n);

          /* End of Outputs for SubSystem: '<S259>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S221>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/Set MasterState to OP Frame' incorporates:
         *  EnablePort: '<S218>/Enable'
         */
        if (Robot_B.Merge_n > 0.0) {
          Robot_DW.SetMasterStatetoOPFrame_MODE = true;
        } else if (Robot_DW.SetMasterStatetoOPFrame_MODE) {
          /* Disable for If: '<S218>/If1' */
          Robot_DW.If1_ActiveSubsystem_n = -1;
          Robot_DW.SetMasterStatetoOPFrame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/Set MasterState to OP Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/Set MasterState to OP Frame' incorporates:
       *  EnablePort: '<S218>/Enable'
       */
      if (Robot_DW.SetMasterStatetoOPFrame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatsetslavestate): '<S218>/Set Device State' incorporates:
           *  Constant: '<S218>/Constant1'
           *  Constant: '<S218>/Constant2'
           */
          {
            /*------------ S-Function Block: <S218>/Set Device State Outputs  ------------*/
            uint16_T prevstate;
            uint32_T res;
            uint8_T enable;
            uint16_T newstate;
            newstate = (unsigned short) *&Robot_cal->Constant2_Value_j;
            enable = (bool) *&Robot_cal->Constant1_Value_l4;
            if (enable ) {
              res = slEtherCATsetSlaveState( 0,
                1004,
                newstate,
                &prevstate,
                0 );
              *&Robot_B.SetDeviceState_o1_n = prevstate;
              *&Robot_B.SetDeviceState_o2_j = res;
            }
          }

          /* If: '<S218>/If1' */
          if (Robot_B.SetDeviceState_o1_n == 8) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S252>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_kq,
              &Robot_DW.IfActionSubsystem7_kq);

            /* End of Outputs for SubSystem: '<S218>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_n = rtAction;

          /* End of If: '<S218>/If1' */

          /* If: '<S218>/If2' incorporates:
           *  Constant: '<S218>/Constant4'
           *  Constant: '<S259>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_kq.DiscreteTimeIntegrator > 0.1) {
            /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S250>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_11_Enable_TaskIndex_j,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S218>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S251>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_dh,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S218>/If Action Subsystem6' */
          }

          /* End of If: '<S218>/If2' */
        }

        /* Clock: '<S218>/Clock' */
        Robot_B.Clock_o = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/Set MasterState to OP Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* SwitchCase: '<S223>/Switch Case' incorporates:
         *  Constant: '<S265>/Constant'
         *  Constant: '<S265>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
             static_cast<int32_T>(static_cast<uint32_T>(u))) == 13) {
          /* Outputs for IfAction SubSystem: '<S265>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S266>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_c, &Robot_B.Merge_j);

          /* End of Outputs for SubSystem: '<S265>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S265>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S267>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_px,
            &Robot_B.Merge_j);

          /* End of Outputs for SubSystem: '<S265>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S223>/Switch Case' */

        /* Outputs for Enabled SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' incorporates:
         *  EnablePort: '<S214>/Enable'
         */
        if (Robot_B.Merge_j > 0.0) {
          Robot_DW.PDOSet0x60406715Frame_MODE = true;
        } else if (Robot_DW.PDOSet0x60406715Frame_MODE) {
          /* Disable for If: '<S214>/If1' */
          Robot_DW.If1_ActiveSubsystem_m = -1;
          Robot_DW.PDOSet0x60406715Frame_MODE = false;
        }

        /* End of Outputs for SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
      }

      /* Outputs for Enabled SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' incorporates:
       *  EnablePort: '<S214>/Enable'
       */
      if (Robot_DW.PDOSet0x60406715Frame_MODE) {
        if (rtmIsMajorTimeStep(Robot_M)) {
          /* S-Function (slecatpdorx): '<S214>/EtherCAT PDO Receive1' */
          {
            /*------------ S-Function Block: <S214>/EtherCAT PDO Receive1 PDO receive block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_hy;
            uint8_T *ecatRxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
            bitOffset = 39136;
            for (sigIdx=0; sigIdx < 1; sigIdx++) {
              switch ( 5 ) {
               case SS_DOUBLE:
                ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                  bitOffset/8));
                break;

               case SS_SINGLE:
                ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr
                  +bitOffset/8));
                break;

               case SS_INT8:
                if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T)))
                {
                  ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                    bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT8:
                if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                  ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_BOOLEAN:
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
                break;

               case SS_INT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T)))
                {
                  ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT16:
                if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
                {
                  ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_INT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T)))
                {
                  ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr
                    +bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               case SS_UINT32:
                if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
                {
                  ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)
                    (ecatRxBufPtr+bitOffset/8));
                } else {
                  slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                     sigIdx*2, 2);
                }
                break;

               default:
                /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* UnitDelay: '<S231>/Output' */
          Robot_B.Output = Robot_DW.Output_DSTATE;

          /* Memory: '<S214>/Memory' */
          Robot_B.Memory = Robot_DW.Memory_PreviousInput;

          /* If: '<S214>/If' incorporates:
           *  Constant: '<S214>/Constant'
           *  Constant: '<S214>/Constant1'
           *  Constant: '<S214>/Constant2'
           */
          if ((Robot_B.EtherCATPDOReceive1_hy == 720) && (Robot_B.Output == 500))
          {
            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem' incorporates:
             *  ActionPort: '<S232>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant_Value_gp,
              &Robot_B.Merge_ks);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem' */
          } else if ((Robot_B.EtherCATPDOReceive1_hy == 689) && (Robot_B.Output ==
                      500)) {
            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S233>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant1_Value_pr,
              &Robot_B.Merge_ks);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem1' */
          } else if ((Robot_B.EtherCATPDOReceive1_hy == 691) && (Robot_B.Output ==
                      500)) {
            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S234>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_cal->Constant2_Value_jx,
              &Robot_B.Merge_ks);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem2' */
          } else {
            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S235>/Action Port'
             */
            Robot_IfActionSubsystem(Robot_B.Memory, &Robot_B.Merge_ks);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem4' */
          }

          /* End of If: '<S214>/If' */

          /* If: '<S214>/If1' */
          if ((Robot_B.EtherCATPDOReceive1_hy == 4663) ||
              (Robot_B.EtherCATPDOReceive1_hy == 4791)) {
            rtAction = 0;

            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem7' incorporates:
             *  ActionPort: '<S238>/Action Port'
             */
            Robot_IfActionSubsystem7(&Robot_B.IfActionSubsystem7_pb,
              &Robot_DW.IfActionSubsystem7_pb);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem7' */
          } else {
            rtAction = 1;
          }

          Robot_DW.If1_ActiveSubsystem_m = rtAction;

          /* End of If: '<S214>/If1' */

          /* S-Function (slecatpdotx): '<S214>/EtherCAT PDO Transmit1' */
          {
            /*------------ S-Function Block: <S214>/EtherCAT PDO Transmit1 PDO transmit block  ------------*/
            static int counter= 0;
            int_T sigIdx;
            int_T bitOffset;
            int_T i;
            uint8_T *sigInputPtr = (uint8_T *)&Robot_B.Merge_ks;
            uint8_T *ecatTxBufPtr;     // Pointer to the stack PDO rx buffer
            ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
            bitOffset = 39104;
            for (i = 0; i < 1; i++) {
              switch ( 5 ){
               case SS_DOUBLE:
                *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                  [i];
                break;

               case SS_SINGLE:
                *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                  sigInputPtr)[i];
                break;

               case SS_INT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_UINT8:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint8_T *)sigInputPtr)));
                }
                break;

               case SS_BOOLEAN:
                if ((16 == 8) && (bitOffset%8 == 0)) {
                  *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int8_T *)sigInputPtr)));
                }
                break;

               case SS_INT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int16_T *)sigInputPtr)));
                }
                break;

               case SS_UINT16:
                if ((16 == 16) && (bitOffset%16 == 0)) {
                  *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint16_T *)sigInputPtr)));
                }
                break;

               case SS_INT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((int32_T *)sigInputPtr)));
                }
                break;

               case SS_UINT32:
                if ((16 == 32) && (bitOffset%32 == 0)) {
                  *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                    sigInputPtr)[i];
                } else {
                  slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                     (uint32_T)(*((uint32_T *)sigInputPtr)));
                }
                break;

               default:
                /* Fatal error. Should never happen as this is checked in mdlStart. */
                break;
              }

              bitOffset += 16;
            }
          }

          /* Sum: '<S239>/FixPt Sum1' incorporates:
           *  Constant: '<S239>/FixPt Constant'
           */
          Robot_B.FixPtSum1 = static_cast<uint16_T>(static_cast<uint32_T>
            (Robot_B.Output) + Robot_cal->FixPtConstant_Value_d);

          /* Switch: '<S240>/FixPt Switch' */
          if (Robot_B.FixPtSum1 > Robot_cal->CounterLimited_uplimit_e) {
            /* Switch: '<S240>/FixPt Switch' incorporates:
             *  Constant: '<S240>/Constant'
             */
            Robot_B.FixPtSwitch = Robot_cal->Constant_Value_iv;
          } else {
            /* Switch: '<S240>/FixPt Switch' */
            Robot_B.FixPtSwitch = Robot_B.FixPtSum1;
          }

          /* End of Switch: '<S240>/FixPt Switch' */

          /* If: '<S214>/If2' incorporates:
           *  Constant: '<S214>/Constant4'
           *  Constant: '<S265>/Constant2'
           */
          if (Robot_B.IfActionSubsystem7_pb.DiscreteTimeIntegrator >= 0.1) {
            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S236>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->State_13_Enable_TaskIndex_g,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem5' */
          } else {
            /* Outputs for IfAction SubSystem: '<S214>/If Action Subsystem6' incorporates:
             *  ActionPort: '<S237>/Action Port'
             */
            Robot_IfActionSubsystem5(Robot_cal->Constant4_Value_jy,
              &Robot_B.Merge1_g);

            /* End of Outputs for SubSystem: '<S214>/If Action Subsystem6' */
          }

          /* End of If: '<S214>/If2' */
        }

        /* Clock: '<S214>/Clock' */
        Robot_B.Clock_k = (*(Robot_TimingBrdg->taskTime[Robot_GlobalTID[0]]));
      }

      /* End of Outputs for SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
      if (rtmIsMajorTimeStep(Robot_M)) {
        /* Merge: '<Root>/Merge1' incorporates:
         *  SignalConversion generated from: '<S5>/TaskFinished'
         */
        Robot_B.Merge1 = Robot_B.sf_Chart_i.TaskFinished;

        /* SwitchCase: '<S227>/Switch Case' incorporates:
         *  Constant: '<S277>/Constant'
         *  Constant: '<S277>/Constant1'
         */
        u = Robot_B.sf_Chart_i.State;
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
          /* Outputs for IfAction SubSystem: '<S277>/Switch Case Action Subsystem' incorporates:
           *  ActionPort: '<S278>/Action Port'
           */
          Robot_IfActionSubsystem5(Robot_cal->Constant_Value_m3,
            &Robot_B.Merge_m);

          /* End of Outputs for SubSystem: '<S277>/Switch Case Action Subsystem' */
        } else {
          /* Outputs for IfAction SubSystem: '<S277>/Switch Case Action Subsystem1' incorporates:
           *  ActionPort: '<S279>/Action Port'
           */
          Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_jr,
            &Robot_B.Merge_m);

          /* End of Outputs for SubSystem: '<S277>/Switch Case Action Subsystem1' */
        }

        /* End of SwitchCase: '<S227>/Switch Case' */

        /* Constant: '<S277>/Constant2' */
        Robot_B.Constant2_c = Robot_cal->State_9_Enable_TaskIndex_c4;
      }
    }

    /* End of Outputs for SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
    if (rtmIsMajorTimeStep(Robot_M)) {
      int16_T tmp;
      int16_T tmp_0;

      /* Product: '<S296>/Divide2' */
      Robot_B.Divide2_l = Robot_B.Gain1_g / static_cast<real_T>
        (Robot_B.EtherCATAsyncSDOUpload_o1);

      /* DataTypeConversion: '<S296>/Data Type Conversion1' */
      u = std::floor(Robot_B.Divide2_l);
      if (rtIsNaN(u) || rtIsInf(u)) {
        u = 0.0;
      } else {
        u = std::fmod(u, 65536.0);
      }

      /* DataTypeConversion: '<S296>/Data Type Conversion1' */
      Robot_B.DataTypeConversion1_o = static_cast<int16_T>(u < 0.0 ?
        static_cast<int32_T>(static_cast<int16_T>(-static_cast<int16_T>(
        static_cast<uint16_T>(-u)))) : static_cast<int32_T>(static_cast<int16_T>
        (static_cast<uint16_T>(u))));

      /* SwitchCase: '<S10>/Switch Case' incorporates:
       *  Constant: '<S292>/Constant'
       *  Constant: '<S292>/Constant1'
       */
      u = *rty_State;
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
        /* Outputs for IfAction SubSystem: '<S292>/Switch Case Action Subsystem' incorporates:
         *  ActionPort: '<S293>/Action Port'
         */
        Robot_IfActionSubsystem5(Robot_cal->Constant_Value_b1, &Robot_B.Merge_eh);

        /* End of Outputs for SubSystem: '<S292>/Switch Case Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S292>/Switch Case Action Subsystem1' incorporates:
         *  ActionPort: '<S294>/Action Port'
         */
        Robot_SwitchCaseActionSubsystem1(Robot_cal->Constant1_Value_el,
          &Robot_B.Merge_eh);

        /* End of Outputs for SubSystem: '<S292>/Switch Case Action Subsystem1' */
      }

      /* End of SwitchCase: '<S10>/Switch Case' */

      /* Outputs for Enabled SubSystem: '<S11>/Robot' incorporates:
       *  EnablePort: '<S305>/Enable'
       */
      if (Robot_B.Merge_eh > 0.0) {
        /* S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S310>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_m;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 696;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S310>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2_d;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 776;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S310>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3_j;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 728;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 4 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                 sigIdx*2, 2);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S310>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 808;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 7 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S310>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S310>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5_f;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 760;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 2 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (8 == 8) && (1 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (8 == 8) && (1 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+sigIdx*
                                 1, 1);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(uint16_T))) {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(uint32_T))) {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 8;
          }
        }

        /* S-Function (slecatpdotx): '<S310>/EtherCAT PDO Transmit' */
        {
          /*------------ S-Function Block: <S310>/EtherCAT PDO Transmit PDO transmit block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          int_T i;
          uint8_T *sigInputPtr = (uint8_T *)&Robot_B.DataTypeConversion1;
          uint8_T *ecatTxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
          bitOffset = 696;
          for (i = 0; i < 1; i++) {
            switch ( 4 ){
             case SS_DOUBLE:
              *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                [i];
              break;

             case SS_SINGLE:
              *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                sigInputPtr)[i];
              break;

             case SS_INT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_UINT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint8_T *)sigInputPtr)));
              }
              break;

             case SS_BOOLEAN:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_INT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int16_T *)sigInputPtr)));
              }
              break;

             case SS_UINT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint16_T *)sigInputPtr)));
              }
              break;

             case SS_INT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int32_T *)sigInputPtr)));
              }
              break;

             case SS_UINT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint32_T *)sigInputPtr)));
              }
              break;

             default:
              /* Fatal error. Should never happen as this is checked in mdlStart. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S311>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_d;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 12496;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S311>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2_n;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 12576;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S311>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3_fr;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 12528;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 4 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                 sigIdx*2, 2);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S311>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4_m;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 12608;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 7 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S311>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S311>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5_p4t;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 12560;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 2 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (8 == 8) && (1 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (8 == 8) && (1 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+sigIdx*
                                 1, 1);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(uint16_T))) {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(uint32_T))) {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 8;
          }
        }

        /* S-Function (slecatpdotx): '<S311>/EtherCAT PDO Transmit' */
        {
          /*------------ S-Function Block: <S311>/EtherCAT PDO Transmit PDO transmit block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          int_T i;
          uint8_T *sigInputPtr = (uint8_T *)&Robot_B.DataTypeConversion1_m;
          uint8_T *ecatTxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
          bitOffset = 12496;
          for (i = 0; i < 1; i++) {
            switch ( 4 ){
             case SS_DOUBLE:
              *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                [i];
              break;

             case SS_SINGLE:
              *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                sigInputPtr)[i];
              break;

             case SS_INT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_UINT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint8_T *)sigInputPtr)));
              }
              break;

             case SS_BOOLEAN:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_INT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int16_T *)sigInputPtr)));
              }
              break;

             case SS_UINT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint16_T *)sigInputPtr)));
              }
              break;

             case SS_INT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int32_T *)sigInputPtr)));
              }
              break;

             case SS_UINT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint32_T *)sigInputPtr)));
              }
              break;

             default:
              /* Fatal error. Should never happen as this is checked in mdlStart. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S312>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_hi;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 24784;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S312>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2_k;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 24864;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S312>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3_l;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 24816;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 4 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                 sigIdx*2, 2);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S312>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4_d;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 24896;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 7 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S312>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S312>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5_h;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 24848;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 2 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (8 == 8) && (1 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (8 == 8) && (1 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+sigIdx*
                                 1, 1);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(uint16_T))) {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(uint32_T))) {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 8;
          }
        }

        /* S-Function (slecatpdotx): '<S312>/EtherCAT PDO Transmit' */
        {
          /*------------ S-Function Block: <S312>/EtherCAT PDO Transmit PDO transmit block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          int_T i;
          uint8_T *sigInputPtr = (uint8_T *)&Robot_B.DataTypeConversion1_j;
          uint8_T *ecatTxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
          bitOffset = 24784;
          for (i = 0; i < 1; i++) {
            switch ( 4 ){
             case SS_DOUBLE:
              *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                [i];
              break;

             case SS_SINGLE:
              *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                sigInputPtr)[i];
              break;

             case SS_INT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_UINT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint8_T *)sigInputPtr)));
              }
              break;

             case SS_BOOLEAN:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_INT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int16_T *)sigInputPtr)));
              }
              break;

             case SS_UINT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint16_T *)sigInputPtr)));
              }
              break;

             case SS_INT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int32_T *)sigInputPtr)));
              }
              break;

             case SS_UINT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint32_T *)sigInputPtr)));
              }
              break;

             default:
              /* Fatal error. Should never happen as this is checked in mdlStart. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S313>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_mt;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 39088;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S313>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2_c;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 39168;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 6 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S313>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3_ji;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 39120;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 4 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (16 == 8) && (2 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (16 == 8) && (2 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                 sigIdx*2, 2);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (16 == 16) && (2 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (16 == 32) && (2 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 16, sigOutputPtr+
                                   sigIdx*2, 2);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S313>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4_g;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 39200;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 7 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S313>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S313>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5_b;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 39152;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 2 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (8 == 8) && (1 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (8 == 8) && (1 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+sigIdx*
                                 1, 1);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (8 == 16) && (1 == sizeof(uint16_T))) {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (8 == 32) && (1 == sizeof(uint32_T))) {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 8, sigOutputPtr+
                                   sigIdx*1, 1);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 8;
          }
        }

        /* S-Function (slecatpdotx): '<S313>/EtherCAT PDO Transmit' */
        {
          /*------------ S-Function Block: <S313>/EtherCAT PDO Transmit PDO transmit block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          int_T i;
          uint8_T *sigInputPtr = (uint8_T *)&Robot_B.DataTypeConversion1_o;
          uint8_T *ecatTxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatTxBufPtr = (uint8_T *)xpcEtherCATgetPDout( 0 );
          bitOffset = 39088;
          for (i = 0; i < 1; i++) {
            switch ( 4 ){
             case SS_DOUBLE:
              *((real_T *)(ecatTxBufPtr+bitOffset/8)) = ((real_T *)sigInputPtr)
                [i];
              break;

             case SS_SINGLE:
              *((real32_T *)(ecatTxBufPtr+bitOffset/8)) = ((real32_T *)
                sigInputPtr)[i];
              break;

             case SS_INT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_UINT8:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((uint8_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint8_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint8_T *)sigInputPtr)));
              }
              break;

             case SS_BOOLEAN:
              if ((16 == 8) && (bitOffset%8 == 0)) {
                *((int8_T *)(ecatTxBufPtr+bitOffset/8)) = ((int8_T *)sigInputPtr)
                  [i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int8_T *)sigInputPtr)));
              }
              break;

             case SS_INT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((int16_T *)(ecatTxBufPtr+bitOffset/8)) = ((int16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int16_T *)sigInputPtr)));
              }
              break;

             case SS_UINT16:
              if ((16 == 16) && (bitOffset%16 == 0)) {
                *((uint16_T *)(ecatTxBufPtr+bitOffset/8)) =((uint16_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint16_T *)sigInputPtr)));
              }
              break;

             case SS_INT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((int32_T *)(ecatTxBufPtr+bitOffset/8)) = ((int32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((int32_T *)sigInputPtr)));
              }
              break;

             case SS_UINT32:
              if ((16 == 32) && (bitOffset%32 == 0)) {
                *((uint32_T *)(ecatTxBufPtr+bitOffset/8)) = ((uint32_T *)
                  sigInputPtr)[i];
              } else {
                slrtEcatCopyBitsTx((uint8_T *)ecatTxBufPtr, bitOffset, 16,
                                   (uint32_T)(*((uint32_T *)sigInputPtr)));
              }
              break;

             default:
              /* Fatal error. Should never happen as this is checked in mdlStart. */
              break;
            }

            bitOffset += 16;
          }
        }

        /* S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S314>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37072;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S314>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37104;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S314>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37328;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S314>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4_gz;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37360;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S314>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37392;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S314>/EtherCAT PDO Receive6' */
        {
          /*------------ S-Function Block: <S314>/EtherCAT PDO Receive6 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive6;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37424;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S315>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_h;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37712;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S315>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2_p;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37744;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S315>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3_f;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 37968;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S315>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4_n;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38000;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S315>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5_p;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38032;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S315>/EtherCAT PDO Receive6' */
        {
          /*------------ S-Function Block: <S315>/EtherCAT PDO Receive6 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive6_c;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38064;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive1' */
        {
          /*------------ S-Function Block: <S316>/EtherCAT PDO Receive1 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive1_p;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38352;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive2' */
        {
          /*------------ S-Function Block: <S316>/EtherCAT PDO Receive2 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive2_ps;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38384;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive3' */
        {
          /*------------ S-Function Block: <S316>/EtherCAT PDO Receive3 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive3_g;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38608;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive4' */
        {
          /*------------ S-Function Block: <S316>/EtherCAT PDO Receive4 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive4_h;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38640;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive5' */
        {
          /*------------ S-Function Block: <S316>/EtherCAT PDO Receive5 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive5_p4;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38672;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }

        /* S-Function (slecatpdorx): '<S316>/EtherCAT PDO Receive6' */
        {
          /*------------ S-Function Block: <S316>/EtherCAT PDO Receive6 PDO receive block  ------------*/
          static int counter= 0;
          int_T sigIdx;
          int_T bitOffset;
          uint8_T *sigOutputPtr = (uint8_T *)&Robot_B.EtherCATPDOReceive6_p;
          uint8_T *ecatRxBufPtr;       // Pointer to the stack PDO rx buffer
          ecatRxBufPtr = (uint8_T *)xpcEtherCATgetPDin( 0 );
          bitOffset = 38704;
          for (sigIdx=0; sigIdx < 1; sigIdx++) {
            switch ( 1 ) {
             case SS_DOUBLE:
              ((real_T *)sigOutputPtr)[sigIdx] = *((real_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_SINGLE:
              ((real32_T *)sigOutputPtr)[sigIdx] = *((real32_T *)(ecatRxBufPtr+
                bitOffset/8));
              break;

             case SS_INT8:
              if ((bitOffset % 8 == 0) && (32 == 8) && (4 == sizeof(int8_T))) {
                ((int8_T *)sigOutputPtr)[sigIdx] = *((int8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT8:
              if ((bitOffset%8 == 0) && (32 == 8) && (4 == sizeof(uint8_T))) {
                ((uint8_T *)sigOutputPtr)[sigIdx] = *((uint8_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_BOOLEAN:
              slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                 sigIdx*4, 4);
              break;

             case SS_INT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(int16_T))) {
                ((int16_T *)sigOutputPtr)[sigIdx] = *((int16_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT16:
              if ((bitOffset%16 == 0) && (32 == 16) && (4 == sizeof(uint16_T)))
              {
                ((uint16_T *)sigOutputPtr)[sigIdx] = *((uint16_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_INT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(int32_T))) {
                ((int32_T *)sigOutputPtr)[sigIdx] = *((int32_T *)(ecatRxBufPtr+
                  bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             case SS_UINT32:
              if ((bitOffset%32 == 0) && (32 == 32) && (4 == sizeof(uint32_T)))
              {
                ((uint32_T *)sigOutputPtr)[sigIdx] = *((uint32_T *)(ecatRxBufPtr
                  +bitOffset/8));
              } else {
                slrtEcatCopyBitsRx(ecatRxBufPtr, bitOffset, 32, sigOutputPtr+
                                   sigIdx*4, 4);
              }
              break;

             default:
              /* Fatal error, unsupported type. This is checked in getDataSizes, so it should never happen. */
              break;
            }

            bitOffset += 32;
          }
        }
      }

      /* End of Outputs for SubSystem: '<S11>/Robot' */

      /* Bias: '<S301>/Bias2' */
      Robot_B.Bias2 = Robot_B.EtherCATPDOReceive1_hi + Robot_cal->Bias2_Bias;

      /* Gain: '<S301>/Gain4' */
      Robot_B.Gain4 = static_cast<int64_T>(Robot_cal->Gain4_Gain) *
        Robot_B.Bias2;

      /* DataTypeConversion: '<S301>/Data Type Conversion6' incorporates:
       *  Gain: '<S301>/Gain4'
       */
      rty_BusOut->Motor1ActuralPosition = static_cast<real_T>(Robot_B.Gain4) *
        1.8189894035458565E-12;

      /* Gain: '<S298>/Gain6' */
      Robot_B.Gain6 = static_cast<int64_T>(Robot_cal->Gain6_Gain) *
        Robot_B.EtherCATPDOReceive2_k;

      /* DataTypeConversion: '<S298>/Data Type Conversion7' incorporates:
       *  Gain: '<S298>/Gain6'
       */
      rty_BusOut->Motor1ActuralVelocity = static_cast<real_T>(Robot_B.Gain6) *
        1.8189894035458565E-12;

      /* DataTypeConversion: '<S299>/Data Type Conversion2' */
      Robot_B.DataTypeConversion2 = static_cast<int16_T>
        (Robot_B.EtherCATAsyncSDOUpload_o1_l);

      /* DotProduct: '<S299>/Dot Product' */
      tmp = Robot_B.DataTypeConversion2;
      tmp_0 = Robot_B.EtherCATPDOReceive3_l;

      /* DotProduct: '<S299>/Dot Product' */
      Robot_B.DotProduct = tmp * tmp_0;

      /* Gain: '<S299>/Gain2' */
      Robot_B.Gain2 = static_cast<int64_T>(Robot_cal->Gain2_Gain) *
        Robot_B.DotProduct;

      /* DataTypeConversion: '<S299>/Data Type Conversion4' incorporates:
       *  Gain: '<S299>/Gain2'
       */
      rty_BusOut->Motor1ActuralTorque = static_cast<real_T>(Robot_B.Gain2) *
        8.8817841970012523E-16;

      /* DataTypeConversion: '<S11>/Data Type Conversion8' */
      rty_BusOut->Motor1DCLinkCircuitVoltage = Robot_B.EtherCATPDOReceive4_d;

      /* Bias: '<S304>/Bias3' */
      Robot_B.Bias3 = Robot_B.EtherCATPDOReceive1_mt + Robot_cal->Bias3_Bias;

      /* Gain: '<S304>/Gain5' */
      Robot_B.Gain5 = static_cast<int64_T>(Robot_cal->Gain5_Gain) *
        Robot_B.Bias3;

      /* DataTypeConversion: '<S304>/Data Type Conversion9' incorporates:
       *  Gain: '<S304>/Gain5'
       */
      rty_BusOut->Motor2ActuralPosition = static_cast<real_T>(Robot_B.Gain5) *
        1.8189894035458565E-12;

      /* Gain: '<S302>/Gain6' */
      Robot_B.Gain6_m = static_cast<int64_T>(Robot_cal->Gain6_Gain_n) *
        Robot_B.EtherCATPDOReceive2_c;

      /* DataTypeConversion: '<S302>/Data Type Conversion7' incorporates:
       *  Gain: '<S302>/Gain6'
       */
      rty_BusOut->Motor2ActuralVelocity = static_cast<real_T>(Robot_B.Gain6_m) *
        1.8189894035458565E-12;

      /* DataTypeConversion: '<S303>/Data Type Conversion3' */
      Robot_B.DataTypeConversion3 = static_cast<int16_T>
        (Robot_B.EtherCATAsyncSDOUpload_o1);

      /* DotProduct: '<S303>/Dot Product1' */
      tmp = Robot_B.DataTypeConversion3;
      tmp_0 = Robot_B.EtherCATPDOReceive3_ji;

      /* DotProduct: '<S303>/Dot Product1' */
      Robot_B.DotProduct1 = tmp * tmp_0;

      /* Gain: '<S303>/Gain3' */
      Robot_B.Gain3 = static_cast<int64_T>(Robot_cal->Gain3_Gain) *
        Robot_B.DotProduct1;

      /* DataTypeConversion: '<S303>/Data Type Conversion5' incorporates:
       *  Gain: '<S303>/Gain3'
       */
      rty_BusOut->Motor2ActuralTorque = static_cast<real_T>(Robot_B.Gain3) *
        8.8817841970012523E-16;

      /* DataTypeConversion: '<S11>/Data Type Conversion11' */
      rty_BusOut->Motor2DCLinkCircuitVoltage = Robot_B.EtherCATPDOReceive4_g;

      /* Gain: '<S306>/Gain8' */
      Robot_B.Gain8 = Robot_cal->Gain8_Gain * Robot_B.EtherCATPDOReceive1;

      /* Bias: '<S306>/Bias' */
      Robot_B.Bias = Robot_B.Gain8 + Robot_cal->Bias_Bias;

      /* DataTypeConversion: '<S306>/Data Type Conversion12' */
      rty_BusOut->Sensor1ADCh1 = Robot_B.Bias;

      /* Gain: '<S307>/Gain8' */
      Robot_B.Gain8_b = Robot_cal->Gain8_Gain_h * Robot_B.EtherCATPDOReceive2;

      /* Bias: '<S307>/Bias' */
      Robot_B.Bias_l = Robot_B.Gain8_b + Robot_cal->Bias_Bias_p;

      /* DataTypeConversion: '<S307>/Data Type Conversion12' */
      rty_BusOut->Sensor1ADCh2 = Robot_B.Bias_l;

      /* DataTypeConversion: '<S11>/Data Type Conversion14' */
      rty_BusOut->Sensor1IMUq0 = Robot_B.EtherCATPDOReceive3;

      /* DataTypeConversion: '<S11>/Data Type Conversion15' */
      rty_BusOut->Sensor1IMUq1 = Robot_B.EtherCATPDOReceive4_gz;

      /* DataTypeConversion: '<S11>/Data Type Conversion16' */
      rty_BusOut->Sensor1IMUq2 = Robot_B.EtherCATPDOReceive5;

      /* DataTypeConversion: '<S11>/Data Type Conversion17' */
      rty_BusOut->Sensor1IMUq3 = Robot_B.EtherCATPDOReceive6;

      /* DataTypeConversion: '<S11>/Data Type Conversion18' */
      rty_BusOut->Sensor2ADCh1 = Robot_B.EtherCATPDOReceive1_h;

      /* DataTypeConversion: '<S11>/Data Type Conversion19' */
      rty_BusOut->Sensor2ADCh2 = Robot_B.EtherCATPDOReceive2_p;

      /* DataTypeConversion: '<S11>/Data Type Conversion20' */
      rty_BusOut->Sensor2IMUq0 = Robot_B.EtherCATPDOReceive3_f;

      /* DataTypeConversion: '<S11>/Data Type Conversion21' */
      rty_BusOut->Sensor2IMUq1 = Robot_B.EtherCATPDOReceive4_n;

      /* DataTypeConversion: '<S11>/Data Type Conversion22' */
      rty_BusOut->Sensor2IMUq2 = Robot_B.EtherCATPDOReceive5_p;

      /* DataTypeConversion: '<S11>/Data Type Conversion23' */
      rty_BusOut->Sensor2IMUq3 = Robot_B.EtherCATPDOReceive6_c;

      /* Gain: '<S308>/Gain8' */
      Robot_B.Gain8_a = Robot_cal->Gain8_Gain_p * Robot_B.EtherCATPDOReceive1_p;

      /* Bias: '<S308>/Bias' */
      Robot_B.Bias_e = Robot_B.Gain8_a + Robot_cal->Bias_Bias_k;

      /* DataTypeConversion: '<S308>/Data Type Conversion12' */
      rty_BusOut->Sensor3ADCh1 = Robot_B.Bias_e;

      /* Gain: '<S309>/Gain8' */
      Robot_B.Gain8_j = Robot_cal->Gain8_Gain_n * Robot_B.EtherCATPDOReceive2_ps;

      /* Bias: '<S309>/Bias' */
      Robot_B.Bias_lu = Robot_B.Gain8_j + Robot_cal->Bias_Bias_pl;

      /* DataTypeConversion: '<S309>/Data Type Conversion12' */
      rty_BusOut->Sensor3ADCh2 = Robot_B.Bias_lu;

      /* DataTypeConversion: '<S11>/Data Type Conversion26' */
      rty_BusOut->Sensor3IMUq0 = Robot_B.EtherCATPDOReceive3_g;

      /* DataTypeConversion: '<S11>/Data Type Conversion27' */
      rty_BusOut->Sensor3IMUq1 = Robot_B.EtherCATPDOReceive4_h;

      /* DataTypeConversion: '<S11>/Data Type Conversion28' */
      rty_BusOut->Sensor3IMUq2 = Robot_B.EtherCATPDOReceive5_p4;

      /* DataTypeConversion: '<S11>/Data Type Conversion29' */
      rty_BusOut->Sensor3IMUq3 = Robot_B.EtherCATPDOReceive6_p;

      /* Constant: '<S292>/Constant2' */
      Robot_B.Constant2 = Robot_cal->State_5_Enable_TaskIndex;
    }

    /* user code (Output function Trailer) */
    {
      /*------------ S-Function Block: <Root>/EtherCAT Init Write Process Data ,Run Admin Tasks and then Write Acyclic Data------------*/
      xpcEtherCATWriteProcessData(0,NULL);
      xpcEtherCATExecAdminJobs(0);
      xpcEtherCATWriteAcyclicData(0);
    }
  }
}

/* Update for referenced model: 'Robot' */
void Robot_Update(void)
{
  RT_MODEL_Robot_T *const Robot_M = &(Robot_MdlrefDW.rtm);
  if (rtmIsMajorTimeStep(Robot_M)) {
    /* Update for Memory: '<Root>/Memory1' */
    Robot_DW.Memory1_PreviousInput = Robot_B.Merge1;
  }

  /* Update for Enabled SubSystem: '<Root>/Motor1 Torque Control Init Frame' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (Robot_DW.Motor1TorqueControlInitFrame_MODE) {
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Update for Memory: '<S2>/Memory1' */
      Robot_DW.Memory1_PreviousInput_k = Robot_B.Merge1_pg;
    }

    /* Update for Enabled SubSystem: '<S2>/Set MasterState to SafeOP Frame' incorporates:
     *  EnablePort: '<S19>/Enable'
     */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_f && rtmIsMajorTimeStep
        (Robot_M)) {
      /* Update for If: '<S19>/If1' incorporates:
       *  Constant: '<S19>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_ke == 0) {
        /* Update for IfAction SubSystem: '<S19>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S54>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_a,
          &Robot_DW.IfActionSubsystem7_i,
          &Robot_cal->Robot_IfActionSubsystem7_i_cal);

        /* End of Update for SubSystem: '<S19>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S19>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/Set MasterState to SafeOP Frame' */

    /* Update for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' incorporates:
     *  EnablePort: '<S15>/Enable'
     */
    if (Robot_DW.SDOGet0x6075Frame_MODE_ca && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S15>/If1' incorporates:
       *  Constant: '<S15>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_lk == 0) {
        /* Update for IfAction SubSystem: '<S15>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S42>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_d,
          &Robot_DW.IfActionSubsystem7_h,
          &Robot_cal->Robot_IfActionSubsystem7_h_cal);

        /* End of Update for SubSystem: '<S15>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S15>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/SDO Get 0x6075 Frame' */

    /* Update for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' incorporates:
     *  EnablePort: '<S17>/Enable'
     */
    if (Robot_DW.SDOSet0x60801Frame_MODE_g && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S17>/If1' incorporates:
       *  Constant: '<S17>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_hv == 0) {
        /* Update for IfAction SubSystem: '<S17>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S48>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_m,
          &Robot_DW.IfActionSubsystem7_px,
          &Robot_cal->Robot_IfActionSubsystem7_px_cal);

        /* End of Update for SubSystem: '<S17>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S17>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */

    /* Update for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' incorporates:
     *  EnablePort: '<S16>/Enable'
     */
    if (Robot_DW.SDOSet0x606010Frame_MODE_l && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S16>/If1' incorporates:
       *  Constant: '<S16>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_pj == 0) {
        /* Update for IfAction SubSystem: '<S16>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S45>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_b,
          &Robot_DW.IfActionSubsystem7_j,
          &Robot_cal->Robot_IfActionSubsystem7_j_cal);

        /* End of Update for SubSystem: '<S16>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S16>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */

    /* Update for Enabled SubSystem: '<S2>/Set MasterState to OP Frame' incorporates:
     *  EnablePort: '<S18>/Enable'
     */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE_m && rtmIsMajorTimeStep(Robot_M))
    {
      /* Update for If: '<S18>/If1' incorporates:
       *  Constant: '<S18>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_p4 == 0) {
        /* Update for IfAction SubSystem: '<S18>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S51>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_j,
          &Robot_DW.IfActionSubsystem7_pl,
          &Robot_cal->Robot_IfActionSubsystem7_pl_cal);

        /* End of Update for SubSystem: '<S18>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S18>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/Set MasterState to OP Frame' */

    /* Update for Enabled SubSystem: '<S2>/Get MasterState OP Frame' incorporates:
     *  EnablePort: '<S13>/Enable'
     */
    if (Robot_DW.GetMasterStateOPFrame_MODE_e && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S13>/If1' incorporates:
       *  Constant: '<S13>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_j == 0) {
        /* Update for IfAction SubSystem: '<S13>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S29>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value,
          &Robot_DW.IfActionSubsystem7, &Robot_cal->Robot_IfActionSubsystem7_cal);

        /* End of Update for SubSystem: '<S13>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S13>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/Get MasterState OP Frame' */

    /* Update for Enabled SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' incorporates:
     *  EnablePort: '<S14>/Enable'
     */
    if (Robot_DW.PDOSet0x60406715Frame_MODE_m && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for UnitDelay: '<S30>/Output' */
      Robot_DW.Output_DSTATE_f = Robot_B.FixPtSwitch_b;

      /* Update for Memory: '<S14>/Memory' */
      Robot_DW.Memory_PreviousInput_dn = Robot_B.Merge_ir;

      /* Update for If: '<S14>/If1' incorporates:
       *  Constant: '<S14>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_if == 0) {
        /* Update for IfAction SubSystem: '<S14>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S37>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_p,
          &Robot_DW.IfActionSubsystem7_p,
          &Robot_cal->Robot_IfActionSubsystem7_p_cal);

        /* End of Update for SubSystem: '<S14>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S14>/If1' */
    }

    /* End of Update for SubSystem: '<S2>/PDO Set 0x6040:6->7->15 Frame' */
  }

  /* End of Update for SubSystem: '<Root>/Motor1 Torque Control Init Frame' */

  /* Update for Enabled SubSystem: '<Root>/Motor2 Torque Control Init Frame' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (Robot_DW.Motor2TorqueControlInitFrame_MODE) {
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Update for Memory: '<S3>/Memory1' */
      Robot_DW.Memory1_PreviousInput_j = Robot_B.Merge1_h;
    }

    /* Update for Enabled SubSystem: '<S3>/Get MasterState OP Frame' incorporates:
     *  EnablePort: '<S77>/Enable'
     */
    if (Robot_DW.GetMasterStateOPFrame_MODE_m && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S77>/If1' incorporates:
       *  Constant: '<S77>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_e == 0) {
        /* Update for IfAction SubSystem: '<S77>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S94>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_e,
          &Robot_DW.IfActionSubsystem7_hm,
          &Robot_cal->Robot_IfActionSubsystem7_hm_cal);

        /* End of Update for SubSystem: '<S77>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S77>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/Get MasterState OP Frame' */

    /* Update for Enabled SubSystem: '<S3>/Set MasterState to SafeOP Frame' incorporates:
     *  EnablePort: '<S83>/Enable'
     */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_n && rtmIsMajorTimeStep
        (Robot_M)) {
      /* Update for If: '<S83>/If1' incorporates:
       *  Constant: '<S83>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_a == 0) {
        /* Update for IfAction SubSystem: '<S83>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S119>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_cd,
          &Robot_DW.IfActionSubsystem7_p5,
          &Robot_cal->Robot_IfActionSubsystem7_p5_cal);

        /* End of Update for SubSystem: '<S83>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S83>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/Set MasterState to SafeOP Frame' */

    /* Update for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' incorporates:
     *  EnablePort: '<S79>/Enable'
     */
    if (Robot_DW.SDOGet0x6075Frame_MODE_h && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S79>/If1' incorporates:
       *  Constant: '<S79>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_ma == 0) {
        /* Update for IfAction SubSystem: '<S79>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S107>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_k,
          &Robot_DW.IfActionSubsystem7_he,
          &Robot_cal->Robot_IfActionSubsystem7_he_cal);

        /* End of Update for SubSystem: '<S79>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S79>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/SDO Get 0x6075 Frame' */

    /* Update for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' incorporates:
     *  EnablePort: '<S81>/Enable'
     */
    if (Robot_DW.SDOSet0x60801Frame_MODE_b && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S81>/If1' incorporates:
       *  Constant: '<S81>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_d == 0) {
        /* Update for IfAction SubSystem: '<S81>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S113>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_c,
          &Robot_DW.IfActionSubsystem7_l,
          &Robot_cal->Robot_IfActionSubsystem7_l_cal);

        /* End of Update for SubSystem: '<S81>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S81>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */

    /* Update for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' incorporates:
     *  EnablePort: '<S80>/Enable'
     */
    if (Robot_DW.SDOSet0x606010Frame_MODE_b && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S80>/If1' incorporates:
       *  Constant: '<S80>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_iq == 0) {
        /* Update for IfAction SubSystem: '<S80>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S110>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_h,
          &Robot_DW.IfActionSubsystem7_ji,
          &Robot_cal->Robot_IfActionSubsystem7_ji_cal);

        /* End of Update for SubSystem: '<S80>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S80>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */

    /* Update for Enabled SubSystem: '<S3>/Set MasterState to OP Frame' incorporates:
     *  EnablePort: '<S82>/Enable'
     */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE_a && rtmIsMajorTimeStep(Robot_M))
    {
      /* Update for If: '<S82>/If1' incorporates:
       *  Constant: '<S82>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_i == 0) {
        /* Update for IfAction SubSystem: '<S82>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S116>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_kl,
          &Robot_DW.IfActionSubsystem7_m,
          &Robot_cal->Robot_IfActionSubsystem7_m_cal);

        /* End of Update for SubSystem: '<S82>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S82>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/Set MasterState to OP Frame' */

    /* Update for Enabled SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' incorporates:
     *  EnablePort: '<S78>/Enable'
     */
    if (Robot_DW.PDOSet0x60406715Frame_MODE_l && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for UnitDelay: '<S95>/Output' */
      Robot_DW.Output_DSTATE_e = Robot_B.FixPtSwitch_k;

      /* Update for Memory: '<S78>/Memory' */
      Robot_DW.Memory_PreviousInput_b = Robot_B.Merge_ov;

      /* Update for If: '<S78>/If1' incorporates:
       *  Constant: '<S78>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_gn == 0) {
        /* Update for IfAction SubSystem: '<S78>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_g,
          &Robot_DW.IfActionSubsystem7_hj,
          &Robot_cal->Robot_IfActionSubsystem7_hj_cal);

        /* End of Update for SubSystem: '<S78>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S78>/If1' */
    }

    /* End of Update for SubSystem: '<S3>/PDO Set 0x6040:6->7->15 Frame' */
  }

  /* End of Update for SubSystem: '<Root>/Motor2 Torque Control Init Frame' */

  /* Update for Enabled SubSystem: '<Root>/Motor3 Torque Control Init Frame' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (Robot_DW.Motor3TorqueControlInitFrame_MODE) {
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Update for Memory: '<S4>/Memory1' */
      Robot_DW.Memory1_PreviousInput_l = Robot_B.Merge1_p;
    }

    /* Update for Enabled SubSystem: '<S4>/Get MasterState OP Frame' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    if (Robot_DW.GetMasterStateOPFrame_MODE_j && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S145>/If1' incorporates:
       *  Constant: '<S145>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_mo == 0) {
        /* Update for IfAction SubSystem: '<S145>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S162>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_f,
          &Robot_DW.IfActionSubsystem7_lp,
          &Robot_cal->Robot_IfActionSubsystem7_lp_cal);

        /* End of Update for SubSystem: '<S145>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S145>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/Get MasterState OP Frame' */

    /* Update for Enabled SubSystem: '<S4>/Set MasterState to SafeOP Frame' incorporates:
     *  EnablePort: '<S151>/Enable'
     */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE_j && rtmIsMajorTimeStep
        (Robot_M)) {
      /* Update for If: '<S151>/If1' incorporates:
       *  Constant: '<S151>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_l2 == 0) {
        /* Update for IfAction SubSystem: '<S151>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S187>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_mf,
          &Robot_DW.IfActionSubsystem7_n,
          &Robot_cal->Robot_IfActionSubsystem7_n_cal);

        /* End of Update for SubSystem: '<S151>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S151>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/Set MasterState to SafeOP Frame' */

    /* Update for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' incorporates:
     *  EnablePort: '<S147>/Enable'
     */
    if (Robot_DW.SDOGet0x6075Frame_MODE_c && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S147>/If1' incorporates:
       *  Constant: '<S147>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_c == 0) {
        /* Update for IfAction SubSystem: '<S147>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S175>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_k2,
          &Robot_DW.IfActionSubsystem7_e,
          &Robot_cal->Robot_IfActionSubsystem7_e_cal);

        /* End of Update for SubSystem: '<S147>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S147>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/SDO Get 0x6075 Frame' */

    /* Update for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' incorporates:
     *  EnablePort: '<S149>/Enable'
     */
    if (Robot_DW.SDOSet0x60801Frame_MODE_m && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S149>/If1' incorporates:
       *  Constant: '<S149>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_k == 0) {
        /* Update for IfAction SubSystem: '<S149>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_es,
          &Robot_DW.IfActionSubsystem7_k,
          &Robot_cal->Robot_IfActionSubsystem7_k_cal);

        /* End of Update for SubSystem: '<S149>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S149>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */

    /* Update for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' incorporates:
     *  EnablePort: '<S148>/Enable'
     */
    if (Robot_DW.SDOSet0x606010Frame_MODE_m && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S148>/If1' incorporates:
       *  Constant: '<S148>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_h == 0) {
        /* Update for IfAction SubSystem: '<S148>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_dd,
          &Robot_DW.IfActionSubsystem7_a,
          &Robot_cal->Robot_IfActionSubsystem7_a_cal);

        /* End of Update for SubSystem: '<S148>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S148>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */

    /* Update for Enabled SubSystem: '<S4>/Set MasterState to OP Frame' incorporates:
     *  EnablePort: '<S150>/Enable'
     */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE_g && rtmIsMajorTimeStep(Robot_M))
    {
      /* Update for If: '<S150>/If1' incorporates:
       *  Constant: '<S150>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_g == 0) {
        /* Update for IfAction SubSystem: '<S150>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S184>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_ex,
          &Robot_DW.IfActionSubsystem7_ld,
          &Robot_cal->Robot_IfActionSubsystem7_ld_cal);

        /* End of Update for SubSystem: '<S150>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S150>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/Set MasterState to OP Frame' */

    /* Update for Enabled SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' incorporates:
     *  EnablePort: '<S146>/Enable'
     */
    if (Robot_DW.PDOSet0x60406715Frame_MODE_h && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for UnitDelay: '<S163>/Output' */
      Robot_DW.Output_DSTATE_g = Robot_B.FixPtSwitch_h;

      /* Update for Memory: '<S146>/Memory' */
      Robot_DW.Memory_PreviousInput_d = Robot_B.Merge_dtp;

      /* Update for If: '<S146>/If1' incorporates:
       *  Constant: '<S146>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_mz == 0) {
        /* Update for IfAction SubSystem: '<S146>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S170>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_l,
          &Robot_DW.IfActionSubsystem7_d,
          &Robot_cal->Robot_IfActionSubsystem7_d_cal);

        /* End of Update for SubSystem: '<S146>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S146>/If1' */
    }

    /* End of Update for SubSystem: '<S4>/PDO Set 0x6040:6->7->15 Frame' */
  }

  /* End of Update for SubSystem: '<Root>/Motor3 Torque Control Init Frame' */

  /* Update for Enabled SubSystem: '<Root>/Motor4 Torque Control Init Frame' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (Robot_DW.Motor4TorqueControlInitFrame_MODE) {
    if (rtmIsMajorTimeStep(Robot_M)) {
      /* Update for Memory: '<S5>/Memory1' */
      Robot_DW.Memory1_PreviousInput_h = Robot_B.Merge1_g;
    }

    /* Update for Enabled SubSystem: '<S5>/Get MasterState OP Frame' incorporates:
     *  EnablePort: '<S213>/Enable'
     */
    if (Robot_DW.GetMasterStateOPFrame_MODE && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S213>/If1' incorporates:
       *  Constant: '<S213>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_p == 0) {
        /* Update for IfAction SubSystem: '<S213>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S230>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_h0,
          &Robot_DW.IfActionSubsystem7_nv,
          &Robot_cal->Robot_IfActionSubsystem7_nv_cal);

        /* End of Update for SubSystem: '<S213>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S213>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/Get MasterState OP Frame' */

    /* Update for Enabled SubSystem: '<S5>/Set MasterState to SafeOP Frame' incorporates:
     *  EnablePort: '<S219>/Enable'
     */
    if (Robot_DW.SetMasterStatetoSafeOPFrame_MODE && rtmIsMajorTimeStep(Robot_M))
    {
      /* Update for If: '<S219>/If1' incorporates:
       *  Constant: '<S219>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem == 0) {
        /* Update for IfAction SubSystem: '<S219>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S255>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_bk,
          &Robot_DW.IfActionSubsystem7_g,
          &Robot_cal->Robot_IfActionSubsystem7_g_cal);

        /* End of Update for SubSystem: '<S219>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S219>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/Set MasterState to SafeOP Frame' */

    /* Update for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' incorporates:
     *  EnablePort: '<S215>/Enable'
     */
    if (Robot_DW.SDOGet0x6075Frame_MODE && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S215>/If1' incorporates:
       *  Constant: '<S215>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_l == 0) {
        /* Update for IfAction SubSystem: '<S215>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S243>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_gm,
          &Robot_DW.IfActionSubsystem7_jt,
          &Robot_cal->Robot_IfActionSubsystem7_jt_cal);

        /* End of Update for SubSystem: '<S215>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S215>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/SDO Get 0x6075 Frame' */

    /* Update for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' incorporates:
     *  EnablePort: '<S217>/Enable'
     */
    if (Robot_DW.SDOSet0x60801Frame_MODE && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S217>/If1' incorporates:
       *  Constant: '<S217>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_f == 0) {
        /* Update for IfAction SubSystem: '<S217>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S249>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_n,
          &Robot_DW.IfActionSubsystem7_dt,
          &Robot_cal->Robot_IfActionSubsystem7_dt_cal);

        /* End of Update for SubSystem: '<S217>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S217>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */

    /* Update for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' incorporates:
     *  EnablePort: '<S216>/Enable'
     */
    if (Robot_DW.SDOSet0x606010Frame_MODE && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S216>/If1' incorporates:
       *  Constant: '<S216>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_b == 0) {
        /* Update for IfAction SubSystem: '<S216>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S246>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_gn,
          &Robot_DW.IfActionSubsystem7_hk,
          &Robot_cal->Robot_IfActionSubsystem7_hk_cal);

        /* End of Update for SubSystem: '<S216>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S216>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */

    /* Update for Enabled SubSystem: '<S5>/Set MasterState to OP Frame' incorporates:
     *  EnablePort: '<S218>/Enable'
     */
    if (Robot_DW.SetMasterStatetoOPFrame_MODE && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for If: '<S218>/If1' incorporates:
       *  Constant: '<S218>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_n == 0) {
        /* Update for IfAction SubSystem: '<S218>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S252>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_af,
          &Robot_DW.IfActionSubsystem7_kq,
          &Robot_cal->Robot_IfActionSubsystem7_kq_cal);

        /* End of Update for SubSystem: '<S218>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S218>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/Set MasterState to OP Frame' */

    /* Update for Enabled SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' incorporates:
     *  EnablePort: '<S214>/Enable'
     */
    if (Robot_DW.PDOSet0x60406715Frame_MODE && rtmIsMajorTimeStep(Robot_M)) {
      /* Update for UnitDelay: '<S231>/Output' */
      Robot_DW.Output_DSTATE = Robot_B.FixPtSwitch;

      /* Update for Memory: '<S214>/Memory' */
      Robot_DW.Memory_PreviousInput = Robot_B.Merge_ks;

      /* Update for If: '<S214>/If1' incorporates:
       *  Constant: '<S214>/Constant5'
       */
      if (Robot_DW.If1_ActiveSubsystem_m == 0) {
        /* Update for IfAction SubSystem: '<S214>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S238>/Action Port'
         */
        Robot_IfActionSubsystem7_Update(Robot_cal->Constant5_Value_cz,
          &Robot_DW.IfActionSubsystem7_pb,
          &Robot_cal->Robot_IfActionSubsystem7_pb_cal);

        /* End of Update for SubSystem: '<S214>/If Action Subsystem7' */
      }

      /* End of Update for If: '<S214>/If1' */
    }

    /* End of Update for SubSystem: '<S5>/PDO Set 0x6040:6->7->15 Frame' */
  }

  /* End of Update for SubSystem: '<Root>/Motor4 Torque Control Init Frame' */
}

/* Termination for referenced model: 'Robot' */
void Robot_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S2>/SDO Get 0x6075 Frame' */
  /* Terminate for S-Function (slecatasyncsdoread): '<S15>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S15>/Constant'
   */

  /*------------ S-Function Block: <S15>/EtherCAT Async SDO Upload Terminate  ------------*/
  unregisterAsyncSDOUpload(156, 0);

  /* End of Terminate for SubSystem: '<S2>/SDO Get 0x6075 Frame' */

  /* Terminate for Enabled SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S17>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   */

  /*------------ S-Function Block: <S17>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(463, 0);

  /* End of Terminate for SubSystem: '<S2>/SDO Set 0x6080:-1 Frame' */

  /* Terminate for Enabled SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S16>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   */

  /*------------ S-Function Block: <S16>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(403, 0);

  /* End of Terminate for SubSystem: '<S2>/SDO Set 0x6060:10 Frame' */

  /* Terminate for Enabled SubSystem: '<S3>/SDO Get 0x6075 Frame' */
  /* Terminate for S-Function (slecatasyncsdoread): '<S79>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S79>/Constant'
   */

  /*------------ S-Function Block: <S79>/EtherCAT Async SDO Upload Terminate  ------------*/
  unregisterAsyncSDOUpload(960, 0);

  /* End of Terminate for SubSystem: '<S3>/SDO Get 0x6075 Frame' */

  /* Terminate for Enabled SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S81>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S81>/Constant'
   *  Constant: '<S81>/Constant1'
   */

  /*------------ S-Function Block: <S81>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(1267, 0);

  /* End of Terminate for SubSystem: '<S3>/SDO Set 0x6080:-1 Frame' */

  /* Terminate for Enabled SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S80>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S80>/Constant'
   *  Constant: '<S80>/Constant1'
   */

  /*------------ S-Function Block: <S80>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(1207, 0);

  /* End of Terminate for SubSystem: '<S3>/SDO Set 0x6060:10 Frame' */

  /* Terminate for Enabled SubSystem: '<S4>/SDO Get 0x6075 Frame' */
  /* Terminate for S-Function (slecatasyncsdoread): '<S147>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S147>/Constant'
   */

  /*------------ S-Function Block: <S147>/EtherCAT Async SDO Upload Terminate  ------------*/
  unregisterAsyncSDOUpload(2111, 0);

  /* End of Terminate for SubSystem: '<S4>/SDO Get 0x6075 Frame' */

  /* Terminate for Enabled SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S149>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S149>/Constant'
   *  Constant: '<S149>/Constant1'
   */

  /*------------ S-Function Block: <S149>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(2418, 0);

  /* End of Terminate for SubSystem: '<S4>/SDO Set 0x6080:-1 Frame' */

  /* Terminate for Enabled SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S148>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S148>/Constant'
   *  Constant: '<S148>/Constant1'
   */

  /*------------ S-Function Block: <S148>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(2358, 0);

  /* End of Terminate for SubSystem: '<S4>/SDO Set 0x6060:10 Frame' */

  /* Terminate for Enabled SubSystem: '<S5>/SDO Get 0x6075 Frame' */
  /* Terminate for S-Function (slecatasyncsdoread): '<S215>/EtherCAT Async SDO Upload' incorporates:
   *  Constant: '<S215>/Constant'
   */

  /*------------ S-Function Block: <S215>/EtherCAT Async SDO Upload Terminate  ------------*/
  unregisterAsyncSDOUpload(2915, 0);

  /* End of Terminate for SubSystem: '<S5>/SDO Get 0x6075 Frame' */

  /* Terminate for Enabled SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S217>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S217>/Constant'
   *  Constant: '<S217>/Constant1'
   */

  /*------------ S-Function Block: <S217>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(3222, 0);

  /* End of Terminate for SubSystem: '<S5>/SDO Set 0x6080:-1 Frame' */

  /* Terminate for Enabled SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */
  /* Terminate for S-Function (slecatasyncsdowrite): '<S216>/EtherCAT Async SDO Download' incorporates:
   *  Constant: '<S216>/Constant'
   *  Constant: '<S216>/Constant1'
   */

  /*------------ S-Function Block: <S216>/EtherCAT Async SDO Download Terminate  ------------*/
  unregisterAsyncSDODownload(3162, 0);

  /* End of Terminate for SubSystem: '<S5>/SDO Set 0x6060:10 Frame' */

  /* user code (Terminate function Trailer) */

  /*------------ S-Function Block: <Root>/EtherCAT Init Process Shutdown Network ------------*/
  {
    int_T status;
    status = xpcEtherCATstop(0, 1000 );/* 1 second timeout */
  }
}

/* Model initialize function */
void Robot_initialize(const char_T **rt_errorStatus, RTWSolverInfo
                      *rt_solverInfo, const rtTimingBridge *timingBridge, int_T
                      mdlref_TID0, int_T mdlref_TID1)
{
  RT_MODEL_Robot_T *const Robot_M = &(Robot_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* setup the global timing engine */
  Robot_GlobalTID[0] = mdlref_TID0;
  Robot_GlobalTID[1] = mdlref_TID1;
  Robot_TimingBrdg = timingBridge;

  /* initialize error status */
  rtmSetErrorStatusPointer(Robot_M, rt_errorStatus);

  /* initialize RTWSolverInfo */
  Robot_M->solverInfo = (rt_solverInfo);

  /* Set the Timing fields to the appropriate data in the RTWSolverInfo */
  rtmSetSimTimeStepPointer(Robot_M, rtsiGetSimTimeStepPtr(Robot_M->solverInfo));
  Robot_M->Timing.stepSize0 = (rtsiGetStepSize(Robot_M->solverInfo));

  /* block I/O */
  (void) std::memset((static_cast<void *>(&Robot_B)), 0,
                     sizeof(B_Robot_c_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&Robot_DW), 0,
                     sizeof(DW_Robot_f_T));
}

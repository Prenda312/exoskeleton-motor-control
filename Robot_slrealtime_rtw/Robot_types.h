/*
 * Robot_types.h
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

#ifndef RTW_HEADER_Robot_types_h_
#define RTW_HEADER_Robot_types_h_
#include "rtwtypes.h"
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

/* Forward declaration for rtModel */
typedef struct tag_RTM_Robot_T RT_MODEL_Robot_T;

#endif                                 /* RTW_HEADER_Robot_types_h_ */

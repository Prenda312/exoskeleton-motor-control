#ifndef _RTE_TESTSTRUCTURE_PARAMETERS_H
#define _RTE_TESTSTRUCTURE_PARAMETERS_H
#include "rtwtypes.h"
#include "SegmentInfo.hpp"
#include "model_reference_types.h"
#include "multiword_types.h"
#include "TestStructure_types.h"

struct RTE_Param_Service_T {
  real_T SampleTime;
};

extern RTE_Param_Service_T RTE_Param_Service;
extern RTE_Param_Service_T *RTE_Param_Service_ptr;
real_T* get_SampleTime(void);
namespace slrealtime
{
  SegmentVector &getSegmentVector(void);
}                                      // slrealtime

#endif

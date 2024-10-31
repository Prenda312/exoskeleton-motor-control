#include "rte_TestStructure_parameters.h"
#include "Robot.h"
#include "TestStructure.h"
#include "Robot_cal.h"
#include "TestStructure_cal.h"

RTE_Param_Service_T RTE_Param_Service = {
  0.001
};

RTE_Param_Service_T *RTE_Param_Service_ptr = &RTE_Param_Service;
real_T* get_SampleTime(void)
{
  return &RTE_Param_Service_ptr->SampleTime;
}

extern Robot_cal_type Robot_cal_impl;
extern TestStructure_cal_type TestStructure_cal_impl;
extern RTE_Param_Service_T RTE_Param_Service;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&RTE_Param_Service, (void**)&RTE_Param_Service_ptr, sizeof
      (RTE_Param_Service_T), 2 },

    { (void*)&TestStructure_cal_impl, (void**)&TestStructure_cal, sizeof
      (TestStructure_cal_type), 2 },

    { (void*)&Robot_cal_impl, (void**)&Robot_cal, sizeof(Robot_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

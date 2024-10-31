#include "rte_Robot_parameters.h"
#include "Robot.h"
#include "Robot_cal.h"

extern Robot_cal_type Robot_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Robot_cal_impl, (void**)&Robot_cal, sizeof(Robot_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

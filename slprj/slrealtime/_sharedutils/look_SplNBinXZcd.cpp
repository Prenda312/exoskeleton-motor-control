/*
 * look_SplNBinXZcd.cpp
 *
 * Code generation for model "TestStructure".
 *
 * Model version              : 1.198
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Mon Apr  1 16:18:05 2024
 * Created for block: <S79>/1-D Lookup Table
 */

#include "look_SplNBinXZcd.h"
#include "plook_binx.h"
#include "intrp_NSplcd.h"
#include "rtsplntypes.h"
#include "rtwtypes.h"

/* n-D Spline interpolation function */
real_T look_SplNBinXZcd(uint32_T numDims, const real_T* u, const
  rt_LUTSplineWork * const SWork)
{
  /*
   *   n-D column-major table lookup operating on real_T with:
   *       - Spline interpolation
   *       - Linear extrapolation
   *       - Binary breakpoint search
   *       - Index search starts at the same place each time
   */
  rt_LUTnWork * const TWork_look = SWork->m_TWork;
  real_T* const fraction = static_cast<real_T*>(TWork_look->m_bpLambda);
  uint32_T* const bpIdx = TWork_look->m_bpIndex;
  const uint32_T* const maxIndex = TWork_look->m_maxIndex;
  uint32_T k;
  for (k = 0U; k < numDims; k++) {
    const real_T* const bpData = ((const real_T * const *)
      TWork_look->m_bpDataSet)[k];
    bpIdx[k] = plook_binx(u[k], bpData, maxIndex[k], &fraction[k]);
  }

  return(intrp_NSplcd(numDims, SWork, 2U));
}

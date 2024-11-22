#include "final_sampling_code.h"
#include "final_sampling_code_types.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_final_sampling_code_T final_sampling_code_DW;

/* Real-time model */
static RT_MODEL_final_sampling_code_T final_sampling_code_M_;
RT_MODEL_final_sampling_code_T *const final_sampling_code_M =
  &final_sampling_code_M_;

/* Model step function */
void final_sampling_code_step(void)
{
  /* MATLABSystem: '<Root>/Digital Read' */
  if (final_sampling_code_DW.obj.SampleTime !=
      final_sampling_code_P.DigitalRead_SampleTime) {
    final_sampling_code_DW.obj.SampleTime =
      final_sampling_code_P.DigitalRead_SampleTime;
  }

  MW_digitalIO_read(final_sampling_code_DW.obj.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<Root>/Digital Read' */
}

/* Model initialize function */
void final_sampling_code_initialize(void)
{
  {
    uint32_T pinname;
    mbed_DigitalRead_final_sampli_T *obj;

    /* Start for MATLABSystem: '<Root>/Digital Read' */
    final_sampling_code_DW.obj.matlabCodegenIsDeleted = false;
    final_sampling_code_DW.obj.SampleTime =
      final_sampling_code_P.DigitalRead_SampleTime;
    obj = &final_sampling_code_DW.obj;
    final_sampling_code_DW.obj.isInitialized = 1;
    pinname = D5;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    final_sampling_code_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void final_sampling_code_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Read' */
  if (!final_sampling_code_DW.obj.matlabCodegenIsDeleted) {
    final_sampling_code_DW.obj.matlabCodegenIsDeleted = true;
    if ((final_sampling_code_DW.obj.isInitialized == 1) &&
        final_sampling_code_DW.obj.isSetupComplete) {
      MW_digitalIO_close(final_sampling_code_DW.obj.MW_DIGITALIO_HANDLE);
    }

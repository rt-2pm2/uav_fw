/*
 * DynModel.h
 *
 * Code generation for model "DynModel".
 *
 * Model version              : 1.411
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Wed Oct 12 08:49:20 2016
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->16-bit Embedded Processor)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DynModel_h_
#define RTW_HEADER_DynModel_h_
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef DynModel_COMMON_INCLUDES_
# define DynModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* DynModel_COMMON_INCLUDES_ */

#include "DynModel_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T xeyeze[3];                    /* '<S4>/xe,ye,ze' */
  real_T Sum1;                         /* '<S61>/Sum1' */
  real_T Sum1_e;                       /* '<S63>/Sum1' */
  real_T Product2;                     /* '<S63>/Product2' */
  real_T Product3;                     /* '<S63>/Product3' */
  real_T ubvbwb[3];                    /* '<S4>/ub,vb,wb' */
  real_T VectorConcatenate[9];         /* '<S30>/Vector Concatenate' */
  real_T Product[3];                   /* '<S16>/Product' */
  real_T Output;                       /* '<S59>/Output' */
  real_T Gain1[3];                     /* '<S5>/Gain1' */
  real_T Memory2;                      /* '<S2>/Memory2' */
  real_T DiscreteTransferFcn;          /* '<S45>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_o;        /* '<S46>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_i;        /* '<S47>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_ib;       /* '<S48>/Discrete Transfer Fcn' */
  real_T Product_b[3];                 /* '<S4>/Product' */
  real_T MatrixMultiply1[3];           /* '<S3>/Matrix Multiply1' */
  real_T pqr[3];                       /* '<S4>/p,q,r ' */
  real_T Product2_m[3];                /* '<S11>/Product2' */
  real_T UnitConversion[3];            /* '<S133>/Unit Conversion' */
  real_T q0dot;                        /* '<S20>/q0dot' */
  real_T q1dot;                        /* '<S20>/q1dot' */
  real_T q2dot;                        /* '<S20>/q2dot' */
  real_T q3dot;                        /* '<S20>/q3dot' */
  real_T Sum[3];                       /* '<S4>/Sum' */
  real_T Merge[4];                     /* '<S60>/Merge' */
} B_DynModel_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S44>/UD' */
  real_T DiscreteTransferFcn_states;   /* '<S45>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_states_m; /* '<S46>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_states_c; /* '<S47>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_states_a; /* '<S48>/Discrete Transfer Fcn' */
  real_T NextOutput;                   /* '<S70>/Random Number' */
  real_T NextOutput_a;                 /* '<S68>/Random Number' */
  real_T NextOutput_l;                 /* '<S66>/Random Number' */
  real_T NextOutput_n;                 /* '<S58>/Random Number' */
  real_T NextOutput_o[3];              /* '<S62>/Random Number' */
  real_T NextOutput_h[3];              /* '<S62>/Random Number1' */
  real_T NextOutput_am;                /* '<S65>/Random Number' */
  real_T NextOutput_lh;                /* '<S59>/White Noise' */
  real_T Memory2_PreviousInput;        /* '<S2>/Memory2' */
  real_T DiscreteTransferFcn_tmp;      /* '<S45>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_i;    /* '<S46>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_b;    /* '<S47>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_e;    /* '<S48>/Discrete Transfer Fcn' */
  real_T Product2_DWORK4[9];           /* '<S11>/Product2' */
  real_T NextOutput_k[3];              /* '<S137>/White Noise' */
  real_T NextOutput_p[3];              /* '<S154>/White Noise' */
  uint32_T RandSeed;                   /* '<S70>/Random Number' */
  uint32_T RandSeed_f;                 /* '<S68>/Random Number' */
  uint32_T RandSeed_fw;                /* '<S66>/Random Number' */
  uint32_T RandSeed_fm;                /* '<S58>/Random Number' */
  uint32_T RandSeed_e[3];              /* '<S62>/Random Number' */
  uint32_T RandSeed_i[3];              /* '<S62>/Random Number1' */
  uint32_T RandSeed_p;                 /* '<S65>/Random Number' */
  uint32_T RandSeed_l;                 /* '<S59>/White Noise' */
  uint32_T RandSeed_ls[3];             /* '<S137>/White Noise' */
  uint32_T RandSeed_j[3];              /* '<S154>/White Noise' */
  struct {
    int_T IcNeedsLoading;
  } q0q1q2q3_IWORK;                    /* '<S10>/q0 q1 q2 q3' */

  int8_T If_ActiveSubsystem;           /* '<S60>/If' */
  int8_T FindMaximumDiagonalValue_ActiveSubsystem;/* '<S71>/Find Maximum Diagonal Value' */
} DW_DynModel_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T xeyeze_CSTATE[3];             /* '<S4>/xe,ye,ze' */
  real_T ubvbwb_CSTATE[3];             /* '<S4>/ub,vb,wb' */
  real_T q0q1q2q3_CSTATE[4];           /* '<S10>/q0 q1 q2 q3' */
  real_T pqr_CSTATE[3];                /* '<S4>/p,q,r ' */
} X_DynModel_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T xeyeze_CSTATE[3];             /* '<S4>/xe,ye,ze' */
  real_T ubvbwb_CSTATE[3];             /* '<S4>/ub,vb,wb' */
  real_T q0q1q2q3_CSTATE[4];           /* '<S10>/q0 q1 q2 q3' */
  real_T pqr_CSTATE[3];                /* '<S4>/p,q,r ' */
} XDot_DynModel_T;

/* State disabled  */
typedef struct {
  boolean_T xeyeze_CSTATE[3];          /* '<S4>/xe,ye,ze' */
  boolean_T ubvbwb_CSTATE[3];          /* '<S4>/ub,vb,wb' */
  boolean_T q0q1q2q3_CSTATE[4];        /* '<S10>/q0 q1 q2 q3' */
  boolean_T pqr_CSTATE[3];             /* '<S4>/p,q,r ' */
} XDis_DynModel_T;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Switch_d;               /* '<S124>/Switch' */
  const real_T q0;                     /* '<S19>/q0' */
  const real_T q1;                     /* '<S19>/q1' */
  const real_T q2;                     /* '<S19>/q2' */
  const real_T q3;                     /* '<S19>/q3' */
  const real_T Switch_b;               /* '<S105>/Switch' */
  const real_T Selector[9];            /* '<S11>/Selector' */
  const real_T Selector2[9];           /* '<S11>/Selector2' */
} ConstB_DynModel_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S134>/Scale factors & Cross-coupling  errors'
   *   '<S135>/Scale factors & Cross-coupling  errors '
   */
  real_T pooled23[9];
} ConstP_DynModel_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T PWM1;                         /* '<Root>/PWM1' */
  real_T PWM2;                         /* '<Root>/PWM2' */
  real_T PWM3;                         /* '<Root>/PWM3' */
  real_T PWM4;                         /* '<Root>/PWM4' */
} ExtU_DynModel_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real32_T Temp;                       /* '<Root>/Temp' */
  real32_T Press;                      /* '<Root>/Press' */
  real32_T diff_Pres;                  /* '<Root>/diff_Pres' */
  real32_T Baro_Alt;                   /* '<Root>/Baro_Alt' */
  real32_T Gps_Lat;                    /* '<Root>/Gps_Lat' */
  real32_T Gps_Lon;                    /* '<Root>/Gps_Lon' */
  real32_T Gps_Alt;                    /* '<Root>/Gps_Alt' */
  real32_T Gps_V[3];                   /* '<Root>/Gps_V' */
  real32_T Gps_V_Mod;                  /* '<Root>/Gps_V_Mod' */
  real32_T COG;                        /* '<Root>/COG' */
  real32_T Lat_Lon_Alt[3];             /* '<Root>/Lat_Lon_Alt' */
  real32_T Magn[3];                    /* '<Root>/Magn' */
  real32_T RPY[3];                     /* '<Root>/RPY' */
  real32_T Accelerometer[3];           /* '<Root>/Accelerometer' */
  real32_T Gyro[3];                    /* '<Root>/Gyro' */
  real32_T Quaternion[4];              /* '<Root>/Quaternion' */
  real32_T Sonar;                      /* '<Root>/Sonar' */
  real32_T Forces[3];                  /* '<Root>/Forces' */
  real32_T Torques[3];                 /* '<Root>/Torques' */
  real32_T Thrusts[4];                 /* '<Root>/Thrusts' */
  real32_T Rotor_Speed[4];             /* '<Root>/Rotor_Speed' */
  real32_T Xe[3];                      /* '<Root>/Xe' */
} ExtY_DynModel_T;

/* Real-time Model Data Structure */
struct tag_RTM_DynModel_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    X_DynModel_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[13];
    real_T odeF[4][13];
    ODE4_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

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
    boolean_T firstInitCondFlag;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (auto storage) */
extern B_DynModel_T DynModel_B;

/* Continuous states (auto storage) */
extern X_DynModel_T DynModel_X;

/* Block states (auto storage) */
extern DW_DynModel_T DynModel_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_DynModel_T DynModel_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_DynModel_T DynModel_Y;
extern const ConstB_DynModel_T DynModel_ConstB;/* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstP_DynModel_T DynModel_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T Kvreact;                 /* Variable: Kvreact
                                        * Referenced by: '<S5>/Gain2'
                                        */
extern real_T Kwreact;                 /* Variable: Kwreact
                                        * Referenced by: '<S5>/Gain5'
                                        */

/* Model entry point functions */
extern void DynModel_initialize(void);
extern void DynModel_step(void);
extern void DynModel_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DynModel_T *const DynModel_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('simulator_gen_monorate/DynModel')    - opens subsystem simulator_gen_monorate/DynModel
 * hilite_system('simulator_gen_monorate/DynModel/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'simulator_gen_monorate'
 * '<S1>'   : 'simulator_gen_monorate/DynModel'
 * '<S2>'   : 'simulator_gen_monorate/DynModel/Dynamics'
 * '<S3>'   : 'simulator_gen_monorate/DynModel/Sensors'
 * '<S4>'   : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)'
 * '<S5>'   : 'simulator_gen_monorate/DynModel/Dynamics/Ground_Interaction'
 * '<S6>'   : 'simulator_gen_monorate/DynModel/Dynamics/LiPo Battery'
 * '<S7>'   : 'simulator_gen_monorate/DynModel/Dynamics/MotorDynamics'
 * '<S8>'   : 'simulator_gen_monorate/DynModel/Dynamics/Subsystem'
 * '<S9>'   : 'simulator_gen_monorate/DynModel/Dynamics/transfer_function'
 * '<S10>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles'
 * '<S11>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate omega_dot'
 * '<S12>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Determine Force,  Mass & Inertia'
 * '<S13>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Vbxw'
 * '<S14>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Velocity Conversion'
 * '<S15>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Velocity Conversion1'
 * '<S16>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/transform to Inertial axes '
 * '<S17>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix'
 * '<S18>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to Rotation Angles'
 * '<S19>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Rotation Angles to Quaternions'
 * '<S20>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/qdot'
 * '<S21>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A11'
 * '<S22>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A12'
 * '<S23>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A13'
 * '<S24>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A21'
 * '<S25>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A22'
 * '<S26>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A23'
 * '<S27>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A31'
 * '<S28>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A32'
 * '<S29>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/A33'
 * '<S30>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/Create Transformation Matrix'
 * '<S31>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/Quaternion Normalize'
 * '<S32>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/Quaternion Normalize/Quaternion Modulus'
 * '<S33>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to  Direction Cosine Matrix/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S34>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to Rotation Angles/Quaternion Normalize'
 * '<S35>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
 * '<S36>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate DCM & Euler Angles/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S37>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate omega_dot/I x w'
 * '<S38>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate omega_dot/I x w1'
 * '<S39>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate omega_dot/wx(Iw)'
 * '<S40>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate omega_dot/wx(Iw)/Subsystem'
 * '<S41>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Calculate omega_dot/wx(Iw)/Subsystem1'
 * '<S42>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Vbxw/Subsystem'
 * '<S43>'  : 'simulator_gen_monorate/DynModel/Dynamics/6DoF (Quaternion)/Vbxw/Subsystem1'
 * '<S44>'  : 'simulator_gen_monorate/DynModel/Dynamics/Ground_Interaction/Discrete Derivative'
 * '<S45>'  : 'simulator_gen_monorate/DynModel/Dynamics/MotorDynamics/MotDynamics'
 * '<S46>'  : 'simulator_gen_monorate/DynModel/Dynamics/MotorDynamics/MotDynamics1'
 * '<S47>'  : 'simulator_gen_monorate/DynModel/Dynamics/MotorDynamics/MotDynamics2'
 * '<S48>'  : 'simulator_gen_monorate/DynModel/Dynamics/MotorDynamics/MotDynamics3'
 * '<S49>'  : 'simulator_gen_monorate/DynModel/Dynamics/Subsystem/Multicopter_SFunction'
 * '<S50>'  : 'simulator_gen_monorate/DynModel/Dynamics/Subsystem/SYSTEM_MADE_WITH_BLOCKS'
 * '<S51>'  : 'simulator_gen_monorate/DynModel/Dynamics/Subsystem/multicopter'
 * '<S52>'  : 'simulator_gen_monorate/DynModel/Dynamics/Subsystem/Multicopter_SFunction/__InputSSForSFun__'
 * '<S53>'  : 'simulator_gen_monorate/DynModel/Dynamics/Subsystem/Multicopter_SFunction/__OutputSSForSFun__'
 * '<S54>'  : 'simulator_gen_monorate/DynModel/Dynamics/transfer_function/Linear Second-Order Actuator'
 * '<S55>'  : 'simulator_gen_monorate/DynModel/Dynamics/transfer_function/Linear Second-Order Actuator1'
 * '<S56>'  : 'simulator_gen_monorate/DynModel/Dynamics/transfer_function/Linear Second-Order Actuator2'
 * '<S57>'  : 'simulator_gen_monorate/DynModel/Dynamics/transfer_function/Linear Second-Order Actuator3'
 * '<S58>'  : 'simulator_gen_monorate/DynModel/Sensors/Altimeter'
 * '<S59>'  : 'simulator_gen_monorate/DynModel/Sensors/Band-Limited White Noise1'
 * '<S60>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions'
 * '<S61>'  : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA'
 * '<S62>'  : 'simulator_gen_monorate/DynModel/Sensors/GPS'
 * '<S63>'  : 'simulator_gen_monorate/DynModel/Sensors/ISA Atmosphere Model_'
 * '<S64>'  : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000'
 * '<S65>'  : 'simulator_gen_monorate/DynModel/Sensors/Magnetometer'
 * '<S66>'  : 'simulator_gen_monorate/DynModel/Sensors/Pitot Sensor'
 * '<S67>'  : 'simulator_gen_monorate/DynModel/Sensors/PixFlow'
 * '<S68>'  : 'simulator_gen_monorate/DynModel/Sensors/Pressure Sensor'
 * '<S69>'  : 'simulator_gen_monorate/DynModel/Sensors/Sonar'
 * '<S70>'  : 'simulator_gen_monorate/DynModel/Sensors/Temperature Sensor'
 * '<S71>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace'
 * '<S72>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Positive Trace'
 * '<S73>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/trace(DCM)'
 * '<S74>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)'
 * '<S75>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)'
 * '<S76>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)'
 * '<S77>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/diag(DCM)'
 * '<S78>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S79>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S80>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S81>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s'
 * '<S82>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1'
 * '<S83>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S84>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S85>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/cos(theta)sin(psi) + (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S86>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s'
 * '<S87>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1'
 * '<S88>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) -sin(theta)'
 * '<S89>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(phi) + (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S90>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S91>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s'
 * '<S92>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1'
 * '<S93>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(phi)sin(theta)cos(psi) + sin(phi)sin(psi) +sin(theta)'
 * '<S94>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(phi) - (cos(phi)sin(theta)sin(psi) - sin(phi)cos(psi))'
 * '<S95>'  : 'simulator_gen_monorate/DynModel/Sensors/Direction Cosine Matrix  to Quaternions/Positive Trace/cos(theta)sin(psi) - (sin(phi)sin(theta)cos(psi) - cos(phi)sin(psi))'
 * '<S96>'  : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap'
 * '<S97>'  : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap1'
 * '<S98>'  : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset'
 * '<S99>'  : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/pos_deg'
 * '<S100>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90'
 * '<S101>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap/Wrap Longitude'
 * '<S102>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Compare To Constant'
 * '<S103>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap/Latitude Wrap 90/Wrap Angle 180'
 * '<S104>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90'
 * '<S105>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap1/Wrap Longitude'
 * '<S106>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Compare To Constant'
 * '<S107>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LatLong wrap1/Latitude Wrap 90/Wrap Angle 180'
 * '<S108>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset/Find Radian//Distance'
 * '<S109>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset/pos_deg'
 * '<S110>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/Angle Conversion2'
 * '<S111>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/denom'
 * '<S112>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/e'
 * '<S113>' : 'simulator_gen_monorate/DynModel/Sensors/Flat Earth to LLA/LongLat_offset/Find Radian//Distance/e^4'
 * '<S114>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1'
 * '<S115>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap'
 * '<S116>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap1'
 * '<S117>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset'
 * '<S118>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/pos_deg'
 * '<S119>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap/Latitude Wrap 90'
 * '<S120>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap/Wrap Longitude'
 * '<S121>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap/Latitude Wrap 90/Compare To Constant'
 * '<S122>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap/Latitude Wrap 90/Wrap Angle 180'
 * '<S123>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap1/Latitude Wrap 90'
 * '<S124>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap1/Wrap Longitude'
 * '<S125>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap1/Latitude Wrap 90/Compare To Constant'
 * '<S126>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LatLong wrap1/Latitude Wrap 90/Wrap Angle 180'
 * '<S127>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset/Find Radian//Distance'
 * '<S128>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset/pos_deg'
 * '<S129>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset/Find Radian//Distance/Angle Conversion2'
 * '<S130>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset/Find Radian//Distance/denom'
 * '<S131>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset/Find Radian//Distance/e'
 * '<S132>' : 'simulator_gen_monorate/DynModel/Sensors/GPS/Flat Earth to LLA1/LongLat_offset/Find Radian//Distance/e^4'
 * '<S133>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Acceleration Conversion'
 * '<S134>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer'
 * '<S135>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope'
 * '<S136>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Dynamics'
 * '<S137>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Random bias'
 * '<S138>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)'
 * '<S139>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/wdot x d'
 * '<S140>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Dynamics/No Dynamics'
 * '<S141>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Dynamics/Second-order Dynamics'
 * '<S142>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Dynamics/Second-order Dynamics/Transfer Fcn X'
 * '<S143>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Dynamics/Second-order Dynamics/Transfer Fcn Y'
 * '<S144>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/Dynamics/Second-order Dynamics/Transfer Fcn Z'
 * '<S145>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)/w x (w x d)'
 * '<S146>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)/w x d'
 * '<S147>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)/w x (w x d)/Subsystem'
 * '<S148>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)/w x (w x d)/Subsystem1'
 * '<S149>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)/w x d/Subsystem'
 * '<S150>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/w x (w x d)/w x d/Subsystem1'
 * '<S151>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/wdot x d/Subsystem'
 * '<S152>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Accelerometer/wdot x d/Subsystem1'
 * '<S153>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Dynamics'
 * '<S154>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Random bias'
 * '<S155>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Dynamics/No Dynamics'
 * '<S156>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Dynamics/Second-order Dynamics'
 * '<S157>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Dynamics/Second-order Dynamics/Transfer Fcn X'
 * '<S158>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Dynamics/Second-order Dynamics/Transfer Fcn Y'
 * '<S159>' : 'simulator_gen_monorate/DynModel/Sensors/Invensense MPU-6000/Three-axis Gyroscope/Dynamics/Second-order Dynamics/Transfer Fcn Z'
 * '<S160>' : 'simulator_gen_monorate/DynModel/Sensors/Magnetometer/Measurement Noise'
 * '<S161>' : 'simulator_gen_monorate/DynModel/Sensors/PixFlow/Band-Limited White Noise4'
 * '<S162>' : 'simulator_gen_monorate/DynModel/Sensors/Sonar/Band-Limited White Noise3'
 * '<S163>' : 'simulator_gen_monorate/DynModel/Sensors/Sonar/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_DynModel_h_ */

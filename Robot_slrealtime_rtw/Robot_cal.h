#ifndef RTW_HEADER_Robot_cal_h_
#define RTW_HEADER_Robot_cal_h_
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<S13>/If Action Subsystem7' */
struct Robot_IfActionSubsystem7_cal_type {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S29>/Out1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S29>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S29>/Discrete-Time Integrator'
                                        */
};

/* Storage class 'PageSwitching', for system '<Root>' */
struct Robot_cal_type {
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_g_cal;/* '<S219>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_kq_cal;/* '<S218>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_dt_cal;/* '<S217>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_hk_cal;/* '<S216>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_jt_cal;/* '<S215>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_pb_cal;/* '<S214>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_nv_cal;/* '<S213>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_n_cal;/* '<S151>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_ld_cal;/* '<S150>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_k_cal;/* '<S149>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_a_cal;/* '<S148>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_e_cal;/* '<S147>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_d_cal;/* '<S146>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_lp_cal;/* '<S145>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_p5_cal;/* '<S83>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_m_cal;/* '<S82>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_l_cal;/* '<S81>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_ji_cal;/* '<S80>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_he_cal;/* '<S79>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_hj_cal;/* '<S78>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_hm_cal;/* '<S77>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_i_cal;/* '<S19>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_pl_cal;/* '<S18>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_px_cal;/* '<S17>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_j_cal;/* '<S16>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_h_cal;/* '<S15>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_p_cal;/* '<S14>/If Action Subsystem7' */
  Robot_IfActionSubsystem7_cal_type Robot_IfActionSubsystem7_cal;/* '<S13>/If Action Subsystem7' */
  real_T State_1_Enable_TaskIndex;   /* Mask Parameter: State_1_Enable_TaskIndex
                                      * Referenced by: '<S67>/Constant2'
                                      */
  real_T State_2_Enable_TaskIndex;   /* Mask Parameter: State_2_Enable_TaskIndex
                                      * Referenced by: '<S70>/Constant2'
                                      */
  real_T State_3_Enable_TaskIndex;   /* Mask Parameter: State_3_Enable_TaskIndex
                                      * Referenced by: '<S73>/Constant2'
                                      */
  real_T State_10_Enable_TaskIndex; /* Mask Parameter: State_10_Enable_TaskIndex
                                     * Referenced by: '<S55>/Constant2'
                                     */
  real_T State_11_Enable_TaskIndex; /* Mask Parameter: State_11_Enable_TaskIndex
                                     * Referenced by: '<S58>/Constant2'
                                     */
  real_T State_12_Enable_TaskIndex; /* Mask Parameter: State_12_Enable_TaskIndex
                                     * Referenced by: '<S61>/Constant2'
                                     */
  real_T State_13_Enable_TaskIndex; /* Mask Parameter: State_13_Enable_TaskIndex
                                     * Referenced by: '<S64>/Constant2'
                                     */
  real_T State_12_Enable_TaskIndex_g;
                                  /* Mask Parameter: State_12_Enable_TaskIndex_g
                                   * Referenced by: '<S126>/Constant2'
                                   */
  real_T State_1_Enable_TaskIndex_n;
                                   /* Mask Parameter: State_1_Enable_TaskIndex_n
                                    * Referenced by: '<S132>/Constant2'
                                    */
  real_T State_2_Enable_TaskIndex_o;
                                   /* Mask Parameter: State_2_Enable_TaskIndex_o
                                    * Referenced by: '<S135>/Constant2'
                                    */
  real_T State_3_Enable_TaskIndex_i;
                                   /* Mask Parameter: State_3_Enable_TaskIndex_i
                                    * Referenced by: '<S138>/Constant2'
                                    */
  real_T State_10_Enable_TaskIndex_b;
                                  /* Mask Parameter: State_10_Enable_TaskIndex_b
                                   * Referenced by: '<S120>/Constant2'
                                   */
  real_T State_11_Enable_TaskIndex_n;
                                  /* Mask Parameter: State_11_Enable_TaskIndex_n
                                   * Referenced by: '<S123>/Constant2'
                                   */
  real_T State_13_Enable_TaskIndex_m;
                                  /* Mask Parameter: State_13_Enable_TaskIndex_m
                                   * Referenced by: '<S129>/Constant2'
                                   */
  real_T State_9_Enable_TaskIndex;   /* Mask Parameter: State_9_Enable_TaskIndex
                                      * Referenced by: '<S141>/Constant2'
                                      */
  real_T State_12_Enable_TaskIndex_n;
                                  /* Mask Parameter: State_12_Enable_TaskIndex_n
                                   * Referenced by: '<S194>/Constant2'
                                   */
  real_T State_1_Enable_TaskIndex_nj;
                                  /* Mask Parameter: State_1_Enable_TaskIndex_nj
                                   * Referenced by: '<S200>/Constant2'
                                   */
  real_T State_2_Enable_TaskIndex_l;
                                   /* Mask Parameter: State_2_Enable_TaskIndex_l
                                    * Referenced by: '<S203>/Constant2'
                                    */
  real_T State_3_Enable_TaskIndex_b;
                                   /* Mask Parameter: State_3_Enable_TaskIndex_b
                                    * Referenced by: '<S206>/Constant2'
                                    */
  real_T State_10_Enable_TaskIndex_m;
                                  /* Mask Parameter: State_10_Enable_TaskIndex_m
                                   * Referenced by: '<S188>/Constant2'
                                   */
  real_T State_11_Enable_TaskIndex_p;
                                  /* Mask Parameter: State_11_Enable_TaskIndex_p
                                   * Referenced by: '<S191>/Constant2'
                                   */
  real_T State_13_Enable_TaskIndex_c;
                                  /* Mask Parameter: State_13_Enable_TaskIndex_c
                                   * Referenced by: '<S197>/Constant2'
                                   */
  real_T State_9_Enable_TaskIndex_c;
                                   /* Mask Parameter: State_9_Enable_TaskIndex_c
                                    * Referenced by: '<S209>/Constant2'
                                    */
  real_T State_12_Enable_TaskIndex_m;
                                  /* Mask Parameter: State_12_Enable_TaskIndex_m
                                   * Referenced by: '<S262>/Constant2'
                                   */
  real_T State_1_Enable_TaskIndex_l;
                                   /* Mask Parameter: State_1_Enable_TaskIndex_l
                                    * Referenced by: '<S268>/Constant2'
                                    */
  real_T State_2_Enable_TaskIndex_c;
                                   /* Mask Parameter: State_2_Enable_TaskIndex_c
                                    * Referenced by: '<S271>/Constant2'
                                    */
  real_T State_3_Enable_TaskIndex_p;
                                   /* Mask Parameter: State_3_Enable_TaskIndex_p
                                    * Referenced by: '<S274>/Constant2'
                                    */
  real_T State_10_Enable_TaskIndex_mi;
                                 /* Mask Parameter: State_10_Enable_TaskIndex_mi
                                  * Referenced by: '<S256>/Constant2'
                                  */
  real_T State_11_Enable_TaskIndex_j;
                                  /* Mask Parameter: State_11_Enable_TaskIndex_j
                                   * Referenced by: '<S259>/Constant2'
                                   */
  real_T State_13_Enable_TaskIndex_g;
                                  /* Mask Parameter: State_13_Enable_TaskIndex_g
                                   * Referenced by: '<S265>/Constant2'
                                   */
  real_T State_9_Enable_TaskIndex_c4;
                                  /* Mask Parameter: State_9_Enable_TaskIndex_c4
                                   * Referenced by: '<S277>/Constant2'
                                   */
  real_T State_1_Enable_TaskIndex_njg;
                                 /* Mask Parameter: State_1_Enable_TaskIndex_njg
                                  * Referenced by: '<S280>/Constant2'
                                  */
  real_T State_2_Enable_TaskIndex_g;
                                   /* Mask Parameter: State_2_Enable_TaskIndex_g
                                    * Referenced by: '<S283>/Constant2'
                                    */
  real_T State_3_Enable_TaskIndex_a;
                                   /* Mask Parameter: State_3_Enable_TaskIndex_a
                                    * Referenced by: '<S286>/Constant2'
                                    */
  real_T State_4_Enable_TaskIndex;   /* Mask Parameter: State_4_Enable_TaskIndex
                                      * Referenced by: '<S289>/Constant2'
                                      */
  real_T State_5_Enable_TaskIndex;   /* Mask Parameter: State_5_Enable_TaskIndex
                                      * Referenced by: '<S292>/Constant2'
                                      */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S13>/Constant5'
                                        */
  real_T Constant4_Value_n;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant4'
                                        */
  real_T Constant5_Value_p;            /* Expression: 1
                                        * Referenced by: '<S14>/Constant5'
                                        */
  real_T Constant4_Value_o;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant4'
                                        */
  real_T Constant5_Value_d;            /* Expression: 1
                                        * Referenced by: '<S15>/Constant5'
                                        */
  real_T Constant4_Value_i;            /* Expression: 0
                                        * Referenced by: '<S16>/Constant4'
                                        */
  real_T Constant5_Value_b;            /* Expression: 1
                                        * Referenced by: '<S16>/Constant5'
                                        */
  real_T Constant4_Value_l;            /* Expression: 0
                                        * Referenced by: '<S17>/Constant4'
                                        */
  real_T Constant5_Value_m;            /* Expression: 1
                                        * Referenced by: '<S17>/Constant5'
                                        */
  real_T Constant4_Value_j;            /* Expression: 0
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real_T Constant5_Value_j;            /* Expression: 1
                                        * Referenced by: '<S18>/Constant5'
                                        */
  real_T Constant4_Value_oi;           /* Expression: 0
                                        * Referenced by: '<S19>/Constant4'
                                        */
  real_T Constant5_Value_a;            /* Expression: 1
                                        * Referenced by: '<S19>/Constant5'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S2>/Memory1'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S67>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S67>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S70>/Constant1'
                                        */
  real_T Constant_Value_l;             /* Expression: 1
                                        * Referenced by: '<S70>/Constant'
                                        */
  real_T Constant1_Value_j;            /* Expression: 0
                                        * Referenced by: '<S73>/Constant1'
                                        */
  real_T Constant_Value_lp;            /* Expression: 1
                                        * Referenced by: '<S73>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: 0
                                        * Referenced by: '<S55>/Constant1'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S58>/Constant1'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S61>/Constant1'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: 0
                                        * Referenced by: '<S64>/Constant1'
                                        */
  real_T Constant_Value_a;             /* Expression: 1
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T Merge1_InitialOutput;       /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S2>/Merge1'
                                      */
  real_T Constant4_Value_b;            /* Expression: 0
                                        * Referenced by: '<S77>/Constant4'
                                        */
  real_T Constant5_Value_e;            /* Expression: 1
                                        * Referenced by: '<S77>/Constant5'
                                        */
  real_T Constant4_Value_o1;           /* Expression: 0
                                        * Referenced by: '<S78>/Constant4'
                                        */
  real_T Constant5_Value_g;            /* Expression: 1
                                        * Referenced by: '<S78>/Constant5'
                                        */
  real_T Constant4_Value_a;            /* Expression: 0
                                        * Referenced by: '<S79>/Constant4'
                                        */
  real_T Constant5_Value_k;            /* Expression: 1
                                        * Referenced by: '<S79>/Constant5'
                                        */
  real_T Constant4_Value_f;            /* Expression: 0
                                        * Referenced by: '<S80>/Constant4'
                                        */
  real_T Constant5_Value_h;            /* Expression: 1
                                        * Referenced by: '<S80>/Constant5'
                                        */
  real_T Constant4_Value_a4;           /* Expression: 0
                                        * Referenced by: '<S81>/Constant4'
                                        */
  real_T Constant5_Value_c;            /* Expression: 1
                                        * Referenced by: '<S81>/Constant5'
                                        */
  real_T Constant4_Value_fs;           /* Expression: 0
                                        * Referenced by: '<S82>/Constant4'
                                        */
  real_T Constant5_Value_kl;           /* Expression: 1
                                        * Referenced by: '<S82>/Constant5'
                                        */
  real_T Constant4_Value_g;            /* Expression: 0
                                        * Referenced by: '<S83>/Constant4'
                                        */
  real_T Constant5_Value_cd;           /* Expression: 1
                                        * Referenced by: '<S83>/Constant5'
                                        */
  real_T Memory1_InitialCondition_f;   /* Expression: 0
                                        * Referenced by: '<S3>/Memory1'
                                        */
  real_T Constant1_Value_nv;           /* Expression: 0
                                        * Referenced by: '<S126>/Constant1'
                                        */
  real_T Constant_Value_f;             /* Expression: 1
                                        * Referenced by: '<S126>/Constant'
                                        */
  real_T Constant1_Value_np;           /* Expression: 0
                                        * Referenced by: '<S132>/Constant1'
                                        */
  real_T Constant_Value_g;             /* Expression: 1
                                        * Referenced by: '<S132>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S135>/Constant1'
                                        */
  real_T Constant_Value_fc;            /* Expression: 1
                                        * Referenced by: '<S135>/Constant'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S138>/Constant1'
                                        */
  real_T Constant_Value_n;             /* Expression: 1
                                        * Referenced by: '<S138>/Constant'
                                        */
  real_T Constant1_Value_jv;           /* Expression: 0
                                        * Referenced by: '<S120>/Constant1'
                                        */
  real_T Constant_Value_fj;            /* Expression: 1
                                        * Referenced by: '<S120>/Constant'
                                        */
  real_T Constant1_Value_nd;           /* Expression: 0
                                        * Referenced by: '<S123>/Constant1'
                                        */
  real_T Constant_Value_l0;            /* Expression: 1
                                        * Referenced by: '<S123>/Constant'
                                        */
  real_T Constant1_Value_ie;           /* Expression: 0
                                        * Referenced by: '<S129>/Constant1'
                                        */
  real_T Constant_Value_nn;            /* Expression: 1
                                        * Referenced by: '<S129>/Constant'
                                        */
  real_T Merge1_InitialOutput_k;   /* Computed Parameter: Merge1_InitialOutput_k
                                    * Referenced by: '<S3>/Merge1'
                                    */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S141>/Constant'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S141>/Constant1'
                                        */
  real_T Constant4_Value_p;            /* Expression: 0
                                        * Referenced by: '<S145>/Constant4'
                                        */
  real_T Constant5_Value_f;            /* Expression: 1
                                        * Referenced by: '<S145>/Constant5'
                                        */
  real_T Constant4_Value_d;            /* Expression: 0
                                        * Referenced by: '<S146>/Constant4'
                                        */
  real_T Constant5_Value_l;            /* Expression: 1
                                        * Referenced by: '<S146>/Constant5'
                                        */
  real_T Constant4_Value_ne;           /* Expression: 0
                                        * Referenced by: '<S147>/Constant4'
                                        */
  real_T Constant5_Value_k2;           /* Expression: 1
                                        * Referenced by: '<S147>/Constant5'
                                        */
  real_T Constant4_Value_e;            /* Expression: 0
                                        * Referenced by: '<S148>/Constant4'
                                        */
  real_T Constant5_Value_dd;           /* Expression: 1
                                        * Referenced by: '<S148>/Constant5'
                                        */
  real_T Constant4_Value_nc;           /* Expression: 0
                                        * Referenced by: '<S149>/Constant4'
                                        */
  real_T Constant5_Value_es;           /* Expression: 1
                                        * Referenced by: '<S149>/Constant5'
                                        */
  real_T Constant4_Value_be;           /* Expression: 0
                                        * Referenced by: '<S150>/Constant4'
                                        */
  real_T Constant5_Value_ex;           /* Expression: 1
                                        * Referenced by: '<S150>/Constant5'
                                        */
  real_T Constant4_Value_fi;           /* Expression: 0
                                        * Referenced by: '<S151>/Constant4'
                                        */
  real_T Constant5_Value_mf;           /* Expression: 1
                                        * Referenced by: '<S151>/Constant5'
                                        */
  real_T Memory1_InitialCondition_i;   /* Expression: 0
                                        * Referenced by: '<S4>/Memory1'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S194>/Constant1'
                                        */
  real_T Constant_Value_gr;            /* Expression: 1
                                        * Referenced by: '<S194>/Constant'
                                        */
  real_T Constant1_Value_ce;           /* Expression: 0
                                        * Referenced by: '<S200>/Constant1'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S200>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<S203>/Constant1'
                                        */
  real_T Constant_Value_o;             /* Expression: 1
                                        * Referenced by: '<S203>/Constant'
                                        */
  real_T Constant1_Value_nq;           /* Expression: 0
                                        * Referenced by: '<S206>/Constant1'
                                        */
  real_T Constant_Value_n3;            /* Expression: 1
                                        * Referenced by: '<S206>/Constant'
                                        */
  real_T Constant1_Value_bw;           /* Expression: 0
                                        * Referenced by: '<S188>/Constant1'
                                        */
  real_T Constant_Value_b;             /* Expression: 1
                                        * Referenced by: '<S188>/Constant'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0
                                        * Referenced by: '<S191>/Constant1'
                                        */
  real_T Constant_Value_n0;            /* Expression: 1
                                        * Referenced by: '<S191>/Constant'
                                        */
  real_T Constant1_Value_hn;           /* Expression: 0
                                        * Referenced by: '<S197>/Constant1'
                                        */
  real_T Constant_Value_o0;            /* Expression: 1
                                        * Referenced by: '<S197>/Constant'
                                        */
  real_T Merge1_InitialOutput_l;   /* Computed Parameter: Merge1_InitialOutput_l
                                    * Referenced by: '<S4>/Merge1'
                                    */
  real_T Constant_Value_dx;            /* Expression: 1
                                        * Referenced by: '<S209>/Constant'
                                        */
  real_T Constant1_Value_k;            /* Expression: 0
                                        * Referenced by: '<S209>/Constant1'
                                        */
  real_T Constant4_Value_au;           /* Expression: 0
                                        * Referenced by: '<S213>/Constant4'
                                        */
  real_T Constant5_Value_h0;           /* Expression: 1
                                        * Referenced by: '<S213>/Constant5'
                                        */
  real_T Constant4_Value_jy;           /* Expression: 0
                                        * Referenced by: '<S214>/Constant4'
                                        */
  real_T Constant5_Value_cz;           /* Expression: 1
                                        * Referenced by: '<S214>/Constant5'
                                        */
  real_T Constant4_Value_e2;           /* Expression: 0
                                        * Referenced by: '<S215>/Constant4'
                                        */
  real_T Constant5_Value_gm;           /* Expression: 1
                                        * Referenced by: '<S215>/Constant5'
                                        */
  real_T Constant4_Value_m;            /* Expression: 0
                                        * Referenced by: '<S216>/Constant4'
                                        */
  real_T Constant5_Value_gn;           /* Expression: 1
                                        * Referenced by: '<S216>/Constant5'
                                        */
  real_T Constant4_Value_k;            /* Expression: 0
                                        * Referenced by: '<S217>/Constant4'
                                        */
  real_T Constant5_Value_n;            /* Expression: 1
                                        * Referenced by: '<S217>/Constant5'
                                        */
  real_T Constant4_Value_dh;           /* Expression: 0
                                        * Referenced by: '<S218>/Constant4'
                                        */
  real_T Constant5_Value_af;           /* Expression: 1
                                        * Referenced by: '<S218>/Constant5'
                                        */
  real_T Constant4_Value_i1;           /* Expression: 0
                                        * Referenced by: '<S219>/Constant4'
                                        */
  real_T Constant5_Value_bk;           /* Expression: 1
                                        * Referenced by: '<S219>/Constant5'
                                        */
  real_T Memory1_InitialCondition_fh;  /* Expression: 0
                                        * Referenced by: '<S5>/Memory1'
                                        */
  real_T Constant1_Value_cr;           /* Expression: 0
                                        * Referenced by: '<S262>/Constant1'
                                        */
  real_T Constant_Value_lg;            /* Expression: 1
                                        * Referenced by: '<S262>/Constant'
                                        */
  real_T Constant1_Value_ik;           /* Expression: 0
                                        * Referenced by: '<S268>/Constant1'
                                        */
  real_T Constant_Value_ii;            /* Expression: 1
                                        * Referenced by: '<S268>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S271>/Constant1'
                                        */
  real_T Constant_Value_fq;            /* Expression: 1
                                        * Referenced by: '<S271>/Constant'
                                        */
  real_T Constant1_Value_gt;           /* Expression: 0
                                        * Referenced by: '<S274>/Constant1'
                                        */
  real_T Constant_Value_dm;            /* Expression: 1
                                        * Referenced by: '<S274>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<S256>/Constant1'
                                        */
  real_T Constant_Value_hw;            /* Expression: 1
                                        * Referenced by: '<S256>/Constant'
                                        */
  real_T Constant1_Value_c5;           /* Expression: 0
                                        * Referenced by: '<S259>/Constant1'
                                        */
  real_T Constant_Value_dr;            /* Expression: 1
                                        * Referenced by: '<S259>/Constant'
                                        */
  real_T Constant1_Value_px;           /* Expression: 0
                                        * Referenced by: '<S265>/Constant1'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S265>/Constant'
                                        */
  real_T Merge1_InitialOutput_j;   /* Computed Parameter: Merge1_InitialOutput_j
                                    * Referenced by: '<S5>/Merge1'
                                    */
  real_T Constant_Value_m3;            /* Expression: 1
                                        * Referenced by: '<S277>/Constant'
                                        */
  real_T Constant1_Value_jr;           /* Expression: 0
                                        * Referenced by: '<S277>/Constant1'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1000*1000
                                        * Referenced by: '<S295>/Gain1'
                                        */
  real_T Memory1_InitialCondition_m;   /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Constant1_Value_dg;           /* Expression: 0
                                        * Referenced by: '<S280>/Constant1'
                                        */
  real_T Constant_Value_pt;            /* Expression: 1
                                        * Referenced by: '<S280>/Constant'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 1000*1000
                                        * Referenced by: '<S297>/Gain1'
                                        */
  real_T Constant1_Value_kn;           /* Expression: 0
                                        * Referenced by: '<S283>/Constant1'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S283>/Constant'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 1000*1000
                                        * Referenced by: '<S300>/Gain1'
                                        */
  real_T Constant1_Value_iy;           /* Expression: 0
                                        * Referenced by: '<S286>/Constant1'
                                        */
  real_T Constant_Value_ap;            /* Expression: 1
                                        * Referenced by: '<S286>/Constant'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 1000*1000
                                        * Referenced by: '<S296>/Gain1'
                                        */
  real_T Constant1_Value_or;           /* Expression: 0
                                        * Referenced by: '<S289>/Constant1'
                                        */
  real_T Constant_Value_nu;            /* Expression: 1
                                        * Referenced by: '<S289>/Constant'
                                        */
  real_T Constant1_Value_el;           /* Expression: 0
                                        * Referenced by: '<S292>/Constant1'
                                        */
  real_T Constant_Value_b1;            /* Expression: 1
                                        * Referenced by: '<S292>/Constant'
                                        */
  real_T Merge1_InitialOutput_g;   /* Computed Parameter: Merge1_InitialOutput_g
                                    * Referenced by: '<Root>/Merge1'
                                    */
  real32_T S1_AD_Ch1_Y0;               /* Computed Parameter: S1_AD_Ch1_Y0
                                        * Referenced by: '<S305>/S1_AD_Ch1'
                                        */
  real32_T S1_AD_Ch2_Y0;               /* Computed Parameter: S1_AD_Ch2_Y0
                                        * Referenced by: '<S305>/S1_AD_Ch2'
                                        */
  real32_T S1_Quaternions_q0_Y0;     /* Computed Parameter: S1_Quaternions_q0_Y0
                                      * Referenced by: '<S305>/S1_Quaternions_q0'
                                      */
  real32_T S1_Quaternions_q1_Y0;     /* Computed Parameter: S1_Quaternions_q1_Y0
                                      * Referenced by: '<S305>/S1_Quaternions_q1'
                                      */
  real32_T S1_Quaternions_q2_Y0;     /* Computed Parameter: S1_Quaternions_q2_Y0
                                      * Referenced by: '<S305>/S1_Quaternions_q2'
                                      */
  real32_T S1_Quaternions_q3_Y0;     /* Computed Parameter: S1_Quaternions_q3_Y0
                                      * Referenced by: '<S305>/S1_Quaternions_q3'
                                      */
  real32_T S2_AD_Ch1_Y0;               /* Computed Parameter: S2_AD_Ch1_Y0
                                        * Referenced by: '<S305>/S2_AD_Ch1'
                                        */
  real32_T S2_AD_Ch2_Y0;               /* Computed Parameter: S2_AD_Ch2_Y0
                                        * Referenced by: '<S305>/S2_AD_Ch2'
                                        */
  real32_T S2_Quaternions_q0_Y0;     /* Computed Parameter: S2_Quaternions_q0_Y0
                                      * Referenced by: '<S305>/S2_Quaternions_q0'
                                      */
  real32_T S2_Quaternions_q1_Y0;     /* Computed Parameter: S2_Quaternions_q1_Y0
                                      * Referenced by: '<S305>/S2_Quaternions_q1'
                                      */
  real32_T S2_Quaternions_q2_Y0;     /* Computed Parameter: S2_Quaternions_q2_Y0
                                      * Referenced by: '<S305>/S2_Quaternions_q2'
                                      */
  real32_T S2_Quaternions_q3_Y0;     /* Computed Parameter: S2_Quaternions_q3_Y0
                                      * Referenced by: '<S305>/S2_Quaternions_q3'
                                      */
  real32_T S3_AD_Ch1_Y0;               /* Computed Parameter: S3_AD_Ch1_Y0
                                        * Referenced by: '<S305>/S3_AD_Ch1'
                                        */
  real32_T S3_AD_Ch2_Y0;               /* Computed Parameter: S3_AD_Ch2_Y0
                                        * Referenced by: '<S305>/S3_AD_Ch2'
                                        */
  real32_T S3_Quaternions_q0_Y0;     /* Computed Parameter: S3_Quaternions_q0_Y0
                                      * Referenced by: '<S305>/S3_Quaternions_q0'
                                      */
  real32_T S3_Quaternions_q1_Y0;     /* Computed Parameter: S3_Quaternions_q1_Y0
                                      * Referenced by: '<S305>/S3_Quaternions_q1'
                                      */
  real32_T S3_Quaternions_q2_Y0;     /* Computed Parameter: S3_Quaternions_q2_Y0
                                      * Referenced by: '<S305>/S3_Quaternions_q2'
                                      */
  real32_T S3_Quaternions_q3_Y0;     /* Computed Parameter: S3_Quaternions_q3_Y0
                                      * Referenced by: '<S305>/S3_Quaternions_q3'
                                      */
  real32_T Gain8_Gain;                 /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<S306>/Gain8'
                                        */
  real32_T Bias_Bias;                  /* Computed Parameter: Bias_Bias
                                        * Referenced by: '<S306>/Bias'
                                        */
  real32_T Gain8_Gain_h;               /* Computed Parameter: Gain8_Gain_h
                                        * Referenced by: '<S307>/Gain8'
                                        */
  real32_T Bias_Bias_p;                /* Computed Parameter: Bias_Bias_p
                                        * Referenced by: '<S307>/Bias'
                                        */
  real32_T Gain8_Gain_p;               /* Computed Parameter: Gain8_Gain_p
                                        * Referenced by: '<S308>/Gain8'
                                        */
  real32_T Bias_Bias_k;                /* Computed Parameter: Bias_Bias_k
                                        * Referenced by: '<S308>/Bias'
                                        */
  real32_T Gain8_Gain_n;               /* Computed Parameter: Gain8_Gain_n
                                        * Referenced by: '<S309>/Gain8'
                                        */
  real32_T Bias_Bias_pl;               /* Computed Parameter: Bias_Bias_pl
                                        * Referenced by: '<S309>/Bias'
                                        */
  int32_T Constant_Value_mh;           /* Computed Parameter: Constant_Value_mh
                                        * Referenced by: '<S15>/Constant'
                                        */
  int32_T Constant1_Value_gd;          /* Computed Parameter: Constant1_Value_gd
                                        * Referenced by: '<S16>/Constant1'
                                        */
  int32_T Constant_Value_cn;           /* Computed Parameter: Constant_Value_cn
                                        * Referenced by: '<S17>/Constant'
                                        */
  int32_T Constant1_Value_pd;          /* Computed Parameter: Constant1_Value_pd
                                        * Referenced by: '<S17>/Constant1'
                                        */
  int32_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S18>/Constant2'
                                        */
  int32_T Constant2_Value_e;           /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S19>/Constant2'
                                        */
  int32_T Constant_Value_k0;           /* Computed Parameter: Constant_Value_k0
                                        * Referenced by: '<S79>/Constant'
                                        */
  int32_T Constant1_Value_ow;          /* Computed Parameter: Constant1_Value_ow
                                        * Referenced by: '<S80>/Constant1'
                                        */
  int32_T Constant_Value_n3i;          /* Computed Parameter: Constant_Value_n3i
                                        * Referenced by: '<S81>/Constant'
                                        */
  int32_T Constant1_Value_d1;          /* Computed Parameter: Constant1_Value_d1
                                        * Referenced by: '<S81>/Constant1'
                                        */
  int32_T Constant2_Value_l;           /* Computed Parameter: Constant2_Value_l
                                        * Referenced by: '<S82>/Constant2'
                                        */
  int32_T Constant2_Value_f;           /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S83>/Constant2'
                                        */
  int32_T Constant_Value_pa;           /* Computed Parameter: Constant_Value_pa
                                        * Referenced by: '<S147>/Constant'
                                        */
  int32_T Constant1_Value_kb;          /* Computed Parameter: Constant1_Value_kb
                                        * Referenced by: '<S148>/Constant1'
                                        */
  int32_T Constant_Value_ha;           /* Computed Parameter: Constant_Value_ha
                                        * Referenced by: '<S149>/Constant'
                                        */
  int32_T Constant1_Value_co;          /* Computed Parameter: Constant1_Value_co
                                        * Referenced by: '<S149>/Constant1'
                                        */
  int32_T Constant2_Value_m;           /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S150>/Constant2'
                                        */
  int32_T Constant2_Value_k;           /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S151>/Constant2'
                                        */
  int32_T Constant_Value_fe;           /* Computed Parameter: Constant_Value_fe
                                        * Referenced by: '<S215>/Constant'
                                        */
  int32_T Constant1_Value_jj;          /* Computed Parameter: Constant1_Value_jj
                                        * Referenced by: '<S216>/Constant1'
                                        */
  int32_T Constant_Value_kf;           /* Computed Parameter: Constant_Value_kf
                                        * Referenced by: '<S217>/Constant'
                                        */
  int32_T Constant1_Value_a;           /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S217>/Constant1'
                                        */
  int32_T Constant2_Value_j;           /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S218>/Constant2'
                                        */
  int32_T Constant2_Value_eo;          /* Computed Parameter: Constant2_Value_eo
                                        * Referenced by: '<S219>/Constant2'
                                        */
  int32_T M1_ActuralPosition_Y0;    /* Computed Parameter: M1_ActuralPosition_Y0
                                     * Referenced by: '<S305>/M1_ActuralPosition'
                                     */
  int32_T M1_ActuralVelocity_Y0;    /* Computed Parameter: M1_ActuralVelocity_Y0
                                     * Referenced by: '<S305>/M1_ActuralVelocity'
                                     */
  int32_T M2_ActuralPosition_Y0;    /* Computed Parameter: M2_ActuralPosition_Y0
                                     * Referenced by: '<S305>/M2_ActuralPosition'
                                     */
  int32_T M2_ActuralVelocity_Y0;    /* Computed Parameter: M2_ActuralVelocity_Y0
                                     * Referenced by: '<S305>/M2_ActuralVelocity'
                                     */
  int32_T M3_ActuralPosition_Y0;    /* Computed Parameter: M3_ActuralPosition_Y0
                                     * Referenced by: '<S305>/M3_ActuralPosition'
                                     */
  int32_T M3_ActuralVelocity_Y0;    /* Computed Parameter: M3_ActuralVelocity_Y0
                                     * Referenced by: '<S305>/M3_ActuralVelocity'
                                     */
  int32_T M4_ActuralPosition_Y0;    /* Computed Parameter: M4_ActuralPosition_Y0
                                     * Referenced by: '<S305>/M4_ActuralPosition'
                                     */
  int32_T M4_ActuralVelocity_Y0;    /* Computed Parameter: M4_ActuralVelocity_Y0
                                     * Referenced by: '<S305>/M4_ActuralVelocity'
                                     */
  int32_T Bias2_Bias;                  /* Computed Parameter: Bias2_Bias
                                        * Referenced by: '<S301>/Bias2'
                                        */
  int32_T Bias3_Bias;                  /* Computed Parameter: Bias3_Bias
                                        * Referenced by: '<S304>/Bias3'
                                        */
  int32_T Gain4_Gain;                  /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S301>/Gain4'
                                        */
  int32_T Gain6_Gain;                  /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S298>/Gain6'
                                        */
  int32_T Gain5_Gain;                  /* Computed Parameter: Gain5_Gain
                                        * Referenced by: '<S304>/Gain5'
                                        */
  int32_T Gain6_Gain_n;                /* Computed Parameter: Gain6_Gain_n
                                        * Referenced by: '<S302>/Gain6'
                                        */
  int32_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S299>/Gain2'
                                        */
  int32_T Gain3_Gain;                  /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S303>/Gain3'
                                        */
  uint32_T RatedCurrent_Y0;            /* Computed Parameter: RatedCurrent_Y0
                                        * Referenced by: '<S15>/RatedCurrent'
                                        */
  uint32_T RatedCurrent_Y0_a;          /* Computed Parameter: RatedCurrent_Y0_a
                                        * Referenced by: '<S79>/RatedCurrent'
                                        */
  uint32_T RatedCurrent_Y0_b;          /* Computed Parameter: RatedCurrent_Y0_b
                                        * Referenced by: '<S147>/RatedCurrent'
                                        */
  uint32_T RatedCurrent_Y0_g;          /* Computed Parameter: RatedCurrent_Y0_g
                                        * Referenced by: '<S215>/RatedCurrent'
                                        */
  uint32_T M1_DCLinkCircuitVoltage_Y0;
                               /* Computed Parameter: M1_DCLinkCircuitVoltage_Y0
                                * Referenced by: '<S305>/M1_DCLinkCircuitVoltage'
                                */
  uint32_T M2_DCLinkCircuitVoltage_Y0;
                               /* Computed Parameter: M2_DCLinkCircuitVoltage_Y0
                                * Referenced by: '<S305>/M2_DCLinkCircuitVoltage'
                                */
  uint32_T M3_DCLinkCircuitVoltage_Y0;
                               /* Computed Parameter: M3_DCLinkCircuitVoltage_Y0
                                * Referenced by: '<S305>/M3_DCLinkCircuitVoltage'
                                */
  uint32_T M4_DCLinkCircuitVoltage_Y0;
                               /* Computed Parameter: M4_DCLinkCircuitVoltage_Y0
                                * Referenced by: '<S305>/M4_DCLinkCircuitVoltage'
                                */
  int16_T M1_ActuralTorque_Y0;        /* Computed Parameter: M1_ActuralTorque_Y0
                                       * Referenced by: '<S305>/M1_ActuralTorque'
                                       */
  int16_T M2_ActuralTorque_Y0;        /* Computed Parameter: M2_ActuralTorque_Y0
                                       * Referenced by: '<S305>/M2_ActuralTorque'
                                       */
  int16_T M3_ActuralTorque_Y0;        /* Computed Parameter: M3_ActuralTorque_Y0
                                       * Referenced by: '<S305>/M3_ActuralTorque'
                                       */
  int16_T M4_ActuralTorque_Y0;        /* Computed Parameter: M4_ActuralTorque_Y0
                                       * Referenced by: '<S305>/M4_ActuralTorque'
                                       */
  uint16_T CounterLimited_uplimit;     /* Mask Parameter: CounterLimited_uplimit
                                        * Referenced by: '<S39>/FixPt Switch'
                                        */
  uint16_T CounterLimited_uplimit_l; /* Mask Parameter: CounterLimited_uplimit_l
                                      * Referenced by: '<S104>/FixPt Switch'
                                      */
  uint16_T CounterLimited_uplimit_lw;
                                    /* Mask Parameter: CounterLimited_uplimit_lw
                                     * Referenced by: '<S172>/FixPt Switch'
                                     */
  uint16_T CounterLimited_uplimit_e; /* Mask Parameter: CounterLimited_uplimit_e
                                      * Referenced by: '<S240>/FixPt Switch'
                                      */
  uint16_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S30>/Output'
                                   */
  uint16_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S14>/Memory'
                                   */
  uint16_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S14>/Constant2'
                                        */
  uint16_T Constant1_Value_dk;         /* Computed Parameter: Constant1_Value_dk
                                        * Referenced by: '<S14>/Constant1'
                                        */
  uint16_T Constant_Value_hu;          /* Computed Parameter: Constant_Value_hu
                                        * Referenced by: '<S14>/Constant'
                                        */
  uint16_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S38>/FixPt Constant'
                                       */
  uint16_T Constant_Value_js;          /* Computed Parameter: Constant_Value_js
                                        * Referenced by: '<S39>/Constant'
                                        */
  uint16_T Output_InitialCondition_i;
                                /* Computed Parameter: Output_InitialCondition_i
                                 * Referenced by: '<S95>/Output'
                                 */
  uint16_T Memory_InitialCondition_m;
                                /* Computed Parameter: Memory_InitialCondition_m
                                 * Referenced by: '<S78>/Memory'
                                 */
  uint16_T Constant2_Value_ff;         /* Computed Parameter: Constant2_Value_ff
                                        * Referenced by: '<S78>/Constant2'
                                        */
  uint16_T Constant1_Value_jt;         /* Computed Parameter: Constant1_Value_jt
                                        * Referenced by: '<S78>/Constant1'
                                        */
  uint16_T Constant_Value_ll;          /* Computed Parameter: Constant_Value_ll
                                        * Referenced by: '<S78>/Constant'
                                        */
  uint16_T FixPtConstant_Value_f;   /* Computed Parameter: FixPtConstant_Value_f
                                     * Referenced by: '<S103>/FixPt Constant'
                                     */
  uint16_T Constant_Value_ij;          /* Computed Parameter: Constant_Value_ij
                                        * Referenced by: '<S104>/Constant'
                                        */
  uint16_T Output_InitialCondition_j;
                                /* Computed Parameter: Output_InitialCondition_j
                                 * Referenced by: '<S163>/Output'
                                 */
  uint16_T Memory_InitialCondition_m1;
                               /* Computed Parameter: Memory_InitialCondition_m1
                                * Referenced by: '<S146>/Memory'
                                */
  uint16_T Constant2_Value_fp;         /* Computed Parameter: Constant2_Value_fp
                                        * Referenced by: '<S146>/Constant2'
                                        */
  uint16_T Constant1_Value_ek;         /* Computed Parameter: Constant1_Value_ek
                                        * Referenced by: '<S146>/Constant1'
                                        */
  uint16_T Constant_Value_cw;          /* Computed Parameter: Constant_Value_cw
                                        * Referenced by: '<S146>/Constant'
                                        */
  uint16_T FixPtConstant_Value_j;   /* Computed Parameter: FixPtConstant_Value_j
                                     * Referenced by: '<S171>/FixPt Constant'
                                     */
  uint16_T Constant_Value_jt;          /* Computed Parameter: Constant_Value_jt
                                        * Referenced by: '<S172>/Constant'
                                        */
  uint16_T Output_InitialCondition_c;
                                /* Computed Parameter: Output_InitialCondition_c
                                 * Referenced by: '<S231>/Output'
                                 */
  uint16_T Memory_InitialCondition_k;
                                /* Computed Parameter: Memory_InitialCondition_k
                                 * Referenced by: '<S214>/Memory'
                                 */
  uint16_T Constant2_Value_jx;         /* Computed Parameter: Constant2_Value_jx
                                        * Referenced by: '<S214>/Constant2'
                                        */
  uint16_T Constant1_Value_pr;         /* Computed Parameter: Constant1_Value_pr
                                        * Referenced by: '<S214>/Constant1'
                                        */
  uint16_T Constant_Value_gp;          /* Computed Parameter: Constant_Value_gp
                                        * Referenced by: '<S214>/Constant'
                                        */
  uint16_T FixPtConstant_Value_d;   /* Computed Parameter: FixPtConstant_Value_d
                                     * Referenced by: '<S239>/FixPt Constant'
                                     */
  uint16_T Constant_Value_iv;          /* Computed Parameter: Constant_Value_iv
                                        * Referenced by: '<S240>/Constant'
                                        */
  int8_T Constant_Value_ju;            /* Computed Parameter: Constant_Value_ju
                                        * Referenced by: '<S16>/Constant'
                                        */
  int8_T Constant_Value_f4;            /* Computed Parameter: Constant_Value_f4
                                        * Referenced by: '<S80>/Constant'
                                        */
  int8_T Constant_Value_fy;            /* Computed Parameter: Constant_Value_fy
                                        * Referenced by: '<S148>/Constant'
                                        */
  int8_T Constant_Value_bb;            /* Computed Parameter: Constant_Value_bb
                                        * Referenced by: '<S216>/Constant'
                                        */
  int8_T M1_ModeofOperationDisplay_Y0;
                             /* Computed Parameter: M1_ModeofOperationDisplay_Y0
                              * Referenced by: '<S305>/M1_ModeofOperationDisplay'
                              */
  int8_T M2_ModeofOperationDisplay_Y0;
                             /* Computed Parameter: M2_ModeofOperationDisplay_Y0
                              * Referenced by: '<S305>/M2_ModeofOperationDisplay'
                              */
  int8_T M3_ModeofOperationDisplay_Y0;
                             /* Computed Parameter: M3_ModeofOperationDisplay_Y0
                              * Referenced by: '<S305>/M3_ModeofOperationDisplay'
                              */
  int8_T M4_ModeofOperationDisplay_Y0;
                             /* Computed Parameter: M4_ModeofOperationDisplay_Y0
                              * Referenced by: '<S305>/M4_ModeofOperationDisplay'
                              */
  boolean_T Constant1_Value_l0;        /* Computed Parameter: Constant1_Value_l0
                                        * Referenced by: '<S18>/Constant1'
                                        */
  boolean_T Constant1_Value_hu;        /* Computed Parameter: Constant1_Value_hu
                                        * Referenced by: '<S19>/Constant1'
                                        */
  boolean_T Constant1_Value_it;        /* Computed Parameter: Constant1_Value_it
                                        * Referenced by: '<S82>/Constant1'
                                        */
  boolean_T Constant1_Value_jd;        /* Computed Parameter: Constant1_Value_jd
                                        * Referenced by: '<S83>/Constant1'
                                        */
  boolean_T Constant1_Value_bv;        /* Computed Parameter: Constant1_Value_bv
                                        * Referenced by: '<S150>/Constant1'
                                        */
  boolean_T Constant1_Value_ma;        /* Computed Parameter: Constant1_Value_ma
                                        * Referenced by: '<S151>/Constant1'
                                        */
  boolean_T Constant1_Value_l4;        /* Computed Parameter: Constant1_Value_l4
                                        * Referenced by: '<S218>/Constant1'
                                        */
  boolean_T Constant1_Value_lg;        /* Computed Parameter: Constant1_Value_lg
                                        * Referenced by: '<S219>/Constant1'
                                        */
};

/* Storage class 'PageSwitching' */
extern Robot_cal_type Robot_cal_impl;
extern Robot_cal_type *Robot_cal;

#endif                                 /* RTW_HEADER_Robot_cal_h_ */

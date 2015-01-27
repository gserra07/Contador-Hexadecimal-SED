/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Tarzan/Desktop/glkkkkk+/SED OP/Contador_a_7Seg_tb.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0854715194_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0854715194_2372691052_p_1(char *t0)
{
    char t11[16];
    char t13[16];
    char t18[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    int64 t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 7040);
    xsi_report(t2, 21U, (unsigned char)1);
    goto LAB9;

LAB10:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t10 = (t7 * 2);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t10);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    t2 = (t0 + 7061);
    xsi_report(t2, 21U, (unsigned char)1);
    goto LAB15;

LAB16:    xsi_set_current_line(118, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7082);
    t4 = (t0 + 7086);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t18 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 0;
    t19 = (t15 + 4U);
    *((int *)t19) = 3;
    t19 = (t15 + 8U);
    *((int *)t19) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t17;
    t6 = xsi_base_array_concat(t6, t11, t12, (char)97, t2, t13, (char)97, t4, t18, (char)101);
    t17 = (4U + 4U);
    t8 = (8U != t17);
    if (t8 == 1)
        goto LAB24;

LAB25:    t19 = (t0 + 4256);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t6, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_size_not_matching(8U, t17, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t25 = (t9 == (unsigned char)3);
    if (t25 == 1)
        goto LAB32;

LAB33:    t8 = (unsigned char)0;

LAB34:    if (t8 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t10 = (t7 * 3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t10);

LAB43:    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB30:    t24 = (t0 + 7098);
    xsi_report(t24, 25U, (unsigned char)1);
    goto LAB31;

LAB32:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 7090);
    t6 = (t0 + 7094);
    t15 = ((IEEE_P_2592010699) + 4024);
    t19 = (t13 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 0;
    t21 = (t19 + 4U);
    *((int *)t21) = 3;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t17;
    t21 = (t18 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 3;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;
    t14 = xsi_base_array_concat(t14, t11, t15, (char)97, t2, t13, (char)97, t6, t18, (char)101);
    t17 = (4U + 4U);
    t26 = 1;
    if (8U == t17)
        goto LAB35;

LAB36:    t26 = 0;

LAB37:    t8 = t26;
    goto LAB34;

LAB35:    t27 = 0;

LAB38:    if (t27 < 8U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t22 = (t4 + t27);
    t23 = (t14 + t27);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB36;

LAB40:    t27 = (t27 + 1);
    goto LAB38;

LAB41:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB47:    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

LAB45:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t25 = (t9 == (unsigned char)3);
    if (t25 == 1)
        goto LAB51;

LAB52:    t8 = (unsigned char)0;

LAB53:    if (t8 == 0)
        goto LAB49;

LAB50:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB46:    goto LAB45;

LAB48:    goto LAB46;

LAB49:    t24 = (t0 + 7139);
    xsi_report(t24, 26U, (unsigned char)1);
    goto LAB50;

LAB51:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 7123);
    t6 = (t0 + 7131);
    t15 = ((IEEE_P_2592010699) + 4024);
    t19 = (t13 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 0;
    t21 = (t19 + 4U);
    *((int *)t21) = 7;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t16 = (7 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t17;
    t21 = (t18 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 7;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t20 = (7 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;
    t14 = xsi_base_array_concat(t14, t11, t15, (char)97, t2, t13, (char)97, t6, t18, (char)101);
    t17 = (8U + 8U);
    t26 = 1;
    if (16U == t17)
        goto LAB54;

LAB55:    t26 = 0;

LAB56:    t8 = t26;
    goto LAB53;

LAB54:    t27 = 0;

LAB57:    if (t27 < 16U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t22 = (t4 + t27);
    t23 = (t14 + t27);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB55;

LAB59:    t27 = (t27 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 7191);
    t4 = (t0 + 7195);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t18 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 0;
    t19 = (t15 + 4U);
    *((int *)t19) = 3;
    t19 = (t15 + 8U);
    *((int *)t19) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t17;
    t6 = xsi_base_array_concat(t6, t11, t12, (char)97, t2, t13, (char)97, t4, t18, (char)101);
    t17 = (4U + 4U);
    t8 = (8U != t17);
    if (t8 == 1)
        goto LAB66;

LAB67:    t19 = (t0 + 4256);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t6, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t2 = (t0 + 7165);
    xsi_report(t2, 26U, (unsigned char)1);
    goto LAB65;

LAB66:    xsi_size_not_matching(8U, t17, 0);
    goto LAB67;

LAB68:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t25 = (t9 == (unsigned char)3);
    if (t25 == 1)
        goto LAB74;

LAB75:    t8 = (unsigned char)0;

LAB76:    if (t8 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t10 = (t7 * 5);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t10);

LAB79:    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    t2 = (t0 + 7199);
    xsi_report(t2, 30U, (unsigned char)1);
    goto LAB73;

LAB74:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t26 = *((unsigned char *)t4);
    t29 = (t26 == (unsigned char)3);
    t8 = t29;
    goto LAB76;

LAB77:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t25 = (t9 == (unsigned char)2);
    if (t25 == 1)
        goto LAB83;

LAB84:    t8 = (unsigned char)0;

LAB85:    if (t8 == 0)
        goto LAB81;

LAB82:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 7259);
    t4 = (t0 + 7263);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t18 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 0;
    t19 = (t15 + 4U);
    *((int *)t19) = 3;
    t19 = (t15 + 8U);
    *((int *)t19) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t17;
    t6 = xsi_base_array_concat(t6, t11, t12, (char)97, t2, t13, (char)97, t4, t18, (char)101);
    t17 = (4U + 4U);
    t8 = (8U != t17);
    if (t8 == 1)
        goto LAB86;

LAB87:    t19 = (t0 + 4256);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t6, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB78:    goto LAB77;

LAB80:    goto LAB78;

LAB81:    t2 = (t0 + 7229);
    xsi_report(t2, 30U, (unsigned char)1);
    goto LAB82;

LAB83:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t26 = *((unsigned char *)t4);
    t29 = (t26 == (unsigned char)2);
    t8 = t29;
    goto LAB85;

LAB86:    xsi_size_not_matching(8U, t17, 0);
    goto LAB87;

LAB88:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t25 = *((unsigned char *)t3);
    t26 = (t25 == (unsigned char)3);
    if (t26 == 1)
        goto LAB97;

LAB98:    t9 = (unsigned char)0;

LAB99:    if (t9 == 1)
        goto LAB94;

LAB95:    t8 = (unsigned char)0;

LAB96:    if (t8 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t10 = (t7 * 5);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t10);

LAB108:    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t28 = (t0 + 7275);
    xsi_report(t28, 26U, (unsigned char)1);
    goto LAB93;

LAB94:    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 7267);
    t12 = (t0 + 7271);
    t19 = ((IEEE_P_2592010699) + 4024);
    t21 = (t13 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 3;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;
    t22 = (t18 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 3;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t17;
    t15 = xsi_base_array_concat(t15, t11, t19, (char)97, t2, t13, (char)97, t12, t18, (char)101);
    t17 = (4U + 4U);
    t31 = 1;
    if (8U == t17)
        goto LAB100;

LAB101:    t31 = 0;

LAB102:    t8 = t31;
    goto LAB96;

LAB97:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t29 = *((unsigned char *)t4);
    t30 = (t29 == (unsigned char)2);
    t9 = t30;
    goto LAB99;

LAB100:    t27 = 0;

LAB103:    if (t27 < 8U)
        goto LAB104;
    else
        goto LAB102;

LAB104:    t23 = (t5 + t27);
    t24 = (t15 + t27);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB101;

LAB105:    t27 = (t27 + 1);
    goto LAB103;

LAB106:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB112:    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB107:    goto LAB106;

LAB109:    goto LAB107;

LAB110:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 7301);
    t4 = (t0 + 7305);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t18 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 0;
    t19 = (t15 + 4U);
    *((int *)t19) = 3;
    t19 = (t15 + 8U);
    *((int *)t19) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t17;
    t6 = xsi_base_array_concat(t6, t11, t12, (char)97, t2, t13, (char)97, t4, t18, (char)101);
    t17 = (4U + 4U);
    t8 = (8U != t17);
    if (t8 == 1)
        goto LAB114;

LAB115:    t19 = (t0 + 4256);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t6, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB111:    goto LAB110;

LAB113:    goto LAB111;

LAB114:    xsi_size_not_matching(8U, t17, 0);
    goto LAB115;

LAB116:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t10 = (t7 * 5);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t10);

LAB122:    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

LAB120:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t25 = *((unsigned char *)t3);
    t26 = (t25 == (unsigned char)2);
    if (t26 == 1)
        goto LAB129;

LAB130:    t9 = (unsigned char)0;

LAB131:    if (t9 == 1)
        goto LAB126;

LAB127:    t8 = (unsigned char)0;

LAB128:    if (t8 == 0)
        goto LAB124;

LAB125:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB140:    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB121:    goto LAB120;

LAB123:    goto LAB121;

LAB124:    t24 = (t0 + 7317);
    xsi_report(t24, 29U, (unsigned char)1);
    goto LAB125;

LAB126:    t24 = (t0 + 1832U);
    t28 = *((char **)t24);
    t30 = *((unsigned char *)t28);
    t31 = (t30 == (unsigned char)2);
    t8 = t31;
    goto LAB128;

LAB129:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 7309);
    t6 = (t0 + 7313);
    t15 = ((IEEE_P_2592010699) + 4024);
    t19 = (t13 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 0;
    t21 = (t19 + 4U);
    *((int *)t21) = 3;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t17;
    t21 = (t18 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 3;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t20 = (3 - 0);
    t17 = (t20 * 1);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;
    t14 = xsi_base_array_concat(t14, t11, t15, (char)97, t2, t13, (char)97, t6, t18, (char)101);
    t17 = (4U + 4U);
    t29 = 1;
    if (8U == t17)
        goto LAB132;

LAB133:    t29 = 0;

LAB134:    t9 = t29;
    goto LAB131;

LAB132:    t27 = 0;

LAB135:    if (t27 < 8U)
        goto LAB136;
    else
        goto LAB134;

LAB136:    t22 = (t4 + t27);
    t23 = (t14 + t27);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB133;

LAB137:    t27 = (t27 + 1);
    goto LAB135;

LAB138:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(187, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB144:    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB139:    goto LAB138;

LAB141:    goto LAB139;

LAB142:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t10 = (t7 * 5);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t10);

LAB148:    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB143:    goto LAB142;

LAB145:    goto LAB143;

LAB146:    xsi_set_current_line(193, ng0);
    if ((unsigned char)0 == 0)
        goto LAB150;

LAB151:    goto LAB2;

LAB147:    goto LAB146;

LAB149:    goto LAB147;

LAB150:    t2 = (t0 + 7346);
    xsi_report(t2, 24U, (unsigned char)3);
    goto LAB151;

}


extern void work_a_0854715194_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0854715194_2372691052_p_0,(void *)work_a_0854715194_2372691052_p_1};
	xsi_register_didat("work_a_0854715194_2372691052", "isim/Contador_a_7Seg_tb_isim_beh.exe.sim/work/a_0854715194_2372691052.didat");
	xsi_register_executes(pe);
}

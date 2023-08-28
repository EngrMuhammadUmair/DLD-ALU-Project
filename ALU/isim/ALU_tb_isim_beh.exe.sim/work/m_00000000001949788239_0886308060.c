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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/M.UMER/Desktop/DLD Project/ALU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};



static void Always_31_0(char *t0)
{
    char t10[8];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1916);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(133, ng0);

LAB181:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB42:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 8, t9, 8);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 8);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB46;

LAB43:    if (t20 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t10) = 1;

LAB46:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB9:    xsi_set_current_line(42, ng0);

LAB47:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 8);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB51;

LAB48:    if (t20 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t10) = 1;

LAB51:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB11:    xsi_set_current_line(49, ng0);

LAB52:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB56;

LAB53:    if (t20 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t10) = 1;

LAB56:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB13:    xsi_set_current_line(55, ng0);

LAB57:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB61;

LAB58:    if (t20 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t10) = 1;

LAB61:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB15:    xsi_set_current_line(61, ng0);

LAB62:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB66;

LAB63:    if (t20 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t10) = 1;

LAB66:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB17:    xsi_set_current_line(67, ng0);

LAB67:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB71;

LAB68:    if (t20 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t10) = 1;

LAB71:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB19:    xsi_set_current_line(73, ng0);

LAB72:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t25) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = (t0 + 600U);
    t9 = *((char **)t8);
    memset(t26, 0, 8);
    t8 = (t26 + 4);
    t23 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t26) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 0);
    *((unsigned int *)t8) = t20;
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t21 & 127U);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 127U);
    xsi_vlogtype_concat(t10, 16, 8, 2U, t26, 7, t25, 1);
    t24 = (t0 + 1012);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 16);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB76;

LAB73:    if (t20 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t10) = 1;

LAB76:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB21:    xsi_set_current_line(79, ng0);

LAB77:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t25) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t15 & 127U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 127U);
    t8 = (t0 + 600U);
    t9 = *((char **)t8);
    memset(t26, 0, 8);
    t8 = (t26 + 4);
    t23 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t23);
    t21 = (t20 >> 7);
    t22 = (t21 & 1);
    *((unsigned int *)t8) = t22;
    xsi_vlogtype_concat(t10, 16, 8, 2U, t26, 1, t25, 7);
    t24 = (t0 + 1012);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 16);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB81;

LAB78:    if (t20 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t10) = 1;

LAB81:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB23:    xsi_set_current_line(85, ng0);

LAB82:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB83;

LAB84:
LAB85:    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB89;

LAB86:    if (t20 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t10) = 1;

LAB89:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB25:    xsi_set_current_line(91, ng0);

LAB90:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB91;

LAB92:
LAB93:    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 16);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB97;

LAB94:    if (t20 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t10) = 1;

LAB97:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB27:    xsi_set_current_line(97, ng0);

LAB98:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB99;

LAB100:
LAB101:    t23 = (t0 + 1012);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 16);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB105;

LAB102:    if (t20 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t10) = 1;

LAB105:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB29:    xsi_set_current_line(103, ng0);

LAB106:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t25) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t25 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB107;

LAB108:
LAB109:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB111;

LAB110:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 65535U);
    t46 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t46 & 65535U);
    t47 = (t0 + 1012);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 16);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB115;

LAB112:    if (t20 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t10) = 1;

LAB115:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB31:    xsi_set_current_line(109, ng0);

LAB116:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t25) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t25 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB117;

LAB118:
LAB119:    memset(t10, 0, 8);
    t41 = (t10 + 4);
    t42 = (t25 + 4);
    t43 = *((unsigned int *)t25);
    t44 = (~(t43));
    *((unsigned int *)t10) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB121;

LAB120:    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & 65535U);
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 65535U);
    t47 = (t0 + 1012);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 16);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB125;

LAB122:    if (t20 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t10) = 1;

LAB125:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB33:    xsi_set_current_line(115, ng0);

LAB126:    xsi_set_current_line(116, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t25) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t25 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB127;

LAB128:
LAB129:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t25 + 4);
    t21 = *((unsigned int *)t25);
    t22 = (~(t21));
    *((unsigned int *)t10) = t22;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB131;

LAB130:    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 65535U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 65535U);
    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 16);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB135;

LAB132:    if (t20 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t10) = 1;

LAB135:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB35:    xsi_set_current_line(121, ng0);

LAB136:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB138;

LAB137:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB138;

LAB141:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB139;

LAB140:    memset(t25, 0, 8);
    t23 = (t26 + 4);
    t11 = *((unsigned int *)t23);
    t12 = (~(t11));
    t13 = *((unsigned int *)t26);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t23) != 0)
        goto LAB144;

LAB145:    t41 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t41);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB146;

LAB147:    t19 = *((unsigned int *)t25);
    t20 = (~(t19));
    t21 = *((unsigned int *)t41);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t41) > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t25) > 0)
        goto LAB152;

LAB153:    memcpy(t10, t47, 8);

LAB154:    t52 = (t0 + 1012);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 16);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB158;

LAB155:    if (t20 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t10) = 1;

LAB158:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB37:    xsi_set_current_line(127, ng0);

LAB159:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB163;

LAB160:    if (t20 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t26) = 1;

LAB163:    memset(t25, 0, 8);
    t23 = (t26 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t23) != 0)
        goto LAB166;

LAB167:    t41 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t41);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB168;

LAB169:    t37 = *((unsigned int *)t25);
    t38 = (~(t37));
    t39 = *((unsigned int *)t41);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t41) > 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t25) > 0)
        goto LAB174;

LAB175:    memcpy(t10, t47, 8);

LAB176:    t52 = (t0 + 1012);
    xsi_vlogvar_assign_value(t52, t10, 0, 0, 16);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB180;

LAB177:    if (t20 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t10) = 1;

LAB180:    t24 = (t0 + 1196);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 1);
    goto LAB41;

LAB45:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB46;

LAB50:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB51;

LAB55:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB56;

LAB60:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB61;

LAB65:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB66;

LAB70:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB71;

LAB75:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB76;

LAB80:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB81;

LAB83:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t23 = (t4 + 4);
    t24 = (t7 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t22 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB85;

LAB88:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB89;

LAB91:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t23 = (t4 + 4);
    t24 = (t7 + 4);
    t21 = *((unsigned int *)t23);
    t22 = (~(t21));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t22);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB93;

LAB96:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB97;

LAB99:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB101;

LAB104:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB105;

LAB107:    t19 = *((unsigned int *)t25);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t25) = (t19 | t20);
    t23 = (t4 + 4);
    t24 = (t7 + 4);
    t21 = *((unsigned int *)t23);
    t22 = (~(t21));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t22);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB109;

LAB111:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t39 | t40);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t43 | t44);
    goto LAB110;

LAB114:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB115;

LAB117:    t19 = *((unsigned int *)t25);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t25) = (t19 | t20);
    t23 = (t4 + 4);
    t24 = (t7 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t22 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t39 & t35);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & t36);
    goto LAB119;

LAB121:    t45 = *((unsigned int *)t10);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t45 | t46);
    t48 = *((unsigned int *)t41);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t48 | t49);
    goto LAB120;

LAB124:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB125;

LAB127:    t19 = *((unsigned int *)t25);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t25) = (t19 | t20);
    goto LAB129;

LAB131:    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB130;

LAB134:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB135;

LAB138:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB140;

LAB139:    *((unsigned int *)t26) = 1;
    goto LAB140;

LAB142:    *((unsigned int *)t25) = 1;
    goto LAB145;

LAB144:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB145;

LAB146:    t42 = ((char*)((ng2)));
    goto LAB147;

LAB148:    t47 = ((char*)((ng1)));
    goto LAB149;

LAB150:    xsi_vlog_unsigned_bit_combine(t10, 16, t42, 16, t47, 16);
    goto LAB154;

LAB152:    memcpy(t10, t42, 8);
    goto LAB154;

LAB157:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB158;

LAB162:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB163;

LAB164:    *((unsigned int *)t25) = 1;
    goto LAB167;

LAB166:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB167;

LAB168:    t42 = ((char*)((ng2)));
    goto LAB169;

LAB170:    t47 = ((char*)((ng1)));
    goto LAB171;

LAB172:    xsi_vlog_unsigned_bit_combine(t10, 16, t42, 16, t47, 16);
    goto LAB176;

LAB174:    memcpy(t10, t42, 8);
    goto LAB176;

LAB179:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB180;

}


extern void work_m_00000000001949788239_0886308060_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001949788239_0886308060", "isim/ALU_tb_isim_beh.exe.sim/work/m_00000000001949788239_0886308060.didat");
	xsi_register_executes(pe);
}

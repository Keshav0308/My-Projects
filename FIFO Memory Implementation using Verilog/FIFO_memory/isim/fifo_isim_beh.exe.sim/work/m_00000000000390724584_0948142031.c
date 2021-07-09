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
static const char *ng0 = "C:/Users/91880/Desktop/DTU/Academics/Programming/Xilinx/FIFO_memory/FIFO_memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {8, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Cont_15_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3592);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 6872);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 6712);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_16_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3592);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 6936);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 6728);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_20_2(char *t0)
{
    char t8[8];
    char t19[8];
    char t28[8];
    char t36[8];
    char t76[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    int t89;
    char *t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    int t97;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 6744);
    *((int *)t2) = 1;
    t3 = (t0 + 5680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 5456);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(21, ng0);
    t6 = (t0 + 2872U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t6) != 0)
        goto LAB10;

LAB11:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB12;

LAB13:    memcpy(t36, t8, 8);

LAB14:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2872U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t2) != 0)
        goto LAB33;

LAB34:    t5 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB35;

LAB36:    memcpy(t28, t8, 8);

LAB37:    t35 = (t28 + 4);
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t28);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB28:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 5456);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB10:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB11;

LAB12:    t20 = (t0 + 3192U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t20) == 0)
        goto LAB15;

LAB17:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB18:    memset(t28, 0, 8);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t29) != 0)
        goto LAB21;

LAB22:    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t8 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB21:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB23:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t8 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t8);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB25;

LAB26:    xsi_set_current_line(22, ng0);
    t74 = (t0 + 2232U);
    t75 = *((char **)t74);
    t74 = (t0 + 3912);
    t78 = (t0 + 3912);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = (t0 + 3912);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = (t0 + 4232);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    xsi_vlog_generic_convert_array_indices(t76, t77, t80, t83, 2, 1, t86, 3, 2);
    t87 = (t76 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (!(t88));
    t90 = (t77 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (!(t91));
    t93 = (t89 && t92);
    if (t93 == 1)
        goto LAB29;

LAB30:    goto LAB28;

LAB29:    t94 = *((unsigned int *)t76);
    t95 = *((unsigned int *)t77);
    t96 = (t94 - t95);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t74, t75, 0, *((unsigned int *)t77), t97, 0LL);
    goto LAB30;

LAB31:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB33:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB35:    t6 = (t0 + 2712U);
    t7 = *((char **)t6);
    memset(t19, 0, 8);
    t6 = (t7 + 4);
    t22 = *((unsigned int *)t6);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t6) != 0)
        goto LAB40;

LAB41:    t30 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t19);
    t32 = (t30 & t31);
    *((unsigned int *)t28) = t32;
    t15 = (t8 + 4);
    t20 = (t19 + 4);
    t21 = (t28 + 4);
    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t20);
    t37 = (t33 | t34);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t21);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB37;

LAB38:    *((unsigned int *)t19) = 1;
    goto LAB41;

LAB40:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB41;

LAB42:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t28) = (t43 | t44);
    t27 = (t8 + 4);
    t29 = (t19 + 4);
    t45 = *((unsigned int *)t8);
    t46 = (~(t45));
    t47 = *((unsigned int *)t27);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t52 = (~(t49));
    t53 = *((unsigned int *)t29);
    t54 = (~(t53));
    t60 = (t46 & t48);
    t61 = (t52 & t54);
    t55 = (~(t60));
    t56 = (~(t61));
    t57 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t57 & t55);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t58 & t56);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    t62 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t62 & t56);
    goto LAB44;

LAB45:    xsi_set_current_line(24, ng0);
    t40 = (t0 + 2232U);
    t41 = *((char **)t40);
    t40 = (t0 + 3912);
    t42 = (t0 + 3912);
    t50 = (t42 + 72U);
    t51 = *((char **)t50);
    t68 = (t0 + 3912);
    t74 = (t68 + 64U);
    t75 = *((char **)t74);
    t78 = (t0 + 4232);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    xsi_vlog_generic_convert_array_indices(t36, t76, t51, t75, 2, 1, t80, 3, 2);
    t81 = (t36 + 4);
    t69 = *((unsigned int *)t81);
    t89 = (!(t69));
    t82 = (t76 + 4);
    t70 = *((unsigned int *)t82);
    t92 = (!(t70));
    t93 = (t89 && t92);
    if (t93 == 1)
        goto LAB48;

LAB49:    goto LAB47;

LAB48:    t71 = *((unsigned int *)t36);
    t72 = *((unsigned int *)t76);
    t96 = (t71 - t72);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t40, t41, 0, *((unsigned int *)t76), t97, 0LL);
    goto LAB49;

}

static void Always_29_3(char *t0)
{
    char t8[8];
    char t19[8];
    char t28[8];
    char t36[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    t3 = (t0 + 5928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 5704);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(30, ng0);
    t6 = (t0 + 2712U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t6) != 0)
        goto LAB10;

LAB11:    t15 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB12;

LAB13:    memcpy(t36, t8, 8);

LAB14:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2872U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t5 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB33;

LAB34:    memcpy(t28, t8, 8);

LAB35:    t35 = (t28 + 4);
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t28);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB28:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 5704);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB10:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB11;

LAB12:    t20 = (t0 + 3032U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t20) == 0)
        goto LAB15;

LAB17:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB18:    memset(t28, 0, 8);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t29) != 0)
        goto LAB21;

LAB22:    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t8 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB21:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB23:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t8 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t8);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB25;

LAB26:    xsi_set_current_line(31, ng0);
    t74 = (t0 + 3912);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t78 = (t0 + 3912);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = (t0 + 3912);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = (t0 + 4072);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    xsi_vlog_generic_get_array_select_value(t77, 8, t76, t80, t83, 2, 1, t86, 3, 2);
    t87 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t87, t77, 0, 0, 8, 0LL);
    goto LAB28;

LAB29:    *((unsigned int *)t8) = 1;
    goto LAB32;

LAB31:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB33:    t6 = (t0 + 2712U);
    t7 = *((char **)t6);
    memset(t19, 0, 8);
    t6 = (t7 + 4);
    t22 = *((unsigned int *)t6);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t6) != 0)
        goto LAB38;

LAB39:    t30 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t19);
    t32 = (t30 & t31);
    *((unsigned int *)t28) = t32;
    t15 = (t8 + 4);
    t20 = (t19 + 4);
    t21 = (t28 + 4);
    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t20);
    t37 = (t33 | t34);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t21);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t19) = 1;
    goto LAB39;

LAB38:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t28) = (t43 | t44);
    t27 = (t8 + 4);
    t29 = (t19 + 4);
    t45 = *((unsigned int *)t8);
    t46 = (~(t45));
    t47 = *((unsigned int *)t27);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t52 = (~(t49));
    t53 = *((unsigned int *)t29);
    t54 = (~(t53));
    t60 = (t46 & t48);
    t61 = (t52 & t54);
    t55 = (~(t60));
    t56 = (~(t61));
    t57 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t57 & t55);
    t58 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t58 & t56);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    t62 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t62 & t56);
    goto LAB42;

LAB43:    xsi_set_current_line(33, ng0);
    t40 = (t0 + 3912);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t50 = (t0 + 3912);
    t51 = (t50 + 72U);
    t68 = *((char **)t51);
    t74 = (t0 + 3912);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t78 = (t0 + 4072);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    xsi_vlog_generic_get_array_select_value(t36, 8, t42, t68, t76, 2, 1, t80, 3, 2);
    t81 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t81, t36, 0, 0, 8, 0LL);
    goto LAB45;

}

static void Always_38_4(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
    char t21[8];
    char t27[8];
    char t34[8];
    char t66[8];
    char t81[8];
    char t94[8];
    char t101[8];
    char t133[8];
    char t141[8];
    char t184[8];
    char t192[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    char *t191;
    char *t193;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 6176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    t4 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 5952);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(39, ng0);
    t6 = (t0 + 2552U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(42, ng0);

LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2872U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t2) != 0)
        goto LAB15;

LAB16:    t5 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB17;

LAB18:    memcpy(t34, t17, 8);

LAB19:    memset(t66, 0, 8);
    t67 = (t34 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t34);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) != 0)
        goto LAB33;

LAB34:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = (!(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB35;

LAB36:    memcpy(t141, t66, 8);

LAB37:    memset(t16, 0, 8);
    t169 = (t141 + 4);
    t170 = *((unsigned int *)t169);
    t171 = (~(t170));
    t172 = *((unsigned int *)t141);
    t173 = (t172 & t171);
    t174 = (t173 & 1U);
    if (t174 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t169) != 0)
        goto LAB61;

LAB62:    t176 = (t16 + 4);
    t177 = *((unsigned int *)t16);
    t178 = *((unsigned int *)t176);
    t179 = (t177 || t178);
    if (t179 > 0)
        goto LAB63;

LAB64:    t185 = *((unsigned int *)t16);
    t186 = (~(t185));
    t187 = *((unsigned int *)t176);
    t188 = (t186 || t187);
    if (t188 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t176) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t16) > 0)
        goto LAB69;

LAB70:    memcpy(t15, t192, 8);

LAB71:    t193 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t193, t15, 0, 0, 3, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2712U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t2) != 0)
        goto LAB74;

LAB75:    t5 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB76;

LAB77:    memcpy(t34, t17, 8);

LAB78:    memset(t66, 0, 8);
    t67 = (t34 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t34);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t67) != 0)
        goto LAB92;

LAB93:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = (!(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB94;

LAB95:    memcpy(t141, t66, 8);

LAB96:    memset(t16, 0, 8);
    t169 = (t141 + 4);
    t170 = *((unsigned int *)t169);
    t171 = (~(t170));
    t172 = *((unsigned int *)t141);
    t173 = (t172 & t171);
    t174 = (t173 & 1U);
    if (t174 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t169) != 0)
        goto LAB120;

LAB121:    t176 = (t16 + 4);
    t177 = *((unsigned int *)t16);
    t178 = *((unsigned int *)t176);
    t179 = (t177 || t178);
    if (t179 > 0)
        goto LAB122;

LAB123:    t185 = *((unsigned int *)t16);
    t186 = (~(t185));
    t187 = *((unsigned int *)t176);
    t188 = (t186 || t187);
    if (t188 > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t176) > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t16) > 0)
        goto LAB128;

LAB129:    memcpy(t15, t192, 8);

LAB130:    t193 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t193, t15, 0, 0, 3, 0LL);

LAB10:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t18 = (t11 ^ t12);
    t19 = (t10 | t18);
    t20 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t20 | t22);
    t24 = (~(t23));
    t25 = (t19 & t24);
    if (t25 != 0)
        goto LAB134;

LAB131:    if (t23 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t15) = 1;

LAB134:    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t28 = (~(t26));
    t29 = *((unsigned int *)t15);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t18 = (t11 ^ t12);
    t19 = (t10 | t18);
    t20 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t20 | t22);
    t24 = (~(t23));
    t25 = (t19 & t24);
    if (t25 != 0)
        goto LAB141;

LAB138:    if (t23 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t15) = 1;

LAB141:    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t28 = (~(t26));
    t29 = *((unsigned int *)t15);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB142;

LAB143:
LAB144:
LAB137:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 5952);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(39, ng0);

LAB11:    xsi_set_current_line(40, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB10;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB15:    t4 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB17:    t6 = (t0 + 3192U);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t7 + 4);
    t22 = *((unsigned int *)t6);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t6) == 0)
        goto LAB20;

LAB22:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;

LAB23:    memset(t27, 0, 8);
    t14 = (t21 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t14) != 0)
        goto LAB26;

LAB27:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t27);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t17 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB20:    *((unsigned int *)t21) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t27) = 1;
    goto LAB27;

LAB26:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB27;

LAB28:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t17 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t17);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t27);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB30;

LAB31:    *((unsigned int *)t66) = 1;
    goto LAB34;

LAB33:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB34;

LAB35:    t79 = (t0 + 2872U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    t79 = (t80 + 4);
    t82 = *((unsigned int *)t79);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t79) != 0)
        goto LAB40;

LAB41:    t88 = (t81 + 4);
    t89 = *((unsigned int *)t81);
    t90 = *((unsigned int *)t88);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB42;

LAB43:    memcpy(t101, t81, 8);

LAB44:    memset(t133, 0, 8);
    t134 = (t101 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t101);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t134) != 0)
        goto LAB54;

LAB55:    t142 = *((unsigned int *)t66);
    t143 = *((unsigned int *)t133);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = (t66 + 4);
    t146 = (t133 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB37;

LAB38:    *((unsigned int *)t81) = 1;
    goto LAB41;

LAB40:    t87 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB41;

LAB42:    t92 = (t0 + 2712U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t92 = (t93 + 4);
    t95 = *((unsigned int *)t92);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t92) != 0)
        goto LAB47;

LAB48:    t102 = *((unsigned int *)t81);
    t103 = *((unsigned int *)t94);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t105 = (t81 + 4);
    t106 = (t94 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t94) = 1;
    goto LAB48;

LAB47:    t100 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB48;

LAB49:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t81 + 4);
    t116 = (t94 + 4);
    t117 = *((unsigned int *)t81);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t94);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t129 & t127);
    t130 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t130 & t128);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    t132 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t132 & t128);
    goto LAB51;

LAB52:    *((unsigned int *)t133) = 1;
    goto LAB55;

LAB54:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB55;

LAB56:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t66 + 4);
    t156 = (t133 + 4);
    t157 = *((unsigned int *)t155);
    t158 = (~(t157));
    t159 = *((unsigned int *)t66);
    t160 = (t159 & t158);
    t161 = *((unsigned int *)t156);
    t162 = (~(t161));
    t163 = *((unsigned int *)t133);
    t164 = (t163 & t162);
    t165 = (~(t160));
    t166 = (~(t164));
    t167 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t167 & t165);
    t168 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t168 & t166);
    goto LAB58;

LAB59:    *((unsigned int *)t16) = 1;
    goto LAB62;

LAB61:    t175 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB62;

LAB63:    t180 = (t0 + 4232);
    t181 = (t180 + 56U);
    t182 = *((char **)t181);
    t183 = ((char*)((ng2)));
    memset(t184, 0, 8);
    xsi_vlog_unsigned_add(t184, 32, t182, 3, t183, 32);
    goto LAB64;

LAB65:    t189 = (t0 + 4232);
    t190 = (t189 + 56U);
    t191 = *((char **)t190);
    memcpy(t192, t191, 8);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t15, 32, t184, 32, t192, 32);
    goto LAB71;

LAB69:    memcpy(t15, t184, 8);
    goto LAB71;

LAB72:    *((unsigned int *)t17) = 1;
    goto LAB75;

LAB74:    t4 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB75;

LAB76:    t6 = (t0 + 3032U);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t7 + 4);
    t22 = *((unsigned int *)t6);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB82;

LAB80:    if (*((unsigned int *)t6) == 0)
        goto LAB79;

LAB81:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;

LAB82:    memset(t27, 0, 8);
    t14 = (t21 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t14) != 0)
        goto LAB85;

LAB86:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t27);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t17 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB78;

LAB79:    *((unsigned int *)t21) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t27) = 1;
    goto LAB86;

LAB85:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB86;

LAB87:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t17 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t17);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t27);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB89;

LAB90:    *((unsigned int *)t66) = 1;
    goto LAB93;

LAB92:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB93;

LAB94:    t79 = (t0 + 2872U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    t79 = (t80 + 4);
    t82 = *((unsigned int *)t79);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t79) != 0)
        goto LAB99;

LAB100:    t88 = (t81 + 4);
    t89 = *((unsigned int *)t81);
    t90 = *((unsigned int *)t88);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB101;

LAB102:    memcpy(t101, t81, 8);

LAB103:    memset(t133, 0, 8);
    t134 = (t101 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t101);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t134) != 0)
        goto LAB113;

LAB114:    t142 = *((unsigned int *)t66);
    t143 = *((unsigned int *)t133);
    t144 = (t142 | t143);
    *((unsigned int *)t141) = t144;
    t145 = (t66 + 4);
    t146 = (t133 + 4);
    t147 = (t141 + 4);
    t148 = *((unsigned int *)t145);
    t149 = *((unsigned int *)t146);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 != 0);
    if (t152 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB96;

LAB97:    *((unsigned int *)t81) = 1;
    goto LAB100;

LAB99:    t87 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB100;

LAB101:    t92 = (t0 + 2712U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t92 = (t93 + 4);
    t95 = *((unsigned int *)t92);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t92) != 0)
        goto LAB106;

LAB107:    t102 = *((unsigned int *)t81);
    t103 = *((unsigned int *)t94);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t105 = (t81 + 4);
    t106 = (t94 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB103;

LAB104:    *((unsigned int *)t94) = 1;
    goto LAB107;

LAB106:    t100 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB107;

LAB108:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t81 + 4);
    t116 = (t94 + 4);
    t117 = *((unsigned int *)t81);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t94);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t129 & t127);
    t130 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t130 & t128);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    t132 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t132 & t128);
    goto LAB110;

LAB111:    *((unsigned int *)t133) = 1;
    goto LAB114;

LAB113:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB114;

LAB115:    t153 = *((unsigned int *)t141);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t141) = (t153 | t154);
    t155 = (t66 + 4);
    t156 = (t133 + 4);
    t157 = *((unsigned int *)t155);
    t158 = (~(t157));
    t159 = *((unsigned int *)t66);
    t160 = (t159 & t158);
    t161 = *((unsigned int *)t156);
    t162 = (~(t161));
    t163 = *((unsigned int *)t133);
    t164 = (t163 & t162);
    t165 = (~(t160));
    t166 = (~(t164));
    t167 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t167 & t165);
    t168 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t168 & t166);
    goto LAB117;

LAB118:    *((unsigned int *)t16) = 1;
    goto LAB121;

LAB120:    t175 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB121;

LAB122:    t180 = (t0 + 4072);
    t181 = (t180 + 56U);
    t182 = *((char **)t181);
    t183 = ((char*)((ng2)));
    memset(t184, 0, 8);
    xsi_vlog_unsigned_add(t184, 32, t182, 3, t183, 32);
    goto LAB123;

LAB124:    t189 = (t0 + 4072);
    t190 = (t189 + 56U);
    t191 = *((char **)t190);
    memcpy(t192, t191, 8);
    goto LAB125;

LAB126:    xsi_vlog_unsigned_bit_combine(t15, 32, t184, 32, t192, 32);
    goto LAB130;

LAB128:    memcpy(t15, t184, 8);
    goto LAB130;

LAB133:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(47, ng0);
    t33 = ((char*)((ng1)));
    t38 = (t0 + 4232);
    xsi_vlogvar_assign_value(t38, t33, 0, 0, 3);
    goto LAB137;

LAB140:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(49, ng0);
    t33 = ((char*)((ng1)));
    t38 = (t0 + 4072);
    xsi_vlogvar_assign_value(t38, t33, 0, 0, 3);
    goto LAB144;

}

static void Always_54_5(char *t0)
{
    char t15[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t16;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    t4 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 6200);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(55, ng0);
    t6 = (t0 + 2552U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(56, ng0);

LAB11:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2712U);
    t3 = *((char **)t2);
    t2 = (t0 + 2872U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t15, 2, 2, 2U, t4, 1, t3, 1);

LAB12:    t2 = ((char*)((ng4)));
    t16 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t16 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t16 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t16 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t16 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t16 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB23:
LAB10:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 6200);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(55, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 4, 0LL);
    goto LAB10;

LAB13:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 3592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t13, t7, 0, 0, 4, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t7 = (t5 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t20 = (t11 ^ t12);
    t21 = (t10 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t13);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB27;

LAB24:    if (t24 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t19) = 1;

LAB27:    memset(t18, 0, 8);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t27) != 0)
        goto LAB30;

LAB31:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB32;

LAB33:    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t34) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t18) > 0)
        goto LAB38;

LAB39:    memcpy(t17, t47, 8);

LAB40:    t48 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t48, t17, 0, 0, 4, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 3592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t19, 0, 8);
    t7 = (t5 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t20 = (t11 ^ t12);
    t21 = (t10 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t13);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB44;

LAB41:    if (t24 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t19) = 1;

LAB44:    memset(t18, 0, 8);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t27) != 0)
        goto LAB47;

LAB48:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB49;

LAB50:    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t34) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t18) > 0)
        goto LAB55;

LAB56:    memcpy(t17, t47, 8);

LAB57:    t48 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t48, t17, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 3592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB23;

LAB26:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t18) = 1;
    goto LAB31;

LAB30:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB32:    t38 = ((char*)((ng1)));
    goto LAB33;

LAB34:    t43 = (t0 + 3592);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng2)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t45, 4, t46, 32);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t17, 32, t38, 32, t47, 32);
    goto LAB40;

LAB38:    memcpy(t17, t38, 8);
    goto LAB40;

LAB43:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t18) = 1;
    goto LAB48;

LAB47:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB48;

LAB49:    t38 = ((char*)((ng3)));
    goto LAB50;

LAB51:    t43 = (t0 + 3592);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng2)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t45, 4, t46, 32);
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t17, 32, t38, 32, t47, 32);
    goto LAB57;

LAB55:    memcpy(t17, t38, 8);
    goto LAB57;

}


extern void work_m_00000000000390724584_0948142031_init()
{
	static char *pe[] = {(void *)Cont_15_0,(void *)Cont_16_1,(void *)Always_20_2,(void *)Always_29_3,(void *)Always_38_4,(void *)Always_54_5};
	xsi_register_didat("work_m_00000000000390724584_0948142031", "isim/fifo_isim_beh.exe.sim/work/m_00000000000390724584_0948142031.didat");
	xsi_register_executes(pe);
}

/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019-2020 The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_QCOM_SPMI_VADC_PM8350B_H
#define _DT_BINDINGS_QCOM_SPMI_VADC_PM8350B_H

#ifndef PM8350B_SID
#define PM8350B_SID					3
#endif

/* ADC channels for PM8350B_ADC for PMIC7 */
#define PM8350B_ADC7_REF_GND			(PM8350B_SID << 8 | 0x0)
#define PM8350B_ADC7_1P25VREF			(PM8350B_SID << 8 | 0x01)
#define PM8350B_ADC7_VREF_VADC			(PM8350B_SID << 8 | 0x02)
#define PM8350B_ADC7_DIE_TEMP			(PM8350B_SID << 8 | 0x03)

#define PM8350B_ADC7_AMUX_THM1			(PM8350B_SID << 8 | 0x04)
#define PM8350B_ADC7_AMUX_THM2			(PM8350B_SID << 8 | 0x05)
#define PM8350B_ADC7_AMUX_THM3			(PM8350B_SID << 8 | 0x06)
#define PM8350B_ADC7_AMUX_THM4			(PM8350B_SID << 8 | 0x07)
#define PM8350B_ADC7_AMUX_THM5			(PM8350B_SID << 8 | 0x08)
#define PM8350B_ADC7_AMUX_THM6			(PM8350B_SID << 8 | 0x09)
#define PM8350B_ADC7_GPIO1			(PM8350B_SID << 8 | 0x0a)
#define PM8350B_ADC7_GPIO2			(PM8350B_SID << 8 | 0x0b)
#define PM8350B_ADC7_GPIO3			(PM8350B_SID << 8 | 0x0c)
#define PM8350B_ADC7_GPIO4			(PM8350B_SID << 8 | 0x0d)

#define PM8350B_ADC7_CHG_TEMP			(PM8350B_SID << 8 | 0x10)
#define PM8350B_ADC7_USB_IN_V_16		(PM8350B_SID << 8 | 0x11)
#define PM8350B_ADC7_VDC_16			(PM8350B_SID << 8 | 0x12)
#define PM8350B_ADC7_CC1_ID			(PM8350B_SID << 8 | 0x13)
#define PM8350B_ADC7_VREF_BAT_THERM		(PM8350B_SID << 8 | 0x15)
#define PM8350B_ADC7_IIN_FB			(PM8350B_SID << 8 | 0x17)
#define PM8350B_ADC7_ICHG_FB			(PM8350B_SID << 8 | 0xa1)

/* 30k pull-up1 */
#define PM8350B_ADC7_AMUX_THM1_30K_PU		(PM8350B_SID << 8 | 0x24)
#define PM8350B_ADC7_AMUX_THM2_30K_PU		(PM8350B_SID << 8 | 0x25)
#define PM8350B_ADC7_AMUX_THM3_30K_PU		(PM8350B_SID << 8 | 0x26)
#define PM8350B_ADC7_AMUX_THM4_30K_PU		(PM8350B_SID << 8 | 0x27)
#define PM8350B_ADC7_AMUX_THM5_30K_PU		(PM8350B_SID << 8 | 0x28)
#define PM8350B_ADC7_AMUX_THM6_30K_PU		(PM8350B_SID << 8 | 0x29)
#define PM8350B_ADC7_GPIO1_30K_PU		(PM8350B_SID << 8 | 0x2a)
#define PM8350B_ADC7_GPIO2_30K_PU		(PM8350B_SID << 8 | 0x2b)
#define PM8350B_ADC7_GPIO3_30K_PU		(PM8350B_SID << 8 | 0x2c)
#define PM8350B_ADC7_GPIO4_30K_PU		(PM8350B_SID << 8 | 0x2d)
#define PM8350B_ADC7_CC1_ID_30K_PU		(PM8350B_SID << 8 | 0x33)

/* 100k pull-up2 */
#define PM8350B_ADC7_AMUX_THM1_100K_PU		(PM8350B_SID << 8 | 0x44)
#define PM8350B_ADC7_AMUX_THM2_100K_PU		(PM8350B_SID << 8 | 0x45)
#define PM8350B_ADC7_AMUX_THM3_100K_PU		(PM8350B_SID << 8 | 0x46)
#define PM8350B_ADC7_AMUX_THM4_100K_PU		(PM8350B_SID << 8 | 0x47)
#define PM8350B_ADC7_AMUX_THM5_100K_PU		(PM8350B_SID << 8 | 0x48)
#define PM8350B_ADC7_AMUX_THM6_100K_PU		(PM8350B_SID << 8 | 0x49)
#define PM8350B_ADC7_GPIO1_100K_PU		(PM8350B_SID << 8 | 0x4a)
#define PM8350B_ADC7_GPIO2_100K_PU		(PM8350B_SID << 8 | 0x4b)
#define PM8350B_ADC7_GPIO3_100K_PU		(PM8350B_SID << 8 | 0x4c)
#define PM8350B_ADC7_GPIO4_100K_PU		(PM8350B_SID << 8 | 0x4d)
#define PM8350B_ADC7_CC1_ID_100K_PU		(PM8350B_SID << 8 | 0x53)

/* 400k pull-up3 */
#define PM8350B_ADC7_AMUX_THM1_400K_PU		(PM8350B_SID << 8 | 0x64)
#define PM8350B_ADC7_AMUX_THM2_400K_PU		(PM8350B_SID << 8 | 0x65)
#define PM8350B_ADC7_AMUX_THM3_400K_PU		(PM8350B_SID << 8 | 0x66)
#define PM8350B_ADC7_AMUX_THM4_400K_PU		(PM8350B_SID << 8 | 0x67)
#define PM8350B_ADC7_AMUX_THM5_400K_PU		(PM8350B_SID << 8 | 0x68)
#define PM8350B_ADC7_AMUX_THM6_400K_PU		(PM8350B_SID << 8 | 0x69)
#define PM8350B_ADC7_GPIO1_400K_PU		(PM8350B_SID << 8 | 0x6a)
#define PM8350B_ADC7_GPIO2_400K_PU		(PM8350B_SID << 8 | 0x6b)
#define PM8350B_ADC7_GPIO3_400K_PU		(PM8350B_SID << 8 | 0x6c)
#define PM8350B_ADC7_GPIO4_400K_PU		(PM8350B_SID << 8 | 0x6d)
#define PM8350B_ADC7_CC1_ID_400K_PU		(PM8350B_SID << 8 | 0x73)

/* 1/3 Divider */
#define PM8350B_ADC7_GPIO1_DIV3			(PM8350B_SID << 8 | 0x8a)
#define PM8350B_ADC7_GPIO2_DIV3			(PM8350B_SID << 8 | 0x8b)
#define PM8350B_ADC7_GPIO3_DIV3			(PM8350B_SID << 8 | 0x8c)
#define PM8350B_ADC7_GPIO4_DIV3			(PM8350B_SID << 8 | 0x8d)

#define PM8350B_ADC7_VPH_PWR			(PM8350B_SID << 8 | 0x8e)
#define PM8350B_ADC7_VBAT_SNS			(PM8350B_SID << 8 | 0x8f)

#define PM8350B_ADC7_SBUx			(PM8350B_SID << 8 | 0x94)
#define PM8350B_ADC7_VBAT_2S_MID		(PM8350B_SID << 8 | 0x96)
#define PM8350B_ADC7_V_I_BAT_THERM		(PM8350B_SID << 8 | 0xb8)

#endif /* _DT_BINDINGS_QCOM_SPMI_VADC_PM8350B_H */

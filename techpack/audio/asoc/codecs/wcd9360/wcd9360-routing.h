/*
 * Copyright (c) 2015-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __WCD9360_ROUTING_H__
#define __WCD9360_ROUTING_H__

#include <sound/soc-dapm.h>

const struct snd_soc_dapm_route pahu_slim_audio_map[] = {

	{"AIF4 MAD", NULL, "AIF4_MAD Mixer"},

	/* Virtual input widget Mixer SLIMBUS */
	{"AIF1_CAP Mixer", "SLIM TX0", "SLIM TX0"},
	{"AIF1_CAP Mixer", "SLIM TX1", "SLIM TX1"},
	{"AIF1_CAP Mixer", "SLIM TX2", "SLIM TX2"},
	{"AIF1_CAP Mixer", "SLIM TX3", "SLIM TX3"},
	{"AIF1_CAP Mixer", "SLIM TX4", "SLIM TX4"},
	{"AIF1_CAP Mixer", "SLIM TX5", "SLIM TX5"},
	{"AIF1_CAP Mixer", "SLIM TX6", "SLIM TX6"},
	{"AIF1_CAP Mixer", "SLIM TX7", "SLIM TX7"},
	{"AIF1_CAP Mixer", "SLIM TX8", "SLIM TX8"},
	{"AIF1_CAP Mixer", "SLIM TX9", "SLIM TX9"},
	{"AIF1_CAP Mixer", "SLIM TX10", "SLIM TX10"},
	{"AIF1_CAP Mixer", "SLIM TX11", "SLIM TX11"},
	{"AIF1_CAP Mixer", "SLIM TX13", "SLIM TX13"},

	{"AIF2_CAP Mixer", "SLIM TX0", "SLIM TX0"},
	{"AIF2_CAP Mixer", "SLIM TX1", "SLIM TX1"},
	{"AIF2_CAP Mixer", "SLIM TX2", "SLIM TX2"},
	{"AIF2_CAP Mixer", "SLIM TX3", "SLIM TX3"},
	{"AIF2_CAP Mixer", "SLIM TX4", "SLIM TX4"},
	{"AIF2_CAP Mixer", "SLIM TX5", "SLIM TX5"},
	{"AIF2_CAP Mixer", "SLIM TX6", "SLIM TX6"},
	{"AIF2_CAP Mixer", "SLIM TX7", "SLIM TX7"},
	{"AIF2_CAP Mixer", "SLIM TX8", "SLIM TX8"},
	{"AIF2_CAP Mixer", "SLIM TX9", "SLIM TX9"},
	{"AIF2_CAP Mixer", "SLIM TX10", "SLIM TX10"},
	{"AIF2_CAP Mixer", "SLIM TX11", "SLIM TX11"},
	{"AIF2_CAP Mixer", "SLIM TX13", "SLIM TX13"},

	{"AIF3_CAP Mixer", "SLIM TX0", "SLIM TX0"},
	{"AIF3_CAP Mixer", "SLIM TX1", "SLIM TX1"},
	{"AIF3_CAP Mixer", "SLIM TX2", "SLIM TX2"},
	{"AIF3_CAP Mixer", "SLIM TX3", "SLIM TX3"},
	{"AIF3_CAP Mixer", "SLIM TX4", "SLIM TX4"},
	{"AIF3_CAP Mixer", "SLIM TX5", "SLIM TX5"},
	{"AIF3_CAP Mixer", "SLIM TX6", "SLIM TX6"},
	{"AIF3_CAP Mixer", "SLIM TX7", "SLIM TX7"},
	{"AIF3_CAP Mixer", "SLIM TX8", "SLIM TX8"},
	{"AIF3_CAP Mixer", "SLIM TX9", "SLIM TX9"},
	{"AIF3_CAP Mixer", "SLIM TX10", "SLIM TX10"},
	{"AIF3_CAP Mixer", "SLIM TX11", "SLIM TX11"},
	{"AIF3_CAP Mixer", "SLIM TX13", "SLIM TX13"},

	{"AIF4_MAD Mixer", "SLIM TX13", "SLIM TX13"},

	/* CDC Tx interface with SLIMBUS */
	{"SLIM TX0", NULL, "CDC_IF TX0 MUX"},
	{"SLIM TX1", NULL, "CDC_IF TX1 MUX"},
	{"SLIM TX2", NULL, "CDC_IF TX2 MUX"},
	{"SLIM TX3", NULL, "CDC_IF TX3 MUX"},
	{"SLIM TX4", NULL, "CDC_IF TX4 MUX"},
	{"SLIM TX5", NULL, "CDC_IF TX5 MUX"},
	{"SLIM TX6", NULL, "CDC_IF TX6 MUX"},
	{"SLIM TX7", NULL, "CDC_IF TX7 MUX"},
	{"SLIM TX8", NULL, "CDC_IF TX8 MUX"},
	{"SLIM TX9", NULL, "CDC_IF TX9 MUX"},
	{"SLIM TX10", NULL, "CDC_IF TX10 MUX2"},
	{"SLIM TX11", NULL, "CDC_IF TX11 MUX2"},
	{"SLIM TX13", NULL, "CDC_IF TX13 MUX"},

	{"SLIM RX0 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX1 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX2 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX3 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX4 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX5 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX6 MUX", "AIF1_PB", "AIF1 PB"},
	{"SLIM RX7 MUX", "AIF1_PB", "AIF1 PB"},

	{"SLIM RX0 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX1 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX2 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX3 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX4 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX5 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX6 MUX", "AIF2_PB", "AIF2 PB"},
	{"SLIM RX7 MUX", "AIF2_PB", "AIF2 PB"},

	{"SLIM RX0 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX1 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX2 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX3 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX4 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX5 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX6 MUX", "AIF3_PB", "AIF3 PB"},
	{"SLIM RX7 MUX", "AIF3_PB", "AIF3 PB"},

	{"SLIM RX0 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX1 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX2 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX3 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX4 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX5 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX6 MUX", "AIF4_PB", "AIF4 PB"},
	{"SLIM RX7 MUX", "AIF4_PB", "AIF4 PB"},

	{"SLIM RX0", NULL, "SLIM RX0 MUX"},
	{"SLIM RX1", NULL, "SLIM RX1 MUX"},
	{"SLIM RX2", NULL, "SLIM RX2 MUX"},
	{"SLIM RX3", NULL, "SLIM RX3 MUX"},
	{"SLIM RX4", NULL, "SLIM RX4 MUX"},
	{"SLIM RX5", NULL, "SLIM RX5 MUX"},
	{"SLIM RX6", NULL, "SLIM RX6 MUX"},
	{"SLIM RX7", NULL, "SLIM RX7 MUX"},

	/* CDC Rx interface with SLIMBUS */
	{"CDC_IF RX0 MUX", "SLIM RX0", "SLIM RX0"},
	{"CDC_IF RX1 MUX", "SLIM RX1", "SLIM RX1"},
	{"CDC_IF RX2 MUX", "SLIM RX2", "SLIM RX2"},
	{"CDC_IF RX3 MUX", "SLIM RX3", "SLIM RX3"},
	{"CDC_IF RX4 MUX", "SLIM RX4", "SLIM RX4"},
	{"CDC_IF RX5 MUX", "SLIM RX5", "SLIM RX5"},
	{"CDC_IF RX6 MUX", "SLIM RX6", "SLIM RX6"},
	{"CDC_IF RX7 MUX", "SLIM RX7", "SLIM RX7"},

	/* VI Feedback */
	{"AIF4_VI Mixer", "SPKR_VI_1", "VIINPUT"},
	{"AIF4_VI Mixer", "SPKR_VI_2", "VIINPUT"},
	{"AIF4 VI", NULL, "AIF4_VI Mixer"},
};

const struct snd_soc_dapm_route pahu_audio_map[] = {

	/* Virtual input widgets */
	{"AIF1 CAP", NULL, "AIF1_CAP Mixer"},
	{"AIF2 CAP", NULL, "AIF2_CAP Mixer"},
	{"AIF3 CAP", NULL, "AIF3_CAP Mixer"},

	/* WDMA3 */
	{"WDMA3 PORT0 MUX", "DEC0", "ADC MUX0"},
	{"WDMA3 PORT0 MUX", "RX_MIX_TX0", "RX MIX TX0 MUX"},
	{"WDMA3 PORT1 MUX", "DEC1", "ADC MUX1"},
	{"WDMA3 PORT1 MUX", "RX_MIX_TX1", "RX MIX TX1 MUX"},
	{"WDMA3 PORT2 MUX", "DEC2", "ADC MUX2"},
	{"WDMA3 PORT2 MUX", "RX_MIX_TX2", "RX MIX TX2 MUX"},
	{"WDMA3 PORT3 MUX", "DEC3", "ADC MUX3"},
	{"WDMA3 PORT3 MUX", "RX_MIX_TX3", "RX MIX TX3 MUX"},
	{"WDMA3 PORT4 MUX", "DEC4", "ADC MUX4"},
	{"WDMA3 PORT4 MUX", "RX_MIX_TX4", "RX MIX TX4 MUX"},
	{"WDMA3 PORT5 MUX", "DEC5", "ADC MUX5"},
	{"WDMA3 PORT5 MUX", "RX_MIX_TX5", "RX MIX TX5 MUX"},
	{"WDMA3 PORT6 MUX", "DEC6", "ADC MUX6"},
	{"WDMA3 PORT6 MUX", "RX_MIX_TX6", "RX MIX TX6 MUX"},

	{"WDMA3 CH0 MUX", "PORT_0", "WDMA3 PORT0 MUX"},
	{"WDMA3 CH0 MUX", "PORT_1", "WDMA3 PORT1 MUX"},
	{"WDMA3 CH0 MUX", "PORT_2", "WDMA3 PORT2 MUX"},
	{"WDMA3 CH0 MUX", "PORT_3", "WDMA3 PORT3 MUX"},
	{"WDMA3 CH0 MUX", "PORT_4", "WDMA3 PORT4 MUX"},
	{"WDMA3 CH0 MUX", "PORT_5", "WDMA3 PORT5 MUX"},
	{"WDMA3 CH0 MUX", "PORT_6", "WDMA3 PORT6 MUX"},
	{"WDMA3 CH0 MUX", "PORT_7", "ADC MUX7"},
	{"WDMA3 CH0 MUX", "PORT_8", "ADC MUX8"},

	{"WDMA3 CH1 MUX", "PORT_0", "WDMA3 PORT0 MUX"},
	{"WDMA3 CH1 MUX", "PORT_1", "WDMA3 PORT1 MUX"},
	{"WDMA3 CH1 MUX", "PORT_2", "WDMA3 PORT2 MUX"},
	{"WDMA3 CH1 MUX", "PORT_3", "WDMA3 PORT3 MUX"},
	{"WDMA3 CH1 MUX", "PORT_4", "WDMA3 PORT4 MUX"},
	{"WDMA3 CH1 MUX", "PORT_5", "WDMA3 PORT5 MUX"},
	{"WDMA3 CH1 MUX", "PORT_6", "WDMA3 PORT6 MUX"},
	{"WDMA3 CH1 MUX", "PORT_7", "ADC MUX7"},
	{"WDMA3 CH1 MUX", "PORT_8", "ADC MUX8"},

	{"WDMA3 CH2 MUX", "PORT_0", "WDMA3 PORT0 MUX"},
	{"WDMA3 CH2 MUX", "PORT_1", "WDMA3 PORT1 MUX"},
	{"WDMA3 CH2 MUX", "PORT_2", "WDMA3 PORT2 MUX"},
	{"WDMA3 CH2 MUX", "PORT_3", "WDMA3 PORT3 MUX"},
	{"WDMA3 CH2 MUX", "PORT_4", "WDMA3 PORT4 MUX"},
	{"WDMA3 CH2 MUX", "PORT_5", "WDMA3 PORT5 MUX"},
	{"WDMA3 CH2 MUX", "PORT_6", "WDMA3 PORT6 MUX"},
	{"WDMA3 CH2 MUX", "PORT_7", "ADC MUX7"},
	{"WDMA3 CH2 MUX", "PORT_8", "ADC MUX8"},

	{"WDMA3 CH3 MUX", "PORT_0", "WDMA3 PORT0 MUX"},
	{"WDMA3 CH3 MUX", "PORT_1", "WDMA3 PORT1 MUX"},
	{"WDMA3 CH3 MUX", "PORT_2", "WDMA3 PORT2 MUX"},
	{"WDMA3 CH3 MUX", "PORT_3", "WDMA3 PORT3 MUX"},
	{"WDMA3 CH3 MUX", "PORT_4", "WDMA3 PORT4 MUX"},
	{"WDMA3 CH3 MUX", "PORT_5", "WDMA3 PORT5 MUX"},
	{"WDMA3 CH3 MUX", "PORT_6", "WDMA3 PORT6 MUX"},
	{"WDMA3 CH3 MUX", "PORT_7", "ADC MUX7"},
	{"WDMA3 CH3 MUX", "PORT_8", "ADC MUX8"},

	{"WDMA3_CH_MIXER", NULL, "WDMA3 CH0 MUX"},
	{"WDMA3_CH_MIXER", NULL, "WDMA3 CH1 MUX"},
	{"WDMA3_CH_MIXER", NULL, "WDMA3 CH2 MUX"},
	{"WDMA3_CH_MIXER", NULL, "WDMA3 CH3 MUX"},

	{"WDMA3_ON_OFF", "Switch", "WDMA3_CH_MIXER"},
	{"WDMA3_OUT", NULL, "WDMA3_ON_OFF"},

	/* MAD */
	{"MAD_SEL MUX", "SPE", "MAD_CPE_INPUT"},
	{"MAD_SEL MUX", "MSM", "MADINPUT"},

	{"MAD_INP MUX", "MAD", "MAD_SEL MUX"},
	{"MAD_INP MUX", "DEC1", "ADC MUX1"},

	{"MAD_BROADCAST", "Switch", "MAD_INP MUX"},
	{"MAD_CPE1", "Switch", "MAD_INP MUX"},
	{"MAD_CPE2", "Switch", "MAD_INP MUX"},

	{"MAD_CPE_OUT1", NULL, "MAD_CPE1"},
	{"MAD_CPE_OUT2", NULL, "MAD_CPE2"},

	{"CDC_IF TX0 MUX", "DEC0", "ADC MUX0"},
	{"CDC_IF TX0 MUX", "RX_MIX_TX0", "RX MIX TX0 MUX"},
	{"CDC_IF TX0 MUX", "DEC0_192", "ADC US MUX0"},

	{"CDC_IF TX1 MUX", "DEC1", "ADC MUX1"},
	{"CDC_IF TX1 MUX", "RX_MIX_TX1", "RX MIX TX1 MUX"},
	{"CDC_IF TX1 MUX", "DEC1_192", "ADC US MUX1"},

	{"CDC_IF TX2 MUX", "DEC2", "ADC MUX2"},
	{"CDC_IF TX2 MUX", "RX_MIX_TX2", "RX MIX TX2 MUX"},
	{"CDC_IF TX2 MUX", "DEC2_192", "ADC US MUX2"},

	{"CDC_IF TX3 MUX", "DEC3", "ADC MUX3"},
	{"CDC_IF TX3 MUX", "RX_MIX_TX3", "RX MIX TX3 MUX"},
	{"CDC_IF TX3 MUX", "DEC3_192", "ADC US MUX3"},

	{"CDC_IF TX4 MUX", "DEC4", "ADC MUX4"},
	{"CDC_IF TX4 MUX", "RX_MIX_TX4", "RX MIX TX4 MUX"},
	{"CDC_IF TX4 MUX", "DEC4_192", "ADC US MUX4"},

	{"CDC_IF TX5 MUX", "DEC5", "ADC MUX5"},
	{"CDC_IF TX5 MUX", "RX_MIX_TX5", "RX MIX TX5 MUX"},
	{"CDC_IF TX5 MUX", "DEC5_192", "ADC US MUX5"},

	{"CDC_IF TX6 MUX", "DEC6", "ADC MUX6"},
	{"CDC_IF TX6 MUX", "RX_MIX_TX6", "RX MIX TX6 MUX"},
	{"CDC_IF TX6 MUX", "DEC6_192", "ADC US MUX6"},

	{"CDC_IF TX7 MUX", "DEC7", "ADC MUX7"},
	{"CDC_IF TX7 MUX", "RX_MIX_TX7", "RX MIX TX7 MUX"},
	{"CDC_IF TX7 MUX", "DEC7_192", "ADC US MUX7"},

	{"CDC_IF TX8 MUX", "DEC8", "ADC MUX8"},
	{"CDC_IF TX8 MUX", "RX_MIX_TX8", "RX MIX TX8 MUX"},
	{"CDC_IF TX8 MUX", "DEC8_192", "ADC US MUX8"},

	{"CDC_IF TX9 MUX", "DEC7", "ADC MUX7"},
	{"CDC_IF TX9 MUX", "DEC7_192", "ADC US MUX7"},
	{"CDC_IF TX10 MUX", "DEC6", "ADC MUX6"},
	{"CDC_IF TX10 MUX", "DEC6_192", "ADC US MUX6"},
	{"CDC_IF TX10 MUX2", "TX10_MUX1", "CDC_IF TX10 MUX"},

	{"CDC_IF TX11 MUX2", "TX11_MUX1", "CDC_IF TX11 MUX"},
	{"CDC_IF TX11 MUX", "DEC_0_5", "CDC_IF TX11 INP1 MUX"},
	{"CDC_IF TX11 MUX", "DEC_9_12", "CDC_IF TX11 INP1 MUX"},
	{"CDC_IF TX11 INP1 MUX", "DEC0", "ADC MUX0"},
	{"CDC_IF TX11 INP1 MUX", "DEC1", "ADC MUX1"},
	{"CDC_IF TX11 INP1 MUX", "DEC2", "ADC MUX2"},
	{"CDC_IF TX11 INP1 MUX", "DEC3", "ADC MUX3"},
	{"CDC_IF TX11 INP1 MUX", "DEC4", "ADC MUX4"},
	{"CDC_IF TX11 INP1 MUX", "DEC5", "ADC MUX5"},
	{"CDC_IF TX11 INP1 MUX", "RX_MIX_TX5", "RX MIX TX5 MUX"},

	{"CDC_IF TX13 MUX", "MAD_BRDCST", "MAD_BROADCAST"},
	{"CDC_IF TX13 MUX", "CDC_DEC_5", "CDC_IF TX13 INP1 MUX"},
	{"CDC_IF TX13 INP1 MUX", "DEC5", "ADC MUX5"},
	{"CDC_IF TX13 INP1 MUX", "DEC5_192", "ADC US MUX5"},

	{"RX MIX TX0 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX0 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX0 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX0 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX1 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX1 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX1 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX1 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX2 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX2 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX2 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX2 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX3 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX3 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX3 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX3 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX4 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX4 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX4 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX4 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX5 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX5 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX5 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX5 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX6 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX6 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX6 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX6 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX7 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX7 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX7 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX7 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"RX MIX TX8 MUX", "RX_MIX0", "RX INT0 SEC MIX"},
	{"RX MIX TX8 MUX", "RX_MIX7", "RX INT7 SEC MIX"},
	{"RX MIX TX8 MUX", "RX_MIX8", "RX INT8 SEC MIX"},
	{"RX MIX TX8 MUX", "RX_MIX9", "RX INT9 SEC MIX"},

	{"ADC US MUX0", "US_Switch", "ADC MUX0"},
	{"ADC US MUX1", "US_Switch", "ADC MUX1"},
	{"ADC US MUX2", "US_Switch", "ADC MUX2"},
	{"ADC US MUX3", "US_Switch", "ADC MUX3"},
	{"ADC US MUX4", "US_Switch", "ADC MUX4"},
	{"ADC US MUX5", "US_Switch", "ADC MUX5"},
	{"ADC US MUX6", "US_Switch", "ADC MUX6"},
	{"ADC US MUX7", "US_Switch", "ADC MUX7"},
	{"ADC US MUX8", "US_Switch", "ADC MUX8"},

	{"ADC MUX0", "DMIC", "DMIC MUX0"},
	{"ADC MUX0", "AMIC", "AMIC MUX0"},
	{"ADC MUX1", "DMIC", "DMIC MUX1"},
	{"ADC MUX1", "AMIC", "AMIC MUX1"},
	{"ADC MUX2", "DMIC", "DMIC MUX2"},
	{"ADC MUX2", "AMIC", "AMIC MUX2"},
	{"ADC MUX3", "DMIC", "DMIC MUX3"},
	{"ADC MUX3", "AMIC", "AMIC MUX3"},
	{"ADC MUX4", "DMIC", "DMIC MUX4"},
	{"ADC MUX4", "AMIC", "AMIC MUX4"},
	{"ADC MUX5", "DMIC", "DMIC MUX5"},
	{"ADC MUX5", "AMIC", "AMIC MUX5"},
	{"ADC MUX6", "DMIC", "DMIC MUX6"},
	{"ADC MUX6", "AMIC", "AMIC MUX6"},
	{"ADC MUX7", "DMIC", "DMIC MUX7"},
	{"ADC MUX7", "AMIC", "AMIC MUX7"},
	{"ADC MUX8", "DMIC", "DMIC MUX8"},
	{"ADC MUX8", "AMIC", "AMIC MUX8"},
	{"ADC MUX10", "DMIC", "DMIC MUX10"},
	{"ADC MUX10", "AMIC", "AMIC MUX10"},
	{"ADC MUX11", "DMIC", "DMIC MUX11"},
	{"ADC MUX11", "AMIC", "AMIC MUX11"},

	{"ADC MUX0", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX0", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX1", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX1", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX2", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX2", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX3", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX3", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX4", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX4", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX5", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX5", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX6", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX6", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX7", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX7", "ANC_FB_TUNE1", "ADC MUX11"},
	{"ADC MUX8", "ANC_FB_TUNE1", "ADC MUX10"},
	{"ADC MUX8", "ANC_FB_TUNE1", "ADC MUX11"},

	{"DMIC MUX0", "DMIC0", "DMIC0"},
	{"DMIC MUX0", "DMIC1", "DMIC1"},
	{"DMIC MUX0", "DMIC2", "DMIC2"},
	{"DMIC MUX0", "DMIC3", "DMIC3"},
	{"DMIC MUX0", "DMIC4", "DMIC4"},
	{"DMIC MUX0", "DMIC5", "DMIC5"},
	{"DMIC MUX0", "DMIC6", "DMIC6"},
	{"DMIC MUX0", "DMIC7", "DMIC7"},
	{"AMIC MUX0", "ADC1", "ADC1"},
	{"AMIC MUX0", "ADC2", "ADC2"},
	{"AMIC MUX0", "ADC3", "ADC3"},
	{"AMIC MUX0", "ADC4", "ADC4"},

	{"DMIC MUX1", "DMIC0", "DMIC0"},
	{"DMIC MUX1", "DMIC1", "DMIC1"},
	{"DMIC MUX1", "DMIC2", "DMIC2"},
	{"DMIC MUX1", "DMIC3", "DMIC3"},
	{"DMIC MUX1", "DMIC4", "DMIC4"},
	{"DMIC MUX1", "DMIC5", "DMIC5"},
	{"DMIC MUX1", "DMIC6", "DMIC6"},
	{"DMIC MUX1", "DMIC7", "DMIC7"},
	{"AMIC MUX1", "ADC1", "ADC1"},
	{"AMIC MUX1", "ADC2", "ADC2"},
	{"AMIC MUX1", "ADC3", "ADC3"},
	{"AMIC MUX1", "ADC4", "ADC4"},

	{"DMIC MUX2", "DMIC0", "DMIC0"},
	{"DMIC MUX2", "DMIC1", "DMIC1"},
	{"DMIC MUX2", "DMIC2", "DMIC2"},
	{"DMIC MUX2", "DMIC3", "DMIC3"},
	{"DMIC MUX2", "DMIC4", "DMIC4"},
	{"DMIC MUX2", "DMIC5", "DMIC5"},
	{"DMIC MUX2", "DMIC6", "DMIC6"},
	{"DMIC MUX2", "DMIC7", "DMIC7"},
	{"AMIC MUX2", "ADC1", "ADC1"},
	{"AMIC MUX2", "ADC2", "ADC2"},
	{"AMIC MUX2", "ADC3", "ADC3"},
	{"AMIC MUX2", "ADC4", "ADC4"},

	{"DMIC MUX3", "DMIC0", "DMIC0"},
	{"DMIC MUX3", "DMIC1", "DMIC1"},
	{"DMIC MUX3", "DMIC2", "DMIC2"},
	{"DMIC MUX3", "DMIC3", "DMIC3"},
	{"DMIC MUX3", "DMIC4", "DMIC4"},
	{"DMIC MUX3", "DMIC5", "DMIC5"},
	{"DMIC MUX3", "DMIC6", "DMIC6"},
	{"DMIC MUX3", "DMIC7", "DMIC7"},
	{"AMIC MUX3", "ADC1", "ADC1"},
	{"AMIC MUX3", "ADC2", "ADC2"},
	{"AMIC MUX3", "ADC3", "ADC3"},
	{"AMIC MUX3", "ADC4", "ADC4"},

	{"DMIC MUX4", "DMIC0", "DMIC0"},
	{"DMIC MUX4", "DMIC1", "DMIC1"},
	{"DMIC MUX4", "DMIC2", "DMIC2"},
	{"DMIC MUX4", "DMIC3", "DMIC3"},
	{"DMIC MUX4", "DMIC4", "DMIC4"},
	{"DMIC MUX4", "DMIC5", "DMIC5"},
	{"DMIC MUX4", "DMIC6", "DMIC6"},
	{"DMIC MUX4", "DMIC7", "DMIC7"},
	{"AMIC MUX4", "ADC1", "ADC1"},
	{"AMIC MUX4", "ADC2", "ADC2"},
	{"AMIC MUX4", "ADC3", "ADC3"},
	{"AMIC MUX4", "ADC4", "ADC4"},

	{"DMIC MUX5", "DMIC0", "DMIC0"},
	{"DMIC MUX5", "DMIC1", "DMIC1"},
	{"DMIC MUX5", "DMIC2", "DMIC2"},
	{"DMIC MUX5", "DMIC3", "DMIC3"},
	{"DMIC MUX5", "DMIC4", "DMIC4"},
	{"DMIC MUX5", "DMIC5", "DMIC5"},
	{"DMIC MUX5", "DMIC6", "DMIC6"},
	{"DMIC MUX5", "DMIC7", "DMIC7"},
	{"AMIC MUX5", "ADC1", "ADC1"},
	{"AMIC MUX5", "ADC2", "ADC2"},
	{"AMIC MUX5", "ADC3", "ADC3"},
	{"AMIC MUX5", "ADC4", "ADC4"},

	{"DMIC MUX6", "DMIC0", "DMIC0"},
	{"DMIC MUX6", "DMIC1", "DMIC1"},
	{"DMIC MUX6", "DMIC2", "DMIC2"},
	{"DMIC MUX6", "DMIC3", "DMIC3"},
	{"DMIC MUX6", "DMIC4", "DMIC4"},
	{"DMIC MUX6", "DMIC5", "DMIC5"},
	{"DMIC MUX6", "DMIC6", "DMIC6"},
	{"DMIC MUX6", "DMIC7", "DMIC7"},
	{"AMIC MUX6", "ADC1", "ADC1"},
	{"AMIC MUX6", "ADC2", "ADC2"},
	{"AMIC MUX6", "ADC3", "ADC3"},
	{"AMIC MUX6", "ADC4", "ADC4"},

	{"DMIC MUX7", "DMIC0", "DMIC0"},
	{"DMIC MUX7", "DMIC1", "DMIC1"},
	{"DMIC MUX7", "DMIC2", "DMIC2"},
	{"DMIC MUX7", "DMIC3", "DMIC3"},
	{"DMIC MUX7", "DMIC4", "DMIC4"},
	{"DMIC MUX7", "DMIC5", "DMIC5"},
	{"DMIC MUX7", "DMIC6", "DMIC6"},
	{"DMIC MUX7", "DMIC7", "DMIC7"},
	{"AMIC MUX7", "ADC1", "ADC1"},
	{"AMIC MUX7", "ADC2", "ADC2"},
	{"AMIC MUX7", "ADC3", "ADC3"},
	{"AMIC MUX7", "ADC4", "ADC4"},

	{"DMIC MUX8", "DMIC0", "DMIC0"},
	{"DMIC MUX8", "DMIC1", "DMIC1"},
	{"DMIC MUX8", "DMIC2", "DMIC2"},
	{"DMIC MUX8", "DMIC3", "DMIC3"},
	{"DMIC MUX8", "DMIC4", "DMIC4"},
	{"DMIC MUX8", "DMIC5", "DMIC5"},
	{"DMIC MUX8", "DMIC6", "DMIC6"},
	{"DMIC MUX8", "DMIC7", "DMIC7"},
	{"AMIC MUX8", "ADC1", "ADC1"},
	{"AMIC MUX8", "ADC2", "ADC2"},
	{"AMIC MUX8", "ADC3", "ADC3"},
	{"AMIC MUX8", "ADC4", "ADC4"},

	{"DMIC MUX10", "DMIC0", "DMIC0"},
	{"DMIC MUX10", "DMIC1", "DMIC1"},
	{"DMIC MUX10", "DMIC2", "DMIC2"},
	{"DMIC MUX10", "DMIC3", "DMIC3"},
	{"DMIC MUX10", "DMIC4", "DMIC4"},
	{"DMIC MUX10", "DMIC5", "DMIC5"},
	{"DMIC MUX10", "DMIC6", "DMIC6"},
	{"DMIC MUX10", "DMIC7", "DMIC7"},
	{"AMIC MUX10", "ADC1", "ADC1"},
	{"AMIC MUX10", "ADC2", "ADC2"},
	{"AMIC MUX10", "ADC3", "ADC3"},
	{"AMIC MUX10", "ADC4", "ADC4"},

	{"DMIC MUX11", "DMIC0", "DMIC0"},
	{"DMIC MUX11", "DMIC1", "DMIC1"},
	{"DMIC MUX11", "DMIC2", "DMIC2"},
	{"DMIC MUX11", "DMIC3", "DMIC3"},
	{"DMIC MUX11", "DMIC4", "DMIC4"},
	{"DMIC MUX11", "DMIC5", "DMIC5"},
	{"DMIC MUX11", "DMIC6", "DMIC6"},
	{"DMIC MUX11", "DMIC7", "DMIC7"},
	{"AMIC MUX11", "ADC1", "ADC1"},
	{"AMIC MUX11", "ADC2", "ADC2"},
	{"AMIC MUX11", "ADC3", "ADC3"},
	{"AMIC MUX11", "ADC4", "ADC4"},

	{"ADC2_IN", "AMIC1", "AMIC1"},
	{"ADC2_IN", "AMIC2", "AMIC2"},
	{"ADC4_IN", "AMIC3", "AMIC3"},
	{"ADC4_IN", "AMIC4", "AMIC4"},

	{"ADC1", NULL, "AMIC1"},
	{"ADC2", NULL, "ADC2_IN"},
	{"ADC3", NULL, "AMIC3"},
	{"ADC4", NULL, "ADC4_IN"},

	{"ADC1", NULL, "LDO_RXTX"},
	{"ADC2", NULL, "LDO_RXTX"},
	{"ADC3", NULL, "LDO_RXTX"},
	{"ADC4", NULL, "LDO_RXTX"},

	{"RX INT0_1 MIX1 INP0", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT0_1 MIX1 INP0", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT0_1 MIX1 INP0", "IIR0", "IIR0"},
	{"RX INT0_1 MIX1 INP1", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT0_1 MIX1 INP1", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT0_1 MIX1 INP1", "IIR0", "IIR0"},
	{"RX INT0_1 MIX1 INP2", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT0_1 MIX1 INP2", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT0_1 MIX1 INP2", "IIR0", "IIR0"},

	{"RX INT7_1 MIX1 INP0", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT7_1 MIX1 INP0", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT7_1 MIX1 INP0", "IIR0", "IIR0"},
	{"RX INT7_1 MIX1 INP1", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT7_1 MIX1 INP1", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT7_1 MIX1 INP1", "IIR0", "IIR0"},
	{"RX INT7_1 MIX1 INP2", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT7_1 MIX1 INP2", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT7_1 MIX1 INP2", "IIR0", "IIR0"},

	{"RX INT8_1 MIX1 INP0", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT8_1 MIX1 INP0", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT8_1 MIX1 INP0", "IIR0", "IIR0"},
	{"RX INT8_1 MIX1 INP1", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT8_1 MIX1 INP1", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT8_1 MIX1 INP1", "IIR0", "IIR0"},
	{"RX INT8_1 MIX1 INP2", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT8_1 MIX1 INP2", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT8_1 MIX1 INP2", "IIR0", "IIR0"},

	{"RX INT9_1 MIX1 INP0", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT9_1 MIX1 INP0", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT9_1 MIX1 INP0", "IIR0", "IIR0"},
	{"RX INT9_1 MIX1 INP1", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT9_1 MIX1 INP1", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT9_1 MIX1 INP1", "IIR0", "IIR0"},
	{"RX INT9_1 MIX1 INP2", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT9_1 MIX1 INP2", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT9_1 MIX1 INP2", "IIR0", "IIR0"},

	{"RX INT0_1 MIX1", NULL, "RX INT0_1 MIX1 INP0"},
	{"RX INT0_1 MIX1", NULL, "RX INT0_1 MIX1 INP1"},
	{"RX INT0_1 MIX1", NULL, "RX INT0_1 MIX1 INP2"},
	{"RX INT7_1 MIX1", NULL, "RX INT7_1 MIX1 INP0"},
	{"RX INT7_1 MIX1", NULL, "RX INT7_1 MIX1 INP1"},
	{"RX INT7_1 MIX1", NULL, "RX INT7_1 MIX1 INP2"},
	{"RX INT8_1 MIX1", NULL, "RX INT8_1 MIX1 INP0"},
	{"RX INT8_1 MIX1", NULL, "RX INT8_1 MIX1 INP1"},
	{"RX INT8_1 MIX1", NULL, "RX INT8_1 MIX1 INP2"},
	{"RX INT9_1 MIX1", NULL, "RX INT9_1 MIX1 INP0"},
	{"RX INT9_1 MIX1", NULL, "RX INT9_1 MIX1 INP1"},
	{"RX INT9_1 MIX1", NULL, "RX INT9_1 MIX1 INP2"},

	/* Mixing path INT0 */
	{"RX INT0_2 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT0_2 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT0_2 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT0_2 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT0_2 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT0_2 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT0_2 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT0_2 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT0_2 INTERP", NULL, "RX INT0_2 MUX"},
	{"RX INT0 SEC MIX", NULL, "RX INT0_2 INTERP"},

	/* Mixing path INT7 */
	{"RX INT7_2 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT7_2 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT7_2 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT7_2 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT7_2 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT7_2 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT7_2 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT7_2 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT7_2 INTERP", NULL, "RX INT7_2 MUX"},
	{"RX INT7 SEC MIX", NULL, "RX INT7_2 INTERP"},

	/* Mixing path INT8 */
	{"RX INT8_2 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT8_2 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT8_2 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT8_2 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT8_2 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT8_2 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT8_2 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT8_2 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT8_2 INTERP", NULL, "RX INT8_2 MUX"},
	{"RX INT8 SEC MIX", NULL, "RX INT8_2 INTERP"},

	/* Mixing path INT9 */
	{"RX INT9_2 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"RX INT9_2 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"RX INT9_2 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"RX INT9_2 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"RX INT9_2 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"RX INT9_2 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"RX INT9_2 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"RX INT9_2 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"RX INT9_2 INTERP", NULL, "RX INT9_2 MUX"},
	{"RX INT9 SEC MIX", NULL, "RX INT9_2 INTERP"},

	{"RX INT0_1 INTERP", NULL, "RX INT0_1 MIX1"},
	{"RX INT0 SEC MIX", NULL, "RX INT0_1 INTERP"},
	{"RX INT0 MIX2", NULL, "RX INT0 SEC MIX"},
	{"RX INT0 MIX2", NULL, "RX INT0 MIX2 INP"},
	{"RX INT0 DEM MUX", NULL, "RX INT0 MIX2"},
	{"RX INT0 DAC", NULL, "RX INT0 DEM MUX"},
	{"RX INT0 DAC", NULL, "LDO_RXTX"},
	{"EAR PA", NULL, "RX INT0 DAC"},
	{"EAR", NULL, "EAR PA"},

	{"RX INT7_1 INTERP", NULL, "RX INT7_1 MIX1"},
	{"RX INT7 SEC MIX", NULL, "RX INT7_1 INTERP"},
	{"RX INT7 MIX2", NULL, "RX INT7 SEC MIX"},
	{"RX INT7 MIX2", NULL, "RX INT7 MIX2 INP"},
	{"RX INT7 CHAIN", NULL, "RX INT7 MIX2"},
	{"SPK1 OUT", NULL, "RX INT7 CHAIN"},

	{"RX INT8_1 INTERP", NULL, "RX INT8_1 MIX1"},
	{"RX INT8 SEC MIX", NULL, "RX INT8_1 INTERP"},
	{"RX INT8 SEC MIX", NULL, "RX INT8_1 MIX1"},
	{"RX INT8 CHAIN", NULL, "RX INT8 SEC MIX"},
	{"SPK2 OUT", NULL, "RX INT8 CHAIN"},

	{"RX INT9_1 INTERP", NULL, "RX INT9_1 MIX1"},
	{"RX INT9 SEC MIX", NULL, "RX INT9_1 INTERP"},
	{"RX INT9 MIX2", NULL, "RX INT9 SEC MIX"},
	{"RX INT9 MIX2", NULL, "RX INT9 MIX2 INP"},
	{"RX INT9 DEM MUX", NULL, "RX INT9 MIX2"},
	{"RX INT9 DAC", NULL, "RX INT9 DEM MUX"},
	{"RX INT9 DAC", NULL, "LDO_RXTX"},
	{"AUX PA", NULL, "RX INT9 DAC"},
	{"AUX", NULL, "AUX PA"},

	/* ANC Routing */
	{"ANC0 FB MUX", "ANC_IN_EAR", "RX INT0 MIX2"},
	{"ANC0 FB MUX", "ANC_IN_EAR_SPKR", "RX INT7 MIX2"},

	{"ANC OUT EAR Enable", "Switch", "ADC MUX10"},
	{"ANC OUT EAR Enable", "Switch", "ADC MUX11"},
	{"RX INT0 MIX2", NULL, "ANC OUT EAR Enable"},

	{"ANC EAR PA", NULL, "RX INT0 DAC"},
	{"ANC EAR", NULL, "ANC EAR PA"},

	{"ANC OUT EAR SPKR Enable", "Switch", "ADC MUX10"},
	{"ANC OUT EAR SPKR Enable", "Switch", "ADC MUX11"},
	{"RX INT7 MIX2", NULL, "ANC OUT EAR SPKR Enable"},

	{"ANC SPKR PA Enable", "Switch", "RX INT7 CHAIN"},
	{"ANC SPK1 PA", NULL, "ANC SPKR PA Enable"},
	{"SPK1 OUT", NULL, "ANC SPK1 PA"},

	/*
	 * SRC0 input to Sidetone RX Mixer
	 * on RX0, RX1, RX2, RX3, RX4 and RX7 chains
	 */
	{"IIR0", NULL, "IIR0 INP0 MUX"},
	{"IIR0 INP0 MUX", "DEC0", "ADC MUX0"},
	{"IIR0 INP0 MUX", "DEC1", "ADC MUX1"},
	{"IIR0 INP0 MUX", "DEC2", "ADC MUX2"},
	{"IIR0 INP0 MUX", "DEC3", "ADC MUX3"},
	{"IIR0 INP0 MUX", "DEC4", "ADC MUX4"},
	{"IIR0 INP0 MUX", "DEC5", "ADC MUX5"},
	{"IIR0 INP0 MUX", "DEC6", "ADC MUX6"},
	{"IIR0 INP0 MUX", "DEC7", "ADC MUX7"},
	{"IIR0 INP0 MUX", "DEC8", "ADC MUX8"},
	{"IIR0 INP0 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"IIR0 INP0 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"IIR0 INP0 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"IIR0 INP0 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"IIR0 INP0 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"IIR0 INP0 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"IIR0 INP0 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"IIR0 INP0 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"IIR0", NULL, "IIR0 INP1 MUX"},
	{"IIR0 INP1 MUX", "DEC0", "ADC MUX0"},
	{"IIR0 INP1 MUX", "DEC1", "ADC MUX1"},
	{"IIR0 INP1 MUX", "DEC2", "ADC MUX2"},
	{"IIR0 INP1 MUX", "DEC3", "ADC MUX3"},
	{"IIR0 INP1 MUX", "DEC4", "ADC MUX4"},
	{"IIR0 INP1 MUX", "DEC5", "ADC MUX5"},
	{"IIR0 INP1 MUX", "DEC6", "ADC MUX6"},
	{"IIR0 INP1 MUX", "DEC7", "ADC MUX7"},
	{"IIR0 INP1 MUX", "DEC8", "ADC MUX8"},
	{"IIR0 INP1 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"IIR0 INP1 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"IIR0 INP1 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"IIR0 INP1 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"IIR0 INP1 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"IIR0 INP1 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"IIR0 INP1 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"IIR0 INP1 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"IIR0", NULL, "IIR0 INP2 MUX"},
	{"IIR0 INP2 MUX", "DEC0", "ADC MUX0"},
	{"IIR0 INP2 MUX", "DEC1", "ADC MUX1"},
	{"IIR0 INP2 MUX", "DEC2", "ADC MUX2"},
	{"IIR0 INP2 MUX", "DEC3", "ADC MUX3"},
	{"IIR0 INP2 MUX", "DEC4", "ADC MUX4"},
	{"IIR0 INP2 MUX", "DEC5", "ADC MUX5"},
	{"IIR0 INP2 MUX", "DEC6", "ADC MUX6"},
	{"IIR0 INP2 MUX", "DEC7", "ADC MUX7"},
	{"IIR0 INP2 MUX", "DEC8", "ADC MUX8"},
	{"IIR0 INP2 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"IIR0 INP2 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"IIR0 INP2 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"IIR0 INP2 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"IIR0 INP2 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"IIR0 INP2 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"IIR0 INP2 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"IIR0 INP2 MUX", "RX7", "CDC_IF RX7 MUX"},
	{"IIR0", NULL, "IIR0 INP3 MUX"},
	{"IIR0 INP3 MUX", "DEC0", "ADC MUX0"},
	{"IIR0 INP3 MUX", "DEC1", "ADC MUX1"},
	{"IIR0 INP3 MUX", "DEC2", "ADC MUX2"},
	{"IIR0 INP3 MUX", "DEC3", "ADC MUX3"},
	{"IIR0 INP3 MUX", "DEC4", "ADC MUX4"},
	{"IIR0 INP3 MUX", "DEC5", "ADC MUX5"},
	{"IIR0 INP3 MUX", "DEC6", "ADC MUX6"},
	{"IIR0 INP3 MUX", "DEC7", "ADC MUX7"},
	{"IIR0 INP3 MUX", "DEC8", "ADC MUX8"},
	{"IIR0 INP3 MUX", "RX0", "CDC_IF RX0 MUX"},
	{"IIR0 INP3 MUX", "RX1", "CDC_IF RX1 MUX"},
	{"IIR0 INP3 MUX", "RX2", "CDC_IF RX2 MUX"},
	{"IIR0 INP3 MUX", "RX3", "CDC_IF RX3 MUX"},
	{"IIR0 INP3 MUX", "RX4", "CDC_IF RX4 MUX"},
	{"IIR0 INP3 MUX", "RX5", "CDC_IF RX5 MUX"},
	{"IIR0 INP3 MUX", "RX6", "CDC_IF RX6 MUX"},
	{"IIR0 INP3 MUX", "RX7", "CDC_IF RX7 MUX"},

	{"SRC0", NULL, "IIR0"},
	{"RX INT0 MIX2 INP", "SRC0", "SRC0"},
	{"RX INT7 MIX2 INP", "SRC0", "SRC0"},
	{"RX INT9 MIX2 INP", "SRC0", "SRC0"},

	/* Native clk mix path routing */
	{"RX INT7_2 NATIVE MUX", "ON", "RX INT7_2 MUX"},
	{"RX INT7_2 INTERP", NULL, "RX INT7_2 NATIVE MUX"},
	{"RX INT7_2 NATIVE MUX", NULL, "RX INT7 NATIVE SUPPLY"},

	{"RX INT8_2 NATIVE MUX", "ON", "RX INT8_2 MUX"},
	{"RX INT8_2 INTERP", NULL, "RX INT8_2 NATIVE MUX"},
	{"RX INT8_2 NATIVE MUX", NULL, "RX INT8 NATIVE SUPPLY"},

	/* ASRC Routing */
	{"ASRC2 MUX", "ASRC_IN_SPKR1", "RX INT7_2 INTERP"},
	{"RX INT7 SEC MIX", NULL, "ASRC2 MUX"},

	{"ASRC3 MUX", "ASRC_IN_SPKR2", "RX INT8_2 INTERP"},
	{"RX INT8 SEC MIX", NULL, "ASRC3 MUX"},

	/* SLIMBUS-I2S Bridge interface */
	{"I2S TX1_0 MUX", "SB_RX2", "SLIM RX2"},

	{"I2S TX1_1 MUX", "SB_RX0", "SLIM RX0"},
	{"I2S TX1_1 MUX", "SB_RX1", "SLIM RX1"},
	{"I2S TX1_1 MUX", "SB_RX2", "SLIM RX2"},
	{"I2S TX1_1 MUX", "SB_RX3", "SLIM RX3"},

	{"I2S TX1 MIXER", NULL, "I2S TX1_0 MUX"},
	{"I2S TX1 MIXER", NULL, "I2S TX1_1 MUX"},
	{"I2S1 CAP", NULL, "I2S TX1 MIXER"},

	{"CDC_IF TX10 MUX2", "I2SRX1_0_BRDG", "CDC_IF RX2 MUX"},
	{"CDC_IF TX11 MUX2", "I2SRX1_1_BRDG", "CDC_IF RX3 MUX"},
	{"CDC_IF RX2 MUX", "I2SRX1_0", "I2S1 PB"},
	{"CDC_IF RX3 MUX", "I2SRX1_1", "I2S1 PB"},
};

#endif

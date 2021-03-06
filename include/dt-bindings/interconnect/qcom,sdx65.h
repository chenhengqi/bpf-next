/* SPDX-License-Identifier: (GPL-2.0 OR BSD-2-Clause) */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_SDX65_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_SDX65_H

#define MASTER_LLCC	0
#define SLAVE_EBI1	1

#define MASTER_TCU_0		0
#define MASTER_SNOC_GC_MEM_NOC	1
#define MASTER_APPSS_PROC	2
#define SLAVE_LLCC		3
#define SLAVE_MEM_NOC_SNOC	4
#define SLAVE_MEM_NOC_PCIE_SNOC	5

#define MASTER_AUDIO		0
#define MASTER_BLSP_1		1
#define MASTER_QDSS_BAM		2
#define MASTER_QPIC		3
#define MASTER_SNOC_CFG		4
#define MASTER_SPMI_FETCHER	5
#define MASTER_ANOC_SNOC	6
#define MASTER_IPA		7
#define MASTER_MEM_NOC_SNOC	8
#define MASTER_MEM_NOC_PCIE_SNOC	9
#define MASTER_CRYPTO		10
#define MASTER_IPA_PCIE		11
#define MASTER_PCIE_0		12
#define MASTER_QDSS_ETR		13
#define MASTER_SDCC_1		14
#define MASTER_USB3		15
#define SLAVE_AOSS		16
#define SLAVE_APPSS		17
#define SLAVE_AUDIO		18
#define SLAVE_BLSP_1		19
#define SLAVE_CLK_CTL		20
#define SLAVE_CRYPTO_0_CFG	21
#define SLAVE_CNOC_DDRSS	22
#define SLAVE_ECC_CFG		23
#define SLAVE_IMEM_CFG		24
#define SLAVE_IPA_CFG		25
#define SLAVE_CNOC_MSS		26
#define SLAVE_PCIE_PARF		27
#define SLAVE_PDM		28
#define SLAVE_PRNG		29
#define SLAVE_QDSS_CFG		30
#define SLAVE_QPIC		31
#define SLAVE_SDCC_1		32
#define SLAVE_SNOC_CFG		33
#define SLAVE_SPMI_FETCHER	34
#define SLAVE_SPMI_VGI_COEX	35
#define SLAVE_TCSR		36
#define SLAVE_TLMM		37
#define SLAVE_USB3		38
#define SLAVE_USB3_PHY_CFG	39
#define SLAVE_ANOC_SNOC		40
#define SLAVE_SNOC_MEM_NOC_GC	41
#define SLAVE_IMEM		42
#define SLAVE_SERVICE_SNOC	43
#define SLAVE_PCIE_0		44
#define SLAVE_QDSS_STM		45
#define SLAVE_TCU		46

#endif

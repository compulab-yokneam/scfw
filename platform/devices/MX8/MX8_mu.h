/*
** ###################################################################
**     Processors:          MX8
**
**     Compilers:           GNU C Compiler
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MX8
**
**     Copyright (c) 1997 - 2015 Freescale Semiconductor, Inc.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */

#ifndef HW_MU_REGISTERS_H
#define HW_MU_REGISTERS_H

/* ----------------------------------------------------------------------------
   -- MU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @brief Core B boot mode.
 */
typedef enum _mu_core_boot_mode
{
    kMU_CoreBootFromAddr0 = 0x00U, /*!< Boot from 0x00.      */
    kMU_CoreBootFromDmem = 0x01U,  /*!< Boot from DMEM base. */
    kMU_CoreBootFromImem = 0x02U   /*!< Boot from IMEM base. */
} mu_core_boot_mode_t;

/*!
 * @brief Power mode definition.
 */
typedef enum _mu_power_mode
{
    kMU_PowerModeRun = 0x00U,  /*!< Run mode.           */
    kMU_PowerModeWait = 0x01U, /*!< WAIT mode.          */
    kMU_PowerModeStop = 0x02U, /*!< STOP/VLPS mode.     */
    kMU_PowerModeDsm = 0x03U   /*!< DSM: LLS/VLLS mode. */
} mu_power_mode_t;

/*!
 * @addtogroup MU_Peripheral_Access_Layer MU Peripheral Access Layer
 * @{
 */

/** MU - Register Layout Typedef */
typedef struct {
  __IO uint32_t TR[4];                             /**< Transmit Register, array offset: 0x00, array step: 0x4 */
  __I  uint32_t RR[4];                             /**< Receive Register, array offset: 0x10, array step: 0x4 */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x20 */
  __IO uint32_t CR;                                /**< Control Register, offset: 0x24 */
} MU_Type;

/* ----------------------------------------------------------------------------
   -- MU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MU_Register_Masks MU Register Masks
 * @{
 */

/*! @name TR - Transmit Register */
#define MU_TR_DATA_MASK                          (0xFFFFFFFFU)
#define MU_TR_DATA_SHIFT                         (0U)
#define MU_TR_DATA(x)                            (((uint32_t)(((uint32_t)(x)) << MU_TR_DATA_SHIFT)) & MU_TR_DATA_MASK)

/* The count of MU_TR */
#define MU_TR_COUNT                              (4U)

/*! @name RR - Receive Register */
#define MU_RR_DATA_MASK                          (0xFFFFFFFFU)
#define MU_RR_DATA_SHIFT                         (0U)
#define MU_RR_DATA(x)                            (((uint32_t)(((uint32_t)(x)) << MU_RR_DATA_SHIFT)) & MU_RR_DATA_MASK)

/* The count of MU_RR */
#define MU_RR_COUNT                              (4U)

/*! @name SR - Status Register */
#define MU_SR_Fn_MASK                            (0x7U)
#define MU_SR_Fn_SHIFT                           (0U)
#define MU_SR_Fn(x)                              (((uint32_t)(((uint32_t)(x)) << MU_SR_Fn_SHIFT)) & MU_SR_Fn_MASK)
#define MU_SR_NMIC_MASK                          (0x8U)
#define MU_SR_NMIC_SHIFT                         (3U)
#define MU_SR_NMIC(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_NMIC_SHIFT)) & MU_SR_NMIC_MASK)
#define MU_SR_EP_MASK                            (0x10U)
#define MU_SR_EP_SHIFT                           (4U)
#define MU_SR_EP(x)                              (((uint32_t)(((uint32_t)(x)) << MU_SR_EP_SHIFT)) & MU_SR_EP_MASK)
#define MU_SR_PM_MASK                            (0x60U)
#define MU_SR_PM_SHIFT                           (5U)
#define MU_SR_PM(x)                              (((uint32_t)(((uint32_t)(x)) << MU_SR_PM_SHIFT)) & MU_SR_PM_MASK)
#define MU_SR_FUP_MASK                           (0x100U)
#define MU_SR_FUP_SHIFT                          (8U)
#define MU_SR_FUP(x)                             (((uint32_t)(((uint32_t)(x)) << MU_SR_FUP_SHIFT)) & MU_SR_FUP_MASK)
#define MU_SR_TEn_MASK                           (0xF00000U)
#define MU_SR_TEn_SHIFT                          (20U)
#define MU_SR_TEn(x)                             (((uint32_t)(((uint32_t)(x)) << MU_SR_TEn_SHIFT)) & MU_SR_TEn_MASK)
#define MU_SR_RFn_MASK                           (0xF000000U)
#define MU_SR_RFn_SHIFT                          (24U)
#define MU_SR_RFn(x)                             (((uint32_t)(((uint32_t)(x)) << MU_SR_RFn_SHIFT)) & MU_SR_RFn_MASK)
#define MU_SR_GIPn_MASK                          (0xF0000000U)
#define MU_SR_GIPn_SHIFT                         (28U)
#define MU_SR_GIPn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_SR_GIPn_SHIFT)) & MU_SR_GIPn_MASK)

/*! @name CR - Control Register */
#define MU_CR_Fn_MASK                            (0x7U)
#define MU_CR_Fn_SHIFT                           (0U)
#define MU_CR_Fn(x)                              (((uint32_t)(((uint32_t)(x)) << MU_CR_Fn_SHIFT)) & MU_CR_Fn_MASK)
#define MU_CR_NMI_MASK                           (0x8U)
#define MU_CR_NMI_SHIFT                          (3U)
#define MU_CR_NMI(x)                             (((uint32_t)(((uint32_t)(x)) << MU_CR_NMI_SHIFT)) & MU_CR_NMI_MASK)
#define MU_CR_MUR_MASK                           (0x20U)
#define MU_CR_MUR_SHIFT                          (5U)
#define MU_CR_MUR(x)                             (((uint32_t)(((uint32_t)(x)) << MU_CR_MUR_SHIFT)) & MU_CR_MUR_MASK)
#define MU_CR_BRSTH_MASK                         (0x80U)
#define MU_CR_BRSTH_SHIFT                        (7U)
#define MU_CR_BRSTH(x)                           (((uint32_t)(((uint32_t)(x)) << MU_CR_BRSTH_SHIFT)) & MU_CR_BRSTH_MASK)
#define MU_CR_CLKE_MASK                          (0x100U)
#define MU_CR_CLKE_SHIFT                         (8U)
#define MU_CR_CLKE(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_CLKE_SHIFT)) & MU_CR_CLKE_MASK)
#define MU_CR_BBOOT_MASK                         (0x600U)
#define MU_CR_BBOOT_SHIFT                        (9U)
#define MU_CR_BBOOT(x)                           (((uint32_t)(((uint32_t)(x)) << MU_CR_BBOOT_SHIFT)) & MU_CR_BBOOT_MASK)
#define MU_CR_GIRn_MASK                          (0xF0000U)
#define MU_CR_GIRn_SHIFT                         (16U)
#define MU_CR_GIRn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_GIRn_SHIFT)) & MU_CR_GIRn_MASK)
#define MU_CR_TIEn_MASK                          (0xF00000U)
#define MU_CR_TIEn_SHIFT                         (20U)
#define MU_CR_TIEn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_TIEn_SHIFT)) & MU_CR_TIEn_MASK)
#define MU_CR_RIEn_MASK                          (0xF000000U)
#define MU_CR_RIEn_SHIFT                         (24U)
#define MU_CR_RIEn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_RIEn_SHIFT)) & MU_CR_RIEn_MASK)
#define MU_CR_GIEn_MASK                          (0xF0000000U)
#define MU_CR_GIEn_SHIFT                         (28U)
#define MU_CR_GIEn(x)                            (((uint32_t)(((uint32_t)(x)) << MU_CR_GIEn_SHIFT)) & MU_CR_GIEn_MASK)


/*!
 * @}
 */ /* end of group MU_Register_Masks */


/* MU - Peripheral instance base addresses */

/** This define is used to access MU registers */
#define DSC_MU_BASE_ADDR(X, Y)  ((MU_Type*) (((uint32_t) DSC_BASE_ADDR(X)) \
    + 0xC000U + (0x80U * (Y))))

/** Peripheral MU0 base pointer */
#define MU0                                     ((MU_Type *)MU0_BASE)
/** Peripheral MU1 base pointer */
#define MU1                                     ((MU_Type *)MU1_BASE)
/** Peripheral MU2 base pointer */
#define MU2                                     ((MU_Type *)MU2_BASE)
/** Peripheral MU3 base pointer */
#define MU3                                     ((MU_Type *)MU3_BASE)
/** Peripheral MU4 base pointer */
#define MU4                                     ((MU_Type *)MU4_BASE)
/** Peripheral MU5 base pointer */
#define MU5                                     ((MU_Type *)MU5_BASE)
/** Peripheral MU6 base pointer */
#define MU6                                     ((MU_Type *)MU6_BASE)
/** Peripheral MU7 base pointer */
#define MU7                                     ((MU_Type *)MU7_BASE)
/** Peripheral MU8 base pointer */
#define MU8                                     ((MU_Type *)MU8_BASE)
/** Peripheral MU9 base pointer */
#define MU9                                     ((MU_Type *)MU9_BASE)
/** Peripheral MU10 base pointer */
#define MU10                                    ((MU_Type *)MU10_BASE)
/** Peripheral MU11 base pointer */
#define MU11                                    ((MU_Type *)MU11_BASE)
/** Peripheral MU12 base pointer */
#define MU12                                    ((MU_Type *)MU12_BASE)
/** Peripheral MU13 base pointer */
#define MU13                                    ((MU_Type *)MU13_BASE)
/** Peripheral MU14 base pointer */
#define MU14                                    ((MU_Type *)MU14_BASE)
/** Peripheral MU15 base pointer */
#define MU15                                    ((MU_Type *)MU15_BASE)
/** Peripheral MU16 base pointer */
#define MU16                                    ((MU_Type *)MU16_BASE)
/** Peripheral MU17 base pointer */
#define MU17                                    ((MU_Type *)MU17_BASE)
/** Peripheral MU18 base pointer */
#define MU18                                    ((MU_Type *)MU18_BASE)
/** Peripheral MU19 base pointer */
#define MU19                                    ((MU_Type *)MU19_BASE)
/** Peripheral MU20 base pointer */
#define MU20                                    ((MU_Type *)MU20_BASE)
/** Peripheral MU21 base pointer */
#define MU21                                    ((MU_Type *)MU21_BASE)
/** Peripheral MU22 base pointer */
#define MU22                                    ((MU_Type *)MU22_BASE)
/** Peripheral MU23 base pointer */
#define MU23                                    ((MU_Type *)MU23_BASE)
/** Peripheral MU24 base pointer */
#define MU24                                    ((MU_Type *)MU24_BASE)

/** Array initializer of MU peripheral base addresses */
#define MU_BASE_ADDRS                            { MU0_BASE, MU1_BASE,   \
                                                   MU2_BASE, MU3_BASE,   \
                                                   MU4_BASE, MU5_BASE,   \
                                                   MU6_BASE, MU7_BASE,   \
                                                   MU8_BASE, MU9_BASE,   \
                                                   MU10_BASE, MU11_BASE, \
                                                   MU12_BASE, MU13_BASE, \
                                                   MU14_BASE, MU15_BASE, \
                                                   MU16_BASE, MU17_BASE, \
                                                   MU18_BASE, MU19_BASE, \
                                                   MU20_BASE, MU21_BASE, \
                                                   MU22_BASE, MU23_BASE, \
                                                   MU24_BASE }
/** Array initializer of MU peripheral base pointers */
#define MU_BASE_PTRS                             { MU0, MU1, MU2,    \
                                                   MU3, MU4, MU5,    \
                                                   MU6, MU7, MU8,    \
                                                   MU9, MU10, MU11,  \
                                                   MU12, MU13, MU14, \
                                                   MU15, MU16, MU17, \
                                                   MU18, MU19, MU20, \
                                                   MU21, MU22, MU23, \
                                                   MU24 }
/** Interrupt vectors for the MU peripheral type */
#define MU_IRQS                                  { NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn, NotAvail_IRQn, \
                                                   NotAvail_IRQn }

/*!
 * @}
 */ /* end of group MU_Peripheral_Access_Layer */

#endif /* HW_MU_REGISTERS_H */


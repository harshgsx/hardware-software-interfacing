/* Header file generated automatically from SVD file
 * for STM32G474xx
 *  DO NOT EDIT 
 */
#include <stdio.h>
#include <stdint.h>
#include "decoder.h"

const Field_t TIM2_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode               selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
   { "\x10\x95\x08\x14\xe0", 12, 1 },  /* DITHEN: Dithering Enable */
};

const Field_t TIM2_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output Idle state 2 */
   { "\x3c\x94\xdd\x38", 11, 1 },  /* OIS2N: Output Idle state 2 */
   { "\x3c\x94\xde", 12, 1 },  /* OIS3: Output Idle state 3 */
   { "\x3c\x94\xde\x38", 13, 1 },  /* OIS3N: Output Idle state 3 */
   { "\x3c\x94\xdf", 14, 1 },  /* OIS4: Output Idle state 4 */
   { "\x3c\x94\xdf\x38", 15, 1 },  /* OIS4N: Output Idle state 4 (OC4N               output) */
   { "\x3c\x94\xe0", 16, 1 },  /* OIS5: Output Idle state 5 (OC5               output) */
   { "\x3c\x94\xe1", 18, 1 },  /* OIS6: Output Idle state 6 (OC6               output) */
   { "\x34\xd4\xdd", 20, 4 },  /* MMS2: Master mode selection 2 */
   { "\x34\xd4\xe5\x78", 25, 1 },  /* MMS_3: Master mode selection - bit               3 */
};

const Field_t TIM2_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x3c\x30\xd3", 3, 1 },  /* OCCS: OCREF clear selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
   { "\x4c\xd4\xe5\x78", 16, 1 },  /* SMS_3: Slave mode selection - bit               3 */
   { "\x51\x39\x5f\x95\xe0", 20, 2 },  /* TS_4_3: Trigger selection - bit               4:3 */
   { "\x4c\xd4\xd0\x14", 24, 1 },  /* SMSPE: SMS Preload Enable */
   { "\x4c\xd4\xd0\x4c", 25, 1 },  /* SMSPS: SMS Preload Source */
};

const Field_t TIM2_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt               enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request               enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
   { "\x24\x46\x09\x14", 20, 1 },  /* IDXIE: Index interrupt enable */
   { "\x10\x94\x89\x14", 21, 1 },  /* DIRIE: Direction Change interrupt               enable */
   { "\x24\x54\x92\x24\x50", 22, 1 },  /* IERRIE: Index Error interrupt               enable */
   { "\x50\x54\x92\x24\x50", 23, 1 },  /* TERRIE: Transition Error interrupt               enable */
};

const Field_t TIM2_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt               flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt               flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x09\xd2\x46", 8, 1 },  /* B2IF: Break 2 interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture               flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture               flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture               flag */
   { "\x4c\x22\x46", 13, 1 },  /* SBIF: System Break interrupt               flag */
   { "\x0c\x38\x09\x18", 16, 1 },  /* CC5IF: Compare 5 interrupt flag */
   { "\x0c\x38\x49\x18", 17, 1 },  /* CC6IF: Compare 6 interrupt flag */
   { "\x24\x46\x06", 20, 1 },  /* IDXF: Index interrupt flag */
   { "\x10\x94\x86", 21, 1 },  /* DIRF: Direction Change interrupt               flag */
   { "\x24\x54\x92\x18", 22, 1 },  /* IERRF: Index Error interrupt flag */
   { "\x50\x54\x92\x18", 23, 1 },  /* TERRF: Transition Error interrupt               flag */
};

const Field_t TIM2_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3               generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
   { "\x09\xd1\xc0", 8, 1 },  /* B2G: Break 2 generation */
};

const Field_t TIM2_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x24\x37\x50\x4c\x30", 10, 2 },  /* IC2PSC: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM2_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output Compare 1 clear               enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast               enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload               enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output Compare 2 clear               enable */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode - bit               3 */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output Compare 2 mode - bit               3 */
};

const Field_t TIM2_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3               selection */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: Output compare 3 fast               enable */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: Output compare 3 preload               enable */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: Output compare 3 mode */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: Output compare 3 clear               enable */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: Output compare 4 fast               enable */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: Output compare 4 preload               enable */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: Output compare 4 mode */
   { "\x3c\x37\xc3\x14", 15, 1 },  /* OC4CE: Output compare 4 clear               enable */
   { "\x3c\x37\x8d\x95\xe0", 16, 1 },  /* OC3M_3: Output Compare 3 mode - bit               3 */
   { "\x3c\x37\xcd\x95\xe0", 24, 1 },  /* OC4M_3: Output Compare 4 mode - bit               3 */
};

const Field_t TIM2_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3               selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM2_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x4e\x14", 6, 1 },  /* CC2NE: Capture/Compare 2 complementary output               enable */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output               enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\x8e\x14", 10, 1 },  /* CC3NE: Capture/Compare 3 complementary output               enable */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output               enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xce\x14", 14, 1 },  /* CC4NE: Capture/Compare 4 complementary output               enable */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 complementary output               polarity */
   { "\x0c\x38\x05", 16, 1 },  /* CC5E: Capture/Compare 5 output               enable */
   { "\x0c\x38\x10", 17, 1 },  /* CC5P: Capture/Compare 5 output               polarity */
   { "\x0c\x38\x45", 20, 1 },  /* CC6E: Capture/Compare 6 output               enable */
   { "\x0c\x38\x50", 21, 1 },  /* CC6P: Capture/Compare 6 output               polarity */
};

const Field_t TIM2_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIFCPY */
};

const Field_t TIM2_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM2_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM2_RCR_fields[] = {
   { "\x48\x54\x00", 0, 16 },  /* REP: Repetition counter value */
};

const Field_t TIM2_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM2_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 2 value */
};

const Field_t TIM2_CCR3_fields[] = {
   { "\x0c\x34\x9e", 0, 16 },  /* CCR3: Capture/Compare value */
};

const Field_t TIM2_CCR4_fields[] = {
   { "\x0c\x34\x9f", 0, 16 },  /* CCR4: Capture/Compare value */
};

const Field_t TIM2_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
   { "\x08\xb7\x46", 20, 4 },  /* BK2F: Break 2 filter */
   { "\x08\xb7\x45", 24, 1 },  /* BK2E: Break 2 Enable */
   { "\x08\xb7\x50", 25, 1 },  /* BK2P: Break 2 polarity */
   { "\x08\xb1\x13\x48\xd0", 26, 1 },  /* BKDSRM: BKDSRM */
   { "\x08\xb7\x44\x4d\x23\x40", 27, 1 },  /* BK2DSRM: BK2DSRM */
   { "\x08\xb0\x89\x10", 28, 1 },  /* BKBID: BKBID */
   { "\x08\xb7\x49\x10", 29, 1 },  /* BK2ID: BK2ID */
};

const Field_t TIM2_CCR5_fields[] = {
   { "\x0c\x34\xa0", 0, 16 },  /* CCR5: Capture/Compare value */
   { "\x1c\x38\x03\x70", 29, 1 },  /* GC5C1: Group Channel 5 and Channel               1 */
   { "\x1c\x38\x03\x74", 30, 1 },  /* GC5C2: Group Channel 5 and Channel               2 */
   { "\x1c\x38\x03\x78", 31, 1 },  /* GC5C3: Group Channel 5 and Channel               3 */
};

const Field_t TIM2_CCR6_fields[] = {
   { "\x0c\x34\xa1", 0, 16 },  /* CCR6: Capture/Compare value */
};

const Field_t TIM2_CCMR3_Output_fields[] = {
   { "\x3c\x38\x06\x14", 2, 1 },  /* OC5FE: Output compare 5 fast               enable */
   { "\x3c\x38\x10\x14", 3, 1 },  /* OC5PE: Output compare 5 preload               enable */
   { "\x3c\x38\x0d", 4, 3 },  /* OC5M: Output compare 5 mode */
   { "\x3c\x38\x03\x14", 7, 1 },  /* OC5CE: Output compare 5 clear               enable */
   { "\x3c\x38\x46\x14", 10, 1 },  /* OC6FE: Output compare 6 fast               enable */
   { "\x3c\x38\x50\x14", 11, 1 },  /* OC6PE: Output compare 6 preload               enable */
   { "\x3c\x38\x4d", 12, 3 },  /* OC6M: Output compare 6 mode */
   { "\x3c\x38\x43\x14", 15, 1 },  /* OC6CE: Output compare 6 clear               enable */
   { "\x3c\x38\x0d\x94\x22\x54\x78", 16, 3 },  /* OC5M_bit3: Output Compare 5 mode bit               3 */
   { "\x3c\x38\x4d\x94\x22\x54\x78", 24, 1 },  /* OC6M_bit3: Output Compare 6 mode bit               3 */
};

const Field_t TIM2_DTR2_fields[] = {
   { "\x11\x41\xc6", 0, 8 },  /* DTGF: Dead-time falling edge generator               setup */
   { "\x11\x40\x45", 16, 1 },  /* DTAE: Deadtime Asymmetric Enable */
   { "\x11\x44\x05", 17, 1 },  /* DTPE: Deadtime Preload Enable */
};

const Field_t TIM2_ECR_fields[] = {
   { "\x24\x50", 0, 1 },  /* IE: Index Enable */
   { "\x24\x42\x52", 1, 2 },  /* IDIR: Index Direction */
   { "\x24\x23\x0b", 3, 2 },  /* IBLK: Index Blanking */
   { "\x18\x91\x18", 5, 1 },  /* FIDX: First Index */
   { "\x25\x03\xd3", 6, 2 },  /* IPOS: Index Positioning */
   { "\x41\x70", 16, 8 },  /* PW: Pulse width */
   { "\x41\x74\x12\x4c\x30", 24, 3 },  /* PWPRSC: Pulse Width prescaler */
};

const Field_t TIM2_TISEL_fields[] = {
   { "\x50\x97\x13\x14\xc0", 0, 4 },  /* TI1SEL: TI1[0] to TI1[15] input               selection */
   { "\x50\x97\x53\x14\xc0", 8, 4 },  /* TI2SEL: TI2[0] to TI2[15] input               selection */
   { "\x50\x97\x93\x14\xc0", 16, 4 },  /* TI3SEL: TI3[0] to TI3[15] input               selection */
   { "\x50\x97\xd3\x14\xc0", 24, 4 },  /* TI4SEL: TI4[0] to TI4[15] input               selection */
};

const Field_t TIM2_AF1_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb0\xcd\x41\xc1\x40", 1, 1 },  /* BKCMP1E: BRK COMP1 enable */
   { "\x08\xb0\xcd\x41\xd1\x40", 2, 1 },  /* BKCMP2E: BRK COMP2 enable */
   { "\x08\xb0\xcd\x41\xe1\x40", 3, 1 },  /* BKCMP3E: BRK COMP3 enable */
   { "\x08\xb0\xcd\x41\xf1\x40", 4, 1 },  /* BKCMP4E: BRK COMP4 enable */
   { "\x08\xb0\xcd\x42\x01\x40", 5, 1 },  /* BKCMP5E: BRK COMP5 enable */
   { "\x08\xb0\xcd\x42\x11\x40", 6, 1 },  /* BKCMP6E: BRK COMP6 enable */
   { "\x08\xb0\xcd\x42\x21\x40", 7, 1 },  /* BKCMP7E: BRK COMP7 enable */
   { "\x08\xb2\x4e\x40", 9, 1 },  /* BKINP: BRK BKIN input polarity */
   { "\x08\xb0\xcd\x41\xc4\x00", 10, 1 },  /* BKCMP1P: BRK COMP1 input polarity */
   { "\x08\xb0\xcd\x41\xd4\x00", 11, 1 },  /* BKCMP2P: BRK COMP2 input polarity */
   { "\x08\xb0\xcd\x41\xe4\x00", 12, 1 },  /* BKCMP3P: BRK COMP3 input polarity */
   { "\x08\xb0\xcd\x41\xf4\x00", 13, 1 },  /* BKCMP4P: BRK COMP4 input polarity */
   { "\x15\x44\x93\x14\xc0", 14, 4 },  /* ETRSEL: ETR source selection */
};

const Field_t TIM2_AF2_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb7\x43\x35\x07\x05", 1, 1 },  /* BK2CMP1E: BRK2 COMP1 enable */
   { "\x08\xb7\x43\x35\x07\x45", 2, 1 },  /* BK2CMP2E: BRK2 COMP2 enable */
   { "\x08\xb7\x43\x35\x07\x85", 3, 1 },  /* BK2CMP3E: BRK2 COMP3 enable */
   { "\x08\xb7\x43\x35\x07\xc5", 4, 1 },  /* BK2CMP4E: BRK2 COMP4 enable */
   { "\x08\xb7\x43\x35\x08\x05", 5, 1 },  /* BK2CMP5E: BRK2 COMP5 enable */
   { "\x08\xb7\x43\x35\x08\x45", 6, 1 },  /* BK2CMP6E: BRK2 COMP6 enable */
   { "\x08\xb7\x43\x35\x08\x85", 7, 1 },  /* BK2CMP7E: BRK2 COMP7 enable */
   { "\x08\xb7\x49\x39\x00", 9, 1 },  /* BK2INP: BRK2 BKIN input polarity */
   { "\x08\xb7\x43\x35\x07\x10", 10, 1 },  /* BK2CMP1P: BRK2 COMP1 input polarity */
   { "\x08\xb7\x43\x35\x07\x50", 11, 1 },  /* BK2CMP2P: BRK2 COMP2 input polarity */
   { "\x08\xb7\x43\x35\x07\x90", 12, 1 },  /* BK2CMP3P: BRK2 COMP3 input polarity */
   { "\x08\xb7\x43\x35\x07\xd0", 13, 1 },  /* BK2CMP4P: BRK2 COMP4 input polarity */
   { "\x3c\x34\x93\x14\xc0", 16, 3 },  /* OCRSEL: OCREF_CLR source selection */
};

const Field_t TIM2_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM2_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 32 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM2_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM2_CR1_fields, 10}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM2_CR2_fields, 17}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM2_SMCR_fields, 12}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM2_DIER_fields, 19}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM2_SR_fields, 20}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM2_EGR_fields, 9}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM2_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM2_CCMR1_Output_fields, 12}, /* CCMR1_Output: capture/compare mode register 1 (output           mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM2_CCMR2_Output_fields, 12}, /* CCMR2_Output: capture/compare mode register 2 (output           mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM2_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM2_CCER_fields, 20}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM2_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM2_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM2_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM2_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM2_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM2_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM2_CCR3_fields, 1}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM2_CCR4_fields, 1}, /* CCR4: capture/compare register 4 */
   {"\x08\x45\x12", 68, 32, 0, TIM2_BDTR_fields, 16}, /* BDTR: break and dead-time register */
   {"\x0c\x34\xa0", 72, 32, 0, TIM2_CCR5_fields, 4}, /* CCR5: capture/compare register 4 */
   {"\x0c\x34\xa1", 76, 32, 0, TIM2_CCR6_fields, 1}, /* CCR6: capture/compare register 4 */
   {"\x0c\x33\x52\x7a\x53\xd5\x51\x05\x54", 80, 32, 0, TIM2_CCMR3_Output_fields, 10}, /* CCMR3_Output: capture/compare mode register 2 (output           mode) */
   {"\x11\x44\x9d", 84, 32, 0, TIM2_DTR2_fields, 3}, /* DTR2: timer Deadtime Register 2 */
   {"\x14\x34\x80", 88, 32, 0, TIM2_ECR_fields, 7}, /* ECR: DMA control register */
   {"\x50\x94\xc5\x30", 92, 32, 0, TIM2_TISEL_fields, 4}, /* TISEL: TIM timer input selection           register */
   {"\x04\x67\x00", 96, 32, 0, TIM2_AF1_fields, 14}, /* AF1: TIM alternate function option register           1 */
   {"\x04\x67\x40", 100, 32, 0, TIM2_AF2_fields, 14}, /* AF2: TIM alternate function option register           2 */
   {"\x10\x34\x80", 988, 32, 0, TIM2_DCR_fields, 2}, /* DCR: control register */
   {"\x10\xd0\x52", 992, 32, 0, TIM2_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t TIM6_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
   { "\x10\x95\x08\x14\xe0", 12, 1 },  /* DITHEN: Dithering Enable */
};

const Field_t TIM6_CR2_fields[] = {
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
};

const Field_t TIM6_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
};

const Field_t TIM6_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
};

const Field_t TIM6_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
};

const Field_t TIM6_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: Low counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF Copy */
};

const Field_t TIM6_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM6_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Low Auto-reload value */
};

const Register_t TIM6_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM6_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM6_CR2_fields, 1}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM6_DIER_fields, 2}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM6_SR_fields, 1}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM6_EGR_fields, 1}, /* EGR: event generation register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM6_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM6_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM6_ARR_fields, 1}, /* ARR: auto-reload register */
};

const Field_t CRS_CR_fields[] = {
   { "\x4d\x93\x83\x3c\xb2\x45", 0, 1 },  /* SYNCOKIE: SYNC event OK interrupt    enable */
   { "\x4d\x93\x83\x5c\x14\x8e\x24\x50", 1, 1 },  /* SYNCWARNIE: SYNC warning interrupt   enable */
   { "\x15\x24\x89\x14", 2, 1 },  /* ERRIE: Synchronization or trimming error  interrupt enable */
   { "\x15\x36\x4e\x0c\x91\x40", 3, 1 },  /* ESYNCIE: Expected SYNC interrupt   enable */
   { "\x0c\x53\x80", 5, 1 },  /* CEN: Frequency error counter enable This bit     enables the oscillator clock for the frequency error    counter. When this bit is set, the CRS_CFGR register    is write-protected and cannot be               modified. */
   { "\x05\x55\x0f\x51\x22\x4d\x14\xe0", 6, 1 },  /* AUTOTRIMEN: Automatic trimming enable This bit   enables the automatic hardware adjustment of TRIM    bits according to the measured frequency error   between two SYNC events. If this bit is set, the TRIM               bits are read-only. The TRIM value can be adjusted by               hardware by one or two steps at a time, depending on               the measured frequency error value. Refer to               Section7.3.4: Frequency error evaluation and               automatic trimming for more details. */
   { "\x4d\x74\xd9\x38\x30", 7, 1 },  /* SWSYNC: Generate software SYNC event This bit is               set by software in order to generate a software SYNC               event. It is automatically cleared by               hardware. */
   { "\x51\x22\x4d", 8, 7 },  /* TRIM: HSI48 oscillator smooth trimming These               bits provide a user-programmable trimming value to               the HSI48 oscillator. They can be programmed to               adjust to variations in voltage and temperature that               influence the frequency of the HSI48. The default               value is 32, which corresponds to the middle of the               trimming interval. The trimming step is around 67 kHz               between two consecutive TRIM steps. A higher TRIM               value corresponds to a higher output frequency. When               the AUTOTRIMEN bit is set, this field is controlled               by hardware and is read-only. */
};

const Field_t CRS_CFGR_fields[] = {
   { "\x48\x53\x0f\x04\x40", 0, 16 },  /* RELOAD: Counter reload value RELOAD is the value   to be loaded in the frequency error counter with each   SYNC event. Refer to Section7.3.3: Frequency error  measurement for more details about counter               behavior. */
   { "\x18\x53\x09\x34", 16, 8 },  /* FELIM: Frequency error limit FELIM contains the   value to be used to evaluate the captured frequency error value latched in the FECAP[15:0] bits of the   CRS_ISR register. Refer to Section7.3.4: Frequency               error evaluation and automatic trimming for more               details about FECAP evaluation. */
   { "\x4d\x93\x83\x10\x95\x80", 24, 3 },  /* SYNCDIV: SYNC divider These bits are set and     cleared by software to control the division factor of   the SYNC signal. */
   { "\x4d\x93\x83\x4d\x20\xc0", 28, 2 },  /* SYNCSRC: SYNC signal source selection These bits      are set and cleared by software to select the SYNC  signal source. Note: When using USB LPM (Link Power  Management) and the device is in Sleep mode, the               periodic USB SOF will not be generated by the host.               No SYNC signal will therefore be provided to the CRS               to calibrate the HSI48 on the run. To guarantee the               required clock precision after waking up from Sleep               mode, the LSE or reference clock on the GPIOs should               be used as SYNC signal. */
   { "\x4d\x93\x83\x40\xf3\x00", 31, 1 },  /* SYNCPOL: SYNC polarity selection This bit is set  and cleared by software to select the input polarity   for the SYNC signal source. */
};

const Field_t CRS_ISR_fields[] = {
   { "\x4d\x93\x83\x3c\xb1\x80", 0, 1 },  /* SYNCOKF: SYNC event OK flag This flag is set by  hardware when the measured frequency error is smaller   than FELIM * 3. This means that either no adjustment   of the TRIM value is needed or that an adjustment by               one trimming step is enough to compensate the               frequency error. An interrupt is generated if the               SYNCOKIE bit is set in the CRS_CR register. It is               cleared by software by setting the SYNCOKC bit in the               CRS_ICR register. */
   { "\x4d\x93\x83\x5c\x14\x8e\x18", 1, 1 },  /* SYNCWARNF: SYNC warning flag This flag is set by  hardware when the measured frequency error is greater than or equal to FELIM * 3, but smaller than FELIM *   128. This means that to compensate the frequency               error, the TRIM value must be adjusted by two steps               or more. An interrupt is generated if the SYNCWARNIE               bit is set in the CRS_CR register. It is cleared by               software by setting the SYNCWARNC bit in the CRS_ICR               register. */
   { "\x15\x24\x86", 2, 1 },  /* ERRF: Error flag This flag is set by hardware     in case of any synchronization or trimming error. It    is the logical OR of the TRIMOVF, SYNCMISS and SYNCERR bits. An interrupt is generated if the ERRIE               bit is set in the CRS_CR register. It is cleared by               software in reaction to setting the ERRC bit in the               CRS_ICR register, which clears the TRIMOVF, SYNCMISS               and SYNCERR bits. */
   { "\x15\x36\x4e\x0c\x60", 3, 1 },  /* ESYNCF: Expected SYNC flag This flag is set by    hardware when the frequency error counter reached a    zero value. An interrupt is generated if the ESYNCIE bit is set in the CRS_CR register. It is cleared by               software by setting the ESYNCC bit in the CRS_ICR               register. */
   { "\x4d\x93\x83\x15\x24\x80", 8, 1 },  /* SYNCERR: SYNC error This flag is set by hardware   when the SYNC pulse arrives before the ESYNC event    and the measured frequency error is greater than or   equal to FELIM * 128. This means that the frequency               error is too big (internal frequency too low) to be               compensated by adjusting the TRIM value, and that               some other action should be taken. An interrupt is               generated if the ERRIE bit is set in the CRS_CR               register. It is cleared by software by setting the               ERRC bit in the CRS_ICR register. */
   { "\x4d\x93\x83\x34\x94\xd3", 9, 1 },  /* SYNCMISS: SYNC missed This flag is set by hardware  when the frequency error counter reached value FELIM * 128 and no SYNC was detected, meaning either that a  SYNC pulse was missed or that the frequency error is               too big (internal frequency too high) to be               compensated by adjusting the TRIM value, and that               some other action should be taken. At this point, the               frequency error counter is stopped (waiting for a               next SYNC) and an interrupt is generated if the ERRIE               bit is set in the CRS_CR register. It is cleared by               software by setting the ERRC bit in the CRS_ICR               register. */
   { "\x51\x22\x4d\x3d\x61\x80", 10, 1 },  /* TRIMOVF: Trimming overflow or underflow This flag is set by hardware when the automatic trimming tries to over- or under-flow the TRIM value. An interrupt  is generated if the ERRIE bit is set in the CRS_CR               register. It is cleared by software by setting the               ERRC bit in the CRS_ICR register. */
   { "\x18\x51\x09\x48", 15, 1 },  /* FEDIR: Frequency error direction FEDIR is the  counting direction of the frequency error counter   latched in the time of the last SYNC event. It shows  whether the actual frequency is below or above the               target. */
   { "\x18\x50\xc1\x40", 16, 16 },  /* FECAP: Frequency error capture FECAP is the frequency error counter value latched in the time ofthe last SYNC event. Refer to Section7.3.4: Frequency error evaluation and automatic trimming for more               details about FECAP usage. */
};

const Field_t CRS_ICR_fields[] = {
   { "\x4d\x93\x83\x3c\xb0\xc0", 0, 1 },  /* SYNCOKC: SYNC event OK clear flag Writing 1 to this bit clears the SYNCOKF flag in the CRS_ISR  register. */
   { "\x4d\x93\x83\x5c\x14\x8e\x0c", 1, 1 },  /* SYNCWARNC: SYNC warning clear flag Writing 1 to this bit clears the SYNCWARNF flag in the CRS_ISR  register. */
   { "\x15\x24\x83", 2, 1 },  /* ERRC: Error clear flag Writing 1 to this bit   clears TRIMOVF, SYNCMISS and SYNCERR bits and  consequently also the ERRF flag in the CRS_ISR  register. */
   { "\x15\x36\x4e\x0c\x30", 3, 1 },  /* ESYNCC: Expected SYNC clear flag Writing 1 to this bit clears the ESYNCF flag in the CRS_ISR   register. */
};

const Register_t CRS_registers[] = {
   {"\x0d\x20", 0, 32, 0, CRS_CR_fields, 8}, /* CR: CRS control register */
   {"\x0c\x61\xd2", 4, 32, 0, CRS_CFGR_fields, 5}, /* CFGR: This register can be written only when the           frequency error counter is disabled (CEN bit is cleared           in CRS_CR). When the counter is enabled, this register is           write-protected. */
   {"\x25\x34\x80", 8, 32, 0, CRS_ISR_fields, 9}, /* ISR: CRS interrupt and status    register */
   {"\x24\x34\x80", 12, 32, 0, CRS_ICR_fields, 4}, /* ICR: CRS interrupt flag clear register */
};

const Field_t TAMP_CR1_fields[] = {
   { "\x50\x13\x50\x70\x50", 0, 1 },  /* TAMP1E: TAMP1E */
   { "\x50\x13\x50\x74\x50", 1, 1 },  /* TAMP2E: TAMP2E */
   { "\x50\x13\x50\x78\x50", 2, 1 },  /* TAMP3E: TAMP2E */
   { "\x25\x40\x4d\x41\xe1\x40", 18, 1 },  /* ITAMP3E: ITAMP3E */
   { "\x25\x40\x4d\x41\xf1\x40", 19, 1 },  /* ITAMP4E: ITAMP4E */
   { "\x25\x40\x4d\x42\x01\x40", 20, 1 },  /* ITAMP5E: ITAMP5E */
   { "\x25\x40\x4d\x42\x11\x40", 21, 1 },  /* ITAMP6E: ITAMP6E */
};

const Field_t TAMP_CR2_fields[] = {
   { "\x50\x13\x50\x70\xe3\xc5\x48", 0, 1 },  /* TAMP1NOER: TAMP1NOER */
   { "\x50\x13\x50\x74\xe3\xc5\x48", 1, 1 },  /* TAMP2NOER: TAMP2NOER */
   { "\x50\x13\x50\x78\xe3\xc5\x48", 2, 1 },  /* TAMP3NOER: TAMP3NOER */
   { "\x50\x13\x50\x70\xd4\xcb", 16, 1 },  /* TAMP1MSK: TAMP1MSK */
   { "\x50\x13\x50\x74\xd4\xcb", 17, 1 },  /* TAMP2MSK: TAMP2MSK */
   { "\x50\x13\x50\x78\xd4\xcb", 18, 1 },  /* TAMP3MSK: TAMP3MSK */
   { "\x50\x13\x50\x71\x44\x87", 24, 1 },  /* TAMP1TRG: TAMP1TRG */
   { "\x50\x13\x50\x75\x44\x87", 25, 1 },  /* TAMP2TRG: TAMP2TRG */
   { "\x50\x13\x50\x79\x44\x87", 26, 1 },  /* TAMP3TRG: TAMP3TRG */
};

const Field_t TAMP_FLTCR_fields[] = {
   { "\x50\x13\x50\x19\x21\x51", 0, 3 },  /* TAMPFREQ: TAMPFREQ */
   { "\x50\x13\x50\x18\xc5\x00", 3, 2 },  /* TAMPFLT: TAMPFLT */
   { "\x50\x13\x50\x41\x20\xc8", 5, 2 },  /* TAMPPRCH: TAMPPRCH */
   { "\x50\x13\x50\x41\x51\x09\x4c", 7, 1 },  /* TAMPPUDIS: TAMPPUDIS */
};

const Field_t TAMP_IER_fields[] = {
   { "\x50\x13\x50\x70\x91\x40", 0, 1 },  /* TAMP1IE: TAMP1IE */
   { "\x50\x13\x50\x74\x91\x40", 1, 1 },  /* TAMP2IE: TAMP2IE */
   { "\x50\x13\x50\x78\x91\x40", 2, 1 },  /* TAMP3IE: TAMP3IE */
   { "\x25\x40\x4d\x41\xe2\x45", 18, 1 },  /* ITAMP3IE: ITAMP3IE */
   { "\x25\x40\x4d\x41\xf2\x45", 19, 1 },  /* ITAMP4IE: ITAMP4IE */
   { "\x25\x40\x4d\x42\x02\x45", 20, 1 },  /* ITAMP5IE: ITAMP5IE */
   { "\x25\x40\x4d\x42\x12\x45", 21, 1 },  /* ITAMP6IE: ITAMP6IE */
};

const Field_t TAMP_SR_fields[] = {
   { "\x50\x13\x50\x70\x60", 0, 1 },  /* TAMP1F: TAMP1F */
   { "\x50\x13\x50\x74\x60", 1, 1 },  /* TAMP2F: TAMP2F */
   { "\x50\x13\x50\x78\x60", 2, 1 },  /* TAMP3F: TAMP3F */
   { "\x25\x40\x4d\x41\xe1\x80", 18, 1 },  /* ITAMP3F: ITAMP3F */
   { "\x25\x40\x4d\x41\xf1\x80", 19, 1 },  /* ITAMP4F: ITAMP4F */
   { "\x25\x40\x4d\x42\x01\x80", 20, 1 },  /* ITAMP5F: ITAMP5F */
   { "\x25\x40\x4d\x42\x11\x80", 21, 1 },  /* ITAMP6F: ITAMP6F */
};

const Field_t TAMP_MISR_fields[] = {
   { "\x50\x13\x50\x70\xd1\x80", 0, 1 },  /* TAMP1MF: TAMP1MF: */
   { "\x50\x13\x50\x74\xd1\x80", 1, 1 },  /* TAMP2MF: TAMP2MF */
   { "\x50\x13\x50\x78\xd1\x80", 2, 1 },  /* TAMP3MF: TAMP3MF */
   { "\x25\x40\x4d\x41\xe3\x46", 18, 1 },  /* ITAMP3MF: ITAMP3MF */
   { "\x25\x40\x4d\x41\xf3\x46", 19, 1 },  /* ITAMP4MF: ITAMP4MF */
   { "\x25\x40\x4d\x42\x03\x46", 20, 1 },  /* ITAMP5MF: ITAMP5MF */
   { "\x25\x40\x4d\x42\x13\x46", 21, 1 },  /* ITAMP6MF: ITAMP6MF */
};

const Field_t TAMP_SCR_fields[] = {
   { "\x0d\x40\x4d\x41\xc1\x80", 0, 1 },  /* CTAMP1F: CTAMP1F */
   { "\x0d\x40\x4d\x41\xd1\x80", 1, 1 },  /* CTAMP2F: CTAMP2F */
   { "\x0d\x40\x4d\x41\xe1\x80", 2, 1 },  /* CTAMP3F: CTAMP3F */
   { "\x0c\x95\x01\x35\x07\x86", 18, 1 },  /* CITAMP3F: CITAMP3F */
   { "\x0c\x95\x01\x35\x07\xc6", 19, 1 },  /* CITAMP4F: CITAMP4F */
   { "\x0c\x95\x01\x35\x08\x06", 20, 1 },  /* CITAMP5F: CITAMP5F */
   { "\x0c\x95\x01\x35\x08\x46", 21, 1 },  /* CITAMP6F: CITAMP6F */
};

const Field_t TAMP_BKP0R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP1R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP2R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP3R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP4R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP5R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP6R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP7R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP8R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP9R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP10R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP11R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP12R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP13R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP14R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP15R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP16R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP17R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP18R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP19R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP20R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP21R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP22R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP23R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP24R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP25R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP26R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP27R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP28R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP29R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP30R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t TAMP_BKP31R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Register_t TAMP_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TAMP_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TAMP_CR2_fields, 9}, /* CR2: control register 2 */
   {"\x18\xc5\x03\x48", 12, 32, 0, TAMP_FLTCR_fields, 4}, /* FLTCR: TAMP filter control register */
   {"\x24\x54\x80", 44, 32, 0, TAMP_IER_fields, 7}, /* IER: TAMP interrupt enable register */
   {"\x4d\x20", 48, 32, 0, TAMP_SR_fields, 7}, /* SR: TAMP status register */
   {"\x34\x94\xd2", 52, 32, 0, TAMP_MISR_fields, 7}, /* MISR: TAMP masked interrupt status           register */
   {"\x4c\x34\x80", 60, 32, 0, TAMP_SCR_fields, 7}, /* SCR: TAMP status clear register */
   {"\x08\xb4\x1b\x48", 256, 32, 0, TAMP_BKP0R_fields, 1}, /* BKP0R: TAMP backup register */
   {"\x08\xb4\x1c\x48", 260, 32, 0, TAMP_BKP1R_fields, 1}, /* BKP1R: TAMP backup register */
   {"\x08\xb4\x1d\x48", 264, 32, 0, TAMP_BKP2R_fields, 1}, /* BKP2R: TAMP backup register */
   {"\x08\xb4\x1e\x48", 268, 32, 0, TAMP_BKP3R_fields, 1}, /* BKP3R: TAMP backup register */
   {"\x08\xb4\x1f\x48", 272, 32, 0, TAMP_BKP4R_fields, 1}, /* BKP4R: TAMP backup register */
   {"\x08\xb4\x20\x48", 276, 32, 0, TAMP_BKP5R_fields, 1}, /* BKP5R: TAMP backup register */
   {"\x08\xb4\x21\x48", 280, 32, 0, TAMP_BKP6R_fields, 1}, /* BKP6R: TAMP backup register */
   {"\x08\xb4\x22\x48", 284, 32, 0, TAMP_BKP7R_fields, 1}, /* BKP7R: TAMP backup register */
   {"\x08\xb4\x23\x48", 288, 32, 0, TAMP_BKP8R_fields, 1}, /* BKP8R: TAMP backup register */
   {"\x08\xb4\x24\x48", 292, 32, 0, TAMP_BKP9R_fields, 1}, /* BKP9R: TAMP backup register */
   {"\x08\xb4\x1c\x6d\x20", 296, 32, 0, TAMP_BKP10R_fields, 1}, /* BKP10R: TAMP backup register */
   {"\x08\xb4\x1c\x71\x20", 300, 32, 0, TAMP_BKP11R_fields, 1}, /* BKP11R: TAMP backup register */
   {"\x08\xb4\x1c\x75\x20", 304, 32, 0, TAMP_BKP12R_fields, 1}, /* BKP12R: TAMP backup register */
   {"\x08\xb4\x1c\x79\x20", 308, 32, 0, TAMP_BKP13R_fields, 1}, /* BKP13R: TAMP backup register */
   {"\x08\xb4\x1c\x7d\x20", 312, 32, 0, TAMP_BKP14R_fields, 1}, /* BKP14R: TAMP backup register */
   {"\x08\xb4\x1c\x81\x20", 316, 32, 0, TAMP_BKP15R_fields, 1}, /* BKP15R: TAMP backup register */
   {"\x08\xb4\x1c\x85\x20", 320, 32, 0, TAMP_BKP16R_fields, 1}, /* BKP16R: TAMP backup register */
   {"\x08\xb4\x1c\x89\x20", 324, 32, 0, TAMP_BKP17R_fields, 1}, /* BKP17R: TAMP backup register */
   {"\x08\xb4\x1c\x8d\x20", 328, 32, 0, TAMP_BKP18R_fields, 1}, /* BKP18R: TAMP backup register */
   {"\x08\xb4\x1c\x91\x20", 332, 32, 0, TAMP_BKP19R_fields, 1}, /* BKP19R: TAMP backup register */
   {"\x08\xb4\x1d\x6d\x20", 336, 32, 0, TAMP_BKP20R_fields, 1}, /* BKP20R: TAMP backup register */
   {"\x08\xb4\x1d\x71\x20", 340, 32, 0, TAMP_BKP21R_fields, 1}, /* BKP21R: TAMP backup register */
   {"\x08\xb4\x1d\x75\x20", 344, 32, 0, TAMP_BKP22R_fields, 1}, /* BKP22R: TAMP backup register */
   {"\x08\xb4\x1d\x79\x20", 348, 32, 0, TAMP_BKP23R_fields, 1}, /* BKP23R: TAMP backup register */
   {"\x08\xb4\x1d\x7d\x20", 352, 32, 0, TAMP_BKP24R_fields, 1}, /* BKP24R: TAMP backup register */
   {"\x08\xb4\x1d\x81\x20", 356, 32, 0, TAMP_BKP25R_fields, 1}, /* BKP25R: TAMP backup register */
   {"\x08\xb4\x1d\x85\x20", 360, 32, 0, TAMP_BKP26R_fields, 1}, /* BKP26R: TAMP backup register */
   {"\x08\xb4\x1d\x89\x20", 364, 32, 0, TAMP_BKP27R_fields, 1}, /* BKP27R: TAMP backup register */
   {"\x08\xb4\x1d\x8d\x20", 368, 32, 0, TAMP_BKP28R_fields, 1}, /* BKP28R: TAMP backup register */
   {"\x08\xb4\x1d\x91\x20", 372, 32, 0, TAMP_BKP29R_fields, 1}, /* BKP29R: TAMP backup register */
   {"\x08\xb4\x1e\x6d\x20", 376, 32, 0, TAMP_BKP30R_fields, 1}, /* BKP30R: TAMP backup register */
   {"\x08\xb4\x1e\x71\x20", 380, 32, 0, TAMP_BKP31R_fields, 1}, /* BKP31R: TAMP backup register */
};

const Field_t RTC_TR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
};

const Field_t RTC_DR_fields[] = {
   { "\x11\x50", 0, 4 },  /* DU: Date units in BCD format */
   { "\x11\x40", 4, 2 },  /* DT: Date tens in BCD format */
   { "\x35\x50", 8, 4 },  /* MU: Month units in BCD format */
   { "\x35\x40", 12, 1 },  /* MT: Month tens in BCD format */
   { "\x5c\x45\x40", 13, 3 },  /* WDU: Week day units */
   { "\x65\x50", 16, 4 },  /* YU: Year units in BCD format */
   { "\x65\x40", 20, 4 },  /* YT: Year tens in BCD format */
};

const Field_t RTC_SSR_fields[] = {
   { "\x4d\x30", 0, 16 },  /* SS: Sub second value */
};

const Field_t RTC_ICSR_fields[] = {
   { "\x04\xc4\x81\x5c\x60", 0, 1 },  /* ALRAWF: Alarm A write flag */
   { "\x04\xc4\x82\x5c\x60", 1, 1 },  /* ALRBWF: Alarm B write flag */
   { "\x5d\x55\x17\x18", 2, 1 },  /* WUTWF: Wakeup timer write flag */
   { "\x4c\x84\x06", 3, 1 },  /* SHPF: Shift operation pending */
   { "\x24\xe2\x54\x4c", 4, 1 },  /* INITS: Initialization status flag */
   { "\x49\x31\x80", 5, 1 },  /* RSF: Registers synchronization               flag */
   { "\x24\xe2\x54\x18", 6, 1 },  /* INITF: Initialization flag */
   { "\x24\xe2\x54", 7, 1 },  /* INIT: Initialization mode */
   { "\x48\x50\xc1\x31\x01\x80", 16, 1 },  /* RECALPF: Recalibration pending Flag */
};

const Field_t RTC_PRER_fields[] = {
   { "\x41\x21\x44\x25\x69\x53", 0, 15 },  /* PREDIV_S: Synchronous prescaler               factor */
   { "\x41\x21\x44\x25\x69\x41", 16, 7 },  /* PREDIV_A: Asynchronous prescaler               factor */
};

const Field_t RTC_WUTR_fields[] = {
   { "\x5d\x55\x00", 0, 16 },  /* WUT: Wakeup auto-reload value               bits */
};

const Field_t RTC_CR_fields[] = {
   { "\x5c\x32\xd3\x14\xc0", 0, 3 },  /* WCKSEL: Wakeup clock selection */
   { "\x51\x31\x44\x1c\x50", 3, 1 },  /* TSEDGE: Time-stamp event active               edge */
   { "\x48\x51\x83\x2c\xf3\x80", 4, 1 },  /* REFCKON: Reference clock detection enable (50 or               60 Hz) */
   { "\x09\x94\x13\x20\x11\x00", 5, 1 },  /* BYPSHAD: Bypass the shadow               registers */
   { "\x18\xd5\x00", 6, 1 },  /* FMT: Hour format */
   { "\x04\xc4\x81\x14", 8, 1 },  /* ALRAE: Alarm A enable */
   { "\x04\xc4\x82\x14", 9, 1 },  /* ALRBE: Alarm B enable */
   { "\x5d\x55\x05", 10, 1 },  /* WUTE: Wakeup timer enable */
   { "\x51\x31\x40", 11, 1 },  /* TSE: Time stamp enable */
   { "\x04\xc4\x81\x24\x50", 12, 1 },  /* ALRAIE: Alarm A interrupt enable */
   { "\x04\xc4\x82\x24\x50", 13, 1 },  /* ALRBIE: Alarm B interrupt enable */
   { "\x5d\x55\x09\x14", 14, 1 },  /* WUTIE: Wakeup timer interrupt               enable */
   { "\x51\x32\x45", 15, 1 },  /* TSIE: Time-stamp interrupt               enable */
   { "\x04\x41\x1c\x20", 16, 1 },  /* ADD1H: Add 1 hour (summer time               change) */
   { "\x4d\x50\x9c\x20", 17, 1 },  /* SUB1H: Subtract 1 hour (winter time               change) */
   { "\x08\xb4\x00", 18, 1 },  /* BKP: Backup */
   { "\x0c\xf4\xc5\x30", 19, 1 },  /* COSEL: Calibration output               selection */
   { "\x40\xf3\x00", 20, 1 },  /* POL: Output polarity */
   { "\x3d\x31\x4c", 21, 2 },  /* OSEL: Output selection */
   { "\x0c\xf1\x40", 23, 1 },  /* COE: Calibration output enable */
   { "\x25\x44\xc5", 24, 1 },  /* ITSE: timestamp on internal event               enable */
   { "\x50\x13\x50\x51\x30", 25, 1 },  /* TAMPTS: TAMPTS */
   { "\x50\x13\x50\x3c\x50", 26, 1 },  /* TAMPOE: TAMPOE */
   { "\x50\x13\x50\x04\xc4\x8d\x95\x05\x40", 29, 1 },  /* TAMPALRM_PU: TAMPALRM_PU */
   { "\x50\x13\x50\x04\xc4\x8d\x95\x46\x50\x14", 30, 1 },  /* TAMPALRM_TYPE: TAMPALRM_TYPE */
   { "\x3d\x55\x1d\x14\xe0", 31, 1 },  /* OUT2EN: OUT2EN */
};

const Field_t RTC_WPR_fields[] = {
   { "\x2c\x56\x40", 0, 8 },  /* KEY: Write protection key */
};

const Field_t RTC_CALR_fields[] = {
   { "\x0c\x13\x0d", 0, 9 },  /* CALM: Calibration minus */
   { "\x0c\x13\x17\x72\x10", 13, 1 },  /* CALW16: Use a 16-second calibration cycle               period */
   { "\x0c\x13\x17\x8c", 14, 1 },  /* CALW8: Use an 8-second calibration cycle               period */
   { "\x0c\x13\x10", 15, 1 },  /* CALP: Increase frequency of RTC by 488.5               ppm */
};

const Field_t RTC_SHIFTR_fields[] = {
   { "\x4d\x50\x86\x4c", 0, 15 },  /* SUBFS: Subtract a fraction of a               second */
   { "\x04\x41\x1c\x4c", 31, 1 },  /* ADD1S: Add one second */
};

const Field_t RTC_TSTR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
};

const Field_t RTC_TSDR_fields[] = {
   { "\x11\x50", 0, 4 },  /* DU: Date units in BCD format */
   { "\x11\x40", 4, 2 },  /* DT: Date tens in BCD format */
   { "\x35\x50", 8, 4 },  /* MU: Month units in BCD format */
   { "\x35\x40", 12, 1 },  /* MT: Month tens in BCD format */
   { "\x5c\x45\x40", 13, 3 },  /* WDU: Week day units */
};

const Field_t RTC_TSSSR_fields[] = {
   { "\x4d\x30", 0, 16 },  /* SS: Sub second value */
};

const Field_t RTC_ALRMAR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x35\x32\xdc", 7, 1 },  /* MSK1: Alarm A seconds mask */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x35\x32\xdd", 15, 1 },  /* MSK2: Alarm A minutes mask */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
   { "\x35\x32\xde", 23, 1 },  /* MSK3: Alarm A hours mask */
   { "\x11\x50", 24, 4 },  /* DU: Date units or day in BCD               format */
   { "\x11\x40", 28, 2 },  /* DT: Date tens in BCD format */
   { "\x5c\x44\xc5\x30", 30, 1 },  /* WDSEL: Week day selection */
   { "\x35\x32\xdf", 31, 1 },  /* MSK4: Alarm A date mask */
};

const Field_t RTC_ALRMASSR_fields[] = {
   { "\x4d\x30", 0, 15 },  /* SS: Sub seconds value */
   { "\x34\x14\xcb\x4d\x30", 24, 4 },  /* MASKSS: Mask the most-significant bits starting               at this bit */
};

const Field_t RTC_ALRMBR_fields[] = {
   { "\x4d\x50", 0, 4 },  /* SU: Second units in BCD format */
   { "\x4d\x40", 4, 3 },  /* ST: Second tens in BCD format */
   { "\x35\x32\xdc", 7, 1 },  /* MSK1: Alarm B seconds mask */
   { "\x34\xe5\x40", 8, 4 },  /* MNU: Minute units in BCD format */
   { "\x34\xe5\x00", 12, 3 },  /* MNT: Minute tens in BCD format */
   { "\x35\x32\xdd", 15, 1 },  /* MSK2: Alarm B minutes mask */
   { "\x21\x50", 16, 4 },  /* HU: Hour units in BCD format */
   { "\x21\x40", 20, 2 },  /* HT: Hour tens in BCD format */
   { "\x40\xd0", 22, 1 },  /* PM: AM/PM notation */
   { "\x35\x32\xde", 23, 1 },  /* MSK3: Alarm B hours mask */
   { "\x11\x50", 24, 4 },  /* DU: Date units or day in BCD               format */
   { "\x11\x40", 28, 2 },  /* DT: Date tens in BCD format */
   { "\x5c\x44\xc5\x30", 30, 1 },  /* WDSEL: Week day selection */
   { "\x35\x32\xdf", 31, 1 },  /* MSK4: Alarm B date mask */
};

const Field_t RTC_ALRMBSSR_fields[] = {
   { "\x4d\x30", 0, 15 },  /* SS: Sub seconds value */
   { "\x34\x14\xcb\x4d\x30", 24, 4 },  /* MASKSS: Mask the most-significant bits starting               at this bit */
};

const Field_t RTC_SR_fields[] = {
   { "\x04\xc4\x81\x18", 0, 1 },  /* ALRAF: ALRAF */
   { "\x04\xc4\x82\x18", 1, 1 },  /* ALRBF: ALRBF */
   { "\x5d\x55\x06", 2, 1 },  /* WUTF: WUTF */
   { "\x51\x31\x80", 3, 1 },  /* TSF: TSF */
   { "\x51\x33\xd6\x18", 4, 1 },  /* TSOVF: TSOVF */
   { "\x25\x44\xc6", 5, 1 },  /* ITSF: ITSF */
};

const Field_t RTC_MISR_fields[] = {
   { "\x04\xc4\x81\x34\x60", 0, 1 },  /* ALRAMF: ALRAMF */
   { "\x04\xc4\x82\x34\x60", 1, 1 },  /* ALRBMF: ALRBMF */
   { "\x5d\x55\x0d\x18", 2, 1 },  /* WUTMF: WUTMF */
   { "\x51\x33\x46", 3, 1 },  /* TSMF: TSMF */
   { "\x51\x33\xd6\x34\x60", 4, 1 },  /* TSOVMF: TSOVMF */
   { "\x25\x44\xcd\x18", 5, 1 },  /* ITSMF: ITSMF */
};

const Field_t RTC_SCR_fields[] = {
   { "\x0c\x13\x12\x04\x60", 0, 1 },  /* CALRAF: CALRAF */
   { "\x0c\x13\x12\x08\x60", 1, 1 },  /* CALRBF: CALRBF */
   { "\x0d\x75\x54\x18", 2, 1 },  /* CWUTF: CWUTF */
   { "\x0d\x44\xc6", 3, 1 },  /* CTSF: CTSF */
   { "\x0d\x44\xcf\x58\x60", 4, 1 },  /* CTSOVF: CTSOVF */
   { "\x0c\x95\x13\x18", 5, 1 },  /* CITSF: CITSF */
};

const Register_t RTC_registers[] = {
   {"\x51\x20", 0, 32, 0, RTC_TR_fields, 7}, /* TR: time register */
   {"\x11\x20", 4, 32, 0, RTC_DR_fields, 7}, /* DR: date register */
   {"\x4d\x34\x80", 8, 32, 0, RTC_SSR_fields, 1}, /* SSR: sub second register */
   {"\x24\x34\xd2", 12, 32, 0, RTC_ICSR_fields, 9}, /* ICSR: initialization and status           register */
   {"\x41\x21\x52", 16, 32, 0, RTC_PRER_fields, 2}, /* PRER: prescaler register */
   {"\x5d\x55\x12", 20, 32, 0, RTC_WUTR_fields, 1}, /* WUTR: wakeup timer register */
   {"\x0d\x20", 24, 32, 0, RTC_CR_fields, 26}, /* CR: control register */
   {"\x5d\x04\x80", 36, 32, 0, RTC_WPR_fields, 1}, /* WPR: write protection register */
   {"\x0c\x13\x12", 40, 32, 0, RTC_CALR_fields, 4}, /* CALR: calibration register */
   {"\x4c\x82\x46\x51\x20", 44, 32, 0, RTC_SHIFTR_fields, 2}, /* SHIFTR: shift control register */
   {"\x51\x35\x12", 48, 32, 0, RTC_TSTR_fields, 7}, /* TSTR: time stamp time register */
   {"\x51\x31\x12", 52, 32, 0, RTC_TSDR_fields, 5}, /* TSDR: time stamp date register */
   {"\x51\x34\xd3\x48", 56, 32, 0, RTC_TSSSR_fields, 1}, /* TSSSR: timestamp sub second register */
   {"\x04\xc4\x8d\x05\x20", 64, 32, 0, RTC_ALRMAR_fields, 14}, /* ALRMAR: alarm A register */
   {"\x04\xc4\x8d\x05\x34\xd2", 68, 32, 0, RTC_ALRMASSR_fields, 2}, /* ALRMASSR: alarm A sub second register */
   {"\x04\xc4\x8d\x09\x20", 72, 32, 0, RTC_ALRMBR_fields, 14}, /* ALRMBR: alarm B register */
   {"\x04\xc4\x8d\x09\x34\xd2", 76, 32, 0, RTC_ALRMBSSR_fields, 2}, /* ALRMBSSR: alarm B sub second register */
   {"\x4d\x20", 80, 32, 0, RTC_SR_fields, 6}, /* SR: status register */
   {"\x34\x94\xd2", 84, 32, 0, RTC_MISR_fields, 6}, /* MISR: status register */
   {"\x4c\x34\x80", 92, 32, 0, RTC_SCR_fields, 6}, /* SCR: status register */
};

const Field_t WWDG_KR_fields[] = {
   { "\x2c\x56\x40", 0, 16 },  /* KEY: Key value (write only, read               0x0000) */
};

const Field_t WWDG_PR_fields[] = {
   { "\x41\x20", 0, 3 },  /* PR: Prescaler divider */
};

const Field_t WWDG_RLR_fields[] = {
   { "\x48\xc0", 0, 12 },  /* RL: Watchdog counter reload               value */
};

const Field_t WWDG_SR_fields[] = {
   { "\x41\x65\x40", 0, 1 },  /* PVU: Watchdog prescaler value               update */
   { "\x49\x65\x40", 1, 1 },  /* RVU: Watchdog counter reload value               update */
   { "\x5d\x65\x40", 2, 1 },  /* WVU: Watchdog counter window value               update */
};

const Field_t WWDG_WINR_fields[] = {
   { "\x5c\x93\x80", 0, 12 },  /* WIN: Watchdog counter window               value */
};

const Register_t WWDG_registers[] = {
   {"\x2d\x20", 0, 32, 0, WWDG_KR_fields, 1}, /* KR: Key register */
   {"\x41\x20", 4, 32, 0, WWDG_PR_fields, 1}, /* PR: Prescaler register */
   {"\x48\xc4\x80", 8, 32, 0, WWDG_RLR_fields, 1}, /* RLR: Reload register */
   {"\x4d\x20", 12, 32, 0, WWDG_SR_fields, 3}, /* SR: Status register */
   {"\x5c\x93\x92", 16, 32, 0, WWDG_WINR_fields, 1}, /* WINR: Window register */
};

const Field_t IWDG_CR_fields[] = {
   { "\x50", 0, 7 },  /* T: 7-bit counter (MSB to LSB) */
   { "\x5c\x41\xc1", 7, 1 },  /* WDGA: Activation bit */
};

const Field_t IWDG_CFR_fields[] = {
   { "\x5c", 0, 7 },  /* W: 7-bit window value */
   { "\x15\x72\x40", 9, 1 },  /* EWI: Early wakeup interrupt */
   { "\x5c\x41\xd4\x08", 11, 3 },  /* WDGTB: Timer base */
};

const Field_t IWDG_SR_fields[] = {
   { "\x15\x72\x46", 0, 1 },  /* EWIF: Early wakeup interrupt               flag */
};

const Register_t IWDG_registers[] = {
   {"\x0d\x20", 0, 32, 0, IWDG_CR_fields, 2}, /* CR: Control register */
   {"\x0c\x64\x80", 4, 32, 0, IWDG_CFR_fields, 3}, /* CFR: Configuration register */
   {"\x4d\x20", 8, 32, 0, IWDG_SR_fields, 1}, /* SR: Status register */
};

const Field_t UART4_CR1_fields[] = {
   { "\x54\x50", 0, 1 },  /* UE: USART enable */
   { "\x54\x54\xcd", 1, 1 },  /* UESM: USART enable in Stop mode */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Receiver wakeup method */
   { "\x35\xb0", 12, 1 },  /* M0: Word length */
   { "\x34\xd1\x40", 13, 1 },  /* MME: Mute mode enable */
   { "\x0c\xd2\x45", 14, 1 },  /* CMIE: Character match interrupt               enable */
   { "\x3d\x61\x52\x8c", 15, 1 },  /* OVER8: Oversampling mode */
   { "\x10\x51\x14\x6c", 16, 1 },  /* DEDT0: DEDT0 */
   { "\x10\x51\x14\x70", 17, 1 },  /* DEDT1: DEDT1 */
   { "\x10\x51\x14\x74", 18, 1 },  /* DEDT2: DEDT2 */
   { "\x10\x51\x14\x78", 19, 1 },  /* DEDT3: DEDT3 */
   { "\x10\x51\x14\x7c", 20, 1 },  /* DEDT4: Driver Enable de-assertion               time */
   { "\x10\x50\x54\x6c", 21, 1 },  /* DEAT0: DEAT0 */
   { "\x10\x50\x54\x70", 22, 1 },  /* DEAT1: DEAT1 */
   { "\x10\x50\x54\x74", 23, 1 },  /* DEAT2: DEAT2 */
   { "\x10\x50\x54\x78", 24, 1 },  /* DEAT3: DEAT3 */
   { "\x10\x50\x54\x7c", 25, 1 },  /* DEAT4: Driver Enable assertion               time */
   { "\x49\x43\xc9\x14", 26, 1 },  /* RTOIE: Receiver timeout interrupt               enable */
   { "\x14\xf0\x89\x14", 27, 1 },  /* EOBIE: End of Block interrupt               enable */
   { "\x35\xc0", 28, 1 },  /* M1: M1 */
   { "\x18\x91\x8f\x14\xe0", 29, 1 },  /* FIFOEN: FIFOEN */
   { "\x51\x81\x85\x24\x50", 30, 1 },  /* TXFEIE: TXFEIE */
   { "\x49\x81\x86\x24\x50", 31, 1 },  /* RXFFIE: RXFFIE */
};

const Field_t UART4_CR2_fields[] = {
   { "\x4c\xc5\x85\x38", 0, 1 },  /* SLVEN: SLVEN */
   { "\x10\x94\xe5\x39\x34\xc0", 3, 1 },  /* DIS_NSS: DIS_NSS */
   { "\x04\x41\x0d\x88", 4, 1 },  /* ADDM7: 7-bit Address Detection/4-bit Address               Detection */
   { "\x30\x21\x0c", 5, 1 },  /* LBDL: LIN break detection length */
   { "\x30\x21\x09\x14", 6, 1 },  /* LBDIE: LIN break detection interrupt               enable */
   { "\x30\x20\xcc", 8, 1 },  /* LBCL: Last bit clock pulse */
   { "\x0d\x02\x01", 9, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 10, 1 },  /* CPOL: Clock polarity */
   { "\x0c\xc2\xc5\x38", 11, 1 },  /* CLKEN: Clock enable */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x30\x93\x85\x38", 14, 1 },  /* LINEN: LIN mode enable */
   { "\x4d\x70\x50", 15, 1 },  /* SWAP: Swap TX/RX pins */
   { "\x49\x82\x4e\x58", 16, 1 },  /* RXINV: RX pin active level               inversion */
   { "\x51\x82\x4e\x58", 17, 1 },  /* TXINV: TX pin active level               inversion */
   { "\x50\x12\x4e\x58", 18, 1 },  /* TAINV: Binary data inversion */
   { "\x35\x30\x86\x25\x24\xd4", 19, 1 },  /* MSBFIRST: Most significant bit first */
   { "\x04\x24\x85\x38", 20, 1 },  /* ABREN: Auto baud rate enable */
   { "\x04\x24\x8d\x3c\x46\xc0", 21, 1 },  /* ABRMOD0: ABRMOD0 */
   { "\x04\x24\x8d\x3c\x47\x00", 22, 1 },  /* ABRMOD1: Auto baud rate mode */
   { "\x49\x43\xc5\x38", 23, 1 },  /* RTOEN: Receiver timeout enable */
   { "\x04\x41\x1b\x95\xe0", 24, 4 },  /* ADD0_3: Address of the USART node */
   { "\x04\x41\x1f\x96\x20", 28, 4 },  /* ADD4_7: Address of the USART node */
};

const Field_t UART4_CR3_fields[] = {
   { "\x14\x91\x40", 0, 1 },  /* EIE: Error interrupt enable */
   { "\x25\x21\x4e", 1, 1 },  /* IREN: Ir mode enable */
   { "\x25\x23\x10", 2, 1 },  /* IRLP: Ir low-power */
   { "\x20\x44\xc5\x30", 3, 1 },  /* HDSEL: Half-duplex selection */
   { "\x38\x10\xcb", 4, 1 },  /* NACK: Smartcard NACK enable */
   { "\x4c\x31\x4e", 5, 1 },  /* SCEN: Smartcard mode enable */
   { "\x10\xd0\x52", 6, 1 },  /* DMAR: DMA enable receiver */
   { "\x10\xd0\x54", 7, 1 },  /* DMAT: DMA enable transmitter */
   { "\x49\x44\xc5", 8, 1 },  /* RTSE: RTS enable */
   { "\x0d\x44\xc5", 9, 1 },  /* CTSE: CTS enable */
   { "\x0d\x44\xc9\x14", 10, 1 },  /* CTSIE: CTS interrupt enable */
   { "\x3c\xe1\x42\x25\x40", 11, 1 },  /* ONEBIT: One sample bit method               enable */
   { "\x3d\x64\x84\x25\x30", 12, 1 },  /* OVRDIS: Overrun Disable */
   { "\x10\x44\x85", 13, 1 },  /* DDRE: DMA Disable on Reception               Error */
   { "\x10\x53\x40", 14, 1 },  /* DEM: Driver enable mode */
   { "\x10\x54\x00", 15, 1 },  /* DEP: Driver enable polarity               selection */
   { "\x4c\x30\x52\x0c\xe5\x00", 17, 3 },  /* SCARCNT: Smartcard auto-retry count */
   { "\x5d\x54\xc0", 20, 2 },  /* WUS: Wakeup from Stop mode interrupt flag               selection */
   { "\x5d\x51\x89\x14", 22, 1 },  /* WUFIE: Wakeup from Stop mode interrupt               enable */
   { "\x51\x81\x94\x24\x50", 23, 1 },  /* TXFTIE: TXFTIE */
   { "\x50\x30\x87\x50\x91\x40", 24, 1 },  /* TCBGTIE: TCBGTIE */
   { "\x49\x81\x94\x0c\x61\xc0", 25, 3 },  /* RXFTCFG: RXFTCFG */
   { "\x49\x81\x94\x24\x50", 28, 1 },  /* RXFTIE: RXFTIE */
   { "\x51\x81\x94\x0c\x61\xc0", 29, 3 },  /* TXFTCFG: TXFTCFG */
};

const Field_t UART4_BRR_fields[] = {
   { "\x10\x95\xa5\x19\x20\x43\x50\x93\xce", 0, 4 },  /* DIV_Fraction: DIV_Fraction */
   { "\x10\x95\xa5\x34\x13\x94\x25\x34\xc1", 4, 12 },  /* DIV_Mantissa: DIV_Mantissa */
};

const Field_t UART4_GTPR_fields[] = {
   { "\x41\x30\xc0", 0, 8 },  /* PSC: Prescaler value */
   { "\x1d\x40", 8, 8 },  /* GT: Guard time value */
};

const Field_t UART4_RTOR_fields[] = {
   { "\x49\x43\xc0", 0, 24 },  /* RTO: Receiver timeout value */
   { "\x08\xc1\x4e", 24, 8 },  /* BLEN: Block Length */
};

const Field_t UART4_RQR_fields[] = {
   { "\x04\x24\x92\x44", 0, 1 },  /* ABRRQ: Auto baud rate request */
   { "\x4c\x22\xd2\x44", 1, 1 },  /* SBKRQ: Send break request */
   { "\x34\xd4\x91", 2, 1 },  /* MMRQ: Mute mode request */
   { "\x49\x81\x92\x44", 3, 1 },  /* RXFRQ: Receive data flush request */
   { "\x51\x81\x92\x44", 4, 1 },  /* TXFRQ: Transmit data flush               request */
};

const Field_t UART4_ISR_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: PE */
   { "\x18\x50", 1, 1 },  /* FE: FE */
   { "\x38\x60", 2, 1 },  /* NF: NF */
   { "\x3d\x21\x40", 3, 1 },  /* ORE: ORE */
   { "\x24\x43\x05", 4, 1 },  /* IDLE: IDLE */
   { "\x49\x83\x85", 5, 1 },  /* RXNE: RXNE */
   { "\x50\x30", 6, 1 },  /* TC: TC */
   { "\x51\x81\x40", 7, 1 },  /* TXE: TXE */
   { "\x30\x21\x06", 8, 1 },  /* LBDF: LBDF */
   { "\x0d\x44\xc9\x18", 9, 1 },  /* CTSIF: CTSIF */
   { "\x0d\x44\xc0", 10, 1 },  /* CTS: CTS */
   { "\x49\x43\xc6", 11, 1 },  /* RTOF: RTOF */
   { "\x14\xf0\x86", 12, 1 },  /* EOBF: EOBF */
   { "\x54\x44\x80", 13, 1 },  /* UDR: UDR */
   { "\x04\x24\x85", 14, 1 },  /* ABRE: ABRE */
   { "\x04\x24\x86", 15, 1 },  /* ABRF: ABRF */
   { "\x09\x54\xd9", 16, 1 },  /* BUSY: BUSY */
   { "\x0c\xd1\x80", 17, 1 },  /* CMF: CMF */
   { "\x4c\x22\xc6", 18, 1 },  /* SBKF: SBKF */
   { "\x49\x75\x40", 19, 1 },  /* RWU: RWU */
   { "\x5d\x51\x80", 20, 1 },  /* WUF: WUF */
   { "\x50\x50\x43\x2c", 21, 1 },  /* TEACK: TEACK */
   { "\x48\x50\x43\x2c", 22, 1 },  /* REACK: REACK */
   { "\x51\x81\x85", 23, 1 },  /* TXFE: TXFE */
   { "\x49\x81\x86", 24, 1 },  /* RXFF: RXFF */
   { "\x50\x30\x87\x50", 25, 1 },  /* TCBGT: TCBGT */
   { "\x49\x81\x94", 26, 1 },  /* RXFT: RXFT */
   { "\x51\x81\x94", 27, 1 },  /* TXFT: TXFT */
};

const Field_t UART4_ICR_fields[] = {
   { "\x40\x50\xc6", 0, 1 },  /* PECF: Parity error clear flag */
   { "\x18\x50\xc6", 1, 1 },  /* FECF: Framing error clear flag */
   { "\x38\x31\x80", 2, 1 },  /* NCF: Noise detected clear flag */
   { "\x3d\x21\x43\x18", 3, 1 },  /* ORECF: Overrun error clear flag */
   { "\x24\x43\x05\x0c\x60", 4, 1 },  /* IDLECF: Idle line detected clear               flag */
   { "\x51\x81\x85\x0c\x60", 5, 1 },  /* TXFECF: TXFECF */
   { "\x50\x30\xc6", 6, 1 },  /* TCCF: Transmission complete clear               flag */
   { "\x50\x30\x87\x50\x31\x80", 7, 1 },  /* TCBGTCF: TCBGTCF */
   { "\x30\x21\x03\x18", 8, 1 },  /* LBDCF: LIN break detection clear               flag */
   { "\x0d\x44\xc3\x18", 9, 1 },  /* CTSCF: CTS clear flag */
   { "\x49\x43\xc3\x18", 11, 1 },  /* RTOCF: Receiver timeout clear               flag */
   { "\x14\xf0\x83\x18", 12, 1 },  /* EOBCF: End of block clear flag */
   { "\x54\x44\x83\x18", 13, 1 },  /* UDRCF: UDRCF */
   { "\x0c\xd0\xc6", 17, 1 },  /* CMCF: Character match clear flag */
   { "\x5d\x50\xc6", 20, 1 },  /* WUCF: Wakeup from Stop mode clear               flag */
};

const Field_t UART4_RDR_fields[] = {
   { "\x48\x44\x80", 0, 9 },  /* RDR: Receive data value */
};

const Field_t UART4_TDR_fields[] = {
   { "\x50\x44\x80", 0, 9 },  /* TDR: Transmit data value */
};

const Field_t UART4_PRESC_fields[] = {
   { "\x41\x21\x53\x0c\x13\x05\x48", 0, 4 },  /* PRESCALER: PRESCALER */
};

const Register_t UART4_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, UART4_CR1_fields, 32}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, UART4_CR2_fields, 22}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, UART4_CR3_fields, 24}, /* CR3: Control register 3 */
   {"\x09\x24\x80", 12, 32, 0, UART4_BRR_fields, 2}, /* BRR: Baud rate register */
   {"\x1d\x44\x12", 16, 32, 0, UART4_GTPR_fields, 2}, /* GTPR: Guard time and prescaler           register */
   {"\x49\x43\xd2", 20, 32, 0, UART4_RTOR_fields, 2}, /* RTOR: Receiver timeout register */
   {"\x49\x14\x80", 24, 32, 0, UART4_RQR_fields, 5}, /* RQR: Request register */
   {"\x25\x34\x80", 28, 32, 0, UART4_ISR_fields, 28}, /* ISR: Interrupt & status           register */
   {"\x24\x34\x80", 32, 32, 0, UART4_ICR_fields, 15}, /* ICR: Interrupt flag clear register */
   {"\x48\x44\x80", 36, 32, 0, UART4_RDR_fields, 1}, /* RDR: Receive data register */
   {"\x50\x44\x80", 40, 32, 0, UART4_TDR_fields, 1}, /* TDR: Transmit data register */
   {"\x41\x21\x53\x0c", 44, 32, 0, UART4_PRESC_fields, 1}, /* PRESC: USART prescaler register */
};

const Field_t I2C1_CR1_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: Peripheral enable */
   { "\x51\x82\x45", 1, 1 },  /* TXIE: TX Interrupt enable */
   { "\x49\x82\x45", 2, 1 },  /* RXIE: RX Interrupt enable */
   { "\x04\x41\x12\x24\x50", 3, 1 },  /* ADDRIE: Address match interrupt enable (slave               only) */
   { "\x38\x10\xcb\x24\x50", 4, 1 },  /* NACKIE: Not acknowledge received interrupt               enable */
   { "\x4d\x43\xd0\x24\x50", 5, 1 },  /* STOPIE: STOP detection Interrupt               enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transfer Complete interrupt               enable */
   { "\x15\x24\x89\x14", 7, 1 },  /* ERRIE: Error interrupts enable */
   { "\x10\xe1\x80", 8, 4 },  /* DNF: Digital noise filter */
   { "\x04\xe1\x8f\x18\x60", 12, 1 },  /* ANFOFF: Analog noise filter OFF */
   { "\x51\x81\x0d\x04\x53\x80", 14, 1 },  /* TXDMAEN: DMA transmission requests               enable */
   { "\x49\x81\x0d\x04\x53\x80", 15, 1 },  /* RXDMAEN: DMA reception requests               enable */
   { "\x4c\x20\xc0", 16, 1 },  /* SBC: Slave byte control */
   { "\x38\xf4\xd4\x48\x55\x03\x20", 17, 1 },  /* NOSTRETCH: Clock stretching disable */
   { "\x5d\x54\x05\x38", 18, 1 },  /* WUPEN: Wakeup from STOP enable */
   { "\x1c\x31\x4e", 19, 1 },  /* GCEN: General call enable */
   { "\x4c\xd0\x88\x14\xe0", 20, 1 },  /* SMBHEN: SMBus Host address enable */
   { "\x4c\xd0\x84\x14\xe0", 21, 1 },  /* SMBDEN: SMBus Device Default address               enable */
   { "\x04\xc1\x52\x50\x53\x80", 22, 1 },  /* ALERTEN: SMBUS alert enable */
   { "\x40\x50\xc5\x38", 23, 1 },  /* PECEN: PEC enable */
};

const Field_t I2C1_CR2_fields[] = {
   { "\x4c\x11\x04", 0, 10 },  /* SADD: Slave address bit (master               mode) */
   { "\x48\x49\x57\x48\xe0", 10, 1 },  /* RD_WRN: Transfer direction (master               mode) */
   { "\x04\x41\x1c\x6c", 11, 1 },  /* ADD10: 10-bit addressing mode (master               mode) */
   { "\x20\x50\x44\x71\xb4\x80", 12, 1 },  /* HEAD10R: 10-bit address header only read               direction (master receiver mode) */
   { "\x4d\x40\x52\x50", 13, 1 },  /* START: Start generation */
   { "\x4d\x43\xd0", 14, 1 },  /* STOP: Stop generation (master               mode) */
   { "\x38\x10\xcb", 15, 1 },  /* NACK: NACK generation (slave               mode) */
   { "\x38\x26\x54\x15\x30", 16, 8 },  /* NBYTES: Number of bytes */
   { "\x48\x53\x0f\x04\x40", 24, 1 },  /* RELOAD: NBYTES reload mode */
   { "\x05\x55\x0f\x14\xe1\x00", 25, 1 },  /* AUTOEND: Automatic end mode (master               mode) */
   { "\x40\x50\xc2\x65\x41\x40", 26, 1 },  /* PECBYTE: Packet error checking byte */
};

const Field_t I2C1_OAR1_fields[] = {
   { "\x3c\x17\x00", 0, 10 },  /* OA1: Interface address */
   { "\x3c\x17\x0d\x3c\x41\x40", 10, 1 },  /* OA1MODE: Own Address 1 10-bit mode */
   { "\x3c\x17\x05\x38", 15, 1 },  /* OA1EN: Own Address 1 enable */
};

const Field_t I2C1_OAR2_fields[] = {
   { "\x3c\x17\x40", 1, 7 },  /* OA2: Interface address */
   { "\x3c\x17\x4d\x4c\xb0", 8, 3 },  /* OA2MSK: Own Address 2 masks */
   { "\x3c\x17\x45\x38", 15, 1 },  /* OA2EN: Own Address 2 enable */
};

const Field_t I2C1_TIMINGR_fields[] = {
   { "\x4c\x33\x0c", 0, 8 },  /* SCLL: SCL low period (master               mode) */
   { "\x4c\x33\x08", 8, 8 },  /* SCLH: SCL high period (master               mode) */
   { "\x4c\x40\x44\x14\xc0", 16, 4 },  /* SDADEL: Data hold time */
   { "\x4c\x33\x04\x14\xc0", 20, 4 },  /* SCLDEL: Data setup time */
   { "\x41\x21\x53\x0c", 28, 4 },  /* PRESC: Timing prescaler */
};

const Field_t I2C1_TIMEOUTR_fields[] = {
   { "\x50\x93\x45\x3d\x55\x01", 0, 12 },  /* TIMEOUTA: Bus timeout A */
   { "\x50\x91\x0c\x14", 12, 1 },  /* TIDLE: Idle clock timeout               detection */
   { "\x50\x93\x4f\x55\x41\x4e", 15, 1 },  /* TIMOUTEN: Clock timeout enable */
   { "\x50\x93\x45\x3d\x55\x02", 16, 12 },  /* TIMEOUTB: Bus timeout B */
   { "\x50\x56\x14\x14\xe0", 31, 1 },  /* TEXTEN: Extended clock timeout               enable */
};

const Field_t I2C1_ISR_fields[] = {
   { "\x51\x81\x40", 0, 1 },  /* TXE: Transmit data register empty               (transmitters) */
   { "\x51\x82\x53", 1, 1 },  /* TXIS: Transmit interrupt status               (transmitters) */
   { "\x49\x83\x85", 2, 1 },  /* RXNE: Receive data register not empty               (receivers) */
   { "\x04\x41\x12", 3, 1 },  /* ADDR: Address matched (slave               mode) */
   { "\x38\x10\xcb\x18", 4, 1 },  /* NACKF: Not acknowledge received               flag */
   { "\x4d\x43\xd0\x18", 5, 1 },  /* STOPF: Stop detection flag */
   { "\x50\x30", 6, 1 },  /* TC: Transfer Complete (master               mode) */
   { "\x50\x34\x80", 7, 1 },  /* TCR: Transfer Complete Reload */
   { "\x08\x54\x92", 8, 1 },  /* BERR: Bus error */
   { "\x05\x23\x0f", 9, 1 },  /* ARLO: Arbitration lost */
   { "\x3d\x64\x80", 10, 1 },  /* OVR: Overrun/Underrun (slave               mode) */
   { "\x40\x50\xc5\x49\x20", 11, 1 },  /* PECERR: PEC Error in reception */
   { "\x50\x93\x45\x3d\x55\x00", 12, 1 },  /* TIMEOUT: Timeout or t_low detection               flag */
   { "\x04\xc1\x52\x50", 13, 1 },  /* ALERT: SMBus alert */
   { "\x09\x54\xd9", 15, 1 },  /* BUSY: Bus busy */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Transfer direction (Slave               mode) */
   { "\x04\x41\x03\x3c\x41\x40", 17, 7 },  /* ADDCODE: Address match code (Slave               mode) */
};

const Field_t I2C1_ICR_fields[] = {
   { "\x04\x41\x12\x0c\x60", 3, 1 },  /* ADDRCF: Address Matched flag clear */
   { "\x38\x10\xcb\x0c\x60", 4, 1 },  /* NACKCF: Not Acknowledge flag clear */
   { "\x4d\x43\xd0\x0c\x60", 5, 1 },  /* STOPCF: Stop detection flag clear */
   { "\x08\x54\x92\x0c\x60", 8, 1 },  /* BERRCF: Bus error flag clear */
   { "\x05\x23\x0f\x0c\x60", 9, 1 },  /* ARLOCF: Arbitration lost flag               clear */
   { "\x3d\x64\x83\x18", 10, 1 },  /* OVRCF: Overrun/Underrun flag               clear */
   { "\x40\x50\xc3\x18", 11, 1 },  /* PECCF: PEC Error flag clear */
   { "\x50\x93\x4f\x55\x40\xc6", 12, 1 },  /* TIMOUTCF: Timeout detection flag               clear */
   { "\x04\xc1\x52\x50\x31\x80", 13, 1 },  /* ALERTCF: Alert flag clear */
};

const Field_t I2C1_PECR_fields[] = {
   { "\x40\x50\xc0", 0, 8 },  /* PEC: Packet error checking               register */
};

const Field_t I2C1_RXDR_fields[] = {
   { "\x49\x81\x01\x50\x10", 0, 8 },  /* RXDATA: 8-bit receive data */
};

const Field_t I2C1_TXDR_fields[] = {
   { "\x51\x81\x01\x50\x10", 0, 8 },  /* TXDATA: 8-bit transmit data */
};

const Register_t I2C1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, I2C1_CR1_fields, 20}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, I2C1_CR2_fields, 11}, /* CR2: Control register 2 */
   {"\x3c\x14\x9c", 8, 32, 0, I2C1_OAR1_fields, 3}, /* OAR1: Own address register 1 */
   {"\x3c\x14\x9d", 12, 32, 0, I2C1_OAR2_fields, 3}, /* OAR2: Own address register 2 */
   {"\x50\x93\x49\x38\x74\x80", 16, 32, 0, I2C1_TIMINGR_fields, 5}, /* TIMINGR: Timing register */
   {"\x50\x93\x45\x3d\x55\x12", 20, 32, 0, I2C1_TIMEOUTR_fields, 5}, /* TIMEOUTR: Status register 1 */
   {"\x25\x34\x80", 24, 32, 0, I2C1_ISR_fields, 17}, /* ISR: Interrupt and Status register */
   {"\x24\x34\x80", 28, 32, 0, I2C1_ICR_fields, 9}, /* ICR: Interrupt clear register */
   {"\x40\x50\xd2", 32, 32, 0, I2C1_PECR_fields, 1}, /* PECR: PEC register */
   {"\x49\x81\x12", 36, 32, 0, I2C1_RXDR_fields, 1}, /* RXDR: Receive data register */
   {"\x51\x81\x12", 40, 32, 0, I2C1_TXDR_fields, 1}, /* TXDR: Transmit data register */
};

const Field_t USB_FS_device_EP0R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP1R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP2R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP3R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP4R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP5R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP6R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_EP7R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: EA */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: STAT_TX */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: DTOG_TX */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: CTR_TX */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: EP_KIND */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: EP_TYPE */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: SETUP */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: STAT_RX */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: DTOG_RX */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: CTR_RX */
};

const Field_t USB_FS_device_CNTR_fields[] = {
   { "\x19\x21\x53", 0, 1 },  /* FRES: FRES */
   { "\x40\x45\xce", 1, 1 },  /* PDWN: PDWN */
   { "\x31\x09\x4d\x3c\x41\x40", 2, 1 },  /* LP_MODE: LP_MODE */
   { "\x19\x35\x53\x40", 3, 1 },  /* FSUSP: FSUSP */
   { "\x48\x54\xd5\x34\x50", 4, 1 },  /* RESUME: RESUME */
   { "\x31\xc4\x85\x4d\x53\x45", 5, 1 },  /* L1RESUME: L1RESUME */
   { "\x31\xc4\x85\x44\xd0", 7, 1 },  /* L1REQM: L1REQM */
   { "\x15\x33\xc6\x34", 8, 1 },  /* ESOFM: ESOFM */
   { "\x4c\xf1\x8d", 9, 1 },  /* SOFM: SOFM */
   { "\x48\x54\xc5\x50\xd0", 10, 1 },  /* RESETM: RESETM */
   { "\x4d\x54\xd0\x34", 11, 1 },  /* SUSPM: SUSPM */
   { "\x5c\xb5\x50\x34", 12, 1 },  /* WKUPM: WKUPM */
   { "\x15\x24\x8d", 13, 1 },  /* ERRM: ERRM */
   { "\x40\xd0\x4f\x59\x23\x40", 14, 1 },  /* PMAOVRM: PMAOVRM */
   { "\x0d\x44\x8d", 15, 1 },  /* CTRM: CTRM */
};

const Field_t USB_FS_device_ISTR_fields[] = {
   { "\x15\x09\x49\x10", 0, 4 },  /* EP_ID: EP_ID */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x31\xc4\x85\x44", 7, 1 },  /* L1REQ: L1REQ */
   { "\x15\x33\xc6", 8, 1 },  /* ESOF: ESOF */
   { "\x4c\xf1\x80", 9, 1 },  /* SOF: SOF */
   { "\x48\x54\xc5\x50", 10, 1 },  /* RESET: RESET */
   { "\x4d\x54\xd0", 11, 1 },  /* SUSP: SUSP */
   { "\x5c\xb5\x50", 12, 1 },  /* WKUP: WKUP */
   { "\x15\x24\x80", 13, 1 },  /* ERR: ERR */
   { "\x40\xd0\x4f\x59\x20", 14, 1 },  /* PMAOVR: PMAOVR */
   { "\x0d\x44\x80", 15, 1 },  /* CTR: CTR */
};

const Field_t USB_FS_device_FNR_fields[] = {
   { "\x18\xe0", 0, 11 },  /* FN: FN */
   { "\x31\x33\xc6", 11, 2 },  /* LSOF: LSOF */
   { "\x30\x32\xc0", 13, 1 },  /* LCK: LCK */
   { "\x49\x81\x0d", 14, 1 },  /* RXDM: RXDM */
   { "\x49\x81\x10", 15, 1 },  /* RXDP: RXDP */
};

const Field_t USB_FS_device_DADDR_fields[] = {
   { "\x04\x41\x00", 0, 7 },  /* ADD: ADD */
   { "\x14\x60", 7, 1 },  /* EF: EF */
};

const Field_t USB_FS_device_BTABLE_fields[] = {
   { "\x09\x40\x42\x30\x50", 3, 13 },  /* BTABLE: BTABLE */
};

const Register_t USB_FS_device_registers[] = {
   {"\x15\x06\xd2", 0, 32, 0, USB_FS_device_EP0R_fields, 10}, /* EP0R: USB endpoint n register */
   {"\x15\x07\x12", 4, 32, 0, USB_FS_device_EP1R_fields, 10}, /* EP1R: USB endpoint n register */
   {"\x15\x07\x52", 8, 32, 0, USB_FS_device_EP2R_fields, 10}, /* EP2R: USB endpoint n register */
   {"\x15\x07\x92", 12, 32, 0, USB_FS_device_EP3R_fields, 10}, /* EP3R: USB endpoint n register */
   {"\x15\x07\xd2", 16, 32, 0, USB_FS_device_EP4R_fields, 10}, /* EP4R: USB endpoint n register */
   {"\x15\x08\x12", 20, 32, 0, USB_FS_device_EP5R_fields, 10}, /* EP5R: USB endpoint n register */
   {"\x15\x08\x52", 24, 32, 0, USB_FS_device_EP6R_fields, 10}, /* EP6R: USB endpoint n register */
   {"\x15\x08\x92", 28, 32, 0, USB_FS_device_EP7R_fields, 10}, /* EP7R: USB endpoint n register */
   {"\x0c\xe5\x12", 64, 32, 0, USB_FS_device_CNTR_fields, 15}, /* CNTR: USB control register */
   {"\x25\x35\x12", 68, 32, 0, USB_FS_device_ISTR_fields, 11}, /* ISTR: USB interrupt status register */
   {"\x18\xe4\x80", 72, 32, 0, USB_FS_device_FNR_fields, 5}, /* FNR: USB frame number register */
   {"\x10\x11\x04\x48", 76, 32, 0, USB_FS_device_DADDR_fields, 2}, /* DADDR: USB device address */
   {"\x09\x40\x42\x30\x50", 80, 32, 0, USB_FS_device_BTABLE_fields, 1}, /* BTABLE: Buffer table address */
};

const Field_t PWR_CR1_fields[] = {
   { "\x31\x03\x53", 0, 3 },  /* LPMS: Low-power mode selection */
   { "\x10\x24\x00", 8, 1 },  /* DBP: Disable backup domain write               protection */
   { "\x58\xf4\xc0", 9, 2 },  /* VOS: Voltage scaling range               selection */
   { "\x31\x04\x80", 14, 1 },  /* LPR: Low-power run */
};

const Field_t PWR_CR2_fields[] = {
   { "\x41\x61\x05", 0, 1 },  /* PVDE: Power voltage detector               enable */
   { "\x40\xc4\xc0", 1, 3 },  /* PLS: Power voltage detector level selection */
   { "\x41\x63\x45\x39\xc0", 4, 1 },  /* PVMEN1: Peripheral voltage monitoring 1 enable: VDDA vs. COMP min voltage */
   { "\x41\x63\x45\x39\xd0", 5, 1 },  /* PVMEN2: Peripheral voltage monitoring 2 enable: VDDA vs. Fast DAC min voltage */
   { "\x41\x63\x45\x39\xe0", 6, 1 },  /* PVMEN3: Peripheral voltage monitoring 3 enable: VDDA vs. ADC min voltage 1.62V */
   { "\x41\x63\x45\x39\xf0", 7, 1 },  /* PVMEN4: Peripheral voltage monitoring 4 enable: VDDA vs. OPAMP/DAC min voltage */
};

const Field_t PWR_CR3_fields[] = {
   { "\x15\x75\x50\x70", 0, 1 },  /* EWUP1: Enable Wakeup pin WKUP1 */
   { "\x15\x75\x50\x74", 1, 1 },  /* EWUP2: Enable Wakeup pin WKUP2 */
   { "\x15\x75\x50\x78", 2, 1 },  /* EWUP3: Enable Wakeup pin WKUP3 */
   { "\x15\x75\x50\x7c", 3, 1 },  /* EWUP4: Enable Wakeup pin WKUP4 */
   { "\x15\x75\x50\x80", 4, 1 },  /* EWUP5: Enable Wakeup pin WKUP5 */
   { "\x49\x24\xc0", 8, 1 },  /* RRS: SRAM2 retention in Standby               mode */
   { "\x05\x00\xc0", 10, 1 },  /* APC: Apply pull-up and pull-down               configuration */
   { "\x54\x34\x04\x72\x54\xd4\x10\x26\x40", 13, 1 },  /* UCPD1_STDBY: STDBY */
   { "\x54\x34\x04\x72\x51\x02\x10\x94\xc0", 14, 1 },  /* UCPD1_DBDIS: DBDIS */
   { "\x14\x95\xd5\x30", 15, 1 },  /* EIWUL: Enable external WakeUp               line */
};

const Field_t PWR_CR4_fields[] = {
   { "\x5d\x07\x00", 0, 1 },  /* WP1: Wakeup pin WKUP1 polarity */
   { "\x5d\x07\x40", 1, 1 },  /* WP2: Wakeup pin WKUP2 polarity */
   { "\x5d\x07\x80", 2, 1 },  /* WP3: Wakeup pin WKUP3 polarity */
   { "\x5d\x07\xc0", 3, 1 },  /* WP4: Wakeup pin WKUP4 polarity */
   { "\x5d\x08\x00", 4, 1 },  /* WP5: Wakeup pin WKUP5 polarity */
   { "\x58\x21\x40", 8, 1 },  /* VBE: VBAT battery charging               enable */
   { "\x58\x24\x93", 9, 1 },  /* VBRS: VBAT battery charging resistor               selection */
};

const Field_t PWR_SR1_fields[] = {
   { "\x5d\x51\x9c", 0, 1 },  /* WUF1: Wakeup flag 1 */
   { "\x5d\x51\x9d", 1, 1 },  /* WUF2: Wakeup flag 2 */
   { "\x5d\x51\x9e", 2, 1 },  /* WUF3: Wakeup flag 3 */
   { "\x5d\x51\x9f", 3, 1 },  /* WUF4: Wakeup flag 4 */
   { "\x5d\x51\xa0", 4, 1 },  /* WUF5: Wakeup flag 5 */
   { "\x4c\x21\x80", 8, 1 },  /* SBF: Standby flag */
   { "\x5d\x51\x89", 15, 1 },  /* WUFI: Wakeup flag internal */
};

const Field_t PWR_SR2_fields[] = {
   { "\x48\x51\xcc\x41\x30", 8, 1 },  /* REGLPS: Low-power regulator               started */
   { "\x48\x51\xcc\x40\x60", 9, 1 },  /* REGLPF: Low-power regulator flag */
   { "\x58\xf4\xc6", 10, 1 },  /* VOSF: Voltage scaling flag */
   { "\x41\x61\x0f", 11, 1 },  /* PVDO: Power voltage detector               output */
   { "\x41\x63\x4f\x70", 12, 1 },  /* PVMO1: Peripheral voltage monitoring output:               VDDUSB vs. 1.2 V */
   { "\x41\x63\x4f\x74", 13, 1 },  /* PVMO2: Peripheral voltage monitoring output:               VDDIO2 vs. 0.9 V */
   { "\x41\x63\x4f\x78", 14, 1 },  /* PVMO3: Peripheral voltage monitoring output:               VDDA vs. 1.62 V */
   { "\x41\x63\x4f\x7c", 15, 1 },  /* PVMO4: Peripheral voltage monitoring output:               VDDA vs. 2.2 V */
};

const Field_t PWR_SCR_fields[] = {
   { "\x0d\x75\x46\x70", 0, 1 },  /* CWUF1: Clear wakeup flag 1 */
   { "\x0d\x75\x46\x74", 1, 1 },  /* CWUF2: Clear wakeup flag 2 */
   { "\x0d\x75\x46\x78", 2, 1 },  /* CWUF3: Clear wakeup flag 3 */
   { "\x0d\x75\x46\x7c", 3, 1 },  /* CWUF4: Clear wakeup flag 4 */
   { "\x0d\x75\x46\x80", 4, 1 },  /* CWUF5: Clear wakeup flag 5 */
   { "\x0d\x30\x86", 8, 1 },  /* CSBF: Clear standby flag */
};

const Field_t PWR_PUCRA_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port A pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port A pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port A pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port A pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port A pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port A pull-up bit y               (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port A pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRA_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port A pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port A pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port A pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port A pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port A pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port A pull-down bit y               (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port A pull-down bit y               (y=0..15) */
};

const Field_t PWR_PUCRB_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port B pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port B pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port B pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port B pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port B pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port B pull-up bit y               (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port B pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRB_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port B pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port B pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port B pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port B pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port B pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port B pull-down bit y               (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port B pull-down bit y               (y=0..15) */
};

const Field_t PWR_PUCRC_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port C pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port C pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port C pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port C pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port C pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port C pull-up bit y               (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port C pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRC_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port C pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port C pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port C pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port C pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port C pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port C pull-down bit y               (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port C pull-down bit y               (y=0..15) */
};

const Field_t PWR_PUCRD_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port D pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port D pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port D pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port D pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port D pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port D pull-up bit y               (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port D pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRD_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port D pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port D pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port D pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port D pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port D pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port D pull-down bit y               (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port D pull-down bit y               (y=0..15) */
};

const Field_t PWR_PUCRE_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port E pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port E pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port E pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port E pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port E pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port E pull-up bit y               (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port E pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRE_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port E pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port E pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port E pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port E pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port E pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port E pull-down bit y               (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port E pull-down bit y               (y=0..15) */
};

const Field_t PWR_PUCRF_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port F pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port F pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port F pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port F pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port F pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port F pull-up bit y               (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port F pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRF_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port F pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port F pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port F pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port F pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port F pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port F pull-down bit y               (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port F pull-down bit y               (y=0..15) */
};

const Field_t PWR_PUCRG_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port G pull-up bit y               (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port G pull-up bit y               (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port G pull-up bit y               (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port G pull-up bit y               (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port G pull-up bit y               (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port G pull-up bit y               (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port G pull-up bit y               (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port G pull-up bit y               (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port G pull-up bit y               (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port G pull-up bit y               (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port G pull-up bit y               (y=0..15) */
};

const Field_t PWR_PDCRG_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port G pull-down bit y               (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port G pull-down bit y               (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port G pull-down bit y               (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port G pull-down bit y               (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port G pull-down bit y               (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port G pull-down bit y               (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port G pull-down bit y               (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port G pull-down bit y               (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port G pull-down bit y               (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port G pull-down bit y               (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port G pull-down bit y               (y=0..15) */
};

const Field_t PWR_CR5_fields[] = {
   { "\x49\xc3\x4f\x10\x50", 0, 1 },  /* R1MODE: Main regular range 1 mode */
};

const Register_t PWR_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, PWR_CR1_fields, 4}, /* CR1: Power control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, PWR_CR2_fields, 6}, /* CR2: Power control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, PWR_CR3_fields, 10}, /* CR3: Power control register 3 */
   {"\x0d\x27\xc0", 12, 32, 0, PWR_CR4_fields, 7}, /* CR4: Power control register 4 */
   {"\x4d\x27\x00", 16, 32, 0, PWR_SR1_fields, 7}, /* SR1: Power status register 1 */
   {"\x4d\x27\x40", 20, 32, 0, PWR_SR2_fields, 8}, /* SR2: Power status register 2 */
   {"\x4c\x34\x80", 24, 32, 0, PWR_SCR_fields, 6}, /* SCR: Power status clear register */
   {"\x41\x50\xd2\x04", 32, 32, 0, PWR_PUCRA_fields, 15}, /* PUCRA: Power Port A pull-up control           register */
   {"\x40\x40\xd2\x04", 36, 32, 0, PWR_PDCRA_fields, 14}, /* PDCRA: Power Port A pull-down control           register */
   {"\x41\x50\xd2\x08", 40, 32, 0, PWR_PUCRB_fields, 16}, /* PUCRB: Power Port B pull-up control           register */
   {"\x40\x40\xd2\x08", 44, 32, 0, PWR_PDCRB_fields, 15}, /* PDCRB: Power Port B pull-down control           register */
   {"\x41\x50\xd2\x0c", 48, 32, 0, PWR_PUCRC_fields, 16}, /* PUCRC: Power Port C pull-up control           register */
   {"\x40\x40\xd2\x0c", 52, 32, 0, PWR_PDCRC_fields, 16}, /* PDCRC: Power Port C pull-down control           register */
   {"\x41\x50\xd2\x10", 56, 32, 0, PWR_PUCRD_fields, 16}, /* PUCRD: Power Port D pull-up control           register */
   {"\x40\x40\xd2\x10", 60, 32, 0, PWR_PDCRD_fields, 16}, /* PDCRD: Power Port D pull-down control           register */
   {"\x41\x50\xd2\x14", 64, 32, 0, PWR_PUCRE_fields, 16}, /* PUCRE: Power Port E pull-up control           register */
   {"\x40\x40\xd2\x14", 68, 32, 0, PWR_PDCRE_fields, 16}, /* PDCRE: Power Port E pull-down control           register */
   {"\x41\x50\xd2\x18", 72, 32, 0, PWR_PUCRF_fields, 16}, /* PUCRF: Power Port F pull-up control           register */
   {"\x40\x40\xd2\x18", 76, 32, 0, PWR_PDCRF_fields, 16}, /* PDCRF: Power Port F pull-down control           register */
   {"\x41\x50\xd2\x1c", 80, 32, 0, PWR_PUCRG_fields, 11}, /* PUCRG: Power Port G pull-up control           register */
   {"\x40\x40\xd2\x1c", 84, 32, 0, PWR_PDCRG_fields, 11}, /* PDCRG: Power Port G pull-down control           register */
   {"\x0d\x28\x00", 128, 32, 0, PWR_CR5_fields, 1}, /* CR5: Power control register 5 */
};

const Field_t LPTIMER1_ISR_fields[] = {
   { "\x0c\xd4\x0d", 0, 1 },  /* CMPM: Compare match */
   { "\x05\x24\x8d", 1, 1 },  /* ARRM: Autoreload match */
   { "\x15\x85\x14\x48\x91\xc0", 2, 1 },  /* EXTTRIG: External trigger edge               event */
   { "\x0c\xd4\x0f\x2c", 3, 1 },  /* CMPOK: Compare register update OK */
   { "\x05\x24\x8f\x2c", 4, 1 },  /* ARROK: Autoreload register update               OK */
   { "\x55\x00", 5, 1 },  /* UP: Counter direction change down to               up */
   { "\x10\xf5\xce", 6, 1 },  /* DOWN: Counter direction change up to               down */
};

const Field_t LPTIMER1_ICR_fields[] = {
   { "\x0c\xd4\x0d\x0c\x60", 0, 1 },  /* CMPMCF: compare match Clear Flag */
   { "\x05\x24\x8d\x0c\x60", 1, 1 },  /* ARRMCF: Autoreload match Clear               Flag */
   { "\x15\x85\x14\x48\x91\xc3\x18", 2, 1 },  /* EXTTRIGCF: External trigger valid edge Clear               Flag */
   { "\x0c\xd4\x0f\x2c\x31\x80", 3, 1 },  /* CMPOKCF: Compare register update OK Clear               Flag */
   { "\x05\x24\x8f\x2c\x31\x80", 4, 1 },  /* ARROKCF: Autoreload register update OK Clear               Flag */
   { "\x55\x00\xc6", 5, 1 },  /* UPCF: Direction change to UP Clear               Flag */
   { "\x10\xf5\xce\x0c\x60", 6, 1 },  /* DOWNCF: Direction change to down Clear               Flag */
};

const Field_t LPTIMER1_IER_fields[] = {
   { "\x0c\xd4\x0d\x24\x50", 0, 1 },  /* CMPMIE: Compare match Interrupt               Enable */
   { "\x05\x24\x8d\x24\x50", 1, 1 },  /* ARRMIE: Autoreload match Interrupt               Enable */
   { "\x15\x85\x14\x48\x91\xc9\x14", 2, 1 },  /* EXTTRIGIE: External trigger valid edge Interrupt               Enable */
   { "\x0c\xd4\x0f\x2c\x91\x40", 3, 1 },  /* CMPOKIE: Compare register update OK Interrupt               Enable */
   { "\x05\x24\x8f\x2c\x91\x40", 4, 1 },  /* ARROKIE: Autoreload register update OK Interrupt               Enable */
   { "\x55\x02\x45", 5, 1 },  /* UPIE: Direction change to UP Interrupt               Enable */
   { "\x10\xf5\xce\x24\x50", 6, 1 },  /* DOWNIE: Direction change to down Interrupt               Enable */
};

const Field_t LPTIMER1_CFGR_fields[] = {
   { "\x0c\xb4\xc5\x30", 0, 1 },  /* CKSEL: Clock selector */
   { "\x0c\xb4\x0f\x30", 1, 2 },  /* CKPOL: Clock Polarity */
   { "\x0c\xb1\x8c\x50", 3, 2 },  /* CKFLT: Configurable digital filter for external               clock */
   { "\x51\x21\xc6\x31\x40", 6, 2 },  /* TRGFLT: Configurable digital filter for               trigger */
   { "\x41\x21\x53\x0c", 9, 3 },  /* PRESC: Clock prescaler */
   { "\x51\x22\x47\x4c\x53\x00", 13, 4 },  /* TRIGSEL: Trigger selector */
   { "\x51\x22\x47\x14\xe0", 17, 2 },  /* TRIGEN: Trigger enable and               polarity */
   { "\x50\x93\x4f\x55\x40", 19, 1 },  /* TIMOUT: Timeout enable */
   { "\x5c\x15\x85", 20, 1 },  /* WAVE: Waveform shape */
   { "\x5c\x15\x90\x3c\xc0", 21, 1 },  /* WAVPOL: Waveform shape polarity */
   { "\x41\x21\x4c\x3c\x11\x00", 22, 1 },  /* PRELOAD: Registers update mode */
   { "\x0c\xf5\x4e\x50\xd3\xc4\x14", 23, 1 },  /* COUNTMODE: counter mode enabled */
   { "\x14\xe0\xc0", 24, 1 },  /* ENC: Encoder mode enable */
};

const Field_t LPTIMER1_CR_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: LPTIM Enable */
   { "\x4c\xe1\xd3\x51\x25\x00", 1, 1 },  /* SNGSTRT: LPTIM start in single mode */
   { "\x0c\xe5\x13\x51\x25\x00", 2, 1 },  /* CNTSTRT: Timer start in continuous               mode */
   { "\x0c\xf5\x4e\x51\x24\xd4", 3, 1 },  /* COUNTRST: COUNTRST */
   { "\x49\x35\x01\x48\x50", 4, 1 },  /* RSTARE: RSTARE */
};

const Field_t LPTIMER1_CMP_fields[] = {
   { "\x0c\xd4\x00", 0, 16 },  /* CMP: Compare value */
};

const Field_t LPTIMER1_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto reload value */
};

const Field_t LPTIMER1_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: Counter value */
};

const Field_t LPTIMER1_OR_fields[] = {
   { "\x24\xe7\x00", 0, 1 },  /* IN1: IN1 */
   { "\x24\xe7\x40", 1, 1 },  /* IN2: IN2 */
   { "\x24\xe7\x25\x76\x57\x00", 2, 2 },  /* IN1_2_1: IN1_2_1 */
   { "\x24\xe7\x65\x76\x57\x00", 4, 2 },  /* IN2_2_1: IN2_2_1 */
};

const Register_t LPTIMER1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, LPTIMER1_ISR_fields, 7}, /* ISR: Interrupt and Status Register */
   {"\x24\x34\x80", 4, 32, 0, LPTIMER1_ICR_fields, 7}, /* ICR: Interrupt Clear Register */
   {"\x24\x54\x80", 8, 32, 0, LPTIMER1_IER_fields, 7}, /* IER: Interrupt Enable Register */
   {"\x0c\x61\xd2", 12, 32, 0, LPTIMER1_CFGR_fields, 13}, /* CFGR: Configuration Register */
   {"\x0d\x20", 16, 32, 0, LPTIMER1_CR_fields, 5}, /* CR: Control Register */
   {"\x0c\xd4\x00", 20, 32, 0, LPTIMER1_CMP_fields, 1}, /* CMP: Compare Register */
   {"\x05\x24\x80", 24, 32, 0, LPTIMER1_ARR_fields, 1}, /* ARR: Autoreload Register */
   {"\x0c\xe5\x00", 28, 32, 0, LPTIMER1_CNT_fields, 1}, /* CNT: Counter Register */
   {"\x3d\x20", 32, 32, 0, LPTIMER1_OR_fields, 4}, /* OR: option register */
};

const Field_t LPUART1_CR1_fields[] = {
   { "\x54\x50", 0, 1 },  /* UE: USART enable */
   { "\x54\x54\xcd", 1, 1 },  /* UESM: USART enable in Stop mode */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Receiver wakeup method */
   { "\x35\xb0", 12, 1 },  /* M0: Word length */
   { "\x34\xd1\x40", 13, 1 },  /* MME: Mute mode enable */
   { "\x0c\xd2\x45", 14, 1 },  /* CMIE: Character match interrupt               enable */
   { "\x10\x51\x14\x6c", 16, 1 },  /* DEDT0: DEDT0 */
   { "\x10\x51\x14\x70", 17, 1 },  /* DEDT1: DEDT1 */
   { "\x10\x51\x14\x74", 18, 1 },  /* DEDT2: DEDT2 */
   { "\x10\x51\x14\x78", 19, 1 },  /* DEDT3: DEDT3 */
   { "\x10\x51\x14\x7c", 20, 1 },  /* DEDT4: Driver Enable de-assertion               time */
   { "\x10\x50\x54\x6c", 21, 1 },  /* DEAT0: DEAT0 */
   { "\x10\x50\x54\x70", 22, 1 },  /* DEAT1: DEAT1 */
   { "\x10\x50\x54\x74", 23, 1 },  /* DEAT2: DEAT2 */
   { "\x10\x50\x54\x78", 24, 1 },  /* DEAT3: DEAT3 */
   { "\x10\x50\x54\x7c", 25, 1 },  /* DEAT4: Driver Enable assertion               time */
   { "\x35\xc0", 28, 1 },  /* M1: Word length */
   { "\x18\x91\x8f\x14\xe0", 29, 1 },  /* FIFOEN: FIFOEN */
   { "\x51\x81\x85\x24\x50", 30, 1 },  /* TXFEIE: TXFEIE */
   { "\x49\x81\x86\x24\x50", 31, 1 },  /* RXFFIE: RXFFIE */
};

const Field_t LPUART1_CR2_fields[] = {
   { "\x04\x41\x0d\x88", 4, 1 },  /* ADDM7: 7-bit Address Detection/4-bit Address               Detection */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x4d\x70\x50", 15, 1 },  /* SWAP: Swap TX/RX pins */
   { "\x49\x82\x4e\x58", 16, 1 },  /* RXINV: RX pin active level               inversion */
   { "\x51\x82\x4e\x58", 17, 1 },  /* TXINV: TX pin active level               inversion */
   { "\x50\x12\x4e\x58", 18, 1 },  /* TAINV: Binary data inversion */
   { "\x35\x30\x86\x25\x24\xd4", 19, 1 },  /* MSBFIRST: Most significant bit first */
   { "\x04\x41\x1b\x95\xe0", 24, 4 },  /* ADD0_3: Address of the USART node */
   { "\x04\x41\x1f\x96\x20", 28, 4 },  /* ADD4_7: Address of the USART node */
};

const Field_t LPUART1_CR3_fields[] = {
   { "\x14\x91\x40", 0, 1 },  /* EIE: Error interrupt enable */
   { "\x20\x44\xc5\x30", 3, 1 },  /* HDSEL: Half-duplex selection */
   { "\x10\xd0\x52", 6, 1 },  /* DMAR: DMA enable receiver */
   { "\x10\xd0\x54", 7, 1 },  /* DMAT: DMA enable transmitter */
   { "\x49\x44\xc5", 8, 1 },  /* RTSE: RTS enable */
   { "\x0d\x44\xc5", 9, 1 },  /* CTSE: CTS enable */
   { "\x0d\x44\xc9\x14", 10, 1 },  /* CTSIE: CTS interrupt enable */
   { "\x3d\x64\x84\x25\x30", 12, 1 },  /* OVRDIS: Overrun Disable */
   { "\x10\x44\x85", 13, 1 },  /* DDRE: DMA Disable on Reception               Error */
   { "\x10\x53\x40", 14, 1 },  /* DEM: Driver enable mode */
   { "\x10\x54\x00", 15, 1 },  /* DEP: Driver enable polarity               selection */
   { "\x5d\x54\xc0", 20, 2 },  /* WUS: Wakeup from Stop mode interrupt flag               selection */
   { "\x5d\x51\x89\x14", 22, 1 },  /* WUFIE: Wakeup from Stop mode interrupt               enable */
   { "\x51\x81\x94\x24\x50", 23, 1 },  /* TXFTIE: TXFTIE */
   { "\x49\x81\x94\x0c\x61\xc0", 25, 3 },  /* RXFTCFG: RXFTCFG */
   { "\x49\x81\x94\x24\x50", 28, 1 },  /* RXFTIE: RXFTIE */
   { "\x51\x81\x94\x0c\x61\xc0", 29, 3 },  /* TXFTCFG: TXFTCFG */
};

const Field_t LPUART1_BRR_fields[] = {
   { "\x09\x24\x80", 0, 20 },  /* BRR: BRR */
};

const Field_t LPUART1_RQR_fields[] = {
   { "\x4c\x22\xd2\x44", 1, 1 },  /* SBKRQ: Send break request */
   { "\x34\xd4\x91", 2, 1 },  /* MMRQ: Mute mode request */
   { "\x49\x81\x92\x44", 3, 1 },  /* RXFRQ: Receive data flush request */
   { "\x51\x81\x92\x44", 4, 1 },  /* TXFRQ: TXFRQ */
};

const Field_t LPUART1_ISR_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: PE */
   { "\x18\x50", 1, 1 },  /* FE: FE */
   { "\x38\x60", 2, 1 },  /* NF: NF */
   { "\x3d\x21\x40", 3, 1 },  /* ORE: ORE */
   { "\x24\x43\x05", 4, 1 },  /* IDLE: IDLE */
   { "\x49\x83\x85", 5, 1 },  /* RXNE: RXNE */
   { "\x50\x30", 6, 1 },  /* TC: TC */
   { "\x51\x81\x40", 7, 1 },  /* TXE: TXE */
   { "\x0d\x44\xc9\x18", 9, 1 },  /* CTSIF: CTSIF */
   { "\x0d\x44\xc0", 10, 1 },  /* CTS: CTS */
   { "\x09\x54\xd9", 16, 1 },  /* BUSY: BUSY */
   { "\x0c\xd1\x80", 17, 1 },  /* CMF: CMF */
   { "\x4c\x22\xc6", 18, 1 },  /* SBKF: SBKF */
   { "\x49\x75\x40", 19, 1 },  /* RWU: RWU */
   { "\x5d\x51\x80", 20, 1 },  /* WUF: WUF */
   { "\x50\x50\x43\x2c", 21, 1 },  /* TEACK: TEACK */
   { "\x48\x50\x43\x2c", 22, 1 },  /* REACK: REACK */
   { "\x51\x81\x85", 23, 1 },  /* TXFE: TXFE */
   { "\x49\x81\x86", 24, 1 },  /* RXFF: RXFF */
   { "\x49\x81\x94", 26, 1 },  /* RXFT: RXFT */
   { "\x51\x81\x94", 27, 1 },  /* TXFT: TXFT */
};

const Field_t LPUART1_ICR_fields[] = {
   { "\x40\x50\xc6", 0, 1 },  /* PECF: Parity error clear flag */
   { "\x18\x50\xc6", 1, 1 },  /* FECF: Framing error clear flag */
   { "\x38\x31\x80", 2, 1 },  /* NCF: Noise detected clear flag */
   { "\x3d\x21\x43\x18", 3, 1 },  /* ORECF: Overrun error clear flag */
   { "\x24\x43\x05\x0c\x60", 4, 1 },  /* IDLECF: Idle line detected clear               flag */
   { "\x50\x30\xc6", 6, 1 },  /* TCCF: Transmission complete clear               flag */
   { "\x0d\x44\xc3\x18", 9, 1 },  /* CTSCF: CTS clear flag */
   { "\x0c\xd0\xc6", 17, 1 },  /* CMCF: Character match clear flag */
   { "\x5d\x50\xc6", 20, 1 },  /* WUCF: Wakeup from Stop mode clear               flag */
};

const Field_t LPUART1_RDR_fields[] = {
   { "\x48\x44\x80", 0, 9 },  /* RDR: Receive data value */
};

const Field_t LPUART1_TDR_fields[] = {
   { "\x50\x44\x80", 0, 9 },  /* TDR: Transmit data value */
};

const Field_t LPUART1_PRESC_fields[] = {
   { "\x41\x21\x53\x0c\x13\x05\x48", 0, 4 },  /* PRESCALER: PRESCALER */
};

const Register_t LPUART1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, LPUART1_CR1_fields, 29}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, LPUART1_CR2_fields, 9}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, LPUART1_CR3_fields, 17}, /* CR3: Control register 3 */
   {"\x09\x24\x80", 12, 32, 0, LPUART1_BRR_fields, 1}, /* BRR: Baud rate register */
   {"\x49\x14\x80", 24, 32, 0, LPUART1_RQR_fields, 4}, /* RQR: Request register */
   {"\x25\x34\x80", 28, 32, 0, LPUART1_ISR_fields, 21}, /* ISR: Interrupt & status           register */
   {"\x24\x34\x80", 32, 32, 0, LPUART1_ICR_fields, 9}, /* ICR: Interrupt flag clear register */
   {"\x48\x44\x80", 36, 32, 0, LPUART1_RDR_fields, 1}, /* RDR: Receive data register */
   {"\x50\x44\x80", 40, 32, 0, LPUART1_TDR_fields, 1}, /* TDR: Transmit data register */
   {"\x41\x21\x53\x0c", 44, 32, 0, LPUART1_PRESC_fields, 1}, /* PRESC: Prescaler register */
};

const Field_t UCPD1_CFG1_fields[] = {
   { "\x20\x22\x54\x0c\xc2\xc4\x25\x60", 0, 6 },  /* HBITCLKDIV: HBITCLKDIV */
   { "\x24\x64\x87\x05\x00", 6, 5 },  /* IFRGAP: IFRGAP */
   { "\x51\x20\x4e\x4d\x72\x4e", 11, 5 },  /* TRANSWIN: TRANSWIN */
   { "\x41\x30\xe5\x55\x30\x90\x10\x33\x0b", 17, 3 },  /* PSC_USBPDCLK: PSC_USBPDCLK */
   { "\x49\x83\xd2\x11\x31\x54\x14\xe0", 20, 9 },  /* RXORDSETEN: RXORDSETEN */
   { "\x51\x81\x0d\x04\x53\x80", 29, 1 },  /* TXDMAEN: TXDMAEN */
   { "\x49\x81\x0d\x04\x53\x80", 30, 1 },  /* RXDMAEN: RXDMAEN */
   { "\x54\x34\x04\x14\xe0", 31, 1 },  /* UCPDEN: UCPDEN */
};

const Field_t UCPD1_CFG2_fields[] = {
   { "\x49\x81\x89\x31\x41\x09\x4c", 0, 1 },  /* RXFILTDIS: RXFILTDIS */
   { "\x49\x81\x89\x31\x47\x4e\x78", 1, 1 },  /* RXFILT2N3: RXFILT2N3 */
   { "\x18\xf4\x83\x14\x33\x0b", 2, 1 },  /* FORCECLK: FORCECLK */
   { "\x5d\x54\x05\x38", 3, 1 },  /* WUPEN: WUPEN */
};

const Field_t UCPD1_CR_fields[] = {
   { "\x51\x83\x4f\x10\x50", 0, 2 },  /* TXMODE: TXMODE */
   { "\x51\x84\xc5\x38\x40", 2, 1 },  /* TXSEND: TXSEND */
   { "\x51\x82\x12\x4d\x40", 3, 1 },  /* TXHRST: TXHRST */
   { "\x49\x83\x4f\x10\x50", 4, 1 },  /* RXMODE: RXMODE */
   { "\x40\x86\x52\x60\x53\x80", 5, 1 },  /* PHYRXEN: PHYRXEN */
   { "\x40\x86\x43\x0d\x31\x4c", 6, 1 },  /* PHYCCSEL: PHYCCSEL */
   { "\x04\xe0\x53\x54\x23\x4f\x10\x50", 7, 2 },  /* ANASUBMODE: ANASUBMODE */
   { "\x04\xe0\x4d\x3c\x41\x40", 9, 1 },  /* ANAMODE: ANAMODE */
   { "\x0c\x31\x4e\x04\x23\x05", 10, 2 },  /* CCENABLE: CCENABLE */
   { "\x19\x24\xd2\x60\x53\x80", 16, 1 },  /* FRSRXEN: FRSRXEN */
   { "\x19\x24\xd4\x60", 17, 1 },  /* FRSTX: FRSTX */
   { "\x48\x40\xc8", 18, 1 },  /* RDCH: RDCH */
   { "\x0c\x37\x14\x0c\x42\x53", 20, 1 },  /* CC1TCDIS: CC1TCDIS */
   { "\x0c\x37\x54\x0c\x42\x53", 21, 1 },  /* CC2TCDIS: CC2TCDIS */
};

const Field_t UCPD1_IMR_fields[] = {
   { "\x51\x82\x53\x24\x50", 0, 1 },  /* TXISIE: TXISIE */
   { "\x51\x83\x53\x1c\x42\x53\x0c\x91\x40", 1, 1 },  /* TXMSGDISCIE: TXMSGDISCIE */
   { "\x51\x83\x53\x1d\x31\x4e\x50\x91\x40", 2, 1 },  /* TXMSGSENTIE: TXMSGSENTIE */
   { "\x51\x83\x53\x1c\x10\x94\x24\x50", 3, 1 },  /* TXMSGABTIE: TXMSGABTIE */
   { "\x21\x24\xd4\x10\x94\xc3\x24\x50", 4, 1 },  /* HRSTDISCIE: HRSTDISCIE */
   { "\x21\x24\xd4\x4c\x53\x94\x24\x50", 5, 1 },  /* HRSTSENTIE: HRSTSENTIE */
   { "\x51\x85\x4e\x10\x91\x40", 6, 1 },  /* TXUNDIE: TXUNDIE */
   { "\x49\x83\x85\x24\x50", 8, 1 },  /* RXNEIE: RXNEIE */
   { "\x49\x83\xd2\x10\x41\x54\x24\x50", 9, 1 },  /* RXORDDETIE: RXORDDETIE */
   { "\x49\x82\x12\x4d\x41\x05\x50\x91\x40", 10, 1 },  /* RXHRSTDETIE: RXHRSTDETIE */
   { "\x49\x83\xd6\x48\x91\x40", 11, 1 },  /* RXOVRIE: RXOVRIE */
   { "\x49\x83\x53\x1c\x53\x84\x24\x50", 12, 1 },  /* RXMSGENDIE: RXMSGENDIE */
   { "\x51\x94\x05\x0c\x55\x94\x70\x91\x40", 14, 1 },  /* TYPECEVT1IE: TYPECEVT1IE */
   { "\x51\x94\x05\x0c\x55\x94\x74\x91\x40", 15, 1 },  /* TYPECEVT2IE: TYPECEVT2IE */
   { "\x19\x24\xc5\x59\x42\x45", 20, 1 },  /* FRSEVTIE: FRSEVTIE */
};

const Field_t UCPD1_SR_fields[] = {
   { "\x51\x82\x53", 0, 1 },  /* TXIS: TXIS */
   { "\x51\x83\x53\x1c\x42\x53\x0c", 1, 1 },  /* TXMSGDISC: TXMSGDISC */
   { "\x51\x83\x53\x1d\x31\x4e\x50", 2, 1 },  /* TXMSGSENT: TXMSGSENT */
   { "\x51\x83\x53\x1c\x10\x94", 3, 1 },  /* TXMSGABT: TXMSGABT */
   { "\x21\x24\xd4\x10\x94\xc3", 4, 1 },  /* HRSTDISC: HRSTDISC */
   { "\x21\x24\xd4\x4c\x53\x94", 5, 1 },  /* HRSTSENT: HRSTSENT */
   { "\x51\x85\x4e\x10", 6, 1 },  /* TXUND: TXUND */
   { "\x49\x83\x85", 8, 1 },  /* RXNE: RXNE */
   { "\x49\x83\xd2\x10\x41\x54", 9, 1 },  /* RXORDDET: RXORDDET */
   { "\x49\x82\x12\x4d\x41\x05\x50", 10, 1 },  /* RXHRSTDET: RXHRSTDET */
   { "\x49\x83\xd6\x48", 11, 1 },  /* RXOVR: RXOVR */
   { "\x49\x83\x53\x1c\x53\x84", 12, 1 },  /* RXMSGEND: RXMSGEND */
   { "\x49\x81\x52\x48", 13, 1 },  /* RXERR: RXERR */
   { "\x51\x94\x05\x0c\x55\x94\x70", 14, 1 },  /* TYPECEVT1: TYPECEVT1 */
   { "\x51\x94\x05\x0c\x55\x94\x74", 15, 1 },  /* TYPECEVT2: TYPECEVT2 */
   { "\x51\x94\x05\x0e\x55\x93\x50\x15\x05\x94\x30\xdc", 16, 2 },  /* TYPEC_VSTATE_CC1: TYPEC_VSTATE_CC1 */
   { "\x51\x94\x05\x0e\x55\x93\x50\x15\x05\x94\x30\xdd", 18, 2 },  /* TYPEC_VSTATE_CC2: TYPEC_VSTATE_CC2 */
   { "\x19\x24\xc5\x59\x40", 20, 1 },  /* FRSEVT: FRSEVT */
};

const Field_t UCPD1_ICR_fields[] = {
   { "\x51\x83\x53\x1c\x42\x53\x0c\x31\x80", 1, 1 },  /* TXMSGDISCCF: TXMSGDISCCF */
   { "\x51\x83\x53\x1d\x31\x4e\x50\x31\x80", 2, 1 },  /* TXMSGSENTCF: TXMSGSENTCF */
   { "\x51\x83\x53\x1c\x10\x94\x0c\x60", 3, 1 },  /* TXMSGABTCF: TXMSGABTCF */
   { "\x21\x24\xd4\x10\x94\xc3\x0c\x60", 4, 1 },  /* HRSTDISCCF: HRSTDISCCF */
   { "\x21\x24\xd4\x4c\x53\x94\x0c\x60", 5, 1 },  /* HRSTSENTCF: HRSTSENTCF */
   { "\x51\x85\x4e\x10\x31\x80", 6, 1 },  /* TXUNDCF: TXUNDCF */
   { "\x49\x83\xd2\x10\x41\x54\x0c\x60", 9, 1 },  /* RXORDDETCF: RXORDDETCF */
   { "\x49\x82\x12\x4d\x41\x05\x50\x31\x80", 10, 1 },  /* RXHRSTDETCF: RXHRSTDETCF */
   { "\x49\x83\xd6\x48\x31\x80", 11, 1 },  /* RXOVRCF: RXOVRCF */
   { "\x49\x83\x53\x1c\x53\x84\x0c\x60", 12, 1 },  /* RXMSGENDCF: RXMSGENDCF */
   { "\x51\x94\x05\x0c\x55\x94\x70\x31\x80", 14, 1 },  /* TYPECEVT1CF: TYPECEVT1CF */
   { "\x51\x94\x05\x0c\x55\x94\x74\x31\x80", 15, 1 },  /* TYPECEVT2CF: TYPECEVT2CF */
   { "\x19\x24\xc5\x59\x40\xc6", 20, 1 },  /* FRSEVTCF: FRSEVTCF */
};

const Field_t UCPD1_TX_ORDSET_fields[] = {
   { "\x51\x83\xd2\x11\x31\x54", 0, 20 },  /* TXORDSET: TXORDSET */
};

const Field_t UCPD1_TX_PAYSZ_fields[] = {
   { "\x51\x84\x01\x65\x36\x80", 0, 10 },  /* TXPAYSZ: TXPAYSZ */
};

const Field_t UCPD1_TXDR_fields[] = {
   { "\x51\x81\x01\x50\x10", 0, 8 },  /* TXDATA: TXDATA */
};

const Field_t UCPD1_RX_ORDSET_fields[] = {
   { "\x49\x83\xd2\x11\x31\x54", 0, 3 },  /* RXORDSET: RXORDSET */
   { "\x49\x84\xcf\x41\xe3\xc6\x7c", 3, 1 },  /* RXSOP3OF4: RXSOP3OF4 */
   { "\x49\x84\xcf\x40\xb2\x4e\x58\x13\x09\x10", 4, 3 },  /* RXSOPKINVALID: RXSOPKINVALID */
};

const Field_t UCPD1_RX_PAYSZ_fields[] = {
   { "\x49\x84\x01\x65\x36\x80", 0, 10 },  /* RXPAYSZ: RXPAYSZ */
};

const Field_t UCPD1_RXDR_fields[] = {
   { "\x49\x81\x01\x50\x10", 0, 8 },  /* RXDATA: RXDATA */
};

const Field_t UCPD1_RX_ORDEXT1_fields[] = {
   { "\x49\x84\xcf\x41\x87\x00", 0, 20 },  /* RXSOPX1: RXSOPX1 */
};

const Field_t UCPD1_RX_ORDEXT2_fields[] = {
   { "\x49\x84\xcf\x41\x87\x40", 0, 20 },  /* RXSOPX2: RXSOPX2 */
};

const Register_t UCPD1_registers[] = {
   {"\x0c\x61\xdc", 0, 32, 0, UCPD1_CFG1_fields, 8}, /* CFG1: UCPD configuration register 1 */
   {"\x0c\x61\xdd", 4, 32, 0, UCPD1_CFG2_fields, 4}, /* CFG2: UCPD configuration register 2 */
   {"\x0d\x20", 12, 32, 0, UCPD1_CR_fields, 14}, /* CR: UCPD configuration register 2 */
   {"\x24\xd4\x80", 16, 32, 0, UCPD1_IMR_fields, 15}, /* IMR: UCPD Interrupt Mask Register */
   {"\x4d\x20", 20, 32, 0, UCPD1_SR_fields, 18}, /* SR: UCPD Status Register */
   {"\x24\x34\x80", 24, 32, 0, UCPD1_ICR_fields, 13}, /* ICR: UCPD Interrupt Clear Register */
   {"\x51\x89\x4f\x48\x44\xc5\x50", 28, 32, 0, UCPD1_TX_ORDSET_fields, 1}, /* TX_ORDSET: UCPD Tx Ordered Set Type           Register */
   {"\x51\x89\x50\x05\x94\xda", 32, 32, 0, UCPD1_TX_PAYSZ_fields, 1}, /* TX_PAYSZ: UCPD Tx Paysize Register */
   {"\x51\x81\x12", 36, 32, 0, UCPD1_TXDR_fields, 1}, /* TXDR: UCPD Tx Data Register */
   {"\x49\x89\x4f\x48\x44\xc5\x50", 40, 32, 0, UCPD1_RX_ORDSET_fields, 3}, /* RX_ORDSET: UCPD Rx Ordered Set Register */
   {"\x49\x89\x50\x05\x94\xda", 44, 32, 0, UCPD1_RX_PAYSZ_fields, 1}, /* RX_PAYSZ: UCPD Rx Paysize Register */
   {"\x49\x81\x12", 48, 32, 0, UCPD1_RXDR_fields, 1}, /* RXDR: UCPD Rx Data Register */
   {"\x49\x89\x4f\x48\x41\x58\x51\xc0", 52, 32, 0, UCPD1_RX_ORDEXT1_fields, 1}, /* RX_ORDEXT1: UCPD Rx Ordered Set Extension Register           1 */
   {"\x49\x89\x4f\x48\x41\x58\x51\xd0", 56, 32, 0, UCPD1_RX_ORDEXT2_fields, 1}, /* RX_ORDEXT2: UCPD Rx Ordered Set Extension Register           2 */
};

const Field_t FDCAN_CREL_fields[] = {
   { "\x10\x16\x40", 0, 8 },  /* DAY: DAY */
   { "\x34\xf3\x80", 8, 8 },  /* MON: MON */
   { "\x64\x50\x52", 16, 4 },  /* YEAR: YEAR */
   { "\x4d\x50\x93\x50\x54\x00", 20, 4 },  /* SUBSTEP: SUBSTEP */
   { "\x4d\x41\x50", 24, 4 },  /* STEP: STEP */
   { "\x48\x53\x00", 28, 4 },  /* REL: REL */
};

const Field_t FDCAN_ENDN_fields[] = {
   { "\x15\x45\x80", 0, 32 },  /* ETV: ETV */
};

const Field_t FDCAN_DBTP_fields[] = {
   { "\x11\x32\x97", 0, 4 },  /* DSJW: DSJW */
   { "\x11\x44\xc5\x1d\xd0", 4, 4 },  /* DTSEG2: DTSEG2 */
   { "\x11\x44\xc5\x1d\xc0", 8, 5 },  /* DTSEG1: DTSEG1 */
   { "\x10\x24\x90", 16, 5 },  /* DBRP: DBRP */
   { "\x50\x40\xc0", 23, 1 },  /* TDC: TDC */
};

const Field_t FDCAN_TEST_fields[] = {
   { "\x30\x20\xcb", 4, 1 },  /* LBCK: LBCK */
   { "\x51\x80", 5, 2 },  /* TX: TX */
   { "\x49\x80", 7, 1 },  /* RX: RX */
};

const Field_t FDCAN_RWD_fields[] = {
   { "\x5c\x40\xc0", 0, 8 },  /* WDC: WDC */
   { "\x5c\x45\x80", 8, 8 },  /* WDV: WDV */
};

const Field_t FDCAN_CCCR_fields[] = {
   { "\x24\xe2\x54", 0, 1 },  /* INIT: INIT */
   { "\x0c\x31\x40", 1, 1 },  /* CCE: CCE */
   { "\x05\x33\x40", 2, 1 },  /* ASM: ASM */
   { "\x0d\x30\x40", 3, 1 },  /* CSA: CSA */
   { "\x0d\x34\x80", 4, 1 },  /* CSR: CSR */
   { "\x34\xf3\x80", 5, 1 },  /* MON: MON */
   { "\x10\x14\x80", 6, 1 },  /* DAR: DAR */
   { "\x50\x54\xd4", 7, 1 },  /* TEST: TEST */
   { "\x18\x43\xc5", 8, 1 },  /* FDOE: FDOE */
   { "\x09\x24\xc5", 9, 1 },  /* BRSE: BRSE */
   { "\x41\x82\x04", 12, 1 },  /* PXHD: PXHD */
   { "\x14\x60\x89", 13, 1 },  /* EFBI: EFBI */
   { "\x51\x84\x00", 14, 1 },  /* TXP: TXP */
   { "\x38\x94\xcf", 15, 1 },  /* NISO: NISO */
};

const Field_t FDCAN_NBTP_fields[] = {
   { "\x51\x31\x47\x74", 0, 7 },  /* TSEG2: TSEG2 */
   { "\x39\x44\xc5\x1d\xc0", 8, 8 },  /* NTSEG1: NTSEG1 */
   { "\x38\x24\x90", 16, 9 },  /* NBRP: NBRP */
   { "\x39\x32\x97", 25, 7 },  /* NSJW: NSJW */
};

const Field_t FDCAN_TSCC_fields[] = {
   { "\x51\x34\xc0", 0, 2 },  /* TSS: TSS */
   { "\x50\x34\x00", 16, 4 },  /* TCP: TCP */
};

const Field_t FDCAN_TSCV_fields[] = {
   { "\x51\x30\xc0", 0, 16 },  /* TSC: TSC */
};

const Field_t FDCAN_TOCC_fields[] = {
   { "\x15\x43\xc3", 0, 1 },  /* ETOC: ETOC */
   { "\x50\xf4\xc0", 1, 2 },  /* TOS: TOS */
   { "\x50\xf4\x00", 16, 16 },  /* TOP: TOP */
};

const Field_t FDCAN_TOCV_fields[] = {
   { "\x50\xf0\xc0", 0, 16 },  /* TOC: TOC */
};

const Field_t FDCAN_ECR_fields[] = {
   { "\x50\x50\xc0", 0, 8 },  /* TEC: TEC */
   { "\x51\x21\x43", 8, 7 },  /* TREC: TREC */
   { "\x49\x00", 15, 1 },  /* RP: RP */
   { "\x0c\x53\x00", 16, 8 },  /* CEL: CEL */
};

const Field_t FDCAN_PSR_fields[] = {
   { "\x30\x50\xc0", 0, 3 },  /* LEC: LEC */
   { "\x04\x35\x00", 3, 2 },  /* ACT: ACT */
   { "\x15\x00", 5, 1 },  /* EP: EP */
   { "\x15\x70", 6, 1 },  /* EW: EW */
   { "\x08\xf0", 7, 1 },  /* BO: BO */
   { "\x10\xc1\x43", 8, 3 },  /* DLEC: DLEC */
   { "\x48\x54\xc9", 11, 1 },  /* RESI: RESI */
   { "\x48\x24\x93", 12, 1 },  /* RBRS: RBRS */
   { "\x48\x51\x0c", 13, 1 },  /* REDL: REDL */
   { "\x41\x81\x40", 14, 1 },  /* PXE: PXE */
   { "\x50\x40\xd6", 16, 7 },  /* TDCV: TDCV */
};

const Field_t FDCAN_TDCR_fields[] = {
   { "\x50\x40\xc6", 0, 7 },  /* TDCF: TDCF */
   { "\x50\x40\xcf", 8, 7 },  /* TDCO: TDCO */
};

const Field_t FDCAN_IR_fields[] = {
   { "\x48\x66\xce", 0, 1 },  /* RF0N: RF0N */
   { "\x48\x66\xd7", 1, 1 },  /* RF0W: RF0W */
   { "\x48\x66\xc6", 2, 1 },  /* RF0F: RF0F */
   { "\x48\x66\xcc", 3, 1 },  /* RF0L: RF0L */
   { "\x48\x67\x0e", 4, 1 },  /* RF1N: RF1N */
   { "\x48\x67\x17", 5, 1 },  /* RF1W: RF1W */
   { "\x48\x67\x06", 6, 1 },  /* RF1F: RF1F */
   { "\x48\x67\x0c", 7, 1 },  /* RF1L: RF1L */
   { "\x21\x03\x40", 8, 1 },  /* HPM: HPM */
   { "\x50\x30", 9, 1 },  /* TC: TC */
   { "\x50\x31\x80", 10, 1 },  /* TCF: TCF */
   { "\x50\x61\x40", 11, 1 },  /* TFE: TFE */
   { "\x50\x51\x8e", 12, 1 },  /* TEFN: TEFN */
   { "\x50\x51\x97", 13, 1 },  /* TEFW: TEFW */
   { "\x50\x51\x86", 14, 1 },  /* TEFF: TEFF */
   { "\x50\x51\x8c", 15, 1 },  /* TEFL: TEFL */
   { "\x51\x35\xc0", 16, 1 },  /* TSW: TSW */
   { "\x35\x20\x46", 17, 1 },  /* MRAF: MRAF */
   { "\x50\xf3\xc0", 18, 1 },  /* TOO: TOO */
   { "\x11\x26\x00", 19, 1 },  /* DRX: DRX */
   { "\x14\xc3\xc0", 22, 1 },  /* ELO: ELO */
   { "\x15\x00", 23, 1 },  /* EP: EP */
   { "\x15\x70", 24, 1 },  /* EW: EW */
   { "\x08\xf0", 25, 1 },  /* BO: BO */
   { "\x5c\x42\x40", 26, 1 },  /* WDI: WDI */
   { "\x40\x50\x40", 27, 1 },  /* PEA: PEA */
   { "\x40\x51\x00", 28, 1 },  /* PED: PED */
   { "\x05\x20\x40", 29, 1 },  /* ARA: ARA */
};

const Field_t FDCAN_IE_fields[] = {
   { "\x48\x66\xce\x14", 0, 1 },  /* RF0NE: RF0NE */
   { "\x48\x66\xd7\x14", 1, 1 },  /* RF0WE: RF0WE */
   { "\x48\x66\xc6\x14", 2, 1 },  /* RF0FE: RF0FE */
   { "\x48\x66\xcc\x14", 3, 1 },  /* RF0LE: RF0LE */
   { "\x48\x67\x0e\x14", 4, 1 },  /* RF1NE: RF1NE */
   { "\x48\x67\x17\x14", 5, 1 },  /* RF1WE: RF1WE */
   { "\x48\x67\x06\x14", 6, 1 },  /* RF1FE: RF1FE */
   { "\x48\x67\x0c\x14", 7, 1 },  /* RF1LE: RF1LE */
   { "\x21\x03\x45", 8, 1 },  /* HPME: HPME */
   { "\x50\x31\x40", 9, 1 },  /* TCE: TCE */
   { "\x50\x31\x85", 10, 1 },  /* TCFE: TCFE */
   { "\x50\x61\x45", 11, 1 },  /* TFEE: TFEE */
   { "\x50\x51\x8e\x14", 12, 1 },  /* TEFNE: TEFNE */
   { "\x50\x51\x97\x14", 13, 1 },  /* TEFWE: TEFWE */
   { "\x50\x51\x86\x14", 14, 1 },  /* TEFFE: TEFFE */
   { "\x50\x51\x8c\x14", 15, 1 },  /* TEFLE: TEFLE */
   { "\x51\x35\xc5", 16, 1 },  /* TSWE: TSWE */
   { "\x35\x20\x46\x14", 17, 1 },  /* MRAFE: MRAFE */
   { "\x50\xf3\xc5", 18, 1 },  /* TOOE: TOOE */
   { "\x11\x26\x00", 19, 1 },  /* DRX: DRX */
   { "\x08\x50\xc5", 20, 1 },  /* BECE: BECE */
   { "\x08\x55\x45", 21, 1 },  /* BEUE: BEUE */
   { "\x14\xc3\xc5", 22, 1 },  /* ELOE: ELOE */
   { "\x15\x01\x40", 23, 1 },  /* EPE: EPE */
   { "\x15\x71\x40", 24, 1 },  /* EWE: EWE */
   { "\x08\xf1\x40", 25, 1 },  /* BOE: BOE */
   { "\x5c\x42\x45", 26, 1 },  /* WDIE: WDIE */
   { "\x40\x50\x45", 27, 1 },  /* PEAE: PEAE */
   { "\x40\x51\x05", 28, 1 },  /* PEDE: PEDE */
   { "\x05\x20\x45", 29, 1 },  /* ARAE: ARAE */
};

const Field_t FDCAN_ILS_fields[] = {
   { "\x48\x66\xce\x30", 0, 1 },  /* RF0NL: RF0NL */
   { "\x48\x66\xd7\x30", 1, 1 },  /* RF0WL: RF0WL */
   { "\x48\x66\xc6\x30", 2, 1 },  /* RF0FL: RF0FL */
   { "\x48\x66\xcc\x30", 3, 1 },  /* RF0LL: RF0LL */
   { "\x48\x67\x0e\x30", 4, 1 },  /* RF1NL: RF1NL */
   { "\x48\x67\x17\x30", 5, 1 },  /* RF1WL: RF1WL */
   { "\x48\x67\x06\x30", 6, 1 },  /* RF1FL: RF1FL */
   { "\x48\x67\x0c\x30", 7, 1 },  /* RF1LL: RF1LL */
   { "\x21\x03\x4c", 8, 1 },  /* HPML: HPML */
   { "\x50\x33\x00", 9, 1 },  /* TCL: TCL */
   { "\x50\x31\x8c", 10, 1 },  /* TCFL: TCFL */
   { "\x50\x61\x4c", 11, 1 },  /* TFEL: TFEL */
   { "\x50\x51\x8e\x30", 12, 1 },  /* TEFNL: TEFNL */
   { "\x50\x51\x97\x30", 13, 1 },  /* TEFWL: TEFWL */
   { "\x50\x51\x86\x30", 14, 1 },  /* TEFFL: TEFFL */
   { "\x50\x51\x8c\x30", 15, 1 },  /* TEFLL: TEFLL */
   { "\x51\x35\xcc", 16, 1 },  /* TSWL: TSWL */
   { "\x35\x20\x46\x30", 17, 1 },  /* MRAFL: MRAFL */
   { "\x50\xf3\xcc", 18, 1 },  /* TOOL: TOOL */
   { "\x11\x26\x0c", 19, 1 },  /* DRXL: DRXL */
   { "\x08\x50\xcc", 20, 1 },  /* BECL: BECL */
   { "\x08\x55\x4c", 21, 1 },  /* BEUL: BEUL */
   { "\x14\xc3\xcc", 22, 1 },  /* ELOL: ELOL */
   { "\x15\x03\x00", 23, 1 },  /* EPL: EPL */
   { "\x15\x73\x00", 24, 1 },  /* EWL: EWL */
   { "\x08\xf3\x00", 25, 1 },  /* BOL: BOL */
   { "\x5c\x42\x4c", 26, 1 },  /* WDIL: WDIL */
   { "\x40\x50\x4c", 27, 1 },  /* PEAL: PEAL */
   { "\x40\x51\x0c", 28, 1 },  /* PEDL: PEDL */
   { "\x05\x20\x4c", 29, 1 },  /* ARAL: ARAL */
};

const Field_t FDCAN_ILE_fields[] = {
   { "\x14\x93\x94\x6c", 0, 1 },  /* EINT0: EINT0 */
   { "\x14\x93\x94\x70", 1, 1 },  /* EINT1: EINT1 */
};

const Field_t FDCAN_RXGFC_fields[] = {
   { "\x49\x21\x85", 0, 1 },  /* RRFE: RRFE */
   { "\x49\x21\x93", 1, 1 },  /* RRFS: RRFS */
   { "\x04\xe1\x85", 2, 2 },  /* ANFE: ANFE */
   { "\x04\xe1\x93", 4, 2 },  /* ANFS: ANFS */
};

const Field_t FDCAN_XIDAM_fields[] = {
   { "\x14\x91\x0d", 0, 29 },  /* EIDM: EIDM */
};

const Field_t FDCAN_HPMS_fields[] = {
   { "\x08\x91\x18", 0, 6 },  /* BIDX: BIDX */
   { "\x35\x32\x40", 6, 2 },  /* MSI: MSI */
   { "\x18\x91\x18", 8, 7 },  /* FIDX: FIDX */
   { "\x18\xc4\xd4", 15, 1 },  /* FLST: FLST */
};

const Field_t FDCAN_RXF0S_fields[] = {
   { "\x19\xb1\x8c", 0, 7 },  /* F0FL: F0FL */
   { "\x19\xb1\xc9", 8, 6 },  /* F0GI: F0GI */
   { "\x19\xb4\x09", 16, 6 },  /* F0PI: F0PI */
   { "\x19\xb1\x80", 24, 1 },  /* F0F: F0F */
   { "\x48\x66\xcc", 25, 1 },  /* RF0L: RF0L */
};

const Field_t FDCAN_RXF0A_fields[] = {
   { "\x19\xb0\x49", 0, 6 },  /* F0AI: F0AI */
};

const Field_t FDCAN_RXF1S_fields[] = {
   { "\x19\xc1\x8c", 0, 7 },  /* F1FL: F1FL */
   { "\x19\xc1\xc9", 8, 6 },  /* F1GI: F1GI */
   { "\x19\xc4\x09", 16, 6 },  /* F1PI: F1PI */
   { "\x19\xc1\x80", 24, 1 },  /* F1F: F1F */
   { "\x48\x67\x0c", 25, 1 },  /* RF1L: RF1L */
   { "\x10\xd4\xc0", 30, 2 },  /* DMS: DMS */
};

const Field_t FDCAN_RXF1A_fields[] = {
   { "\x19\xc0\x49", 0, 6 },  /* F1AI: F1AI */
};

const Field_t FDCAN_TXBC_fields[] = {
   { "\x50\x24\xc1", 2, 14 },  /* TBSA: TBSA */
   { "\x38\x45\x02", 16, 6 },  /* NDTB: NDTB */
   { "\x50\x64\x53", 24, 6 },  /* TFQS: TFQS */
   { "\x50\x64\x4d", 30, 1 },  /* TFQM: TFQM */
};

const Field_t FDCAN_TXFQS_fields[] = {
   { "\x50\x61\x8c", 0, 6 },  /* TFFL: TFFL */
   { "\x50\x61\xc9", 8, 5 },  /* TFGI: TFGI */
   { "\x50\x64\x50\x24", 16, 5 },  /* TFQPI: TFQPI */
   { "\x50\x64\x46", 21, 1 },  /* TFQF: TFQF */
};

const Field_t FDCAN_TXBRP_fields[] = {
   { "\x51\x24\x00", 0, 32 },  /* TRP: TRP */
};

const Field_t FDCAN_TXBAR_fields[] = {
   { "\x05\x20", 0, 32 },  /* AR: AR */
};

const Field_t FDCAN_TXBCR_fields[] = {
   { "\x0d\x20", 0, 32 },  /* CR: CR */
};

const Field_t FDCAN_TXBTO_fields[] = {
   { "\x50\xf0", 0, 32 },  /* TO: TO */
};

const Field_t FDCAN_TXBCF_fields[] = {
   { "\x0c\x60", 0, 32 },  /* CF: CF */
};

const Field_t FDCAN_TXBTIE_fields[] = {
   { "\x50\x91\x40", 0, 32 },  /* TIE: TIE */
};

const Field_t FDCAN_TXBCIE_fields[] = {
   { "\x0c\x62\x45", 0, 32 },  /* CFIE: CFIE */
};

const Field_t FDCAN_TXEFS_fields[] = {
   { "\x14\x61\x8c", 0, 6 },  /* EFFL: EFFL */
   { "\x14\x61\xc9", 8, 5 },  /* EFGI: EFGI */
   { "\x14\x64\x09", 16, 5 },  /* EFPI: EFPI */
   { "\x14\x61\x80", 24, 1 },  /* EFF: EFF */
   { "\x50\x51\x8c", 25, 1 },  /* TEFL: TEFL */
};

const Field_t FDCAN_TXEFA_fields[] = {
   { "\x14\x60\x49", 0, 5 },  /* EFAI: EFAI */
};

const Field_t FDCAN_CKDIV_fields[] = {
   { "\x40\x42\x56", 0, 4 },  /* PDIV: input clock divider. the APB clock could               be divided prior to be used by the CAN               sub */
};

const Register_t FDCAN_registers[] = {
   {"\x0d\x21\x4c", 0, 32, 0, FDCAN_CREL_fields, 6}, /* CREL: FDCAN Core Release Register */
   {"\x14\xe1\x0e", 4, 32, 0, FDCAN_ENDN_fields, 1}, /* ENDN: FDCAN Core Release Register */
   {"\x10\x25\x10", 12, 32, 0, FDCAN_DBTP_fields, 5}, /* DBTP: This register is only writable if bits           CCCR.CCE and CCCR.INIT are set. The CAN bit time may be           programed in the range of 4 to 25 time quanta. The CAN           time quantum may be programmed in the range of 1 to 1024           FDCAN clock periods. tq = (DBRP + 1) FDCAN clock period.           DTSEG1 is the sum of Prop_Seg and Phase_Seg1. DTSEG2 is           Phase_Seg2. Therefore the length of the bit time is           (programmed values) [DTSEG1 + DTSEG2 + 3] tq or           (functional values) [Sync_Seg + Prop_Seg + Phase_Seg1 +           Phase_Seg2] tq. The Information Processing Time (IPT) is           zero, meaning the data for the next bit is available at           the first clock edge after the sample           point. */
   {"\x50\x54\xd4", 16, 32, 0, FDCAN_TEST_fields, 3}, /* TEST: Write access to the Test Register has to be           enabled by setting bit CCCR[TEST] to 1 . All Test           Register functions are set to their reset values when bit           CCCR[TEST] is reset. Loop Back mode and software control           of Tx pin FDCANx_TX are hardware test modes. Programming           TX differently from 00 may disturb the message transfer           on the CAN bus. */
   {"\x49\x71\x00", 20, 32, 0, FDCAN_RWD_fields, 2}, /* RWD: The RAM Watchdog monitors the READY output           of the Message RAM. A Message RAM access starts the           Message RAM Watchdog Counter with the value configured by           the RWD[WDC] bits. The counter is reloaded with RWD[WDC]           bits when the Message RAM signals successful completion           by activating its READY output. In case there is no           response from the Message RAM until the counter has           counted down to 0, the counter stops and interrupt flag           IR[WDI] bit is set. The RAM Watchdog Counter is clocked           by the fdcan_pclk clock. */
   {"\x0c\x30\xd2", 24, 32, 0, FDCAN_CCCR_fields, 14}, /* CCCR: For details about setting and resetting of           single bits see Software initialization. */
   {"\x38\x25\x10", 28, 32, 0, FDCAN_NBTP_fields, 4}, /* NBTP: FDCAN_NBTP */
   {"\x51\x30\xc3", 32, 32, 0, FDCAN_TSCC_fields, 2}, /* TSCC: FDCAN Timestamp Counter Configuration           Register */
   {"\x51\x30\xd6", 36, 32, 0, FDCAN_TSCV_fields, 1}, /* TSCV: FDCAN Timestamp Counter Value           Register */
   {"\x50\xf0\xc3", 40, 32, 0, FDCAN_TOCC_fields, 3}, /* TOCC: FDCAN Timeout Counter Configuration           Register */
   {"\x50\xf0\xd6", 44, 32, 0, FDCAN_TOCV_fields, 1}, /* TOCV: FDCAN Timeout Counter Value           Register */
   {"\x14\x34\x80", 64, 32, 0, FDCAN_ECR_fields, 4}, /* ECR: FDCAN Error Counter Register */
   {"\x41\x34\x80", 68, 32, 0, FDCAN_PSR_fields, 11}, /* PSR: FDCAN Protocol Status Register */
   {"\x50\x40\xd2", 72, 32, 0, FDCAN_TDCR_fields, 2}, /* TDCR: FDCAN Transmitter Delay Compensation           Register */
   {"\x25\x20", 80, 32, 0, FDCAN_IR_fields, 28}, /* IR: The flags are set when one of the listed           conditions is detected (edge-sensitive). The flags remain           set until the Host clears them. A flag is cleared by           writing a 1 to the corresponding bit position. Writing a           0 has no effect. A hard reset will clear the register.           The configuration of IE controls whether an interrupt is           generated. The configuration of ILS controls on which           interrupt line an interrupt is signaled. */
   {"\x24\x50", 84, 32, 0, FDCAN_IE_fields, 30}, /* IE: The settings in the Interrupt Enable           register determine which status changes in the Interrupt           Register will be signaled on an interrupt           line. */
   {"\x24\xc4\xc0", 88, 32, 0, FDCAN_ILS_fields, 30}, /* ILS: The Interrupt Line Select register assigns           an interrupt generated by a specific interrupt flag from           the Interrupt Register to one of the two module interrupt           lines. For interrupt generation the respective interrupt           line has to be enabled via ILE[EINT0] and           ILE[EINT1]. */
   {"\x24\xc1\x40", 92, 32, 0, FDCAN_ILE_fields, 2}, /* ILE: Each of the two interrupt lines to the CPU           can be enabled/disabled separately by programming bits           EINT0 and EINT1. */
   {"\x49\x81\xc6\x0c", 128, 32, 0, FDCAN_RXGFC_fields, 4}, /* RXGFC: Global settings for Message ID filtering.           The Global Filter Configuration controls the filter path           for standard and extended messages as described in           Figure706: Standard Message ID filter path and Figure707:           Extended Message ID filter path. */
   {"\x60\x91\x01\x34", 132, 32, 0, FDCAN_XIDAM_fields, 1}, /* XIDAM: FDCAN Extended ID and Mask   Register */
   {"\x21\x03\x53", 136, 32, 0, FDCAN_HPMS_fields, 4}, /* HPMS: This register is updated every time a    Message ID filter element configured to generate a    priority event match. This can be used to monitor the    status of incoming high priority messages and to enable           fast access to these messages. */
   {"\x49\x81\x9b\x4c", 144, 32, 0, FDCAN_RXF0S_fields, 5}, /* RXF0S: FDCAN Rx FIFO 0 Status Register */
   {"\x49\x81\x9b\x04", 148, 32, 0, FDCAN_RXF0A_fields, 1}, /* RXF0A: CAN Rx FIFO 0 Acknowledge Register */
   {"\x49\x81\x9c\x4c", 152, 32, 0, FDCAN_RXF1S_fields, 6}, /* RXF1S: FDCAN Rx FIFO 1 Status  Register */
   {"\x49\x81\x9c\x04", 156, 32, 0, FDCAN_RXF1A_fields, 1}, /* RXF1A: FDCAN Rx FIFO 1 Acknowledge Register */
   {"\x51\x80\x83", 192, 32, 0, FDCAN_TXBC_fields, 4}, /* TXBC: FDCAN Tx Buffer Configuration  Register */
   {"\x51\x81\x91\x4c", 196, 32, 0, FDCAN_TXFQS_fields, 4}, /* TXFQS: The Tx FIFO/Queue status is related to the    pending Tx requests listed in register TXBRP. Therefore     the effect of Add/Cancellation requests may be delayed   due to a running Tx scan (TXBRP not yet           updated). */
   {"\x51\x80\x92\x40", 200, 32, 0, FDCAN_TXBRP_fields, 1}, /* TXBRP: FDCAN Tx Buffer Request Pending           Register */
   {"\x51\x80\x81\x48", 204, 32, 0, FDCAN_TXBAR_fields, 1}, /* TXBAR: FDCAN Tx Buffer Add Request           Register */
   {"\x51\x80\x83\x48", 208, 32, 0, FDCAN_TXBCR_fields, 1}, /* TXBCR: FDCAN Tx Buffer Cancellation Request           Register */
   {"\x51\x80\x94\x3c", 212, 32, 0, FDCAN_TXBTO_fields, 1}, /* TXBTO: FDCAN Tx Buffer Transmission Occurred           Register */
   {"\x51\x80\x83\x18", 216, 32, 0, FDCAN_TXBCF_fields, 1}, /* TXBCF: FDCAN Tx Buffer Cancellation Finished           Register */
   {"\x51\x80\x94\x24\x50", 220, 32, 0, FDCAN_TXBTIE_fields, 1}, /* TXBTIE: FDCAN Tx Buffer Transmission Interrupt           Enable Register */
   {"\x51\x80\x83\x24\x50", 224, 32, 0, FDCAN_TXBCIE_fields, 1}, /* TXBCIE: FDCAN Tx Buffer Cancellation Finished           Interrupt Enable Register */
   {"\x51\x81\x46\x4c", 228, 32, 0, FDCAN_TXEFS_fields, 5}, /* TXEFS: FDCAN Tx Event FIFO Status           Register */
   {"\x51\x81\x46\x04", 232, 32, 0, FDCAN_TXEFA_fields, 1}, /* TXEFA: FDCAN Tx Event FIFO Acknowledge           Register */
   {"\x0c\xb1\x09\x58", 256, 32, 0, FDCAN_CKDIV_fields, 1}, /* CKDIV: FDCAN CFG clock divider           register */
};

const Field_t SYSCFG_MEMRMP_fields[] = {
   { "\x34\x53\x65\x34\xf1\x05", 0, 3 },  /* MEM_MODE: Memory mapping selection */
   { "\x18\x29\x4d\x3c\x41\x40", 8, 1 },  /* FB_mode: User Flash Bank mode */
};

const Field_t SYSCFG_CFGR1_fields[] = {
   { "\x08\xf3\xd3\x50\x53\x80", 8, 1 },  /* BOOSTEN: BOOSTEN */
   { "\x04\xe0\x53\x5d\x61\x04", 9, 1 },  /* ANASWVDD: GPIO analog switch control voltage               selection */
   { "\x25\xd0\xe5\x40\x28\x65\x18\xd4\x00", 16, 1 },  /* I2C_PB6_FMP: FM+ drive capability on               PB6 */
   { "\x25\xd0\xe5\x40\x28\xa5\x18\xd4\x00", 17, 1 },  /* I2C_PB7_FMP: FM+ drive capability on               PB6 */
   { "\x25\xd0\xe5\x40\x28\xe5\x18\xd4\x00", 18, 1 },  /* I2C_PB8_FMP: FM+ drive capability on               PB6 */
   { "\x25\xd0\xe5\x40\x29\x25\x18\xd4\x00", 19, 1 },  /* I2C_PB9_FMP: FM+ drive capability on               PB6 */
   { "\x25\xd0\xdc\x94\x63\x50", 20, 1 },  /* I2C1_FMP: I2C1 FM+ drive capability               enable */
   { "\x25\xd0\xdd\x94\x63\x50", 21, 1 },  /* I2C2_FMP: I2C1 FM+ drive capability               enable */
   { "\x25\xd0\xde\x94\x63\x50", 22, 1 },  /* I2C3_FMP: I2C1 FM+ drive capability               enable */
   { "\x25\xd0\xdf\x94\x63\x50", 23, 1 },  /* I2C4_FMP: I2C1 FM+ drive capability               enable */
   { "\x19\x05\x65\x24\x50", 26, 6 },  /* FPU_IE: FPU Interrupts Enable */
};

const Field_t SYSCFG_EXTICR1_fields[] = {
   { "\x15\x85\x09\x6c", 0, 4 },  /* EXTI0: EXTI x configuration (x = 0 to               3) */
   { "\x15\x85\x09\x70", 4, 4 },  /* EXTI1: EXTI x configuration (x = 0 to               3) */
   { "\x15\x85\x09\x74", 8, 4 },  /* EXTI2: EXTI x configuration (x = 0 to               3) */
   { "\x15\x85\x09\x78", 12, 4 },  /* EXTI3: EXTI x configuration (x = 0 to               3) */
};

const Field_t SYSCFG_EXTICR2_fields[] = {
   { "\x15\x85\x09\x7c", 0, 4 },  /* EXTI4: EXTI x configuration (x = 4 to               7) */
   { "\x15\x85\x09\x80", 4, 4 },  /* EXTI5: EXTI x configuration (x = 4 to               7) */
   { "\x15\x85\x09\x84", 8, 4 },  /* EXTI6: EXTI x configuration (x = 4 to               7) */
   { "\x15\x85\x09\x88", 12, 4 },  /* EXTI7: EXTI x configuration (x = 4 to               7) */
};

const Field_t SYSCFG_EXTICR3_fields[] = {
   { "\x15\x85\x09\x8c", 0, 4 },  /* EXTI8: EXTI x configuration (x = 8 to               11) */
   { "\x15\x85\x09\x90", 4, 4 },  /* EXTI9: EXTI x configuration (x = 8 to               11) */
   { "\x15\x85\x09\x71\xb0", 8, 4 },  /* EXTI10: EXTI10 */
   { "\x15\x85\x09\x71\xc0", 12, 4 },  /* EXTI11: EXTI x configuration (x = 8 to               11) */
};

const Field_t SYSCFG_EXTICR4_fields[] = {
   { "\x15\x85\x09\x71\xd0", 0, 4 },  /* EXTI12: EXTI x configuration (x = 12 to               15) */
   { "\x15\x85\x09\x71\xe0", 4, 4 },  /* EXTI13: EXTI x configuration (x = 12 to               15) */
   { "\x15\x85\x09\x71\xf0", 8, 4 },  /* EXTI14: EXTI x configuration (x = 12 to               15) */
   { "\x15\x85\x09\x72\x00", 12, 4 },  /* EXTI15: EXTI x configuration (x = 12 to               15) */
};

const Field_t SYSCFG_SCSR_fields[] = {
   { "\x0c\x33\x45\x48", 0, 1 },  /* CCMER: CCM SRAM Erase */
   { "\x0c\x33\x42\x4d\x90", 1, 1 },  /* CCMBSY: CCM SRAM busy by erase operation */
};

const Field_t SYSCFG_CFGR2_fields[] = {
   { "\x0c\xc3\x00", 0, 1 },  /* CLL: Core Lockup Lock */
   { "\x4d\x03\x00", 1, 1 },  /* SPL: SRAM Parity Lock */
   { "\x41\x61\x0c", 2, 1 },  /* PVDL: PVD Lock */
   { "\x14\x30\xcc", 3, 1 },  /* ECCL: ECC Lock */
   { "\x4d\x01\x80", 8, 1 },  /* SPF: SRAM Parity Flag */
};

const Field_t SYSCFG_SWPR_fields[] = {
   { "\x40\x11\xc5\x6e\x55\xd0", 0, 1 },  /* Page0_WP: Write protection */
   { "\x40\x11\xc5\x72\x55\xd0", 1, 1 },  /* Page1_WP: Write protection */
   { "\x40\x11\xc5\x76\x55\xd0", 2, 1 },  /* Page2_WP: Write protection */
   { "\x40\x11\xc5\x7a\x55\xd0", 3, 1 },  /* Page3_WP: Write protection */
   { "\x40\x11\xc5\x7e\x55\xd0", 4, 1 },  /* Page4_WP: Write protection */
   { "\x40\x11\xc5\x82\x55\xd0", 5, 1 },  /* Page5_WP: Write protection */
   { "\x40\x11\xc5\x86\x55\xd0", 6, 1 },  /* Page6_WP: Write protection */
   { "\x40\x11\xc5\x8a\x55\xd0", 7, 1 },  /* Page7_WP: Write protection */
   { "\x40\x11\xc5\x8e\x55\xd0", 8, 1 },  /* Page8_WP: Write protection */
   { "\x40\x11\xc5\x92\x55\xd0", 9, 1 },  /* Page9_WP: Write protection */
   { "\x40\x11\xc5\x71\xb9\x57\x40", 10, 1 },  /* Page10_WP: Write protection */
   { "\x40\x11\xc5\x71\xc9\x57\x40", 11, 1 },  /* Page11_WP: Write protection */
   { "\x40\x11\xc5\x71\xd9\x57\x40", 12, 1 },  /* Page12_WP: Write protection */
   { "\x40\x11\xc5\x71\xe9\x57\x40", 13, 1 },  /* Page13_WP: Write protection */
   { "\x40\x11\xc5\x71\xf9\x57\x40", 14, 1 },  /* Page14_WP: Write protection */
   { "\x40\x11\xc5\x72\x09\x57\x40", 15, 1 },  /* Page15_WP: Write protection */
   { "\x40\x11\xc5\x72\x19\x57\x40", 16, 1 },  /* Page16_WP: Write protection */
   { "\x40\x11\xc5\x72\x29\x57\x40", 17, 1 },  /* Page17_WP: Write protection */
   { "\x40\x11\xc5\x72\x39\x57\x40", 18, 1 },  /* Page18_WP: Write protection */
   { "\x40\x11\xc5\x72\x49\x57\x40", 19, 1 },  /* Page19_WP: Write protection */
   { "\x40\x11\xc5\x75\xb9\x57\x40", 20, 1 },  /* Page20_WP: Write protection */
   { "\x40\x11\xc5\x75\xc9\x57\x40", 21, 1 },  /* Page21_WP: Write protection */
   { "\x40\x11\xc5\x75\xd9\x57\x40", 22, 1 },  /* Page22_WP: Write protection */
   { "\x40\x11\xc5\x75\xe9\x57\x40", 23, 1 },  /* Page23_WP: Write protection */
   { "\x40\x11\xc5\x75\xf9\x57\x40", 24, 1 },  /* Page24_WP: Write protection */
   { "\x40\x11\xc5\x76\x09\x57\x40", 25, 1 },  /* Page25_WP: Write protection */
   { "\x40\x11\xc5\x76\x19\x57\x40", 26, 1 },  /* Page26_WP: Write protection */
   { "\x40\x11\xc5\x76\x29\x57\x40", 27, 1 },  /* Page27_WP: Write protection */
   { "\x40\x11\xc5\x76\x39\x57\x40", 28, 1 },  /* Page28_WP: Write protection */
   { "\x40\x11\xc5\x76\x49\x57\x40", 29, 1 },  /* Page29_WP: Write protection */
   { "\x40\x11\xc5\x79\xb9\x57\x40", 30, 1 },  /* Page30_WP: Write protection */
   { "\x40\x11\xc5\x79\xc9\x57\x40", 31, 1 },  /* Page31_WP: Write protection */
};

const Field_t SYSCFG_SKR_fields[] = {
   { "\x2c\x56\x40", 0, 8 },  /* KEY: SRAM2 Key for software               erase */
};

const Register_t SYSCFG_registers[] = {
   {"\x34\x53\x52\x35\x00", 0, 32, 0, SYSCFG_MEMRMP_fields, 2}, /* MEMRMP: Remap Memory register */
   {"\x0c\x61\xd2\x70", 4, 32, 0, SYSCFG_CFGR1_fields, 11}, /* CFGR1: peripheral mode configuration           register */
   {"\x15\x85\x09\x0d\x27\x00", 8, 32, 0, SYSCFG_EXTICR1_fields, 4}, /* EXTICR1: external interrupt configuration register           1 */
   {"\x15\x85\x09\x0d\x27\x40", 12, 32, 0, SYSCFG_EXTICR2_fields, 4}, /* EXTICR2: external interrupt configuration register           2 */
   {"\x15\x85\x09\x0d\x27\x80", 16, 32, 0, SYSCFG_EXTICR3_fields, 4}, /* EXTICR3: external interrupt configuration register           3 */
   {"\x15\x85\x09\x0d\x27\xc0", 20, 32, 0, SYSCFG_EXTICR4_fields, 4}, /* EXTICR4: external interrupt configuration register           4 */
   {"\x4c\x34\xd2", 24, 32, 0, SYSCFG_SCSR_fields, 2}, /* SCSR: CCM SRAM control and status           register */
   {"\x0c\x61\xd2\x74", 28, 32, 0, SYSCFG_CFGR2_fields, 5}, /* CFGR2: configuration register 2 */
   {"\x4d\x74\x12", 32, 32, 0, SYSCFG_SWPR_fields, 32}, /* SWPR: SRAM Write protection register           1 */
   {"\x4c\xb4\x80", 36, 32, 0, SYSCFG_SKR_fields, 1}, /* SKR: SRAM2 Key Register */
};

const Field_t VREFBUF_VREFBUF_CSR_fields[] = {
   { "\x14\xe5\x92", 0, 1 },  /* ENVR: Enable Voltage Reference */
   { "\x20\x96\x80", 1, 1 },  /* HIZ: High impedence mode for the               VREF_BUF */
   { "\x59\x24\x80", 3, 1 },  /* VRR: Voltage reference buffer ready */
   { "\x59\x24\xc0", 4, 2 },  /* VRS: Voltage reference scale */
};

const Field_t VREFBUF_VREFBUF_CCR_fields[] = {
   { "\x51\x22\x4d", 0, 6 },  /* TRIM: Trimming code */
};

const Register_t VREFBUF_registers[] = {
   {"\x59\x21\x46\x09\x51\xa5\x0d\x34\x80", 0, 32, 0, VREFBUF_VREFBUF_CSR_fields, 4}, /* VREFBUF_CSR: VREF_BUF Control and Status           Register */
   {"\x59\x21\x46\x09\x51\xa5\x0c\x34\x80", 4, 32, 0, VREFBUF_VREFBUF_CCR_fields, 1}, /* VREFBUF_CCR: VREF_BUF Calibration Control           Register */
};

const Field_t COMP_COMP_C1CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t COMP_COMP_C2CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t COMP_COMP_C3CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t COMP_COMP_C4CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t COMP_COMP_C5CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t COMP_COMP_C6CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t COMP_COMP_C7CSR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: EN */
   { "\x0c\xf3\x50\x94\x41\x47\x30\x95\x03\x22\x51\x4e", 1, 1 },  /* COMP_DEGLITCH_EN: COMP_DEGLITCH_EN */
   { "\x24\xe3\x53\x14\xc0", 4, 3 },  /* INMSEL: INMSEL */
   { "\x24\xe4\x13\x14\xc0", 8, 1 },  /* INPSEL: INPSEL */
   { "\x40\xf3\x00", 15, 1 },  /* POL: POL */
   { "\x21\x94\xd4", 16, 3 },  /* HYST: HYST */
   { "\x08\xc0\x4e\x2d\x31\x4c", 19, 3 },  /* BLANKSEL: BLANKSEL */
   { "\x09\x21\xc5\x38", 22, 1 },  /* BRGEN: BRGEN */
   { "\x4c\x30\x4c\x14\xe0", 23, 1 },  /* SCALEN: SCALEN */
   { "\x58\x13\x15\x14", 30, 1 },  /* VALUE: VALUE */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Register_t COMP_registers[] = {
   {"\x0c\xf3\x50\x94\x37\x03\x4d\x20", 0, 32, 0, COMP_COMP_C1CSR_fields, 11}, /* COMP_C1CSR: Comparator control/status           register */
   {"\x0c\xf3\x50\x94\x37\x43\x4d\x20", 4, 32, 0, COMP_COMP_C2CSR_fields, 11}, /* COMP_C2CSR: Comparator control/status           register */
   {"\x0c\xf3\x50\x94\x37\x83\x4d\x20", 8, 32, 0, COMP_COMP_C3CSR_fields, 11}, /* COMP_C3CSR: Comparator control/status           register */
   {"\x0c\xf3\x50\x94\x37\xc3\x4d\x20", 18, 32, 0, COMP_COMP_C4CSR_fields, 11}, /* COMP_C4CSR: Comparator control/status           register */
   {"\x0c\xf3\x50\x94\x38\x03\x4d\x20", 22, 32, 0, COMP_COMP_C5CSR_fields, 11}, /* COMP_C5CSR: Comparator control/status           register */
   {"\x0c\xf3\x50\x94\x38\x43\x4d\x20", 32, 32, 0, COMP_COMP_C6CSR_fields, 11}, /* COMP_C6CSR: Comparator control/status           register */
   {"\x0c\xf3\x50\x94\x38\x83\x4d\x20", 36, 32, 0, COMP_COMP_C7CSR_fields, 11}, /* COMP_C7CSR: Comparator control/status           register */
};

const Field_t OPAMP_OPAMP1_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier               Enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: VP_SEL */
   { "\x55\x31\x52\x51\x22\x4d", 4, 1 },  /* USERTRIM: USERTRIM */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: VM_SEL */
   { "\x3d\x00\x48\x4c\xd0", 7, 1 },  /* OPAHSM: OPAHSM */
   { "\x3d\x00\x49\x39\x43\xc5\x38", 8, 1 },  /* OPAINTOEN: OPAINTOEN */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: CALON */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: CALSEL */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 5 },  /* PGA_GAIN: PGA_GAIN */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: TRIMOFFSETP */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: TRIMOFFSETN */
   { "\x0c\x13\x0f\x55\x40", 30, 1 },  /* CALOUT: CALOUT */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP2_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier               Enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: VP_SEL */
   { "\x55\x31\x52\x51\x22\x4d", 4, 1 },  /* USERTRIM: USERTRIM */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: VM_SEL */
   { "\x3d\x00\x48\x4c\xd0", 7, 1 },  /* OPAHSM: OPAHSM */
   { "\x3d\x00\x49\x39\x43\xc5\x38", 8, 1 },  /* OPAINTOEN: OPAINTOEN */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: CALON */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: CALSEL */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 5 },  /* PGA_GAIN: PGA_GAIN */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: TRIMOFFSETP */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: TRIMOFFSETN */
   { "\x0c\x13\x0f\x55\x40", 30, 1 },  /* CALOUT: CALOUT */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP3_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier               Enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: VP_SEL */
   { "\x55\x31\x52\x51\x22\x4d", 4, 1 },  /* USERTRIM: USERTRIM */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: VM_SEL */
   { "\x3d\x00\x48\x4c\xd0", 7, 1 },  /* OPAHSM: OPAHSM */
   { "\x3d\x00\x49\x39\x43\xc5\x38", 8, 1 },  /* OPAINTOEN: OPAINTOEN */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: CALON */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: CALSEL */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 5 },  /* PGA_GAIN: PGA_GAIN */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: TRIMOFFSETP */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: TRIMOFFSETN */
   { "\x0c\x13\x0f\x55\x40", 30, 1 },  /* CALOUT: CALOUT */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP4_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier               Enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: VP_SEL */
   { "\x55\x31\x52\x51\x22\x4d", 4, 1 },  /* USERTRIM: USERTRIM */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: VM_SEL */
   { "\x3d\x00\x48\x4c\xd0", 7, 1 },  /* OPAHSM: OPAHSM */
   { "\x3d\x00\x49\x39\x43\xc5\x38", 8, 1 },  /* OPAINTOEN: OPAINTOEN */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: CALON */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: CALSEL */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 5 },  /* PGA_GAIN: PGA_GAIN */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: TRIMOFFSETP */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: TRIMOFFSETN */
   { "\x0c\x13\x0f\x55\x40", 30, 1 },  /* CALOUT: CALOUT */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP5_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier               Enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: VP_SEL */
   { "\x55\x31\x52\x51\x22\x4d", 4, 1 },  /* USERTRIM: USERTRIM */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: VM_SEL */
   { "\x3d\x00\x48\x4c\xd0", 7, 1 },  /* OPAHSM: OPAHSM */
   { "\x3d\x00\x49\x39\x43\xc5\x38", 8, 1 },  /* OPAINTOEN: OPAINTOEN */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: CALON */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: CALSEL */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 5 },  /* PGA_GAIN: PGA_GAIN */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: TRIMOFFSETP */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: TRIMOFFSETN */
   { "\x0c\x13\x0f\x55\x40", 30, 1 },  /* CALOUT: CALOUT */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP6_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier               Enable */
   { "\x18\xf4\x83\x16\x55\x90", 1, 1 },  /* FORCE_VP: FORCE_VP */
   { "\x59\x09\x53\x14\xc0", 2, 2 },  /* VP_SEL: VP_SEL */
   { "\x55\x31\x52\x51\x22\x4d", 4, 1 },  /* USERTRIM: USERTRIM */
   { "\x58\xd9\x53\x14\xc0", 5, 2 },  /* VM_SEL: VM_SEL */
   { "\x3d\x00\x48\x4c\xd0", 7, 1 },  /* OPAHSM: OPAHSM */
   { "\x3d\x00\x49\x39\x43\xc5\x38", 8, 1 },  /* OPAINTOEN: OPAINTOEN */
   { "\x0c\x13\x0f\x38", 11, 1 },  /* CALON: CALON */
   { "\x0c\x13\x13\x14\xc0", 12, 2 },  /* CALSEL: CALSEL */
   { "\x40\x70\x65\x1c\x12\x4e", 14, 5 },  /* PGA_GAIN: PGA_GAIN */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 19, 5 },  /* TRIMOFFSETP: TRIMOFFSETP */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 24, 5 },  /* TRIMOFFSETN: TRIMOFFSETN */
   { "\x0c\x13\x0f\x55\x40", 30, 1 },  /* CALOUT: CALOUT */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP1_TCMR_fields[] = {
   { "\x58\xd4\xe5\x4c\x53\x00", 0, 1 },  /* VMS_SEL: VMS_SEL */
   { "\x59\x04\xe5\x4c\x53\x00", 1, 2 },  /* VPS_SEL: VPS_SEL */
   { "\x51\xc0\xcd\x94\x53\x80", 3, 1 },  /* T1CM_EN: T1CM_EN */
   { "\x52\x30\xcd\x94\x53\x80", 4, 1 },  /* T8CM_EN: T8CM_EN */
   { "\x51\xd6\xc3\x36\x51\x4e", 5, 1 },  /* T20CM_EN: T20CM_EN */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP2_TCMR_fields[] = {
   { "\x58\xd4\xe5\x4c\x53\x00", 0, 1 },  /* VMS_SEL: VMS_SEL */
   { "\x59\x04\xe5\x4c\x53\x00", 1, 2 },  /* VPS_SEL: VPS_SEL */
   { "\x51\xc0\xcd\x94\x53\x80", 3, 1 },  /* T1CM_EN: T1CM_EN */
   { "\x52\x30\xcd\x94\x53\x80", 4, 1 },  /* T8CM_EN: T8CM_EN */
   { "\x51\xd6\xc3\x36\x51\x4e", 5, 1 },  /* T20CM_EN: T20CM_EN */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP3_TCMR_fields[] = {
   { "\x58\xd4\xe5\x4c\x53\x00", 0, 1 },  /* VMS_SEL: VMS_SEL */
   { "\x59\x04\xe5\x4c\x53\x00", 1, 2 },  /* VPS_SEL: VPS_SEL */
   { "\x51\xc0\xcd\x94\x53\x80", 3, 1 },  /* T1CM_EN: T1CM_EN */
   { "\x52\x30\xcd\x94\x53\x80", 4, 1 },  /* T8CM_EN: T8CM_EN */
   { "\x51\xd6\xc3\x36\x51\x4e", 5, 1 },  /* T20CM_EN: T20CM_EN */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP4_TCMR_fields[] = {
   { "\x58\xd4\xe5\x4c\x53\x00", 0, 1 },  /* VMS_SEL: VMS_SEL */
   { "\x59\x04\xe5\x4c\x53\x00", 1, 2 },  /* VPS_SEL: VPS_SEL */
   { "\x51\xc0\xcd\x94\x53\x80", 3, 1 },  /* T1CM_EN: T1CM_EN */
   { "\x52\x30\xcd\x94\x53\x80", 4, 1 },  /* T8CM_EN: T8CM_EN */
   { "\x51\xd6\xc3\x36\x51\x4e", 5, 1 },  /* T20CM_EN: T20CM_EN */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP5_TCMR_fields[] = {
   { "\x58\xd4\xe5\x4c\x53\x00", 0, 1 },  /* VMS_SEL: VMS_SEL */
   { "\x59\x04\xe5\x4c\x53\x00", 1, 2 },  /* VPS_SEL: VPS_SEL */
   { "\x51\xc0\xcd\x94\x53\x80", 3, 1 },  /* T1CM_EN: T1CM_EN */
   { "\x52\x30\xcd\x94\x53\x80", 4, 1 },  /* T8CM_EN: T8CM_EN */
   { "\x51\xd6\xc3\x36\x51\x4e", 5, 1 },  /* T20CM_EN: T20CM_EN */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Field_t OPAMP_OPAMP6_TCMR_fields[] = {
   { "\x58\xd4\xe5\x4c\x53\x00", 0, 1 },  /* VMS_SEL: VMS_SEL */
   { "\x59\x04\xe5\x4c\x53\x00", 1, 2 },  /* VPS_SEL: VPS_SEL */
   { "\x51\xc0\xcd\x94\x53\x80", 3, 1 },  /* T1CM_EN: T1CM_EN */
   { "\x52\x30\xcd\x94\x53\x80", 4, 1 },  /* T8CM_EN: T8CM_EN */
   { "\x51\xd6\xc3\x36\x51\x4e", 5, 1 },  /* T20CM_EN: T20CM_EN */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: LOCK */
};

const Register_t OPAMP_registers[] = {
   {"\x3d\x00\x4d\x41\xc9\x43\x4d\x20", 0, 32, 0, OPAMP_OPAMP1_CSR_fields, 14}, /* OPAMP1_CSR: OPAMP1 control/status register */
   {"\x3d\x00\x4d\x41\xd9\x43\x4d\x20", 4, 32, 0, OPAMP_OPAMP2_CSR_fields, 14}, /* OPAMP2_CSR: OPAMP2 control/status register */
   {"\x3d\x00\x4d\x41\xe9\x43\x4d\x20", 8, 32, 0, OPAMP_OPAMP3_CSR_fields, 14}, /* OPAMP3_CSR: OPAMP3 control/status register */
   {"\x3d\x00\x4d\x41\xf9\x43\x4d\x20", 12, 32, 0, OPAMP_OPAMP4_CSR_fields, 14}, /* OPAMP4_CSR: OPAMP4 control/status register */
   {"\x3d\x00\x4d\x42\x09\x43\x4d\x20", 16, 32, 0, OPAMP_OPAMP5_CSR_fields, 14}, /* OPAMP5_CSR: OPAMP5 control/status register */
   {"\x3d\x00\x4d\x42\x19\x43\x4d\x20", 20, 32, 0, OPAMP_OPAMP6_CSR_fields, 14}, /* OPAMP6_CSR: OPAMP6 control/status register */
   {"\x3d\x00\x4d\x41\xc9\x54\x0c\xd4\x80", 24, 32, 0, OPAMP_OPAMP1_TCMR_fields, 6}, /* OPAMP1_TCMR: OPAMP1 control/status register */
   {"\x3d\x00\x4d\x41\xd9\x54\x0c\xd4\x80", 28, 32, 0, OPAMP_OPAMP2_TCMR_fields, 6}, /* OPAMP2_TCMR: OPAMP2 control/status register */
   {"\x3d\x00\x4d\x41\xe9\x54\x0c\xd4\x80", 32, 32, 0, OPAMP_OPAMP3_TCMR_fields, 6}, /* OPAMP3_TCMR: OPAMP3 control/status register */
   {"\x3d\x00\x4d\x41\xf9\x54\x0c\xd4\x80", 36, 32, 0, OPAMP_OPAMP4_TCMR_fields, 6}, /* OPAMP4_TCMR: OPAMP4 control/status register */
   {"\x3d\x00\x4d\x42\x09\x54\x0c\xd4\x80", 40, 32, 0, OPAMP_OPAMP5_TCMR_fields, 6}, /* OPAMP5_TCMR: OPAMP5 control/status register */
   {"\x3d\x00\x4d\x42\x19\x54\x0c\xd4\x80", 44, 32, 0, OPAMP_OPAMP6_TCMR_fields, 6}, /* OPAMP6_TCMR: OPAMP6 control/status register */
};

const Field_t EXTI_IMR1_fields[] = {
   { "\x24\xd6\xc0", 0, 1 },  /* IM0: Interrupt Mask on line 0 */
   { "\x24\xd7\x00", 1, 1 },  /* IM1: Interrupt Mask on line 1 */
   { "\x24\xd7\x40", 2, 1 },  /* IM2: Interrupt Mask on line 2 */
   { "\x24\xd7\x80", 3, 1 },  /* IM3: Interrupt Mask on line 3 */
   { "\x24\xd7\xc0", 4, 1 },  /* IM4: Interrupt Mask on line 4 */
   { "\x24\xd8\x00", 5, 1 },  /* IM5: Interrupt Mask on line 5 */
   { "\x24\xd8\x40", 6, 1 },  /* IM6: Interrupt Mask on line 6 */
   { "\x24\xd8\x80", 7, 1 },  /* IM7: Interrupt Mask on line 7 */
   { "\x24\xd8\xc0", 8, 1 },  /* IM8: Interrupt Mask on line 8 */
   { "\x24\xd9\x00", 9, 1 },  /* IM9: Interrupt Mask on line 9 */
   { "\x24\xd7\x1b", 10, 1 },  /* IM10: Interrupt Mask on line 10 */
   { "\x24\xd7\x1c", 11, 1 },  /* IM11: Interrupt Mask on line 11 */
   { "\x24\xd7\x1d", 12, 1 },  /* IM12: Interrupt Mask on line 12 */
   { "\x24\xd7\x1e", 13, 1 },  /* IM13: Interrupt Mask on line 13 */
   { "\x24\xd7\x1f", 14, 1 },  /* IM14: Interrupt Mask on line 14 */
   { "\x24\xd7\x20", 15, 1 },  /* IM15: Interrupt Mask on line 15 */
   { "\x24\xd7\x21", 16, 1 },  /* IM16: Interrupt Mask on line 16 */
   { "\x24\xd7\x22", 17, 1 },  /* IM17: Interrupt Mask on line 17 */
   { "\x24\xd7\x23", 18, 1 },  /* IM18: Interrupt Mask on line 18 */
   { "\x24\xd7\x24", 19, 1 },  /* IM19: Interrupt Mask on line 19 */
   { "\x24\xd7\x5b", 20, 1 },  /* IM20: Interrupt Mask on line 20 */
   { "\x24\xd7\x5c", 21, 1 },  /* IM21: Interrupt Mask on line 21 */
   { "\x24\xd7\x5d", 22, 1 },  /* IM22: Interrupt Mask on line 22 */
   { "\x24\xd7\x5e", 23, 1 },  /* IM23: Interrupt Mask on line 23 */
   { "\x24\xd7\x5f", 24, 1 },  /* IM24: Interrupt Mask on line 24 */
   { "\x24\xd7\x60", 25, 1 },  /* IM25: Interrupt Mask on line 25 */
   { "\x24\xd7\x61", 26, 1 },  /* IM26: Interrupt Mask on line 26 */
   { "\x24\xd7\x62", 27, 1 },  /* IM27: Interrupt Mask on line 27 */
   { "\x24\xd7\x63", 28, 1 },  /* IM28: Interrupt Mask on line 28 */
   { "\x24\xd7\x64", 29, 1 },  /* IM29: Interrupt Mask on line 29 */
   { "\x24\xd7\x9b", 30, 1 },  /* IM30: Interrupt Mask on line 30 */
   { "\x24\xd7\x9c", 31, 1 },  /* IM31: Interrupt Mask on line 31 */
};

const Field_t EXTI_EMR1_fields[] = {
   { "\x14\xd6\xc0", 0, 1 },  /* EM0: Event Mask on line 0 */
   { "\x14\xd7\x00", 1, 1 },  /* EM1: Event Mask on line 1 */
   { "\x14\xd7\x40", 2, 1 },  /* EM2: Event Mask on line 2 */
   { "\x14\xd7\x80", 3, 1 },  /* EM3: Event Mask on line 3 */
   { "\x14\xd7\xc0", 4, 1 },  /* EM4: Event Mask on line 4 */
   { "\x14\xd8\x00", 5, 1 },  /* EM5: Event Mask on line 5 */
   { "\x14\xd8\x40", 6, 1 },  /* EM6: Event Mask on line 6 */
   { "\x14\xd8\x80", 7, 1 },  /* EM7: Event Mask on line 7 */
   { "\x14\xd8\xc0", 8, 1 },  /* EM8: Event Mask on line 8 */
   { "\x14\xd9\x00", 9, 1 },  /* EM9: Event Mask on line 9 */
   { "\x14\xd7\x1b", 10, 1 },  /* EM10: Event Mask on line 10 */
   { "\x14\xd7\x1c", 11, 1 },  /* EM11: Event Mask on line 11 */
   { "\x14\xd7\x1d", 12, 1 },  /* EM12: Event Mask on line 12 */
   { "\x14\xd7\x1e", 13, 1 },  /* EM13: Event Mask on line 13 */
   { "\x14\xd7\x1f", 14, 1 },  /* EM14: Event Mask on line 14 */
   { "\x14\xd7\x20", 15, 1 },  /* EM15: Event Mask on line 15 */
   { "\x14\xd7\x21", 16, 1 },  /* EM16: Event Mask on line 16 */
   { "\x14\xd7\x22", 17, 1 },  /* EM17: Event Mask on line 17 */
   { "\x14\xd7\x23", 18, 1 },  /* EM18: Event Mask on line 18 */
   { "\x14\xd7\x24", 19, 1 },  /* EM19: Event Mask on line 19 */
   { "\x14\xd7\x5b", 20, 1 },  /* EM20: Event Mask on line 20 */
   { "\x14\xd7\x5c", 21, 1 },  /* EM21: Event Mask on line 21 */
   { "\x14\xd7\x5d", 22, 1 },  /* EM22: Event Mask on line 22 */
   { "\x14\xd7\x5e", 23, 1 },  /* EM23: Event Mask on line 23 */
   { "\x14\xd7\x5f", 24, 1 },  /* EM24: Event Mask on line 24 */
   { "\x14\xd7\x60", 25, 1 },  /* EM25: Event Mask on line 25 */
   { "\x14\xd7\x61", 26, 1 },  /* EM26: Event Mask on line 26 */
   { "\x14\xd7\x62", 27, 1 },  /* EM27: Event Mask on line 27 */
   { "\x14\xd7\x63", 28, 1 },  /* EM28: Event Mask on line 28 */
   { "\x14\xd7\x64", 29, 1 },  /* EM29: Event Mask on line 29 */
   { "\x14\xd7\x9b", 30, 1 },  /* EM30: Event Mask on line 30 */
   { "\x14\xd7\x9c", 31, 1 },  /* EM31: Event Mask on line 31 */
};

const Field_t EXTI_RTSR1_fields[] = {
   { "\x49\x46\xc0", 0, 1 },  /* RT0: Rising trigger event configuration of               line 0 */
   { "\x49\x47\x00", 1, 1 },  /* RT1: Rising trigger event configuration of               line 1 */
   { "\x49\x47\x40", 2, 1 },  /* RT2: Rising trigger event configuration of               line 2 */
   { "\x49\x47\x80", 3, 1 },  /* RT3: Rising trigger event configuration of               line 3 */
   { "\x49\x47\xc0", 4, 1 },  /* RT4: Rising trigger event configuration of               line 4 */
   { "\x49\x48\x00", 5, 1 },  /* RT5: Rising trigger event configuration of               line 5 */
   { "\x49\x48\x40", 6, 1 },  /* RT6: Rising trigger event configuration of               line 6 */
   { "\x49\x48\x80", 7, 1 },  /* RT7: Rising trigger event configuration of               line 7 */
   { "\x49\x48\xc0", 8, 1 },  /* RT8: Rising trigger event configuration of               line 8 */
   { "\x49\x49\x00", 9, 1 },  /* RT9: Rising trigger event configuration of               line 9 */
   { "\x49\x47\x1b", 10, 1 },  /* RT10: Rising trigger event configuration of               line 10 */
   { "\x49\x47\x1c", 11, 1 },  /* RT11: Rising trigger event configuration of               line 11 */
   { "\x49\x47\x1d", 12, 1 },  /* RT12: Rising trigger event configuration of               line 12 */
   { "\x49\x47\x1e", 13, 1 },  /* RT13: Rising trigger event configuration of               line 13 */
   { "\x49\x47\x1f", 14, 1 },  /* RT14: Rising trigger event configuration of               line 14 */
   { "\x49\x47\x20", 15, 1 },  /* RT15: Rising trigger event configuration of               line 15 */
   { "\x49\x47\x21", 16, 1 },  /* RT16: Rising trigger event configuration of               line 16 */
   { "\x49\x47\x23", 18, 1 },  /* RT18: Rising trigger event configuration of               line 18 */
   { "\x49\x47\x24", 19, 1 },  /* RT19: Rising trigger event configuration of               line 19 */
   { "\x49\x47\x5b", 20, 1 },  /* RT20: Rising trigger event configuration of               line 20 */
   { "\x49\x47\x5c", 21, 1 },  /* RT21: Rising trigger event configuration of               line 21 */
   { "\x49\x47\x5d", 22, 1 },  /* RT22: Rising trigger event configuration of               line 22 */
   { "\x49\x40", 29, 3 },  /* RT: RT */
};

const Field_t EXTI_FTSR1_fields[] = {
   { "\x19\x46\xc0", 0, 1 },  /* FT0: Falling trigger event configuration of               line 0 */
   { "\x19\x47\x00", 1, 1 },  /* FT1: Falling trigger event configuration of               line 1 */
   { "\x19\x47\x40", 2, 1 },  /* FT2: Falling trigger event configuration of               line 2 */
   { "\x19\x47\x80", 3, 1 },  /* FT3: Falling trigger event configuration of               line 3 */
   { "\x19\x47\xc0", 4, 1 },  /* FT4: Falling trigger event configuration of               line 4 */
   { "\x19\x48\x00", 5, 1 },  /* FT5: Falling trigger event configuration of               line 5 */
   { "\x19\x48\x40", 6, 1 },  /* FT6: Falling trigger event configuration of               line 6 */
   { "\x19\x48\x80", 7, 1 },  /* FT7: Falling trigger event configuration of               line 7 */
   { "\x19\x48\xc0", 8, 1 },  /* FT8: Falling trigger event configuration of               line 8 */
   { "\x19\x49\x00", 9, 1 },  /* FT9: Falling trigger event configuration of               line 9 */
   { "\x19\x47\x1b", 10, 1 },  /* FT10: Falling trigger event configuration of               line 10 */
   { "\x19\x47\x1c", 11, 1 },  /* FT11: Falling trigger event configuration of               line 11 */
   { "\x19\x47\x1d", 12, 1 },  /* FT12: Falling trigger event configuration of               line 12 */
   { "\x19\x47\x1e", 13, 1 },  /* FT13: Falling trigger event configuration of               line 13 */
   { "\x19\x47\x1f", 14, 1 },  /* FT14: Falling trigger event configuration of               line 14 */
   { "\x19\x47\x20", 15, 1 },  /* FT15: Falling trigger event configuration of               line 15 */
   { "\x19\x47\x21", 16, 1 },  /* FT16: Falling trigger event configuration of               line 16 */
   { "\x19\x47\x23", 18, 1 },  /* FT18: Falling trigger event configuration of               line 18 */
   { "\x19\x47\x24", 19, 1 },  /* FT19: Falling trigger event configuration of               line 19 */
   { "\x19\x47\x5b", 20, 1 },  /* FT20: Falling trigger event configuration of               line 20 */
   { "\x19\x47\x5c", 21, 1 },  /* FT21: Falling trigger event configuration of               line 21 */
   { "\x19\x47\x5d", 22, 1 },  /* FT22: Falling trigger event configuration of               line 22 */
};

const Field_t EXTI_SWIER1_fields[] = {
   { "\x4d\x72\x5b", 0, 1 },  /* SWI0: Software Interrupt on line               0 */
   { "\x4d\x72\x5c", 1, 1 },  /* SWI1: Software Interrupt on line               1 */
   { "\x4d\x72\x5d", 2, 1 },  /* SWI2: Software Interrupt on line               2 */
   { "\x4d\x72\x5e", 3, 1 },  /* SWI3: Software Interrupt on line               3 */
   { "\x4d\x72\x5f", 4, 1 },  /* SWI4: Software Interrupt on line               4 */
   { "\x4d\x72\x60", 5, 1 },  /* SWI5: Software Interrupt on line               5 */
   { "\x4d\x72\x61", 6, 1 },  /* SWI6: Software Interrupt on line               6 */
   { "\x4d\x72\x62", 7, 1 },  /* SWI7: Software Interrupt on line               7 */
   { "\x4d\x72\x63", 8, 1 },  /* SWI8: Software Interrupt on line               8 */
   { "\x4d\x72\x64", 9, 1 },  /* SWI9: Software Interrupt on line               9 */
   { "\x4d\x72\x5c\x6c", 10, 1 },  /* SWI10: Software Interrupt on line               10 */
   { "\x4d\x72\x5c\x70", 11, 1 },  /* SWI11: Software Interrupt on line               11 */
   { "\x4d\x72\x5c\x74", 12, 1 },  /* SWI12: Software Interrupt on line               12 */
   { "\x4d\x72\x5c\x78", 13, 1 },  /* SWI13: Software Interrupt on line               13 */
   { "\x4d\x72\x5c\x7c", 14, 1 },  /* SWI14: Software Interrupt on line               14 */
   { "\x4d\x72\x5c\x80", 15, 1 },  /* SWI15: Software Interrupt on line               15 */
   { "\x4d\x72\x5c\x84", 16, 1 },  /* SWI16: Software Interrupt on line               16 */
   { "\x4d\x72\x5c\x8c", 18, 1 },  /* SWI18: Software Interrupt on line               18 */
   { "\x4d\x72\x5c\x90", 19, 1 },  /* SWI19: Software Interrupt on line               19 */
   { "\x4d\x72\x5d\x6c", 20, 1 },  /* SWI20: Software Interrupt on line               20 */
   { "\x4d\x72\x5d\x70", 21, 1 },  /* SWI21: Software Interrupt on line               21 */
   { "\x4d\x72\x5d\x74", 22, 1 },  /* SWI22: Software Interrupt on line               22 */
};

const Field_t EXTI_PR1_fields[] = {
   { "\x40\x91\x9b", 0, 1 },  /* PIF0: Pending bit 0 */
   { "\x40\x91\x9c", 1, 1 },  /* PIF1: Pending bit 1 */
   { "\x40\x91\x9d", 2, 1 },  /* PIF2: Pending bit 2 */
   { "\x40\x91\x9e", 3, 1 },  /* PIF3: Pending bit 3 */
   { "\x40\x91\x9f", 4, 1 },  /* PIF4: Pending bit 4 */
   { "\x40\x91\xa0", 5, 1 },  /* PIF5: Pending bit 5 */
   { "\x40\x91\xa1", 6, 1 },  /* PIF6: Pending bit 6 */
   { "\x40\x91\xa2", 7, 1 },  /* PIF7: Pending bit 7 */
   { "\x40\x91\xa3", 8, 1 },  /* PIF8: Pending bit 8 */
   { "\x40\x91\xa4", 9, 1 },  /* PIF9: Pending bit 9 */
   { "\x40\x91\x9c\x6c", 10, 1 },  /* PIF10: Pending bit 10 */
   { "\x40\x91\x9c\x70", 11, 1 },  /* PIF11: Pending bit 11 */
   { "\x40\x91\x9c\x74", 12, 1 },  /* PIF12: Pending bit 12 */
   { "\x40\x91\x9c\x78", 13, 1 },  /* PIF13: Pending bit 13 */
   { "\x40\x91\x9c\x7c", 14, 1 },  /* PIF14: Pending bit 14 */
   { "\x40\x91\x9c\x80", 15, 1 },  /* PIF15: Pending bit 15 */
   { "\x40\x91\x9c\x84", 16, 1 },  /* PIF16: Pending bit 16 */
   { "\x40\x91\x9c\x8c", 18, 1 },  /* PIF18: Pending bit 18 */
   { "\x40\x91\x9c\x90", 19, 1 },  /* PIF19: Pending bit 19 */
   { "\x40\x91\x9d\x6c", 20, 1 },  /* PIF20: Pending bit 20 */
   { "\x40\x91\x9d\x70", 21, 1 },  /* PIF21: Pending bit 21 */
   { "\x40\x91\x9d\x74", 22, 1 },  /* PIF22: Pending bit 22 */
};

const Field_t EXTI_IMR2_fields[] = {
   { "\x24\xd7\x9d", 0, 1 },  /* IM32: Interrupt Mask on external/internal line               32 */
   { "\x24\xd7\x9e", 1, 1 },  /* IM33: Interrupt Mask on external/internal line               33 */
   { "\x24\xd7\x9f", 2, 1 },  /* IM34: Interrupt Mask on external/internal line               34 */
   { "\x24\xd7\xa0", 3, 1 },  /* IM35: Interrupt Mask on external/internal line               35 */
   { "\x24\xd7\xa1", 4, 1 },  /* IM36: Interrupt Mask on external/internal line               36 */
   { "\x24\xd7\xa2", 5, 1 },  /* IM37: Interrupt Mask on external/internal line               37 */
   { "\x24\xd7\xa3", 6, 1 },  /* IM38: Interrupt Mask on external/internal line               38 */
   { "\x24\xd7\xa4", 7, 1 },  /* IM39: Interrupt Mask on external/internal line               39 */
   { "\x24\xd7\xdb", 8, 1 },  /* IM40: Interrupt Mask on external/internal line               40 */
   { "\x24\xd7\xdc", 9, 1 },  /* IM41: Interrupt Mask on external/internal line               41 */
   { "\x24\xd7\xdd", 10, 1 },  /* IM42: Interrupt Mask on external/internal line               42 */
   { "\x24\xd7\xde", 11, 1 },  /* IM43: Interrupt Mask on external/internal line               43 */
};

const Field_t EXTI_EMR2_fields[] = {
   { "\x14\xd7\x9d", 0, 1 },  /* EM32: Event mask on external/internal line               32 */
   { "\x14\xd7\x9e", 1, 1 },  /* EM33: Event mask on external/internal line               33 */
   { "\x14\xd7\x9f", 2, 1 },  /* EM34: Event mask on external/internal line               34 */
   { "\x14\xd7\xa0", 3, 1 },  /* EM35: Event mask on external/internal line               35 */
   { "\x14\xd7\xa1", 4, 1 },  /* EM36: Event mask on external/internal line               36 */
   { "\x14\xd7\xa2", 5, 1 },  /* EM37: Event mask on external/internal line               37 */
   { "\x14\xd7\xa3", 6, 1 },  /* EM38: Event mask on external/internal line               38 */
   { "\x14\xd7\xa4", 7, 1 },  /* EM39: Event mask on external/internal line               39 */
   { "\x14\xd7\xdb", 8, 1 },  /* EM40: Event mask on external/internal line               40 */
};

const Field_t EXTI_RTSR2_fields[] = {
   { "\x49\x47\x9d", 0, 1 },  /* RT32: Rising trigger event configuration bit               of line 32 */
   { "\x49\x47\x9e", 1, 1 },  /* RT33: Rising trigger event configuration bit               of line 32 */
   { "\x49\x47\xa3", 6, 1 },  /* RT38: Rising trigger event configuration bit               of line 38 */
   { "\x49\x47\xa4", 7, 1 },  /* RT39: Rising trigger event configuration bit               of line 39 */
   { "\x49\x47\xdb", 8, 1 },  /* RT40: Rising trigger event configuration bit               of line 40 */
   { "\x49\x47\xdc", 9, 1 },  /* RT41: Rising trigger event configuration bit               of line 41 */
};

const Field_t EXTI_FTSR2_fields[] = {
   { "\x19\x47\xa0", 3, 1 },  /* FT35: Falling trigger event configuration bit               of line 35 */
   { "\x19\x47\xa1", 4, 1 },  /* FT36: Falling trigger event configuration bit               of line 36 */
   { "\x19\x47\xa2", 5, 1 },  /* FT37: Falling trigger event configuration bit               of line 37 */
   { "\x19\x47\xa3", 6, 1 },  /* FT38: Falling trigger event configuration bit               of line 38 */
};

const Field_t EXTI_SWIER2_fields[] = {
   { "\x4d\x72\x5e\x80", 3, 1 },  /* SWI35: Software interrupt on line               35 */
   { "\x4d\x72\x5e\x84", 4, 1 },  /* SWI36: Software interrupt on line               36 */
   { "\x4d\x72\x5e\x88", 5, 1 },  /* SWI37: Software interrupt on line               37 */
   { "\x4d\x72\x5e\x8c", 6, 1 },  /* SWI38: Software interrupt on line               38 */
};

const Field_t EXTI_PR2_fields[] = {
   { "\x40\x91\x9e\x80", 3, 1 },  /* PIF35: Pending interrupt flag on line               35 */
   { "\x40\x91\x9e\x84", 4, 1 },  /* PIF36: Pending interrupt flag on line               36 */
   { "\x40\x91\x9e\x88", 5, 1 },  /* PIF37: Pending interrupt flag on line               37 */
   { "\x40\x91\x9e\x8c", 6, 1 },  /* PIF38: Pending interrupt flag on line               38 */
};

const Register_t EXTI_registers[] = {
   {"\x24\xd4\x9c", 0, 32, 0, EXTI_IMR1_fields, 32}, /* IMR1: Interrupt mask register */
   {"\x14\xd4\x9c", 4, 32, 0, EXTI_EMR1_fields, 32}, /* EMR1: Event mask register */
   {"\x49\x44\xd2\x70", 8, 32, 0, EXTI_RTSR1_fields, 23}, /* RTSR1: Rising Trigger selection           register */
   {"\x19\x44\xd2\x70", 12, 32, 0, EXTI_FTSR1_fields, 22}, /* FTSR1: Falling Trigger selection           register */
   {"\x4d\x72\x45\x49\xc0", 16, 32, 0, EXTI_SWIER1_fields, 22}, /* SWIER1: Software interrupt event           register */
   {"\x41\x27\x00", 20, 32, 0, EXTI_PR1_fields, 22}, /* PR1: Pending register */
   {"\x24\xd4\x9d", 32, 32, 0, EXTI_IMR2_fields, 12}, /* IMR2: Interrupt mask register */
   {"\x14\xd4\x9d", 36, 32, 0, EXTI_EMR2_fields, 9}, /* EMR2: Event mask register */
   {"\x49\x44\xd2\x74", 40, 32, 0, EXTI_RTSR2_fields, 6}, /* RTSR2: Rising Trigger selection           register */
   {"\x19\x44\xd2\x74", 44, 32, 0, EXTI_FTSR2_fields, 4}, /* FTSR2: Falling Trigger selection           register */
   {"\x4d\x72\x45\x49\xd0", 48, 32, 0, EXTI_SWIER2_fields, 4}, /* SWIER2: Software interrupt event           register */
   {"\x41\x27\x40", 52, 32, 0, EXTI_PR2_fields, 4}, /* PR2: Pending register */
};

const Field_t TIM1_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode               selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
   { "\x10\x95\x08\x14\xe0", 12, 1 },  /* DITHEN: Dithering Enable */
};

const Field_t TIM1_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output Idle state 2 */
   { "\x3c\x94\xdd\x38", 11, 1 },  /* OIS2N: Output Idle state 2 */
   { "\x3c\x94\xde", 12, 1 },  /* OIS3: Output Idle state 3 */
   { "\x3c\x94\xde\x38", 13, 1 },  /* OIS3N: Output Idle state 3 */
   { "\x3c\x94\xdf", 14, 1 },  /* OIS4: Output Idle state 4 */
   { "\x3c\x94\xdf\x38", 15, 1 },  /* OIS4N: Output Idle state 4 (OC4N               output) */
   { "\x3c\x94\xe0", 16, 1 },  /* OIS5: Output Idle state 5 (OC5               output) */
   { "\x3c\x94\xe1", 18, 1 },  /* OIS6: Output Idle state 6 (OC6               output) */
   { "\x34\xd4\xdd", 20, 4 },  /* MMS2: Master mode selection 2 */
   { "\x34\xd4\xe5\x78", 25, 1 },  /* MMS_3: Master mode selection - bit               3 */
};

const Field_t TIM1_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x3c\x30\xd3", 3, 1 },  /* OCCS: OCREF clear selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
   { "\x4c\xd4\xe5\x78", 16, 1 },  /* SMS_3: Slave mode selection - bit               3 */
   { "\x51\x39\x5f\x95\xe0", 20, 2 },  /* TS_4_3: Trigger selection - bit               4:3 */
   { "\x4c\xd4\xd0\x14", 24, 1 },  /* SMSPE: SMS Preload Enable */
   { "\x4c\xd4\xd0\x4c", 25, 1 },  /* SMSPS: SMS Preload Source */
};

const Field_t TIM1_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt               enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request               enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
   { "\x24\x46\x09\x14", 20, 1 },  /* IDXIE: Index interrupt enable */
   { "\x10\x94\x89\x14", 21, 1 },  /* DIRIE: Direction Change interrupt               enable */
   { "\x24\x54\x92\x24\x50", 22, 1 },  /* IERRIE: Index Error interrupt               enable */
   { "\x50\x54\x92\x24\x50", 23, 1 },  /* TERRIE: Transition Error interrupt               enable */
};

const Field_t TIM1_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt               flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt               flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x09\xd2\x46", 8, 1 },  /* B2IF: Break 2 interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture               flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture               flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture               flag */
   { "\x4c\x22\x46", 13, 1 },  /* SBIF: System Break interrupt               flag */
   { "\x0c\x38\x09\x18", 16, 1 },  /* CC5IF: Compare 5 interrupt flag */
   { "\x0c\x38\x49\x18", 17, 1 },  /* CC6IF: Compare 6 interrupt flag */
   { "\x24\x46\x06", 20, 1 },  /* IDXF: Index interrupt flag */
   { "\x10\x94\x86", 21, 1 },  /* DIRF: Direction Change interrupt               flag */
   { "\x24\x54\x92\x18", 22, 1 },  /* IERRF: Index Error interrupt flag */
   { "\x50\x54\x92\x18", 23, 1 },  /* TERRF: Transition Error interrupt               flag */
};

const Field_t TIM1_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3               generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
   { "\x09\xd1\xc0", 8, 1 },  /* B2G: Break 2 generation */
};

const Field_t TIM1_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output Compare 1 clear               enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast               enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload               enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output Compare 2 clear               enable */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode - bit               3 */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output Compare 2 mode - bit               3 */
};

const Field_t TIM1_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2               selection */
   { "\x24\x37\x50\x4c\x30", 10, 2 },  /* IC2PSC: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM1_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3               selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM1_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3               selection */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: Output compare 3 fast               enable */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: Output compare 3 preload               enable */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: Output compare 3 mode */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: Output compare 3 clear               enable */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4               selection */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: Output compare 4 fast               enable */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: Output compare 4 preload               enable */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: Output compare 4 mode */
   { "\x3c\x37\xc3\x14", 15, 1 },  /* OC4CE: Output compare 4 clear               enable */
   { "\x3c\x37\x8d\x95\xe0", 16, 1 },  /* OC3M_3: Output Compare 3 mode - bit               3 */
   { "\x3c\x37\xcd\x95\xe0", 24, 1 },  /* OC4M_3: Output Compare 4 mode - bit               3 */
};

const Field_t TIM1_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x4e\x14", 6, 1 },  /* CC2NE: Capture/Compare 2 complementary output               enable */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output               Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output               enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\x8e\x14", 10, 1 },  /* CC3NE: Capture/Compare 3 complementary output               enable */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output               enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output               Polarity */
   { "\x0c\x37\xce\x14", 14, 1 },  /* CC4NE: Capture/Compare 4 complementary output               enable */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 complementary output               polarity */
   { "\x0c\x38\x05", 16, 1 },  /* CC5E: Capture/Compare 5 output               enable */
   { "\x0c\x38\x10", 17, 1 },  /* CC5P: Capture/Compare 5 output               polarity */
   { "\x0c\x38\x45", 20, 1 },  /* CC6E: Capture/Compare 6 output               enable */
   { "\x0c\x38\x50", 21, 1 },  /* CC6P: Capture/Compare 6 output               polarity */
};

const Field_t TIM1_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIFCPY */
};

const Field_t TIM1_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM1_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM1_RCR_fields[] = {
   { "\x48\x54\x00", 0, 16 },  /* REP: Repetition counter value */
};

const Field_t TIM1_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM1_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 2 value */
};

const Field_t TIM1_CCR3_fields[] = {
   { "\x0c\x34\x9e", 0, 16 },  /* CCR3: Capture/Compare value */
};

const Field_t TIM1_CCR4_fields[] = {
   { "\x0c\x34\x9f", 0, 16 },  /* CCR4: Capture/Compare value */
};

const Field_t TIM1_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
   { "\x08\xb7\x46", 20, 4 },  /* BK2F: Break 2 filter */
   { "\x08\xb7\x45", 24, 1 },  /* BK2E: Break 2 Enable */
   { "\x08\xb7\x50", 25, 1 },  /* BK2P: Break 2 polarity */
   { "\x08\xb1\x13\x48\xd0", 26, 1 },  /* BKDSRM: BKDSRM */
   { "\x08\xb7\x44\x4d\x23\x40", 27, 1 },  /* BK2DSRM: BK2DSRM */
   { "\x08\xb0\x89\x10", 28, 1 },  /* BKBID: BKBID */
   { "\x08\xb7\x49\x10", 29, 1 },  /* BK2ID: BK2ID */
};

const Field_t TIM1_CCR5_fields[] = {
   { "\x0c\x34\xa0", 0, 16 },  /* CCR5: Capture/Compare value */
   { "\x1c\x38\x03\x70", 29, 1 },  /* GC5C1: Group Channel 5 and Channel               1 */
   { "\x1c\x38\x03\x74", 30, 1 },  /* GC5C2: Group Channel 5 and Channel               2 */
   { "\x1c\x38\x03\x78", 31, 1 },  /* GC5C3: Group Channel 5 and Channel               3 */
};

const Field_t TIM1_CCR6_fields[] = {
   { "\x0c\x34\xa1", 0, 16 },  /* CCR6: Capture/Compare value */
};

const Field_t TIM1_CCMR3_Output_fields[] = {
   { "\x3c\x38\x06\x14", 2, 1 },  /* OC5FE: Output compare 5 fast               enable */
   { "\x3c\x38\x10\x14", 3, 1 },  /* OC5PE: Output compare 5 preload               enable */
   { "\x3c\x38\x0d", 4, 3 },  /* OC5M: Output compare 5 mode */
   { "\x3c\x38\x03\x14", 7, 1 },  /* OC5CE: Output compare 5 clear               enable */
   { "\x3c\x38\x46\x14", 10, 1 },  /* OC6FE: Output compare 6 fast               enable */
   { "\x3c\x38\x50\x14", 11, 1 },  /* OC6PE: Output compare 6 preload               enable */
   { "\x3c\x38\x4d", 12, 3 },  /* OC6M: Output compare 6 mode */
   { "\x3c\x38\x43\x14", 15, 1 },  /* OC6CE: Output compare 6 clear               enable */
   { "\x3c\x38\x0d\x94\x22\x54\x78", 16, 3 },  /* OC5M_bit3: Output Compare 5 mode bit               3 */
   { "\x3c\x38\x4d\x94\x22\x54\x78", 24, 1 },  /* OC6M_bit3: Output Compare 6 mode bit               3 */
};

const Field_t TIM1_DTR2_fields[] = {
   { "\x11\x41\xc6", 0, 8 },  /* DTGF: Dead-time falling edge generator               setup */
   { "\x11\x40\x45", 16, 1 },  /* DTAE: Deadtime Asymmetric Enable */
   { "\x11\x44\x05", 17, 1 },  /* DTPE: Deadtime Preload Enable */
};

const Field_t TIM1_ECR_fields[] = {
   { "\x24\x50", 0, 1 },  /* IE: Index Enable */
   { "\x24\x42\x52", 1, 2 },  /* IDIR: Index Direction */
   { "\x24\x23\x0b", 3, 2 },  /* IBLK: Index Blanking */
   { "\x18\x91\x18", 5, 1 },  /* FIDX: First Index */
   { "\x25\x03\xd3", 6, 2 },  /* IPOS: Index Positioning */
   { "\x41\x70", 16, 8 },  /* PW: Pulse width */
   { "\x41\x74\x12\x4c\x30", 24, 3 },  /* PWPRSC: Pulse Width prescaler */
};

const Field_t TIM1_TISEL_fields[] = {
   { "\x50\x97\x13\x14\xc0", 0, 4 },  /* TI1SEL: TI1[0] to TI1[15] input               selection */
   { "\x50\x97\x53\x14\xc0", 8, 4 },  /* TI2SEL: TI2[0] to TI2[15] input               selection */
   { "\x50\x97\x93\x14\xc0", 16, 4 },  /* TI3SEL: TI3[0] to TI3[15] input               selection */
   { "\x50\x97\xd3\x14\xc0", 24, 4 },  /* TI4SEL: TI4[0] to TI4[15] input               selection */
};

const Field_t TIM1_AF1_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb0\xcd\x41\xc1\x40", 1, 1 },  /* BKCMP1E: BRK COMP1 enable */
   { "\x08\xb0\xcd\x41\xd1\x40", 2, 1 },  /* BKCMP2E: BRK COMP2 enable */
   { "\x08\xb0\xcd\x41\xe1\x40", 3, 1 },  /* BKCMP3E: BRK COMP3 enable */
   { "\x08\xb0\xcd\x41\xf1\x40", 4, 1 },  /* BKCMP4E: BRK COMP4 enable */
   { "\x08\xb0\xcd\x42\x01\x40", 5, 1 },  /* BKCMP5E: BRK COMP5 enable */
   { "\x08\xb0\xcd\x42\x11\x40", 6, 1 },  /* BKCMP6E: BRK COMP6 enable */
   { "\x08\xb0\xcd\x42\x21\x40", 7, 1 },  /* BKCMP7E: BRK COMP7 enable */
   { "\x08\xb2\x4e\x40", 9, 1 },  /* BKINP: BRK BKIN input polarity */
   { "\x08\xb0\xcd\x41\xc4\x00", 10, 1 },  /* BKCMP1P: BRK COMP1 input polarity */
   { "\x08\xb0\xcd\x41\xd4\x00", 11, 1 },  /* BKCMP2P: BRK COMP2 input polarity */
   { "\x08\xb0\xcd\x41\xe4\x00", 12, 1 },  /* BKCMP3P: BRK COMP3 input polarity */
   { "\x08\xb0\xcd\x41\xf4\x00", 13, 1 },  /* BKCMP4P: BRK COMP4 input polarity */
   { "\x15\x44\x93\x14\xc0", 14, 4 },  /* ETRSEL: ETR source selection */
};

const Field_t TIM1_AF2_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb7\x43\x35\x07\x05", 1, 1 },  /* BK2CMP1E: BRK2 COMP1 enable */
   { "\x08\xb7\x43\x35\x07\x45", 2, 1 },  /* BK2CMP2E: BRK2 COMP2 enable */
   { "\x08\xb7\x43\x35\x07\x85", 3, 1 },  /* BK2CMP3E: BRK2 COMP3 enable */
   { "\x08\xb7\x43\x35\x07\xc5", 4, 1 },  /* BK2CMP4E: BRK2 COMP4 enable */
   { "\x08\xb7\x43\x35\x08\x05", 5, 1 },  /* BK2CMP5E: BRK2 COMP5 enable */
   { "\x08\xb7\x43\x35\x08\x45", 6, 1 },  /* BK2CMP6E: BRK2 COMP6 enable */
   { "\x08\xb7\x43\x35\x08\x85", 7, 1 },  /* BK2CMP7E: BRK2 COMP7 enable */
   { "\x08\xb7\x49\x39\x00", 9, 1 },  /* BK2INP: BRK2 BKIN input polarity */
   { "\x08\xb7\x43\x35\x07\x10", 10, 1 },  /* BK2CMP1P: BRK2 COMP1 input polarity */
   { "\x08\xb7\x43\x35\x07\x50", 11, 1 },  /* BK2CMP2P: BRK2 COMP2 input polarity */
   { "\x08\xb7\x43\x35\x07\x90", 12, 1 },  /* BK2CMP3P: BRK2 COMP3 input polarity */
   { "\x08\xb7\x43\x35\x07\xd0", 13, 1 },  /* BK2CMP4P: BRK2 COMP4 input polarity */
   { "\x3c\x34\x93\x14\xc0", 16, 3 },  /* OCRSEL: OCREF_CLR source selection */
};

const Field_t TIM1_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM1_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 32 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM1_CR1_fields, 10}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM1_CR2_fields, 17}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM1_SMCR_fields, 12}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM1_DIER_fields, 19}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM1_SR_fields, 20}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM1_EGR_fields, 9}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM1_CCMR1_Output_fields, 12}, /* CCMR1_Output: capture/compare mode register 1 (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM1_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM1_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input           mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM1_CCMR2_Output_fields, 12}, /* CCMR2_Output: capture/compare mode register 2 (output           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM1_CCER_fields, 20}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM1_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM1_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM1_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM1_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM1_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM1_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM1_CCR3_fields, 1}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM1_CCR4_fields, 1}, /* CCR4: capture/compare register 4 */
   {"\x08\x45\x12", 68, 32, 0, TIM1_BDTR_fields, 16}, /* BDTR: break and dead-time register */
   {"\x0c\x34\xa0", 72, 32, 0, TIM1_CCR5_fields, 4}, /* CCR5: capture/compare register 4 */
   {"\x0c\x34\xa1", 76, 32, 0, TIM1_CCR6_fields, 1}, /* CCR6: capture/compare register 4 */
   {"\x0c\x33\x52\x7a\x53\xd5\x51\x05\x54", 80, 32, 0, TIM1_CCMR3_Output_fields, 10}, /* CCMR3_Output: capture/compare mode register 2 (output           mode) */
   {"\x11\x44\x9d", 84, 32, 0, TIM1_DTR2_fields, 3}, /* DTR2: timer Deadtime Register 2 */
   {"\x14\x34\x80", 88, 32, 0, TIM1_ECR_fields, 7}, /* ECR: DMA control register */
   {"\x50\x94\xc5\x30", 92, 32, 0, TIM1_TISEL_fields, 4}, /* TISEL: TIM timer input selection           register */
   {"\x04\x67\x00", 96, 32, 0, TIM1_AF1_fields, 14}, /* AF1: TIM alternate function option register           1 */
   {"\x04\x67\x40", 100, 32, 0, TIM1_AF2_fields, 14}, /* AF2: TIM alternate function option register           2 */
   {"\x10\x34\x80", 988, 32, 0, TIM1_DCR_fields, 2}, /* DCR: control register */
   {"\x10\xd0\x52", 992, 32, 0, TIM1_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t SPI1_CR1_fields[] = {
   { "\x0d\x02\x01", 0, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 1, 1 },  /* CPOL: Clock polarity */
   { "\x35\x35\x12", 2, 1 },  /* MSTR: Master selection */
   { "\x09\x20", 3, 3 },  /* BR: Baud rate control */
   { "\x4d\x01\x40", 6, 1 },  /* SPE: SPI enable */
   { "\x31\x30\x86\x25\x24\xd4", 7, 1 },  /* LSBFIRST: Frame format */
   { "\x4d\x32\x40", 8, 1 },  /* SSI: Internal slave select */
   { "\x4d\x33\x40", 9, 1 },  /* SSM: Software slave management */
   { "\x49\x83\xce\x31\x90", 10, 1 },  /* RXONLY: Receive only */
   { "\x10\x61\x80", 11, 1 },  /* DFF: Data frame format */
   { "\x0d\x20\xce\x15\x85\x00", 12, 1 },  /* CRCNEXT: CRC transfer next */
   { "\x0d\x20\xc5\x38", 13, 1 },  /* CRCEN: Hardware CRC calculation               enable */
   { "\x08\x91\x09\x3c\x50", 14, 1 },  /* BIDIOE: Output enable in bidirectional               mode */
   { "\x08\x91\x09\x34\xf1\x05", 15, 1 },  /* BIDIMODE: Bidirectional data mode               enable */
};

const Field_t SPI1_CR2_fields[] = {
   { "\x49\x81\x0d\x04\x53\x80", 0, 1 },  /* RXDMAEN: Rx buffer DMA enable */
   { "\x51\x81\x0d\x04\x53\x80", 1, 1 },  /* TXDMAEN: Tx buffer DMA enable */
   { "\x4d\x33\xc5", 2, 1 },  /* SSOE: SS output enable */
   { "\x39\x34\xd0", 3, 1 },  /* NSSP: NSS pulse management */
   { "\x19\x21\x80", 4, 1 },  /* FRF: Frame format */
   { "\x15\x24\x89\x14", 5, 1 },  /* ERRIE: Error interrupt enable */
   { "\x49\x83\x85\x24\x50", 6, 1 },  /* RXNEIE: RX buffer not empty interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: Tx buffer empty interrupt               enable */
   { "\x11\x30", 8, 4 },  /* DS: Data size */
   { "\x19\x26\x14\x20", 12, 1 },  /* FRXTH: FIFO reception threshold */
   { "\x30\x43\x41\x95\x26\x00", 13, 1 },  /* LDMA_RX: Last DMA transfer for               reception */
   { "\x30\x43\x41\x95\x46\x00", 14, 1 },  /* LDMA_TX: Last DMA transfer for               transmission */
};

const Field_t SPI1_SR_fields[] = {
   { "\x49\x83\x85", 0, 1 },  /* RXNE: Receive buffer not empty */
   { "\x51\x81\x40", 1, 1 },  /* TXE: Transmit buffer empty */
   { "\x0d\x20\xc5\x49\x20", 4, 1 },  /* CRCERR: CRC error flag */
   { "\x34\xf1\x06", 5, 1 },  /* MODF: Mode fault */
   { "\x3d\x64\x80", 6, 1 },  /* OVR: Overrun flag */
   { "\x09\x36\x40", 7, 1 },  /* BSY: Busy flag */
   { "\x50\x91\x92\x18\x50", 8, 1 },  /* TIFRFE: TI frame format error */
   { "\x19\x23\x16\x30", 9, 2 },  /* FRLVL: FIFO reception level */
   { "\x19\x43\x16\x30", 11, 2 },  /* FTLVL: FIFO transmission level */
};

const Field_t SPI1_DR_fields[] = {
   { "\x11\x20", 0, 16 },  /* DR: Data register */
};

const Field_t SPI1_CRCPR_fields[] = {
   { "\x0d\x20\xd0\x3c\xc6\x40", 0, 16 },  /* CRCPOLY: CRC polynomial register */
};

const Field_t SPI1_RXCRCR_fields[] = {
   { "\x49\x80\xd2\x0c", 0, 16 },  /* RxCRC: Rx CRC register */
};

const Field_t SPI1_TXCRCR_fields[] = {
   { "\x51\x80\xd2\x0c", 0, 16 },  /* TxCRC: Tx CRC register */
};

const Field_t SPI1_I2SCFGR_fields[] = {
   { "\x0c\x83\x05\x38", 0, 1 },  /* CHLEN: CHLEN */
   { "\x10\x15\x0c\x14\xe0", 1, 2 },  /* DATLEN: DATLEN */
   { "\x0c\xb4\x0f\x30", 3, 1 },  /* CKPOL: CKPOL */
   { "\x25\xd4\xd3\x50\x40", 4, 2 },  /* I2SSTD: I2SSTD */
   { "\x40\x33\x53\x64\xe0\xc0", 7, 1 },  /* PCMSYNC: PCMSYNC */
   { "\x25\xd4\xc3\x18\x70", 8, 2 },  /* I2SCFG: I2SCFG */
   { "\x25\xd4\xc5", 10, 1 },  /* I2SE: I2SE */
   { "\x25\xd4\xcd\x3c\x40", 11, 1 },  /* I2SMOD: I2SMOD */
};

const Field_t SPI1_I2SPR_fields[] = {
   { "\x25\xd4\xc4\x25\x60", 0, 8 },  /* I2SDIV: I2SDIV */
   { "\x3c\x41\x00", 8, 1 },  /* ODD: ODD */
   { "\x34\x32\xcf\x14", 9, 1 },  /* MCKOE: MCKOE */
};

const Register_t SPI1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, SPI1_CR1_fields, 14}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, SPI1_CR2_fields, 12}, /* CR2: control register 2 */
   {"\x4d\x20", 8, 32, 0, SPI1_SR_fields, 9}, /* SR: status register */
   {"\x11\x20", 12, 32, 0, SPI1_DR_fields, 1}, /* DR: data register */
   {"\x0d\x20\xd0\x48", 16, 32, 0, SPI1_CRCPR_fields, 1}, /* CRCPR: CRC polynomial register */
   {"\x49\x80\xd2\x0d\x20", 20, 32, 0, SPI1_RXCRCR_fields, 1}, /* RXCRCR: RX CRC register */
   {"\x51\x80\xd2\x0d\x20", 24, 32, 0, SPI1_TXCRCR_fields, 1}, /* TXCRCR: TX CRC register */
   {"\x25\xd4\xc3\x18\x74\x80", 28, 32, 0, SPI1_I2SCFGR_fields, 8}, /* I2SCFGR: configuration register */
   {"\x25\xd4\xd0\x48", 32, 32, 0, SPI1_I2SPR_fields, 3}, /* I2SPR: prescaler register */
};

const Field_t USART1_CR1_fields[] = {
   { "\x54\x50", 0, 1 },  /* UE: USART enable */
   { "\x54\x54\xcd", 1, 1 },  /* UESM: USART enable in Stop mode */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Receiver wakeup method */
   { "\x35\xb0", 12, 1 },  /* M0: Word length */
   { "\x34\xd1\x40", 13, 1 },  /* MME: Mute mode enable */
   { "\x0c\xd2\x45", 14, 1 },  /* CMIE: Character match interrupt               enable */
   { "\x3d\x61\x52\x8c", 15, 1 },  /* OVER8: Oversampling mode */
   { "\x10\x51\x14\x6c", 16, 1 },  /* DEDT0: DEDT0 */
   { "\x10\x51\x14\x70", 17, 1 },  /* DEDT1: DEDT1 */
   { "\x10\x51\x14\x74", 18, 1 },  /* DEDT2: DEDT2 */
   { "\x10\x51\x14\x78", 19, 1 },  /* DEDT3: DEDT3 */
   { "\x10\x51\x14\x7c", 20, 1 },  /* DEDT4: Driver Enable de-assertion               time */
   { "\x10\x50\x54\x6c", 21, 1 },  /* DEAT0: DEAT0 */
   { "\x10\x50\x54\x70", 22, 1 },  /* DEAT1: DEAT1 */
   { "\x10\x50\x54\x74", 23, 1 },  /* DEAT2: DEAT2 */
   { "\x10\x50\x54\x78", 24, 1 },  /* DEAT3: DEAT3 */
   { "\x10\x50\x54\x7c", 25, 1 },  /* DEAT4: Driver Enable assertion               time */
   { "\x49\x43\xc9\x14", 26, 1 },  /* RTOIE: Receiver timeout interrupt               enable */
   { "\x14\xf0\x89\x14", 27, 1 },  /* EOBIE: End of Block interrupt               enable */
   { "\x35\xc0", 28, 1 },  /* M1: M1 */
   { "\x18\x91\x8f\x14\xe0", 29, 1 },  /* FIFOEN: FIFOEN */
   { "\x51\x81\x85\x24\x50", 30, 1 },  /* TXFEIE: TXFEIE */
   { "\x49\x81\x86\x24\x50", 31, 1 },  /* RXFFIE: RXFFIE */
};

const Field_t USART1_CR2_fields[] = {
   { "\x4c\xc5\x85\x38", 0, 1 },  /* SLVEN: SLVEN */
   { "\x10\x94\xe5\x39\x34\xc0", 3, 1 },  /* DIS_NSS: DIS_NSS */
   { "\x04\x41\x0d\x88", 4, 1 },  /* ADDM7: 7-bit Address Detection/4-bit Address               Detection */
   { "\x30\x21\x0c", 5, 1 },  /* LBDL: LIN break detection length */
   { "\x30\x21\x09\x14", 6, 1 },  /* LBDIE: LIN break detection interrupt               enable */
   { "\x30\x20\xcc", 8, 1 },  /* LBCL: Last bit clock pulse */
   { "\x0d\x02\x01", 9, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 10, 1 },  /* CPOL: Clock polarity */
   { "\x0c\xc2\xc5\x38", 11, 1 },  /* CLKEN: Clock enable */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x30\x93\x85\x38", 14, 1 },  /* LINEN: LIN mode enable */
   { "\x4d\x70\x50", 15, 1 },  /* SWAP: Swap TX/RX pins */
   { "\x49\x82\x4e\x58", 16, 1 },  /* RXINV: RX pin active level               inversion */
   { "\x51\x82\x4e\x58", 17, 1 },  /* TXINV: TX pin active level               inversion */
   { "\x50\x12\x4e\x58", 18, 1 },  /* TAINV: Binary data inversion */
   { "\x35\x30\x86\x25\x24\xd4", 19, 1 },  /* MSBFIRST: Most significant bit first */
   { "\x04\x24\x85\x38", 20, 1 },  /* ABREN: Auto baud rate enable */
   { "\x04\x24\x8d\x3c\x46\xc0", 21, 1 },  /* ABRMOD0: ABRMOD0 */
   { "\x04\x24\x8d\x3c\x47\x00", 22, 1 },  /* ABRMOD1: Auto baud rate mode */
   { "\x49\x43\xc5\x38", 23, 1 },  /* RTOEN: Receiver timeout enable */
   { "\x04\x41\x1b\x95\xe0", 24, 4 },  /* ADD0_3: Address of the USART node */
   { "\x04\x41\x1f\x96\x20", 28, 4 },  /* ADD4_7: Address of the USART node */
};

const Field_t USART1_CR3_fields[] = {
   { "\x14\x91\x40", 0, 1 },  /* EIE: Error interrupt enable */
   { "\x25\x21\x4e", 1, 1 },  /* IREN: Ir mode enable */
   { "\x25\x23\x10", 2, 1 },  /* IRLP: Ir low-power */
   { "\x20\x44\xc5\x30", 3, 1 },  /* HDSEL: Half-duplex selection */
   { "\x38\x10\xcb", 4, 1 },  /* NACK: Smartcard NACK enable */
   { "\x4c\x31\x4e", 5, 1 },  /* SCEN: Smartcard mode enable */
   { "\x10\xd0\x52", 6, 1 },  /* DMAR: DMA enable receiver */
   { "\x10\xd0\x54", 7, 1 },  /* DMAT: DMA enable transmitter */
   { "\x49\x44\xc5", 8, 1 },  /* RTSE: RTS enable */
   { "\x0d\x44\xc5", 9, 1 },  /* CTSE: CTS enable */
   { "\x0d\x44\xc9\x14", 10, 1 },  /* CTSIE: CTS interrupt enable */
   { "\x3c\xe1\x42\x25\x40", 11, 1 },  /* ONEBIT: One sample bit method               enable */
   { "\x3d\x64\x84\x25\x30", 12, 1 },  /* OVRDIS: Overrun Disable */
   { "\x10\x44\x85", 13, 1 },  /* DDRE: DMA Disable on Reception               Error */
   { "\x10\x53\x40", 14, 1 },  /* DEM: Driver enable mode */
   { "\x10\x54\x00", 15, 1 },  /* DEP: Driver enable polarity               selection */
   { "\x4c\x30\x52\x0c\xe5\x00", 17, 3 },  /* SCARCNT: Smartcard auto-retry count */
   { "\x5d\x54\xc0", 20, 2 },  /* WUS: Wakeup from Stop mode interrupt flag               selection */
   { "\x5d\x51\x89\x14", 22, 1 },  /* WUFIE: Wakeup from Stop mode interrupt               enable */
   { "\x51\x81\x94\x24\x50", 23, 1 },  /* TXFTIE: TXFTIE */
   { "\x50\x30\x87\x50\x91\x40", 24, 1 },  /* TCBGTIE: TCBGTIE */
   { "\x49\x81\x94\x0c\x61\xc0", 25, 3 },  /* RXFTCFG: RXFTCFG */
   { "\x49\x81\x94\x24\x50", 28, 1 },  /* RXFTIE: RXFTIE */
   { "\x51\x81\x94\x0c\x61\xc0", 29, 3 },  /* TXFTCFG: TXFTCFG */
};

const Field_t USART1_BRR_fields[] = {
   { "\x10\x95\xa5\x19\x20\x43\x50\x93\xce", 0, 4 },  /* DIV_Fraction: DIV_Fraction */
   { "\x10\x95\xa5\x34\x13\x94\x25\x34\xc1", 4, 12 },  /* DIV_Mantissa: DIV_Mantissa */
};

const Field_t USART1_GTPR_fields[] = {
   { "\x41\x30\xc0", 0, 8 },  /* PSC: Prescaler value */
   { "\x1d\x40", 8, 8 },  /* GT: Guard time value */
};

const Field_t USART1_RTOR_fields[] = {
   { "\x49\x43\xc0", 0, 24 },  /* RTO: Receiver timeout value */
   { "\x08\xc1\x4e", 24, 8 },  /* BLEN: Block Length */
};

const Field_t USART1_RQR_fields[] = {
   { "\x04\x24\x92\x44", 0, 1 },  /* ABRRQ: Auto baud rate request */
   { "\x4c\x22\xd2\x44", 1, 1 },  /* SBKRQ: Send break request */
   { "\x34\xd4\x91", 2, 1 },  /* MMRQ: Mute mode request */
   { "\x49\x81\x92\x44", 3, 1 },  /* RXFRQ: Receive data flush request */
   { "\x51\x81\x92\x44", 4, 1 },  /* TXFRQ: Transmit data flush               request */
};

const Field_t USART1_ISR_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: PE */
   { "\x18\x50", 1, 1 },  /* FE: FE */
   { "\x38\x60", 2, 1 },  /* NF: NF */
   { "\x3d\x21\x40", 3, 1 },  /* ORE: ORE */
   { "\x24\x43\x05", 4, 1 },  /* IDLE: IDLE */
   { "\x49\x83\x85", 5, 1 },  /* RXNE: RXNE */
   { "\x50\x30", 6, 1 },  /* TC: TC */
   { "\x51\x81\x40", 7, 1 },  /* TXE: TXE */
   { "\x30\x21\x06", 8, 1 },  /* LBDF: LBDF */
   { "\x0d\x44\xc9\x18", 9, 1 },  /* CTSIF: CTSIF */
   { "\x0d\x44\xc0", 10, 1 },  /* CTS: CTS */
   { "\x49\x43\xc6", 11, 1 },  /* RTOF: RTOF */
   { "\x14\xf0\x86", 12, 1 },  /* EOBF: EOBF */
   { "\x54\x44\x80", 13, 1 },  /* UDR: UDR */
   { "\x04\x24\x85", 14, 1 },  /* ABRE: ABRE */
   { "\x04\x24\x86", 15, 1 },  /* ABRF: ABRF */
   { "\x09\x54\xd9", 16, 1 },  /* BUSY: BUSY */
   { "\x0c\xd1\x80", 17, 1 },  /* CMF: CMF */
   { "\x4c\x22\xc6", 18, 1 },  /* SBKF: SBKF */
   { "\x49\x75\x40", 19, 1 },  /* RWU: RWU */
   { "\x5d\x51\x80", 20, 1 },  /* WUF: WUF */
   { "\x50\x50\x43\x2c", 21, 1 },  /* TEACK: TEACK */
   { "\x48\x50\x43\x2c", 22, 1 },  /* REACK: REACK */
   { "\x51\x81\x85", 23, 1 },  /* TXFE: TXFE */
   { "\x49\x81\x86", 24, 1 },  /* RXFF: RXFF */
   { "\x50\x30\x87\x50", 25, 1 },  /* TCBGT: TCBGT */
   { "\x49\x81\x94", 26, 1 },  /* RXFT: RXFT */
   { "\x51\x81\x94", 27, 1 },  /* TXFT: TXFT */
};

const Field_t USART1_ICR_fields[] = {
   { "\x40\x50\xc6", 0, 1 },  /* PECF: Parity error clear flag */
   { "\x18\x50\xc6", 1, 1 },  /* FECF: Framing error clear flag */
   { "\x38\x31\x80", 2, 1 },  /* NCF: Noise detected clear flag */
   { "\x3d\x21\x43\x18", 3, 1 },  /* ORECF: Overrun error clear flag */
   { "\x24\x43\x05\x0c\x60", 4, 1 },  /* IDLECF: Idle line detected clear               flag */
   { "\x51\x81\x85\x0c\x60", 5, 1 },  /* TXFECF: TXFECF */
   { "\x50\x30\xc6", 6, 1 },  /* TCCF: Transmission complete clear               flag */
   { "\x50\x30\x87\x50\x31\x80", 7, 1 },  /* TCBGTCF: TCBGTCF */
   { "\x30\x21\x03\x18", 8, 1 },  /* LBDCF: LIN break detection clear               flag */
   { "\x0d\x44\xc3\x18", 9, 1 },  /* CTSCF: CTS clear flag */
   { "\x49\x43\xc3\x18", 11, 1 },  /* RTOCF: Receiver timeout clear               flag */
   { "\x14\xf0\x83\x18", 12, 1 },  /* EOBCF: End of block clear flag */
   { "\x54\x44\x83\x18", 13, 1 },  /* UDRCF: UDRCF */
   { "\x0c\xd0\xc6", 17, 1 },  /* CMCF: Character match clear flag */
   { "\x5d\x50\xc6", 20, 1 },  /* WUCF: Wakeup from Stop mode clear               flag */
};

const Field_t USART1_RDR_fields[] = {
   { "\x48\x44\x80", 0, 9 },  /* RDR: Receive data value */
};

const Field_t USART1_TDR_fields[] = {
   { "\x50\x44\x80", 0, 9 },  /* TDR: Transmit data value */
};

const Field_t USART1_PRESC_fields[] = {
   { "\x41\x21\x53\x0c\x13\x05\x48", 0, 4 },  /* PRESCALER: PRESCALER */
};

const Register_t USART1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, USART1_CR1_fields, 32}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, USART1_CR2_fields, 22}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, USART1_CR3_fields, 24}, /* CR3: Control register 3 */
   {"\x09\x24\x80", 12, 32, 0, USART1_BRR_fields, 2}, /* BRR: Baud rate register */
   {"\x1d\x44\x12", 16, 32, 0, USART1_GTPR_fields, 2}, /* GTPR: Guard time and prescaler           register */
   {"\x49\x43\xd2", 20, 32, 0, USART1_RTOR_fields, 2}, /* RTOR: Receiver timeout register */
   {"\x49\x14\x80", 24, 32, 0, USART1_RQR_fields, 5}, /* RQR: Request register */
   {"\x25\x34\x80", 28, 32, 0, USART1_ISR_fields, 28}, /* ISR: Interrupt & status           register */
   {"\x24\x34\x80", 32, 32, 0, USART1_ICR_fields, 15}, /* ICR: Interrupt flag clear register */
   {"\x48\x44\x80", 36, 32, 0, USART1_RDR_fields, 1}, /* RDR: Receive data register */
   {"\x50\x44\x80", 40, 32, 0, USART1_TDR_fields, 1}, /* TDR: Transmit data register */
   {"\x41\x21\x53\x0c", 44, 32, 0, USART1_PRESC_fields, 1}, /* PRESC: USART prescaler register */
};

const Field_t SPI4_CR1_fields[] = {
   { "\x0d\x02\x01", 0, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 1, 1 },  /* CPOL: Clock polarity */
   { "\x35\x35\x12", 2, 1 },  /* MSTR: Master selection */
   { "\x09\x20", 3, 3 },  /* BR: Baud rate control */
   { "\x4d\x01\x40", 6, 1 },  /* SPE: SPI enable */
   { "\x31\x30\x86\x25\x24\xd4", 7, 1 },  /* LSBFIRST: Frame format */
   { "\x4d\x32\x40", 8, 1 },  /* SSI: Internal slave select */
   { "\x4d\x33\x40", 9, 1 },  /* SSM: Software slave management */
   { "\x49\x83\xce\x31\x90", 10, 1 },  /* RXONLY: Receive only */
   { "\x10\x61\x80", 11, 1 },  /* DFF: Data frame format */
   { "\x0d\x20\xce\x15\x85\x00", 12, 1 },  /* CRCNEXT: CRC transfer next */
   { "\x0d\x20\xc5\x38", 13, 1 },  /* CRCEN: Hardware CRC calculation               enable */
   { "\x08\x91\x09\x3c\x50", 14, 1 },  /* BIDIOE: Output enable in bidirectional               mode */
   { "\x08\x91\x09\x34\xf1\x05", 15, 1 },  /* BIDIMODE: Bidirectional data mode               enable */
};

const Field_t SPI4_CR2_fields[] = {
   { "\x49\x81\x0d\x04\x53\x80", 0, 1 },  /* RXDMAEN: Rx buffer DMA enable */
   { "\x51\x81\x0d\x04\x53\x80", 1, 1 },  /* TXDMAEN: Tx buffer DMA enable */
   { "\x4d\x33\xc5", 2, 1 },  /* SSOE: SS output enable */
   { "\x39\x34\xd0", 3, 1 },  /* NSSP: NSS pulse management */
   { "\x19\x21\x80", 4, 1 },  /* FRF: Frame format */
   { "\x15\x24\x89\x14", 5, 1 },  /* ERRIE: Error interrupt enable */
   { "\x49\x83\x85\x24\x50", 6, 1 },  /* RXNEIE: RX buffer not empty interrupt               enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: Tx buffer empty interrupt               enable */
   { "\x11\x30", 8, 4 },  /* DS: Data size */
   { "\x19\x26\x14\x20", 12, 1 },  /* FRXTH: FIFO reception threshold */
   { "\x30\x43\x41\x95\x26\x00", 13, 1 },  /* LDMA_RX: Last DMA transfer for               reception */
   { "\x30\x43\x41\x95\x46\x00", 14, 1 },  /* LDMA_TX: Last DMA transfer for               transmission */
};

const Field_t SPI4_SR_fields[] = {
   { "\x49\x83\x85", 0, 1 },  /* RXNE: Receive buffer not empty */
   { "\x51\x81\x40", 1, 1 },  /* TXE: Transmit buffer empty */
   { "\x0d\x20\xc5\x49\x20", 4, 1 },  /* CRCERR: CRC error flag */
   { "\x34\xf1\x06", 5, 1 },  /* MODF: Mode fault */
   { "\x3d\x64\x80", 6, 1 },  /* OVR: Overrun flag */
   { "\x09\x36\x40", 7, 1 },  /* BSY: Busy flag */
   { "\x50\x91\x92\x18\x50", 8, 1 },  /* TIFRFE: TI frame format error */
   { "\x19\x23\x16\x30", 9, 2 },  /* FRLVL: FIFO reception level */
   { "\x19\x43\x16\x30", 11, 2 },  /* FTLVL: FIFO transmission level */
};

const Field_t SPI4_DR_fields[] = {
   { "\x11\x20", 0, 16 },  /* DR: Data register */
};

const Field_t SPI4_CRCPR_fields[] = {
   { "\x0d\x20\xd0\x3c\xc6\x40", 0, 16 },  /* CRCPOLY: CRC polynomial register */
};

const Field_t SPI4_RXCRCR_fields[] = {
   { "\x49\x80\xd2\x0c", 0, 16 },  /* RxCRC: Rx CRC register */
};

const Field_t SPI4_TXCRCR_fields[] = {
   { "\x51\x80\xd2\x0c", 0, 16 },  /* TxCRC: Tx CRC register */
};

const Field_t SPI4_I2SCFGR_fields[] = {
   { "\x0c\x83\x05\x38", 0, 1 },  /* CHLEN: CHLEN */
   { "\x10\x15\x0c\x14\xe0", 1, 2 },  /* DATLEN: DATLEN */
   { "\x0c\xb4\x0f\x30", 3, 1 },  /* CKPOL: CKPOL */
   { "\x25\xd4\xd3\x50\x40", 4, 2 },  /* I2SSTD: I2SSTD */
   { "\x40\x33\x53\x64\xe0\xc0", 7, 1 },  /* PCMSYNC: PCMSYNC */
   { "\x25\xd4\xc3\x18\x70", 8, 2 },  /* I2SCFG: I2SCFG */
   { "\x25\xd4\xc5", 10, 1 },  /* I2SE: I2SE */
   { "\x25\xd4\xcd\x3c\x40", 11, 1 },  /* I2SMOD: I2SMOD */
};

const Field_t SPI4_I2SPR_fields[] = {
   { "\x25\xd4\xc4\x25\x60", 0, 8 },  /* I2SDIV: I2SDIV */
   { "\x3c\x41\x00", 8, 1 },  /* ODD: ODD */
   { "\x34\x32\xcf\x14", 9, 1 },  /* MCKOE: MCKOE */
};

const Register_t SPI4_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, SPI4_CR1_fields, 14}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, SPI4_CR2_fields, 12}, /* CR2: control register 2 */
   {"\x4d\x20", 8, 32, 0, SPI4_SR_fields, 9}, /* SR: status register */
   {"\x11\x20", 12, 32, 0, SPI4_DR_fields, 1}, /* DR: data register */
   {"\x0d\x20\xd0\x48", 16, 32, 0, SPI4_CRCPR_fields, 1}, /* CRCPR: CRC polynomial register */
   {"\x49\x80\xd2\x0d\x20", 20, 32, 0, SPI4_RXCRCR_fields, 1}, /* RXCRCR: RX CRC register */
   {"\x51\x80\xd2\x0d\x20", 24, 32, 0, SPI4_TXCRCR_fields, 1}, /* TXCRCR: TX CRC register */
   {"\x25\xd4\xc3\x18\x74\x80", 28, 32, 0, SPI4_I2SCFGR_fields, 8}, /* I2SCFGR: configuration register */
   {"\x25\xd4\xd0\x48", 32, 32, 0, SPI4_I2SPR_fields, 3}, /* I2SPR: prescaler register */
};

const Field_t TIM15_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
   { "\x10\x95\x08\x14\xe0", 12, 1 },  /* DITHEN: Dithering Enable */
};

const Field_t TIM15_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output idle state 2 (OC2               output) */
};

const Field_t TIM15_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x4c\xd4\xe5\x78", 16, 1 },  /* SMS_3: Slave mode selection - bit               3 */
   { "\x51\x39\x5f\x95\xe0", 20, 2 },  /* TS_4_3: Trigger selection - bit               4:3 */
};

const Field_t TIM15_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM15_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/compare 2 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/Compare 2 overcapture               flag */
};

const Field_t TIM15_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM15_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: OC1CE */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: CC2S */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: OC2FE */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: OC2PE */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: OC2M */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode */
   { "\x3c\x37\x4d\x95\xe0", 24, 1 },  /* OC2M_3: Output Compare 2 mode - bit               3 */
};

const Field_t TIM15_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: CC2S */
   { "\x24\x37\x50\x4c\x30", 10, 2 },  /* IC2PSC: IC2PSC */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: IC2F */
};

const Field_t TIM15_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output               enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output               polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 complementary output               polarity */
};

const Field_t TIM15_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF Copy */
};

const Field_t TIM15_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM15_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM15_RCR_fields[] = {
   { "\x48\x54\x00", 0, 8 },  /* REP: Repetition counter value */
};

const Field_t TIM15_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM15_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 1 value */
};

const Field_t TIM15_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
   { "\x08\xb1\x13\x48\xd0", 26, 1 },  /* BKDSRM: BKDSRM */
   { "\x08\xb0\x89\x10", 28, 1 },  /* BKBID: BKBID */
};

const Field_t TIM15_DTR2_fields[] = {
   { "\x11\x41\xc6", 0, 8 },  /* DTGF: Dead-time generator setup */
   { "\x11\x40\x45", 16, 1 },  /* DTAE: Deadtime Asymmetric Enable */
   { "\x11\x44\x05", 17, 1 },  /* DTPE: Deadtime Preload Enable */
};

const Field_t TIM15_TISEL_fields[] = {
   { "\x50\x97\x13\x14\xc0", 0, 4 },  /* TI1SEL: TI1[0] to TI1[15] input               selection */
   { "\x50\x97\x53\x14\xc0", 8, 4 },  /* TI2SEL: TI2[0] to TI2[15] input               selection */
};

const Field_t TIM15_AF1_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb0\xcd\x41\xc1\x40", 1, 1 },  /* BKCMP1E: BRK COMP1 enable */
   { "\x08\xb0\xcd\x41\xd1\x40", 2, 1 },  /* BKCMP2E: BRK COMP2 enable */
   { "\x08\xb0\xcd\x41\xe1\x40", 3, 1 },  /* BKCMP3E: BRK COMP3 enable */
   { "\x08\xb0\xcd\x41\xf1\x40", 4, 1 },  /* BKCMP4E: BRK COMP4 enable */
   { "\x08\xb0\xcd\x42\x01\x40", 5, 1 },  /* BKCMP5E: BRK COMP5 enable */
   { "\x08\xb0\xcd\x42\x11\x40", 6, 1 },  /* BKCMP6E: BRK COMP6 enable */
   { "\x08\xb0\xcd\x42\x21\x40", 7, 1 },  /* BKCMP7E: BRK COMP7 enable */
   { "\x08\xb2\x4e\x40", 9, 1 },  /* BKINP: BRK BKIN input polarity */
   { "\x08\xb0\xcd\x41\xc4\x00", 10, 1 },  /* BKCMP1P: BRK COMP1 input polarity */
   { "\x08\xb0\xcd\x41\xd4\x00", 11, 1 },  /* BKCMP2P: BRK COMP2 input polarity */
   { "\x08\xb0\xcd\x41\xe4\x00", 12, 1 },  /* BKCMP3P: BRK COMP3 input polarity */
   { "\x08\xb0\xcd\x41\xf4\x00", 13, 1 },  /* BKCMP4P: BRK COMP4 input polarity */
};

const Field_t TIM15_AF2_fields[] = {
   { "\x3c\x34\x93\x14\xc0", 16, 3 },  /* OCRSEL: OCREF_CLR source selection */
};

const Field_t TIM15_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM15_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 32 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM15_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM15_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM15_CR2_fields, 8}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM15_SMCR_fields, 5}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM15_DIER_fields, 11}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM15_SR_fields, 8}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM15_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM15_CCMR1_Output_fields, 11}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM15_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM15_CCER_fields, 7}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM15_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM15_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM15_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM15_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM15_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM15_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x08\x45\x12", 68, 32, 0, TIM15_BDTR_fields, 11}, /* BDTR: break and dead-time register */
   {"\x11\x44\x9d", 84, 32, 0, TIM15_DTR2_fields, 3}, /* DTR2: timer Deadtime Register 2 */
   {"\x50\x94\xc5\x30", 92, 32, 0, TIM15_TISEL_fields, 2}, /* TISEL: TIM timer input selection           register */
   {"\x04\x67\x00", 96, 32, 0, TIM15_AF1_fields, 13}, /* AF1: TIM alternate function option register           1 */
   {"\x04\x67\x40", 100, 32, 0, TIM15_AF2_fields, 1}, /* AF2: TIM alternate function option register           2 */
   {"\x10\x34\x80", 988, 32, 0, TIM15_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 992, 32, 0, TIM15_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t TIM16_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
   { "\x10\x95\x08\x14\xe0", 12, 1 },  /* DITHEN: Dithering Enable */
};

const Field_t TIM16_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded               control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update               selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA               selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
};

const Field_t TIM16_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt               enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request               enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
};

const Field_t TIM16_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt               flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture               flag */
};

const Field_t TIM16_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1               generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update               generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM16_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast               enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload               enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x0d\x95\xe0", 16, 1 },  /* OC1M_3: Output Compare 1 mode */
};

const Field_t TIM16_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1               selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM16_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output               enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output               Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output               enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output               Polarity */
};

const Field_t TIM16_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
   { "\x54\x91\x83\x41\x90", 31, 1 },  /* UIFCPY: UIF Copy */
};

const Field_t TIM16_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM16_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM16_RCR_fields[] = {
   { "\x48\x54\x00", 0, 8 },  /* REP: Repetition counter value */
};

const Field_t TIM16_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM16_BDTR_fields[] = {
   { "\x11\x41\xc0", 0, 8 },  /* DTG: Dead-time generator setup */
   { "\x30\xf0\xcb", 8, 2 },  /* LOCK: Lock configuration */
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle               mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run               mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
   { "\x08\xb1\x13\x48\xd0", 26, 1 },  /* BKDSRM: BKDSRM */
   { "\x08\xb0\x89\x10", 28, 1 },  /* BKBID: BKBID */
};

const Field_t TIM16_DTR2_fields[] = {
   { "\x11\x41\xc6", 0, 8 },  /* DTGF: Dead-time generator setup */
   { "\x11\x40\x45", 16, 1 },  /* DTAE: Deadtime Asymmetric Enable */
   { "\x11\x44\x05", 17, 1 },  /* DTPE: Deadtime Preload Enable */
};

const Field_t TIM16_TISEL_fields[] = {
   { "\x50\x97\x13\x14\xc0", 0, 4 },  /* TI1SEL: TI1[0] to TI1[15] input               selection */
};

const Field_t TIM16_AF1_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb0\xcd\x41\xc1\x40", 1, 1 },  /* BKCMP1E: BRK COMP1 enable */
   { "\x08\xb0\xcd\x41\xd1\x40", 2, 1 },  /* BKCMP2E: BRK COMP2 enable */
   { "\x08\xb0\xcd\x41\xe1\x40", 3, 1 },  /* BKCMP3E: BRK COMP3 enable */
   { "\x08\xb0\xcd\x41\xf1\x40", 4, 1 },  /* BKCMP4E: BRK COMP4 enable */
   { "\x08\xb0\xcd\x42\x01\x40", 5, 1 },  /* BKCMP5E: BRK COMP5 enable */
   { "\x08\xb0\xcd\x42\x11\x40", 6, 1 },  /* BKCMP6E: BRK COMP6 enable */
   { "\x08\xb0\xcd\x42\x21\x40", 7, 1 },  /* BKCMP7E: BRK COMP7 enable */
   { "\x08\xb2\x4e\x40", 9, 1 },  /* BKINP: BRK BKIN input polarity */
   { "\x08\xb0\xcd\x41\xc4\x00", 10, 1 },  /* BKCMP1P: BRK COMP1 input polarity */
   { "\x08\xb0\xcd\x41\xd4\x00", 11, 1 },  /* BKCMP2P: BRK COMP2 input polarity */
   { "\x08\xb0\xcd\x41\xe4\x00", 12, 1 },  /* BKCMP3P: BRK COMP3 input polarity */
   { "\x08\xb0\xcd\x41\xf4\x00", 13, 1 },  /* BKCMP4P: BRK COMP4 input polarity */
};

const Field_t TIM16_AF2_fields[] = {
   { "\x3c\x34\x93\x14\xc0", 16, 3 },  /* OCRSEL: OCREF_CLR source selection */
};

const Field_t TIM16_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM16_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 32 },  /* DMAB: DMA register for burst               accesses */
};

const Register_t TIM16_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM16_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM16_CR2_fields, 5}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM16_DIER_fields, 7}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM16_SR_fields, 5}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM16_EGR_fields, 4}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM16_CCMR1_Output_fields, 5}, /* CCMR1_Output: capture/compare mode register (output           mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM16_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input           mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM16_CCER_fields, 4}, /* CCER: capture/compare enable           register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM16_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM16_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM16_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM16_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM16_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x08\x45\x12", 68, 32, 0, TIM16_BDTR_fields, 11}, /* BDTR: break and dead-time register */
   {"\x11\x44\x9d", 84, 32, 0, TIM16_DTR2_fields, 3}, /* DTR2: timer Deadtime Register 2 */
   {"\x50\x94\xc5\x30", 92, 32, 0, TIM16_TISEL_fields, 1}, /* TISEL: TIM timer input selection           register */
   {"\x04\x67\x00", 96, 32, 0, TIM16_AF1_fields, 13}, /* AF1: TIM alternate function option register           1 */
   {"\x04\x67\x40", 100, 32, 0, TIM16_AF2_fields, 1}, /* AF2: TIM alternate function option register           2 */
   {"\x10\x34\x80", 988, 32, 0, TIM16_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 992, 32, 0, TIM16_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t SAI_ACR1_fields[] = {
   { "\x34\xf1\x05", 0, 2 },  /* MODE: Audio block mode */
   { "\x41\x25\x03\x18\x70", 2, 2 },  /* PRTCFG: Protocol configuration */
   { "\x11\x30", 5, 3 },  /* DS: Data size */
   { "\x31\x30\x86\x25\x24\xd4", 8, 1 },  /* LSBFIRST: Least significant bit               first */
   { "\x0c\xb4\xd4\x48", 9, 1 },  /* CKSTR: Clock strobing edge */
   { "\x4d\x93\x83\x14\xe0", 10, 2 },  /* SYNCEN: Synchronization enable */
   { "\x34\xf3\x8f", 12, 1 },  /* MONO: Mono mode */
   { "\x3d\x55\x04\x48\x90", 13, 1 },  /* OutDri: Output drive */
   { "\x4c\x12\x41\x14\xe0", 16, 1 },  /* SAIAEN: Audio block A enable */
   { "\x10\xd0\x45\x38", 17, 1 },  /* DMAEN: DMA enable */
   { "\x38\xf1\x09\x58", 19, 1 },  /* NODIV: No divider */
   { "\x34\x32\x84\x25\x60", 20, 6 },  /* MCJDIV: Master clock divider */
   { "\x3d\x34\x80", 26, 1 },  /* OSR: OSR */
   { "\x34\x32\xc5\x38", 27, 1 },  /* MCKEN: MCKEN */
};

const Field_t SAI_ACR2_fields[] = {
   { "\x19\x42\x00", 0, 3 },  /* FTH: FIFO threshold */
   { "\x18\x63\x15\x4c", 3, 1 },  /* FFLUS: FIFO flush */
   { "\x51\x22\x53", 4, 1 },  /* TRIS: Tristate management on data               line */
   { "\x35\x55\x05", 5, 1 },  /* MUTE: Mute */
   { "\x35\x55\x05\x58\x13\x00", 6, 1 },  /* MUTEVAL: Mute value */
   { "\x35\x55\x05\x0c\xe0", 7, 6 },  /* MUTECN: Mute counter */
   { "\x0d\x03\x00", 13, 1 },  /* CPL: Complement bit */
   { "\x0c\xf3\x50", 14, 2 },  /* COMP: Companding mode */
};

const Field_t SAI_AFRCR_fields[] = {
   { "\x19\x23\x00", 0, 8 },  /* FRL: Frame length */
   { "\x19\x30\x4c\x30", 8, 7 },  /* FSALL: Frame synchronization active level               length */
   { "\x19\x31\x05\x18", 16, 1 },  /* FSDEF: Frame synchronization               definition */
   { "\x19\x34\x0f\x30", 17, 1 },  /* FSPOL: Frame synchronization               polarity */
   { "\x19\x33\xc6\x18", 18, 1 },  /* FSOFF: Frame synchronization               offset */
};

const Field_t SAI_ASLOTR_fields[] = {
   { "\x18\x23\xc6\x18", 0, 5 },  /* FBOFF: First bit offset */
   { "\x4c\xc3\xd4\x4d\xa0", 6, 2 },  /* SLOTSZ: Slot size */
   { "\x38\x24\xcc\x3d\x40", 8, 4 },  /* NBSLOT: Number of slots in an audio               frame */
   { "\x4c\xc3\xd4\x14\xe0", 16, 16 },  /* SLOTEN: Slot enable */
};

const Field_t SAI_AIM_fields[] = {
   { "\x3d\x64\x95\x11\x22\x45", 0, 1 },  /* OVRUDRIE: Overrun/underrun interrupt               enable */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection interrupt               enable */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration interrupt               enable */
   { "\x19\x21\x51\x24\x50", 3, 1 },  /* FREQIE: FIFO request interrupt               enable */
   { "\x0c\xe4\x84\x64\x91\x40", 4, 1 },  /* CNRDYIE: Codec not ready interrupt               enable */
   { "\x04\x64\xc4\x15\x42\x45", 5, 1 },  /* AFSDETIE: Anticipated frame synchronization               detection interrupt enable */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Late frame synchronization detection               interrupt enable */
};

const Field_t SAI_ASR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration flag. This bit               is read only */
   { "\x19\x21\x51", 3, 1 },  /* FREQ: FIFO request */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Codec not ready */
   { "\x04\x64\xc4\x15\x40", 5, 1 },  /* AFSDET: Anticipated frame synchronization               detection */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Late frame synchronization               detection */
   { "\x18\xc5\x8c", 16, 3 },  /* FLVL: FIFO level threshold */
};

const Field_t SAI_ACLRFR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Clear overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection flag */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Clear wrong clock configuration               flag */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Clear codec not ready flag */
   { "\x0c\x11\x93\x10\x55\x00", 5, 1 },  /* CAFSDET: Clear anticipated frame synchronization               detection flag */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Clear late frame synchronization               detection flag */
};

const Field_t SAI_ADR_fields[] = {
   { "\x10\x15\x01", 0, 32 },  /* DATA: Data */
};

const Field_t SAI_BCR1_fields[] = {
   { "\x34\xf1\x05", 0, 2 },  /* MODE: Audio block mode */
   { "\x41\x25\x03\x18\x70", 2, 2 },  /* PRTCFG: Protocol configuration */
   { "\x11\x30", 5, 3 },  /* DS: Data size */
   { "\x31\x30\x86\x25\x24\xd4", 8, 1 },  /* LSBFIRST: Least significant bit               first */
   { "\x0c\xb4\xd4\x48", 9, 1 },  /* CKSTR: Clock strobing edge */
   { "\x4d\x93\x83\x14\xe0", 10, 2 },  /* SYNCEN: Synchronization enable */
   { "\x34\xf3\x8f", 12, 1 },  /* MONO: Mono mode */
   { "\x3d\x55\x04\x48\x90", 13, 1 },  /* OutDri: Output drive */
   { "\x4c\x12\x42\x14\xe0", 16, 1 },  /* SAIBEN: Audio block B enable */
   { "\x10\xd0\x45\x38", 17, 1 },  /* DMAEN: DMA enable */
   { "\x38\xf1\x09\x58", 19, 1 },  /* NODIV: No divider */
   { "\x34\x32\x84\x25\x60", 20, 6 },  /* MCJDIV: Master clock divider */
   { "\x3d\x34\x80", 26, 1 },  /* OSR: OSR */
   { "\x34\x32\xc5\x38", 27, 1 },  /* MCKEN: MCKEN */
};

const Field_t SAI_BCR2_fields[] = {
   { "\x19\x42\x00", 0, 3 },  /* FTH: FIFO threshold */
   { "\x18\x63\x15\x4c", 3, 1 },  /* FFLUS: FIFO flush */
   { "\x51\x22\x53", 4, 1 },  /* TRIS: Tristate management on data               line */
   { "\x35\x55\x05", 5, 1 },  /* MUTE: Mute */
   { "\x35\x55\x05\x58\x13\x00", 6, 1 },  /* MUTEVAL: Mute value */
   { "\x35\x55\x05\x0c\xe0", 7, 6 },  /* MUTECN: Mute counter */
   { "\x0d\x03\x00", 13, 1 },  /* CPL: Complement bit */
   { "\x0c\xf3\x50", 14, 2 },  /* COMP: Companding mode */
};

const Field_t SAI_BFRCR_fields[] = {
   { "\x19\x23\x00", 0, 8 },  /* FRL: Frame length */
   { "\x19\x30\x4c\x30", 8, 7 },  /* FSALL: Frame synchronization active level               length */
   { "\x19\x31\x05\x18", 16, 1 },  /* FSDEF: Frame synchronization               definition */
   { "\x19\x34\x0f\x30", 17, 1 },  /* FSPOL: Frame synchronization               polarity */
   { "\x19\x33\xc6\x18", 18, 1 },  /* FSOFF: Frame synchronization               offset */
};

const Field_t SAI_BSLOTR_fields[] = {
   { "\x18\x23\xc6\x18", 0, 5 },  /* FBOFF: First bit offset */
   { "\x4c\xc3\xd4\x4d\xa0", 6, 2 },  /* SLOTSZ: Slot size */
   { "\x38\x24\xcc\x3d\x40", 8, 4 },  /* NBSLOT: Number of slots in an audio               frame */
   { "\x4c\xc3\xd4\x14\xe0", 16, 16 },  /* SLOTEN: Slot enable */
};

const Field_t SAI_BIM_fields[] = {
   { "\x3d\x64\x95\x11\x22\x45", 0, 1 },  /* OVRUDRIE: Overrun/underrun interrupt               enable */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection interrupt               enable */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration interrupt               enable */
   { "\x19\x21\x51\x24\x50", 3, 1 },  /* FREQIE: FIFO request interrupt               enable */
   { "\x0c\xe4\x84\x64\x91\x40", 4, 1 },  /* CNRDYIE: Codec not ready interrupt               enable */
   { "\x04\x64\xc4\x15\x42\x45", 5, 1 },  /* AFSDETIE: Anticipated frame synchronization               detection interrupt enable */
   { "\x30\x64\xc4\x15\x42\x45", 6, 1 },  /* LFSDETIE: Late frame synchronization detection               interrupt enable */
};

const Field_t SAI_BSR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration               flag */
   { "\x19\x21\x51", 3, 1 },  /* FREQ: FIFO request */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Codec not ready */
   { "\x04\x64\xc4\x15\x40", 5, 1 },  /* AFSDET: Anticipated frame synchronization               detection */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Late frame synchronization               detection */
   { "\x18\xc5\x8c", 16, 3 },  /* FLVL: FIFO level threshold */
};

const Field_t SAI_BCLRFR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Clear overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection flag */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Clear wrong clock configuration               flag */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Clear codec not ready flag */
   { "\x0c\x11\x93\x10\x55\x00", 5, 1 },  /* CAFSDET: Clear anticipated frame synchronization               detection flag */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Clear late frame synchronization               detection flag */
};

const Field_t SAI_BDR_fields[] = {
   { "\x10\x15\x01", 0, 32 },  /* DATA: Data */
};

const Field_t SAI_PDMCR_fields[] = {
   { "\x40\x43\x45\x38", 0, 1 },  /* PDMEN: PDMEN */
   { "\x34\x90\xce\x09\x20", 4, 2 },  /* MICNBR: MICNBR */
   { "\x0c\xb1\x4e\x70", 8, 1 },  /* CKEN1: CKEN1 */
   { "\x0c\xb1\x4e\x74", 9, 1 },  /* CKEN2: CKEN2 */
   { "\x0c\xb1\x4e\x78", 10, 1 },  /* CKEN3: CKEN3 */
   { "\x0c\xb1\x4e\x7c", 11, 1 },  /* CKEN4: CKEN4 */
};

const Field_t SAI_PDMDLY_fields[] = {
   { "\x10\xc6\x4d\x70\xc0", 0, 3 },  /* DLYM1L: DLYM1L */
   { "\x10\xc6\x4d\x71\x20", 4, 3 },  /* DLYM1R: DLYM1R */
   { "\x10\xc6\x4d\x74\xc0", 8, 3 },  /* DLYM2L: DLYM2L */
   { "\x10\xc6\x4d\x75\x20", 12, 3 },  /* DLYM2R: DLYM2R */
   { "\x10\xc6\x4d\x78\xc0", 16, 3 },  /* DLYM3L: DLYM3L */
   { "\x10\xc6\x4d\x79\x20", 20, 3 },  /* DLYM3R: DLYM3R */
   { "\x10\xc6\x4d\x7c\xc0", 24, 3 },  /* DLYM4L: DLYM4L */
   { "\x10\xc6\x4d\x7d\x20", 28, 3 },  /* DLYM4R: DLYM4R */
};

const Register_t SAI_registers[] = {
   {"\x04\x34\x9c", 4, 32, 0, SAI_ACR1_fields, 14}, /* ACR1: AConfiguration register 1 */
   {"\x04\x34\x9d", 8, 32, 0, SAI_ACR2_fields, 8}, /* ACR2: AConfiguration register 2 */
   {"\x04\x64\x83\x48", 12, 32, 0, SAI_AFRCR_fields, 5}, /* AFRCR: AFRCR */
   {"\x05\x33\x0f\x51\x20", 16, 32, 0, SAI_ASLOTR_fields, 4}, /* ASLOTR: ASlot register */
   {"\x04\x93\x40", 20, 32, 0, SAI_AIM_fields, 7}, /* AIM: AInterrupt mask register2 */
   {"\x05\x34\x80", 24, 32, 0, SAI_ASR_fields, 8}, /* ASR: AStatus register */
   {"\x04\x33\x12\x19\x20", 28, 32, 0, SAI_ACLRFR_fields, 6}, /* ACLRFR: AClear flag register */
   {"\x04\x44\x80", 32, 32, 0, SAI_ADR_fields, 1}, /* ADR: AData register */
   {"\x08\x34\x9c", 36, 32, 0, SAI_BCR1_fields, 14}, /* BCR1: BConfiguration register 1 */
   {"\x08\x34\x9d", 40, 32, 0, SAI_BCR2_fields, 8}, /* BCR2: BConfiguration register 2 */
   {"\x08\x64\x83\x48", 44, 32, 0, SAI_BFRCR_fields, 5}, /* BFRCR: BFRCR */
   {"\x09\x33\x0f\x51\x20", 48, 32, 0, SAI_BSLOTR_fields, 4}, /* BSLOTR: BSlot register */
   {"\x08\x93\x40", 52, 32, 0, SAI_BIM_fields, 7}, /* BIM: BInterrupt mask register2 */
   {"\x09\x34\x80", 56, 32, 0, SAI_BSR_fields, 8}, /* BSR: BStatus register */
   {"\x08\x33\x12\x19\x20", 60, 32, 0, SAI_BCLRFR_fields, 6}, /* BCLRFR: BClear flag register */
   {"\x08\x44\x80", 64, 32, 0, SAI_BDR_fields, 1}, /* BDR: BData register */
   {"\x40\x43\x43\x48", 68, 32, 0, SAI_PDMCR_fields, 6}, /* PDMCR: PDM control register */
   {"\x40\x43\x44\x31\x90", 72, 32, 0, SAI_PDMDLY_fields, 8}, /* PDMDLY: PDM delay register */
};

const Field_t HRTIM_Master_MCR_fields[] = {
   { "\x0c\xb9\x50\x4c\x30", 0, 3 },  /* CK_PSC: HRTIM Master Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Master Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Master Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x24\xe5\x0c\x58\x40", 6, 2 },  /* INTLVD: Interleaved mode */
   { "\x4d\x93\x83\x94\x93\x80", 8, 2 },  /* SYNC_IN: synchronization input */
   { "\x4d\x93\x83\x49\x35\x0d", 10, 1 },  /* SYNCRSTM: Synchronization Resets               Master */
   { "\x4d\x93\x83\x4d\x44\x94\x34", 11, 1 },  /* SYNCSTRTM: Synchronization Starts               Master */
   { "\x4d\x93\x83\x94\xf5\x54", 12, 2 },  /* SYNC_OUT: Synchronization output */
   { "\x4d\x93\x83\x95\x34\x83", 14, 2 },  /* SYNC_SRC: Synchronization source */
   { "\x34\x31\x4e", 16, 1 },  /* MCEN: Master Counter enable */
   { "\x50\x10\xc5\x38", 17, 1 },  /* TACEN: Timer A counter enable */
   { "\x50\x20\xc5\x38", 18, 1 },  /* TBCEN: Timer B counter enable */
   { "\x50\x30\xc5\x38", 19, 1 },  /* TCCEN: Timer C counter enable */
   { "\x50\x40\xc5\x38", 20, 1 },  /* TDCEN: Timer D counter enable */
   { "\x50\x50\xc5\x38", 21, 1 },  /* TECEN: Timer E counter enable */
   { "\x50\x60\xc5\x38", 22, 1 },  /* TFCEN: Timer F counter enable */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x35\x21\x50\x54", 29, 1 },  /* MREPU: Master Timer Repetition               update */
   { "\x09\x24\xd4\x10\xd0\x40", 30, 2 },  /* BRSTDMA: Burst DMA Update */
};

const Field_t HRTIM_Master_MISR_fields[] = {
   { "\x34\x33\x50\x70", 0, 1 },  /* MCMP1: Master Compare 1 Interrupt               Flag */
   { "\x34\x33\x50\x74", 1, 1 },  /* MCMP2: Master Compare 2 Interrupt               Flag */
   { "\x34\x33\x50\x78", 2, 1 },  /* MCMP3: Master Compare 3 Interrupt               Flag */
   { "\x34\x33\x50\x7c", 3, 1 },  /* MCMP4: Master Compare 4 Interrupt               Flag */
   { "\x35\x21\x50", 4, 1 },  /* MREP: Master Repetition Interrupt               Flag */
   { "\x4d\x93\x83", 5, 1 },  /* SYNC: Sync Input Interrupt Flag */
   { "\x35\x54\x04", 6, 1 },  /* MUPD: Master Update Interrupt               Flag */
};

const Field_t HRTIM_Master_MICR_fields[] = {
   { "\x34\x33\x50\x70\x30", 0, 1 },  /* MCMP1C: Master Compare 1 Interrupt flag               clear */
   { "\x34\x33\x50\x74\x30", 1, 1 },  /* MCMP2C: Master Compare 2 Interrupt flag               clear */
   { "\x34\x33\x50\x78\x30", 2, 1 },  /* MCMP3C: Master Compare 3 Interrupt flag               clear */
   { "\x34\x33\x50\x7c\x30", 3, 1 },  /* MCMP4C: Master Compare 4 Interrupt flag               clear */
   { "\x35\x21\x50\x0c", 4, 1 },  /* MREPC: Repetition Interrupt flag               clear */
   { "\x4d\x93\x83\x0c", 5, 1 },  /* SYNCC: Sync Input Interrupt flag               clear */
   { "\x35\x54\x04\x0c", 6, 1 },  /* MUPDC: Master update Interrupt flag               clear */
};

const Field_t HRTIM_Master_MDIER_fields[] = {
   { "\x34\x33\x50\x70\x91\x40", 0, 1 },  /* MCMP1IE: MCMP1IE */
   { "\x34\x33\x50\x74\x91\x40", 1, 1 },  /* MCMP2IE: MCMP2IE */
   { "\x34\x33\x50\x78\x91\x40", 2, 1 },  /* MCMP3IE: MCMP3IE */
   { "\x34\x33\x50\x7c\x91\x40", 3, 1 },  /* MCMP4IE: MCMP4IE */
   { "\x35\x21\x50\x24\x50", 4, 1 },  /* MREPIE: MREPIE */
   { "\x4d\x93\x83\x24\x50", 5, 1 },  /* SYNCIE: SYNCIE */
   { "\x35\x54\x04\x24\x50", 6, 1 },  /* MUPDIE: MUPDIE */
   { "\x34\x33\x50\x70\x41\x40", 16, 1 },  /* MCMP1DE: MCMP1DE */
   { "\x34\x33\x50\x74\x41\x40", 17, 1 },  /* MCMP2DE: MCMP2DE */
   { "\x34\x33\x50\x78\x41\x40", 18, 1 },  /* MCMP3DE: MCMP3DE */
   { "\x34\x33\x50\x7c\x41\x40", 19, 1 },  /* MCMP4DE: MCMP4DE */
   { "\x35\x21\x50\x10\x50", 20, 1 },  /* MREPDE: MREPDE */
   { "\x4d\x93\x83\x10\x50", 21, 1 },  /* SYNCDE: SYNCDE */
   { "\x35\x54\x04\x10\x50", 22, 1 },  /* MUPDDE: MUPDDE */
};

const Field_t HRTIM_Master_MCNTR_fields[] = {
   { "\x34\x33\x94", 0, 16 },  /* MCNT: Counter value */
};

const Field_t HRTIM_Master_MPER_fields[] = {
   { "\x35\x01\x52", 0, 16 },  /* MPER: Master Timer Period value */
};

const Field_t HRTIM_Master_MREP_fields[] = {
   { "\x35\x21\x50", 0, 8 },  /* MREP: Master Timer Repetition counter               value */
};

const Field_t HRTIM_Master_MCMP1R_fields[] = {
   { "\x34\x33\x50\x70", 0, 16 },  /* MCMP1: Master Timer Compare 1               value */
};

const Field_t HRTIM_Master_MCMP2R_fields[] = {
   { "\x34\x33\x50\x74", 0, 16 },  /* MCMP2: Master Timer Compare 2               value */
};

const Field_t HRTIM_Master_MCMP3R_fields[] = {
   { "\x34\x33\x50\x78", 0, 16 },  /* MCMP3: Master Timer Compare 3               value */
};

const Field_t HRTIM_Master_MCMP4R_fields[] = {
   { "\x34\x33\x50\x7c", 0, 16 },  /* MCMP4: Master Timer Compare 4               value */
};

const Register_t HRTIM_Master_registers[] = {
   {"\x34\x34\x80", 0, 32, 0, HRTIM_Master_MCR_fields, 21}, /* MCR: Master Timer Control Register */
   {"\x34\x94\xd2", 4, 32, 0, HRTIM_Master_MISR_fields, 7}, /* MISR: Master Timer Interrupt Status           Register */
   {"\x34\x90\xd2", 8, 32, 0, HRTIM_Master_MICR_fields, 7}, /* MICR: Master Timer Interrupt Clear           Register */
   {"\x34\x42\x45\x48", 12, 32, 0, HRTIM_Master_MDIER_fields, 14}, /* MDIER: HRTIM Master Timer DMA / Interrupt Enable           Register */
   {"\x34\x33\x94\x48", 16, 32, 0, HRTIM_Master_MCNTR_fields, 1}, /* MCNTR: Master Timer Counter Register */
   {"\x35\x01\x52", 20, 32, 0, HRTIM_Master_MPER_fields, 1}, /* MPER: Master Timer Period Register */
   {"\x35\x21\x50", 24, 32, 0, HRTIM_Master_MREP_fields, 1}, /* MREP: Master Timer Repetition           Register */
   {"\x34\x33\x50\x71\x20", 28, 32, 0, HRTIM_Master_MCMP1R_fields, 1}, /* MCMP1R: Master Timer Compare 1           Register */
   {"\x34\x33\x50\x75\x20", 36, 32, 0, HRTIM_Master_MCMP2R_fields, 1}, /* MCMP2R: Master Timer Compare 2           Register */
   {"\x34\x33\x50\x79\x20", 40, 32, 0, HRTIM_Master_MCMP3R_fields, 1}, /* MCMP3R: Master Timer Compare 3           Register */
   {"\x34\x33\x50\x7d\x20", 44, 32, 0, HRTIM_Master_MCMP4R_fields, 1}, /* MCMP4R: Master Timer Compare 4           Register */
};

const Field_t HRTIM_TIMA_TIMACR_fields[] = {
   { "\x0c\xb9\x50\x4c\x36\x00", 0, 3 },  /* CK_PSCx: HRTIM Timer x Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x41\x32\x10\x30\xc0", 6, 1 },  /* PSHPLL: Push-Pull mode enable */
   { "\x24\xe5\x0c\x58\x40", 7, 2 },  /* INTLVD: Interleaved mode */
   { "\x49\x36\x4e\x0d\x50", 9, 1 },  /* RSYNCU: Re-Synchronized Update */
   { "\x4d\x93\x83\x49\x35\x18", 10, 1 },  /* SYNCRSTx: Synchronization Resets Timer               x */
   { "\x4d\x93\x83\x4d\x44\x94\x60", 11, 1 },  /* SYNCSTRTx: Synchronization Starts Timer               x */
   { "\x10\x53\x03\x35\x07\x40", 12, 2 },  /* DELCMP2: Delayed CMP2 mode */
   { "\x10\x53\x03\x35\x07\xc0", 14, 2 },  /* DELCMP4: Delayed CMP4 mode */
   { "\x50\x65\x40", 16, 1 },  /* TFU: TFU */
   { "\x51\x84\x85\x41\x50", 17, 1 },  /* TxREPU: Timer x Repetition update */
   { "\x51\x84\x93\x51\x50", 18, 1 },  /* TxRSTU: Timerx reset update */
   { "\x50\x25\x40", 20, 1 },  /* TBU: TBU */
   { "\x50\x35\x40", 21, 1 },  /* TCU: TCU */
   { "\x50\x45\x40", 22, 1 },  /* TDU: TDU */
   { "\x50\x55\x40", 23, 1 },  /* TEU: TEU */
   { "\x35\x35\x15", 24, 1 },  /* MSTU: Master Timer update */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x55\x01\x07\x05\x40", 28, 4 },  /* UPDGAT: Update Gating */
};

const Field_t HRTIM_TIMA_TIMAISR_fields[] = {
   { "\x0c\xd4\x1c", 0, 1 },  /* CMP1: Compare 1 Interrupt Flag */
   { "\x0c\xd4\x1d", 1, 1 },  /* CMP2: Compare 2 Interrupt Flag */
   { "\x0c\xd4\x1e", 2, 1 },  /* CMP3: Compare 3 Interrupt Flag */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Compare 4 Interrupt Flag */
   { "\x48\x54\x00", 4, 1 },  /* REP: Repetition Interrupt Flag */
   { "\x55\x01\x00", 6, 1 },  /* UPD: Update Interrupt Flag */
   { "\x0d\x05\x1c", 7, 1 },  /* CPT1: Capture1 Interrupt Flag */
   { "\x0d\x05\x1d", 8, 1 },  /* CPT2: Capture2 Interrupt Flag */
   { "\x4c\x55\x18\x70", 9, 1 },  /* SETx1: Output 1 Set Interrupt               Flag */
   { "\x49\x35\x18\x70", 10, 1 },  /* RSTx1: Output 1 Reset Interrupt               Flag */
   { "\x4c\x55\x18\x74", 11, 1 },  /* SETx2: Output 2 Set Interrupt               Flag */
   { "\x49\x35\x18\x74", 12, 1 },  /* RSTx2: Output 2 Reset Interrupt               Flag */
   { "\x49\x35\x00", 13, 1 },  /* RST: Reset Interrupt Flag */
   { "\x10\xc6\x50\x49\x40", 14, 1 },  /* DLYPRT: Delayed Protection Flag */
   { "\x0d\x04\x13\x50\x15\x00", 16, 1 },  /* CPPSTAT: Current Push Pull Status */
   { "\x25\x04\x13\x50\x15\x00", 17, 1 },  /* IPPSTAT: Idle Push Pull Status */
   { "\x3d\xc4\xd4\x05\x40", 18, 1 },  /* O1STAT: Output 1 State */
   { "\x3d\xd4\xd4\x05\x40", 19, 1 },  /* O2STAT: Output 2 State */
   { "\x3d\xc0\xd0\x64", 20, 1 },  /* O1CPY: Output 1 Copy */
   { "\x3d\xd0\xd0\x64", 21, 1 },  /* O2CPY: Output 2 Copy */
};

const Field_t HRTIM_TIMA_TIMAICR_fields[] = {
   { "\x0c\xd4\x1c\x0c", 0, 1 },  /* CMP1C: Compare 1 Interrupt flag               Clear */
   { "\x0c\xd4\x1d\x0c", 1, 1 },  /* CMP2C: Compare 2 Interrupt flag               Clear */
   { "\x0c\xd4\x1e\x0c", 2, 1 },  /* CMP3C: Compare 3 Interrupt flag               Clear */
   { "\x0c\xd4\x1f\x0c", 3, 1 },  /* CMP4C: Compare 4 Interrupt flag               Clear */
   { "\x48\x54\x03", 4, 1 },  /* REPC: Repetition Interrupt flag               Clear */
   { "\x55\x01\x03", 6, 1 },  /* UPDC: Update Interrupt flag               Clear */
   { "\x0d\x05\x1c\x0c", 7, 1 },  /* CPT1C: Capture1 Interrupt flag               Clear */
   { "\x0d\x05\x1d\x0c", 8, 1 },  /* CPT2C: Capture2 Interrupt flag               Clear */
   { "\x4c\x55\x1c\x60\x30", 9, 1 },  /* SET1xC: Output 1 Set flag Clear */
   { "\x49\x35\x18\x70\x30", 10, 1 },  /* RSTx1C: Output 1 Reset flag Clear */
   { "\x4c\x55\x1d\x60\x30", 11, 1 },  /* SET2xC: Output 2 Set flag Clear */
   { "\x49\x35\x18\x74\x30", 12, 1 },  /* RSTx2C: Output 2 Reset flag Clear */
   { "\x49\x35\x03", 13, 1 },  /* RSTC: Reset Interrupt flag Clear */
   { "\x10\xc6\x50\x49\x40\xc0", 14, 1 },  /* DLYPRTC: Delayed Protection Flag               Clear */
};

const Field_t HRTIM_TIMA_TIMADIER_fields[] = {
   { "\x0c\xd4\x1c\x24\x50", 0, 1 },  /* CMP1IE: CMP1IE */
   { "\x0c\xd4\x1d\x24\x50", 1, 1 },  /* CMP2IE: CMP2IE */
   { "\x0c\xd4\x1e\x24\x50", 2, 1 },  /* CMP3IE: CMP3IE */
   { "\x0c\xd4\x1f\x24\x50", 3, 1 },  /* CMP4IE: CMP4IE */
   { "\x48\x54\x09\x14", 4, 1 },  /* REPIE: REPIE */
   { "\x55\x01\x09\x14", 6, 1 },  /* UPDIE: UPDIE */
   { "\x0d\x05\x1c\x24\x50", 7, 1 },  /* CPT1IE: CPT1IE */
   { "\x0d\x05\x1d\x24\x50", 8, 1 },  /* CPT2IE: CPT2IE */
   { "\x4c\x55\x1c\x60\x91\x40", 9, 1 },  /* SET1xIE: SET1xIE */
   { "\x49\x35\x18\x70\x91\x40", 10, 1 },  /* RSTx1IE: RSTx1IE */
   { "\x4c\x55\x18\x74\x91\x40", 11, 1 },  /* SETx2IE: SETx2IE */
   { "\x49\x35\x18\x74\x91\x40", 12, 1 },  /* RSTx2IE: RSTx2IE */
   { "\x49\x35\x09\x14", 13, 1 },  /* RSTIE: RSTIE */
   { "\x10\xc6\x50\x49\x42\x45", 14, 1 },  /* DLYPRTIE: DLYPRTIE */
   { "\x0c\xd4\x1c\x10\x50", 16, 1 },  /* CMP1DE: CMP1DE */
   { "\x0c\xd4\x1d\x10\x50", 17, 1 },  /* CMP2DE: CMP2DE */
   { "\x0c\xd4\x1e\x10\x50", 18, 1 },  /* CMP3DE: CMP3DE */
   { "\x0c\xd4\x1f\x10\x50", 19, 1 },  /* CMP4DE: CMP4DE */
   { "\x48\x54\x04\x14", 20, 1 },  /* REPDE: REPDE */
   { "\x55\x01\x04\x14", 22, 1 },  /* UPDDE: UPDDE */
   { "\x0d\x05\x1c\x10\x50", 23, 1 },  /* CPT1DE: CPT1DE */
   { "\x0d\x05\x1d\x10\x50", 24, 1 },  /* CPT2DE: CPT2DE */
   { "\x4c\x55\x1c\x60\x41\x40", 25, 1 },  /* SET1xDE: SET1xDE */
   { "\x49\x35\x18\x70\x41\x40", 26, 1 },  /* RSTx1DE: RSTx1DE */
   { "\x4c\x55\x18\x74\x41\x40", 27, 1 },  /* SETx2DE: SETx2DE */
   { "\x49\x35\x18\x74\x41\x40", 28, 1 },  /* RSTx2DE: RSTx2DE */
   { "\x49\x35\x04\x14", 29, 1 },  /* RSTDE: RSTDE */
   { "\x10\xc6\x50\x49\x41\x05", 30, 1 },  /* DLYPRTDE: DLYPRTDE */
};

const Field_t HRTIM_TIMA_CNTAR_fields[] = {
   { "\x0c\xe5\x18", 0, 16 },  /* CNTx: Timerx Counter value */
};

const Field_t HRTIM_TIMA_PERAR_fields[] = {
   { "\x40\x54\x98", 0, 16 },  /* PERx: Timerx Period value */
};

const Field_t HRTIM_TIMA_REPAR_fields[] = {
   { "\x48\x54\x18", 0, 8 },  /* REPx: Timerx Repetition counter               value */
};

const Field_t HRTIM_TIMA_CMP1AR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
};

const Field_t HRTIM_TIMA_CMP1CAR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
   { "\x48\x54\x18", 16, 8 },  /* REPx: Timerx Repetition value (aliased from               HRTIM_REPx register) */
};

const Field_t HRTIM_TIMA_CMP2AR_fields[] = {
   { "\x0c\xd4\x1d\x60", 0, 16 },  /* CMP2x: Timerx Compare 2 value */
};

const Field_t HRTIM_TIMA_CMP3AR_fields[] = {
   { "\x0c\xd4\x1e\x60", 0, 16 },  /* CMP3x: Timerx Compare 3 value */
};

const Field_t HRTIM_TIMA_CMP4AR_fields[] = {
   { "\x0c\xd4\x1f\x60", 0, 16 },  /* CMP4x: Timerx Compare 4 value */
};

const Field_t HRTIM_TIMA_CPT1AR_fields[] = {
   { "\x0d\x05\x1c\x60", 0, 16 },  /* CPT1x: Timerx Capture 1 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMA_CPT2AR_fields[] = {
   { "\x0d\x05\x1d\x60", 0, 16 },  /* CPT2x: Timerx Capture 2 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMA_DTAR_fields[] = {
   { "\x11\x44\x98", 0, 9 },  /* DTRx: Deadtime Rising value */
   { "\x4c\x45\x12\x60", 9, 1 },  /* SDTRx: Sign Deadtime Rising value */
   { "\x11\x44\x12\x4c\x30", 10, 3 },  /* DTPRSC: Deadtime Prescaler */
   { "\x11\x44\x93\x30\xb6\x00", 14, 1 },  /* DTRSLKx: Deadtime Rising Sign Lock */
   { "\x11\x44\x8c\x2d\x80", 15, 1 },  /* DTRLKx: Deadtime Rising Lock */
   { "\x11\x41\x98", 16, 9 },  /* DTFx: Deadtime Falling value */
   { "\x4c\x45\x06\x60", 25, 1 },  /* SDTFx: Sign Deadtime Falling               value */
   { "\x11\x41\x93\x30\xb6\x00", 30, 1 },  /* DTFSLKx: Deadtime Falling Sign Lock */
   { "\x11\x41\x8c\x2d\x80", 31, 1 },  /* DTFLKx: Deadtime Falling Lock */
};

const Field_t HRTIM_TIMA_SETA1R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: Software Set trigger */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: Timer A resynchronizaton */
   { "\x40\x54\x80", 2, 1 },  /* PER: Timer A Period */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: Timer A compare 1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: Timer A compare 2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: Timer A compare 3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: Timer A compare 4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: Master Period */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: Master Compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: Master Compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: Master Compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: Master Compare 4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: Timer Event 1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: Timer Event 2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: Timer Event 3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: Timer Event 4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: Timer Event 5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: Timer Event 6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: Timer Event 7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: Timer Event 8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: Timer Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: Registers update (transfer preload to               active) */
};

const Field_t HRTIM_TIMA_RSTA1R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMA_SETA2R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: SST */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMA_RSTA2R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMA_EEFAR1_fields[] = {
   { "\x14\x57\x0c\x50\x32\x00", 0, 1 },  /* EE1LTCH: External Event 1 latch */
   { "\x14\x57\x06\x31\x44\x80", 1, 4 },  /* EE1FLTR: External Event 1 filter */
   { "\x14\x57\x4c\x50\x32\x00", 6, 1 },  /* EE2LTCH: External Event 2 latch */
   { "\x14\x57\x46\x31\x44\x80", 7, 4 },  /* EE2FLTR: External Event 2 filter */
   { "\x14\x57\x8c\x50\x32\x00", 12, 1 },  /* EE3LTCH: External Event 3 latch */
   { "\x14\x57\x86\x31\x44\x80", 13, 4 },  /* EE3FLTR: External Event 3 filter */
   { "\x14\x57\xcc\x50\x32\x00", 18, 1 },  /* EE4LTCH: External Event 4 latch */
   { "\x14\x57\xc6\x31\x44\x80", 19, 4 },  /* EE4FLTR: External Event 4 filter */
   { "\x14\x58\x0c\x50\x32\x00", 24, 1 },  /* EE5LTCH: External Event 5 latch */
   { "\x14\x58\x06\x31\x44\x80", 25, 4 },  /* EE5FLTR: External Event 5 filter */
};

const Field_t HRTIM_TIMA_EEFAR2_fields[] = {
   { "\x14\x58\x4c\x50\x32\x00", 0, 1 },  /* EE6LTCH: External Event 6 latch */
   { "\x14\x58\x46\x31\x44\x80", 1, 4 },  /* EE6FLTR: External Event 6 filter */
   { "\x14\x58\x8c\x50\x32\x00", 6, 1 },  /* EE7LTCH: External Event 7 latch */
   { "\x14\x58\x86\x31\x44\x80", 7, 4 },  /* EE7FLTR: External Event 7 filter */
   { "\x14\x58\xcc\x50\x32\x00", 12, 1 },  /* EE8LTCH: External Event 8 latch */
   { "\x14\x58\xc6\x31\x44\x80", 13, 4 },  /* EE8FLTR: External Event 8 filter */
   { "\x14\x59\x0c\x50\x32\x00", 18, 1 },  /* EE9LTCH: External Event 9 latch */
   { "\x14\x59\x06\x31\x44\x80", 19, 4 },  /* EE9FLTR: External Event 9 filter */
   { "\x14\x57\x1b\x31\x40\xc8", 24, 1 },  /* EE10LTCH: External Event 10 latch */
   { "\x14\x57\x1b\x18\xc5\x12", 25, 4 },  /* EE10FLTR: External Event 10 filter */
};

const Field_t HRTIM_TIMA_RSTAR_fields[] = {
   { "\x50\x93\x46\x0c\xd4\x1c", 0, 1 },  /* TIMFCMP1: Timer A Update reset */
   { "\x55\x01\x14", 1, 1 },  /* UPDT: Timer A Update reset */
   { "\x0c\xd4\x1d", 2, 1 },  /* CMP2: Timer A compare 2 reset */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Timer A compare 4 reset */
   { "\x35\x35\x10\x15\x20", 4, 1 },  /* MSTPER: Master timer Period */
   { "\x35\x35\x03\x35\x07\x00", 5, 1 },  /* MSTCMP1: Master compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 6, 1 },  /* MSTCMP2: Master compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 7, 1 },  /* MSTCMP3: Master compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 8, 1 },  /* MSTCMP4: Master compare 4 */
   { "\x15\x85\x05\x58\xe5\x1c", 9, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 10, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 11, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 12, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 13, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 14, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 15, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 16, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 17, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 18, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x50\x93\x42\x0c\xd4\x1c", 19, 1 },  /* TIMBCMP1: Timer B Compare 1 */
   { "\x50\x93\x42\x0c\xd4\x1d", 20, 1 },  /* TIMBCMP2: Timer B Compare 2 */
   { "\x50\x93\x42\x0c\xd4\x1f", 21, 1 },  /* TIMBCMP4: Timer B Compare 4 */
   { "\x50\x93\x43\x0c\xd4\x1c", 22, 1 },  /* TIMCCMP1: Timer C Compare 1 */
   { "\x50\x93\x43\x0c\xd4\x1d", 23, 1 },  /* TIMCCMP2: Timer C Compare 2 */
   { "\x50\x93\x43\x0c\xd4\x1f", 24, 1 },  /* TIMCCMP4: Timer C Compare 4 */
   { "\x50\x93\x44\x0c\xd4\x1c", 25, 1 },  /* TIMDCMP1: Timer D Compare 1 */
   { "\x50\x93\x44\x0c\xd4\x1d", 26, 1 },  /* TIMDCMP2: Timer D Compare 2 */
   { "\x50\x93\x44\x0c\xd4\x1f", 27, 1 },  /* TIMDCMP4: Timer D Compare 4 */
   { "\x50\x93\x45\x0c\xd4\x1c", 28, 1 },  /* TIMECMP1: Timer E Compare 1 */
   { "\x50\x93\x45\x0c\xd4\x1d", 29, 1 },  /* TIMECMP2: Timer E Compare 2 */
   { "\x50\x93\x45\x0c\xd4\x1f", 30, 1 },  /* TIMECMP4: Timer E Compare 4 */
   { "\x50\x93\x46\x0d\x03\x5d", 31, 1 },  /* TIMFCPM2: Timer F Compare 2 */
};

const Field_t HRTIM_TIMA_CHPAR_fields[] = {
   { "\x0c\x84\x06\x49\x10", 0, 4 },  /* CHPFRQ: Timerx carrier frequency               value */
   { "\x0c\x84\x04\x51\x90", 4, 3 },  /* CHPDTY: Timerx chopper duty cycle               value */
   { "\x4d\x44\x94\x41\x70", 7, 4 },  /* STRTPW: STRTPW */
};

const Field_t HRTIM_TIMA_CPT1ACR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x67\x13\x15\x40", 12, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 13, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 14, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 15, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMA_CPT2ACR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x67\x13\x15\x40", 12, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 13, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 14, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 15, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMA_OUTAR_fields[] = {
   { "\x40\xf3\x1c", 1, 1 },  /* POL1: Output 1 polarity */
   { "\x24\x43\x05\x35\xc0", 2, 1 },  /* IDLEM1: Output 1 Idle mode */
   { "\x24\x43\x05\x4d\xc0", 3, 1 },  /* IDLES1: Output 1 Idle State */
   { "\x18\x15\x4c\x51\xc0", 4, 2 },  /* FAULT1: Output 1 Fault state */
   { "\x0c\x84\x1c", 6, 1 },  /* CHP1: Output 1 Chopper enable */
   { "\x10\x91\x0c\x70", 7, 1 },  /* DIDL1: Output 1 Deadtime upon burst mode Idle               entry */
   { "\x11\x41\x4e", 8, 1 },  /* DTEN: Deadtime enable */
   { "\x10\xc6\x50\x49\x41\x4e", 9, 1 },  /* DLYPRTEN: Delayed Protection Enable */
   { "\x10\xc6\x50\x49\x40", 10, 3 },  /* DLYPRT: Delayed Protection */
   { "\x08\x90\x52", 14, 1 },  /* BIAR: Balanced Idle Automatic               Resume */
   { "\x40\xf3\x1d", 17, 1 },  /* POL2: Output 2 polarity */
   { "\x24\x43\x05\x35\xd0", 18, 1 },  /* IDLEM2: Output 2 Idle mode */
   { "\x24\x43\x05\x4d\xd0", 19, 1 },  /* IDLES2: Output 2 Idle State */
   { "\x18\x15\x4c\x51\xd0", 20, 2 },  /* FAULT2: Output 2 Fault state */
   { "\x0c\x84\x1d", 22, 1 },  /* CHP2: Output 2 Chopper enable */
   { "\x10\x91\x0c\x74", 23, 1 },  /* DIDL2: Output 2 Deadtime upon burst mode Idle               entry */
};

const Field_t HRTIM_TIMA_FLTAR_fields[] = {
   { "\x18\xc5\x1c\x14\xe0", 0, 1 },  /* FLT1EN: Fault 1 enable */
   { "\x18\xc5\x1d\x14\xe0", 1, 1 },  /* FLT2EN: Fault 2 enable */
   { "\x18\xc5\x1e\x14\xe0", 2, 1 },  /* FLT3EN: Fault 3 enable */
   { "\x18\xc5\x1f\x14\xe0", 3, 1 },  /* FLT4EN: Fault 4 enable */
   { "\x18\xc5\x20\x14\xe0", 4, 1 },  /* FLT5EN: Fault 5 enable */
   { "\x18\xc5\x21\x14\xe0", 5, 1 },  /* FLT6EN: Fault 6 enable */
   { "\x18\xc5\x0c\x0c\xb0", 31, 1 },  /* FLTLCK: Fault sources Lock */
};

const Field_t HRTIM_TIMA_TIMACR2_fields[] = {
   { "\x10\x31\x05", 0, 1 },  /* DCDE: Dual Channel DAC trigger               enable */
   { "\x10\x31\x13", 1, 1 },  /* DCDS: Dual Channel DAC Step               trigger */
   { "\x10\x31\x12", 2, 1 },  /* DCDR: Dual Channel DAC Reset               trigger */
   { "\x54\x43\x40", 4, 1 },  /* UDM: Up-Down Mode */
   { "\x48\xf3\x40", 6, 2 },  /* ROM: Roll-Over Mode */
   { "\x3d\x55\x12\x3c\xd0", 8, 2 },  /* OUTROM: Output Roll-Over Mode */
   { "\x04\x44\x8f\x34", 10, 2 },  /* ADROM: ADC Roll-Over Mode */
   { "\x08\xd4\x8f\x34", 12, 2 },  /* BMROM: Burst Mode Roll-Over Mode */
   { "\x18\x54\x8f\x34", 14, 2 },  /* FEROM: Fault and Event Roll-Over               Mode */
   { "\x1d\x40\xcd\x41\xc0", 16, 1 },  /* GTCMP1: Greater than Compare 1 PWM               mode */
   { "\x1d\x40\xcd\x41\xe0", 17, 1 },  /* GTCMP3: Greater than Compare 3 PWM               mode */
   { "\x51\x21\xc8\x30\x60", 20, 1 },  /* TRGHLF: Triggered-half mode */
};

const Field_t HRTIM_TIMA_AEEFR3_fields[] = {
   { "\x14\x55\x81\x0c\x50", 0, 1 },  /* EEVACE: External Event A Counter               Enable */
   { "\x14\x55\x81\x0d\x21\x53", 1, 1 },  /* EEVACRES: External Event A Counter               Reset */
   { "\x14\x55\x81\x49\x35\x0d", 2, 1 },  /* EEVARSTM: External Event A Reset               Mode */
   { "\x14\x55\x81\x4c\x53\x00", 4, 4 },  /* EEVASEL: External Event A Selection */
   { "\x14\x55\x81\x0c\xe5\x00", 8, 6 },  /* EEVACNT: External Event A counter */
};

const Register_t HRTIM_TIMA_registers[] = {
   {"\x50\x93\x41\x0d\x20", 0, 32, 0, HRTIM_TIMA_TIMACR_fields, 22}, /* TIMACR: Timerx Control Register */
   {"\x50\x93\x41\x25\x34\x80", 4, 32, 0, HRTIM_TIMA_TIMAISR_fields, 20}, /* TIMAISR: Timerx Interrupt Status           Register */
   {"\x50\x93\x41\x24\x34\x80", 8, 32, 0, HRTIM_TIMA_TIMAICR_fields, 14}, /* TIMAICR: Timerx Interrupt Clear           Register */
   {"\x50\x93\x41\x10\x91\x52", 12, 32, 0, HRTIM_TIMA_TIMADIER_fields, 28}, /* TIMADIER: TIMxDIER */
   {"\x0c\xe5\x01\x48", 16, 32, 0, HRTIM_TIMA_CNTAR_fields, 1}, /* CNTAR: Timerx Counter Register */
   {"\x40\x54\x81\x48", 20, 32, 0, HRTIM_TIMA_PERAR_fields, 1}, /* PERAR: Timerx Period Register */
   {"\x48\x54\x01\x48", 24, 32, 0, HRTIM_TIMA_REPAR_fields, 1}, /* REPAR: Timerx Repetition Register */
   {"\x0c\xd4\x1c\x05\x20", 28, 32, 0, HRTIM_TIMA_CMP1AR_fields, 1}, /* CMP1AR: Timerx Compare 1 Register */
   {"\x0c\xd4\x1c\x0c\x14\x80", 32, 32, 0, HRTIM_TIMA_CMP1CAR_fields, 2}, /* CMP1CAR: Timerx Compare 1 Compound           Register */
   {"\x0c\xd4\x1d\x05\x20", 36, 32, 0, HRTIM_TIMA_CMP2AR_fields, 1}, /* CMP2AR: Timerx Compare 2 Register */
   {"\x0c\xd4\x1e\x05\x20", 40, 32, 0, HRTIM_TIMA_CMP3AR_fields, 1}, /* CMP3AR: Timerx Compare 3 Register */
   {"\x0c\xd4\x1f\x05\x20", 44, 32, 0, HRTIM_TIMA_CMP4AR_fields, 1}, /* CMP4AR: Timerx Compare 4 Register */
   {"\x0d\x05\x1c\x05\x20", 48, 32, 0, HRTIM_TIMA_CPT1AR_fields, 2}, /* CPT1AR: Timerx Capture 1 Register */
   {"\x0d\x05\x1d\x05\x20", 52, 32, 0, HRTIM_TIMA_CPT2AR_fields, 2}, /* CPT2AR: Timerx Capture 2 Register */
   {"\x11\x40\x52", 56, 32, 0, HRTIM_TIMA_DTAR_fields, 9}, /* DTAR: Timerx Deadtime Register */
   {"\x4c\x55\x01\x71\x20", 60, 32, 0, HRTIM_TIMA_SETA1R_fields, 32}, /* SETA1R: Timerx Output1 Set Register */
   {"\x49\x35\x01\x71\x20", 64, 32, 0, HRTIM_TIMA_RSTA1R_fields, 32}, /* RSTA1R: Timerx Output1 Reset Register */
   {"\x4c\x55\x01\x75\x20", 68, 32, 0, HRTIM_TIMA_SETA2R_fields, 32}, /* SETA2R: Timerx Output2 Set Register */
   {"\x49\x35\x01\x75\x20", 72, 32, 0, HRTIM_TIMA_RSTA2R_fields, 32}, /* RSTA2R: Timerx Output2 Reset Register */
   {"\x14\x51\x81\x49\xc0", 76, 32, 0, HRTIM_TIMA_EEFAR1_fields, 10}, /* EEFAR1: Timerx External Event Filtering Register           1 */
   {"\x14\x51\x81\x49\xd0", 80, 32, 0, HRTIM_TIMA_EEFAR2_fields, 10}, /* EEFAR2: Timerx External Event Filtering Register           2 */
   {"\x49\x35\x01\x48", 84, 32, 0, HRTIM_TIMA_RSTAR_fields, 32}, /* RSTAR: TimerA Reset Register */
   {"\x0c\x84\x01\x48", 88, 32, 0, HRTIM_TIMA_CHPAR_fields, 3}, /* CHPAR: Timerx Chopper Register */
   {"\x0d\x05\x1c\x04\x34\x80", 92, 32, 0, HRTIM_TIMA_CPT1ACR_fields, 32}, /* CPT1ACR: Timerx Capture 2 Control           Register */
   {"\x0d\x05\x1d\x04\x34\x80", 96, 32, 0, HRTIM_TIMA_CPT2ACR_fields, 32}, /* CPT2ACR: CPT2xCR */
   {"\x3d\x55\x01\x48", 100, 32, 0, HRTIM_TIMA_OUTAR_fields, 16}, /* OUTAR: Timerx Output Register */
   {"\x18\xc5\x01\x48", 104, 32, 0, HRTIM_TIMA_FLTAR_fields, 7}, /* FLTAR: Timerx Fault Register */
   {"\x50\x93\x41\x0d\x27\x40", 108, 32, 0, HRTIM_TIMA_TIMACR2_fields, 12}, /* TIMACR2: HRTIM Timerx Control Register           2 */
   {"\x04\x51\x46\x49\xe0", 112, 32, 0, HRTIM_TIMA_AEEFR3_fields, 5}, /* AEEFR3: HRTIM Timerx External Event Filtering           Register 3 */
};

const Field_t HRTIM_TIMB_TIMBCR_fields[] = {
   { "\x0c\xb9\x50\x4c\x36\x00", 0, 3 },  /* CK_PSCx: HRTIM Timer x Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x41\x32\x10\x30\xc0", 6, 1 },  /* PSHPLL: Push-Pull mode enable */
   { "\x24\xe5\x0c\x58\x40", 7, 2 },  /* INTLVD: Interleaved mode */
   { "\x49\x36\x4e\x0d\x50", 9, 1 },  /* RSYNCU: Re-Synchronized Update */
   { "\x4d\x93\x83\x49\x35\x18", 10, 1 },  /* SYNCRSTx: Synchronization Resets Timer               x */
   { "\x4d\x93\x83\x4d\x44\x94\x60", 11, 1 },  /* SYNCSTRTx: Synchronization Starts Timer               x */
   { "\x10\x53\x03\x35\x07\x40", 12, 2 },  /* DELCMP2: Delayed CMP2 mode */
   { "\x10\x53\x03\x35\x07\xc0", 14, 2 },  /* DELCMP4: Delayed CMP4 mode */
   { "\x50\x65\x40", 16, 1 },  /* TFU: TFU */
   { "\x51\x84\x85\x41\x50", 17, 1 },  /* TxREPU: Timer x Repetition update */
   { "\x51\x84\x93\x51\x50", 18, 1 },  /* TxRSTU: Timerx reset update */
   { "\x50\x15\x40", 19, 1 },  /* TAU: TAU */
   { "\x50\x35\x40", 21, 1 },  /* TCU: TCU */
   { "\x50\x45\x40", 22, 1 },  /* TDU: TDU */
   { "\x50\x55\x40", 23, 1 },  /* TEU: TEU */
   { "\x35\x35\x15", 24, 1 },  /* MSTU: Master Timer update */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x55\x01\x07\x05\x40", 28, 4 },  /* UPDGAT: Update Gating */
};

const Field_t HRTIM_TIMB_TIMBISR_fields[] = {
   { "\x0c\xd4\x1c", 0, 1 },  /* CMP1: Compare 1 Interrupt Flag */
   { "\x0c\xd4\x1d", 1, 1 },  /* CMP2: Compare 2 Interrupt Flag */
   { "\x0c\xd4\x1e", 2, 1 },  /* CMP3: Compare 3 Interrupt Flag */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Compare 4 Interrupt Flag */
   { "\x48\x54\x00", 4, 1 },  /* REP: Repetition Interrupt Flag */
   { "\x55\x01\x00", 6, 1 },  /* UPD: Update Interrupt Flag */
   { "\x0d\x05\x1c", 7, 1 },  /* CPT1: Capture1 Interrupt Flag */
   { "\x0d\x05\x1d", 8, 1 },  /* CPT2: Capture2 Interrupt Flag */
   { "\x4c\x55\x18\x70", 9, 1 },  /* SETx1: Output 1 Set Interrupt               Flag */
   { "\x49\x35\x18\x70", 10, 1 },  /* RSTx1: Output 1 Reset Interrupt               Flag */
   { "\x4c\x55\x18\x74", 11, 1 },  /* SETx2: Output 2 Set Interrupt               Flag */
   { "\x49\x35\x18\x74", 12, 1 },  /* RSTx2: Output 2 Reset Interrupt               Flag */
   { "\x49\x35\x00", 13, 1 },  /* RST: Reset Interrupt Flag */
   { "\x10\xc6\x50\x49\x40", 14, 1 },  /* DLYPRT: Delayed Protection Flag */
   { "\x0d\x04\x13\x50\x15\x00", 16, 1 },  /* CPPSTAT: Current Push Pull Status */
   { "\x25\x04\x13\x50\x15\x00", 17, 1 },  /* IPPSTAT: Idle Push Pull Status */
   { "\x3d\xc4\xd4\x05\x40", 18, 1 },  /* O1STAT: Output 1 State */
   { "\x3d\xd4\xd4\x05\x40", 19, 1 },  /* O2STAT: Output 2 State */
   { "\x3d\xc0\xd0\x64", 20, 1 },  /* O1CPY: Output 1 Copy */
   { "\x3d\xd0\xd0\x64", 21, 1 },  /* O2CPY: Output 2 Copy */
};

const Field_t HRTIM_TIMB_TIMBICR_fields[] = {
   { "\x0c\xd4\x1c\x0c", 0, 1 },  /* CMP1C: Compare 1 Interrupt flag               Clear */
   { "\x0c\xd4\x1d\x0c", 1, 1 },  /* CMP2C: Compare 2 Interrupt flag               Clear */
   { "\x0c\xd4\x1e\x0c", 2, 1 },  /* CMP3C: Compare 3 Interrupt flag               Clear */
   { "\x0c\xd4\x1f\x0c", 3, 1 },  /* CMP4C: Compare 4 Interrupt flag               Clear */
   { "\x48\x54\x03", 4, 1 },  /* REPC: Repetition Interrupt flag               Clear */
   { "\x55\x01\x03", 6, 1 },  /* UPDC: Update Interrupt flag               Clear */
   { "\x0d\x05\x1c\x0c", 7, 1 },  /* CPT1C: Capture1 Interrupt flag               Clear */
   { "\x0d\x05\x1d\x0c", 8, 1 },  /* CPT2C: Capture2 Interrupt flag               Clear */
   { "\x4c\x55\x1c\x60\x30", 9, 1 },  /* SET1xC: Output 1 Set flag Clear */
   { "\x49\x35\x18\x70\x30", 10, 1 },  /* RSTx1C: Output 1 Reset flag Clear */
   { "\x4c\x55\x1d\x60\x30", 11, 1 },  /* SET2xC: Output 2 Set flag Clear */
   { "\x49\x35\x18\x74\x30", 12, 1 },  /* RSTx2C: Output 2 Reset flag Clear */
   { "\x49\x35\x03", 13, 1 },  /* RSTC: Reset Interrupt flag Clear */
   { "\x10\xc6\x50\x49\x40\xc0", 14, 1 },  /* DLYPRTC: Delayed Protection Flag               Clear */
};

const Field_t HRTIM_TIMB_TIMBDIER_fields[] = {
   { "\x0c\xd4\x1c\x24\x50", 0, 1 },  /* CMP1IE: CMP1IE */
   { "\x0c\xd4\x1d\x24\x50", 1, 1 },  /* CMP2IE: CMP2IE */
   { "\x0c\xd4\x1e\x24\x50", 2, 1 },  /* CMP3IE: CMP3IE */
   { "\x0c\xd4\x1f\x24\x50", 3, 1 },  /* CMP4IE: CMP4IE */
   { "\x48\x54\x09\x14", 4, 1 },  /* REPIE: REPIE */
   { "\x55\x01\x09\x14", 6, 1 },  /* UPDIE: UPDIE */
   { "\x0d\x05\x1c\x24\x50", 7, 1 },  /* CPT1IE: CPT1IE */
   { "\x0d\x05\x1d\x24\x50", 8, 1 },  /* CPT2IE: CPT2IE */
   { "\x4c\x55\x1c\x60\x91\x40", 9, 1 },  /* SET1xIE: SET1xIE */
   { "\x49\x35\x18\x70\x91\x40", 10, 1 },  /* RSTx1IE: RSTx1IE */
   { "\x4c\x55\x18\x74\x91\x40", 11, 1 },  /* SETx2IE: SETx2IE */
   { "\x49\x35\x18\x74\x91\x40", 12, 1 },  /* RSTx2IE: RSTx2IE */
   { "\x49\x35\x09\x14", 13, 1 },  /* RSTIE: RSTIE */
   { "\x10\xc6\x50\x49\x42\x45", 14, 1 },  /* DLYPRTIE: DLYPRTIE */
   { "\x0c\xd4\x1c\x10\x50", 16, 1 },  /* CMP1DE: CMP1DE */
   { "\x0c\xd4\x1d\x10\x50", 17, 1 },  /* CMP2DE: CMP2DE */
   { "\x0c\xd4\x1e\x10\x50", 18, 1 },  /* CMP3DE: CMP3DE */
   { "\x0c\xd4\x1f\x10\x50", 19, 1 },  /* CMP4DE: CMP4DE */
   { "\x48\x54\x04\x14", 20, 1 },  /* REPDE: REPDE */
   { "\x55\x01\x04\x14", 22, 1 },  /* UPDDE: UPDDE */
   { "\x0d\x05\x1c\x10\x50", 23, 1 },  /* CPT1DE: CPT1DE */
   { "\x0d\x05\x1d\x10\x50", 24, 1 },  /* CPT2DE: CPT2DE */
   { "\x4c\x55\x1c\x60\x41\x40", 25, 1 },  /* SET1xDE: SET1xDE */
   { "\x49\x35\x18\x70\x41\x40", 26, 1 },  /* RSTx1DE: RSTx1DE */
   { "\x4c\x55\x18\x74\x41\x40", 27, 1 },  /* SETx2DE: SETx2DE */
   { "\x49\x35\x18\x74\x41\x40", 28, 1 },  /* RSTx2DE: RSTx2DE */
   { "\x49\x35\x04\x14", 29, 1 },  /* RSTDE: RSTDE */
   { "\x10\xc6\x50\x49\x41\x05", 30, 1 },  /* DLYPRTDE: DLYPRTDE */
};

const Field_t HRTIM_TIMB_CNTR_fields[] = {
   { "\x0c\xe5\x18", 0, 16 },  /* CNTx: Timerx Counter value */
};

const Field_t HRTIM_TIMB_PERBR_fields[] = {
   { "\x40\x54\x98", 0, 16 },  /* PERx: Timerx Period value */
};

const Field_t HRTIM_TIMB_REPBR_fields[] = {
   { "\x48\x54\x18", 0, 8 },  /* REPx: Timerx Repetition counter               value */
};

const Field_t HRTIM_TIMB_CMP1BR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
};

const Field_t HRTIM_TIMB_CMP1CBR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
   { "\x48\x54\x18", 16, 8 },  /* REPx: Timerx Repetition value (aliased from               HRTIM_REPx register) */
};

const Field_t HRTIM_TIMB_CMP2BR_fields[] = {
   { "\x0c\xd4\x1d\x60", 0, 16 },  /* CMP2x: Timerx Compare 2 value */
};

const Field_t HRTIM_TIMB_CMP3BR_fields[] = {
   { "\x0c\xd4\x1e\x60", 0, 16 },  /* CMP3x: Timerx Compare 3 value */
};

const Field_t HRTIM_TIMB_CMP4BR_fields[] = {
   { "\x0c\xd4\x1f\x60", 0, 16 },  /* CMP4x: Timerx Compare 4 value */
};

const Field_t HRTIM_TIMB_CPT1BR_fields[] = {
   { "\x0d\x05\x1c\x60", 0, 16 },  /* CPT1x: Timerx Capture 1 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMB_CPT2BR_fields[] = {
   { "\x0d\x05\x1d\x60", 0, 16 },  /* CPT2x: Timerx Capture 2 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMB_DTBR_fields[] = {
   { "\x11\x44\x98", 0, 9 },  /* DTRx: Deadtime Rising value */
   { "\x4c\x45\x12\x60", 9, 1 },  /* SDTRx: Sign Deadtime Rising value */
   { "\x11\x44\x12\x4c\x30", 10, 3 },  /* DTPRSC: Deadtime Prescaler */
   { "\x11\x44\x93\x30\xb6\x00", 14, 1 },  /* DTRSLKx: Deadtime Rising Sign Lock */
   { "\x11\x44\x8c\x2d\x80", 15, 1 },  /* DTRLKx: Deadtime Rising Lock */
   { "\x11\x41\x98", 16, 9 },  /* DTFx: Deadtime Falling value */
   { "\x4c\x45\x06\x60", 25, 1 },  /* SDTFx: Sign Deadtime Falling               value */
   { "\x11\x41\x93\x30\xb6\x00", 30, 1 },  /* DTFSLKx: Deadtime Falling Sign Lock */
   { "\x11\x41\x8c\x2d\x80", 31, 1 },  /* DTFLKx: Deadtime Falling Lock */
};

const Field_t HRTIM_TIMB_SETB1R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: Software Set trigger */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: Timer A resynchronizaton */
   { "\x40\x54\x80", 2, 1 },  /* PER: Timer A Period */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: Timer A compare 1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: Timer A compare 2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: Timer A compare 3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: Timer A compare 4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: Master Period */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: Master Compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: Master Compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: Master Compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: Master Compare 4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: Timer Event 1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: Timer Event 2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: Timer Event 3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: Timer Event 4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: Timer Event 5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: Timer Event 6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: Timer Event 7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: Timer Event 8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: Timer Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: Registers update (transfer preload to               active) */
};

const Field_t HRTIM_TIMB_RSTB1R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMB_SETB2R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: SST */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMB_RSTB2R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMB_EEFBR1_fields[] = {
   { "\x14\x57\x0c\x50\x32\x00", 0, 1 },  /* EE1LTCH: External Event 1 latch */
   { "\x14\x57\x06\x31\x44\x80", 1, 4 },  /* EE1FLTR: External Event 1 filter */
   { "\x14\x57\x4c\x50\x32\x00", 6, 1 },  /* EE2LTCH: External Event 2 latch */
   { "\x14\x57\x46\x31\x44\x80", 7, 4 },  /* EE2FLTR: External Event 2 filter */
   { "\x14\x57\x8c\x50\x32\x00", 12, 1 },  /* EE3LTCH: External Event 3 latch */
   { "\x14\x57\x86\x31\x44\x80", 13, 4 },  /* EE3FLTR: External Event 3 filter */
   { "\x14\x57\xcc\x50\x32\x00", 18, 1 },  /* EE4LTCH: External Event 4 latch */
   { "\x14\x57\xc6\x31\x44\x80", 19, 4 },  /* EE4FLTR: External Event 4 filter */
   { "\x14\x58\x0c\x50\x32\x00", 24, 1 },  /* EE5LTCH: External Event 5 latch */
   { "\x14\x58\x06\x31\x44\x80", 25, 4 },  /* EE5FLTR: External Event 5 filter */
};

const Field_t HRTIM_TIMB_EEFBR2_fields[] = {
   { "\x14\x58\x4c\x50\x32\x00", 0, 1 },  /* EE6LTCH: External Event 6 latch */
   { "\x14\x58\x46\x31\x44\x80", 1, 4 },  /* EE6FLTR: External Event 6 filter */
   { "\x14\x58\x8c\x50\x32\x00", 6, 1 },  /* EE7LTCH: External Event 7 latch */
   { "\x14\x58\x86\x31\x44\x80", 7, 4 },  /* EE7FLTR: External Event 7 filter */
   { "\x14\x58\xcc\x50\x32\x00", 12, 1 },  /* EE8LTCH: External Event 8 latch */
   { "\x14\x58\xc6\x31\x44\x80", 13, 4 },  /* EE8FLTR: External Event 8 filter */
   { "\x14\x59\x0c\x50\x32\x00", 18, 1 },  /* EE9LTCH: External Event 9 latch */
   { "\x14\x59\x06\x31\x44\x80", 19, 4 },  /* EE9FLTR: External Event 9 filter */
   { "\x14\x57\x1b\x31\x40\xc8", 24, 1 },  /* EE10LTCH: External Event 10 latch */
   { "\x14\x57\x1b\x18\xc5\x12", 25, 4 },  /* EE10FLTR: External Event 10 filter */
};

const Field_t HRTIM_TIMB_RSTBR_fields[] = {
   { "\x50\x93\x46\x0c\xd4\x1c", 0, 1 },  /* TIMFCMP1: Timer A Update reset */
   { "\x55\x01\x14", 1, 1 },  /* UPDT: Timer A Update reset */
   { "\x0c\xd4\x1d", 2, 1 },  /* CMP2: Timer A compare 2 reset */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Timer A compare 4 reset */
   { "\x35\x35\x10\x15\x20", 4, 1 },  /* MSTPER: Master timer Period */
   { "\x35\x35\x03\x35\x07\x00", 5, 1 },  /* MSTCMP1: Master compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 6, 1 },  /* MSTCMP2: Master compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 7, 1 },  /* MSTCMP3: Master compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 8, 1 },  /* MSTCMP4: Master compare 4 */
   { "\x15\x85\x05\x58\xe5\x1c", 9, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 10, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 11, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 12, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 13, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 14, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 15, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 16, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 17, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 18, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x50\x93\x41\x0c\xd4\x1c", 19, 1 },  /* TIMACMP1: Timer A Compare 1 */
   { "\x50\x93\x41\x0c\xd4\x1d", 20, 1 },  /* TIMACMP2: Timer A Compare 2 */
   { "\x50\x93\x41\x0c\xd4\x1f", 21, 1 },  /* TIMACMP4: Timer A Compare 4 */
   { "\x50\x93\x43\x0c\xd4\x1c", 22, 1 },  /* TIMCCMP1: Timer C Compare 1 */
   { "\x50\x93\x43\x0c\xd4\x1d", 23, 1 },  /* TIMCCMP2: Timer C Compare 2 */
   { "\x50\x93\x43\x0c\xd4\x1f", 24, 1 },  /* TIMCCMP4: Timer C Compare 4 */
   { "\x50\x93\x44\x0c\xd4\x1c", 25, 1 },  /* TIMDCMP1: Timer D Compare 1 */
   { "\x50\x93\x44\x0c\xd4\x1d", 26, 1 },  /* TIMDCMP2: Timer D Compare 2 */
   { "\x50\x93\x44\x0c\xd4\x1f", 27, 1 },  /* TIMDCMP4: Timer D Compare 4 */
   { "\x50\x93\x45\x0c\xd4\x1c", 28, 1 },  /* TIMECMP1: Timer E Compare 1 */
   { "\x50\x93\x45\x0c\xd4\x1d", 29, 1 },  /* TIMECMP2: Timer E Compare 2 */
   { "\x50\x93\x45\x0c\xd4\x1f", 30, 1 },  /* TIMECMP4: Timer E Compare 4 */
   { "\x50\x93\x46\x0d\x03\x5d", 31, 1 },  /* TIMFCPM2: Timer F Compare 2 */
};

const Field_t HRTIM_TIMB_CHPBR_fields[] = {
   { "\x0c\x84\x06\x49\x10", 0, 4 },  /* CHPFRQ: Timerx carrier frequency               value */
   { "\x0c\x84\x04\x51\x90", 4, 3 },  /* CHPDTY: Timerx chopper duty cycle               value */
   { "\x4d\x44\x94\x41\x70", 7, 4 },  /* STRTPW: STRTPW */
};

const Field_t HRTIM_TIMB_CPT1BCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x67\x13\x15\x40", 16, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 17, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 18, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 19, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMB_CPT2BCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x67\x13\x15\x40", 16, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 17, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 18, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 19, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMB_OUTBR_fields[] = {
   { "\x40\xf3\x1c", 1, 1 },  /* POL1: Output 1 polarity */
   { "\x24\x43\x05\x35\xc0", 2, 1 },  /* IDLEM1: Output 1 Idle mode */
   { "\x24\x43\x05\x4d\xc0", 3, 1 },  /* IDLES1: Output 1 Idle State */
   { "\x18\x15\x4c\x51\xc0", 4, 2 },  /* FAULT1: Output 1 Fault state */
   { "\x0c\x84\x1c", 6, 1 },  /* CHP1: Output 1 Chopper enable */
   { "\x10\x91\x0c\x70", 7, 1 },  /* DIDL1: Output 1 Deadtime upon burst mode Idle               entry */
   { "\x11\x41\x4e", 8, 1 },  /* DTEN: Deadtime enable */
   { "\x10\xc6\x50\x49\x41\x4e", 9, 1 },  /* DLYPRTEN: Delayed Protection Enable */
   { "\x10\xc6\x50\x49\x40", 10, 3 },  /* DLYPRT: Delayed Protection */
   { "\x08\x90\x52", 14, 1 },  /* BIAR: Balanced Idle Automatic               Resume */
   { "\x40\xf3\x1d", 17, 1 },  /* POL2: Output 2 polarity */
   { "\x24\x43\x05\x35\xd0", 18, 1 },  /* IDLEM2: Output 2 Idle mode */
   { "\x24\x43\x05\x4d\xd0", 19, 1 },  /* IDLES2: Output 2 Idle State */
   { "\x18\x15\x4c\x51\xd0", 20, 2 },  /* FAULT2: Output 2 Fault state */
   { "\x0c\x84\x1d", 22, 1 },  /* CHP2: Output 2 Chopper enable */
   { "\x10\x91\x0c\x74", 23, 1 },  /* DIDL2: Output 2 Deadtime upon burst mode Idle               entry */
};

const Field_t HRTIM_TIMB_FLTBR_fields[] = {
   { "\x18\xc5\x1c\x14\xe0", 0, 1 },  /* FLT1EN: Fault 1 enable */
   { "\x18\xc5\x1d\x14\xe0", 1, 1 },  /* FLT2EN: Fault 2 enable */
   { "\x18\xc5\x1e\x14\xe0", 2, 1 },  /* FLT3EN: Fault 3 enable */
   { "\x18\xc5\x1f\x14\xe0", 3, 1 },  /* FLT4EN: Fault 4 enable */
   { "\x18\xc5\x20\x14\xe0", 4, 1 },  /* FLT5EN: Fault 5 enable */
   { "\x18\xc5\x21\x14\xe0", 5, 1 },  /* FLT6EN: Fault 6 enable */
   { "\x18\xc5\x0c\x0c\xb0", 31, 1 },  /* FLTLCK: Fault sources Lock */
};

const Field_t HRTIM_TIMB_TIMBCR2_fields[] = {
   { "\x10\x31\x05", 0, 1 },  /* DCDE: Dual Channel DAC trigger               enable */
   { "\x10\x31\x13", 1, 1 },  /* DCDS: Dual Channel DAC Step               trigger */
   { "\x10\x31\x12", 2, 1 },  /* DCDR: Dual Channel DAC Reset               trigger */
   { "\x54\x43\x40", 4, 1 },  /* UDM: Up-Down Mode */
   { "\x48\xf3\x40", 6, 2 },  /* ROM: Roll-Over Mode */
   { "\x3d\x55\x12\x3c\xd0", 8, 2 },  /* OUTROM: Output Roll-Over Mode */
   { "\x04\x44\x8f\x34", 10, 2 },  /* ADROM: ADC Roll-Over Mode */
   { "\x08\xd4\x8f\x34", 12, 2 },  /* BMROM: Burst Mode Roll-Over Mode */
   { "\x18\x54\x8f\x34", 14, 2 },  /* FEROM: Fault and Event Roll-Over               Mode */
   { "\x1d\x40\xcd\x41\xc0", 16, 1 },  /* GTCMP1: Greater than Compare 1 PWM               mode */
   { "\x1d\x40\xcd\x41\xe0", 17, 1 },  /* GTCMP3: Greater than Compare 3 PWM               mode */
   { "\x51\x21\xc8\x30\x60", 20, 1 },  /* TRGHLF: Triggered-half mode */
};

const Field_t HRTIM_TIMB_BEEFR3_fields[] = {
   { "\x14\x55\x81\x0c\x50", 0, 1 },  /* EEVACE: External Event A Counter               Enable */
   { "\x14\x55\x81\x0d\x21\x53", 1, 1 },  /* EEVACRES: External Event A Counter               Reset */
   { "\x14\x55\x81\x49\x35\x0d", 2, 1 },  /* EEVARSTM: External Event A Reset               Mode */
   { "\x14\x55\x81\x4c\x53\x00", 4, 4 },  /* EEVASEL: External Event A Selection */
   { "\x14\x55\x81\x0c\xe5\x00", 8, 6 },  /* EEVACNT: External Event A counter */
};

const Register_t HRTIM_TIMB_registers[] = {
   {"\x50\x93\x42\x0d\x20", 0, 32, 0, HRTIM_TIMB_TIMBCR_fields, 22}, /* TIMBCR: Timerx Control Register */
   {"\x50\x93\x42\x25\x34\x80", 4, 32, 0, HRTIM_TIMB_TIMBISR_fields, 20}, /* TIMBISR: Timerx Interrupt Status           Register */
   {"\x50\x93\x42\x24\x34\x80", 8, 32, 0, HRTIM_TIMB_TIMBICR_fields, 14}, /* TIMBICR: Timerx Interrupt Clear           Register */
   {"\x50\x93\x42\x10\x91\x52", 12, 32, 0, HRTIM_TIMB_TIMBDIER_fields, 28}, /* TIMBDIER: TIMxDIER */
   {"\x0c\xe5\x12", 16, 32, 0, HRTIM_TIMB_CNTR_fields, 1}, /* CNTR: Timerx Counter Register */
   {"\x40\x54\x82\x48", 20, 32, 0, HRTIM_TIMB_PERBR_fields, 1}, /* PERBR: Timerx Period Register */
   {"\x48\x54\x02\x48", 24, 32, 0, HRTIM_TIMB_REPBR_fields, 1}, /* REPBR: Timerx Repetition Register */
   {"\x0c\xd4\x1c\x09\x20", 28, 32, 0, HRTIM_TIMB_CMP1BR_fields, 1}, /* CMP1BR: Timerx Compare 1 Register */
   {"\x0c\xd4\x1c\x0c\x24\x80", 32, 32, 0, HRTIM_TIMB_CMP1CBR_fields, 2}, /* CMP1CBR: Timerx Compare 1 Compound           Register */
   {"\x0c\xd4\x1d\x09\x20", 36, 32, 0, HRTIM_TIMB_CMP2BR_fields, 1}, /* CMP2BR: Timerx Compare 2 Register */
   {"\x0c\xd4\x1e\x09\x20", 40, 32, 0, HRTIM_TIMB_CMP3BR_fields, 1}, /* CMP3BR: Timerx Compare 3 Register */
   {"\x0c\xd4\x1f\x09\x20", 44, 32, 0, HRTIM_TIMB_CMP4BR_fields, 1}, /* CMP4BR: Timerx Compare 4 Register */
   {"\x0d\x05\x1c\x09\x20", 48, 32, 0, HRTIM_TIMB_CPT1BR_fields, 2}, /* CPT1BR: Timerx Capture 1 Register */
   {"\x0d\x05\x1d\x09\x20", 52, 32, 0, HRTIM_TIMB_CPT2BR_fields, 2}, /* CPT2BR: Timerx Capture 2 Register */
   {"\x11\x40\x92", 56, 32, 0, HRTIM_TIMB_DTBR_fields, 9}, /* DTBR: Timerx Deadtime Register */
   {"\x4c\x55\x02\x71\x20", 60, 32, 0, HRTIM_TIMB_SETB1R_fields, 32}, /* SETB1R: Timerx Output1 Set Register */
   {"\x49\x35\x02\x71\x20", 64, 32, 0, HRTIM_TIMB_RSTB1R_fields, 32}, /* RSTB1R: Timerx Output1 Reset Register */
   {"\x4c\x55\x02\x75\x20", 68, 32, 0, HRTIM_TIMB_SETB2R_fields, 32}, /* SETB2R: Timerx Output2 Set Register */
   {"\x49\x35\x02\x75\x20", 72, 32, 0, HRTIM_TIMB_RSTB2R_fields, 32}, /* RSTB2R: Timerx Output2 Reset Register */
   {"\x14\x51\x82\x49\xc0", 76, 32, 0, HRTIM_TIMB_EEFBR1_fields, 10}, /* EEFBR1: Timerx External Event Filtering Register           1 */
   {"\x14\x51\x82\x49\xd0", 80, 32, 0, HRTIM_TIMB_EEFBR2_fields, 10}, /* EEFBR2: Timerx External Event Filtering Register           2 */
   {"\x49\x35\x02\x48", 84, 32, 0, HRTIM_TIMB_RSTBR_fields, 32}, /* RSTBR: TimerA Reset Register */
   {"\x0c\x84\x02\x48", 88, 32, 0, HRTIM_TIMB_CHPBR_fields, 3}, /* CHPBR: Timerx Chopper Register */
   {"\x0d\x05\x1c\x08\x34\x80", 92, 32, 0, HRTIM_TIMB_CPT1BCR_fields, 32}, /* CPT1BCR: Timerx Capture 2 Control           Register */
   {"\x0d\x05\x1d\x08\x34\x80", 96, 32, 0, HRTIM_TIMB_CPT2BCR_fields, 32}, /* CPT2BCR: CPT2xCR */
   {"\x3d\x55\x02\x48", 100, 32, 0, HRTIM_TIMB_OUTBR_fields, 16}, /* OUTBR: Timerx Output Register */
   {"\x18\xc5\x02\x48", 104, 32, 0, HRTIM_TIMB_FLTBR_fields, 7}, /* FLTBR: Timerx Fault Register */
   {"\x50\x93\x42\x0d\x27\x40", 108, 32, 0, HRTIM_TIMB_TIMBCR2_fields, 12}, /* TIMBCR2: HRTIM Timerx Control Register           2 */
   {"\x08\x51\x46\x49\xe0", 112, 32, 0, HRTIM_TIMB_BEEFR3_fields, 5}, /* BEEFR3: HRTIM Timerx External Event Filtering           Register 3 */
};

const Field_t HRTIM_TIMC_TIMCCR_fields[] = {
   { "\x0c\xb9\x50\x4c\x36\x00", 0, 3 },  /* CK_PSCx: HRTIM Timer x Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x41\x32\x10\x30\xc0", 6, 1 },  /* PSHPLL: Push-Pull mode enable */
   { "\x24\xe5\x0c\x58\x40", 7, 2 },  /* INTLVD: Interleaved mode */
   { "\x49\x36\x4e\x0d\x50", 9, 1 },  /* RSYNCU: Re-Synchronized Update */
   { "\x4d\x93\x83\x49\x35\x18", 10, 1 },  /* SYNCRSTx: Synchronization Resets Timer               x */
   { "\x4d\x93\x83\x4d\x44\x94\x60", 11, 1 },  /* SYNCSTRTx: Synchronization Starts Timer               x */
   { "\x10\x53\x03\x35\x07\x40", 12, 2 },  /* DELCMP2: Delayed CMP2 mode */
   { "\x10\x53\x03\x35\x07\xc0", 14, 2 },  /* DELCMP4: Delayed CMP4 mode */
   { "\x50\x65\x40", 16, 1 },  /* TFU: TFU */
   { "\x51\x84\x85\x41\x50", 17, 1 },  /* TxREPU: Timer x Repetition update */
   { "\x51\x84\x93\x51\x50", 18, 1 },  /* TxRSTU: Timerx reset update */
   { "\x50\x15\x40", 19, 1 },  /* TAU: TAU */
   { "\x50\x25\x40", 20, 1 },  /* TBU: TBU */
   { "\x50\x45\x40", 22, 1 },  /* TDU: TDU */
   { "\x50\x55\x40", 23, 1 },  /* TEU: TEU */
   { "\x35\x35\x15", 24, 1 },  /* MSTU: Master Timer update */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x55\x01\x07\x05\x40", 28, 4 },  /* UPDGAT: Update Gating */
};

const Field_t HRTIM_TIMC_TIMCISR_fields[] = {
   { "\x0c\xd4\x1c", 0, 1 },  /* CMP1: Compare 1 Interrupt Flag */
   { "\x0c\xd4\x1d", 1, 1 },  /* CMP2: Compare 2 Interrupt Flag */
   { "\x0c\xd4\x1e", 2, 1 },  /* CMP3: Compare 3 Interrupt Flag */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Compare 4 Interrupt Flag */
   { "\x48\x54\x00", 4, 1 },  /* REP: Repetition Interrupt Flag */
   { "\x55\x01\x00", 6, 1 },  /* UPD: Update Interrupt Flag */
   { "\x0d\x05\x1c", 7, 1 },  /* CPT1: Capture1 Interrupt Flag */
   { "\x0d\x05\x1d", 8, 1 },  /* CPT2: Capture2 Interrupt Flag */
   { "\x4c\x55\x18\x70", 9, 1 },  /* SETx1: Output 1 Set Interrupt               Flag */
   { "\x49\x35\x18\x70", 10, 1 },  /* RSTx1: Output 1 Reset Interrupt               Flag */
   { "\x4c\x55\x18\x74", 11, 1 },  /* SETx2: Output 2 Set Interrupt               Flag */
   { "\x49\x35\x18\x74", 12, 1 },  /* RSTx2: Output 2 Reset Interrupt               Flag */
   { "\x49\x35\x00", 13, 1 },  /* RST: Reset Interrupt Flag */
   { "\x10\xc6\x50\x49\x40", 14, 1 },  /* DLYPRT: Delayed Protection Flag */
   { "\x0d\x04\x13\x50\x15\x00", 16, 1 },  /* CPPSTAT: Current Push Pull Status */
   { "\x25\x04\x13\x50\x15\x00", 17, 1 },  /* IPPSTAT: Idle Push Pull Status */
   { "\x3d\xc4\xd4\x05\x40", 18, 1 },  /* O1STAT: Output 1 State */
   { "\x3d\xd4\xd4\x05\x40", 19, 1 },  /* O2STAT: Output 2 State */
   { "\x3d\xc0\xd0\x64", 20, 1 },  /* O1CPY: Output 1 Copy */
   { "\x3d\xd0\xd0\x64", 21, 1 },  /* O2CPY: Output 2 Copy */
};

const Field_t HRTIM_TIMC_TIMCICR_fields[] = {
   { "\x0c\xd4\x1c\x0c", 0, 1 },  /* CMP1C: Compare 1 Interrupt flag               Clear */
   { "\x0c\xd4\x1d\x0c", 1, 1 },  /* CMP2C: Compare 2 Interrupt flag               Clear */
   { "\x0c\xd4\x1e\x0c", 2, 1 },  /* CMP3C: Compare 3 Interrupt flag               Clear */
   { "\x0c\xd4\x1f\x0c", 3, 1 },  /* CMP4C: Compare 4 Interrupt flag               Clear */
   { "\x48\x54\x03", 4, 1 },  /* REPC: Repetition Interrupt flag               Clear */
   { "\x55\x01\x03", 6, 1 },  /* UPDC: Update Interrupt flag               Clear */
   { "\x0d\x05\x1c\x0c", 7, 1 },  /* CPT1C: Capture1 Interrupt flag               Clear */
   { "\x0d\x05\x1d\x0c", 8, 1 },  /* CPT2C: Capture2 Interrupt flag               Clear */
   { "\x4c\x55\x1c\x60\x30", 9, 1 },  /* SET1xC: Output 1 Set flag Clear */
   { "\x49\x35\x18\x70\x30", 10, 1 },  /* RSTx1C: Output 1 Reset flag Clear */
   { "\x4c\x55\x1d\x60\x30", 11, 1 },  /* SET2xC: Output 2 Set flag Clear */
   { "\x49\x35\x18\x74\x30", 12, 1 },  /* RSTx2C: Output 2 Reset flag Clear */
   { "\x49\x35\x03", 13, 1 },  /* RSTC: Reset Interrupt flag Clear */
   { "\x10\xc6\x50\x49\x40\xc0", 14, 1 },  /* DLYPRTC: Delayed Protection Flag               Clear */
};

const Field_t HRTIM_TIMC_TIMCDIER_fields[] = {
   { "\x0c\xd4\x1c\x24\x50", 0, 1 },  /* CMP1IE: CMP1IE */
   { "\x0c\xd4\x1d\x24\x50", 1, 1 },  /* CMP2IE: CMP2IE */
   { "\x0c\xd4\x1e\x24\x50", 2, 1 },  /* CMP3IE: CMP3IE */
   { "\x0c\xd4\x1f\x24\x50", 3, 1 },  /* CMP4IE: CMP4IE */
   { "\x48\x54\x09\x14", 4, 1 },  /* REPIE: REPIE */
   { "\x55\x01\x09\x14", 6, 1 },  /* UPDIE: UPDIE */
   { "\x0d\x05\x1c\x24\x50", 7, 1 },  /* CPT1IE: CPT1IE */
   { "\x0d\x05\x1d\x24\x50", 8, 1 },  /* CPT2IE: CPT2IE */
   { "\x4c\x55\x1c\x60\x91\x40", 9, 1 },  /* SET1xIE: SET1xIE */
   { "\x49\x35\x18\x70\x91\x40", 10, 1 },  /* RSTx1IE: RSTx1IE */
   { "\x4c\x55\x18\x74\x91\x40", 11, 1 },  /* SETx2IE: SETx2IE */
   { "\x49\x35\x18\x74\x91\x40", 12, 1 },  /* RSTx2IE: RSTx2IE */
   { "\x49\x35\x09\x14", 13, 1 },  /* RSTIE: RSTIE */
   { "\x10\xc6\x50\x49\x42\x45", 14, 1 },  /* DLYPRTIE: DLYPRTIE */
   { "\x0c\xd4\x1c\x10\x50", 16, 1 },  /* CMP1DE: CMP1DE */
   { "\x0c\xd4\x1d\x10\x50", 17, 1 },  /* CMP2DE: CMP2DE */
   { "\x0c\xd4\x1e\x10\x50", 18, 1 },  /* CMP3DE: CMP3DE */
   { "\x0c\xd4\x1f\x10\x50", 19, 1 },  /* CMP4DE: CMP4DE */
   { "\x48\x54\x04\x14", 20, 1 },  /* REPDE: REPDE */
   { "\x55\x01\x04\x14", 22, 1 },  /* UPDDE: UPDDE */
   { "\x0d\x05\x1c\x10\x50", 23, 1 },  /* CPT1DE: CPT1DE */
   { "\x0d\x05\x1d\x10\x50", 24, 1 },  /* CPT2DE: CPT2DE */
   { "\x4c\x55\x1c\x60\x41\x40", 25, 1 },  /* SET1xDE: SET1xDE */
   { "\x49\x35\x18\x70\x41\x40", 26, 1 },  /* RSTx1DE: RSTx1DE */
   { "\x4c\x55\x18\x74\x41\x40", 27, 1 },  /* SETx2DE: SETx2DE */
   { "\x49\x35\x18\x74\x41\x40", 28, 1 },  /* RSTx2DE: RSTx2DE */
   { "\x49\x35\x04\x14", 29, 1 },  /* RSTDE: RSTDE */
   { "\x10\xc6\x50\x49\x41\x05", 30, 1 },  /* DLYPRTDE: DLYPRTDE */
};

const Field_t HRTIM_TIMC_CNTCR_fields[] = {
   { "\x0c\xe5\x18", 0, 16 },  /* CNTx: Timerx Counter value */
};

const Field_t HRTIM_TIMC_PERCR_fields[] = {
   { "\x40\x54\x98", 0, 16 },  /* PERx: Timerx Period value */
};

const Field_t HRTIM_TIMC_REPCR_fields[] = {
   { "\x48\x54\x18", 0, 8 },  /* REPx: Timerx Repetition counter               value */
};

const Field_t HRTIM_TIMC_CMP1CR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
};

const Field_t HRTIM_TIMC_CMP1CCR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
   { "\x48\x54\x18", 16, 8 },  /* REPx: Timerx Repetition value (aliased from               HRTIM_REPx register) */
};

const Field_t HRTIM_TIMC_CMP2CR_fields[] = {
   { "\x0c\xd4\x1d\x60", 0, 16 },  /* CMP2x: Timerx Compare 2 value */
};

const Field_t HRTIM_TIMC_CMP3CR_fields[] = {
   { "\x0c\xd4\x1e\x60", 0, 16 },  /* CMP3x: Timerx Compare 3 value */
};

const Field_t HRTIM_TIMC_CMP4CR_fields[] = {
   { "\x0c\xd4\x1f\x60", 0, 16 },  /* CMP4x: Timerx Compare 4 value */
};

const Field_t HRTIM_TIMC_CPT1CR_fields[] = {
   { "\x0d\x05\x1c\x60", 0, 16 },  /* CPT1x: Timerx Capture 1 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMC_CPT2CR_fields[] = {
   { "\x0d\x05\x1d\x60", 0, 16 },  /* CPT2x: Timerx Capture 2 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMC_DTCR_fields[] = {
   { "\x11\x44\x98", 0, 9 },  /* DTRx: Deadtime Rising value */
   { "\x4c\x45\x12\x60", 9, 1 },  /* SDTRx: Sign Deadtime Rising value */
   { "\x11\x44\x12\x4c\x30", 10, 3 },  /* DTPRSC: Deadtime Prescaler */
   { "\x11\x44\x93\x30\xb6\x00", 14, 1 },  /* DTRSLKx: Deadtime Rising Sign Lock */
   { "\x11\x44\x8c\x2d\x80", 15, 1 },  /* DTRLKx: Deadtime Rising Lock */
   { "\x11\x41\x98", 16, 9 },  /* DTFx: Deadtime Falling value */
   { "\x4c\x45\x06\x60", 25, 1 },  /* SDTFx: Sign Deadtime Falling               value */
   { "\x11\x41\x93\x30\xb6\x00", 30, 1 },  /* DTFSLKx: Deadtime Falling Sign Lock */
   { "\x11\x41\x8c\x2d\x80", 31, 1 },  /* DTFLKx: Deadtime Falling Lock */
};

const Field_t HRTIM_TIMC_SETC1R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: Software Set trigger */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: Timer A resynchronizaton */
   { "\x40\x54\x80", 2, 1 },  /* PER: Timer A Period */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: Timer A compare 1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: Timer A compare 2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: Timer A compare 3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: Timer A compare 4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: Master Period */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: Master Compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: Master Compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: Master Compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: Master Compare 4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: Timer Event 1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: Timer Event 2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: Timer Event 3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: Timer Event 4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: Timer Event 5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: Timer Event 6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: Timer Event 7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: Timer Event 8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: Timer Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: Registers update (transfer preload to               active) */
};

const Field_t HRTIM_TIMC_RSTC1R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMC_SETC2R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: SST */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMC_RSTC2R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMC_EEFCR1_fields[] = {
   { "\x14\x57\x0c\x50\x32\x00", 0, 1 },  /* EE1LTCH: External Event 1 latch */
   { "\x14\x57\x06\x31\x44\x80", 1, 4 },  /* EE1FLTR: External Event 1 filter */
   { "\x14\x57\x4c\x50\x32\x00", 6, 1 },  /* EE2LTCH: External Event 2 latch */
   { "\x14\x57\x46\x31\x44\x80", 7, 4 },  /* EE2FLTR: External Event 2 filter */
   { "\x14\x57\x8c\x50\x32\x00", 12, 1 },  /* EE3LTCH: External Event 3 latch */
   { "\x14\x57\x86\x31\x44\x80", 13, 4 },  /* EE3FLTR: External Event 3 filter */
   { "\x14\x57\xcc\x50\x32\x00", 18, 1 },  /* EE4LTCH: External Event 4 latch */
   { "\x14\x57\xc6\x31\x44\x80", 19, 4 },  /* EE4FLTR: External Event 4 filter */
   { "\x14\x58\x0c\x50\x32\x00", 24, 1 },  /* EE5LTCH: External Event 5 latch */
   { "\x14\x58\x06\x31\x44\x80", 25, 4 },  /* EE5FLTR: External Event 5 filter */
};

const Field_t HRTIM_TIMC_EEFCR2_fields[] = {
   { "\x14\x58\x4c\x50\x32\x00", 0, 1 },  /* EE6LTCH: External Event 6 latch */
   { "\x14\x58\x46\x31\x44\x80", 1, 4 },  /* EE6FLTR: External Event 6 filter */
   { "\x14\x58\x8c\x50\x32\x00", 6, 1 },  /* EE7LTCH: External Event 7 latch */
   { "\x14\x58\x86\x31\x44\x80", 7, 4 },  /* EE7FLTR: External Event 7 filter */
   { "\x14\x58\xcc\x50\x32\x00", 12, 1 },  /* EE8LTCH: External Event 8 latch */
   { "\x14\x58\xc6\x31\x44\x80", 13, 4 },  /* EE8FLTR: External Event 8 filter */
   { "\x14\x59\x0c\x50\x32\x00", 18, 1 },  /* EE9LTCH: External Event 9 latch */
   { "\x14\x59\x06\x31\x44\x80", 19, 4 },  /* EE9FLTR: External Event 9 filter */
   { "\x14\x57\x1b\x31\x40\xc8", 24, 1 },  /* EE10LTCH: External Event 10 latch */
   { "\x14\x57\x1b\x18\xc5\x12", 25, 4 },  /* EE10FLTR: External Event 10 filter */
};

const Field_t HRTIM_TIMC_RSTCR_fields[] = {
   { "\x50\x93\x46\x0c\xd4\x1c", 0, 1 },  /* TIMFCMP1: Timer A Update reset */
   { "\x55\x01\x14", 1, 1 },  /* UPDT: Timer A Update reset */
   { "\x0c\xd4\x1d", 2, 1 },  /* CMP2: Timer A compare 2 reset */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Timer A compare 4 reset */
   { "\x35\x35\x10\x15\x20", 4, 1 },  /* MSTPER: Master timer Period */
   { "\x35\x35\x03\x35\x07\x00", 5, 1 },  /* MSTCMP1: Master compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 6, 1 },  /* MSTCMP2: Master compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 7, 1 },  /* MSTCMP3: Master compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 8, 1 },  /* MSTCMP4: Master compare 4 */
   { "\x15\x85\x05\x58\xe5\x1c", 9, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 10, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 11, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 12, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 13, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 14, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 15, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 16, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 17, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 18, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x50\x93\x41\x0c\xd4\x1c", 19, 1 },  /* TIMACMP1: Timer A Compare 1 */
   { "\x50\x93\x41\x0c\xd4\x1d", 20, 1 },  /* TIMACMP2: Timer A Compare 2 */
   { "\x50\x93\x41\x0c\xd4\x1f", 21, 1 },  /* TIMACMP4: Timer A Compare 4 */
   { "\x50\x93\x42\x0c\xd4\x1c", 22, 1 },  /* TIMBCMP1: Timer B Compare 1 */
   { "\x50\x93\x42\x0c\xd4\x1d", 23, 1 },  /* TIMBCMP2: Timer B Compare 2 */
   { "\x50\x93\x42\x0c\xd4\x1f", 24, 1 },  /* TIMBCMP4: Timer B Compare 4 */
   { "\x50\x93\x44\x0c\xd4\x1c", 25, 1 },  /* TIMDCMP1: Timer D Compare 1 */
   { "\x50\x93\x44\x0c\xd4\x1d", 26, 1 },  /* TIMDCMP2: Timer D Compare 2 */
   { "\x50\x93\x44\x0c\xd4\x1f", 27, 1 },  /* TIMDCMP4: Timer D Compare 4 */
   { "\x50\x93\x45\x0c\xd4\x1c", 28, 1 },  /* TIMECMP1: Timer E Compare 1 */
   { "\x50\x93\x45\x0c\xd4\x1d", 29, 1 },  /* TIMECMP2: Timer E Compare 2 */
   { "\x50\x93\x45\x0c\xd4\x1f", 30, 1 },  /* TIMECMP4: Timer E Compare 4 */
   { "\x50\x93\x46\x0d\x03\x5d", 31, 1 },  /* TIMFCPM2: Timer F Compare 2 */
};

const Field_t HRTIM_TIMC_CHPCR_fields[] = {
   { "\x0c\x84\x06\x49\x10", 0, 4 },  /* CHPFRQ: Timerx carrier frequency               value */
   { "\x0c\x84\x04\x51\x90", 4, 3 },  /* CHPDTY: Timerx chopper duty cycle               value */
   { "\x4d\x44\x94\x41\x70", 7, 4 },  /* STRTPW: STRTPW */
};

const Field_t HRTIM_TIMC_CPT1CCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x67\x13\x15\x40", 20, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 21, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 22, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 23, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMC_CPT2CCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x67\x13\x15\x40", 20, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 21, 1 },  /* TF1RST: TF1RST */
   { "\x50\x67\x03\x35\x07\x00", 22, 1 },  /* TF1CMP1: TF1CMP1 */
   { "\x50\x67\x03\x35\x07\x40", 23, 1 },  /* TF1CMP2: TF1CMP2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMC_OUTCR_fields[] = {
   { "\x40\xf3\x1c", 1, 1 },  /* POL1: Output 1 polarity */
   { "\x24\x43\x05\x35\xc0", 2, 1 },  /* IDLEM1: Output 1 Idle mode */
   { "\x24\x43\x05\x4d\xc0", 3, 1 },  /* IDLES1: Output 1 Idle State */
   { "\x18\x15\x4c\x51\xc0", 4, 2 },  /* FAULT1: Output 1 Fault state */
   { "\x0c\x84\x1c", 6, 1 },  /* CHP1: Output 1 Chopper enable */
   { "\x10\x91\x0c\x70", 7, 1 },  /* DIDL1: Output 1 Deadtime upon burst mode Idle               entry */
   { "\x11\x41\x4e", 8, 1 },  /* DTEN: Deadtime enable */
   { "\x10\xc6\x50\x49\x41\x4e", 9, 1 },  /* DLYPRTEN: Delayed Protection Enable */
   { "\x10\xc6\x50\x49\x40", 10, 3 },  /* DLYPRT: Delayed Protection */
   { "\x08\x90\x52", 14, 1 },  /* BIAR: Balanced Idle Automatic               Resume */
   { "\x40\xf3\x1d", 17, 1 },  /* POL2: Output 2 polarity */
   { "\x24\x43\x05\x35\xd0", 18, 1 },  /* IDLEM2: Output 2 Idle mode */
   { "\x24\x43\x05\x4d\xd0", 19, 1 },  /* IDLES2: Output 2 Idle State */
   { "\x18\x15\x4c\x51\xd0", 20, 2 },  /* FAULT2: Output 2 Fault state */
   { "\x0c\x84\x1d", 22, 1 },  /* CHP2: Output 2 Chopper enable */
   { "\x10\x91\x0c\x74", 23, 1 },  /* DIDL2: Output 2 Deadtime upon burst mode Idle               entry */
};

const Field_t HRTIM_TIMC_FLTCR_fields[] = {
   { "\x18\xc5\x1c\x14\xe0", 0, 1 },  /* FLT1EN: Fault 1 enable */
   { "\x18\xc5\x1d\x14\xe0", 1, 1 },  /* FLT2EN: Fault 2 enable */
   { "\x18\xc5\x1e\x14\xe0", 2, 1 },  /* FLT3EN: Fault 3 enable */
   { "\x18\xc5\x1f\x14\xe0", 3, 1 },  /* FLT4EN: Fault 4 enable */
   { "\x18\xc5\x20\x14\xe0", 4, 1 },  /* FLT5EN: Fault 5 enable */
   { "\x18\xc5\x21\x14\xe0", 5, 1 },  /* FLT6EN: Fault 6 enable */
   { "\x18\xc5\x0c\x0c\xb0", 31, 1 },  /* FLTLCK: Fault sources Lock */
};

const Field_t HRTIM_TIMC_TIMCCR2_fields[] = {
   { "\x10\x31\x05", 0, 1 },  /* DCDE: Dual Channel DAC trigger               enable */
   { "\x10\x31\x13", 1, 1 },  /* DCDS: Dual Channel DAC Step               trigger */
   { "\x10\x31\x12", 2, 1 },  /* DCDR: Dual Channel DAC Reset               trigger */
   { "\x54\x43\x40", 4, 1 },  /* UDM: Up-Down Mode */
   { "\x48\xf3\x40", 6, 2 },  /* ROM: Roll-Over Mode */
   { "\x3d\x55\x12\x3c\xd0", 8, 2 },  /* OUTROM: Output Roll-Over Mode */
   { "\x04\x44\x8f\x34", 10, 2 },  /* ADROM: ADC Roll-Over Mode */
   { "\x08\xd4\x8f\x34", 12, 2 },  /* BMROM: Burst Mode Roll-Over Mode */
   { "\x18\x54\x8f\x34", 14, 2 },  /* FEROM: Fault and Event Roll-Over               Mode */
   { "\x1d\x40\xcd\x41\xc0", 16, 1 },  /* GTCMP1: Greater than Compare 1 PWM               mode */
   { "\x1d\x40\xcd\x41\xe0", 17, 1 },  /* GTCMP3: Greater than Compare 3 PWM               mode */
   { "\x51\x21\xc8\x30\x60", 20, 1 },  /* TRGHLF: Triggered-half mode */
};

const Field_t HRTIM_TIMC_CEEFR3_fields[] = {
   { "\x14\x55\x81\x0c\x50", 0, 1 },  /* EEVACE: External Event A Counter               Enable */
   { "\x14\x55\x81\x0d\x21\x53", 1, 1 },  /* EEVACRES: External Event A Counter               Reset */
   { "\x14\x55\x81\x49\x35\x0d", 2, 1 },  /* EEVARSTM: External Event A Reset               Mode */
   { "\x14\x55\x81\x4c\x53\x00", 4, 4 },  /* EEVASEL: External Event A Selection */
   { "\x14\x55\x81\x0c\xe5\x00", 8, 6 },  /* EEVACNT: External Event A counter */
};

const Register_t HRTIM_TIMC_registers[] = {
   {"\x50\x93\x43\x0d\x20", 0, 32, 0, HRTIM_TIMC_TIMCCR_fields, 22}, /* TIMCCR: Timerx Control Register */
   {"\x50\x93\x43\x25\x34\x80", 4, 32, 0, HRTIM_TIMC_TIMCISR_fields, 20}, /* TIMCISR: Timerx Interrupt Status           Register */
   {"\x50\x93\x43\x24\x34\x80", 8, 32, 0, HRTIM_TIMC_TIMCICR_fields, 14}, /* TIMCICR: Timerx Interrupt Clear           Register */
   {"\x50\x93\x43\x10\x91\x52", 12, 32, 0, HRTIM_TIMC_TIMCDIER_fields, 28}, /* TIMCDIER: TIMxDIER */
   {"\x0c\xe5\x03\x48", 16, 32, 0, HRTIM_TIMC_CNTCR_fields, 1}, /* CNTCR: Timerx Counter Register */
   {"\x40\x54\x83\x48", 20, 32, 0, HRTIM_TIMC_PERCR_fields, 1}, /* PERCR: Timerx Period Register */
   {"\x48\x54\x03\x48", 24, 32, 0, HRTIM_TIMC_REPCR_fields, 1}, /* REPCR: Timerx Repetition Register */
   {"\x0c\xd4\x1c\x0d\x20", 28, 32, 0, HRTIM_TIMC_CMP1CR_fields, 1}, /* CMP1CR: Timerx Compare 1 Register */
   {"\x0c\xd4\x1c\x0c\x34\x80", 32, 32, 0, HRTIM_TIMC_CMP1CCR_fields, 2}, /* CMP1CCR: Timerx Compare 1 Compound           Register */
   {"\x0c\xd4\x1d\x0d\x20", 36, 32, 0, HRTIM_TIMC_CMP2CR_fields, 1}, /* CMP2CR: Timerx Compare 2 Register */
   {"\x0c\xd4\x1e\x0d\x20", 40, 32, 0, HRTIM_TIMC_CMP3CR_fields, 1}, /* CMP3CR: Timerx Compare 3 Register */
   {"\x0c\xd4\x1f\x0d\x20", 44, 32, 0, HRTIM_TIMC_CMP4CR_fields, 1}, /* CMP4CR: Timerx Compare 4 Register */
   {"\x0d\x05\x1c\x0d\x20", 48, 32, 0, HRTIM_TIMC_CPT1CR_fields, 2}, /* CPT1CR: Timerx Capture 1 Register */
   {"\x0d\x05\x1d\x0d\x20", 52, 32, 0, HRTIM_TIMC_CPT2CR_fields, 2}, /* CPT2CR: Timerx Capture 2 Register */
   {"\x11\x40\xd2", 56, 32, 0, HRTIM_TIMC_DTCR_fields, 9}, /* DTCR: Timerx Deadtime Register */
   {"\x4c\x55\x03\x71\x20", 60, 32, 0, HRTIM_TIMC_SETC1R_fields, 32}, /* SETC1R: Timerx Output1 Set Register */
   {"\x49\x35\x03\x71\x20", 64, 32, 0, HRTIM_TIMC_RSTC1R_fields, 32}, /* RSTC1R: Timerx Output1 Reset Register */
   {"\x4c\x55\x03\x75\x20", 68, 32, 0, HRTIM_TIMC_SETC2R_fields, 32}, /* SETC2R: Timerx Output2 Set Register */
   {"\x49\x35\x03\x75\x20", 72, 32, 0, HRTIM_TIMC_RSTC2R_fields, 32}, /* RSTC2R: Timerx Output2 Reset Register */
   {"\x14\x51\x83\x49\xc0", 76, 32, 0, HRTIM_TIMC_EEFCR1_fields, 10}, /* EEFCR1: Timerx External Event Filtering Register           1 */
   {"\x14\x51\x83\x49\xd0", 80, 32, 0, HRTIM_TIMC_EEFCR2_fields, 10}, /* EEFCR2: Timerx External Event Filtering Register           2 */
   {"\x49\x35\x03\x48", 84, 32, 0, HRTIM_TIMC_RSTCR_fields, 32}, /* RSTCR: TimerA Reset Register */
   {"\x0c\x84\x03\x48", 88, 32, 0, HRTIM_TIMC_CHPCR_fields, 3}, /* CHPCR: Timerx Chopper Register */
   {"\x0d\x05\x1c\x0c\x34\x80", 92, 32, 0, HRTIM_TIMC_CPT1CCR_fields, 32}, /* CPT1CCR: Timerx Capture 2 Control           Register */
   {"\x0d\x05\x1d\x0c\x34\x80", 96, 32, 0, HRTIM_TIMC_CPT2CCR_fields, 32}, /* CPT2CCR: CPT2xCR */
   {"\x3d\x55\x03\x48", 100, 32, 0, HRTIM_TIMC_OUTCR_fields, 16}, /* OUTCR: Timerx Output Register */
   {"\x18\xc5\x03\x48", 104, 32, 0, HRTIM_TIMC_FLTCR_fields, 7}, /* FLTCR: Timerx Fault Register */
   {"\x50\x93\x43\x0d\x27\x40", 108, 32, 0, HRTIM_TIMC_TIMCCR2_fields, 12}, /* TIMCCR2: HRTIM Timerx Control Register           2 */
   {"\x0c\x51\x46\x49\xe0", 112, 32, 0, HRTIM_TIMC_CEEFR3_fields, 5}, /* CEEFR3: HRTIM Timerx External Event Filtering           Register 3 */
};

const Field_t HRTIM_TIMD_TIMDCR_fields[] = {
   { "\x0c\xb9\x50\x4c\x36\x00", 0, 3 },  /* CK_PSCx: HRTIM Timer x Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x41\x32\x10\x30\xc0", 6, 1 },  /* PSHPLL: Push-Pull mode enable */
   { "\x24\xe5\x0c\x58\x40", 7, 2 },  /* INTLVD: Interleaved mode */
   { "\x49\x36\x4e\x0d\x50", 9, 1 },  /* RSYNCU: Re-Synchronized Update */
   { "\x4d\x93\x83\x49\x35\x18", 10, 1 },  /* SYNCRSTx: Synchronization Resets Timer               x */
   { "\x4d\x93\x83\x4d\x44\x94\x60", 11, 1 },  /* SYNCSTRTx: Synchronization Starts Timer               x */
   { "\x10\x53\x03\x35\x07\x40", 12, 2 },  /* DELCMP2: Delayed CMP2 mode */
   { "\x10\x53\x03\x35\x07\xc0", 14, 2 },  /* DELCMP4: Delayed CMP4 mode */
   { "\x50\x65\x40", 16, 1 },  /* TFU: TFU */
   { "\x51\x84\x85\x41\x50", 17, 1 },  /* TxREPU: Timer x Repetition update */
   { "\x51\x84\x93\x51\x50", 18, 1 },  /* TxRSTU: Timerx reset update */
   { "\x50\x15\x40", 19, 1 },  /* TAU: TAU */
   { "\x50\x25\x40", 20, 1 },  /* TBU: TBU */
   { "\x50\x35\x40", 21, 1 },  /* TCU: TCU */
   { "\x50\x55\x40", 23, 1 },  /* TEU: TEU */
   { "\x35\x35\x15", 24, 1 },  /* MSTU: Master Timer update */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x55\x01\x07\x05\x40", 28, 4 },  /* UPDGAT: Update Gating */
};

const Field_t HRTIM_TIMD_TIMDISR_fields[] = {
   { "\x0c\xd4\x1c", 0, 1 },  /* CMP1: Compare 1 Interrupt Flag */
   { "\x0c\xd4\x1d", 1, 1 },  /* CMP2: Compare 2 Interrupt Flag */
   { "\x0c\xd4\x1e", 2, 1 },  /* CMP3: Compare 3 Interrupt Flag */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Compare 4 Interrupt Flag */
   { "\x48\x54\x00", 4, 1 },  /* REP: Repetition Interrupt Flag */
   { "\x55\x01\x00", 6, 1 },  /* UPD: Update Interrupt Flag */
   { "\x0d\x05\x1c", 7, 1 },  /* CPT1: Capture1 Interrupt Flag */
   { "\x0d\x05\x1d", 8, 1 },  /* CPT2: Capture2 Interrupt Flag */
   { "\x4c\x55\x18\x70", 9, 1 },  /* SETx1: Output 1 Set Interrupt               Flag */
   { "\x49\x35\x18\x70", 10, 1 },  /* RSTx1: Output 1 Reset Interrupt               Flag */
   { "\x4c\x55\x18\x74", 11, 1 },  /* SETx2: Output 2 Set Interrupt               Flag */
   { "\x49\x35\x18\x74", 12, 1 },  /* RSTx2: Output 2 Reset Interrupt               Flag */
   { "\x49\x35\x00", 13, 1 },  /* RST: Reset Interrupt Flag */
   { "\x10\xc6\x50\x49\x40", 14, 1 },  /* DLYPRT: Delayed Protection Flag */
   { "\x0d\x04\x13\x50\x15\x00", 16, 1 },  /* CPPSTAT: Current Push Pull Status */
   { "\x25\x04\x13\x50\x15\x00", 17, 1 },  /* IPPSTAT: Idle Push Pull Status */
   { "\x3d\xc4\xd4\x05\x40", 18, 1 },  /* O1STAT: Output 1 State */
   { "\x3d\xd4\xd4\x05\x40", 19, 1 },  /* O2STAT: Output 2 State */
   { "\x3d\xc0\xd0\x64", 20, 1 },  /* O1CPY: Output 1 Copy */
   { "\x3d\xd0\xd0\x64", 21, 1 },  /* O2CPY: Output 2 Copy */
};

const Field_t HRTIM_TIMD_TIMDICR_fields[] = {
   { "\x0c\xd4\x1c\x0c", 0, 1 },  /* CMP1C: Compare 1 Interrupt flag               Clear */
   { "\x0c\xd4\x1d\x0c", 1, 1 },  /* CMP2C: Compare 2 Interrupt flag               Clear */
   { "\x0c\xd4\x1e\x0c", 2, 1 },  /* CMP3C: Compare 3 Interrupt flag               Clear */
   { "\x0c\xd4\x1f\x0c", 3, 1 },  /* CMP4C: Compare 4 Interrupt flag               Clear */
   { "\x48\x54\x03", 4, 1 },  /* REPC: Repetition Interrupt flag               Clear */
   { "\x55\x01\x03", 6, 1 },  /* UPDC: Update Interrupt flag               Clear */
   { "\x0d\x05\x1c\x0c", 7, 1 },  /* CPT1C: Capture1 Interrupt flag               Clear */
   { "\x0d\x05\x1d\x0c", 8, 1 },  /* CPT2C: Capture2 Interrupt flag               Clear */
   { "\x4c\x55\x1c\x60\x30", 9, 1 },  /* SET1xC: Output 1 Set flag Clear */
   { "\x49\x35\x18\x70\x30", 10, 1 },  /* RSTx1C: Output 1 Reset flag Clear */
   { "\x4c\x55\x1d\x60\x30", 11, 1 },  /* SET2xC: Output 2 Set flag Clear */
   { "\x49\x35\x18\x74\x30", 12, 1 },  /* RSTx2C: Output 2 Reset flag Clear */
   { "\x49\x35\x03", 13, 1 },  /* RSTC: Reset Interrupt flag Clear */
   { "\x10\xc6\x50\x49\x40\xc0", 14, 1 },  /* DLYPRTC: Delayed Protection Flag               Clear */
};

const Field_t HRTIM_TIMD_TIMDDIER_fields[] = {
   { "\x0c\xd4\x1c\x24\x50", 0, 1 },  /* CMP1IE: CMP1IE */
   { "\x0c\xd4\x1d\x24\x50", 1, 1 },  /* CMP2IE: CMP2IE */
   { "\x0c\xd4\x1e\x24\x50", 2, 1 },  /* CMP3IE: CMP3IE */
   { "\x0c\xd4\x1f\x24\x50", 3, 1 },  /* CMP4IE: CMP4IE */
   { "\x48\x54\x09\x14", 4, 1 },  /* REPIE: REPIE */
   { "\x55\x01\x09\x14", 6, 1 },  /* UPDIE: UPDIE */
   { "\x0d\x05\x1c\x24\x50", 7, 1 },  /* CPT1IE: CPT1IE */
   { "\x0d\x05\x1d\x24\x50", 8, 1 },  /* CPT2IE: CPT2IE */
   { "\x4c\x55\x1c\x60\x91\x40", 9, 1 },  /* SET1xIE: SET1xIE */
   { "\x49\x35\x18\x70\x91\x40", 10, 1 },  /* RSTx1IE: RSTx1IE */
   { "\x4c\x55\x18\x74\x91\x40", 11, 1 },  /* SETx2IE: SETx2IE */
   { "\x49\x35\x18\x74\x91\x40", 12, 1 },  /* RSTx2IE: RSTx2IE */
   { "\x49\x35\x09\x14", 13, 1 },  /* RSTIE: RSTIE */
   { "\x10\xc6\x50\x49\x42\x45", 14, 1 },  /* DLYPRTIE: DLYPRTIE */
   { "\x0c\xd4\x1c\x10\x50", 16, 1 },  /* CMP1DE: CMP1DE */
   { "\x0c\xd4\x1d\x10\x50", 17, 1 },  /* CMP2DE: CMP2DE */
   { "\x0c\xd4\x1e\x10\x50", 18, 1 },  /* CMP3DE: CMP3DE */
   { "\x0c\xd4\x1f\x10\x50", 19, 1 },  /* CMP4DE: CMP4DE */
   { "\x48\x54\x04\x14", 20, 1 },  /* REPDE: REPDE */
   { "\x55\x01\x04\x14", 22, 1 },  /* UPDDE: UPDDE */
   { "\x0d\x05\x1c\x10\x50", 23, 1 },  /* CPT1DE: CPT1DE */
   { "\x0d\x05\x1d\x10\x50", 24, 1 },  /* CPT2DE: CPT2DE */
   { "\x4c\x55\x1c\x60\x41\x40", 25, 1 },  /* SET1xDE: SET1xDE */
   { "\x49\x35\x18\x70\x41\x40", 26, 1 },  /* RSTx1DE: RSTx1DE */
   { "\x4c\x55\x18\x74\x41\x40", 27, 1 },  /* SETx2DE: SETx2DE */
   { "\x49\x35\x18\x74\x41\x40", 28, 1 },  /* RSTx2DE: RSTx2DE */
   { "\x49\x35\x04\x14", 29, 1 },  /* RSTDE: RSTDE */
   { "\x10\xc6\x50\x49\x41\x05", 30, 1 },  /* DLYPRTDE: DLYPRTDE */
};

const Field_t HRTIM_TIMD_CNTDR_fields[] = {
   { "\x0c\xe5\x18", 0, 16 },  /* CNTx: Timerx Counter value */
};

const Field_t HRTIM_TIMD_PERDR_fields[] = {
   { "\x40\x54\x98", 0, 16 },  /* PERx: Timerx Period value */
};

const Field_t HRTIM_TIMD_REPDR_fields[] = {
   { "\x48\x54\x18", 0, 8 },  /* REPx: Timerx Repetition counter               value */
};

const Field_t HRTIM_TIMD_CMP1DR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
};

const Field_t HRTIM_TIMD_CMP1CDR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
   { "\x48\x54\x18", 16, 8 },  /* REPx: Timerx Repetition value (aliased from               HRTIM_REPx register) */
};

const Field_t HRTIM_TIMD_CMP2DR_fields[] = {
   { "\x0c\xd4\x1d\x60", 0, 16 },  /* CMP2x: Timerx Compare 2 value */
};

const Field_t HRTIM_TIMD_CMP3DR_fields[] = {
   { "\x0c\xd4\x1e\x60", 0, 16 },  /* CMP3x: Timerx Compare 3 value */
};

const Field_t HRTIM_TIMD_CMP4DR_fields[] = {
   { "\x0c\xd4\x1f\x60", 0, 16 },  /* CMP4x: Timerx Compare 4 value */
};

const Field_t HRTIM_TIMD_CPT1DR_fields[] = {
   { "\x0d\x05\x1c\x60", 0, 16 },  /* CPT1x: Timerx Capture 1 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMD_CPT2DR_fields[] = {
   { "\x0d\x05\x1d\x60", 0, 16 },  /* CPT2x: Timerx Capture 2 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMD_DTDR_fields[] = {
   { "\x11\x44\x98", 0, 9 },  /* DTRx: Deadtime Rising value */
   { "\x4c\x45\x12\x60", 9, 1 },  /* SDTRx: Sign Deadtime Rising value */
   { "\x11\x44\x12\x4c\x30", 10, 3 },  /* DTPRSC: Deadtime Prescaler */
   { "\x11\x44\x93\x30\xb6\x00", 14, 1 },  /* DTRSLKx: Deadtime Rising Sign Lock */
   { "\x11\x44\x8c\x2d\x80", 15, 1 },  /* DTRLKx: Deadtime Rising Lock */
   { "\x11\x41\x98", 16, 9 },  /* DTFx: Deadtime Falling value */
   { "\x4c\x45\x06\x60", 25, 1 },  /* SDTFx: Sign Deadtime Falling               value */
   { "\x11\x41\x93\x30\xb6\x00", 30, 1 },  /* DTFSLKx: Deadtime Falling Sign Lock */
   { "\x11\x41\x8c\x2d\x80", 31, 1 },  /* DTFLKx: Deadtime Falling Lock */
};

const Field_t HRTIM_TIMD_SETD1R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: Software Set trigger */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: Timer A resynchronizaton */
   { "\x40\x54\x80", 2, 1 },  /* PER: Timer A Period */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: Timer A compare 1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: Timer A compare 2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: Timer A compare 3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: Timer A compare 4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: Master Period */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: Master Compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: Master Compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: Master Compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: Master Compare 4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: Timer Event 1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: Timer Event 2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: Timer Event 3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: Timer Event 4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: Timer Event 5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: Timer Event 6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: Timer Event 7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: Timer Event 8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: Timer Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: Registers update (transfer preload to               active) */
};

const Field_t HRTIM_TIMD_RSTD1R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMD_SETD2R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: SST */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMD_RSTD2R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMD_EEFDR1_fields[] = {
   { "\x14\x57\x0c\x50\x32\x00", 0, 1 },  /* EE1LTCH: External Event 1 latch */
   { "\x14\x57\x06\x31\x44\x80", 1, 4 },  /* EE1FLTR: External Event 1 filter */
   { "\x14\x57\x4c\x50\x32\x00", 6, 1 },  /* EE2LTCH: External Event 2 latch */
   { "\x14\x57\x46\x31\x44\x80", 7, 4 },  /* EE2FLTR: External Event 2 filter */
   { "\x14\x57\x8c\x50\x32\x00", 12, 1 },  /* EE3LTCH: External Event 3 latch */
   { "\x14\x57\x86\x31\x44\x80", 13, 4 },  /* EE3FLTR: External Event 3 filter */
   { "\x14\x57\xcc\x50\x32\x00", 18, 1 },  /* EE4LTCH: External Event 4 latch */
   { "\x14\x57\xc6\x31\x44\x80", 19, 4 },  /* EE4FLTR: External Event 4 filter */
   { "\x14\x58\x0c\x50\x32\x00", 24, 1 },  /* EE5LTCH: External Event 5 latch */
   { "\x14\x58\x06\x31\x44\x80", 25, 4 },  /* EE5FLTR: External Event 5 filter */
};

const Field_t HRTIM_TIMD_EEFDR2_fields[] = {
   { "\x14\x58\x4c\x50\x32\x00", 0, 1 },  /* EE6LTCH: External Event 6 latch */
   { "\x14\x58\x46\x31\x44\x80", 1, 4 },  /* EE6FLTR: External Event 6 filter */
   { "\x14\x58\x8c\x50\x32\x00", 6, 1 },  /* EE7LTCH: External Event 7 latch */
   { "\x14\x58\x86\x31\x44\x80", 7, 4 },  /* EE7FLTR: External Event 7 filter */
   { "\x14\x58\xcc\x50\x32\x00", 12, 1 },  /* EE8LTCH: External Event 8 latch */
   { "\x14\x58\xc6\x31\x44\x80", 13, 4 },  /* EE8FLTR: External Event 8 filter */
   { "\x14\x59\x0c\x50\x32\x00", 18, 1 },  /* EE9LTCH: External Event 9 latch */
   { "\x14\x59\x06\x31\x44\x80", 19, 4 },  /* EE9FLTR: External Event 9 filter */
   { "\x14\x57\x1b\x31\x40\xc8", 24, 1 },  /* EE10LTCH: External Event 10 latch */
   { "\x14\x57\x1b\x18\xc5\x12", 25, 4 },  /* EE10FLTR: External Event 10 filter */
};

const Field_t HRTIM_TIMD_RSTDR_fields[] = {
   { "\x50\x93\x46\x0c\xd4\x1c", 0, 1 },  /* TIMFCMP1: Timer A Update reset */
   { "\x55\x01\x14", 1, 1 },  /* UPDT: Timer A Update reset */
   { "\x0c\xd4\x1d", 2, 1 },  /* CMP2: Timer A compare 2 reset */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Timer A compare 4 reset */
   { "\x35\x35\x10\x15\x20", 4, 1 },  /* MSTPER: Master timer Period */
   { "\x35\x35\x03\x35\x07\x00", 5, 1 },  /* MSTCMP1: Master compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 6, 1 },  /* MSTCMP2: Master compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 7, 1 },  /* MSTCMP3: Master compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 8, 1 },  /* MSTCMP4: Master compare 4 */
   { "\x15\x85\x05\x58\xe5\x1c", 9, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 10, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 11, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 12, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 13, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 14, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 15, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 16, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 17, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 18, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x50\x93\x41\x0c\xd4\x1c", 19, 1 },  /* TIMACMP1: Timer A Compare 1 */
   { "\x50\x93\x41\x0c\xd4\x1d", 20, 1 },  /* TIMACMP2: Timer A Compare 2 */
   { "\x50\x93\x41\x0c\xd4\x1f", 21, 1 },  /* TIMACMP4: Timer A Compare 4 */
   { "\x50\x93\x42\x0c\xd4\x1c", 22, 1 },  /* TIMBCMP1: Timer B Compare 1 */
   { "\x50\x93\x42\x0c\xd4\x1d", 23, 1 },  /* TIMBCMP2: Timer B Compare 2 */
   { "\x50\x93\x42\x0c\xd4\x1f", 24, 1 },  /* TIMBCMP4: Timer B Compare 4 */
   { "\x50\x93\x43\x0c\xd4\x1c", 25, 1 },  /* TIMCCMP1: Timer C Compare 1 */
   { "\x50\x93\x43\x0c\xd4\x1d", 26, 1 },  /* TIMCCMP2: Timer C Compare 2 */
   { "\x50\x93\x43\x0c\xd4\x1f", 27, 1 },  /* TIMCCMP4: Timer C Compare 4 */
   { "\x50\x93\x45\x0c\xd4\x1c", 28, 1 },  /* TIMECMP1: Timer E Compare 1 */
   { "\x50\x93\x45\x0c\xd4\x1d", 29, 1 },  /* TIMECMP2: Timer E Compare 2 */
   { "\x50\x93\x45\x0c\xd4\x1f", 30, 1 },  /* TIMECMP4: Timer E Compare 4 */
   { "\x50\x93\x46\x0d\x03\x5d", 31, 1 },  /* TIMFCPM2: Timer F Compare 2 */
};

const Field_t HRTIM_TIMD_CHPDR_fields[] = {
   { "\x0c\x84\x06\x49\x10", 0, 4 },  /* CHPFRQ: Timerx carrier frequency               value */
   { "\x0c\x84\x04\x51\x90", 4, 3 },  /* CHPDTY: Timerx chopper duty cycle               value */
   { "\x4d\x44\x94\x41\x70", 7, 4 },  /* STRTPW: STRTPW */
};

const Field_t HRTIM_TIMD_CPT1DCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x67\x13\x15\x40", 24, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 25, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 26, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 27, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMD_CPT2DCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x67\x13\x15\x40", 24, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 25, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 26, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 27, 1 },  /* TFCMP2: TFCMP2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: Timer E output 1 Set */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: Timer E output 1 Reset */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: Timer E Compare 1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: Timer E Compare 2 */
};

const Field_t HRTIM_TIMD_OUTDR_fields[] = {
   { "\x40\xf3\x1c", 1, 1 },  /* POL1: Output 1 polarity */
   { "\x24\x43\x05\x35\xc0", 2, 1 },  /* IDLEM1: Output 1 Idle mode */
   { "\x24\x43\x05\x4d\xc0", 3, 1 },  /* IDLES1: Output 1 Idle State */
   { "\x18\x15\x4c\x51\xc0", 4, 2 },  /* FAULT1: Output 1 Fault state */
   { "\x0c\x84\x1c", 6, 1 },  /* CHP1: Output 1 Chopper enable */
   { "\x10\x91\x0c\x70", 7, 1 },  /* DIDL1: Output 1 Deadtime upon burst mode Idle               entry */
   { "\x11\x41\x4e", 8, 1 },  /* DTEN: Deadtime enable */
   { "\x10\xc6\x50\x49\x41\x4e", 9, 1 },  /* DLYPRTEN: Delayed Protection Enable */
   { "\x10\xc6\x50\x49\x40", 10, 3 },  /* DLYPRT: Delayed Protection */
   { "\x08\x90\x52", 14, 1 },  /* BIAR: Balanced Idle Automatic               Resume */
   { "\x40\xf3\x1d", 17, 1 },  /* POL2: Output 2 polarity */
   { "\x24\x43\x05\x35\xd0", 18, 1 },  /* IDLEM2: Output 2 Idle mode */
   { "\x24\x43\x05\x4d\xd0", 19, 1 },  /* IDLES2: Output 2 Idle State */
   { "\x18\x15\x4c\x51\xd0", 20, 2 },  /* FAULT2: Output 2 Fault state */
   { "\x0c\x84\x1d", 22, 1 },  /* CHP2: Output 2 Chopper enable */
   { "\x10\x91\x0c\x74", 23, 1 },  /* DIDL2: Output 2 Deadtime upon burst mode Idle               entry */
};

const Field_t HRTIM_TIMD_FLTDR_fields[] = {
   { "\x18\xc5\x1c\x14\xe0", 0, 1 },  /* FLT1EN: Fault 1 enable */
   { "\x18\xc5\x1d\x14\xe0", 1, 1 },  /* FLT2EN: Fault 2 enable */
   { "\x18\xc5\x1e\x14\xe0", 2, 1 },  /* FLT3EN: Fault 3 enable */
   { "\x18\xc5\x1f\x14\xe0", 3, 1 },  /* FLT4EN: Fault 4 enable */
   { "\x18\xc5\x20\x14\xe0", 4, 1 },  /* FLT5EN: Fault 5 enable */
   { "\x18\xc5\x21\x14\xe0", 5, 1 },  /* FLT6EN: Fault 6 enable */
   { "\x18\xc5\x0c\x0c\xb0", 31, 1 },  /* FLTLCK: Fault sources Lock */
};

const Field_t HRTIM_TIMD_TIMDCR2_fields[] = {
   { "\x10\x31\x05", 0, 1 },  /* DCDE: Dual Channel DAC trigger               enable */
   { "\x10\x31\x13", 1, 1 },  /* DCDS: Dual Channel DAC Step               trigger */
   { "\x10\x31\x12", 2, 1 },  /* DCDR: Dual Channel DAC Reset               trigger */
   { "\x54\x43\x40", 4, 1 },  /* UDM: Up-Down Mode */
   { "\x48\xf3\x40", 6, 2 },  /* ROM: Roll-Over Mode */
   { "\x3d\x55\x12\x3c\xd0", 8, 2 },  /* OUTROM: Output Roll-Over Mode */
   { "\x04\x44\x8f\x34", 10, 2 },  /* ADROM: ADC Roll-Over Mode */
   { "\x08\xd4\x8f\x34", 12, 2 },  /* BMROM: Burst Mode Roll-Over Mode */
   { "\x18\x54\x8f\x34", 14, 2 },  /* FEROM: Fault and Event Roll-Over               Mode */
   { "\x1d\x40\xcd\x41\xc0", 16, 1 },  /* GTCMP1: Greater than Compare 1 PWM               mode */
   { "\x1d\x40\xcd\x41\xe0", 17, 1 },  /* GTCMP3: Greater than Compare 3 PWM               mode */
   { "\x51\x21\xc8\x30\x60", 20, 1 },  /* TRGHLF: Triggered-half mode */
};

const Field_t HRTIM_TIMD_DEEFR3_fields[] = {
   { "\x14\x55\x81\x0c\x50", 0, 1 },  /* EEVACE: External Event A Counter               Enable */
   { "\x14\x55\x81\x0d\x21\x53", 1, 1 },  /* EEVACRES: External Event A Counter               Reset */
   { "\x14\x55\x81\x49\x35\x0d", 2, 1 },  /* EEVARSTM: External Event A Reset               Mode */
   { "\x14\x55\x81\x4c\x53\x00", 4, 4 },  /* EEVASEL: External Event A Selection */
   { "\x14\x55\x81\x0c\xe5\x00", 8, 6 },  /* EEVACNT: External Event A counter */
};

const Register_t HRTIM_TIMD_registers[] = {
   {"\x50\x93\x44\x0d\x20", 0, 32, 0, HRTIM_TIMD_TIMDCR_fields, 22}, /* TIMDCR: Timerx Control Register */
   {"\x50\x93\x44\x25\x34\x80", 4, 32, 0, HRTIM_TIMD_TIMDISR_fields, 20}, /* TIMDISR: Timerx Interrupt Status           Register */
   {"\x50\x93\x44\x24\x34\x80", 8, 32, 0, HRTIM_TIMD_TIMDICR_fields, 14}, /* TIMDICR: Timerx Interrupt Clear           Register */
   {"\x50\x93\x44\x10\x91\x52", 12, 32, 0, HRTIM_TIMD_TIMDDIER_fields, 28}, /* TIMDDIER: TIMxDIER */
   {"\x0c\xe5\x04\x48", 16, 32, 0, HRTIM_TIMD_CNTDR_fields, 1}, /* CNTDR: Timerx Counter Register */
   {"\x40\x54\x84\x48", 20, 32, 0, HRTIM_TIMD_PERDR_fields, 1}, /* PERDR: Timerx Period Register */
   {"\x48\x54\x04\x48", 24, 32, 0, HRTIM_TIMD_REPDR_fields, 1}, /* REPDR: Timerx Repetition Register */
   {"\x0c\xd4\x1c\x11\x20", 28, 32, 0, HRTIM_TIMD_CMP1DR_fields, 1}, /* CMP1DR: Timerx Compare 1 Register */
   {"\x0c\xd4\x1c\x0c\x44\x80", 32, 32, 0, HRTIM_TIMD_CMP1CDR_fields, 2}, /* CMP1CDR: Timerx Compare 1 Compound           Register */
   {"\x0c\xd4\x1d\x11\x20", 36, 32, 0, HRTIM_TIMD_CMP2DR_fields, 1}, /* CMP2DR: Timerx Compare 2 Register */
   {"\x0c\xd4\x1e\x11\x20", 40, 32, 0, HRTIM_TIMD_CMP3DR_fields, 1}, /* CMP3DR: Timerx Compare 3 Register */
   {"\x0c\xd4\x1f\x11\x20", 44, 32, 0, HRTIM_TIMD_CMP4DR_fields, 1}, /* CMP4DR: Timerx Compare 4 Register */
   {"\x0d\x05\x1c\x11\x20", 48, 32, 0, HRTIM_TIMD_CPT1DR_fields, 2}, /* CPT1DR: Timerx Capture 1 Register */
   {"\x0d\x05\x1d\x11\x20", 52, 32, 0, HRTIM_TIMD_CPT2DR_fields, 2}, /* CPT2DR: Timerx Capture 2 Register */
   {"\x11\x41\x12", 56, 32, 0, HRTIM_TIMD_DTDR_fields, 9}, /* DTDR: Timerx Deadtime Register */
   {"\x4c\x55\x04\x71\x20", 60, 32, 0, HRTIM_TIMD_SETD1R_fields, 32}, /* SETD1R: Timerx Output1 Set Register */
   {"\x49\x35\x04\x71\x20", 64, 32, 0, HRTIM_TIMD_RSTD1R_fields, 32}, /* RSTD1R: Timerx Output1 Reset Register */
   {"\x4c\x55\x04\x75\x20", 68, 32, 0, HRTIM_TIMD_SETD2R_fields, 32}, /* SETD2R: Timerx Output2 Set Register */
   {"\x49\x35\x04\x75\x20", 72, 32, 0, HRTIM_TIMD_RSTD2R_fields, 32}, /* RSTD2R: Timerx Output2 Reset Register */
   {"\x14\x51\x84\x49\xc0", 76, 32, 0, HRTIM_TIMD_EEFDR1_fields, 10}, /* EEFDR1: Timerx External Event Filtering Register           1 */
   {"\x14\x51\x84\x49\xd0", 80, 32, 0, HRTIM_TIMD_EEFDR2_fields, 10}, /* EEFDR2: Timerx External Event Filtering Register           2 */
   {"\x49\x35\x04\x48", 84, 32, 0, HRTIM_TIMD_RSTDR_fields, 32}, /* RSTDR: TimerA Reset Register */
   {"\x0c\x84\x04\x48", 88, 32, 0, HRTIM_TIMD_CHPDR_fields, 3}, /* CHPDR: Timerx Chopper Register */
   {"\x0d\x05\x1c\x10\x34\x80", 92, 32, 0, HRTIM_TIMD_CPT1DCR_fields, 32}, /* CPT1DCR: Timerx Capture 2 Control           Register */
   {"\x0d\x05\x1d\x10\x34\x80", 96, 32, 0, HRTIM_TIMD_CPT2DCR_fields, 32}, /* CPT2DCR: CPT2xCR */
   {"\x3d\x55\x04\x48", 100, 32, 0, HRTIM_TIMD_OUTDR_fields, 16}, /* OUTDR: Timerx Output Register */
   {"\x18\xc5\x04\x48", 104, 32, 0, HRTIM_TIMD_FLTDR_fields, 7}, /* FLTDR: Timerx Fault Register */
   {"\x50\x93\x44\x0d\x27\x40", 108, 32, 0, HRTIM_TIMD_TIMDCR2_fields, 12}, /* TIMDCR2: HRTIM Timerx Control Register           2 */
   {"\x10\x51\x46\x49\xe0", 112, 32, 0, HRTIM_TIMD_DEEFR3_fields, 5}, /* DEEFR3: HRTIM Timerx External Event Filtering           Register 3 */
};

const Field_t HRTIM_TIME_TIMECR_fields[] = {
   { "\x0c\xb9\x50\x4c\x36\x00", 0, 3 },  /* CK_PSCx: HRTIM Timer x Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x41\x32\x10\x30\xc0", 6, 1 },  /* PSHPLL: Push-Pull mode enable */
   { "\x24\xe5\x0c\x58\x40", 7, 2 },  /* INTLVD: Interleaved mode */
   { "\x49\x36\x4e\x0d\x50", 9, 1 },  /* RSYNCU: Re-Synchronized Update */
   { "\x4d\x93\x83\x49\x35\x18", 10, 1 },  /* SYNCRSTx: Synchronization Resets Timer               x */
   { "\x4d\x93\x83\x4d\x44\x94\x60", 11, 1 },  /* SYNCSTRTx: Synchronization Starts Timer               x */
   { "\x10\x53\x03\x35\x07\x40", 12, 2 },  /* DELCMP2: Delayed CMP2 mode */
   { "\x10\x53\x03\x35\x07\xc0", 14, 2 },  /* DELCMP4: Delayed CMP4 mode */
   { "\x50\x65\x40", 16, 1 },  /* TFU: TFU */
   { "\x51\x84\x85\x41\x50", 17, 1 },  /* TxREPU: Timer x Repetition update */
   { "\x51\x84\x93\x51\x50", 18, 1 },  /* TxRSTU: Timerx reset update */
   { "\x50\x15\x40", 19, 1 },  /* TAU: TAU */
   { "\x50\x25\x40", 20, 1 },  /* TBU: TBU */
   { "\x50\x35\x40", 21, 1 },  /* TCU: TCU */
   { "\x50\x45\x40", 22, 1 },  /* TDU: TDU */
   { "\x35\x35\x15", 24, 1 },  /* MSTU: Master Timer update */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x55\x01\x07\x05\x40", 28, 4 },  /* UPDGAT: Update Gating */
};

const Field_t HRTIM_TIME_TIMEISR_fields[] = {
   { "\x0c\xd4\x1c", 0, 1 },  /* CMP1: Compare 1 Interrupt Flag */
   { "\x0c\xd4\x1d", 1, 1 },  /* CMP2: Compare 2 Interrupt Flag */
   { "\x0c\xd4\x1e", 2, 1 },  /* CMP3: Compare 3 Interrupt Flag */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Compare 4 Interrupt Flag */
   { "\x48\x54\x00", 4, 1 },  /* REP: Repetition Interrupt Flag */
   { "\x55\x01\x00", 6, 1 },  /* UPD: Update Interrupt Flag */
   { "\x0d\x05\x1c", 7, 1 },  /* CPT1: Capture1 Interrupt Flag */
   { "\x0d\x05\x1d", 8, 1 },  /* CPT2: Capture2 Interrupt Flag */
   { "\x4c\x55\x18\x70", 9, 1 },  /* SETx1: Output 1 Set Interrupt               Flag */
   { "\x49\x35\x18\x70", 10, 1 },  /* RSTx1: Output 1 Reset Interrupt               Flag */
   { "\x4c\x55\x18\x74", 11, 1 },  /* SETx2: Output 2 Set Interrupt               Flag */
   { "\x49\x35\x18\x74", 12, 1 },  /* RSTx2: Output 2 Reset Interrupt               Flag */
   { "\x49\x35\x00", 13, 1 },  /* RST: Reset Interrupt Flag */
   { "\x10\xc6\x50\x49\x40", 14, 1 },  /* DLYPRT: Delayed Protection Flag */
   { "\x0d\x04\x13\x50\x15\x00", 16, 1 },  /* CPPSTAT: Current Push Pull Status */
   { "\x25\x04\x13\x50\x15\x00", 17, 1 },  /* IPPSTAT: Idle Push Pull Status */
   { "\x3d\xc4\xd4\x05\x40", 18, 1 },  /* O1STAT: Output 1 State */
   { "\x3d\xd4\xd4\x05\x40", 19, 1 },  /* O2STAT: Output 2 State */
   { "\x3d\xc0\xd0\x64", 20, 1 },  /* O1CPY: Output 1 Copy */
   { "\x3d\xd0\xd0\x64", 21, 1 },  /* O2CPY: Output 2 Copy */
};

const Field_t HRTIM_TIME_TIMEICR_fields[] = {
   { "\x0c\xd4\x1c\x0c", 0, 1 },  /* CMP1C: Compare 1 Interrupt flag               Clear */
   { "\x0c\xd4\x1d\x0c", 1, 1 },  /* CMP2C: Compare 2 Interrupt flag               Clear */
   { "\x0c\xd4\x1e\x0c", 2, 1 },  /* CMP3C: Compare 3 Interrupt flag               Clear */
   { "\x0c\xd4\x1f\x0c", 3, 1 },  /* CMP4C: Compare 4 Interrupt flag               Clear */
   { "\x48\x54\x03", 4, 1 },  /* REPC: Repetition Interrupt flag               Clear */
   { "\x55\x01\x03", 6, 1 },  /* UPDC: Update Interrupt flag               Clear */
   { "\x0d\x05\x1c\x0c", 7, 1 },  /* CPT1C: Capture1 Interrupt flag               Clear */
   { "\x0d\x05\x1d\x0c", 8, 1 },  /* CPT2C: Capture2 Interrupt flag               Clear */
   { "\x4c\x55\x1c\x60\x30", 9, 1 },  /* SET1xC: Output 1 Set flag Clear */
   { "\x49\x35\x18\x70\x30", 10, 1 },  /* RSTx1C: Output 1 Reset flag Clear */
   { "\x4c\x55\x1d\x60\x30", 11, 1 },  /* SET2xC: Output 2 Set flag Clear */
   { "\x49\x35\x18\x74\x30", 12, 1 },  /* RSTx2C: Output 2 Reset flag Clear */
   { "\x49\x35\x03", 13, 1 },  /* RSTC: Reset Interrupt flag Clear */
   { "\x10\xc6\x50\x49\x40\xc0", 14, 1 },  /* DLYPRTC: Delayed Protection Flag               Clear */
};

const Field_t HRTIM_TIME_TIMEDIER_fields[] = {
   { "\x0c\xd4\x1c\x24\x50", 0, 1 },  /* CMP1IE: CMP1IE */
   { "\x0c\xd4\x1d\x24\x50", 1, 1 },  /* CMP2IE: CMP2IE */
   { "\x0c\xd4\x1e\x24\x50", 2, 1 },  /* CMP3IE: CMP3IE */
   { "\x0c\xd4\x1f\x24\x50", 3, 1 },  /* CMP4IE: CMP4IE */
   { "\x48\x54\x09\x14", 4, 1 },  /* REPIE: REPIE */
   { "\x55\x01\x09\x14", 6, 1 },  /* UPDIE: UPDIE */
   { "\x0d\x05\x1c\x24\x50", 7, 1 },  /* CPT1IE: CPT1IE */
   { "\x0d\x05\x1d\x24\x50", 8, 1 },  /* CPT2IE: CPT2IE */
   { "\x4c\x55\x1c\x60\x91\x40", 9, 1 },  /* SET1xIE: SET1xIE */
   { "\x49\x35\x18\x70\x91\x40", 10, 1 },  /* RSTx1IE: RSTx1IE */
   { "\x4c\x55\x18\x74\x91\x40", 11, 1 },  /* SETx2IE: SETx2IE */
   { "\x49\x35\x18\x74\x91\x40", 12, 1 },  /* RSTx2IE: RSTx2IE */
   { "\x49\x35\x09\x14", 13, 1 },  /* RSTIE: RSTIE */
   { "\x10\xc6\x50\x49\x42\x45", 14, 1 },  /* DLYPRTIE: DLYPRTIE */
   { "\x0c\xd4\x1c\x10\x50", 16, 1 },  /* CMP1DE: CMP1DE */
   { "\x0c\xd4\x1d\x10\x50", 17, 1 },  /* CMP2DE: CMP2DE */
   { "\x0c\xd4\x1e\x10\x50", 18, 1 },  /* CMP3DE: CMP3DE */
   { "\x0c\xd4\x1f\x10\x50", 19, 1 },  /* CMP4DE: CMP4DE */
   { "\x48\x54\x04\x14", 20, 1 },  /* REPDE: REPDE */
   { "\x55\x01\x04\x14", 22, 1 },  /* UPDDE: UPDDE */
   { "\x0d\x05\x1c\x10\x50", 23, 1 },  /* CPT1DE: CPT1DE */
   { "\x0d\x05\x1d\x10\x50", 24, 1 },  /* CPT2DE: CPT2DE */
   { "\x4c\x55\x1c\x60\x41\x40", 25, 1 },  /* SET1xDE: SET1xDE */
   { "\x49\x35\x18\x70\x41\x40", 26, 1 },  /* RSTx1DE: RSTx1DE */
   { "\x4c\x55\x18\x74\x41\x40", 27, 1 },  /* SETx2DE: SETx2DE */
   { "\x49\x35\x18\x74\x41\x40", 28, 1 },  /* RSTx2DE: RSTx2DE */
   { "\x49\x35\x04\x14", 29, 1 },  /* RSTDE: RSTDE */
   { "\x10\xc6\x50\x49\x41\x05", 30, 1 },  /* DLYPRTDE: DLYPRTDE */
};

const Field_t HRTIM_TIME_CNTER_fields[] = {
   { "\x0c\xe5\x18", 0, 16 },  /* CNTx: Timerx Counter value */
};

const Field_t HRTIM_TIME_PERER_fields[] = {
   { "\x40\x54\x98", 0, 16 },  /* PERx: Timerx Period value */
};

const Field_t HRTIM_TIME_REPER_fields[] = {
   { "\x48\x54\x18", 0, 8 },  /* REPx: Timerx Repetition counter               value */
};

const Field_t HRTIM_TIME_CMP1ER_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
};

const Field_t HRTIM_TIME_CMP1CER_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
   { "\x48\x54\x18", 16, 8 },  /* REPx: Timerx Repetition value (aliased from               HRTIM_REPx register) */
};

const Field_t HRTIM_TIME_CMP2ER_fields[] = {
   { "\x0c\xd4\x1d\x60", 0, 16 },  /* CMP2x: Timerx Compare 2 value */
};

const Field_t HRTIM_TIME_CMP3ER_fields[] = {
   { "\x0c\xd4\x1e\x60", 0, 16 },  /* CMP3x: Timerx Compare 3 value */
};

const Field_t HRTIM_TIME_CMP4ER_fields[] = {
   { "\x0c\xd4\x1f\x60", 0, 16 },  /* CMP4x: Timerx Compare 4 value */
};

const Field_t HRTIM_TIME_CPT1ER_fields[] = {
   { "\x0d\x05\x1c\x60", 0, 16 },  /* CPT1x: Timerx Capture 1 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIME_CPT2ER_fields[] = {
   { "\x0d\x05\x1d\x60", 0, 16 },  /* CPT2x: Timerx Capture 2 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIME_DTER_fields[] = {
   { "\x11\x44\x98", 0, 9 },  /* DTRx: Deadtime Rising value */
   { "\x4c\x45\x12\x60", 9, 1 },  /* SDTRx: Sign Deadtime Rising value */
   { "\x11\x44\x12\x4c\x30", 10, 3 },  /* DTPRSC: Deadtime Prescaler */
   { "\x11\x44\x93\x30\xb6\x00", 14, 1 },  /* DTRSLKx: Deadtime Rising Sign Lock */
   { "\x11\x44\x8c\x2d\x80", 15, 1 },  /* DTRLKx: Deadtime Rising Lock */
   { "\x11\x41\x98", 16, 9 },  /* DTFx: Deadtime Falling value */
   { "\x4c\x45\x06\x60", 25, 1 },  /* SDTFx: Sign Deadtime Falling               value */
   { "\x11\x41\x93\x30\xb6\x00", 30, 1 },  /* DTFSLKx: Deadtime Falling Sign Lock */
   { "\x11\x41\x8c\x2d\x80", 31, 1 },  /* DTFLKx: Deadtime Falling Lock */
};

const Field_t HRTIM_TIME_SETE1R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: Software Set trigger */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: Timer A resynchronizaton */
   { "\x40\x54\x80", 2, 1 },  /* PER: Timer A Period */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: Timer A compare 1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: Timer A compare 2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: Timer A compare 3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: Timer A compare 4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: Master Period */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: Master Compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: Master Compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: Master Compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: Master Compare 4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: Timer Event 1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: Timer Event 2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: Timer Event 3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: Timer Event 4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: Timer Event 5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: Timer Event 6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: Timer Event 7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: Timer Event 8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: Timer Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: Registers update (transfer preload to               active) */
};

const Field_t HRTIM_TIME_RSTE1R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIME_SETE2R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: SST */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIME_RSTE2R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIME_EEFER1_fields[] = {
   { "\x14\x57\x0c\x50\x32\x00", 0, 1 },  /* EE1LTCH: External Event 1 latch */
   { "\x14\x57\x06\x31\x44\x80", 1, 4 },  /* EE1FLTR: External Event 1 filter */
   { "\x14\x57\x4c\x50\x32\x00", 6, 1 },  /* EE2LTCH: External Event 2 latch */
   { "\x14\x57\x46\x31\x44\x80", 7, 4 },  /* EE2FLTR: External Event 2 filter */
   { "\x14\x57\x8c\x50\x32\x00", 12, 1 },  /* EE3LTCH: External Event 3 latch */
   { "\x14\x57\x86\x31\x44\x80", 13, 4 },  /* EE3FLTR: External Event 3 filter */
   { "\x14\x57\xcc\x50\x32\x00", 18, 1 },  /* EE4LTCH: External Event 4 latch */
   { "\x14\x57\xc6\x31\x44\x80", 19, 4 },  /* EE4FLTR: External Event 4 filter */
   { "\x14\x58\x0c\x50\x32\x00", 24, 1 },  /* EE5LTCH: External Event 5 latch */
   { "\x14\x58\x06\x31\x44\x80", 25, 4 },  /* EE5FLTR: External Event 5 filter */
};

const Field_t HRTIM_TIME_EEFER2_fields[] = {
   { "\x14\x58\x4c\x50\x32\x00", 0, 1 },  /* EE6LTCH: External Event 6 latch */
   { "\x14\x58\x46\x31\x44\x80", 1, 4 },  /* EE6FLTR: External Event 6 filter */
   { "\x14\x58\x8c\x50\x32\x00", 6, 1 },  /* EE7LTCH: External Event 7 latch */
   { "\x14\x58\x86\x31\x44\x80", 7, 4 },  /* EE7FLTR: External Event 7 filter */
   { "\x14\x58\xcc\x50\x32\x00", 12, 1 },  /* EE8LTCH: External Event 8 latch */
   { "\x14\x58\xc6\x31\x44\x80", 13, 4 },  /* EE8FLTR: External Event 8 filter */
   { "\x14\x59\x0c\x50\x32\x00", 18, 1 },  /* EE9LTCH: External Event 9 latch */
   { "\x14\x59\x06\x31\x44\x80", 19, 4 },  /* EE9FLTR: External Event 9 filter */
   { "\x14\x57\x1b\x31\x40\xc8", 24, 1 },  /* EE10LTCH: External Event 10 latch */
   { "\x14\x57\x1b\x18\xc5\x12", 25, 4 },  /* EE10FLTR: External Event 10 filter */
};

const Field_t HRTIM_TIME_RSTER_fields[] = {
   { "\x50\x93\x46\x0c\xd4\x1c", 0, 1 },  /* TIMFCMP1: Timer A Update reset */
   { "\x55\x01\x14", 1, 1 },  /* UPDT: Timer A Update reset */
   { "\x0c\xd4\x1d", 2, 1 },  /* CMP2: Timer A compare 2 reset */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Timer A compare 4 reset */
   { "\x35\x35\x10\x15\x20", 4, 1 },  /* MSTPER: Master timer Period */
   { "\x35\x35\x03\x35\x07\x00", 5, 1 },  /* MSTCMP1: Master compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 6, 1 },  /* MSTCMP2: Master compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 7, 1 },  /* MSTCMP3: Master compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 8, 1 },  /* MSTCMP4: Master compare 4 */
   { "\x15\x85\x05\x58\xe5\x1c", 9, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 10, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 11, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 12, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 13, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 14, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 15, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 16, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 17, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 18, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x50\x93\x41\x0c\xd4\x1c", 19, 1 },  /* TIMACMP1: Timer A Compare 1 */
   { "\x50\x93\x41\x0c\xd4\x1d", 20, 1 },  /* TIMACMP2: Timer A Compare 2 */
   { "\x50\x93\x41\x0c\xd4\x1f", 21, 1 },  /* TIMACMP4: Timer A Compare 4 */
   { "\x50\x93\x42\x0c\xd4\x1c", 22, 1 },  /* TIMBCMP1: Timer B Compare 1 */
   { "\x50\x93\x42\x0c\xd4\x1d", 23, 1 },  /* TIMBCMP2: Timer B Compare 2 */
   { "\x50\x93\x42\x0c\xd4\x1f", 24, 1 },  /* TIMBCMP4: Timer B Compare 4 */
   { "\x50\x93\x43\x0c\xd4\x1c", 25, 1 },  /* TIMCCMP1: Timer C Compare 1 */
   { "\x50\x93\x43\x0c\xd4\x1d", 26, 1 },  /* TIMCCMP2: Timer C Compare 2 */
   { "\x50\x93\x43\x0c\xd4\x1f", 27, 1 },  /* TIMCCMP4: Timer C Compare 4 */
   { "\x50\x93\x44\x0c\xd4\x1c", 28, 1 },  /* TIMDCMP1: Timer D Compare 1 */
   { "\x50\x93\x44\x0c\xd4\x1d", 29, 1 },  /* TIMDCMP2: Timer D Compare 2 */
   { "\x50\x93\x44\x0c\xd4\x1f", 30, 1 },  /* TIMDCMP4: Timer D Compare 4 */
   { "\x50\x93\x46\x0d\x03\x5d", 31, 1 },  /* TIMFCPM2: Timer F Compare 2 */
};

const Field_t HRTIM_TIME_CHPER_fields[] = {
   { "\x0c\x84\x06\x49\x10", 0, 4 },  /* CHPFRQ: Timerx carrier frequency               value */
   { "\x0c\x84\x04\x51\x90", 4, 3 },  /* CHPDTY: Timerx chopper duty cycle               value */
   { "\x4d\x44\x94\x41\x70", 7, 4 },  /* STRTPW: STRTPW */
};

const Field_t HRTIM_TIME_CPT1ECR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x67\x13\x15\x40", 28, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 29, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 30, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 31, 1 },  /* TFCMP2: TFCMP2 */
};

const Field_t HRTIM_TIME_CPT2ECR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x67\x13\x15\x40", 28, 1 },  /* TF1SET: TF1SET */
   { "\x50\x67\x12\x4d\x40", 29, 1 },  /* TF1RST: TF1RST */
   { "\x50\x60\xcd\x41\xc0", 30, 1 },  /* TFCMP1: TFCMP1 */
   { "\x50\x60\xcd\x41\xd0", 31, 1 },  /* TFCMP2: TFCMP2 */
};

const Field_t HRTIM_TIME_OUTER_fields[] = {
   { "\x40\xf3\x1c", 1, 1 },  /* POL1: Output 1 polarity */
   { "\x24\x43\x05\x35\xc0", 2, 1 },  /* IDLEM1: Output 1 Idle mode */
   { "\x24\x43\x05\x4d\xc0", 3, 1 },  /* IDLES1: Output 1 Idle State */
   { "\x18\x15\x4c\x51\xc0", 4, 2 },  /* FAULT1: Output 1 Fault state */
   { "\x0c\x84\x1c", 6, 1 },  /* CHP1: Output 1 Chopper enable */
   { "\x10\x91\x0c\x70", 7, 1 },  /* DIDL1: Output 1 Deadtime upon burst mode Idle               entry */
   { "\x11\x41\x4e", 8, 1 },  /* DTEN: Deadtime enable */
   { "\x10\xc6\x50\x49\x41\x4e", 9, 1 },  /* DLYPRTEN: Delayed Protection Enable */
   { "\x10\xc6\x50\x49\x40", 10, 3 },  /* DLYPRT: Delayed Protection */
   { "\x08\x90\x52", 14, 1 },  /* BIAR: Balanced Idle Automatic               Resume */
   { "\x40\xf3\x1d", 17, 1 },  /* POL2: Output 2 polarity */
   { "\x24\x43\x05\x35\xd0", 18, 1 },  /* IDLEM2: Output 2 Idle mode */
   { "\x24\x43\x05\x4d\xd0", 19, 1 },  /* IDLES2: Output 2 Idle State */
   { "\x18\x15\x4c\x51\xd0", 20, 2 },  /* FAULT2: Output 2 Fault state */
   { "\x0c\x84\x1d", 22, 1 },  /* CHP2: Output 2 Chopper enable */
   { "\x10\x91\x0c\x74", 23, 1 },  /* DIDL2: Output 2 Deadtime upon burst mode Idle               entry */
};

const Field_t HRTIM_TIME_FLTER_fields[] = {
   { "\x18\xc5\x1c\x14\xe0", 0, 1 },  /* FLT1EN: Fault 1 enable */
   { "\x18\xc5\x1d\x14\xe0", 1, 1 },  /* FLT2EN: Fault 2 enable */
   { "\x18\xc5\x1e\x14\xe0", 2, 1 },  /* FLT3EN: Fault 3 enable */
   { "\x18\xc5\x1f\x14\xe0", 3, 1 },  /* FLT4EN: Fault 4 enable */
   { "\x18\xc5\x20\x14\xe0", 4, 1 },  /* FLT5EN: Fault 5 enable */
   { "\x18\xc5\x21\x14\xe0", 5, 1 },  /* FLT6EN: Fault 6 enable */
   { "\x18\xc5\x0c\x0c\xb0", 31, 1 },  /* FLTLCK: Fault sources Lock */
};

const Field_t HRTIM_TIME_TIMECR2_fields[] = {
   { "\x10\x31\x05", 0, 1 },  /* DCDE: Dual Channel DAC trigger               enable */
   { "\x10\x31\x13", 1, 1 },  /* DCDS: Dual Channel DAC Step               trigger */
   { "\x10\x31\x12", 2, 1 },  /* DCDR: Dual Channel DAC Reset               trigger */
   { "\x54\x43\x40", 4, 1 },  /* UDM: Up-Down Mode */
   { "\x48\xf3\x40", 6, 2 },  /* ROM: Roll-Over Mode */
   { "\x3d\x55\x12\x3c\xd0", 8, 2 },  /* OUTROM: Output Roll-Over Mode */
   { "\x04\x44\x8f\x34", 10, 2 },  /* ADROM: ADC Roll-Over Mode */
   { "\x08\xd4\x8f\x34", 12, 2 },  /* BMROM: Burst Mode Roll-Over Mode */
   { "\x18\x54\x8f\x34", 14, 2 },  /* FEROM: Fault and Event Roll-Over               Mode */
   { "\x1d\x40\xcd\x41\xc0", 16, 1 },  /* GTCMP1: Greater than Compare 1 PWM               mode */
   { "\x1d\x40\xcd\x41\xe0", 17, 1 },  /* GTCMP3: Greater than Compare 3 PWM               mode */
   { "\x51\x21\xc8\x30\x60", 20, 1 },  /* TRGHLF: Triggered-half mode */
};

const Field_t HRTIM_TIME_EEEFR3_fields[] = {
   { "\x14\x55\x81\x0c\x50", 0, 1 },  /* EEVACE: External Event A Counter               Enable */
   { "\x14\x55\x81\x0d\x21\x53", 1, 1 },  /* EEVACRES: External Event A Counter               Reset */
   { "\x14\x55\x81\x49\x35\x0d", 2, 1 },  /* EEVARSTM: External Event A Reset               Mode */
   { "\x14\x55\x81\x4c\x53\x00", 4, 4 },  /* EEVASEL: External Event A Selection */
   { "\x14\x55\x81\x0c\xe5\x00", 8, 6 },  /* EEVACNT: External Event A counter */
};

const Register_t HRTIM_TIME_registers[] = {
   {"\x50\x93\x45\x0d\x20", 0, 32, 0, HRTIM_TIME_TIMECR_fields, 22}, /* TIMECR: Timerx Control Register */
   {"\x50\x93\x45\x25\x34\x80", 4, 32, 0, HRTIM_TIME_TIMEISR_fields, 20}, /* TIMEISR: Timerx Interrupt Status           Register */
   {"\x50\x93\x45\x24\x34\x80", 8, 32, 0, HRTIM_TIME_TIMEICR_fields, 14}, /* TIMEICR: Timerx Interrupt Clear           Register */
   {"\x50\x93\x45\x10\x91\x52", 12, 32, 0, HRTIM_TIME_TIMEDIER_fields, 28}, /* TIMEDIER: TIMxDIER */
   {"\x0c\xe5\x05\x48", 16, 32, 0, HRTIM_TIME_CNTER_fields, 1}, /* CNTER: Timerx Counter Register */
   {"\x40\x54\x85\x48", 20, 32, 0, HRTIM_TIME_PERER_fields, 1}, /* PERER: Timerx Period Register */
   {"\x48\x54\x05\x48", 24, 32, 0, HRTIM_TIME_REPER_fields, 1}, /* REPER: Timerx Repetition Register */
   {"\x0c\xd4\x1c\x15\x20", 28, 32, 0, HRTIM_TIME_CMP1ER_fields, 1}, /* CMP1ER: Timerx Compare 1 Register */
   {"\x0c\xd4\x1c\x0c\x54\x80", 32, 32, 0, HRTIM_TIME_CMP1CER_fields, 2}, /* CMP1CER: Timerx Compare 1 Compound           Register */
   {"\x0c\xd4\x1d\x15\x20", 36, 32, 0, HRTIM_TIME_CMP2ER_fields, 1}, /* CMP2ER: Timerx Compare 2 Register */
   {"\x0c\xd4\x1e\x15\x20", 40, 32, 0, HRTIM_TIME_CMP3ER_fields, 1}, /* CMP3ER: Timerx Compare 3 Register */
   {"\x0c\xd4\x1f\x15\x20", 44, 32, 0, HRTIM_TIME_CMP4ER_fields, 1}, /* CMP4ER: Timerx Compare 4 Register */
   {"\x0d\x05\x1c\x15\x20", 48, 32, 0, HRTIM_TIME_CPT1ER_fields, 2}, /* CPT1ER: Timerx Capture 1 Register */
   {"\x0d\x05\x1d\x15\x20", 52, 32, 0, HRTIM_TIME_CPT2ER_fields, 2}, /* CPT2ER: Timerx Capture 2 Register */
   {"\x11\x41\x52", 56, 32, 0, HRTIM_TIME_DTER_fields, 9}, /* DTER: Timerx Deadtime Register */
   {"\x4c\x55\x05\x71\x20", 60, 32, 0, HRTIM_TIME_SETE1R_fields, 32}, /* SETE1R: Timerx Output1 Set Register */
   {"\x49\x35\x05\x71\x20", 64, 32, 0, HRTIM_TIME_RSTE1R_fields, 32}, /* RSTE1R: Timerx Output1 Reset Register */
   {"\x4c\x55\x05\x75\x20", 68, 32, 0, HRTIM_TIME_SETE2R_fields, 32}, /* SETE2R: Timerx Output2 Set Register */
   {"\x49\x35\x05\x75\x20", 72, 32, 0, HRTIM_TIME_RSTE2R_fields, 32}, /* RSTE2R: Timerx Output2 Reset Register */
   {"\x14\x51\x85\x49\xc0", 76, 32, 0, HRTIM_TIME_EEFER1_fields, 10}, /* EEFER1: Timerx External Event Filtering Register           1 */
   {"\x14\x51\x85\x49\xd0", 80, 32, 0, HRTIM_TIME_EEFER2_fields, 10}, /* EEFER2: Timerx External Event Filtering Register           2 */
   {"\x49\x35\x05\x48", 84, 32, 0, HRTIM_TIME_RSTER_fields, 32}, /* RSTER: TimerA Reset Register */
   {"\x0c\x84\x05\x48", 88, 32, 0, HRTIM_TIME_CHPER_fields, 3}, /* CHPER: Timerx Chopper Register */
   {"\x0d\x05\x1c\x14\x34\x80", 92, 32, 0, HRTIM_TIME_CPT1ECR_fields, 32}, /* CPT1ECR: Timerx Capture 2 Control           Register */
   {"\x0d\x05\x1d\x14\x34\x80", 96, 32, 0, HRTIM_TIME_CPT2ECR_fields, 32}, /* CPT2ECR: CPT2xCR */
   {"\x3d\x55\x05\x48", 100, 32, 0, HRTIM_TIME_OUTER_fields, 16}, /* OUTER: Timerx Output Register */
   {"\x18\xc5\x05\x48", 104, 32, 0, HRTIM_TIME_FLTER_fields, 7}, /* FLTER: Timerx Fault Register */
   {"\x50\x93\x45\x0d\x27\x40", 108, 32, 0, HRTIM_TIME_TIMECR2_fields, 12}, /* TIMECR2: HRTIM Timerx Control Register           2 */
   {"\x14\x51\x46\x49\xe0", 112, 32, 0, HRTIM_TIME_EEEFR3_fields, 5}, /* EEEFR3: HRTIM Timerx External Event Filtering           Register 3 */
};

const Field_t HRTIM_TIMF_TIMFCR_fields[] = {
   { "\x0c\xb9\x50\x4c\x36\x00", 0, 3 },  /* CK_PSCx: HRTIM Timer x Clock               prescaler */
   { "\x0c\xf3\x94", 3, 1 },  /* CONT: Continuous mode */
   { "\x48\x55\x12\x24\x70", 4, 1 },  /* RETRIG: Re-triggerable mode */
   { "\x20\x13\x06", 5, 1 },  /* HALF: Half mode enable */
   { "\x41\x32\x10\x30\xc0", 6, 1 },  /* PSHPLL: Push-Pull mode enable */
   { "\x24\xe5\x0c\x58\x40", 7, 2 },  /* INTLVD: Interleaved mode */
   { "\x49\x36\x4e\x0d\x50", 9, 1 },  /* RSYNCU: Re-Synchronized Update */
   { "\x4d\x93\x83\x49\x35\x18", 10, 1 },  /* SYNCRSTx: Synchronization Resets Timer               x */
   { "\x4d\x93\x83\x4d\x44\x94\x60", 11, 1 },  /* SYNCSTRTx: Synchronization Starts Timer               x */
   { "\x10\x53\x03\x35\x07\x40", 12, 2 },  /* DELCMP2: Delayed CMP2 mode */
   { "\x10\x53\x03\x35\x07\xc0", 14, 2 },  /* DELCMP4: Delayed CMP4 mode */
   { "\x51\x84\x85\x41\x50", 17, 1 },  /* TxREPU: Timer x Repetition update */
   { "\x51\x84\x93\x51\x50", 18, 1 },  /* TxRSTU: Timerx reset update */
   { "\x50\x15\x40", 19, 1 },  /* TAU: TAU */
   { "\x50\x25\x40", 20, 1 },  /* TBU: TBU */
   { "\x50\x35\x40", 21, 1 },  /* TCU: TCU */
   { "\x50\x45\x40", 22, 1 },  /* TDU: TDU */
   { "\x35\x35\x15", 24, 1 },  /* MSTU: Master Timer update */
   { "\x10\x10\xd3\x64\xe0\xc0", 25, 2 },  /* DACSYNC: AC Synchronization */
   { "\x41\x21\x45\x38", 27, 1 },  /* PREEN: Preload enable */
   { "\x55\x01\x07\x05\x40", 28, 4 },  /* UPDGAT: Update Gating */
};

const Field_t HRTIM_TIMF_TIMFISR_fields[] = {
   { "\x0c\xd4\x1c", 0, 1 },  /* CMP1: Compare 1 Interrupt Flag */
   { "\x0c\xd4\x1d", 1, 1 },  /* CMP2: Compare 2 Interrupt Flag */
   { "\x0c\xd4\x1e", 2, 1 },  /* CMP3: Compare 3 Interrupt Flag */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Compare 4 Interrupt Flag */
   { "\x48\x54\x00", 4, 1 },  /* REP: Repetition Interrupt Flag */
   { "\x55\x01\x00", 6, 1 },  /* UPD: Update Interrupt Flag */
   { "\x0d\x05\x1c", 7, 1 },  /* CPT1: Capture1 Interrupt Flag */
   { "\x0d\x05\x1d", 8, 1 },  /* CPT2: Capture2 Interrupt Flag */
   { "\x4c\x55\x18\x70", 9, 1 },  /* SETx1: Output 1 Set Interrupt               Flag */
   { "\x49\x35\x18\x70", 10, 1 },  /* RSTx1: Output 1 Reset Interrupt               Flag */
   { "\x4c\x55\x18\x74", 11, 1 },  /* SETx2: Output 2 Set Interrupt               Flag */
   { "\x49\x35\x18\x74", 12, 1 },  /* RSTx2: Output 2 Reset Interrupt               Flag */
   { "\x49\x35\x00", 13, 1 },  /* RST: Reset Interrupt Flag */
   { "\x10\xc6\x50\x49\x40", 14, 1 },  /* DLYPRT: Delayed Protection Flag */
   { "\x0d\x04\x13\x50\x15\x00", 16, 1 },  /* CPPSTAT: Current Push Pull Status */
   { "\x25\x04\x13\x50\x15\x00", 17, 1 },  /* IPPSTAT: Idle Push Pull Status */
   { "\x3d\xc4\xd4\x05\x40", 18, 1 },  /* O1STAT: Output 1 State */
   { "\x3d\xd4\xd4\x05\x40", 19, 1 },  /* O2STAT: Output 2 State */
   { "\x3d\xc0\xd0\x64", 20, 1 },  /* O1CPY: Output 1 Copy */
   { "\x3d\xd0\xd0\x64", 21, 1 },  /* O2CPY: Output 2 Copy */
};

const Field_t HRTIM_TIMF_TIMFICR_fields[] = {
   { "\x0c\xd4\x1c\x0c", 0, 1 },  /* CMP1C: Compare 1 Interrupt flag               Clear */
   { "\x0c\xd4\x1d\x0c", 1, 1 },  /* CMP2C: Compare 2 Interrupt flag               Clear */
   { "\x0c\xd4\x1e\x0c", 2, 1 },  /* CMP3C: Compare 3 Interrupt flag               Clear */
   { "\x0c\xd4\x1f\x0c", 3, 1 },  /* CMP4C: Compare 4 Interrupt flag               Clear */
   { "\x48\x54\x03", 4, 1 },  /* REPC: Repetition Interrupt flag               Clear */
   { "\x55\x01\x03", 6, 1 },  /* UPDC: Update Interrupt flag               Clear */
   { "\x0d\x05\x1c\x0c", 7, 1 },  /* CPT1C: Capture1 Interrupt flag               Clear */
   { "\x0d\x05\x1d\x0c", 8, 1 },  /* CPT2C: Capture2 Interrupt flag               Clear */
   { "\x4c\x55\x1c\x60\x30", 9, 1 },  /* SET1xC: Output 1 Set flag Clear */
   { "\x49\x35\x18\x70\x30", 10, 1 },  /* RSTx1C: Output 1 Reset flag Clear */
   { "\x4c\x55\x1d\x60\x30", 11, 1 },  /* SET2xC: Output 2 Set flag Clear */
   { "\x49\x35\x18\x74\x30", 12, 1 },  /* RSTx2C: Output 2 Reset flag Clear */
   { "\x49\x35\x03", 13, 1 },  /* RSTC: Reset Interrupt flag Clear */
   { "\x10\xc6\x50\x49\x40\xc0", 14, 1 },  /* DLYPRTC: Delayed Protection Flag               Clear */
};

const Field_t HRTIM_TIMF_TIMFDIER_fields[] = {
   { "\x0c\xd4\x1c\x24\x50", 0, 1 },  /* CMP1IE: CMP1IE */
   { "\x0c\xd4\x1d\x24\x50", 1, 1 },  /* CMP2IE: CMP2IE */
   { "\x0c\xd4\x1e\x24\x50", 2, 1 },  /* CMP3IE: CMP3IE */
   { "\x0c\xd4\x1f\x24\x50", 3, 1 },  /* CMP4IE: CMP4IE */
   { "\x48\x54\x09\x14", 4, 1 },  /* REPIE: REPIE */
   { "\x55\x01\x09\x14", 6, 1 },  /* UPDIE: UPDIE */
   { "\x0d\x05\x1c\x24\x50", 7, 1 },  /* CPT1IE: CPT1IE */
   { "\x0d\x05\x1d\x24\x50", 8, 1 },  /* CPT2IE: CPT2IE */
   { "\x4c\x55\x1c\x60\x91\x40", 9, 1 },  /* SET1xIE: SET1xIE */
   { "\x49\x35\x18\x70\x91\x40", 10, 1 },  /* RSTx1IE: RSTx1IE */
   { "\x4c\x55\x18\x74\x91\x40", 11, 1 },  /* SETx2IE: SETx2IE */
   { "\x49\x35\x18\x74\x91\x40", 12, 1 },  /* RSTx2IE: RSTx2IE */
   { "\x49\x35\x09\x14", 13, 1 },  /* RSTIE: RSTIE */
   { "\x10\xc6\x50\x49\x42\x45", 14, 1 },  /* DLYPRTIE: DLYPRTIE */
   { "\x0c\xd4\x1c\x10\x50", 16, 1 },  /* CMP1DE: CMP1DE */
   { "\x0c\xd4\x1d\x10\x50", 17, 1 },  /* CMP2DE: CMP2DE */
   { "\x0c\xd4\x1e\x10\x50", 18, 1 },  /* CMP3DE: CMP3DE */
   { "\x0c\xd4\x1f\x10\x50", 19, 1 },  /* CMP4DE: CMP4DE */
   { "\x48\x54\x04\x14", 20, 1 },  /* REPDE: REPDE */
   { "\x55\x01\x04\x14", 22, 1 },  /* UPDDE: UPDDE */
   { "\x0d\x05\x1c\x10\x50", 23, 1 },  /* CPT1DE: CPT1DE */
   { "\x0d\x05\x1d\x10\x50", 24, 1 },  /* CPT2DE: CPT2DE */
   { "\x4c\x55\x1c\x60\x41\x40", 25, 1 },  /* SET1xDE: SET1xDE */
   { "\x49\x35\x18\x70\x41\x40", 26, 1 },  /* RSTx1DE: RSTx1DE */
   { "\x4c\x55\x18\x74\x41\x40", 27, 1 },  /* SETx2DE: SETx2DE */
   { "\x49\x35\x18\x74\x41\x40", 28, 1 },  /* RSTx2DE: RSTx2DE */
   { "\x49\x35\x04\x14", 29, 1 },  /* RSTDE: RSTDE */
   { "\x10\xc6\x50\x49\x41\x05", 30, 1 },  /* DLYPRTDE: DLYPRTDE */
};

const Field_t HRTIM_TIMF_CNTFR_fields[] = {
   { "\x0c\xe5\x18", 0, 16 },  /* CNTx: Timerx Counter value */
};

const Field_t HRTIM_TIMF_PERFR_fields[] = {
   { "\x40\x54\x98", 0, 16 },  /* PERx: Timerx Period value */
};

const Field_t HRTIM_TIMF_REPFR_fields[] = {
   { "\x48\x54\x18", 0, 8 },  /* REPx: Timerx Repetition counter               value */
};

const Field_t HRTIM_TIMF_CMP1FR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
};

const Field_t HRTIM_TIMF_CMP1CFR_fields[] = {
   { "\x0c\xd4\x1c\x60", 0, 16 },  /* CMP1x: Timerx Compare 1 value */
   { "\x48\x54\x18", 16, 8 },  /* REPx: Timerx Repetition value (aliased from               HRTIM_REPx register) */
};

const Field_t HRTIM_TIMF_CMP2FR_fields[] = {
   { "\x0c\xd4\x1d\x60", 0, 16 },  /* CMP2x: Timerx Compare 2 value */
};

const Field_t HRTIM_TIMF_CMP3FR_fields[] = {
   { "\x0c\xd4\x1e\x60", 0, 16 },  /* CMP3x: Timerx Compare 3 value */
};

const Field_t HRTIM_TIMF_CMP4FR_fields[] = {
   { "\x0c\xd4\x1f\x60", 0, 16 },  /* CMP4x: Timerx Compare 4 value */
};

const Field_t HRTIM_TIMF_CPT1FR_fields[] = {
   { "\x0d\x05\x1c\x60", 0, 16 },  /* CPT1x: Timerx Capture 1 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMF_CPT2FR_fields[] = {
   { "\x0d\x05\x1d\x60", 0, 16 },  /* CPT2x: Timerx Capture 2 value */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Timerx Capture 1 Direction               status */
};

const Field_t HRTIM_TIMF_DTFR_fields[] = {
   { "\x11\x44\x98", 0, 9 },  /* DTRx: Deadtime Rising value */
   { "\x4c\x45\x12\x60", 9, 1 },  /* SDTRx: Sign Deadtime Rising value */
   { "\x11\x44\x12\x4c\x30", 10, 3 },  /* DTPRSC: Deadtime Prescaler */
   { "\x11\x44\x93\x30\xb6\x00", 14, 1 },  /* DTRSLKx: Deadtime Rising Sign Lock */
   { "\x11\x44\x8c\x2d\x80", 15, 1 },  /* DTRLKx: Deadtime Rising Lock */
   { "\x11\x41\x98", 16, 9 },  /* DTFx: Deadtime Falling value */
   { "\x4c\x45\x06\x60", 25, 1 },  /* SDTFx: Sign Deadtime Falling               value */
   { "\x11\x41\x93\x30\xb6\x00", 30, 1 },  /* DTFSLKx: Deadtime Falling Sign Lock */
   { "\x11\x41\x8c\x2d\x80", 31, 1 },  /* DTFLKx: Deadtime Falling Lock */
};

const Field_t HRTIM_TIMF_SETF1R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: Software Set trigger */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: Timer A resynchronizaton */
   { "\x40\x54\x80", 2, 1 },  /* PER: Timer A Period */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: Timer A compare 1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: Timer A compare 2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: Timer A compare 3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: Timer A compare 4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: Master Period */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: Master Compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: Master Compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: Master Compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: Master Compare 4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: Timer Event 1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: Timer Event 2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: Timer Event 3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: Timer Event 4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: Timer Event 5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: Timer Event 6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: Timer Event 7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: Timer Event 8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: Timer Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: Registers update (transfer preload to               active) */
};

const Field_t HRTIM_TIMF_RSTE1R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMF_SETF2R_fields[] = {
   { "\x4d\x35\x00", 0, 1 },  /* SST: SST */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMF_RSTF2R_fields[] = {
   { "\x4d\x25\x00", 0, 1 },  /* SRT: SRT */
   { "\x48\x54\xd9\x38\x30", 1, 1 },  /* RESYNC: RESYNC */
   { "\x40\x54\x80", 2, 1 },  /* PER: PER */
   { "\x0c\xd4\x1c", 3, 1 },  /* CMP1: CMP1 */
   { "\x0c\xd4\x1d", 4, 1 },  /* CMP2: CMP2 */
   { "\x0c\xd4\x1e", 5, 1 },  /* CMP3: CMP3 */
   { "\x0c\xd4\x1f", 6, 1 },  /* CMP4: CMP4 */
   { "\x35\x35\x10\x15\x20", 7, 1 },  /* MSTPER: MSTPER */
   { "\x35\x35\x03\x35\x07\x00", 8, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 9, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 10, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 11, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x93\x45\x58\xe5\x1c", 12, 1 },  /* TIMEVNT1: TIMEVNT1 */
   { "\x50\x93\x45\x58\xe5\x1d", 13, 1 },  /* TIMEVNT2: TIMEVNT2 */
   { "\x50\x93\x45\x58\xe5\x1e", 14, 1 },  /* TIMEVNT3: TIMEVNT3 */
   { "\x50\x93\x45\x58\xe5\x1f", 15, 1 },  /* TIMEVNT4: TIMEVNT4 */
   { "\x50\x93\x45\x58\xe5\x20", 16, 1 },  /* TIMEVNT5: TIMEVNT5 */
   { "\x50\x93\x45\x58\xe5\x21", 17, 1 },  /* TIMEVNT6: TIMEVNT6 */
   { "\x50\x93\x45\x58\xe5\x22", 18, 1 },  /* TIMEVNT7: TIMEVNT7 */
   { "\x50\x93\x45\x58\xe5\x23", 19, 1 },  /* TIMEVNT8: TIMEVNT8 */
   { "\x50\x93\x45\x58\xe5\x24", 20, 1 },  /* TIMEVNT9: TIMEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c", 21, 1 },  /* EXTEVNT1: EXTEVNT1 */
   { "\x15\x85\x05\x58\xe5\x1d", 22, 1 },  /* EXTEVNT2: EXTEVNT2 */
   { "\x15\x85\x05\x58\xe5\x1e", 23, 1 },  /* EXTEVNT3: EXTEVNT3 */
   { "\x15\x85\x05\x58\xe5\x1f", 24, 1 },  /* EXTEVNT4: EXTEVNT4 */
   { "\x15\x85\x05\x58\xe5\x20", 25, 1 },  /* EXTEVNT5: EXTEVNT5 */
   { "\x15\x85\x05\x58\xe5\x21", 26, 1 },  /* EXTEVNT6: EXTEVNT6 */
   { "\x15\x85\x05\x58\xe5\x22", 27, 1 },  /* EXTEVNT7: EXTEVNT7 */
   { "\x15\x85\x05\x58\xe5\x23", 28, 1 },  /* EXTEVNT8: EXTEVNT8 */
   { "\x15\x85\x05\x58\xe5\x24", 29, 1 },  /* EXTEVNT9: EXTEVNT9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 30, 1 },  /* EXTEVNT10: EXTEVNT10 */
   { "\x55\x01\x01\x50\x50", 31, 1 },  /* UPDATE: UPDATE */
};

const Field_t HRTIM_TIMF_EEFFR1_fields[] = {
   { "\x14\x57\x0c\x50\x32\x00", 0, 1 },  /* EE1LTCH: External Event 1 latch */
   { "\x14\x57\x06\x31\x44\x80", 1, 4 },  /* EE1FLTR: External Event 1 filter */
   { "\x14\x57\x4c\x50\x32\x00", 6, 1 },  /* EE2LTCH: External Event 2 latch */
   { "\x14\x57\x46\x31\x44\x80", 7, 4 },  /* EE2FLTR: External Event 2 filter */
   { "\x14\x57\x8c\x50\x32\x00", 12, 1 },  /* EE3LTCH: External Event 3 latch */
   { "\x14\x57\x86\x31\x44\x80", 13, 4 },  /* EE3FLTR: External Event 3 filter */
   { "\x14\x57\xcc\x50\x32\x00", 18, 1 },  /* EE4LTCH: External Event 4 latch */
   { "\x14\x57\xc6\x31\x44\x80", 19, 4 },  /* EE4FLTR: External Event 4 filter */
   { "\x14\x58\x0c\x50\x32\x00", 24, 1 },  /* EE5LTCH: External Event 5 latch */
   { "\x14\x58\x06\x31\x44\x80", 25, 4 },  /* EE5FLTR: External Event 5 filter */
};

const Field_t HRTIM_TIMF_EEFFR2_fields[] = {
   { "\x14\x58\x4c\x50\x32\x00", 0, 1 },  /* EE6LTCH: External Event 6 latch */
   { "\x14\x58\x46\x31\x44\x80", 1, 4 },  /* EE6FLTR: External Event 6 filter */
   { "\x14\x58\x8c\x50\x32\x00", 6, 1 },  /* EE7LTCH: External Event 7 latch */
   { "\x14\x58\x86\x31\x44\x80", 7, 4 },  /* EE7FLTR: External Event 7 filter */
   { "\x14\x58\xcc\x50\x32\x00", 12, 1 },  /* EE8LTCH: External Event 8 latch */
   { "\x14\x58\xc6\x31\x44\x80", 13, 4 },  /* EE8FLTR: External Event 8 filter */
   { "\x14\x59\x0c\x50\x32\x00", 18, 1 },  /* EE9LTCH: External Event 9 latch */
   { "\x14\x59\x06\x31\x44\x80", 19, 4 },  /* EE9FLTR: External Event 9 filter */
   { "\x14\x57\x1b\x31\x40\xc8", 24, 1 },  /* EE10LTCH: External Event 10 latch */
   { "\x14\x57\x1b\x18\xc5\x12", 25, 4 },  /* EE10FLTR: External Event 10 filter */
};

const Field_t HRTIM_TIMF_RSTFR_fields[] = {
   { "\x50\x93\x46\x0c\xd4\x1c", 0, 1 },  /* TIMFCMP1: Timer A Update reset */
   { "\x55\x01\x14", 1, 1 },  /* UPDT: Timer A Update reset */
   { "\x0c\xd4\x1d", 2, 1 },  /* CMP2: Timer A compare 2 reset */
   { "\x0c\xd4\x1f", 3, 1 },  /* CMP4: Timer A compare 4 reset */
   { "\x35\x35\x10\x15\x20", 4, 1 },  /* MSTPER: Master timer Period */
   { "\x35\x35\x03\x35\x07\x00", 5, 1 },  /* MSTCMP1: Master compare 1 */
   { "\x35\x35\x03\x35\x07\x40", 6, 1 },  /* MSTCMP2: Master compare 2 */
   { "\x35\x35\x03\x35\x07\x80", 7, 1 },  /* MSTCMP3: Master compare 3 */
   { "\x35\x35\x03\x35\x07\xc0", 8, 1 },  /* MSTCMP4: Master compare 4 */
   { "\x15\x85\x05\x58\xe5\x1c", 9, 1 },  /* EXTEVNT1: External Event 1 */
   { "\x15\x85\x05\x58\xe5\x1d", 10, 1 },  /* EXTEVNT2: External Event 2 */
   { "\x15\x85\x05\x58\xe5\x1e", 11, 1 },  /* EXTEVNT3: External Event 3 */
   { "\x15\x85\x05\x58\xe5\x1f", 12, 1 },  /* EXTEVNT4: External Event 4 */
   { "\x15\x85\x05\x58\xe5\x20", 13, 1 },  /* EXTEVNT5: External Event 5 */
   { "\x15\x85\x05\x58\xe5\x21", 14, 1 },  /* EXTEVNT6: External Event 6 */
   { "\x15\x85\x05\x58\xe5\x22", 15, 1 },  /* EXTEVNT7: External Event 7 */
   { "\x15\x85\x05\x58\xe5\x23", 16, 1 },  /* EXTEVNT8: External Event 8 */
   { "\x15\x85\x05\x58\xe5\x24", 17, 1 },  /* EXTEVNT9: External Event 9 */
   { "\x15\x85\x05\x58\xe5\x1c\x6c", 18, 1 },  /* EXTEVNT10: External Event 10 */
   { "\x50\x93\x41\x0c\xd4\x1c", 19, 1 },  /* TIMACMP1: Timer A Compare 1 */
   { "\x50\x93\x41\x0c\xd4\x1d", 20, 1 },  /* TIMACMP2: Timer A Compare 2 */
   { "\x50\x93\x41\x0c\xd4\x1f", 21, 1 },  /* TIMACMP4: Timer A Compare 4 */
   { "\x50\x93\x42\x0c\xd4\x1c", 22, 1 },  /* TIMBCMP1: Timer B Compare 1 */
   { "\x50\x93\x42\x0c\xd4\x1d", 23, 1 },  /* TIMBCMP2: Timer B Compare 2 */
   { "\x50\x93\x42\x0c\xd4\x1f", 24, 1 },  /* TIMBCMP4: Timer B Compare 4 */
   { "\x50\x93\x43\x0c\xd4\x1c", 25, 1 },  /* TIMCCMP1: Timer C Compare 1 */
   { "\x50\x93\x43\x0c\xd4\x1d", 26, 1 },  /* TIMCCMP2: Timer C Compare 2 */
   { "\x50\x93\x43\x0c\xd4\x1f", 27, 1 },  /* TIMCCMP4: Timer C Compare 4 */
   { "\x50\x93\x44\x0c\xd4\x1c", 28, 1 },  /* TIMDCMP1: Timer D Compare 1 */
   { "\x50\x93\x44\x0c\xd4\x1d", 29, 1 },  /* TIMDCMP2: Timer D Compare 2 */
   { "\x50\x93\x44\x0c\xd4\x1f", 30, 1 },  /* TIMDCMP4: Timer D Compare 4 */
   { "\x50\x93\x46\x0d\x03\x5d", 31, 1 },  /* TIMFCPM2: Timer F Compare 2 */
};

const Field_t HRTIM_TIMF_CHPFR_fields[] = {
   { "\x0c\x84\x06\x49\x10", 0, 4 },  /* CHPFRQ: Timerx carrier frequency               value */
   { "\x0c\x84\x04\x51\x90", 4, 3 },  /* CHPDTY: Timerx chopper duty cycle               value */
   { "\x4d\x44\x94\x41\x70", 7, 4 },  /* STRTPW: STRTPW */
};

const Field_t HRTIM_TIMF_CPT1FCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: TE1SET */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: TE1RST */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: TECMP1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: TECMP2 */
};

const Field_t HRTIM_TIMF_CPT2FCR_fields[] = {
   { "\x4d\x70\xd0\x50", 0, 1 },  /* SWCPT: Software Capture */
   { "\x54\x44\x03\x41\x40", 1, 1 },  /* UDPCPT: Update Capture */
   { "\x15\x81\x56\x70\x34\x14", 2, 1 },  /* EXEV1CPT: External Event 1 Capture */
   { "\x15\x81\x56\x74\x34\x14", 3, 1 },  /* EXEV2CPT: External Event 2 Capture */
   { "\x15\x81\x56\x78\x34\x14", 4, 1 },  /* EXEV3CPT: External Event 3 Capture */
   { "\x15\x81\x56\x7c\x34\x14", 5, 1 },  /* EXEV4CPT: External Event 4 Capture */
   { "\x15\x81\x56\x80\x34\x14", 6, 1 },  /* EXEV5CPT: External Event 5 Capture */
   { "\x15\x81\x56\x84\x34\x14", 7, 1 },  /* EXEV6CPT: External Event 6 Capture */
   { "\x15\x81\x56\x88\x34\x14", 8, 1 },  /* EXEV7CPT: External Event 7 Capture */
   { "\x15\x81\x56\x8c\x34\x14", 9, 1 },  /* EXEV8CPT: External Event 8 Capture */
   { "\x15\x81\x56\x90\x34\x14", 10, 1 },  /* EXEV9CPT: External Event 9 Capture */
   { "\x15\x81\x56\x71\xb0\xd0\x50", 11, 1 },  /* EXEV10CPT: External Event 10 Capture */
   { "\x50\x17\x13\x15\x40", 12, 1 },  /* TA1SET: Timer A output 1 Set */
   { "\x50\x17\x12\x4d\x40", 13, 1 },  /* TA1RST: Timer A output 1 Reset */
   { "\x50\x10\xcd\x41\xc0", 14, 1 },  /* TACMP1: Timer A Compare 1 */
   { "\x50\x10\xcd\x41\xd0", 15, 1 },  /* TACMP2: Timer A Compare 2 */
   { "\x50\x27\x13\x15\x40", 16, 1 },  /* TB1SET: Timer B output 1 Set */
   { "\x50\x27\x12\x4d\x40", 17, 1 },  /* TB1RST: Timer B output 1 Reset */
   { "\x50\x20\xcd\x41\xc0", 18, 1 },  /* TBCMP1: Timer B Compare 1 */
   { "\x50\x20\xcd\x41\xd0", 19, 1 },  /* TBCMP2: Timer B Compare 2 */
   { "\x50\x37\x13\x15\x40", 20, 1 },  /* TC1SET: Timer C output 1 Set */
   { "\x50\x37\x12\x4d\x40", 21, 1 },  /* TC1RST: Timer C output 1 Reset */
   { "\x50\x30\xcd\x41\xc0", 22, 1 },  /* TCCMP1: Timer C Compare 1 */
   { "\x50\x30\xcd\x41\xd0", 23, 1 },  /* TCCMP2: Timer C Compare 2 */
   { "\x50\x47\x13\x15\x40", 24, 1 },  /* TD1SET: Timer D output 1 Set */
   { "\x50\x47\x12\x4d\x40", 25, 1 },  /* TD1RST: Timer D output 1 Reset */
   { "\x50\x40\xcd\x41\xc0", 26, 1 },  /* TDCMP1: Timer D Compare 1 */
   { "\x50\x40\xcd\x41\xd0", 27, 1 },  /* TDCMP2: Timer D Compare 2 */
   { "\x50\x57\x13\x15\x40", 28, 1 },  /* TE1SET: TE1SET */
   { "\x50\x57\x12\x4d\x40", 29, 1 },  /* TE1RST: TE1RST */
   { "\x50\x50\xcd\x41\xc0", 30, 1 },  /* TECMP1: TECMP1 */
   { "\x50\x50\xcd\x41\xd0", 31, 1 },  /* TECMP2: TECMP2 */
};

const Field_t HRTIM_TIMF_OUTFR_fields[] = {
   { "\x40\xf3\x1c", 1, 1 },  /* POL1: Output 1 polarity */
   { "\x24\x43\x05\x35\xc0", 2, 1 },  /* IDLEM1: Output 1 Idle mode */
   { "\x24\x43\x05\x4d\xc0", 3, 1 },  /* IDLES1: Output 1 Idle State */
   { "\x18\x15\x4c\x51\xc0", 4, 2 },  /* FAULT1: Output 1 Fault state */
   { "\x0c\x84\x1c", 6, 1 },  /* CHP1: Output 1 Chopper enable */
   { "\x10\x91\x0c\x70", 7, 1 },  /* DIDL1: Output 1 Deadtime upon burst mode Idle               entry */
   { "\x11\x41\x4e", 8, 1 },  /* DTEN: Deadtime enable */
   { "\x10\xc6\x50\x49\x41\x4e", 9, 1 },  /* DLYPRTEN: Delayed Protection Enable */
   { "\x10\xc6\x50\x49\x40", 10, 3 },  /* DLYPRT: Delayed Protection */
   { "\x08\x90\x52", 14, 1 },  /* BIAR: Balanced Idle Automatic               Resume */
   { "\x40\xf3\x1d", 17, 1 },  /* POL2: Output 2 polarity */
   { "\x24\x43\x05\x35\xd0", 18, 1 },  /* IDLEM2: Output 2 Idle mode */
   { "\x24\x43\x05\x4d\xd0", 19, 1 },  /* IDLES2: Output 2 Idle State */
   { "\x18\x15\x4c\x51\xd0", 20, 2 },  /* FAULT2: Output 2 Fault state */
   { "\x0c\x84\x1d", 22, 1 },  /* CHP2: Output 2 Chopper enable */
   { "\x10\x91\x0c\x74", 23, 1 },  /* DIDL2: Output 2 Deadtime upon burst mode Idle               entry */
};

const Field_t HRTIM_TIMF_FLTFR_fields[] = {
   { "\x18\xc5\x1c\x14\xe0", 0, 1 },  /* FLT1EN: Fault 1 enable */
   { "\x18\xc5\x1d\x14\xe0", 1, 1 },  /* FLT2EN: Fault 2 enable */
   { "\x18\xc5\x1e\x14\xe0", 2, 1 },  /* FLT3EN: Fault 3 enable */
   { "\x18\xc5\x1f\x14\xe0", 3, 1 },  /* FLT4EN: Fault 4 enable */
   { "\x18\xc5\x20\x14\xe0", 4, 1 },  /* FLT5EN: Fault 5 enable */
   { "\x18\xc5\x21\x14\xe0", 5, 1 },  /* FLT6EN: Fault 6 enable */
   { "\x18\xc5\x0c\x0c\xb0", 31, 1 },  /* FLTLCK: Fault sources Lock */
};

const Field_t HRTIM_TIMF_TIMFCR2_fields[] = {
   { "\x10\x31\x05", 0, 1 },  /* DCDE: Dual Channel DAC trigger               enable */
   { "\x10\x31\x13", 1, 1 },  /* DCDS: Dual Channel DAC Step               trigger */
   { "\x10\x31\x12", 2, 1 },  /* DCDR: Dual Channel DAC Reset               trigger */
   { "\x54\x43\x40", 4, 1 },  /* UDM: Up-Down Mode */
   { "\x48\xf3\x40", 6, 2 },  /* ROM: Roll-Over Mode */
   { "\x3d\x55\x12\x3c\xd0", 8, 2 },  /* OUTROM: Output Roll-Over Mode */
   { "\x04\x44\x8f\x34", 10, 2 },  /* ADROM: ADC Roll-Over Mode */
   { "\x08\xd4\x8f\x34", 12, 2 },  /* BMROM: Burst Mode Roll-Over Mode */
   { "\x18\x54\x8f\x34", 14, 2 },  /* FEROM: Fault and Event Roll-Over               Mode */
   { "\x1d\x40\xcd\x41\xc0", 16, 1 },  /* GTCMP1: Greater than Compare 1 PWM               mode */
   { "\x1d\x40\xcd\x41\xe0", 17, 1 },  /* GTCMP3: Greater than Compare 3 PWM               mode */
   { "\x51\x21\xc8\x30\x60", 20, 1 },  /* TRGHLF: Triggered-half mode */
};

const Field_t HRTIM_TIMF_FEEFR3_fields[] = {
   { "\x14\x55\x81\x0c\x50", 0, 1 },  /* EEVACE: External Event A Counter               Enable */
   { "\x14\x55\x81\x0d\x21\x53", 1, 1 },  /* EEVACRES: External Event A Counter               Reset */
   { "\x14\x55\x81\x49\x35\x0d", 2, 1 },  /* EEVARSTM: External Event A Reset               Mode */
   { "\x14\x55\x81\x4c\x53\x00", 4, 4 },  /* EEVASEL: External Event A Selection */
   { "\x14\x55\x81\x0c\xe5\x00", 8, 6 },  /* EEVACNT: External Event A counter */
};

const Register_t HRTIM_TIMF_registers[] = {
   {"\x50\x93\x46\x0d\x20", 0, 32, 0, HRTIM_TIMF_TIMFCR_fields, 21}, /* TIMFCR: Timerx Control Register */
   {"\x50\x93\x46\x25\x34\x80", 4, 32, 0, HRTIM_TIMF_TIMFISR_fields, 20}, /* TIMFISR: Timerx Interrupt Status           Register */
   {"\x50\x93\x46\x24\x34\x80", 8, 32, 0, HRTIM_TIMF_TIMFICR_fields, 14}, /* TIMFICR: Timerx Interrupt Clear           Register */
   {"\x50\x93\x46\x10\x91\x52", 12, 32, 0, HRTIM_TIMF_TIMFDIER_fields, 28}, /* TIMFDIER: TIMxDIER */
   {"\x0c\xe5\x06\x48", 16, 32, 0, HRTIM_TIMF_CNTFR_fields, 1}, /* CNTFR: Timerx Counter Register */
   {"\x40\x54\x86\x48", 20, 32, 0, HRTIM_TIMF_PERFR_fields, 1}, /* PERFR: Timerx Period Register */
   {"\x48\x54\x06\x48", 24, 32, 0, HRTIM_TIMF_REPFR_fields, 1}, /* REPFR: Timerx Repetition Register */
   {"\x0c\xd4\x1c\x19\x20", 28, 32, 0, HRTIM_TIMF_CMP1FR_fields, 1}, /* CMP1FR: Timerx Compare 1 Register */
   {"\x0c\xd4\x1c\x0c\x64\x80", 32, 32, 0, HRTIM_TIMF_CMP1CFR_fields, 2}, /* CMP1CFR: Timerx Compare 1 Compound           Register */
   {"\x0c\xd4\x1d\x19\x20", 36, 32, 0, HRTIM_TIMF_CMP2FR_fields, 1}, /* CMP2FR: Timerx Compare 2 Register */
   {"\x0c\xd4\x1e\x19\x20", 40, 32, 0, HRTIM_TIMF_CMP3FR_fields, 1}, /* CMP3FR: Timerx Compare 3 Register */
   {"\x0c\xd4\x1f\x19\x20", 44, 32, 0, HRTIM_TIMF_CMP4FR_fields, 1}, /* CMP4FR: Timerx Compare 4 Register */
   {"\x0d\x05\x1c\x19\x20", 48, 32, 0, HRTIM_TIMF_CPT1FR_fields, 2}, /* CPT1FR: Timerx Capture 1 Register */
   {"\x0d\x05\x1d\x19\x20", 52, 32, 0, HRTIM_TIMF_CPT2FR_fields, 2}, /* CPT2FR: Timerx Capture 2 Register */
   {"\x11\x41\x92", 56, 32, 0, HRTIM_TIMF_DTFR_fields, 9}, /* DTFR: Timerx Deadtime Register */
   {"\x4c\x55\x06\x71\x20", 60, 32, 0, HRTIM_TIMF_SETF1R_fields, 32}, /* SETF1R: Timerx Output1 Set Register */
   {"\x49\x35\x05\x71\x20", 64, 32, 0, HRTIM_TIMF_RSTE1R_fields, 32}, /* RSTE1R: Timerx Output1 Reset Register */
   {"\x4c\x55\x06\x75\x20", 68, 32, 0, HRTIM_TIMF_SETF2R_fields, 32}, /* SETF2R: Timerx Output2 Set Register */
   {"\x49\x35\x06\x75\x20", 72, 32, 0, HRTIM_TIMF_RSTF2R_fields, 32}, /* RSTF2R: Timerx Output2 Reset Register */
   {"\x14\x51\x86\x49\xc0", 76, 32, 0, HRTIM_TIMF_EEFFR1_fields, 10}, /* EEFFR1: Timerx External Event Filtering Register           1 */
   {"\x14\x51\x86\x49\xd0", 80, 32, 0, HRTIM_TIMF_EEFFR2_fields, 10}, /* EEFFR2: Timerx External Event Filtering Register           2 */
   {"\x49\x35\x06\x48", 84, 32, 0, HRTIM_TIMF_RSTFR_fields, 32}, /* RSTFR: TimerA Reset Register */
   {"\x0c\x84\x06\x48", 88, 32, 0, HRTIM_TIMF_CHPFR_fields, 3}, /* CHPFR: Timerx Chopper Register */
   {"\x0d\x05\x1c\x18\x34\x80", 92, 32, 0, HRTIM_TIMF_CPT1FCR_fields, 32}, /* CPT1FCR: Timerx Capture 2 Control           Register */
   {"\x0d\x05\x1d\x18\x34\x80", 96, 32, 0, HRTIM_TIMF_CPT2FCR_fields, 32}, /* CPT2FCR: CPT2xCR */
   {"\x3d\x55\x06\x48", 100, 32, 0, HRTIM_TIMF_OUTFR_fields, 16}, /* OUTFR: Timerx Output Register */
   {"\x18\xc5\x06\x48", 104, 32, 0, HRTIM_TIMF_FLTFR_fields, 7}, /* FLTFR: Timerx Fault Register */
   {"\x50\x93\x46\x0d\x27\x40", 108, 32, 0, HRTIM_TIMF_TIMFCR2_fields, 12}, /* TIMFCR2: HRTIM Timerx Control Register           2 */
   {"\x18\x51\x46\x49\xe0", 112, 32, 0, HRTIM_TIMF_FEEFR3_fields, 5}, /* FEEFR3: HRTIM Timerx External Event Filtering           Register 3 */
};

const Field_t HRTIM_Common_CR1_fields[] = {
   { "\x35\x51\x09\x4c", 0, 1 },  /* MUDIS: Master Update Disable */
   { "\x50\x15\x44\x25\x30", 1, 1 },  /* TAUDIS: Timer A Update Disable */
   { "\x50\x25\x44\x25\x30", 2, 1 },  /* TBUDIS: Timer B Update Disable */
   { "\x50\x35\x44\x25\x30", 3, 1 },  /* TCUDIS: Timer C Update Disable */
   { "\x50\x45\x44\x25\x30", 4, 1 },  /* TDUDIS: Timer D Update Disable */
   { "\x50\x55\x44\x25\x30", 5, 1 },  /* TEUDIS: Timer E Update Disable */
   { "\x50\x65\x44\x25\x30", 6, 1 },  /* TFUDIS: Timer f Update Disable */
   { "\x04\x47\x15\x4d\x20\xc0", 16, 3 },  /* AD1USRC: ADC Trigger 1 Update               Source */
   { "\x04\x47\x55\x4d\x20\xc0", 19, 3 },  /* AD2USRC: ADC Trigger 2 Update               Source */
   { "\x04\x47\x95\x4d\x20\xc0", 22, 3 },  /* AD3USRC: ADC Trigger 3 Update               Source */
   { "\x04\x47\xd5\x4d\x20\xc0", 25, 3 },  /* AD4USRC: ADC Trigger 4 Update               Source */
};

const Field_t HRTIM_Common_CR2_fields[] = {
   { "\x35\x35\xd5", 0, 1 },  /* MSWU: Master Timer Software               update */
   { "\x50\x14\xd7\x54", 1, 1 },  /* TASWU: Timer A Software update */
   { "\x50\x24\xd7\x54", 2, 1 },  /* TBSWU: Timer B Software Update */
   { "\x50\x34\xd7\x54", 3, 1 },  /* TCSWU: Timer C Software Update */
   { "\x50\x44\xd7\x54", 4, 1 },  /* TDSWU: Timer D Software Update */
   { "\x50\x54\xd7\x54", 5, 1 },  /* TESWU: Timer E Software Update */
   { "\x50\x64\xd7\x54", 6, 1 },  /* TFSWU: Timer f Software Update */
   { "\x35\x24\xd4", 8, 1 },  /* MRST: Master Counter software               reset */
   { "\x50\x14\x93\x50", 9, 1 },  /* TARST: Timer A counter software               reset */
   { "\x50\x24\x93\x50", 10, 1 },  /* TBRST: Timer B counter software               reset */
   { "\x50\x34\x93\x50", 11, 1 },  /* TCRST: Timer C counter software               reset */
   { "\x50\x44\x93\x50", 12, 1 },  /* TDRST: Timer D counter software               reset */
   { "\x50\x54\x93\x50", 13, 1 },  /* TERST: Timer E counter software               reset */
   { "\x50\x64\x93\x50", 14, 1 },  /* TFRST: Timer f counter software               reset */
   { "\x4d\x74\x01", 16, 1 },  /* SWPA: Swap Timer A outputs */
   { "\x4d\x74\x02", 17, 1 },  /* SWPB: Swap Timer B outputs */
   { "\x4d\x74\x03", 18, 1 },  /* SWPC: Swap Timer C outputs */
   { "\x4d\x74\x04", 19, 1 },  /* SWPD: Swap Timer D outputs */
   { "\x4d\x74\x05", 20, 1 },  /* SWPE: Swap Timer E outputs */
   { "\x4d\x74\x06", 21, 1 },  /* SWPF: Swap Timer F outputs */
};

const Field_t HRTIM_Common_ISR_fields[] = {
   { "\x18\xc5\x1c", 0, 1 },  /* FLT1: Fault 1 Interrupt Flag */
   { "\x18\xc5\x1d", 1, 1 },  /* FLT2: Fault 2 Interrupt Flag */
   { "\x18\xc5\x1e", 2, 1 },  /* FLT3: Fault 3 Interrupt Flag */
   { "\x18\xc5\x1f", 3, 1 },  /* FLT4: Fault 4 Interrupt Flag */
   { "\x18\xc5\x20", 4, 1 },  /* FLT5: Fault 5 Interrupt Flag */
   { "\x4d\x94\xc6\x31\x40", 5, 1 },  /* SYSFLT: System Fault Interrupt               Flag */
   { "\x18\xc5\x21", 6, 1 },  /* FLT6: Fault 6 Interrupt Flag */
   { "\x10\xc3\x12\x11\x90", 16, 1 },  /* DLLRDY: DLL Ready Interrupt Flag */
   { "\x08\xd4\x05\x48", 17, 1 },  /* BMPER: Burst mode Period Interrupt               Flag */
};

const Field_t HRTIM_Common_ICR_fields[] = {
   { "\x18\xc5\x1c\x0c", 0, 1 },  /* FLT1C: Fault 1 Interrupt Flag               Clear */
   { "\x18\xc5\x1d\x0c", 1, 1 },  /* FLT2C: Fault 2 Interrupt Flag               Clear */
   { "\x18\xc5\x1e\x0c", 2, 1 },  /* FLT3C: Fault 3 Interrupt Flag               Clear */
   { "\x18\xc5\x1f\x0c", 3, 1 },  /* FLT4C: Fault 4 Interrupt Flag               Clear */
   { "\x18\xc5\x20\x0c", 4, 1 },  /* FLT5C: Fault 5 Interrupt Flag               Clear */
   { "\x4d\x94\xc6\x31\x40\xc0", 5, 1 },  /* SYSFLTC: System Fault Interrupt Flag               Clear */
   { "\x18\xc5\x21\x0c", 6, 1 },  /* FLT6C: Fault 6 Interrupt Flag               Clear */
   { "\x10\xc3\x12\x11\x90\xc0", 16, 1 },  /* DLLRDYC: DLL Ready Interrupt flag               Clear */
   { "\x08\xd4\x05\x48\x30", 17, 1 },  /* BMPERC: Burst mode period flag               Clear */
};

const Field_t HRTIM_Common_IER_fields[] = {
   { "\x18\xc5\x1c\x24\x50", 0, 1 },  /* FLT1IE: Fault 1 Interrupt Enable */
   { "\x18\xc5\x1d\x24\x50", 1, 1 },  /* FLT2IE: Fault 2 Interrupt Enable */
   { "\x18\xc5\x1e\x24\x50", 2, 1 },  /* FLT3IE: Fault 3 Interrupt Enable */
   { "\x18\xc5\x1f\x24\x50", 3, 1 },  /* FLT4IE: Fault 4 Interrupt Enable */
   { "\x18\xc5\x20\x24\x50", 4, 1 },  /* FLT5IE: Fault 5 Interrupt Enable */
   { "\x4d\x94\xc6\x31\x41\x40", 5, 1 },  /* SYSFLTE: System Fault Interrupt               Enable */
   { "\x18\xc5\x21\x24\x50", 6, 1 },  /* FLT6IE: Fault 6 Interrupt Enable */
   { "\x10\xc3\x12\x11\x92\x45", 16, 1 },  /* DLLRDYIE: DLL Ready Interrupt Enable */
   { "\x08\xd4\x05\x48\x91\x40", 17, 1 },  /* BMPERIE: Burst mode period Interrupt               Enable */
};

const Field_t HRTIM_Common_OENR_fields[] = {
   { "\x50\x17\x0f\x14\xe0", 0, 1 },  /* TA1OEN: Timer A Output 1 Enable */
   { "\x50\x17\x4f\x14\xe0", 1, 1 },  /* TA2OEN: Timer A Output 2 Enable */
   { "\x50\x27\x0f\x14\xe0", 2, 1 },  /* TB1OEN: Timer B Output 1 Enable */
   { "\x50\x27\x4f\x14\xe0", 3, 1 },  /* TB2OEN: Timer B Output 2 Enable */
   { "\x50\x37\x0f\x14\xe0", 4, 1 },  /* TC1OEN: Timer C Output 1 Enable */
   { "\x50\x37\x4f\x14\xe0", 5, 1 },  /* TC2OEN: Timer C Output 2 Enable */
   { "\x50\x47\x0f\x14\xe0", 6, 1 },  /* TD1OEN: Timer D Output 1 Enable */
   { "\x50\x47\x4f\x14\xe0", 7, 1 },  /* TD2OEN: Timer D Output 2 Enable */
   { "\x50\x57\x0f\x14\xe0", 8, 1 },  /* TE1OEN: Timer E Output 1 Enable */
   { "\x50\x57\x4f\x14\xe0", 9, 1 },  /* TE2OEN: Timer E Output 2 Enable */
   { "\x50\x67\x0f\x11\x30", 10, 1 },  /* TF1ODS: Timer F Output 1 disable               status */
   { "\x50\x67\x4f\x11\x30", 11, 1 },  /* TF2ODS: Timer F Output 2 disable               status */
};

const Field_t HRTIM_Common_ODISR_fields[] = {
   { "\x50\x17\x0f\x10\x94\xc0", 0, 1 },  /* TA1ODIS: TA1ODIS */
   { "\x50\x17\x4f\x10\x94\xc0", 1, 1 },  /* TA2ODIS: TA2ODIS */
   { "\x50\x27\x0f\x10\x94\xc0", 2, 1 },  /* TB1ODIS: TB1ODIS */
   { "\x50\x27\x4f\x10\x94\xc0", 3, 1 },  /* TB2ODIS: TB2ODIS */
   { "\x50\x37\x0f\x10\x94\xc0", 4, 1 },  /* TC1ODIS: TC1ODIS */
   { "\x50\x37\x4f\x10\x94\xc0", 5, 1 },  /* TC2ODIS: TC2ODIS */
   { "\x50\x47\x0f\x10\x94\xc0", 6, 1 },  /* TD1ODIS: TD1ODIS */
   { "\x50\x47\x4f\x10\x94\xc0", 7, 1 },  /* TD2ODIS: TD2ODIS */
   { "\x50\x57\x0f\x10\x94\xc0", 8, 1 },  /* TE1ODIS: TE1ODIS */
   { "\x50\x57\x4f\x10\x94\xc0", 9, 1 },  /* TE2ODIS: TE2ODIS */
   { "\x50\x67\x0f\x10\x94\xc0", 10, 1 },  /* TF1ODIS: TF1ODIS */
   { "\x50\x67\x4f\x10\x94\xc0", 11, 1 },  /* TF2ODIS: TF2ODIS */
};

const Field_t HRTIM_Common_ODSR_fields[] = {
   { "\x50\x17\x0f\x11\x30", 0, 1 },  /* TA1ODS: Timer A Output 1 disable               status */
   { "\x50\x17\x4f\x11\x30", 1, 1 },  /* TA2ODS: Timer A Output 2 disable               status */
   { "\x50\x27\x0f\x11\x30", 2, 1 },  /* TB1ODS: Timer B Output 1 disable               status */
   { "\x50\x27\x4f\x11\x30", 3, 1 },  /* TB2ODS: Timer B Output 2 disable               status */
   { "\x50\x37\x0f\x11\x30", 4, 1 },  /* TC1ODS: Timer C Output 1 disable               status */
   { "\x50\x37\x4f\x11\x30", 5, 1 },  /* TC2ODS: Timer C Output 2 disable               status */
   { "\x50\x47\x0f\x11\x30", 6, 1 },  /* TD1ODS: Timer D Output 1 disable               status */
   { "\x50\x47\x4f\x11\x30", 7, 1 },  /* TD2ODS: Timer D Output 2 disable               status */
   { "\x50\x57\x0f\x11\x30", 8, 1 },  /* TE1ODS: Timer E Output 1 disable               status */
   { "\x50\x57\x4f\x11\x30", 9, 1 },  /* TE2ODS: Timer E Output 2 disable               status */
   { "\x50\x67\x0f\x11\x30", 10, 1 },  /* TF1ODS: TF1ODS */
   { "\x50\x67\x4f\x11\x30", 11, 1 },  /* TF2ODS: TF2ODS */
};

const Field_t HRTIM_Common_BMCR_fields[] = {
   { "\x08\xd1\x40", 0, 1 },  /* BME: Burst Mode enable */
   { "\x08\xd3\xcd", 1, 1 },  /* BMOM: Burst Mode operating mode */
   { "\x08\xd0\xcc\x2c", 2, 4 },  /* BMCLK: Burst Mode Clock source */
   { "\x08\xd4\x12\x4c\x30", 6, 4 },  /* BMPRSC: Burst Mode Prescaler */
   { "\x08\xd4\x12\x14\xe0", 10, 1 },  /* BMPREN: Burst Mode Preload Enable */
   { "\x35\x40\x8d", 16, 1 },  /* MTBM: Master Timer Burst Mode */
   { "\x50\x10\x8d", 17, 1 },  /* TABM: Timer A Burst Mode */
   { "\x50\x20\x8d", 18, 1 },  /* TBBM: Timer B Burst Mode */
   { "\x50\x30\x8d", 19, 1 },  /* TCBM: Timer C Burst Mode */
   { "\x50\x40\x8d", 20, 1 },  /* TDBM: Timer D Burst Mode */
   { "\x50\x50\x8d", 21, 1 },  /* TEBM: Timer E Burst Mode */
   { "\x50\x60\x8d", 22, 1 },  /* TFBM: Timer f Burst Mode */
   { "\x08\xd4\xd4\x05\x40", 31, 1 },  /* BMSTAT: Burst Mode Status */
};

const Field_t HRTIM_Common_BMTRG_fields[] = {
   { "\x4d\x70", 0, 1 },  /* SW: SW */
   { "\x35\x35\x12\x4d\x40", 1, 1 },  /* MSTRST: MSTRST */
   { "\x35\x35\x12\x15\x00", 2, 1 },  /* MSTREP: MSTREP */
   { "\x35\x35\x03\x35\x07\x00", 3, 1 },  /* MSTCMP1: MSTCMP1 */
   { "\x35\x35\x03\x35\x07\x40", 4, 1 },  /* MSTCMP2: MSTCMP2 */
   { "\x35\x35\x03\x35\x07\x80", 5, 1 },  /* MSTCMP3: MSTCMP3 */
   { "\x35\x35\x03\x35\x07\xc0", 6, 1 },  /* MSTCMP4: MSTCMP4 */
   { "\x50\x14\x93\x50", 7, 1 },  /* TARST: TARST */
   { "\x50\x14\x85\x40", 8, 1 },  /* TAREP: TAREP */
   { "\x50\x10\xcd\x41\xc0", 9, 1 },  /* TACMP1: TACMP1 */
   { "\x50\x10\xcd\x41\xd0", 10, 1 },  /* TACMP2: TACMP2 */
   { "\x50\x24\x93\x50", 11, 1 },  /* TBRST: TBRST */
   { "\x50\x24\x85\x40", 12, 1 },  /* TBREP: TBREP */
   { "\x50\x20\xcd\x41\xc0", 13, 1 },  /* TBCMP1: TBCMP1 */
   { "\x50\x20\xcd\x41\xd0", 14, 1 },  /* TBCMP2: TBCMP2 */
   { "\x50\x34\x93\x50", 15, 1 },  /* TCRST: TCRST */
   { "\x50\x34\x85\x40", 16, 1 },  /* TCREP: TCREP */
   { "\x50\x30\xcd\x41\xc0", 17, 1 },  /* TCCMP1: TCCMP1 */
   { "\x50\x30\xcd\x41\xd0", 18, 1 },  /* TCCMP2: TCCMP2 */
   { "\x50\x44\x93\x50", 19, 1 },  /* TDRST: TDRST */
   { "\x50\x44\x85\x40", 20, 1 },  /* TDREP: TDREP */
   { "\x50\x40\xcd\x41\xc0", 21, 1 },  /* TDCMP1: TDCMP1 */
   { "\x50\x40\xcd\x41\xd0", 22, 1 },  /* TDCMP2: TDCMP2 */
   { "\x50\x54\x93\x50", 23, 1 },  /* TERST: TERST */
   { "\x50\x54\x85\x40", 24, 1 },  /* TEREP: TEREP */
   { "\x50\x50\xcd\x41\xc0", 25, 1 },  /* TECMP1: TECMP1 */
   { "\x50\x50\xcd\x41\xd0", 26, 1 },  /* TECMP2: TECMP2 */
   { "\x50\x41\x45\x5a\x20", 27, 1 },  /* TDEEV7: TDEEV7 */
   { "\x50\x41\x45\x5a\x30", 28, 1 },  /* TDEEV8: TDEEV8 */
   { "\x14\x55\xa2", 29, 1 },  /* EEV7: EEV7 */
   { "\x14\x55\xa3", 30, 1 },  /* EEV8: EEV8 */
   { "\x3c\x32\x10\x15\x60", 31, 1 },  /* OCHPEV: OCHPEV */
};

const Field_t HRTIM_Common_BMCMPR_fields[] = {
   { "\x08\xd0\xcd\x40", 0, 16 },  /* BMCMP: BMCMP */
};

const Field_t HRTIM_Common_BMPER_fields[] = {
   { "\x08\xd4\x05\x48", 0, 16 },  /* BMPER: Burst mode Period */
};

const Field_t HRTIM_Common_EECR1_fields[] = {
   { "\x14\x57\x13\x48\x30", 0, 2 },  /* EE1SRC: External Event 1 Source */
   { "\x14\x57\x10\x3c\xc0", 2, 1 },  /* EE1POL: External Event 1 Polarity */
   { "\x14\x57\x13\x39\x30", 3, 2 },  /* EE1SNS: External Event 1               Sensitivity */
   { "\x14\x57\x06\x05\x35\x00", 5, 1 },  /* EE1FAST: External Event 1 Fast mode */
   { "\x14\x57\x53\x48\x30", 6, 2 },  /* EE2SRC: External Event 2 Source */
   { "\x14\x57\x50\x3c\xc0", 8, 1 },  /* EE2POL: External Event 2 Polarity */
   { "\x14\x57\x53\x39\x30", 9, 2 },  /* EE2SNS: External Event 2               Sensitivity */
   { "\x14\x57\x46\x05\x35\x00", 11, 1 },  /* EE2FAST: External Event 2 Fast mode */
   { "\x14\x57\x93\x48\x30", 12, 2 },  /* EE3SRC: External Event 3 Source */
   { "\x14\x57\x90\x3c\xc0", 14, 1 },  /* EE3POL: External Event 3 Polarity */
   { "\x14\x57\x93\x39\x30", 15, 2 },  /* EE3SNS: External Event 3               Sensitivity */
   { "\x14\x57\x86\x05\x35\x00", 17, 1 },  /* EE3FAST: External Event 3 Fast mode */
   { "\x14\x57\xd3\x48\x30", 18, 2 },  /* EE4SRC: External Event 4 Source */
   { "\x14\x57\xd0\x3c\xc0", 20, 1 },  /* EE4POL: External Event 4 Polarity */
   { "\x14\x57\xd3\x39\x30", 21, 2 },  /* EE4SNS: External Event 4               Sensitivity */
   { "\x14\x57\xc6\x05\x35\x00", 23, 1 },  /* EE4FAST: External Event 4 Fast mode */
   { "\x14\x58\x13\x48\x30", 24, 2 },  /* EE5SRC: External Event 5 Source */
   { "\x14\x58\x10\x3c\xc0", 26, 1 },  /* EE5POL: External Event 5 Polarity */
   { "\x14\x58\x13\x39\x30", 27, 2 },  /* EE5SNS: External Event 5               Sensitivity */
   { "\x14\x58\x06\x05\x35\x00", 29, 1 },  /* EE5FAST: External Event 5 Fast mode */
};

const Field_t HRTIM_Common_EECR2_fields[] = {
   { "\x14\x58\x53\x48\x30", 0, 2 },  /* EE6SRC: EE6SRC */
   { "\x14\x58\x50\x3c\xc0", 2, 1 },  /* EE6POL: EE6POL */
   { "\x14\x58\x53\x39\x30", 3, 2 },  /* EE6SNS: EE6SNS */
   { "\x14\x58\x93\x48\x30", 6, 2 },  /* EE7SRC: EE7SRC */
   { "\x14\x58\x90\x3c\xc0", 8, 1 },  /* EE7POL: EE7POL */
   { "\x14\x58\x93\x39\x30", 9, 2 },  /* EE7SNS: EE7SNS */
   { "\x14\x58\xd3\x48\x30", 12, 2 },  /* EE8SRC: EE8SRC */
   { "\x14\x58\xd0\x3c\xc0", 14, 1 },  /* EE8POL: EE8POL */
   { "\x14\x58\xd3\x39\x30", 15, 2 },  /* EE8SNS: EE8SNS */
   { "\x14\x59\x13\x48\x30", 18, 2 },  /* EE9SRC: EE9SRC */
   { "\x14\x59\x10\x3c\xc0", 20, 1 },  /* EE9POL: EE9POL */
   { "\x14\x59\x13\x39\x30", 21, 2 },  /* EE9SNS: EE9SNS */
   { "\x14\x57\x1b\x4d\x20\xc0", 24, 2 },  /* EE10SRC: EE10SRC */
   { "\x14\x57\x1b\x40\xf3\x00", 26, 1 },  /* EE10POL: EE10POL */
   { "\x14\x57\x1b\x4c\xe4\xc0", 27, 2 },  /* EE10SNS: EE10SNS */
};

const Field_t HRTIM_Common_EECR3_fields[] = {
   { "\x14\x58\x46", 0, 4 },  /* EE6F: EE6F */
   { "\x14\x58\x86", 6, 4 },  /* EE7F: EE7F */
   { "\x14\x58\xc6", 12, 4 },  /* EE8F: EE8F */
   { "\x14\x59\x06", 18, 4 },  /* EE9F: EE9F */
   { "\x14\x57\x1b\x18", 24, 4 },  /* EE10F: EE10F */
   { "\x14\x55\x93\x10", 30, 2 },  /* EEVSD: EEVSD */
};

const Field_t HRTIM_Common_ADC1R_fields[] = {
   { "\x04\x47\x0d\x0d\xc0", 0, 1 },  /* AD1MC1: ADC trigger 1 on Master Compare               1 */
   { "\x04\x47\x0d\x0d\xd0", 1, 1 },  /* AD1MC2: ADC trigger 1 on Master Compare               2 */
   { "\x04\x47\x0d\x0d\xe0", 2, 1 },  /* AD1MC3: ADC trigger 1 on Master Compare               3 */
   { "\x04\x47\x0d\x0d\xf0", 3, 1 },  /* AD1MC4: ADC trigger 1 on Master Compare               4 */
   { "\x04\x47\x0d\x40\x54\x80", 4, 1 },  /* AD1MPER: ADC trigger 1 on Master               Period */
   { "\x04\x47\x05\x15\x67\x00", 5, 1 },  /* AD1EEV1: ADC trigger 1 on External Event               1 */
   { "\x04\x47\x05\x15\x67\x40", 6, 1 },  /* AD1EEV2: ADC trigger 1 on External Event               2 */
   { "\x04\x47\x05\x15\x67\x80", 7, 1 },  /* AD1EEV3: ADC trigger 1 on External Event               3 */
   { "\x04\x47\x05\x15\x67\xc0", 8, 1 },  /* AD1EEV4: ADC trigger 1 on External Event               4 */
   { "\x04\x47\x05\x15\x68\x00", 9, 1 },  /* AD1EEV5: ADC trigger 1 on External Event               5 */
   { "\x04\x47\x14\x04\x37\x40", 10, 1 },  /* AD1TAC2: ADC trigger 1 on Timer A compare               2 */
   { "\x04\x47\x14\x04\x37\x80", 11, 1 },  /* AD1TAC3: ADC trigger 1 on Timer A compare               3 */
   { "\x04\x47\x14\x04\x37\xc0", 12, 1 },  /* AD1TAC4: ADC trigger 1 on Timer A compare               4 */
   { "\x04\x47\x14\x05\x01\x52", 13, 1 },  /* AD1TAPER: ADC trigger 1 on Timer A               Period */
   { "\x04\x47\x14\x05\x24\xd4", 14, 1 },  /* AD1TARST: ADC trigger 1 on Timer A               Reset */
   { "\x04\x47\x14\x08\x37\x40", 15, 1 },  /* AD1TBC2: ADC trigger 1 on Timer B compare               2 */
   { "\x04\x47\x14\x08\x37\x80", 16, 1 },  /* AD1TBC3: ADC trigger 1 on Timer B compare               3 */
   { "\x04\x47\x14\x08\x37\xc0", 17, 1 },  /* AD1TBC4: ADC trigger 1 on Timer B compare               4 */
   { "\x04\x47\x14\x09\x01\x52", 18, 1 },  /* AD1TBPER: ADC trigger 1 on Timer B               Period */
   { "\x04\x47\x14\x09\x24\xd4", 19, 1 },  /* AD1TBRST: ADC trigger 1 on Timer B               Reset */
   { "\x04\x47\x14\x0c\x37\x40", 20, 1 },  /* AD1TCC2: ADC trigger 1 on Timer C compare               2 */
   { "\x04\x47\x14\x0c\x37\x80", 21, 1 },  /* AD1TCC3: ADC trigger 1 on Timer C compare               3 */
   { "\x04\x47\x14\x0c\x37\xc0", 22, 1 },  /* AD1TCC4: ADC trigger 1 on Timer C compare               4 */
   { "\x04\x47\x14\x0d\x01\x52", 23, 1 },  /* AD1TCPER: ADC trigger 1 on Timer C               Period */
   { "\x04\x47\x14\x10\x37\x40", 24, 1 },  /* AD1TDC2: ADC trigger 1 on Timer D compare               2 */
   { "\x04\x47\x14\x10\x37\x80", 25, 1 },  /* AD1TDC3: ADC trigger 1 on Timer D compare               3 */
   { "\x04\x47\x14\x10\x37\xc0", 26, 1 },  /* AD1TDC4: ADC trigger 1 on Timer D compare               4 */
   { "\x04\x47\x14\x11\x01\x52", 27, 1 },  /* AD1TDPER: ADC trigger 1 on Timer D               Period */
   { "\x04\x47\x14\x14\x37\x40", 28, 1 },  /* AD1TEC2: ADC trigger 1 on Timer E compare               2 */
   { "\x04\x47\x14\x14\x37\x80", 29, 1 },  /* AD1TEC3: ADC trigger 1 on Timer E compare               3 */
   { "\x04\x47\x14\x14\x37\xc0", 30, 1 },  /* AD1TEC4: ADC trigger 1 on Timer E compare               4 */
   { "\x04\x47\x14\x15\x01\x52", 31, 1 },  /* AD1TEPER: ADC trigger 1 on Timer E               Period */
};

const Field_t HRTIM_Common_ADC2R_fields[] = {
   { "\x04\x47\x4d\x0d\xc0", 0, 1 },  /* AD2MC1: ADC trigger 2 on Master Compare               1 */
   { "\x04\x47\x4d\x0d\xd0", 1, 1 },  /* AD2MC2: ADC trigger 2 on Master Compare               2 */
   { "\x04\x47\x4d\x0d\xe0", 2, 1 },  /* AD2MC3: ADC trigger 2 on Master Compare               3 */
   { "\x04\x47\x4d\x0d\xf0", 3, 1 },  /* AD2MC4: ADC trigger 2 on Master Compare               4 */
   { "\x04\x47\x4d\x40\x54\x80", 4, 1 },  /* AD2MPER: ADC trigger 2 on Master               Period */
   { "\x04\x47\x45\x15\x68\x40", 5, 1 },  /* AD2EEV6: ADC trigger 2 on External Event               6 */
   { "\x04\x47\x45\x15\x68\x80", 6, 1 },  /* AD2EEV7: ADC trigger 2 on External Event               7 */
   { "\x04\x47\x45\x15\x68\xc0", 7, 1 },  /* AD2EEV8: ADC trigger 2 on External Event               8 */
   { "\x04\x47\x45\x15\x69\x00", 8, 1 },  /* AD2EEV9: ADC trigger 2 on External Event               9 */
   { "\x04\x47\x45\x15\x67\x1b", 9, 1 },  /* AD2EEV10: ADC trigger 2 on External Event               10 */
   { "\x04\x47\x54\x04\x37\x40", 10, 1 },  /* AD2TAC2: ADC trigger 2 on Timer A compare               2 */
   { "\x04\x47\x54\x04\x37\x80", 11, 1 },  /* AD2TAC3: ADC trigger 2 on Timer A compare               3 */
   { "\x04\x47\x54\x04\x37\xc0", 12, 1 },  /* AD2TAC4: ADC trigger 2 on Timer A compare               4 */
   { "\x04\x47\x54\x05\x01\x52", 13, 1 },  /* AD2TAPER: ADC trigger 2 on Timer A               Period */
   { "\x04\x47\x54\x08\x37\x40", 14, 1 },  /* AD2TBC2: ADC trigger 2 on Timer B compare               2 */
   { "\x04\x47\x54\x08\x37\x80", 15, 1 },  /* AD2TBC3: ADC trigger 2 on Timer B compare               3 */
   { "\x04\x47\x54\x08\x37\xc0", 16, 1 },  /* AD2TBC4: ADC trigger 2 on Timer B compare               4 */
   { "\x04\x47\x54\x09\x01\x52", 17, 1 },  /* AD2TBPER: ADC trigger 2 on Timer B               Period */
   { "\x04\x47\x54\x0c\x37\x40", 18, 1 },  /* AD2TCC2: ADC trigger 2 on Timer C compare               2 */
   { "\x04\x47\x54\x0c\x37\x80", 19, 1 },  /* AD2TCC3: ADC trigger 2 on Timer C compare               3 */
   { "\x04\x47\x54\x0c\x37\xc0", 20, 1 },  /* AD2TCC4: ADC trigger 2 on Timer C compare               4 */
   { "\x04\x47\x54\x0d\x01\x52", 21, 1 },  /* AD2TCPER: ADC trigger 2 on Timer C               Period */
   { "\x04\x47\x54\x0d\x24\xd4", 22, 1 },  /* AD2TCRST: ADC trigger 2 on Timer C               Reset */
   { "\x04\x47\x54\x10\x37\x40", 23, 1 },  /* AD2TDC2: ADC trigger 2 on Timer D compare               2 */
   { "\x04\x47\x54\x10\x37\x80", 24, 1 },  /* AD2TDC3: ADC trigger 2 on Timer D compare               3 */
   { "\x04\x47\x54\x10\x37\xc0", 25, 1 },  /* AD2TDC4: ADC trigger 2 on Timer D compare               4 */
   { "\x04\x47\x54\x11\x01\x52", 26, 1 },  /* AD2TDPER: ADC trigger 2 on Timer D               Period */
   { "\x04\x47\x54\x11\x24\xd4", 27, 1 },  /* AD2TDRST: ADC trigger 2 on Timer D               Reset */
   { "\x04\x47\x54\x14\x37\x40", 28, 1 },  /* AD2TEC2: ADC trigger 2 on Timer E compare               2 */
   { "\x04\x47\x54\x14\x37\x80", 29, 1 },  /* AD2TEC3: ADC trigger 2 on Timer E compare               3 */
   { "\x04\x47\x54\x14\x37\xc0", 30, 1 },  /* AD2TEC4: ADC trigger 2 on Timer E compare               4 */
   { "\x04\x47\x54\x15\x24\xd4", 31, 1 },  /* AD2TERST: ADC trigger 2 on Timer E               Reset */
};

const Field_t HRTIM_Common_ADC3R_fields[] = {
   { "\x04\x47\x0d\x0d\xc0", 0, 1 },  /* AD1MC1: AD1MC1 */
   { "\x04\x47\x0d\x0d\xd0", 1, 1 },  /* AD1MC2: AD1MC2 */
   { "\x04\x47\x0d\x0d\xe0", 2, 1 },  /* AD1MC3: AD1MC3 */
   { "\x04\x47\x0d\x0d\xf0", 3, 1 },  /* AD1MC4: AD1MC4 */
   { "\x04\x47\x0d\x40\x54\x80", 4, 1 },  /* AD1MPER: AD1MPER */
   { "\x04\x47\x05\x15\x67\x00", 5, 1 },  /* AD1EEV1: AD1EEV1 */
   { "\x04\x47\x05\x15\x67\x40", 6, 1 },  /* AD1EEV2: AD1EEV2 */
   { "\x04\x47\x05\x15\x67\x80", 7, 1 },  /* AD1EEV3: AD1EEV3 */
   { "\x04\x47\x05\x15\x67\xc0", 8, 1 },  /* AD1EEV4: AD1EEV4 */
   { "\x04\x47\x05\x15\x68\x00", 9, 1 },  /* AD1EEV5: AD1EEV5 */
   { "\x04\x47\x14\x04\x37\x40", 10, 1 },  /* AD1TAC2: AD1TAC2 */
   { "\x04\x47\x14\x04\x37\x80", 11, 1 },  /* AD1TAC3: AD1TAC3 */
   { "\x04\x47\x14\x04\x37\xc0", 12, 1 },  /* AD1TAC4: AD1TAC4 */
   { "\x04\x47\x14\x05\x01\x52", 13, 1 },  /* AD1TAPER: AD1TAPER */
   { "\x04\x47\x14\x05\x24\xd4", 14, 1 },  /* AD1TARST: AD1TARST */
   { "\x04\x47\x14\x08\x37\x40", 15, 1 },  /* AD1TBC2: AD1TBC2 */
   { "\x04\x47\x14\x08\x37\x80", 16, 1 },  /* AD1TBC3: AD1TBC3 */
   { "\x04\x47\x14\x08\x37\xc0", 17, 1 },  /* AD1TBC4: AD1TBC4 */
   { "\x04\x47\x14\x09\x01\x52", 18, 1 },  /* AD1TBPER: AD1TBPER */
   { "\x04\x47\x14\x09\x24\xd4", 19, 1 },  /* AD1TBRST: AD1TBRST */
   { "\x04\x47\x14\x0c\x37\x40", 20, 1 },  /* AD1TCC2: AD1TCC2 */
   { "\x04\x47\x14\x0c\x37\x80", 21, 1 },  /* AD1TCC3: AD1TCC3 */
   { "\x04\x47\x14\x0c\x37\xc0", 22, 1 },  /* AD1TCC4: AD1TCC4 */
   { "\x04\x47\x14\x0d\x01\x52", 23, 1 },  /* AD1TCPER: AD1TCPER */
   { "\x04\x47\x14\x10\x37\x40", 24, 1 },  /* AD1TDC2: AD1TDC2 */
   { "\x04\x47\x14\x10\x37\x80", 25, 1 },  /* AD1TDC3: AD1TDC3 */
   { "\x04\x47\x14\x10\x37\xc0", 26, 1 },  /* AD1TDC4: AD1TDC4 */
   { "\x04\x47\x14\x11\x01\x52", 27, 1 },  /* AD1TDPER: AD1TDPER */
   { "\x04\x47\x14\x14\x37\x40", 28, 1 },  /* AD1TEC2: AD1TEC2 */
   { "\x04\x47\x14\x14\x37\x80", 29, 1 },  /* AD1TEC3: AD1TEC3 */
   { "\x04\x47\x14\x14\x37\xc0", 30, 1 },  /* AD1TEC4: AD1TEC4 */
   { "\x04\x47\x14\x15\x01\x52", 31, 1 },  /* AD1TEPER: AD1TEPER */
};

const Field_t HRTIM_Common_ADC4R_fields[] = {
   { "\x04\x47\x4d\x0d\xc0", 0, 1 },  /* AD2MC1: AD2MC1 */
   { "\x04\x47\x4d\x0d\xd0", 1, 1 },  /* AD2MC2: AD2MC2 */
   { "\x04\x47\x4d\x0d\xe0", 2, 1 },  /* AD2MC3: AD2MC3 */
   { "\x04\x47\x4d\x0d\xf0", 3, 1 },  /* AD2MC4: AD2MC4 */
   { "\x04\x47\x4d\x40\x54\x80", 4, 1 },  /* AD2MPER: AD2MPER */
   { "\x04\x47\x45\x15\x68\x40", 5, 1 },  /* AD2EEV6: AD2EEV6 */
   { "\x04\x47\x45\x15\x68\x80", 6, 1 },  /* AD2EEV7: AD2EEV7 */
   { "\x04\x47\x45\x15\x68\xc0", 7, 1 },  /* AD2EEV8: AD2EEV8 */
   { "\x04\x47\x45\x15\x69\x00", 8, 1 },  /* AD2EEV9: AD2EEV9 */
   { "\x04\x47\x45\x15\x67\x1b", 9, 1 },  /* AD2EEV10: AD2EEV10 */
   { "\x04\x47\x54\x04\x37\x40", 10, 1 },  /* AD2TAC2: AD2TAC2 */
   { "\x04\x47\x54\x04\x37\x80", 11, 1 },  /* AD2TAC3: AD2TAC3 */
   { "\x04\x47\x54\x04\x37\xc0", 12, 1 },  /* AD2TAC4: AD2TAC4 */
   { "\x04\x47\x54\x05\x01\x52", 13, 1 },  /* AD2TAPER: AD2TAPER */
   { "\x04\x47\x54\x08\x37\x40", 14, 1 },  /* AD2TBC2: AD2TBC2 */
   { "\x04\x47\x54\x08\x37\x80", 15, 1 },  /* AD2TBC3: AD2TBC3 */
   { "\x04\x47\x54\x08\x37\xc0", 16, 1 },  /* AD2TBC4: AD2TBC4 */
   { "\x04\x47\x54\x09\x01\x52", 17, 1 },  /* AD2TBPER: AD2TBPER */
   { "\x04\x47\x54\x0c\x37\x40", 18, 1 },  /* AD2TCC2: AD2TCC2 */
   { "\x04\x47\x54\x0c\x37\x80", 19, 1 },  /* AD2TCC3: AD2TCC3 */
   { "\x04\x47\x54\x0c\x37\xc0", 20, 1 },  /* AD2TCC4: AD2TCC4 */
   { "\x04\x47\x54\x0d\x01\x52", 21, 1 },  /* AD2TCPER: AD2TCPER */
   { "\x04\x47\x54\x0d\x24\xd4", 22, 1 },  /* AD2TCRST: AD2TCRST */
   { "\x04\x47\x54\x10\x37\x40", 23, 1 },  /* AD2TDC2: AD2TDC2 */
   { "\x04\x47\x54\x10\x37\x80", 24, 1 },  /* AD2TDC3: AD2TDC3 */
   { "\x04\x47\x54\x10\x37\xc0", 25, 1 },  /* AD2TDC4: AD2TDC4 */
   { "\x04\x47\x54\x11\x01\x52", 26, 1 },  /* AD2TDPER: AD2TDPER */
   { "\x04\x47\x54\x11\x24\xd4", 27, 1 },  /* AD2TDRST: AD2TDRST */
   { "\x04\x47\x54\x14\x37\x40", 28, 1 },  /* AD2TEC2: AD2TEC2 */
   { "\x04\x47\x54\x14\x37\x80", 29, 1 },  /* AD2TEC3: AD2TEC3 */
   { "\x04\x47\x54\x14\x37\xc0", 30, 1 },  /* AD2TEC4: AD2TEC4 */
   { "\x04\x47\x54\x15\x24\xd4", 31, 1 },  /* AD2TERST: AD2TERST */
};

const Field_t HRTIM_Common_DLLCR_fields[] = {
   { "\x0c\x13\x00", 0, 1 },  /* CAL: DLL Calibration Start */
   { "\x0c\x13\x05\x38", 1, 1 },  /* CALEN: DLL Calibration Enable */
   { "\x0c\x13\x12\x50\x50", 2, 2 },  /* CALRTE: DLL Calibration rate */
};

const Field_t HRTIM_Common_FLTINR1_fields[] = {
   { "\x18\xc5\x1c\x14", 0, 1 },  /* FLT1E: FLT1E */
   { "\x18\xc5\x1c\x40", 1, 1 },  /* FLT1P: FLT1P */
   { "\x18\xc5\x1c\x4d\x20\xc0", 2, 1 },  /* FLT1SRC: FLT1SRC */
   { "\x18\xc5\x1c\x18", 3, 4 },  /* FLT1F: FLT1F */
   { "\x18\xc5\x1c\x30\x32\xc0", 7, 1 },  /* FLT1LCK: FLT1LCK */
   { "\x18\xc5\x1d\x14", 8, 1 },  /* FLT2E: FLT2E */
   { "\x18\xc5\x1d\x40", 9, 1 },  /* FLT2P: FLT2P */
   { "\x18\xc5\x1d\x4d\x20\xc0", 10, 1 },  /* FLT2SRC: FLT2SRC */
   { "\x18\xc5\x1d\x18", 11, 4 },  /* FLT2F: FLT2F */
   { "\x18\xc5\x1d\x30\x32\xc0", 15, 1 },  /* FLT2LCK: FLT2LCK */
   { "\x18\xc5\x1e\x14", 16, 1 },  /* FLT3E: FLT3E */
   { "\x18\xc5\x1e\x40", 17, 1 },  /* FLT3P: FLT3P */
   { "\x18\xc5\x1e\x4d\x20\xc0", 18, 1 },  /* FLT3SRC: FLT3SRC */
   { "\x18\xc5\x1e\x18", 19, 4 },  /* FLT3F: FLT3F */
   { "\x18\xc5\x1e\x30\x32\xc0", 23, 1 },  /* FLT3LCK: FLT3LCK */
   { "\x18\xc5\x1f\x14", 24, 1 },  /* FLT4E: FLT4E */
   { "\x18\xc5\x1f\x40", 25, 1 },  /* FLT4P: FLT4P */
   { "\x18\xc5\x1f\x4d\x20\xc0", 26, 1 },  /* FLT4SRC: FLT4SRC */
   { "\x18\xc5\x1f\x18", 27, 4 },  /* FLT4F: FLT4F */
   { "\x18\xc5\x1f\x30\x32\xc0", 31, 1 },  /* FLT4LCK: FLT4LCK */
};

const Field_t HRTIM_Common_FLTINR2_fields[] = {
   { "\x18\xc5\x20\x14", 0, 1 },  /* FLT5E: FLT5E */
   { "\x18\xc5\x20\x40", 1, 1 },  /* FLT5P: FLT5P */
   { "\x18\xc5\x20\x4d\x20\xc0", 2, 1 },  /* FLT5SRC: FLT5SRC */
   { "\x18\xc5\x20\x18", 3, 4 },  /* FLT5F: FLT5F */
   { "\x18\xc5\x20\x30\x32\xc0", 7, 1 },  /* FLT5LCK: FLT5LCK */
   { "\x18\xc5\x21\x14", 8, 1 },  /* FLT6E: FLT6E */
   { "\x18\xc5\x21\x40", 9, 1 },  /* FLT6P: FLT6P */
   { "\x18\xc5\x21\x4d\x20\xe5\x6c", 10, 1 },  /* FLT6SRC_0: FLT6F */
   { "\x18\xc5\x21\x18", 11, 4 },  /* FLT6F: FLT6F */
   { "\x18\xc5\x21\x30\x32\xc0", 15, 1 },  /* FLT6LCK: FLT6LCK */
   { "\x18\xc5\x1c\x4d\x20\xe5\x70", 16, 1 },  /* FLT1SRC_1: FLT1SRC_1 */
   { "\x18\xc5\x1d\x4d\x20\xe5\x70", 17, 1 },  /* FLT2SRC_1: FLT2SRC_1 */
   { "\x18\xc5\x1e\x4d\x20\xe5\x70", 18, 1 },  /* FLT3SRC_1: FLT3SRC_1 */
   { "\x18\xc5\x1f\x4d\x20\xe5\x70", 19, 1 },  /* FLT4SRC_1: FLT4SRC_1 */
   { "\x18\xc5\x20\x4d\x20\xe5\x70", 20, 1 },  /* FLT5SRC_1: FLT5SRC_1 */
   { "\x18\xc5\x21\x4d\x20\xe5\x70", 21, 1 },  /* FLT6SRC_1: FLT6SRC */
   { "\x18\xc5\x13\x10", 24, 2 },  /* FLTSD: FLTSD */
};

const Field_t HRTIM_Common_BDMUPDR_fields[] = {
   { "\x34\x34\x80", 0, 1 },  /* MCR: MCR */
   { "\x34\x90\xd2", 1, 1 },  /* MICR: MICR */
   { "\x34\x42\x45\x48", 2, 1 },  /* MDIER: MDIER */
   { "\x34\x33\x94", 3, 1 },  /* MCNT: MCNT */
   { "\x35\x01\x52", 4, 1 },  /* MPER: MPER */
   { "\x35\x21\x50", 5, 1 },  /* MREP: MREP */
   { "\x34\x33\x50\x70", 6, 1 },  /* MCMP1: MCMP1 */
   { "\x34\x33\x50\x74", 7, 1 },  /* MCMP2: MCMP2 */
   { "\x34\x33\x50\x78", 8, 1 },  /* MCMP3: MCMP3 */
   { "\x34\x33\x50\x7c", 9, 1 },  /* MCMP4: MCMP4 */
};

const Field_t HRTIM_Common_BDTAUPR_fields[] = {
   { "\x50\x93\x58\x0d\x20", 0, 1 },  /* TIMxCR: HRTIM_TIMxCR register update               enable */
   { "\x50\x93\x58\x24\x34\x80", 1, 1 },  /* TIMxICR: HRTIM_TIMxICR register update               enable */
   { "\x50\x93\x58\x10\x91\x52", 2, 1 },  /* TIMxDIER: HRTIM_TIMxDIER register update               enable */
   { "\x50\x93\x58\x0c\xe5\x00", 3, 1 },  /* TIMxCNT: HRTIM_CNTxR register update               enable */
   { "\x50\x93\x58\x40\x54\x80", 4, 1 },  /* TIMxPER: HRTIM_PERxR register update               enable */
   { "\x50\x93\x58\x48\x54\x00", 5, 1 },  /* TIMxREP: HRTIM_REPxR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1c", 6, 1 },  /* TIMxCMP1: HRTIM_CMP1xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1d", 7, 1 },  /* TIMxCMP2: HRTIM_CMP2xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1e", 8, 1 },  /* TIMxCMP3: HRTIM_CMP3xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1f", 9, 1 },  /* TIMxCMP4: HRTIM_CMP4xR register update               enable */
   { "\x50\x93\x58\x94\x45\x18\x48", 10, 1 },  /* TIMx_DTxR: HRTIM_DTxR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1c\x48", 11, 1 },  /* TIMxSET1R: HRTIM_SET1xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1c\x48", 12, 1 },  /* TIMxRST1R: HRTIM_RST1xR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1d\x48", 13, 1 },  /* TIMxSET2R: HRTIM_SET2xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1d\x48", 14, 1 },  /* TIMxRST2R: HRTIM_RST2xR register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x70", 15, 1 },  /* TIMxEEFR1: HRTIM_EEFxR1 register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x74", 16, 1 },  /* TIMxEEFR2: HRTIM_EEFxR2 register update               enable */
   { "\x50\x93\x58\x49\x35\x12", 17, 1 },  /* TIMxRSTR: HRTIM_RSTxR register update               enable */
   { "\x50\x93\x58\x0c\x84\x12", 18, 1 },  /* TIMxCHPR: HRTIM_CHPxR register update               enable */
   { "\x50\x93\x58\x3d\x55\x12", 19, 1 },  /* TIMxOUTR: HRTIM_OUTxR register update               enable */
   { "\x50\x93\x58\x18\xc5\x12", 20, 1 },  /* TIMxFLTR: HRTIM_FLTxR register update               enable */
   { "\x50\x93\x58\x0d\x27\x40", 21, 1 },  /* TIMxCR2: TIMxCR2 */
   { "\x50\x93\x58\x14\x51\x92\x78", 22, 1 },  /* TIMxEEFR3: TIMxEEFR3 */
};

const Field_t HRTIM_Common_BDTBUPR_fields[] = {
   { "\x50\x93\x58\x0d\x20", 0, 1 },  /* TIMxCR: HRTIM_TIMxCR register update               enable */
   { "\x50\x93\x58\x24\x34\x80", 1, 1 },  /* TIMxICR: HRTIM_TIMxICR register update               enable */
   { "\x50\x93\x58\x10\x91\x52", 2, 1 },  /* TIMxDIER: HRTIM_TIMxDIER register update               enable */
   { "\x50\x93\x58\x0c\xe5\x00", 3, 1 },  /* TIMxCNT: HRTIM_CNTxR register update               enable */
   { "\x50\x93\x58\x40\x54\x80", 4, 1 },  /* TIMxPER: HRTIM_PERxR register update               enable */
   { "\x50\x93\x58\x48\x54\x00", 5, 1 },  /* TIMxREP: HRTIM_REPxR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1c", 6, 1 },  /* TIMxCMP1: HRTIM_CMP1xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1d", 7, 1 },  /* TIMxCMP2: HRTIM_CMP2xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1e", 8, 1 },  /* TIMxCMP3: HRTIM_CMP3xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1f", 9, 1 },  /* TIMxCMP4: HRTIM_CMP4xR register update               enable */
   { "\x50\x93\x58\x94\x45\x18\x48", 10, 1 },  /* TIMx_DTxR: HRTIM_DTxR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1c\x48", 11, 1 },  /* TIMxSET1R: HRTIM_SET1xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1c\x48", 12, 1 },  /* TIMxRST1R: HRTIM_RST1xR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1d\x48", 13, 1 },  /* TIMxSET2R: HRTIM_SET2xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1d\x48", 14, 1 },  /* TIMxRST2R: HRTIM_RST2xR register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x70", 15, 1 },  /* TIMxEEFR1: HRTIM_EEFxR1 register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x74", 16, 1 },  /* TIMxEEFR2: HRTIM_EEFxR2 register update               enable */
   { "\x50\x93\x58\x49\x35\x12", 17, 1 },  /* TIMxRSTR: HRTIM_RSTxR register update               enable */
   { "\x50\x93\x58\x0c\x84\x12", 18, 1 },  /* TIMxCHPR: HRTIM_CHPxR register update               enable */
   { "\x50\x93\x58\x3d\x55\x12", 19, 1 },  /* TIMxOUTR: HRTIM_OUTxR register update               enable */
   { "\x50\x93\x58\x18\xc5\x12", 20, 1 },  /* TIMxFLTR: HRTIM_FLTxR register update               enable */
   { "\x50\x93\x58\x0d\x27\x40", 21, 1 },  /* TIMxCR2: TIMxCR2 */
   { "\x50\x93\x58\x14\x51\x92\x78", 22, 1 },  /* TIMxEEFR3: TIMxEEFR3 */
};

const Field_t HRTIM_Common_BDTCUPR_fields[] = {
   { "\x50\x93\x58\x0d\x20", 0, 1 },  /* TIMxCR: HRTIM_TIMxCR register update               enable */
   { "\x50\x93\x58\x24\x34\x80", 1, 1 },  /* TIMxICR: HRTIM_TIMxICR register update               enable */
   { "\x50\x93\x58\x10\x91\x52", 2, 1 },  /* TIMxDIER: HRTIM_TIMxDIER register update               enable */
   { "\x50\x93\x58\x0c\xe5\x00", 3, 1 },  /* TIMxCNT: HRTIM_CNTxR register update               enable */
   { "\x50\x93\x58\x40\x54\x80", 4, 1 },  /* TIMxPER: HRTIM_PERxR register update               enable */
   { "\x50\x93\x58\x48\x54\x00", 5, 1 },  /* TIMxREP: HRTIM_REPxR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1c", 6, 1 },  /* TIMxCMP1: HRTIM_CMP1xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1d", 7, 1 },  /* TIMxCMP2: HRTIM_CMP2xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1e", 8, 1 },  /* TIMxCMP3: HRTIM_CMP3xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1f", 9, 1 },  /* TIMxCMP4: HRTIM_CMP4xR register update               enable */
   { "\x50\x93\x58\x94\x45\x18\x48", 10, 1 },  /* TIMx_DTxR: HRTIM_DTxR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1c\x48", 11, 1 },  /* TIMxSET1R: HRTIM_SET1xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1c\x48", 12, 1 },  /* TIMxRST1R: HRTIM_RST1xR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1d\x48", 13, 1 },  /* TIMxSET2R: HRTIM_SET2xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1d\x48", 14, 1 },  /* TIMxRST2R: HRTIM_RST2xR register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x70", 15, 1 },  /* TIMxEEFR1: HRTIM_EEFxR1 register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x74", 16, 1 },  /* TIMxEEFR2: HRTIM_EEFxR2 register update               enable */
   { "\x50\x93\x58\x49\x35\x12", 17, 1 },  /* TIMxRSTR: HRTIM_RSTxR register update               enable */
   { "\x50\x93\x58\x0c\x84\x12", 18, 1 },  /* TIMxCHPR: HRTIM_CHPxR register update               enable */
   { "\x50\x93\x58\x3d\x55\x12", 19, 1 },  /* TIMxOUTR: HRTIM_OUTxR register update               enable */
   { "\x50\x93\x58\x18\xc5\x12", 20, 1 },  /* TIMxFLTR: HRTIM_FLTxR register update               enable */
   { "\x50\x93\x58\x0d\x27\x40", 21, 1 },  /* TIMxCR2: TIMxCR2 */
   { "\x50\x93\x58\x14\x51\x92\x78", 22, 1 },  /* TIMxEEFR3: TIMxEEFR3 */
};

const Field_t HRTIM_Common_BDTDUPR_fields[] = {
   { "\x50\x93\x58\x0d\x20", 0, 1 },  /* TIMxCR: HRTIM_TIMxCR register update               enable */
   { "\x50\x93\x58\x24\x34\x80", 1, 1 },  /* TIMxICR: HRTIM_TIMxICR register update               enable */
   { "\x50\x93\x58\x10\x91\x52", 2, 1 },  /* TIMxDIER: HRTIM_TIMxDIER register update               enable */
   { "\x50\x93\x58\x0c\xe5\x00", 3, 1 },  /* TIMxCNT: HRTIM_CNTxR register update               enable */
   { "\x50\x93\x58\x40\x54\x80", 4, 1 },  /* TIMxPER: HRTIM_PERxR register update               enable */
   { "\x50\x93\x58\x48\x54\x00", 5, 1 },  /* TIMxREP: HRTIM_REPxR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1c", 6, 1 },  /* TIMxCMP1: HRTIM_CMP1xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1d", 7, 1 },  /* TIMxCMP2: HRTIM_CMP2xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1e", 8, 1 },  /* TIMxCMP3: HRTIM_CMP3xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1f", 9, 1 },  /* TIMxCMP4: HRTIM_CMP4xR register update               enable */
   { "\x50\x93\x58\x94\x45\x18\x48", 10, 1 },  /* TIMx_DTxR: HRTIM_DTxR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1c\x48", 11, 1 },  /* TIMxSET1R: HRTIM_SET1xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1c\x48", 12, 1 },  /* TIMxRST1R: HRTIM_RST1xR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1d\x48", 13, 1 },  /* TIMxSET2R: HRTIM_SET2xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1d\x48", 14, 1 },  /* TIMxRST2R: HRTIM_RST2xR register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x70", 15, 1 },  /* TIMxEEFR1: HRTIM_EEFxR1 register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x74", 16, 1 },  /* TIMxEEFR2: HRTIM_EEFxR2 register update               enable */
   { "\x50\x93\x58\x49\x35\x12", 17, 1 },  /* TIMxRSTR: HRTIM_RSTxR register update               enable */
   { "\x50\x93\x58\x0c\x84\x12", 18, 1 },  /* TIMxCHPR: HRTIM_CHPxR register update               enable */
   { "\x50\x93\x58\x3d\x55\x12", 19, 1 },  /* TIMxOUTR: HRTIM_OUTxR register update               enable */
   { "\x50\x93\x58\x18\xc5\x12", 20, 1 },  /* TIMxFLTR: HRTIM_FLTxR register update               enable */
   { "\x50\x93\x58\x0d\x27\x40", 21, 1 },  /* TIMxCR2: TIMxCR2 */
   { "\x50\x93\x58\x14\x51\x92\x78", 22, 1 },  /* TIMxEEFR3: TIMxEEFR3 */
};

const Field_t HRTIM_Common_BDTEUPR_fields[] = {
   { "\x50\x93\x58\x0d\x20", 0, 1 },  /* TIMxCR: HRTIM_TIMxCR register update               enable */
   { "\x50\x93\x58\x24\x34\x80", 1, 1 },  /* TIMxICR: HRTIM_TIMxICR register update               enable */
   { "\x50\x93\x58\x10\x91\x52", 2, 1 },  /* TIMxDIER: HRTIM_TIMxDIER register update               enable */
   { "\x50\x93\x58\x0c\xe5\x00", 3, 1 },  /* TIMxCNT: HRTIM_CNTxR register update               enable */
   { "\x50\x93\x58\x40\x54\x80", 4, 1 },  /* TIMxPER: HRTIM_PERxR register update               enable */
   { "\x50\x93\x58\x48\x54\x00", 5, 1 },  /* TIMxREP: HRTIM_REPxR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1c", 6, 1 },  /* TIMxCMP1: HRTIM_CMP1xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1d", 7, 1 },  /* TIMxCMP2: HRTIM_CMP2xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1e", 8, 1 },  /* TIMxCMP3: HRTIM_CMP3xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1f", 9, 1 },  /* TIMxCMP4: HRTIM_CMP4xR register update               enable */
   { "\x50\x93\x58\x94\x45\x18\x48", 10, 1 },  /* TIMx_DTxR: HRTIM_DTxR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1c\x48", 11, 1 },  /* TIMxSET1R: HRTIM_SET1xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1c\x48", 12, 1 },  /* TIMxRST1R: HRTIM_RST1xR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1d\x48", 13, 1 },  /* TIMxSET2R: HRTIM_SET2xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1d\x48", 14, 1 },  /* TIMxRST2R: HRTIM_RST2xR register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x70", 15, 1 },  /* TIMxEEFR1: HRTIM_EEFxR1 register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x74", 16, 1 },  /* TIMxEEFR2: HRTIM_EEFxR2 register update               enable */
   { "\x50\x93\x58\x49\x35\x12", 17, 1 },  /* TIMxRSTR: HRTIM_RSTxR register update               enable */
   { "\x50\x93\x58\x0c\x84\x12", 18, 1 },  /* TIMxCHPR: HRTIM_CHPxR register update               enable */
   { "\x50\x93\x58\x3d\x55\x12", 19, 1 },  /* TIMxOUTR: HRTIM_OUTxR register update               enable */
   { "\x50\x93\x58\x18\xc5\x12", 20, 1 },  /* TIMxFLTR: HRTIM_FLTxR register update               enable */
   { "\x50\x93\x58\x0d\x27\x40", 21, 1 },  /* TIMxCR2: TIMxCR2 */
   { "\x50\x93\x58\x14\x51\x92\x78", 22, 1 },  /* TIMxEEFR3: TIMxEEFR3 */
};

const Field_t HRTIM_Common_BDMADR_fields[] = {
   { "\x08\x43\x41\x11\x20", 0, 32 },  /* BDMADR: Burst DMA Data register */
};

const Field_t HRTIM_Common_BDTFUPR_fields[] = {
   { "\x50\x93\x58\x0d\x20", 0, 1 },  /* TIMxCR: HRTIM_TIMxCR register update               enable */
   { "\x50\x93\x58\x24\x34\x80", 1, 1 },  /* TIMxICR: HRTIM_TIMxICR register update               enable */
   { "\x50\x93\x58\x10\x91\x52", 2, 1 },  /* TIMxDIER: HRTIM_TIMxDIER register update               enable */
   { "\x50\x93\x58\x0c\xe5\x00", 3, 1 },  /* TIMxCNT: HRTIM_CNTxR register update               enable */
   { "\x50\x93\x58\x40\x54\x80", 4, 1 },  /* TIMxPER: HRTIM_PERxR register update               enable */
   { "\x50\x93\x58\x48\x54\x00", 5, 1 },  /* TIMxREP: HRTIM_REPxR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1c", 6, 1 },  /* TIMxCMP1: HRTIM_CMP1xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1d", 7, 1 },  /* TIMxCMP2: HRTIM_CMP2xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1e", 8, 1 },  /* TIMxCMP3: HRTIM_CMP3xR register update               enable */
   { "\x50\x93\x58\x0c\xd4\x1f", 9, 1 },  /* TIMxCMP4: HRTIM_CMP4xR register update               enable */
   { "\x50\x93\x58\x94\x45\x18\x48", 10, 1 },  /* TIMx_DTxR: HRTIM_DTxR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1c\x48", 11, 1 },  /* TIMxSET1R: HRTIM_SET1xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1c\x48", 12, 1 },  /* TIMxRST1R: HRTIM_RST1xR register update               enable */
   { "\x50\x93\x58\x4c\x55\x1d\x48", 13, 1 },  /* TIMxSET2R: HRTIM_SET2xR register update               enable */
   { "\x50\x93\x58\x49\x35\x1d\x48", 14, 1 },  /* TIMxRST2R: HRTIM_RST2xR register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x70", 15, 1 },  /* TIMxEEFR1: HRTIM_EEFxR1 register update               enable */
   { "\x50\x93\x58\x14\x51\x92\x74", 16, 1 },  /* TIMxEEFR2: HRTIM_EEFxR2 register update               enable */
   { "\x50\x93\x58\x49\x35\x12", 17, 1 },  /* TIMxRSTR: HRTIM_RSTxR register update               enable */
   { "\x50\x93\x58\x0c\x84\x12", 18, 1 },  /* TIMxCHPR: HRTIM_CHPxR register update               enable */
   { "\x50\x93\x58\x3d\x55\x12", 19, 1 },  /* TIMxOUTR: HRTIM_OUTxR register update               enable */
   { "\x50\x93\x58\x18\xc5\x12", 20, 1 },  /* TIMxFLTR: HRTIM_FLTxR register update               enable */
   { "\x50\x93\x58\x0d\x27\x40", 21, 1 },  /* TIMxCR2: TIMxCR2 */
   { "\x50\x93\x58\x14\x51\x92\x78", 22, 1 },  /* TIMxEEFR3: TIMxEEFR3 */
};

const Field_t HRTIM_Common_ADCER_fields[] = {
   { "\x04\x40\xe0\x51\x21\xc0", 0, 5 },  /* ADC5TRG: ADC5TRG */
   { "\x04\x40\xe1\x51\x21\xc0", 5, 5 },  /* ADC6TRG: ADC6TRG */
   { "\x04\x40\xe2\x51\x21\xc0", 10, 5 },  /* ADC7TRG: ADC7TRG */
   { "\x04\x40\xe3\x51\x21\xc0", 16, 5 },  /* ADC8TRG: ADC8TRG */
   { "\x04\x40\xe4\x51\x21\xc0", 21, 5 },  /* ADC9TRG: ADC9TRG */
   { "\x04\x40\xdc\x6d\x44\x87", 26, 5 },  /* ADC10TRG: ADC10TRG */
};

const Field_t HRTIM_Common_ADCUR_fields[] = {
   { "\x04\x48\x15\x4d\x20\xc0", 0, 3 },  /* AD5USRC: AD5USRC */
   { "\x04\x48\x55\x4d\x20\xc0", 4, 3 },  /* AD6USRC: AD6USRC */
   { "\x04\x48\x95\x4d\x20\xc0", 8, 3 },  /* AD7USRC: AD7USRC */
   { "\x04\x48\xd5\x4d\x20\xc0", 12, 3 },  /* AD8USRC: AD8USRC */
   { "\x04\x49\x15\x4d\x20\xc0", 16, 3 },  /* AD9USRC: AD9USRC */
   { "\x04\x47\x1b\x55\x34\x83", 20, 3 },  /* AD10USRC: AD10USRC */
};

const Field_t HRTIM_Common_ADCPS1_fields[] = {
   { "\x04\x40\xdc\x41\x30\xc0", 0, 5 },  /* ADC1PSC: ADC1PSC */
   { "\x04\x40\xdd\x41\x30\xc0", 6, 5 },  /* ADC2PSC: ADC2PSC */
   { "\x04\x40\xde\x41\x30\xc0", 12, 5 },  /* ADC3PSC: ADC3PSC */
   { "\x04\x40\xdf\x41\x30\xc0", 18, 5 },  /* ADC4PSC: ADC4PSC */
   { "\x04\x40\xe0\x41\x30\xc0", 24, 5 },  /* ADC5PSC: ADC5PSC */
};

const Field_t HRTIM_Common_ADCPS2_fields[] = {
   { "\x04\x40\xe1\x41\x30\xc0", 0, 5 },  /* ADC6PSC: ADC6PSC */
   { "\x04\x40\xe2\x41\x30\xc0", 6, 5 },  /* ADC7PSC: ADC7PSC */
   { "\x04\x40\xe3\x41\x30\xc0", 12, 5 },  /* ADC8PSC: ADC8PSC */
   { "\x04\x40\xe4\x41\x30\xc0", 18, 5 },  /* ADC9PSC: ADC9PSC */
   { "\x04\x40\xdc\x6d\x04\xc3", 24, 5 },  /* ADC10PSC: ADC10PSC */
};

const Field_t HRTIM_Common_FLTINR3_fields[] = {
   { "\x18\xc5\x1c\x08\xc2\xc5", 0, 1 },  /* FLT1BLKE: FLT1BLKE */
   { "\x18\xc5\x1c\x08\xc2\xd3", 1, 1 },  /* FLT1BLKS: FLT1BLKS */
   { "\x18\xc5\x1c\x0c\xe5\x00", 2, 4 },  /* FLT1CNT: FLT1CNT */
   { "\x18\xc5\x1c\x0d\x21\x53", 6, 1 },  /* FLT1CRES: FLT1CRES */
   { "\x18\xc5\x1c\x49\x35\x0d", 7, 1 },  /* FLT1RSTM: FLT1RSTM */
   { "\x18\xc5\x1d\x08\xc2\xc5", 8, 1 },  /* FLT2BLKE: FLT2BLKE */
   { "\x18\xc5\x1d\x08\xc2\xd3", 9, 1 },  /* FLT2BLKS: FLT2BLKS */
   { "\x18\xc5\x1d\x0c\xe5\x00", 10, 4 },  /* FLT2CNT: FLT2CNT */
   { "\x18\xc5\x1d\x0d\x21\x53", 14, 1 },  /* FLT2CRES: FLT2CRES */
   { "\x18\xc5\x1d\x49\x35\x0d", 15, 1 },  /* FLT2RSTM: FLT2RSTM */
   { "\x18\xc5\x1e\x08\xc2\xc5", 16, 1 },  /* FLT3BLKE: FLT3BLKE */
   { "\x18\xc5\x1e\x08\xc2\xd3", 17, 1 },  /* FLT3BLKS: FLT3BLKS */
   { "\x18\xc5\x1e\x0c\xe5\x00", 18, 4 },  /* FLT3CNT: FLT3CNT */
   { "\x18\xc5\x1e\x0d\x21\x53", 22, 1 },  /* FLT3CRES: FLT3CRES */
   { "\x18\xc5\x1e\x49\x35\x0d", 23, 1 },  /* FLT3RSTM: FLT3RSTM */
   { "\x18\xc5\x1f\x08\xc2\xc5", 24, 1 },  /* FLT4BLKE: FLT4BLKE */
   { "\x18\xc5\x1f\x08\xc2\xd3", 25, 1 },  /* FLT4BLKS: FLT4BLKS */
   { "\x18\xc5\x1f\x0c\xe5\x00", 26, 4 },  /* FLT4CNT: FLT4CNT */
   { "\x18\xc5\x1f\x0d\x21\x53", 30, 1 },  /* FLT4CRES: FLT4CRES */
   { "\x18\xc5\x1f\x49\x35\x0d", 31, 1 },  /* FLT4RSTM: FLT4RSTM */
};

const Field_t HRTIM_Common_FLTINR4_fields[] = {
   { "\x18\xc5\x20\x08\xc2\xc5", 0, 1 },  /* FLT5BLKE: FLT5BLKE */
   { "\x18\xc5\x20\x08\xc2\xd3", 1, 1 },  /* FLT5BLKS: FLT5BLKS */
   { "\x18\xc5\x20\x0c\xe5\x00", 2, 4 },  /* FLT5CNT: FLT5CNT */
   { "\x18\xc5\x20\x0d\x21\x53", 6, 1 },  /* FLT5CRES: FLT5CRES */
   { "\x18\xc5\x20\x49\x35\x0d", 7, 1 },  /* FLT5RSTM: FLT5RSTM */
   { "\x18\xc5\x21\x08\xc2\xc5", 8, 1 },  /* FLT6BLKE: FLT6BLKE */
   { "\x18\xc5\x21\x08\xc2\xd3", 9, 1 },  /* FLT6BLKS: FLT6BLKS */
   { "\x18\xc5\x21\x0c\xe5\x00", 10, 4 },  /* FLT6CNT: FLT6CNT */
   { "\x18\xc5\x21\x0d\x21\x53", 14, 1 },  /* FLT6CRES: FLT6CRES */
   { "\x18\xc5\x21\x49\x35\x0d", 15, 1 },  /* FLT6RSTM: FLT6RSTM */
};

const Register_t HRTIM_Common_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, HRTIM_Common_CR1_fields, 11}, /* CR1: Control Register 1 */
   {"\x0d\x27\x40", 4, 32, 0, HRTIM_Common_CR2_fields, 20}, /* CR2: Control Register 2 */
   {"\x25\x34\x80", 8, 32, 0, HRTIM_Common_ISR_fields, 9}, /* ISR: Interrupt Status Register */
   {"\x24\x34\x80", 12, 32, 0, HRTIM_Common_ICR_fields, 9}, /* ICR: Interrupt Clear Register */
   {"\x24\x54\x80", 16, 32, 0, HRTIM_Common_IER_fields, 9}, /* IER: Interrupt Enable Register */
   {"\x3c\x53\x92", 20, 32, 0, HRTIM_Common_OENR_fields, 12}, /* OENR: Output Enable Register */
   {"\x3c\x42\x53\x48", 24, 32, 0, HRTIM_Common_ODISR_fields, 12}, /* ODISR: ODISR */
   {"\x3c\x44\xd2", 28, 32, 0, HRTIM_Common_ODSR_fields, 12}, /* ODSR: Output Disable Status Register */
   {"\x08\xd0\xd2", 32, 32, 0, HRTIM_Common_BMCR_fields, 13}, /* BMCR: Burst Mode Control Register */
   {"\x08\xd5\x12\x1c", 36, 32, 0, HRTIM_Common_BMTRG_fields, 32}, /* BMTRG: BMTRG */
   {"\x08\xd0\xcd\x41\x20", 40, 32, 0, HRTIM_Common_BMCMPR_fields, 1}, /* BMCMPR: BMCMPR */
   {"\x08\xd4\x05\x48", 44, 32, 0, HRTIM_Common_BMPER_fields, 1}, /* BMPER: Burst Mode Period Register */
   {"\x14\x50\xd2\x70", 48, 32, 0, HRTIM_Common_EECR1_fields, 20}, /* EECR1: Timer External Event Control Register           1 */
   {"\x14\x50\xd2\x74", 52, 32, 0, HRTIM_Common_EECR2_fields, 15}, /* EECR2: Timer External Event Control Register           2 */
   {"\x14\x50\xd2\x78", 56, 32, 0, HRTIM_Common_EECR3_fields, 6}, /* EECR3: Timer External Event Control Register           3 */
   {"\x04\x40\xdc\x48", 60, 32, 0, HRTIM_Common_ADC1R_fields, 32}, /* ADC1R: ADC Trigger 1 Register */
   {"\x04\x40\xdd\x48", 64, 32, 0, HRTIM_Common_ADC2R_fields, 32}, /* ADC2R: ADC Trigger 2 Register */
   {"\x04\x40\xde\x48", 68, 32, 0, HRTIM_Common_ADC3R_fields, 32}, /* ADC3R: ADC Trigger 3 Register */
   {"\x04\x40\xdf\x48", 72, 32, 0, HRTIM_Common_ADC4R_fields, 32}, /* ADC4R: ADC Trigger 4 Register */
   {"\x10\xc3\x03\x48", 76, 32, 0, HRTIM_Common_DLLCR_fields, 3}, /* DLLCR: DLL Control Register */
   {"\x18\xc5\x09\x39\x27\x00", 80, 32, 0, HRTIM_Common_FLTINR1_fields, 20}, /* FLTINR1: HRTIM Fault Input Register 1 */
   {"\x18\xc5\x09\x39\x27\x40", 84, 32, 0, HRTIM_Common_FLTINR2_fields, 17}, /* FLTINR2: HRTIM Fault Input Register 2 */
   {"\x08\x43\x55\x40\x44\x80", 88, 32, 0, HRTIM_Common_BDMUPDR_fields, 10}, /* BDMUPDR: BDMUPDR */
   {"\x08\x45\x01\x55\x04\x80", 92, 32, 0, HRTIM_Common_BDTAUPR_fields, 23}, /* BDTAUPR: Burst DMA Timerx update           Register */
   {"\x08\x45\x02\x55\x04\x80", 96, 32, 0, HRTIM_Common_BDTBUPR_fields, 23}, /* BDTBUPR: Burst DMA Timerx update           Register */
   {"\x08\x45\x03\x55\x04\x80", 100, 32, 0, HRTIM_Common_BDTCUPR_fields, 23}, /* BDTCUPR: Burst DMA Timerx update           Register */
   {"\x08\x45\x04\x55\x04\x80", 104, 32, 0, HRTIM_Common_BDTDUPR_fields, 23}, /* BDTDUPR: Burst DMA Timerx update           Register */
   {"\x08\x45\x05\x55\x04\x80", 108, 32, 0, HRTIM_Common_BDTEUPR_fields, 23}, /* BDTEUPR: Burst DMA Timerx update           Register */
   {"\x08\x43\x41\x11\x20", 112, 32, 0, HRTIM_Common_BDMADR_fields, 1}, /* BDMADR: Burst DMA Data Register */
   {"\x08\x45\x06\x55\x04\x80", 116, 32, 0, HRTIM_Common_BDTFUPR_fields, 23}, /* BDTFUPR: Burst DMA Timerx update           Register */
   {"\x04\x40\xc5\x48", 120, 32, 0, HRTIM_Common_ADCER_fields, 6}, /* ADCER: HRTIM ADC Extended Trigger           Register */
   {"\x04\x40\xd5\x48", 124, 32, 0, HRTIM_Common_ADCUR_fields, 6}, /* ADCUR: HRTIM ADC Trigger Update           Register */
   {"\x04\x40\xd0\x4d\xc0", 128, 32, 0, HRTIM_Common_ADCPS1_fields, 5}, /* ADCPS1: HRTIM ADC Post Scaler Register           1 */
   {"\x04\x40\xd0\x4d\xd0", 132, 32, 0, HRTIM_Common_ADCPS2_fields, 5}, /* ADCPS2: HRTIM ADC Post Scaler Register           2 */
   {"\x18\xc5\x09\x39\x27\x80", 136, 32, 0, HRTIM_Common_FLTINR3_fields, 20}, /* FLTINR3: HRTIM Fault Input Register 3 */
   {"\x18\xc5\x09\x39\x27\xc0", 140, 32, 0, HRTIM_Common_FLTINR4_fields, 10}, /* FLTINR4: HRTIM Fault Input Register 4 */
};

const Field_t DMA1_ISR_fields[] = {
   { "\x1c\x91\x9c", 0, 1 },  /* GIF1: GIF1 */
   { "\x50\x32\x46\x70", 1, 1 },  /* TCIF1: TCIF1 */
   { "\x21\x42\x46\x70", 2, 1 },  /* HTIF1: HTIF1 */
   { "\x50\x52\x46\x70", 3, 1 },  /* TEIF1: TEIF1 */
   { "\x1c\x91\x9d", 4, 1 },  /* GIF2: GIF2 */
   { "\x50\x32\x46\x74", 5, 1 },  /* TCIF2: TCIF2 */
   { "\x21\x42\x46\x74", 6, 1 },  /* HTIF2: HTIF2 */
   { "\x50\x52\x46\x74", 7, 1 },  /* TEIF2: TEIF2 */
   { "\x1c\x91\x9e", 8, 1 },  /* GIF3: GIF3 */
   { "\x50\x32\x46\x78", 9, 1 },  /* TCIF3: TCIF3 */
   { "\x21\x42\x46\x78", 10, 1 },  /* HTIF3: HTIF3 */
   { "\x50\x52\x46\x78", 11, 1 },  /* TEIF3: TEIF3 */
   { "\x1c\x91\x9f", 12, 1 },  /* GIF4: GIF4 */
   { "\x50\x32\x46\x7c", 13, 1 },  /* TCIF4: TCIF4 */
   { "\x21\x42\x46\x7c", 14, 1 },  /* HTIF4: HTIF4 */
   { "\x50\x52\x46\x7c", 15, 1 },  /* TEIF4: TEIF4 */
   { "\x1c\x91\xa0", 16, 1 },  /* GIF5: GIF5 */
   { "\x50\x32\x46\x80", 17, 1 },  /* TCIF5: TCIF5 */
   { "\x21\x42\x46\x80", 18, 1 },  /* HTIF5: HTIF5 */
   { "\x50\x52\x46\x80", 19, 1 },  /* TEIF5: TEIF5 */
   { "\x1c\x91\xa1", 20, 1 },  /* GIF6: GIF6 */
   { "\x50\x32\x46\x84", 21, 1 },  /* TCIF6: TCIF6 */
   { "\x21\x42\x46\x84", 22, 1 },  /* HTIF6: HTIF6 */
   { "\x50\x52\x46\x84", 23, 1 },  /* TEIF6: TEIF6 */
   { "\x1c\x91\xa2", 24, 1 },  /* GIF7: GIF7 */
   { "\x50\x32\x46\x88", 25, 1 },  /* TCIF7: TCIF7 */
   { "\x21\x42\x46\x88", 26, 1 },  /* HTIF7: HTIF7 */
   { "\x50\x52\x46\x88", 27, 1 },  /* TEIF7: TEIF7 */
   { "\x1c\x91\xa3", 28, 1 },  /* GIF8: GIF8 */
   { "\x50\x32\x46\x8c", 29, 1 },  /* TCIF8: TCIF8 */
   { "\x21\x42\x46\x8c", 30, 1 },  /* HTIF8: HTIF8 */
   { "\x50\x52\x46\x8c", 31, 1 },  /* TEIF8: TEIF8 */
};

const Field_t DMA1_IFCR_fields[] = {
   { "\x1c\x91\x9c", 0, 1 },  /* GIF1: GIF1 */
   { "\x50\x32\x46\x70", 1, 1 },  /* TCIF1: TCIF1 */
   { "\x21\x42\x46\x70", 2, 1 },  /* HTIF1: HTIF1 */
   { "\x50\x52\x46\x70", 3, 1 },  /* TEIF1: TEIF1 */
   { "\x1c\x91\x9d", 4, 1 },  /* GIF2: GIF2 */
   { "\x50\x32\x46\x74", 5, 1 },  /* TCIF2: TCIF2 */
   { "\x21\x42\x46\x74", 6, 1 },  /* HTIF2: HTIF2 */
   { "\x50\x52\x46\x74", 7, 1 },  /* TEIF2: TEIF2 */
   { "\x1c\x91\x9e", 8, 1 },  /* GIF3: GIF3 */
   { "\x50\x32\x46\x78", 9, 1 },  /* TCIF3: TCIF3 */
   { "\x21\x42\x46\x78", 10, 1 },  /* HTIF3: HTIF3 */
   { "\x50\x52\x46\x78", 11, 1 },  /* TEIF3: TEIF3 */
   { "\x1c\x91\x9f", 12, 1 },  /* GIF4: GIF4 */
   { "\x50\x32\x46\x7c", 13, 1 },  /* TCIF4: TCIF4 */
   { "\x21\x42\x46\x7c", 14, 1 },  /* HTIF4: HTIF4 */
   { "\x50\x52\x46\x7c", 15, 1 },  /* TEIF4: TEIF4 */
   { "\x1c\x91\xa0", 16, 1 },  /* GIF5: GIF5 */
   { "\x50\x32\x46\x80", 17, 1 },  /* TCIF5: TCIF5 */
   { "\x21\x42\x46\x80", 18, 1 },  /* HTIF5: HTIF5 */
   { "\x50\x52\x46\x80", 19, 1 },  /* TEIF5: TEIF5 */
   { "\x1c\x91\xa1", 20, 1 },  /* GIF6: GIF6 */
   { "\x50\x32\x46\x84", 21, 1 },  /* TCIF6: TCIF6 */
   { "\x21\x42\x46\x84", 22, 1 },  /* HTIF6: HTIF6 */
   { "\x50\x52\x46\x84", 23, 1 },  /* TEIF6: TEIF6 */
   { "\x1c\x91\xa2", 24, 1 },  /* GIF7: GIF7 */
   { "\x50\x32\x46\x88", 25, 1 },  /* TCIF7: TCIF7 */
   { "\x21\x42\x46\x88", 26, 1 },  /* HTIF7: HTIF7 */
   { "\x50\x52\x46\x88", 27, 1 },  /* TEIF7: TEIF7 */
   { "\x1c\x91\xa3", 28, 1 },  /* GIF8: GIF8 */
   { "\x50\x32\x46\x8c", 29, 1 },  /* TCIF8: TCIF8 */
   { "\x21\x42\x46\x8c", 30, 1 },  /* HTIF8: HTIF8 */
   { "\x50\x52\x46\x8c", 31, 1 },  /* TEIF8: TEIF8 */
};

const Field_t DMA1_CCR1_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR1_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR1_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR1_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR2_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR2_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR2_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR2_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR3_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR3_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR3_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR3_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR4_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR4_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR4_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR4_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR5_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR5_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR5_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR5_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR6_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR6_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR6_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR6_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR7_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR7_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR7_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR7_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Field_t DMA1_CCR8_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: TCIE */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: HTIE */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: TEIE */
   { "\x10\x94\x80", 4, 1 },  /* DIR: DIR */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: CIRC */
   { "\x40\x93\x83", 6, 1 },  /* PINC: PINC */
   { "\x34\x93\x83", 7, 1 },  /* MINC: MINC */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: PSIZE */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: MSIZE */
   { "\x40\xc0", 12, 2 },  /* PL: PL */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: MEM2MEM */
};

const Field_t DMA1_CNDTR8_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to               transfer */
};

const Field_t DMA1_CPAR8_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR8_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory 1 address (used in case of Double               buffer mode) */
};

const Register_t DMA1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, DMA1_ISR_fields, 32}, /* ISR: interrupt status register */
   {"\x24\x60\xd2", 4, 32, 0, DMA1_IFCR_fields, 32}, /* IFCR: DMA interrupt flag clear           register */
   {"\x0c\x34\x9c", 8, 32, 0, DMA1_CCR1_fields, 12}, /* CCR1: DMA channel 1 configuration           register */
   {"\x0c\xe1\x14\x49\xc0", 12, 32, 0, DMA1_CNDTR1_fields, 1}, /* CNDTR1: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x70", 16, 32, 0, DMA1_CPAR1_fields, 1}, /* CPAR1: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x70", 20, 32, 0, DMA1_CMAR1_fields, 1}, /* CMAR1: DMA channel x memory address           register */
   {"\x0c\x34\x9d", 28, 32, 0, DMA1_CCR2_fields, 12}, /* CCR2: DMA channel 2 configuration           register */
   {"\x0c\xe1\x14\x49\xd0", 32, 32, 0, DMA1_CNDTR2_fields, 1}, /* CNDTR2: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x74", 36, 32, 0, DMA1_CPAR2_fields, 1}, /* CPAR2: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x74", 40, 32, 0, DMA1_CMAR2_fields, 1}, /* CMAR2: DMA channel x memory address           register */
   {"\x0c\x34\x9e", 48, 32, 0, DMA1_CCR3_fields, 12}, /* CCR3: DMA channel 3 configuration           register */
   {"\x0c\xe1\x14\x49\xe0", 52, 32, 0, DMA1_CNDTR3_fields, 1}, /* CNDTR3: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x78", 56, 32, 0, DMA1_CPAR3_fields, 1}, /* CPAR3: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x78", 60, 32, 0, DMA1_CMAR3_fields, 1}, /* CMAR3: DMA channel x memory address           register */
   {"\x0c\x34\x9f", 68, 32, 0, DMA1_CCR4_fields, 12}, /* CCR4: DMA channel 3 configuration           register */
   {"\x0c\xe1\x14\x49\xf0", 72, 32, 0, DMA1_CNDTR4_fields, 1}, /* CNDTR4: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x7c", 76, 32, 0, DMA1_CPAR4_fields, 1}, /* CPAR4: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x7c", 80, 32, 0, DMA1_CMAR4_fields, 1}, /* CMAR4: DMA channel x memory address           register */
   {"\x0c\x34\xa0", 88, 32, 0, DMA1_CCR5_fields, 12}, /* CCR5: DMA channel 4 configuration           register */
   {"\x0c\xe1\x14\x4a\x00", 92, 32, 0, DMA1_CNDTR5_fields, 1}, /* CNDTR5: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x80", 96, 32, 0, DMA1_CPAR5_fields, 1}, /* CPAR5: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x80", 100, 32, 0, DMA1_CMAR5_fields, 1}, /* CMAR5: DMA channel x memory address           register */
   {"\x0c\x34\xa1", 108, 32, 0, DMA1_CCR6_fields, 12}, /* CCR6: DMA channel 5 configuration           register */
   {"\x0c\xe1\x14\x4a\x10", 112, 32, 0, DMA1_CNDTR6_fields, 1}, /* CNDTR6: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x84", 116, 32, 0, DMA1_CPAR6_fields, 1}, /* CPAR6: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x84", 120, 32, 0, DMA1_CMAR6_fields, 1}, /* CMAR6: DMA channel x memory address           register */
   {"\x0c\x34\xa2", 128, 32, 0, DMA1_CCR7_fields, 12}, /* CCR7: DMA channel 6 configuration           register */
   {"\x0c\xe1\x14\x4a\x20", 132, 32, 0, DMA1_CNDTR7_fields, 1}, /* CNDTR7: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x88", 136, 32, 0, DMA1_CPAR7_fields, 1}, /* CPAR7: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x88", 140, 32, 0, DMA1_CMAR7_fields, 1}, /* CMAR7: DMA channel x memory address           register */
   {"\x0c\x34\xa3", 148, 32, 0, DMA1_CCR8_fields, 12}, /* CCR8: DMA channel 7 configuration           register */
   {"\x0c\xe1\x14\x4a\x30", 152, 32, 0, DMA1_CNDTR8_fields, 1}, /* CNDTR8: channel x number of data to transfer           register */
   {"\x0d\x00\x52\x8c", 156, 32, 0, DMA1_CPAR8_fields, 1}, /* CPAR8: DMA channel x peripheral address           register */
   {"\x0c\xd0\x52\x8c", 160, 32, 0, DMA1_CMAR8_fields, 1}, /* CMAR8: DMA channel x memory address           register */
};

const Field_t DMAMUX_C0CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C1CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C2CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C3CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C4CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C5CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C6CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C7CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C8CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C9CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C10CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C11CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C12CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C13CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C14CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_C15CR_fields[] = {
   { "\x10\xd0\x52\x15\x19\x49\x10", 0, 7 },  /* DMAREQ_ID: Input DMA request line               selected */
   { "\x4c\xf2\x45", 8, 1 },  /* SOIE: Interrupt enable at synchronization               event overrun */
   { "\x14\x71\x40", 9, 1 },  /* EGE: Event generation               enable/disable */
   { "\x4c\x50", 16, 1 },  /* SE: Synchronous operating mode               enable/disable */
   { "\x4d\x03\xcc", 17, 2 },  /* SPOL: Synchronization event type selector               Defines the synchronization event on the selected               synchronization input: */
   { "\x38\x24\x85\x44", 19, 5 },  /* NBREQ: Number of DMA requests to forward               Defines the number of DMA requests forwarded before               output event is generated. In synchronous mode, it               also defines the number of DMA requests to forward               after a synchronization event, then stop forwarding.               The actual number of DMA requests forwarded is               NBREQ+1. Note: This field can only be written when               both SE and EGE bits are reset. */
   { "\x4d\x93\x83\x94\x91\x00", 24, 5 },  /* SYNC_ID: Synchronization input               selected */
};

const Field_t DMAMUX_CSR_fields[] = {
   { "\x4c\xf1\x80", 0, 16 },  /* SOF: Synchronization overrun event               flag */
};

const Field_t DMAMUX_CFR_fields[] = {
   { "\x0d\x33\xc6", 0, 16 },  /* CSOF: Clear synchronization overrun event               flag */
};

const Field_t DMAMUX_RG0CR_fields[] = {
   { "\x4c\x91\xe5\x24\x40", 0, 5 },  /* SIG_ID: DMA request trigger input               selected */
   { "\x3c\x91\x40", 8, 1 },  /* OIE: Interrupt enable at trigger event               overrun */
   { "\x1c\x50", 16, 1 },  /* GE: DMA request generator channel               enable/disable */
   { "\x1d\x03\xcc", 17, 2 },  /* GPOL: DMA request generator trigger event type               selection Defines the trigger event on the selected               DMA request trigger input */
   { "\x1c\xe0\x92\x15\x10", 19, 5 },  /* GNBREQ: Number of DMA requests to generate               Defines the number of DMA requests generated after a               trigger event, then stop generating. The actual               number of generated DMA requests is GNBREQ+1. Note:               This field can only be written when GE bit is               reset. */
};

const Field_t DMAMUX_RG1CR_fields[] = {
   { "\x4c\x91\xe5\x24\x40", 0, 5 },  /* SIG_ID: DMA request trigger input               selected */
   { "\x3c\x91\x40", 8, 1 },  /* OIE: Interrupt enable at trigger event               overrun */
   { "\x1c\x50", 16, 1 },  /* GE: DMA request generator channel               enable/disable */
   { "\x1d\x03\xcc", 17, 2 },  /* GPOL: DMA request generator trigger event type               selection Defines the trigger event on the selected               DMA request trigger input */
   { "\x1c\xe0\x92\x15\x10", 19, 5 },  /* GNBREQ: Number of DMA requests to generate               Defines the number of DMA requests generated after a               trigger event, then stop generating. The actual               number of generated DMA requests is GNBREQ+1. Note:               This field can only be written when GE bit is               reset. */
};

const Field_t DMAMUX_RG2CR_fields[] = {
   { "\x4c\x91\xe5\x24\x40", 0, 5 },  /* SIG_ID: DMA request trigger input               selected */
   { "\x3c\x91\x40", 8, 1 },  /* OIE: Interrupt enable at trigger event               overrun */
   { "\x1c\x50", 16, 1 },  /* GE: DMA request generator channel               enable/disable */
   { "\x1d\x03\xcc", 17, 2 },  /* GPOL: DMA request generator trigger event type               selection Defines the trigger event on the selected               DMA request trigger input */
   { "\x1c\xe0\x92\x15\x10", 19, 5 },  /* GNBREQ: Number of DMA requests to generate               Defines the number of DMA requests generated after a               trigger event, then stop generating. The actual               number of generated DMA requests is GNBREQ+1. Note:               This field can only be written when GE bit is               reset. */
};

const Field_t DMAMUX_RG3CR_fields[] = {
   { "\x4c\x91\xe5\x24\x40", 0, 5 },  /* SIG_ID: DMA request trigger input               selected */
   { "\x3c\x91\x40", 8, 1 },  /* OIE: Interrupt enable at trigger event               overrun */
   { "\x1c\x50", 16, 1 },  /* GE: DMA request generator channel               enable/disable */
   { "\x1d\x03\xcc", 17, 2 },  /* GPOL: DMA request generator trigger event type               selection Defines the trigger event on the selected               DMA request trigger input */
   { "\x1c\xe0\x92\x15\x10", 19, 5 },  /* GNBREQ: Number of DMA requests to generate               Defines the number of DMA requests generated after a               trigger event, then stop generating. The actual               number of generated DMA requests is GNBREQ+1. Note:               This field can only be written when GE bit is               reset. */
};

const Field_t DMAMUX_RGSR_fields[] = {
   { "\x3c\x60", 0, 4 },  /* OF: Trigger event overrun flag The flag is               set when a trigger event occurs on DMA request               generator channel x, while the DMA request generator               counter value is lower than GNBREQ. The flag is               cleared by writing 1 to the corresponding COFx bit in               DMAMUX_RGCFR register. */
};

const Field_t DMAMUX_RGCFR_fields[] = {
   { "\x0c\xf1\x80", 0, 4 },  /* COF: Clear trigger event overrun flag Upon               setting, this bit clears the corresponding overrun               flag OFx in the DMAMUX_RGCSR register. */
};

const Register_t DMAMUX_registers[] = {
   {"\x0d\xb0\xd2", 0, 32, 0, DMAMUX_C0CR_fields, 7}, /* C0CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc0\xd2", 4, 32, 0, DMAMUX_C1CR_fields, 7}, /* C1CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xd0\xd2", 8, 32, 0, DMAMUX_C2CR_fields, 7}, /* C2CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xe0\xd2", 12, 32, 0, DMAMUX_C3CR_fields, 7}, /* C3CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xf0\xd2", 16, 32, 0, DMAMUX_C4CR_fields, 7}, /* C4CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0e\x00\xd2", 20, 32, 0, DMAMUX_C5CR_fields, 7}, /* C5CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0e\x10\xd2", 24, 32, 0, DMAMUX_C6CR_fields, 7}, /* C6CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0e\x20\xd2", 28, 32, 0, DMAMUX_C7CR_fields, 7}, /* C7CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0e\x30\xd2", 32, 32, 0, DMAMUX_C8CR_fields, 7}, /* C8CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0e\x40\xd2", 36, 32, 0, DMAMUX_C9CR_fields, 7}, /* C9CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc6\xc3\x48", 40, 32, 0, DMAMUX_C10CR_fields, 7}, /* C10CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc7\x03\x48", 44, 32, 0, DMAMUX_C11CR_fields, 7}, /* C11CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc7\x43\x48", 48, 32, 0, DMAMUX_C12CR_fields, 7}, /* C12CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc7\x83\x48", 52, 32, 0, DMAMUX_C13CR_fields, 7}, /* C13CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc7\xc3\x48", 56, 32, 0, DMAMUX_C14CR_fields, 7}, /* C14CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\xc8\x03\x48", 60, 32, 0, DMAMUX_C15CR_fields, 7}, /* C15CR: DMAMux - DMA request line multiplexer           channel x control register */
   {"\x0d\x34\x80", 128, 32, 0, DMAMUX_CSR_fields, 1}, /* CSR: DMAMUX request line multiplexer interrupt           channel status register */
   {"\x0c\x64\x80", 132, 32, 0, DMAMUX_CFR_fields, 1}, /* CFR: DMAMUX request line multiplexer interrupt           clear flag register */
   {"\x48\x76\xc3\x48", 256, 32, 0, DMAMUX_RG0CR_fields, 5}, /* RG0CR: DMAMux - DMA request generator channel x           control register */
   {"\x48\x77\x03\x48", 260, 32, 0, DMAMUX_RG1CR_fields, 5}, /* RG1CR: DMAMux - DMA request generator channel x           control register */
   {"\x48\x77\x43\x48", 264, 32, 0, DMAMUX_RG2CR_fields, 5}, /* RG2CR: DMAMux - DMA request generator channel x           control register */
   {"\x48\x77\x83\x48", 268, 32, 0, DMAMUX_RG3CR_fields, 5}, /* RG3CR: DMAMux - DMA request generator channel x           control register */
   {"\x48\x74\xd2", 320, 32, 0, DMAMUX_RGSR_fields, 1}, /* RGSR: DMAMux - DMA request generator status           register */
   {"\x48\x70\xc6\x48", 324, 32, 0, DMAMUX_RGCFR_fields, 1}, /* RGCFR: DMAMux - DMA request generator clear flag           register */
};

const Field_t CORDIC_CSR_fields[] = {
   { "\x19\x53\x83", 0, 4 },  /* FUNC: FUNC */
   { "\x41\x21\x43\x25\x32\x4f\x38", 4, 4 },  /* PRECISION: PRECISION */
   { "\x4c\x30\x4c\x14", 8, 3 },  /* SCALE: SCALE */
   { "\x24\x53\x80", 16, 1 },  /* IEN: IEN */
   { "\x10\xd0\x52\x14\xe0", 17, 1 },  /* DMAREN: DMAREN */
   { "\x10\xd0\x57\x14\xe0", 18, 1 },  /* DMAWEN: DMAWEN */
   { "\x39\x21\x53", 19, 1 },  /* NRES: NRES */
   { "\x38\x14\x87\x4c", 20, 1 },  /* NARGS: NARGS */
   { "\x48\x54\xd3\x25\xa1\x40", 21, 1 },  /* RESSIZE: RESSIZE */
   { "\x05\x21\xd3\x25\xa1\x40", 22, 1 },  /* ARGSIZE: ARGSIZE */
   { "\x49\x21\x19", 31, 1 },  /* RRDY: RRDY */
};

const Field_t CORDIC_WDATA_fields[] = {
   { "\x05\x21\xc0", 0, 32 },  /* ARG: ARG */
};

const Field_t CORDIC_RDATA_fields[] = {
   { "\x48\x54\xc0", 0, 32 },  /* RES: RES */
};

const Register_t CORDIC_registers[] = {
   {"\x0d\x34\x80", 0, 32, 0, CORDIC_CSR_fields, 11}, /* CSR: CORDIC Control Status register */
   {"\x5c\x40\x54\x04", 4, 32, 0, CORDIC_WDATA_fields, 1}, /* WDATA: FMAC Write Data register */
   {"\x48\x40\x54\x04", 8, 32, 0, CORDIC_RDATA_fields, 1}, /* RDATA: FMAC Read Data register */
};

const Field_t RCC_CR_fields[] = {
   { "\x21\x32\x4f\x38", 8, 1 },  /* HSION: HSI clock enable */
   { "\x21\x32\x4b\x15\x23\xce", 9, 1 },  /* HSIKERON: HSI always enable for peripheral               kernels */
   { "\x21\x32\x52\x11\x90", 10, 1 },  /* HSIRDY: HSI clock ready flag */
   { "\x21\x31\x4f\x38", 16, 1 },  /* HSEON: HSE clock enable */
   { "\x21\x31\x52\x11\x90", 17, 1 },  /* HSERDY: HSE clock ready flag */
   { "\x21\x31\x42\x65\x00", 18, 1 },  /* HSEBYP: HSE crystal oscillator               bypass */
   { "\x21\x31\x43\x4d\x33\xce", 19, 1 },  /* HSECSSON: Clock security system               enable */
   { "\x40\xc3\x13\x65\x33\xce", 24, 1 },  /* PLLSYSON: Main PLL enable */
   { "\x40\xc3\x13\x65\x34\x84\x64", 25, 1 },  /* PLLSYSRDY: Main PLL clock ready flag */
};

const Field_t RCC_ICSCR_fields[] = {
   { "\x21\x32\x43\x04\xc6\xc0", 16, 8 },  /* HSICAL0: Internal High Speed clock               Calibration */
   { "\x21\x32\x54\x48\x93\x40", 24, 7 },  /* HSITRIM: Internal High Speed clock               trimming */
};

const Field_t RCC_CFGR_fields[] = {
   { "\x4d\x70", 0, 2 },  /* SW: System clock switch */
   { "\x4d\x74\xc0", 2, 2 },  /* SWS: System clock switch status */
   { "\x21\x04\x85", 4, 4 },  /* HPRE: AHB prescaler */
   { "\x41\x04\x85\x70", 8, 3 },  /* PPRE1: PB low-speed prescaler               (APB1) */
   { "\x41\x04\x85\x74", 11, 3 },  /* PPRE2: APB high-speed prescaler               (APB2) */
   { "\x34\x33\xd3\x14\xc0", 24, 4 },  /* MCOSEL: Microcontroller clock               output */
   { "\x34\x33\xd0\x48\x50", 28, 3 },  /* MCOPRE: Microcontroller clock output               prescaler */
};

const Field_t RCC_PLLSYSCFGR_fields[] = {
   { "\x40\xc3\x13\x48\x30", 0, 2 },  /* PLLSRC: Main PLL, PLLSAI1 and PLLSAI2 entry               clock source */
   { "\x40\xc3\x13\x65\x33\x40", 4, 4 },  /* PLLSYSM: Division factor for the main PLL and               audio PLL (PLLSAI1 and PLLSAI2) input               clock */
   { "\x40\xc3\x13\x65\x33\x80", 8, 7 },  /* PLLSYSN: Main PLL multiplication factor for               VCO */
   { "\x40\xc3\x10\x14\xe0", 16, 1 },  /* PLLPEN: Main PLL PLLSAI3CLK output               enable */
   { "\x40\xc3\x13\x65\x34\x00", 17, 1 },  /* PLLSYSP: Main PLL division factor for PLLSAI3CLK               (SAI1 and SAI2 clock) */
   { "\x40\xc3\x13\x65\x34\x45\x38", 20, 1 },  /* PLLSYSQEN: Main PLL PLLUSB1CLK output               enable */
   { "\x40\xc3\x13\x65\x34\x40", 21, 2 },  /* PLLSYSQ: Main PLL division factor for               PLLUSB1CLK(48 MHz clock) */
   { "\x40\xc3\x13\x65\x34\x85\x38", 24, 1 },  /* PLLSYSREN: Main PLL PLLCLK output               enable */
   { "\x40\xc3\x13\x65\x34\x80", 25, 2 },  /* PLLSYSR: Main PLL division factor for PLLCLK               (system clock) */
   { "\x40\xc3\x13\x65\x34\x04\x25\x60", 27, 5 },  /* PLLSYSPDIV: Main PLL division factor for               PLLSAI2CLK */
};

const Field_t RCC_CIER_fields[] = {
   { "\x31\x32\x52\x11\x92\x45", 0, 1 },  /* LSIRDYIE: LSI ready interrupt enable */
   { "\x31\x31\x52\x11\x92\x45", 1, 1 },  /* LSERDYIE: LSE ready interrupt enable */
   { "\x21\x32\x52\x11\x92\x45", 3, 1 },  /* HSIRDYIE: HSI ready interrupt enable */
   { "\x21\x31\x52\x11\x92\x45", 4, 1 },  /* HSERDYIE: HSE ready interrupt enable */
   { "\x40\xc3\x13\x65\x34\x84\x64\x91\x40", 5, 1 },  /* PLLSYSRDYIE: PLL ready interrupt enable */
   { "\x31\x31\x43\x4d\x32\x45", 9, 1 },  /* LSECSSIE: LSE clock security system interrupt               enable */
   { "\x48\x37\xe3\x48\x46\x49\x14", 10, 1 },  /* RC48RDYIE: HSI48 ready interrupt               enable */
};

const Field_t RCC_CIFR_fields[] = {
   { "\x31\x32\x52\x11\x91\x80", 0, 1 },  /* LSIRDYF: LSI ready interrupt flag */
   { "\x31\x31\x52\x11\x91\x80", 1, 1 },  /* LSERDYF: LSE ready interrupt flag */
   { "\x21\x32\x52\x11\x91\x80", 3, 1 },  /* HSIRDYF: HSI ready interrupt flag */
   { "\x21\x31\x52\x11\x91\x80", 4, 1 },  /* HSERDYF: HSE ready interrupt flag */
   { "\x40\xc3\x13\x65\x34\x84\x64\x60", 5, 1 },  /* PLLSYSRDYF: PLL ready interrupt flag */
   { "\x21\x31\x43\x4d\x31\x80", 8, 1 },  /* HSECSSF: Clock security system interrupt               flag */
   { "\x31\x31\x43\x4d\x31\x80", 9, 1 },  /* LSECSSF: LSE Clock security system interrupt               flag */
   { "\x48\x37\xe3\x48\x46\x46", 10, 1 },  /* RC48RDYF: HSI48 ready interrupt flag */
};

const Field_t RCC_CICR_fields[] = {
   { "\x31\x32\x52\x11\x90\xc0", 0, 1 },  /* LSIRDYC: LSI ready interrupt clear */
   { "\x31\x31\x52\x11\x90\xc0", 1, 1 },  /* LSERDYC: LSE ready interrupt clear */
   { "\x21\x32\x52\x11\x90\xc0", 3, 1 },  /* HSIRDYC: HSI ready interrupt clear */
   { "\x21\x31\x52\x11\x90\xc0", 4, 1 },  /* HSERDYC: HSE ready interrupt clear */
   { "\x40\xc3\x13\x65\x34\x84\x64\x30", 5, 1 },  /* PLLSYSRDYC: PLL ready interrupt clear */
   { "\x21\x31\x43\x4d\x30\xc0", 8, 1 },  /* HSECSSC: Clock security system interrupt               clear */
   { "\x31\x31\x43\x4d\x30\xc0", 9, 1 },  /* LSECSSC: LSE Clock security system interrupt               clear */
   { "\x48\x37\xe3\x48\x46\x43", 10, 1 },  /* RC48RDYC: HSI48 oscillator ready interrupt               clear */
};

const Field_t RCC_AHB1RSTR_fields[] = {
   { "\x10\xd0\x5c\x49\x35\x00", 0, 1 },  /* DMA1RST: DMA1 reset */
   { "\x10\xd0\x5d\x49\x35\x00", 1, 1 },  /* DMA2RST: DMA2 reset */
   { "\x10\xd0\x4d\x55\x87\x12\x4d\x40", 2, 1 },  /* DMAMUX1RST: DMAMUXRST */
   { "\x0c\xf4\x84\x24\x34\x93\x50", 3, 1 },  /* CORDICRST: CORDIC reset */
   { "\x34\x15\x12\x25\x84\x93\x50", 4, 1 },  /* MATRIXRST: MATRIX reset */
   { "\x18\xc2\x54\x19\x24\xd4\x94", 8, 1 },  /* FLITFRST_: FLITF reset */
   { "\x0d\x20\xd2\x4d\x40", 12, 1 },  /* CRCRST: CRC reset */
};

const Field_t RCC_AHB2RSTR_fields[] = {
   { "\x1d\x02\x4f\x05\x24\xd4", 0, 1 },  /* GPIOARST: IO port A reset */
   { "\x1d\x02\x4f\x09\x24\xd4", 1, 1 },  /* GPIOBRST: IO port B reset */
   { "\x1d\x02\x4f\x0d\x24\xd4", 2, 1 },  /* GPIOCRST: IO port C reset */
   { "\x1d\x02\x4f\x11\x24\xd4", 3, 1 },  /* GPIODRST: IO port D reset */
   { "\x1d\x02\x4f\x15\x24\xd4", 4, 1 },  /* GPIOERST: IO port E reset */
   { "\x1d\x02\x4f\x19\x24\xd4", 5, 1 },  /* GPIOFRST: IO port F reset */
   { "\x1d\x02\x4f\x1d\x24\xd4", 6, 1 },  /* GPIOGRST: IO port G reset */
   { "\x04\x40\xdc\x75\x24\xd4", 13, 1 },  /* ADC12RST: ADC reset */
   { "\x04\x40\xde\x7e\x04\x93\x52\x50", 14, 1 },  /* ADC345RST_: SAR ADC345 interface reset */
   { "\x10\x10\xdc\x49\x35\x25", 16, 1 },  /* DAC1RST_: DAC1 interface reset */
   { "\x10\x10\xdd\x49\x35\x00", 17, 1 },  /* DAC2RST: DAC2 interface reset */
   { "\x10\x10\xde\x49\x35\x00", 18, 1 },  /* DAC3RST: DAC3 interface reset */
   { "\x10\x10\xdf\x49\x35\x00", 19, 1 },  /* DAC4RST: DAC4 interface reset */
   { "\x0d\x26\x50\x51\x24\xd4", 24, 1 },  /* CRYPTRST: Cryptography module reset */
   { "\x48\xe1\xd2\x4d\x40", 26, 1 },  /* RNGRST: Random Number Generator module               reset */
};

const Field_t RCC_AHB3RSTR_fields[] = {
   { "\x18\xd0\xd2\x4d\x40", 0, 1 },  /* FMCRST: Flexible memory controller               reset */
   { "\x45\x50\x44\x4d\x02\x5c\x49\x35\x00", 8, 1 },  /* QUADSPI1RST: Quad SPI 1 module reset */
};

const Field_t RCC_APB1RSTR1_fields[] = {
   { "\x50\x93\x5d\x49\x35\x00", 0, 1 },  /* TIM2RST: TIM2 timer reset */
   { "\x50\x93\x5e\x49\x35\x00", 1, 1 },  /* TIM3RST: TIM3 timer reset */
   { "\x50\x93\x5f\x49\x35\x00", 2, 1 },  /* TIM4RST: TIM3 timer reset */
   { "\x50\x93\x60\x49\x35\x00", 3, 1 },  /* TIM5RST: TIM5 timer reset */
   { "\x50\x93\x61\x49\x35\x00", 4, 1 },  /* TIM6RST: TIM6 timer reset */
   { "\x50\x93\x62\x49\x35\x00", 5, 1 },  /* TIM7RST: TIM7 timer reset */
   { "\x0d\x24\xd2\x4d\x40", 8, 1 },  /* CRSRST: Clock recovery system               reset */
   { "\x4d\x02\x5d\x49\x35\x00", 14, 1 },  /* SPI2RST: SPI2 reset */
   { "\x4d\x02\x5e\x49\x35\x00", 15, 1 },  /* SPI3RST: SPI3 reset */
   { "\x55\x30\x52\x51\xd4\x93\x50", 17, 1 },  /* USART2RST: USART2 reset */
   { "\x55\x30\x52\x51\xe4\x93\x50", 18, 1 },  /* USART3RST: USART3 reset */
   { "\x54\x14\x94\x7d\x24\xd4", 19, 1 },  /* UART4RST: UART4 reset */
   { "\x54\x14\x94\x81\x24\xd4", 20, 1 },  /* UART5RST: UART5 reset */
   { "\x25\xd0\xdc\x49\x35\x00", 21, 1 },  /* I2C1RST: I2C1 reset */
   { "\x25\xd0\xdd\x49\x35\x00", 22, 1 },  /* I2C2RST: I2C2 reset */
   { "\x55\x30\x84\x49\x35\x00", 23, 1 },  /* USBDRST: USBD reset */
   { "\x18\x40\xc1\x39\x24\xd4", 25, 1 },  /* FDCANRST: FDCAN reset */
   { "\x41\x74\x92\x4d\x40", 28, 1 },  /* PWRRST: Power interface reset */
   { "\x25\xd0\xde", 30, 1 },  /* I2C3: I2C3 interface reset */
   { "\x31\x05\x09\x35\xc4\x93\x50", 31, 1 },  /* LPTIM1RST: Low Power Timer 1 reset */
};

const Field_t RCC_APB1RSTR2_fields[] = {
   { "\x31\x05\x41\x49\x47\x12\x4d\x40", 0, 1 },  /* LPUART1RST: Low-power UART 1 reset */
   { "\x25\xd0\xdf\x49\x35\x00", 1, 1 },  /* I2C4RST: I2C4 reset */
   { "\x55\x30\x90\x11\x24\xd4", 8, 1 },  /* USBPDRST: USBPD reset */
};

const Field_t RCC_APB2RSTR_fields[] = {
   { "\x4d\x94\xc3\x18\x74\x93\x50", 0, 1 },  /* SYSCFGRST: System configuration (SYSCFG)               reset */
   { "\x50\x93\x5c\x49\x35\x00", 11, 1 },  /* TIM1RST: TIM1 timer reset */
   { "\x4d\x02\x5c\x49\x35\x00", 12, 1 },  /* SPI1RST: SPI1 reset */
   { "\x50\x93\x63\x49\x35\x00", 13, 1 },  /* TIM8RST: TIM8 timer reset */
   { "\x55\x30\x52\x51\xc4\x93\x50", 14, 1 },  /* USART1RST: USART1 reset */
   { "\x4d\x02\x5f\x49\x35\x00", 15, 1 },  /* SPI4RST: SPI 4 reset */
   { "\x50\x93\x5c\x81\x24\xd4", 16, 1 },  /* TIM15RST: TIM15 timer reset */
   { "\x50\x93\x5c\x85\x24\xd4", 17, 1 },  /* TIM16RST: TIM16 timer reset */
   { "\x50\x93\x5c\x89\x24\xd4", 18, 1 },  /* TIM17RST: TIM17 timer reset */
   { "\x50\x93\x5d\x6d\x24\xd4", 20, 1 },  /* TIM20RST: Timer 20 reset */
   { "\x4c\x12\x5c\x49\x35\x00", 21, 1 },  /* SAI1RST: Serial audio interface 1 (SAI1)               reset */
   { "\x21\x25\x09\x35\xc4\x93\x50", 26, 1 },  /* HRTIM1RST: HRTIMER reset */
};

const Field_t RCC_AHB1ENR_fields[] = {
   { "\x10\xd0\x5c\x14\xe0", 0, 1 },  /* DMA1EN: DMA1 clock enable */
   { "\x10\xd0\x5d\x14\xe0", 1, 1 },  /* DMA2EN: DMA2 clock enable */
   { "\x10\xd0\x4d\x55\x81\x4e", 2, 1 },  /* DMAMUXEN: DMAMUX clock enable */
   { "\x0c\xf4\x84\x24\x31\x4e", 3, 1 },  /* CORDICEN: CORDIC clock enable */
   { "\x18\xd0\x43\x14\xe0", 4, 1 },  /* FMACEN: FMAC clock enable */
   { "\x18\xc2\x54\x18\x53\x80", 8, 1 },  /* FLITFEN: FLITF clock enable */
   { "\x0d\x20\xc5\x38", 12, 1 },  /* CRCEN: CRC clock enable */
};

const Field_t RCC_AHB2ENR_fields[] = {
   { "\x1d\x02\x4f\x04\x53\x80", 0, 1 },  /* GPIOAEN: IO port A clock enable */
   { "\x1d\x02\x4f\x08\x53\x80", 1, 1 },  /* GPIOBEN: IO port B clock enable */
   { "\x1d\x02\x4f\x0c\x53\x80", 2, 1 },  /* GPIOCEN: IO port C clock enable */
   { "\x1d\x02\x4f\x10\x53\x80", 3, 1 },  /* GPIODEN: IO port D clock enable */
   { "\x1d\x02\x4f\x14\x53\x80", 4, 1 },  /* GPIOEEN: IO port E clock enable */
   { "\x1d\x02\x4f\x18\x53\x80", 5, 1 },  /* GPIOFEN: IO port F clock enable */
   { "\x1d\x02\x4f\x1c\x53\x80", 6, 1 },  /* GPIOGEN: IO port G clock enable */
   { "\x04\x40\xdc\x74\x53\x80", 13, 1 },  /* ADC12EN: ADC clock enable */
   { "\x04\x40\xde\x7e\x01\x4e", 14, 1 },  /* ADC345EN: DCMI clock enable */
   { "\x10\x10\xdc", 16, 1 },  /* DAC1: AES accelerator clock               enable */
   { "\x10\x10\xdd", 17, 1 },  /* DAC2: HASH clock enable */
   { "\x10\x10\xde", 18, 1 },  /* DAC3: Random Number Generator clock               enable */
   { "\x10\x10\xdf", 19, 1 },  /* DAC4: DAC4 clock enable */
   { "\x0d\x26\x50\x50\x53\x80", 24, 1 },  /* CRYPTEN: Cryptography clock enable */
   { "\x48\xe1\xc5\x38", 26, 1 },  /* RNGEN: Random Number Generator clock               enable */
};

const Field_t RCC_AHB3ENR_fields[] = {
   { "\x18\xd0\xc5\x38", 0, 1 },  /* FMCEN: Flexible memory controller clock               enable */
   { "\x45\x50\x44\x4d\x02\x5c\x14\xe0", 8, 1 },  /* QUADSPI1EN: Quad SPI 1 module clock               enable */
};

const Field_t RCC_APB1ENR1_fields[] = {
   { "\x50\x93\x5d\x14\xe0", 0, 1 },  /* TIM2EN: TIM2 timer clock enable */
   { "\x50\x93\x5e\x14\xe0", 1, 1 },  /* TIM3EN: TIM3 timer clock enable */
   { "\x50\x93\x5f\x14\xe0", 2, 1 },  /* TIM4EN: TIM4 timer clock enable */
   { "\x50\x93\x60\x14\xe0", 3, 1 },  /* TIM5EN: TIM5 timer clock enable */
   { "\x50\x93\x61\x14\xe0", 4, 1 },  /* TIM6EN: TIM6 timer clock enable */
   { "\x50\x93\x62\x14\xe0", 5, 1 },  /* TIM7EN: TIM7 timer clock enable */
   { "\x0d\x24\xc5\x38", 8, 1 },  /* CRSEN: CRSclock enable */
   { "\x49\x40\xc1\x40\x21\x4e", 10, 1 },  /* RTCAPBEN: RTC APB clock enable */
   { "\x5d\x71\x07\x14\xe0", 11, 1 },  /* WWDGEN: Window watchdog clock               enable */
   { "\x4d\x02\x5d\x14\xe0", 14, 1 },  /* SPI2EN: SPI2 clock enable */
   { "\x4d\x07\x85\x38", 15, 1 },  /* SP3EN: SPI3 clock enable */
   { "\x55\x30\x52\x51\xd1\x4e", 17, 1 },  /* USART2EN: USART2 clock enable */
   { "\x55\x30\x52\x51\xe1\x4e", 18, 1 },  /* USART3EN: USART3 clock enable */
   { "\x54\x14\x94\x7c\x53\x80", 19, 1 },  /* UART4EN: UART4 clock enable */
   { "\x54\x14\x94\x80\x53\x80", 20, 1 },  /* UART5EN: UART5 clock enable */
   { "\x25\xd0\xdc\x14\xe0", 21, 1 },  /* I2C1EN: I2C1 clock enable */
   { "\x25\xd0\xdd\x14\xe0", 22, 1 },  /* I2C2EN: I2C2 clock enable */
   { "\x55\x30\x84\x14\xe0", 23, 1 },  /* USBDEN: USBDclock enable */
   { "\x18\x40\xc1\x38\x53\x80", 25, 1 },  /* FDCANEN: FDCAN clock enable */
   { "\x41\x74\x85\x38", 28, 1 },  /* PWREN: Power interface clock               enable */
   { "\x25\xd0\xde", 30, 1 },  /* I2C3: OPAMP interface clock               enable */
   { "\x31\x05\x09\x35\xc1\x4e", 31, 1 },  /* LPTIM1EN: Low power timer 1 clock               enable */
};

const Field_t RCC_APB1ENR2_fields[] = {
   { "\x31\x05\x41\x49\x47\x05\x38", 0, 1 },  /* LPUART1EN: Low power UART 1 clock               enable */
   { "\x25\xd0\xdf\x14\xe0", 1, 1 },  /* I2C4EN: I2C4 clock enable */
   { "\x55\x30\x90\x10\x53\x80", 8, 1 },  /* USBPDEN: USBPD clock enable */
};

const Field_t RCC_APB2ENR_fields[] = {
   { "\x4d\x94\xc3\x18\x71\x4e", 0, 1 },  /* SYSCFGEN: SYSCFG clock enable */
   { "\x50\x93\x5c\x14\xe0", 11, 1 },  /* TIM1EN: TIM1 timer clock enable */
   { "\x4d\x02\x5c\x14\xe0", 12, 1 },  /* SPI1EN: SPI1 clock enable */
   { "\x50\x93\x63\x14\xe0", 13, 1 },  /* TIM8EN: TIM8 timer clock enable */
   { "\x55\x30\x52\x51\xc1\x4e", 14, 1 },  /* USART1EN: USART1clock enable */
   { "\x4d\x02\x5f\x14\xe0", 15, 1 },  /* SPI4EN: SPI 4 clock enable */
   { "\x50\x93\x5c\x80\x53\x80", 16, 1 },  /* TIM15EN: TIM15 timer clock enable */
   { "\x50\x93\x5c\x84\x53\x80", 17, 1 },  /* TIM16EN: TIM16 timer clock enable */
   { "\x50\x93\x5c\x88\x53\x80", 18, 1 },  /* TIM17EN: TIM17 timer clock enable */
   { "\x50\x93\x5d\x6c\x53\x80", 20, 1 },  /* TIM20EN: Timer 20 clock enable */
   { "\x4c\x12\x5c\x14\xe0", 21, 1 },  /* SAI1EN: SAI1 clock enable */
   { "\x21\x25\x09\x34\x54\x85\x38", 26, 1 },  /* HRTIMEREN: HRTIMER clock enable */
};

const Field_t RCC_AHB1SMENR_fields[] = {
   { "\x10\xd0\x5c\x4c\xd1\x4e", 0, 1 },  /* DMA1SMEN: DMA1 clocks enable during Sleep and Stop               modes */
   { "\x10\xd0\x5d\x4c\xd1\x4e", 1, 1 },  /* DMA2SMEN: DMA2 clocks enable during Sleep and Stop               modes */
   { "\x10\xd0\x4d\x55\x87\x13\x34\x53\x80", 2, 1 },  /* DMAMUX1SMEN: DMAMUX clock enable during Sleep and               Stop modes */
   { "\x0c\xf4\x84\x24\x34\xcd\x14\xe0", 3, 1 },  /* CORDICSMEN: CORDIC clock enable during sleep               mode */
   { "\x18\xd0\x43\x4c\xd1\x4e", 4, 1 },  /* FMACSMEN: FMACSM clock enable */
   { "\x18\xc0\x53\x21\x33\x45\x38", 8, 1 },  /* FLASHSMEN: Flash memory interface clocks enable               during Sleep and Stop modes */
   { "\x4d\x20\x4d\x71\x33\x45\x38", 9, 1 },  /* SRAM1SMEN: SRAM1 interface clocks enable during               Sleep and Stop modes */
   { "\x0d\x20\xd3\x34\x53\x80", 12, 1 },  /* CRCSMEN: CRCSMEN */
};

const Field_t RCC_AHB2SMENR_fields[] = {
   { "\x1d\x02\x4f\x05\x33\x45\x38", 0, 1 },  /* GPIOASMEN: IO port A clocks enable during Sleep and               Stop modes */
   { "\x1d\x02\x4f\x09\x33\x45\x38", 1, 1 },  /* GPIOBSMEN: IO port B clocks enable during Sleep and               Stop modes */
   { "\x1d\x02\x4f\x0d\x33\x45\x38", 2, 1 },  /* GPIOCSMEN: IO port C clocks enable during Sleep and               Stop modes */
   { "\x1d\x02\x4f\x11\x33\x45\x38", 3, 1 },  /* GPIODSMEN: IO port D clocks enable during Sleep and               Stop modes */
   { "\x1d\x02\x4f\x15\x33\x45\x38", 4, 1 },  /* GPIOESMEN: IO port E clocks enable during Sleep and               Stop modes */
   { "\x1d\x02\x4f\x19\x33\x45\x38", 5, 1 },  /* GPIOFSMEN: IO port F clocks enable during Sleep and               Stop modes */
   { "\x1d\x02\x4f\x1d\x33\x45\x38", 6, 1 },  /* GPIOGSMEN: IO port G clocks enable during Sleep and               Stop modes */
   { "\x4d\x20\x4d\x75\x33\x45\x38", 9, 1 },  /* SRAM2SMEN: SRAM2 interface clocks enable during               Sleep and Stop modes */
   { "\x4d\x20\x4d\x79\x33\x45\x38", 10, 1 },  /* SRAM3SMEN: SRAM2 interface clocks enable during               Sleep and Stop modes */
   { "\x04\x47\x1d\x0d\x33\x45\x38", 13, 1 },  /* AD12CSMEN: ADC clocks enable during Sleep and Stop               modes */
   { "\x04\x40\xde\x7e\x04\xcd\x14\xe0", 14, 1 },  /* ADC345SMEN: DCMI clock enable during Sleep and Stop               modes */
   { "\x10\x10\xdc\x4c\xd1\x4e", 16, 1 },  /* DAC1SMEN: AES accelerator clocks enable during               Sleep and Stop modes */
   { "\x10\x10\xdd\x4c\xd1\x4e", 17, 1 },  /* DAC2SMEN: HASH clock enable during Sleep and Stop               modes */
   { "\x10\x10\xde\x4c\xd1\x4e", 18, 1 },  /* DAC3SMEN: DAC3 clock enable during sleep               mode */
   { "\x10\x10\xdf\x4c\xd1\x4e", 19, 1 },  /* DAC4SMEN: DAC4 clock enable during sleep               mode */
   { "\x0d\x26\x50\x51\x33\x45\x38", 24, 1 },  /* CRYPTSMEN: Cryptography clock enable during sleep               mode */
   { "\x48\xe1\xd3\x34\x53\x80", 26, 1 },  /* RNGSMEN: Random Number Generator clock enable               during sleep mode */
};

const Field_t RCC_AHB3SMENR_fields[] = {
   { "\x18\xd0\xd3\x34\x53\x80", 0, 1 },  /* FMCSMEN: Flexible memory controller clocks enable               during Sleep and Stop modes */
   { "\x45\x50\x44\x4d\x02\x5c\x4c\xd1\x4e", 8, 1 },  /* QUADSPI1SMEN: QUAD SPI 1 module clock enable during               sleep mode */
};

const Field_t RCC_APB1SMENR1_fields[] = {
   { "\x50\x93\x5d\x4c\xd1\x4e", 0, 1 },  /* TIM2SMEN: TIM2 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x5e\x4c\xd1\x4e", 1, 1 },  /* TIM3SMEN: TIM3 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x5f\x4c\xd1\x4e", 2, 1 },  /* TIM4SMEN: TIM4 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x60\x4c\xd1\x4e", 3, 1 },  /* TIM5SMEN: TIM5 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x61\x4c\xd1\x4e", 4, 1 },  /* TIM6SMEN: TIM6 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x62\x4c\xd1\x4e", 5, 1 },  /* TIM7SMEN: TIM7 timer clocks enable during Sleep               and Stop modes */
   { "\x0d\x24\xd3\x34\x53\x80", 8, 1 },  /* CRSSMEN: CRS clock enable during sleep               mode */
   { "\x49\x40\xc1\x40\x24\xcd\x14\xe0", 10, 1 },  /* RTCAPBSMEN: RTC APB clock enable during Sleep and               Stop modes */
   { "\x5d\x71\x07\x4c\xd1\x4e", 11, 1 },  /* WWDGSMEN: Window watchdog clocks enable during               Sleep and Stop modes */
   { "\x4d\x02\x5d\x4c\xd1\x4e", 14, 1 },  /* SPI2SMEN: SPI2 clocks enable during Sleep and Stop               modes */
   { "\x4d\x07\x93\x34\x53\x80", 15, 1 },  /* SP3SMEN: SPI3 clocks enable during Sleep and Stop               modes */
   { "\x55\x30\x52\x51\xd4\xcd\x14\xe0", 17, 1 },  /* USART2SMEN: USART2 clocks enable during Sleep and               Stop modes */
   { "\x55\x30\x52\x51\xe4\xcd\x14\xe0", 18, 1 },  /* USART3SMEN: USART3 clocks enable during Sleep and               Stop modes */
   { "\x54\x14\x94\x7d\x33\x45\x38", 19, 1 },  /* UART4SMEN: UART4 clocks enable during Sleep and               Stop modes */
   { "\x54\x14\x94\x81\x33\x45\x38", 20, 1 },  /* UART5SMEN: UART5 clocks enable during Sleep and               Stop modes */
   { "\x25\xd0\xdc\x4c\xd1\x4e", 21, 1 },  /* I2C1SMEN: I2C1 clocks enable during Sleep and Stop               modes */
   { "\x25\xd0\xdd\x4c\xd1\x4e", 22, 1 },  /* I2C2SMEN: I2C2 clocks enable during Sleep and Stop               modes */
   { "\x25\xd0\xde\x4c\xd1\x4e", 23, 1 },  /* I2C3SMEN: I2C3 clocks enable during Sleep and Stop               modes */
   { "\x18\x40\xc1\x39\x33\x45\x38", 25, 1 },  /* FDCANSMEN: FDCAN clock enable during sleep               mode */
   { "\x41\x74\x93\x34\x53\x80", 28, 1 },  /* PWRSMEN: Power interface clocks enable during               Sleep and Stop modes */
   { "\x25\xd0\xde\x4c\xd1\x4e\x95\xe0", 30, 1 },  /* I2C3SMEN_3: I2C 3 interface clock enable during               sleep mode */
   { "\x31\x05\x09\x35\xc4\xcd\x14\xe0", 31, 1 },  /* LPTIM1SMEN: Low Power Timer1 clock enable during               sleep mode */
};

const Field_t RCC_APB1SMENR2_fields[] = {
   { "\x31\x05\x41\x49\x47\x13\x34\x53\x80", 0, 1 },  /* LPUART1SMEN: Low power UART 1 clocks enable during               Sleep and Stop modes */
   { "\x25\xd0\xdf\x4c\xd1\x4e", 1, 1 },  /* I2C4SMEN: I2C4 clocks enable during Sleep and Stop               modes */
   { "\x55\x30\x90\x11\x33\x45\x38", 8, 1 },  /* USBPDSMEN: USB PD clock enable during sleep               mode */
};

const Field_t RCC_APB2SMENR_fields[] = {
   { "\x4d\x94\xc3\x18\x74\xcd\x14\xe0", 0, 1 },  /* SYSCFGSMEN: SYSCFG clocks enable during Sleep and               Stop modes */
   { "\x50\x93\x5c\x4c\xd1\x4e", 11, 1 },  /* TIM1SMEN: TIM1 timer clocks enable during Sleep               and Stop modes */
   { "\x4d\x02\x5c\x4c\xd1\x4e", 12, 1 },  /* SPI1SMEN: SPI1 clocks enable during Sleep and Stop               modes */
   { "\x50\x93\x63\x4c\xd1\x4e", 13, 1 },  /* TIM8SMEN: TIM8 timer clocks enable during Sleep               and Stop modes */
   { "\x55\x30\x52\x51\xc4\xcd\x14\xe0", 14, 1 },  /* USART1SMEN: USART1clocks enable during Sleep and               Stop modes */
   { "\x4d\x02\x5f\x4c\xd1\x4e", 15, 1 },  /* SPI4SMEN: SPI4 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x5c\x81\x33\x45\x38", 16, 1 },  /* TIM15SMEN: TIM15 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x5c\x85\x33\x45\x38", 17, 1 },  /* TIM16SMEN: TIM16 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x5c\x89\x33\x45\x38", 18, 1 },  /* TIM17SMEN: TIM17 timer clocks enable during Sleep               and Stop modes */
   { "\x50\x93\x5d\x6d\x33\x45\x38", 20, 1 },  /* TIM20SMEN: Timer 20clock enable during sleep               mode */
   { "\x4c\x12\x5c\x4c\xd1\x4e", 21, 1 },  /* SAI1SMEN: SAI1 clock enable during sleep               mode */
   { "\x21\x25\x09\x34\x54\x93\x34\x53\x80", 26, 1 },  /* HRTIMERSMEN: HRTIMER clock enable during sleep               mode */
};

const Field_t RCC_CCIPR1_fields[] = {
   { "\x55\x30\x52\x51\xc4\xc5\x30", 0, 2 },  /* USART1SEL: USART1 clock source               selection */
   { "\x55\x30\x52\x51\xd4\xc5\x30", 2, 2 },  /* USART2SEL: USART2 clock source               selection */
   { "\x55\x30\x52\x51\xe4\xc5\x30", 4, 2 },  /* USART3SEL: USART3 clock source               selection */
   { "\x54\x14\x94\x7d\x31\x4c", 6, 2 },  /* UART4SEL: UART4 clock source               selection */
   { "\x54\x14\x94\x81\x31\x4c", 8, 2 },  /* UART5SEL: UART5 clock source               selection */
   { "\x31\x05\x41\x49\x47\x13\x14\xc0", 10, 2 },  /* LPUART1SEL: LPUART1 clock source               selection */
   { "\x25\xd0\xdc\x4c\x53\x00", 12, 2 },  /* I2C1SEL: I2C1 clock source               selection */
   { "\x25\xd0\xdd\x4c\x53\x00", 14, 2 },  /* I2C2SEL: I2C2 clock source               selection */
   { "\x25\xd0\xde\x4c\x53\x00", 16, 2 },  /* I2C3SEL: I2C3 clock source               selection */
   { "\x31\x05\x09\x35\xc4\xc5\x30", 18, 2 },  /* LPTIM1SEL: Low power timer 1 clock source               selection */
   { "\x4c\x12\x53\x14\xc0", 20, 2 },  /* SAISEL: Low power timer 2 clock source               selection */
   { "\x4d\x02\x53\x14\xc9\x40", 22, 2 },  /* SPISEL_: SAI1 clock source               selection */
   { "\x18\x40\xc1\x39\x31\x4c", 24, 2 },  /* FDCANSEL: SAI2 clock source               selection */
   { "\x0c\xc2\xdf\x8d\x31\x4c", 26, 2 },  /* CLK48SEL: 48 MHz clock source               selection */
   { "\x04\x40\xd3\x14\xc0", 28, 2 },  /* ADCSEL: ADCs clock source               selection */
   { "\x04\x40\xde\x7e\x04\xc5\x30", 30, 2 },  /* ADC345SEL: ADC3/4/5 clock source               selection */
};

const Field_t RCC_BDCR_fields[] = {
   { "\x31\x31\x4f\x38", 0, 1 },  /* LSEON: LSE oscillator enable */
   { "\x31\x31\x52\x11\x90", 1, 1 },  /* LSERDY: LSE oscillator ready */
   { "\x31\x31\x42\x65\x00", 2, 1 },  /* LSEBYP: LSE oscillator bypass */
   { "\x31\x31\x44\x49\x60", 3, 2 },  /* LSEDRV: SE oscillator drive               capability */
   { "\x31\x31\x43\x4d\x33\xce", 5, 1 },  /* LSECSSON: LSECSSON */
   { "\x31\x31\x43\x4d\x31\x00", 6, 1 },  /* LSECSSD: LSECSSD */
   { "\x49\x40\xd3\x14\xc0", 8, 2 },  /* RTCSEL: RTC clock source selection */
   { "\x49\x40\xc5\x38", 15, 1 },  /* RTCEN: RTC clock enable */
   { "\x59\x35\xd2\x4d\x40", 16, 1 },  /* VSWRST: Vswitch domain software               reset */
   { "\x31\x30\xc3\x3c\x53\x80", 24, 1 },  /* LSCCOEN: Low speed clock output               enable */
   { "\x31\x30\xcf\x4c\x53\x00", 25, 1 },  /* LSCOSEL: Low speed clock output               selection */
};

const Field_t RCC_CSR_fields[] = {
   { "\x31\x32\x4f\x38", 0, 1 },  /* LSION: LSI oscillator enable */
   { "\x31\x32\x52\x11\x90", 1, 1 },  /* LSIRDY: LSI oscillator ready */
   { "\x48\xd5\x86", 23, 1 },  /* RMVF: Remove reset flag */
   { "\x3c\x23\x12\x4d\x41\x80", 25, 1 },  /* OBLRSTF: Option byte loader reset               flag */
   { "\x40\x11\x12\x4d\x41\x80", 26, 1 },  /* PADRSTF: Pad reset flag */
   { "\x08\xf4\x92\x4d\x41\x80", 27, 1 },  /* BORRSTF: BOR flag */
   { "\x4c\x65\x12\x4d\x41\x80", 28, 1 },  /* SFTRSTF: Software reset flag */
   { "\x5c\x41\xd2\x4d\x41\x80", 29, 1 },  /* WDGRSTF: Independent window watchdog reset               flag */
   { "\x5d\x71\x07\x49\x35\x06", 30, 1 },  /* WWDGRSTF: Window watchdog reset flag */
   { "\x31\x05\xd2\x4d\x41\x80", 31, 1 },  /* LPWRSTF: Low-power reset flag */
};

const Field_t RCC_CRRCR_fields[] = {
   { "\x48\x37\xe3\x3c\xe0", 0, 1 },  /* RC48ON: HSI48 clock enable */
   { "\x48\x37\xe3\x48\x46\x40", 1, 1 },  /* RC48RDY: HSI48 clock ready flag */
   { "\x48\x37\xe3\x0c\x13\x00", 7, 9 },  /* RC48CAL: HSI48 clock calibration */
};

const Field_t RCC_CCIPR2_fields[] = {
   { "\x25\xd0\xdf\x4c\x53\x00", 0, 2 },  /* I2C4SEL: I2C4 clock source               selection */
   { "\x45\x50\x44\x4d\x02\x53\x14\xc0", 20, 2 },  /* QUADSPISEL: Octospi clock source               selection */
};

const Register_t RCC_registers[] = {
   {"\x0d\x20", 0, 32, 0, RCC_CR_fields, 9}, /* CR: Clock control register */
   {"\x24\x34\xc3\x48", 4, 32, 0, RCC_ICSCR_fields, 2}, /* ICSCR: Internal clock sources calibration           register */
   {"\x0c\x61\xd2", 8, 32, 0, RCC_CFGR_fields, 7}, /* CFGR: Clock configuration register */
   {"\x40\xc3\x13\x65\x30\xc6\x1d\x20", 12, 32, 0, RCC_PLLSYSCFGR_fields, 10}, /* PLLSYSCFGR: PLL configuration register */
   {"\x0c\x91\x52", 24, 32, 0, RCC_CIER_fields, 7}, /* CIER: Clock interrupt enable           register */
   {"\x0c\x91\x92", 28, 32, 0, RCC_CIFR_fields, 8}, /* CIFR: Clock interrupt flag register */
   {"\x0c\x90\xd2", 32, 32, 0, RCC_CICR_fields, 8}, /* CICR: Clock interrupt clear register */
   {"\x04\x80\x9c\x49\x35\x12", 40, 32, 0, RCC_AHB1RSTR_fields, 7}, /* AHB1RSTR: AHB1 peripheral reset register */
   {"\x04\x80\x9d\x49\x35\x12", 44, 32, 0, RCC_AHB2RSTR_fields, 15}, /* AHB2RSTR: AHB2 peripheral reset register */
   {"\x04\x80\x9e\x49\x35\x12", 48, 32, 0, RCC_AHB3RSTR_fields, 2}, /* AHB3RSTR: AHB3 peripheral reset register */
   {"\x05\x00\x9c\x49\x35\x12\x70", 56, 32, 0, RCC_APB1RSTR1_fields, 20}, /* APB1RSTR1: APB1 peripheral reset register           1 */
   {"\x05\x00\x9c\x49\x35\x12\x74", 60, 32, 0, RCC_APB1RSTR2_fields, 3}, /* APB1RSTR2: APB1 peripheral reset register           2 */
   {"\x05\x00\x9d\x49\x35\x12", 64, 32, 0, RCC_APB2RSTR_fields, 12}, /* APB2RSTR: APB2 peripheral reset register */
   {"\x04\x80\x9c\x14\xe4\x80", 72, 32, 0, RCC_AHB1ENR_fields, 7}, /* AHB1ENR: AHB1 peripheral clock enable           register */
   {"\x04\x80\x9d\x14\xe4\x80", 76, 32, 0, RCC_AHB2ENR_fields, 15}, /* AHB2ENR: AHB2 peripheral clock enable           register */
   {"\x04\x80\x9e\x14\xe4\x80", 80, 32, 0, RCC_AHB3ENR_fields, 2}, /* AHB3ENR: AHB3 peripheral clock enable           register */
   {"\x05\x00\x9c\x14\xe4\x9c", 88, 32, 0, RCC_APB1ENR1_fields, 22}, /* APB1ENR1: APB1ENR1 */
   {"\x05\x00\x9c\x14\xe4\x9d", 92, 32, 0, RCC_APB1ENR2_fields, 3}, /* APB1ENR2: APB1 peripheral clock enable register           2 */
   {"\x05\x00\x9d\x14\xe4\x80", 96, 32, 0, RCC_APB2ENR_fields, 12}, /* APB2ENR: APB2ENR */
   {"\x04\x80\x9c\x4c\xd1\x4e\x48", 104, 32, 0, RCC_AHB1SMENR_fields, 8}, /* AHB1SMENR: AHB1 peripheral clocks enable in Sleep and           Stop modes register */
   {"\x04\x80\x9d\x4c\xd1\x4e\x48", 108, 32, 0, RCC_AHB2SMENR_fields, 17}, /* AHB2SMENR: AHB2 peripheral clocks enable in Sleep and           Stop modes register */
   {"\x04\x80\x9e\x4c\xd1\x4e\x48", 112, 32, 0, RCC_AHB3SMENR_fields, 2}, /* AHB3SMENR: AHB3 peripheral clocks enable in Sleep and           Stop modes register */
   {"\x05\x00\x9c\x4c\xd1\x4e\x49\xc0", 120, 32, 0, RCC_APB1SMENR1_fields, 22}, /* APB1SMENR1: APB1SMENR1 */
   {"\x05\x00\x9c\x4c\xd1\x4e\x49\xd0", 124, 32, 0, RCC_APB1SMENR2_fields, 3}, /* APB1SMENR2: APB1 peripheral clocks enable in Sleep and           Stop modes register 2 */
   {"\x05\x00\x9d\x4c\xd1\x4e\x48", 128, 32, 0, RCC_APB2SMENR_fields, 12}, /* APB2SMENR: APB2SMENR */
   {"\x0c\x32\x50\x49\xc0", 136, 32, 0, RCC_CCIPR1_fields, 16}, /* CCIPR1: CCIPR */
   {"\x08\x40\xd2", 144, 32, 0, RCC_BDCR_fields, 11}, /* BDCR: BDCR */
   {"\x0d\x34\x80", 148, 32, 0, RCC_CSR_fields, 10}, /* CSR: CSR */
   {"\x0d\x24\x83\x48", 152, 32, 0, RCC_CRRCR_fields, 3}, /* CRRCR: Clock recovery RC register */
   {"\x0c\x32\x50\x49\xd0", 156, 32, 0, RCC_CCIPR2_fields, 2}, /* CCIPR2: Peripherals independent clock configuration           register */
};

const Field_t FMAC_X1BUFCFG_fields[] = {
   { "\x61\xc9\x42\x05\x31\x40", 0, 8 },  /* X1_BASE: X1_BASE */
   { "\x61\xc9\x42\x54\x69\x53\x25\xa1\x40", 8, 8 },  /* X1_BUF_SIZE: X1_BUF_SIZE */
   { "\x19\x53\x0c\x95\x73\x40", 24, 2 },  /* FULL_WM: FULL_WM */
};

const Field_t FMAC_X2BUFCFG_fields[] = {
   { "\x61\xd9\x42\x05\x31\x40", 0, 8 },  /* X2_BASE: X1_BASE */
   { "\x61\xd9\x42\x54\x69\x53\x25\xa1\x40", 8, 8 },  /* X2_BUF_SIZE: X1_BUF_SIZE */
};

const Field_t FMAC_YBUFCFG_fields[] = {
   { "\x66\x50\x81\x4c\x50", 0, 8 },  /* Y_BASE: X1_BASE */
   { "\x66\x50\x95\x1a\x54\xc9\x68\x50", 8, 8 },  /* Y_BUF_SIZE: X1_BUF_SIZE */
   { "\x14\xd4\x14\x66\x55\xcd", 24, 2 },  /* EMPTY_WM: EMPTY_WM */
};

const Field_t FMAC_PARAM_fields[] = {
   { "\x40", 0, 8 },  /* P: P */
   { "\x44", 8, 8 },  /* Q: Q */
   { "\x48", 16, 8 },  /* R: R */
   { "\x19\x53\x83", 24, 7 },  /* FUNC: FUNC */
   { "\x4d\x40\x52\x50", 31, 1 },  /* START: START */
};

const Field_t FMAC_CR_fields[] = {
   { "\x48\x91\x4e", 0, 1 },  /* RIEN: RIEN */
   { "\x5c\x91\x4e", 1, 1 },  /* WIEN: WIEN */
   { "\x3d\x61\x8c\x24\x53\x80", 2, 1 },  /* OVFLIEN: OVFLIEN */
   { "\x54\xe1\x8c\x24\x53\x80", 3, 1 },  /* UNFLIEN: UNFLIEN */
   { "\x4c\x15\x09\x14\xe0", 4, 1 },  /* SATIEN: SATIEN */
   { "\x10\xd0\x52\x14\xe0", 8, 1 },  /* DMAREN: DMAREN */
   { "\x10\xd0\x57\x14\xe0", 9, 1 },  /* DMAWEN: DMAWEN */
   { "\x0c\xc2\x50\x14\xe0", 15, 1 },  /* CLIPEN: CLIPEN */
   { "\x48\x54\xc5\x50", 16, 1 },  /* RESET: RESET */
};

const Field_t FMAC_SR_fields[] = {
   { "\x64\x53\x50\x51\x90", 0, 1 },  /* YEMPTY: YEMPTY */
   { "\x61\xc1\x95\x30\xc0", 1, 1 },  /* X1FULL: X1FULL */
   { "\x3d\x61\x8c", 8, 1 },  /* OVFL: OVFL */
   { "\x54\xe1\x8c", 9, 1 },  /* UNFL: UNFL */
   { "\x4c\x15\x00", 10, 1 },  /* SAT: SAT */
};

const Field_t FMAC_WDATA_fields[] = {
   { "\x5c\x40\x54\x04", 0, 16 },  /* WDATA: WDATA */
};

const Field_t FMAC_RDATA_fields[] = {
   { "\x48\x40\x54\x04", 0, 16 },  /* RDATA: RDATA */
};

const Register_t FMAC_registers[] = {
   {"\x61\xc0\x95\x18\x31\x87", 0, 32, 0, FMAC_X1BUFCFG_fields, 3}, /* X1BUFCFG: FMAC X1 Buffer Configuration           register */
   {"\x61\xd0\x95\x18\x31\x87", 4, 32, 0, FMAC_X2BUFCFG_fields, 2}, /* X2BUFCFG: FMAC X2 Buffer Configuration           register */
   {"\x64\x25\x46\x0c\x61\xc0", 8, 32, 0, FMAC_YBUFCFG_fields, 3}, /* YBUFCFG: FMAC Y Buffer Configuration           register */
   {"\x40\x14\x81\x34", 12, 32, 0, FMAC_PARAM_fields, 5}, /* PARAM: FMAC Parameter register */
   {"\x0d\x20", 16, 32, 0, FMAC_CR_fields, 9}, /* CR: FMAC Control register */
   {"\x4d\x20", 20, 32, 0, FMAC_SR_fields, 5}, /* SR: FMAC Status register */
   {"\x5c\x40\x54\x04", 24, 32, 0, FMAC_WDATA_fields, 1}, /* WDATA: FMAC Write Data register */
   {"\x48\x40\x54\x04", 28, 32, 0, FMAC_RDATA_fields, 1}, /* RDATA: FMAC Read Data register */
};

const Field_t FLASH_ACR_fields[] = {
   { "\x30\x15\x05\x38\x36\x40", 0, 4 },  /* LATENCY: Latency */
   { "\x41\x21\x94\x14\xe0", 8, 1 },  /* PRFTEN: Prefetch enable */
   { "\x24\x31\x4e", 9, 1 },  /* ICEN: Instruction cache enable */
   { "\x10\x31\x4e", 10, 1 },  /* DCEN: Data cache enable */
   { "\x24\x34\x93\x50", 11, 1 },  /* ICRST: Instruction cache reset */
   { "\x10\x34\x93\x50", 12, 1 },  /* DCRST: Data cache reset */
   { "\x49\x53\xa5\x40\x40", 13, 1 },  /* RUN_PD: Flash Power-down mode during Low-power               run mode */
   { "\x4c\xc1\x45\x42\x54\x04", 14, 1 },  /* SLEEP_PD: Flash Power-down mode during Low-power               sleep mode */
   { "\x10\x21\xe5\x4d\x71\x4e", 18, 1 },  /* DBG_SWEN: Debug software enable */
};

const Field_t FLASH_PDKEYR_fields[] = {
   { "\x40\x42\xc5\x65\x20", 0, 32 },  /* PDKEYR: RUN_PD in FLASH_ACR key */
};

const Field_t FLASH_KEYR_fields[] = {
   { "\x2c\x56\x52", 0, 32 },  /* KEYR: KEYR */
};

const Field_t FLASH_OPTKEYR_fields[] = {
   { "\x3d\x05\x0b\x15\x94\x80", 0, 32 },  /* OPTKEYR: Option byte key */
};

const Field_t FLASH_SR_fields[] = {
   { "\x14\xf4\x00", 0, 1 },  /* EOP: End of operation */
   { "\x3d\x01\x52\x48", 1, 1 },  /* OPERR: Operation error */
   { "\x41\x23\xc7\x15\x24\x80", 3, 1 },  /* PROGERR: Programming error */
   { "\x5d\x24\x05\x49\x20", 4, 1 },  /* WRPERR: Write protected error */
   { "\x40\x70\x45\x49\x20", 5, 1 },  /* PGAERR: Programming alignment               error */
   { "\x4c\x96\x85\x49\x20", 6, 1 },  /* SIZERR: Size error */
   { "\x40\x74\xc5\x49\x20", 7, 1 },  /* PGSERR: Programming sequence error */
   { "\x34\x94\xc5\x49\x20", 8, 1 },  /* MISERR: Fast programming data miss               error */
   { "\x18\x14\xd4\x15\x24\x80", 9, 1 },  /* FASTERR: Fast programming error */
   { "\x48\x41\x52\x48", 14, 1 },  /* RDERR: PCROP read error */
   { "\x3d\x05\x16\x15\x24\x80", 15, 1 },  /* OPTVERR: Option validity error */
   { "\x09\x36\x40", 16, 1 },  /* BSY: Busy */
};

const Field_t FLASH_CR_fields[] = {
   { "\x40\x70", 0, 1 },  /* PG: Programming */
   { "\x40\x54\x80", 1, 1 },  /* PER: Page erase */
   { "\x34\x54\x9c", 2, 1 },  /* MER1: Bank 1 Mass erase */
   { "\x40\xe0\x80", 3, 7 },  /* PNB: Page number */
   { "\x4d\x44\x94", 16, 1 },  /* STRT: Start */
   { "\x3d\x05\x13\x51\x25\x00", 17, 1 },  /* OPTSTRT: Options modification start */
   { "\x19\x35\x10\x1c", 18, 1 },  /* FSTPG: Fast programming */
   { "\x14\xf4\x09\x14", 24, 1 },  /* EOPIE: End of operation interrupt               enable */
   { "\x15\x24\x89\x14", 25, 1 },  /* ERRIE: Error interrupt enable */
   { "\x48\x41\x52\x48\x91\x40", 26, 1 },  /* RDERRIE: PCROP read error interrupt               enable */
   { "\x3c\x23\x25\x30\x15\x4e\x0c\x80", 27, 1 },  /* OBL_LAUNCH: Force the option byte               loading */
   { "\x4c\x50\xe5\x41\x23\xd4\x70", 28, 1 },  /* SEC_PROT1: SEC_PROT1 */
   { "\x3d\x05\x0c\x3c\x32\xc0", 30, 1 },  /* OPTLOCK: Options Lock */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: FLASH_CR Lock */
};

const Field_t FLASH_ECCR_fields[] = {
   { "\x04\x41\x12\x94\x50\xc3", 0, 19 },  /* ADDR_ECC: ECC fail address */
   { "\x08\xb9\x45\x0c\x30", 21, 1 },  /* BK_ECC: BK_ECC */
   { "\x4d\x94\xc6\x94\x50\xc3", 22, 1 },  /* SYSF_ECC: SYSF_ECC */
   { "\x14\x30\xc9\x14", 24, 1 },  /* ECCIE: ECCIE */
   { "\x14\x30\xc3\x74", 28, 1 },  /* ECCC2: ECC correction */
   { "\x14\x30\xc4\x74", 29, 1 },  /* ECCD2: ECC2 detection */
   { "\x14\x30\xc3", 30, 1 },  /* ECCC: ECC correction */
   { "\x14\x30\xc4", 31, 1 },  /* ECCD: ECC detection */
};

const Field_t FLASH_OPTR_fields[] = {
   { "\x48\x44\x00", 0, 8 },  /* RDP: Read protection level */
   { "\x08\xf4\xa5\x30\x55\x80", 8, 3 },  /* BOR_LEV: BOR reset Level */
   { "\x39\x24\xd4\x95\x35\x0f\x40", 12, 1 },  /* nRST_STOP: nRST_STOP */
   { "\x39\x24\xd4\x95\x35\x04\x09\x90", 13, 1 },  /* nRST_STDBY: nRST_STDBY */
   { "\x39\x24\xd4\x95\x32\x04\x5c", 14, 1 },  /* nRST_SHDW: nRST_SHDW */
   { "\x24\x45\xc7\x95\x35\xc0", 16, 1 },  /* IDWG_SW: Independent watchdog               selection */
   { "\x25\x71\x07\x95\x35\x0f\x40", 17, 1 },  /* IWDG_STOP: Independent watchdog counter freeze in               Stop mode */
   { "\x25\x71\x07\x95\x35\x04\x09\x90", 18, 1 },  /* IWDG_STDBY: Independent watchdog counter freeze in               Standby mode */
   { "\x5d\x71\x07\x95\x35\xc0", 19, 1 },  /* WWDG_SW: Window watchdog selection */
   { "\x38\x23\xcf\x51\xc0", 23, 1 },  /* nBOOT1: Boot configuration */
   { "\x4d\x20\x4d\x76\x54\x05", 24, 1 },  /* SRAM2_PE: SRAM2 parity check enable */
   { "\x4d\x20\x4d\x76\x54\x93\x50", 25, 1 },  /* SRAM2_RST: SRAM2 Erase when system               reset */
   { "\x39\x35\xc2\x3c\xf5\x1b", 26, 1 },  /* nSWBOOT0: nSWBOOT0 */
   { "\x38\x23\xcf\x51\xb0", 27, 1 },  /* nBOOT0: nBOOT0 */
   { "\x39\x24\xd4\x94\xd3\xc4\x14", 28, 2 },  /* NRST_MODE: NRST_MODE */
   { "\x25\x22\x05\x38", 30, 1 },  /* IRHEN: IRHEN */
};

const Field_t FLASH_PCROP1SR_fields[] = {
   { "\x40\x34\x8f\x41\xc9\x53\x51\x25\x00", 0, 15 },  /* PCROP1_STRT: Bank 1 PCROP area start               offset */
};

const Field_t FLASH_PCROP1ER_fields[] = {
   { "\x40\x34\x8f\x41\xc9\x45\x38\x40", 0, 15 },  /* PCROP1_END: Bank 1 PCROP area end               offset */
   { "\x40\x34\x8f\x42\x54\x84\x40", 31, 1 },  /* PCROP_RDP: PCROP area preserved when RDP level               decreased */
};

const Field_t FLASH_WRP1AR_fields[] = {
   { "\x5d\x24\x1c\x06\x54\xd4\x49\x40", 0, 7 },  /* WRP1A_STRT: Bank 1 WRP first area start               offset */
   { "\x5d\x24\x1c\x06\x51\x4e\x10", 16, 7 },  /* WRP1A_END: Bank 1 WRP first area A end               offset */
};

const Field_t FLASH_WRP1BR_fields[] = {
   { "\x5d\x24\x1c\x0a\x54\xd4\x49\x40", 0, 7 },  /* WRP1B_STRT: Bank 1 WRP second area B end               offset */
   { "\x5d\x24\x1c\x0a\x51\x4e\x10", 16, 7 },  /* WRP1B_END: Bank 1 WRP second area B start               offset */
};

const Field_t FLASH_SEC1R_fields[] = {
   { "\x4c\x50\xe5\x4c\x96\x85\x70", 0, 8 },  /* SEC_SIZE1: SEC_SIZE1 */
   { "\x08\xf3\xd4\x94\xc3\xc3\x2c", 16, 1 },  /* BOOT_LOCK: BOOT_LOCK */
};

const Register_t FLASH_registers[] = {
   {"\x04\x34\x80", 0, 32, 0, FLASH_ACR_fields, 9}, /* ACR: Access control register */
   {"\x40\x42\xc5\x65\x20", 4, 32, 0, FLASH_PDKEYR_fields, 1}, /* PDKEYR: Power down key register */
   {"\x2c\x56\x52", 8, 32, 0, FLASH_KEYR_fields, 1}, /* KEYR: Flash key register */
   {"\x3d\x05\x0b\x15\x94\x80", 12, 32, 0, FLASH_OPTKEYR_fields, 1}, /* OPTKEYR: Option byte key register */
   {"\x4d\x20", 16, 32, 0, FLASH_SR_fields, 12}, /* SR: Status register */
   {"\x0d\x20", 20, 32, 0, FLASH_CR_fields, 14}, /* CR: Flash control register */
   {"\x14\x30\xd2", 24, 32, 0, FLASH_ECCR_fields, 8}, /* ECCR: Flash ECC register */
   {"\x3d\x05\x12", 32, 32, 0, FLASH_OPTR_fields, 16}, /* OPTR: Flash option register */
   {"\x40\x34\x8f\x41\xc4\xd2", 36, 32, 0, FLASH_PCROP1SR_fields, 1}, /* PCROP1SR: Flash Bank 1 PCROP Start address           register */
   {"\x40\x34\x8f\x41\xc1\x52", 40, 32, 0, FLASH_PCROP1ER_fields, 2}, /* PCROP1ER: Flash Bank 1 PCROP End address           register */
   {"\x5d\x24\x1c\x05\x20", 44, 32, 0, FLASH_WRP1AR_fields, 2}, /* WRP1AR: Flash Bank 1 WRP area A address           register */
   {"\x5d\x24\x1c\x09\x20", 48, 32, 0, FLASH_WRP1BR_fields, 2}, /* WRP1BR: Flash Bank 1 WRP area B address           register */
   {"\x4c\x50\xdc\x48", 112, 32, 0, FLASH_SEC1R_fields, 2}, /* SEC1R: securable area bank1 register */
};

const Field_t CRC_DR_fields[] = {
   { "\x11\x20", 0, 32 },  /* DR: Data register bits */
};

const Field_t CRC_IDR_fields[] = {
   { "\x24\x44\x80", 0, 32 },  /* IDR: General-purpose 8-bit data register               bits */
};

const Field_t CRC_CR_fields[] = {
   { "\x48\x54\xc5\x50", 0, 1 },  /* RESET: RESET bit */
   { "\x40\xf3\x19\x4c\x96\x85", 3, 2 },  /* POLYSIZE: Polynomial size */
   { "\x48\x55\xa5\x24\xe0", 5, 2 },  /* REV_IN: Reverse input data */
   { "\x48\x55\xa5\x3d\x55\x00", 7, 1 },  /* REV_OUT: Reverse output data */
};

const Field_t CRC_INIT_fields[] = {
   { "\x0d\x20\xe5\x24\xe2\x54", 0, 32 },  /* CRC_INIT: Programmable initial CRC               value */
};

const Field_t CRC_POL_fields[] = {
   { "\x40\xf3\x00", 0, 32 },  /* POL: Programmable polynomial */
};

const Register_t CRC_registers[] = {
   {"\x11\x20", 0, 32, 0, CRC_DR_fields, 1}, /* DR: Data register */
   {"\x24\x44\x80", 4, 32, 0, CRC_IDR_fields, 1}, /* IDR: Independent data register */
   {"\x0d\x20", 8, 32, 0, CRC_CR_fields, 4}, /* CR: Control register */
   {"\x24\xe2\x54", 16, 32, 0, CRC_INIT_fields, 1}, /* INIT: Initial CRC value */
   {"\x40\xf3\x00", 20, 32, 0, CRC_POL_fields, 1}, /* POL: polynomial */
};

const Field_t GPIOA_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =               0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOA_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =               0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =               0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =               0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =               0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =               0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =               0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =               0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =               0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =               0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =               0..15) */
};

const Field_t GPIOA_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =               0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =               0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =               0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =               0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =               0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =               0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =               0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =               0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =               0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =               0..15) */
};

const Field_t GPIOA_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=               0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=               0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=               0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=               0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=               0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=               0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=               0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=               0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=               0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=               0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=               0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=               0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =               0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =               0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =               0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =               0..15) */
};

const Field_t GPIOA_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Port x lock bit y (y=               0..15) */
};

const Field_t GPIOA_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x               bit y (y = 0..7) */
};

const Field_t GPIOA_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x               bit y (y = 8..15) */
};

const Field_t GPIOA_BRR_fields[] = {
   { "\x09\x26\xc0", 0, 1 },  /* BR0: Port Reset bit */
   { "\x09\x27\x00", 1, 1 },  /* BR1: Port Reset bit */
   { "\x09\x27\x40", 2, 1 },  /* BR2: Port Reset bit */
   { "\x09\x27\x80", 3, 1 },  /* BR3: Port Reset bit */
   { "\x09\x27\xc0", 4, 1 },  /* BR4: Port Reset bit */
   { "\x09\x28\x00", 5, 1 },  /* BR5: Port Reset bit */
   { "\x09\x28\x40", 6, 1 },  /* BR6: Port Reset bit */
   { "\x09\x28\x80", 7, 1 },  /* BR7: Port Reset bit */
   { "\x09\x28\xc0", 8, 1 },  /* BR8: Port Reset bit */
   { "\x09\x29\x00", 9, 1 },  /* BR9: Port Reset bit */
   { "\x09\x27\x1b", 10, 1 },  /* BR10: Port Reset bit */
   { "\x09\x27\x1c", 11, 1 },  /* BR11: Port Reset bit */
   { "\x09\x27\x1d", 12, 1 },  /* BR12: Port Reset bit */
   { "\x09\x27\x1e", 13, 1 },  /* BR13: Port Reset bit */
   { "\x09\x27\x1f", 14, 1 },  /* BR14: Port Reset bit */
   { "\x09\x27\x20", 15, 1 },  /* BR15: Port Reset bit */
};

const Register_t GPIOA_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOA_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOA_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOA_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed           register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOA_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down           register */
   {"\x24\x44\x80", 16, 32, 0, GPIOA_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOA_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOA_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset           register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOA_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock           register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOA_AFRL_fields, 8}, /* AFRL: GPIO alternate function low           register */
   {"\x04\x64\x88", 36, 32, 0, GPIOA_AFRH_fields, 8}, /* AFRH: GPIO alternate function high           register */
   {"\x09\x24\x80", 40, 32, 0, GPIOA_BRR_fields, 16}, /* BRR: GPIO port bit reset register */
};

const Field_t GPIOB_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =               0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOB_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =               0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =               0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =               0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =               0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =               0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =               0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =               0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =               0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =               0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =               0..15) */
};

const Field_t GPIOB_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =               0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =               0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =               0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =               0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =               0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =               0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =               0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =               0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =               0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =               0..15) */
};

const Field_t GPIOB_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=               0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=               0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=               0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=               0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=               0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=               0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=               0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=               0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=               0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=               0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=               0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=               0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =               0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =               0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =               0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =               0..15) */
};

const Field_t GPIOB_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Port x lock bit y (y=               0..15) */
};

const Field_t GPIOB_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x               bit y (y = 0..7) */
};

const Field_t GPIOB_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x               bit y (y = 8..15) */
};

const Field_t GPIOB_BRR_fields[] = {
   { "\x09\x26\xc0", 0, 1 },  /* BR0: Port Reset bit */
   { "\x09\x27\x00", 1, 1 },  /* BR1: Port Reset bit */
   { "\x09\x27\x40", 2, 1 },  /* BR2: Port Reset bit */
   { "\x09\x27\x80", 3, 1 },  /* BR3: Port Reset bit */
   { "\x09\x27\xc0", 4, 1 },  /* BR4: Port Reset bit */
   { "\x09\x28\x00", 5, 1 },  /* BR5: Port Reset bit */
   { "\x09\x28\x40", 6, 1 },  /* BR6: Port Reset bit */
   { "\x09\x28\x80", 7, 1 },  /* BR7: Port Reset bit */
   { "\x09\x28\xc0", 8, 1 },  /* BR8: Port Reset bit */
   { "\x09\x29\x00", 9, 1 },  /* BR9: Port Reset bit */
   { "\x09\x27\x1b", 10, 1 },  /* BR10: Port Reset bit */
   { "\x09\x27\x1c", 11, 1 },  /* BR11: Port Reset bit */
   { "\x09\x27\x1d", 12, 1 },  /* BR12: Port Reset bit */
   { "\x09\x27\x1e", 13, 1 },  /* BR13: Port Reset bit */
   { "\x09\x27\x1f", 14, 1 },  /* BR14: Port Reset bit */
   { "\x09\x27\x20", 15, 1 },  /* BR15: Port Reset bit */
};

const Register_t GPIOB_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOB_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOB_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOB_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed           register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOB_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down           register */
   {"\x24\x44\x80", 16, 32, 0, GPIOB_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOB_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOB_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset           register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOB_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock           register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOB_AFRL_fields, 8}, /* AFRL: GPIO alternate function low           register */
   {"\x04\x64\x88", 36, 32, 0, GPIOB_AFRH_fields, 8}, /* AFRH: GPIO alternate function high           register */
   {"\x09\x24\x80", 40, 32, 0, GPIOB_BRR_fields, 16}, /* BRR: GPIO port bit reset register */
};

const Field_t GPIOC_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =               0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOC_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =               0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =               0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =               0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOC_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =               0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOC_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =               0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =               0..15) */
};

const Field_t GPIOC_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =               0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =               0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =               0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =               0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =               0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =               0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =               0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =               0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =               0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =               0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =               0..15) */
};

const Field_t GPIOC_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =               0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =               0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =               0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =               0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =               0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =               0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =               0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =               0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =               0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =               0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =               0..15) */
};

const Field_t GPIOC_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=               0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=               0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=               0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=               0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=               0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=               0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=               0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=               0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=               0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=               0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=               0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=               0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=               0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =               0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =               0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =               0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =               0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =               0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =               0..15) */
};

const Field_t GPIOC_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=               0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Port x lock bit y (y=               0..15) */
};

const Field_t GPIOC_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x               bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x               bit y (y = 0..7) */
};

const Field_t GPIOC_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x               bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x               bit y (y = 8..15) */
};

const Field_t GPIOC_BRR_fields[] = {
   { "\x09\x26\xc0", 0, 1 },  /* BR0: Port Reset bit */
   { "\x09\x27\x00", 1, 1 },  /* BR1: Port Reset bit */
   { "\x09\x27\x40", 2, 1 },  /* BR2: Port Reset bit */
   { "\x09\x27\x80", 3, 1 },  /* BR3: Port Reset bit */
   { "\x09\x27\xc0", 4, 1 },  /* BR4: Port Reset bit */
   { "\x09\x28\x00", 5, 1 },  /* BR5: Port Reset bit */
   { "\x09\x28\x40", 6, 1 },  /* BR6: Port Reset bit */
   { "\x09\x28\x80", 7, 1 },  /* BR7: Port Reset bit */
   { "\x09\x28\xc0", 8, 1 },  /* BR8: Port Reset bit */
   { "\x09\x29\x00", 9, 1 },  /* BR9: Port Reset bit */
   { "\x09\x27\x1b", 10, 1 },  /* BR10: Port Reset bit */
   { "\x09\x27\x1c", 11, 1 },  /* BR11: Port Reset bit */
   { "\x09\x27\x1d", 12, 1 },  /* BR12: Port Reset bit */
   { "\x09\x27\x1e", 13, 1 },  /* BR13: Port Reset bit */
   { "\x09\x27\x1f", 14, 1 },  /* BR14: Port Reset bit */
   { "\x09\x27\x20", 15, 1 },  /* BR15: Port Reset bit */
};

const Register_t GPIOC_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOC_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOC_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOC_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed           register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOC_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down           register */
   {"\x24\x44\x80", 16, 32, 0, GPIOC_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOC_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOC_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset           register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOC_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock           register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOC_AFRL_fields, 8}, /* AFRL: GPIO alternate function low           register */
   {"\x04\x64\x88", 36, 32, 0, GPIOC_AFRH_fields, 8}, /* AFRH: GPIO alternate function high           register */
   {"\x09\x24\x80", 40, 32, 0, GPIOC_BRR_fields, 16}, /* BRR: GPIO port bit reset register */
};

const Field_t ADC1_ISR_fields[] = {
   { "\x04\x44\x84\x64", 0, 1 },  /* ADRDY: ADRDY */
   { "\x14\xf4\xcd\x40", 1, 1 },  /* EOSMP: EOSMP */
   { "\x14\xf0\xc0", 2, 1 },  /* EOC: EOC */
   { "\x14\xf4\xc0", 3, 1 },  /* EOS: EOS */
   { "\x3d\x64\x80", 4, 1 },  /* OVR: OVR */
   { "\x28\x53\xc3", 5, 1 },  /* JEOC: JEOC */
   { "\x28\x53\xd3", 6, 1 },  /* JEOS: JEOS */
   { "\x05\x71\x1c", 7, 1 },  /* AWD1: AWD1 */
   { "\x05\x71\x1d", 8, 1 },  /* AWD2: AWD2 */
   { "\x05\x71\x1e", 9, 1 },  /* AWD3: AWD3 */
   { "\x29\x13\xd6\x18", 10, 1 },  /* JQOVF: JQOVF */
};

const Field_t ADC1_IER_fields[] = {
   { "\x04\x44\x84\x64\x91\x40", 0, 1 },  /* ADRDYIE: ADRDYIE */
   { "\x14\xf4\xcd\x40\x91\x40", 1, 1 },  /* EOSMPIE: EOSMPIE */
   { "\x14\xf0\xc9\x14", 2, 1 },  /* EOCIE: EOCIE */
   { "\x14\xf4\xc9\x14", 3, 1 },  /* EOSIE: EOSIE */
   { "\x3d\x64\x89\x14", 4, 1 },  /* OVRIE: OVRIE */
   { "\x28\x53\xc3\x24\x50", 5, 1 },  /* JEOCIE: JEOCIE */
   { "\x28\x53\xd3\x24\x50", 6, 1 },  /* JEOSIE: JEOSIE */
   { "\x05\x71\x1c\x24\x50", 7, 1 },  /* AWD1IE: AWD1IE */
   { "\x05\x71\x1d\x24\x50", 8, 1 },  /* AWD2IE: AWD2IE */
   { "\x05\x71\x1e\x24\x50", 9, 1 },  /* AWD3IE: AWD3IE */
   { "\x29\x13\xd6\x18\x91\x40", 10, 1 },  /* JQOVFIE: JQOVFIE */
};

const Field_t ADC1_CR_fields[] = {
   { "\x04\x41\x4e", 0, 1 },  /* ADEN: ADEN */
   { "\x04\x41\x09\x4c", 1, 1 },  /* ADDIS: ADDIS */
   { "\x04\x44\xd4\x05\x25\x00", 2, 1 },  /* ADSTART: ADSTART */
   { "\x28\x11\x13\x50\x14\x94", 3, 1 },  /* JADSTART: JADSTART */
   { "\x04\x44\xd4\x40", 4, 1 },  /* ADSTP: ADSTP */
   { "\x28\x11\x13\x51\x00", 5, 1 },  /* JADSTP: JADSTP */
   { "\x04\x45\x92\x14\x71\x4e", 28, 1 },  /* ADVREGEN: ADVREGEN */
   { "\x10\x51\x50\x41\x71\x00", 29, 1 },  /* DEEPPWD: DEEPPWD */
   { "\x04\x40\xc1\x30\x42\x46", 30, 1 },  /* ADCALDIF: ADCALDIF */
   { "\x04\x40\xc1\x30", 31, 1 },  /* ADCAL: ADCAL */
};

const Field_t ADC1_CFGR_fields[] = {
   { "\x10\xd0\x45\x38", 0, 1 },  /* DMAEN: DMAEN */
   { "\x10\xd0\x43\x18\x70", 1, 1 },  /* DMACFG: DMACFG */
   { "\x48\x54\xc0", 3, 2 },  /* RES: RES */
   { "\x04\xc2\x47\x3a\x58\x00", 5, 1 },  /* ALIGN_5: ALIGN_5 */
   { "\x15\x85\x13\x14\xc0", 6, 4 },  /* EXTSEL: EXTSEL */
   { "\x15\x85\x05\x38", 10, 2 },  /* EXTEN: EXTEN */
   { "\x3d\x64\x8d\x3c\x40", 12, 1 },  /* OVRMOD: OVRMOD */
   { "\x0c\xf3\x94", 13, 1 },  /* CONT: CONT */
   { "\x05\x55\x04\x31\x90", 14, 1 },  /* AUTDLY: AUTDLY */
   { "\x04\xc2\x47\x38", 15, 1 },  /* ALIGN: ALIGN */
   { "\x10\x94\xc3\x14\xe0", 16, 1 },  /* DISCEN: DISCEN */
   { "\x10\x94\xc3\x39\x53\x40", 17, 3 },  /* DISCNUM: DISCNUM */
   { "\x28\x42\x53\x0c\x53\x80", 20, 1 },  /* JDISCEN: JDISCEN */
   { "\x29\x13\x40", 21, 1 },  /* JQM: JQM */
   { "\x05\x71\x1c\x4c\x73\x00", 22, 1 },  /* AWD1SGL: AWD1SGL */
   { "\x05\x71\x1c\x14\xe0", 23, 1 },  /* AWD1EN: AWD1EN */
   { "\x28\x15\xc4\x70\x53\x80", 24, 1 },  /* JAWD1EN: JAWD1EN */
   { "\x28\x15\x54\x3c", 25, 1 },  /* JAUTO: JAUTO */
   { "\x05\x71\x03\x21\xc0\xc8", 26, 5 },  /* AWDCH1CH: AWDCH1CH */
   { "\x29\x11\x09\x4c", 31, 1 },  /* JQDIS: Injected Queue disable */
};

const Field_t ADC1_CFGR2_fields[] = {
   { "\x48\xf5\x93\x14", 0, 1 },  /* ROVSE: DMAEN */
   { "\x28\xf5\x93\x14", 1, 1 },  /* JOVSE: DMACFG */
   { "\x3d\x64\xd2", 2, 3 },  /* OVSR: RES */
   { "\x3d\x64\xd3", 5, 4 },  /* OVSS: ALIGN */
   { "\x51\x23\xd6\x4c", 9, 1 },  /* TROVS: Triggered Regular               Oversampling */
   { "\x48\xf5\x93\x34", 10, 1 },  /* ROVSM: EXTEN */
   { "\x1c\x33\xcd\x40", 16, 1 },  /* GCOMP: GCOMP */
   { "\x4d\x75\x12\x24\x70", 25, 1 },  /* SWTRIG: SWTRIG */
   { "\x09\x53\x02", 26, 1 },  /* BULB: BULB */
   { "\x4c\xd4\x14\x48\x91\xc0", 27, 1 },  /* SMPTRIG: SMPTRIG */
};

const Field_t ADC1_SMPR1_fields[] = {
   { "\x4c\xd4\x1b", 0, 3 },  /* SMP0: SMP0 */
   { "\x4c\xd4\x1c", 3, 3 },  /* SMP1: SMP1 */
   { "\x4c\xd4\x1d", 6, 3 },  /* SMP2: SMP2 */
   { "\x4c\xd4\x1e", 9, 3 },  /* SMP3: SMP3 */
   { "\x4c\xd4\x1f", 12, 3 },  /* SMP4: SMP4 */
   { "\x4c\xd4\x20", 15, 3 },  /* SMP5: SMP5 */
   { "\x4c\xd4\x21", 18, 3 },  /* SMP6: SMP6 */
   { "\x4c\xd4\x22", 21, 3 },  /* SMP7: SMP7 */
   { "\x4c\xd4\x23", 24, 3 },  /* SMP8: SMP8 */
   { "\x4c\xd4\x24", 27, 3 },  /* SMP9: SMP9 */
   { "\x4c\xd4\x10\x31\x54\xc0", 31, 1 },  /* SMPPLUS: Addition of one clock cycle to the               sampling time */
};

const Field_t ADC1_SMPR2_fields[] = {
   { "\x4c\xd4\x1c\x6c", 0, 3 },  /* SMP10: SMP10 */
   { "\x4c\xd4\x1c\x70", 3, 3 },  /* SMP11: SMP11 */
   { "\x4c\xd4\x1c\x74", 6, 3 },  /* SMP12: SMP12 */
   { "\x4c\xd4\x1c\x78", 9, 3 },  /* SMP13: SMP13 */
   { "\x4c\xd4\x1c\x7c", 12, 3 },  /* SMP14: SMP14 */
   { "\x4c\xd4\x1c\x80", 15, 3 },  /* SMP15: SMP15 */
   { "\x4c\xd4\x1c\x84", 18, 3 },  /* SMP16: SMP16 */
   { "\x4c\xd4\x1c\x88", 21, 3 },  /* SMP17: SMP17 */
   { "\x4c\xd4\x1c\x8c", 24, 3 },  /* SMP18: SMP18 */
};

const Field_t ADC1_TR1_fields[] = {
   { "\x31\x47\x00", 0, 12 },  /* LT1: LT1 */
   { "\x05\x71\x06\x24\xc5\x00", 12, 3 },  /* AWDFILT: AWDFILT */
   { "\x21\x47\x00", 16, 12 },  /* HT1: HT1 */
};

const Field_t ADC1_TR2_fields[] = {
   { "\x31\x47\x40", 0, 8 },  /* LT2: LT2 */
   { "\x21\x47\x40", 16, 8 },  /* HT2: HT2 */
};

const Field_t ADC1_TR3_fields[] = {
   { "\x31\x47\x80", 0, 8 },  /* LT3: LT3 */
   { "\x21\x47\x80", 16, 8 },  /* HT3: HT3 */
};

const Field_t ADC1_SQR1_fields[] = {
   { "\x30", 0, 4 },  /* L: Regular channel sequence               length */
   { "\x4d\x17\x00", 6, 5 },  /* SQ1: SQ1 */
   { "\x4d\x17\x40", 12, 5 },  /* SQ2: SQ2 */
   { "\x4d\x17\x80", 18, 5 },  /* SQ3: SQ3 */
   { "\x4d\x17\xc0", 24, 5 },  /* SQ4: SQ4 */
};

const Field_t ADC1_SQR2_fields[] = {
   { "\x4d\x18\x00", 0, 5 },  /* SQ5: SQ5 */
   { "\x4d\x18\x40", 6, 5 },  /* SQ6: SQ6 */
   { "\x4d\x18\x80", 12, 5 },  /* SQ7: SQ7 */
   { "\x4d\x18\xc0", 18, 5 },  /* SQ8: SQ8 */
   { "\x4d\x19\x00", 24, 5 },  /* SQ9: SQ9 */
};

const Field_t ADC1_SQR3_fields[] = {
   { "\x4d\x17\x1b", 0, 5 },  /* SQ10: SQ10 */
   { "\x4d\x17\x1c", 6, 5 },  /* SQ11: SQ11 */
   { "\x4d\x17\x1d", 12, 5 },  /* SQ12: SQ12 */
   { "\x4d\x17\x1e", 18, 5 },  /* SQ13: SQ13 */
   { "\x4d\x17\x1f", 24, 5 },  /* SQ14: SQ14 */
};

const Field_t ADC1_SQR4_fields[] = {
   { "\x4d\x17\x20", 0, 5 },  /* SQ15: SQ15 */
   { "\x4d\x17\x21", 6, 5 },  /* SQ16: SQ16 */
};

const Field_t ADC1_DR_fields[] = {
   { "\x48\x40\x54\x04", 0, 16 },  /* RDATA: Regular Data converted */
};

const Field_t ADC1_JSQR_fields[] = {
   { "\x28\xc0", 0, 2 },  /* JL: JL */
   { "\x28\x56\x14\x4c\x53\x00", 2, 5 },  /* JEXTSEL: JEXTSEL */
   { "\x28\x56\x14\x14\xe0", 7, 2 },  /* JEXTEN: JEXTEN */
   { "\x29\x34\x5c", 9, 5 },  /* JSQ1: JSQ1 */
   { "\x29\x34\x5d", 15, 5 },  /* JSQ2: JSQ2 */
   { "\x29\x34\x5e", 21, 5 },  /* JSQ3: JSQ3 */
   { "\x29\x34\x5f", 27, 5 },  /* JSQ4: JSQ4 */
};

const Field_t ADC1_OFR1_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC1_OFR2_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC1_OFR3_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC1_OFR4_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC1_JDR1_fields[] = {
   { "\x28\x40\x54\x05\xc0", 0, 16 },  /* JDATA1: JDATA1 */
};

const Field_t ADC1_JDR2_fields[] = {
   { "\x28\x40\x54\x05\xd0", 0, 16 },  /* JDATA2: JDATA2 */
};

const Field_t ADC1_JDR3_fields[] = {
   { "\x28\x40\x54\x05\xe0", 0, 16 },  /* JDATA3: JDATA3 */
};

const Field_t ADC1_JDR4_fields[] = {
   { "\x28\x40\x54\x05\xf0", 0, 16 },  /* JDATA4: JDATA4 */
};

const Field_t ADC1_AWD2CR_fields[] = {
   { "\x05\x71\x1d\x0c\x80", 0, 19 },  /* AWD2CH: AWD2CH */
};

const Field_t ADC1_AWD3CR_fields[] = {
   { "\x05\x71\x1e\x0c\x80", 0, 19 },  /* AWD3CH: AWD3CH */
};

const Field_t ADC1_DIFSEL_fields[] = {
   { "\x10\x91\x93\x14\xc9\x5b", 0, 1 },  /* DIFSEL_0: Differential mode for channels               0 */
   { "\x10\x91\x93\x14\xc9\x5c\x95\xc8\xc0", 1, 18 },  /* DIFSEL_1_18: Differential mode for channels 15 to               1 */
};

const Field_t ADC1_CALFACT_fields[] = {
   { "\x0c\x13\x06\x04\x35\x25\x4c", 0, 7 },  /* CALFACT_S: CALFACT_S */
   { "\x0c\x13\x06\x04\x35\x25\x10", 16, 7 },  /* CALFACT_D: CALFACT_D */
};

const Field_t ADC1_GCOMP_fields[] = {
   { "\x1c\x33\xcd\x40\x33\xc5\x18\x60", 0, 14 },  /* GCOMPCOEFF: GCOMPCOEFF */
};

const Register_t ADC1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, ADC1_ISR_fields, 11}, /* ISR: interrupt and status register */
   {"\x24\x54\x80", 4, 32, 0, ADC1_IER_fields, 11}, /* IER: interrupt enable register */
   {"\x0d\x20", 8, 32, 0, ADC1_CR_fields, 10}, /* CR: control register */
   {"\x0c\x61\xd2", 12, 32, 0, ADC1_CFGR_fields, 20}, /* CFGR: configuration register */
   {"\x0c\x61\xd2\x74", 16, 32, 0, ADC1_CFGR2_fields, 10}, /* CFGR2: configuration register */
   {"\x4c\xd4\x12\x70", 20, 32, 0, ADC1_SMPR1_fields, 11}, /* SMPR1: sample time register 1 */
   {"\x4c\xd4\x12\x74", 24, 32, 0, ADC1_SMPR2_fields, 9}, /* SMPR2: sample time register 2 */
   {"\x51\x27\x00", 32, 32, 0, ADC1_TR1_fields, 3}, /* TR1: watchdog threshold register 1 */
   {"\x51\x27\x40", 36, 32, 0, ADC1_TR2_fields, 2}, /* TR2: watchdog threshold register */
   {"\x51\x27\x80", 40, 32, 0, ADC1_TR3_fields, 2}, /* TR3: watchdog threshold register 3 */
   {"\x4d\x14\x9c", 48, 32, 0, ADC1_SQR1_fields, 5}, /* SQR1: regular sequence register 1 */
   {"\x4d\x14\x9d", 52, 32, 0, ADC1_SQR2_fields, 5}, /* SQR2: regular sequence register 2 */
   {"\x4d\x14\x9e", 56, 32, 0, ADC1_SQR3_fields, 5}, /* SQR3: regular sequence register 3 */
   {"\x4d\x14\x9f", 60, 32, 0, ADC1_SQR4_fields, 2}, /* SQR4: regular sequence register 4 */
   {"\x11\x20", 64, 32, 0, ADC1_DR_fields, 1}, /* DR: regular Data Register */
   {"\x29\x34\x52", 76, 32, 0, ADC1_JSQR_fields, 7}, /* JSQR: injected sequence register */
   {"\x3c\x64\x9c", 96, 32, 0, ADC1_OFR1_fields, 5}, /* OFR1: offset register 1 */
   {"\x3c\x64\x9d", 100, 32, 0, ADC1_OFR2_fields, 5}, /* OFR2: offset register 2 */
   {"\x3c\x64\x9e", 104, 32, 0, ADC1_OFR3_fields, 5}, /* OFR3: offset register 3 */
   {"\x3c\x64\x9f", 108, 32, 0, ADC1_OFR4_fields, 5}, /* OFR4: offset register 4 */
   {"\x28\x44\x9c", 128, 32, 0, ADC1_JDR1_fields, 1}, /* JDR1: injected data register 1 */
   {"\x28\x44\x9d", 132, 32, 0, ADC1_JDR2_fields, 1}, /* JDR2: injected data register 2 */
   {"\x28\x44\x9e", 136, 32, 0, ADC1_JDR3_fields, 1}, /* JDR3: injected data register 3 */
   {"\x28\x44\x9f", 140, 32, 0, ADC1_JDR4_fields, 1}, /* JDR4: injected data register 4 */
   {"\x05\x71\x1d\x0d\x20", 160, 32, 0, ADC1_AWD2CR_fields, 1}, /* AWD2CR: Analog Watchdog 2 Configuration           Register */
   {"\x05\x71\x1e\x0d\x20", 164, 32, 0, ADC1_AWD3CR_fields, 1}, /* AWD3CR: Analog Watchdog 3 Configuration           Register */
   {"\x10\x91\x93\x14\xc0", 176, 32, 0, ADC1_DIFSEL_fields, 2}, /* DIFSEL: Differential Mode Selection Register           2 */
   {"\x0c\x13\x06\x04\x35\x00", 180, 32, 0, ADC1_CALFACT_fields, 2}, /* CALFACT: Calibration Factors */
   {"\x1c\x33\xcd\x40", 192, 32, 0, ADC1_GCOMP_fields, 1}, /* GCOMP: Gain compensation Register */
};

const Field_t ADC12_Common_CSR_fields[] = {
   { "\x04\x41\x12\x11\x99\x4d\x4d\x40", 0, 1 },  /* ADDRDY_MST: ADDRDY_MST */
   { "\x14\xf4\xcd\x42\x53\x53\x50", 1, 1 },  /* EOSMP_MST: EOSMP_MST */
   { "\x14\xf0\xe5\x35\x35\x00", 2, 1 },  /* EOC_MST: EOC_MST */
   { "\x14\xf4\xe5\x35\x35\x00", 3, 1 },  /* EOS_MST: EOS_MST */
   { "\x3d\x64\xa5\x35\x35\x00", 4, 1 },  /* OVR_MST: OVR_MST */
   { "\x28\x53\xc3\x94\xd4\xd4", 5, 1 },  /* JEOC_MST: JEOC_MST */
   { "\x28\x53\xd3\x94\xd4\xd4", 6, 1 },  /* JEOS_MST: JEOS_MST */
   { "\x05\x71\x1c\x94\xd4\xd4", 7, 1 },  /* AWD1_MST: AWD1_MST */
   { "\x05\x71\x1d\x94\xd4\xd4", 8, 1 },  /* AWD2_MST: AWD2_MST */
   { "\x05\x71\x1e\x94\xd4\xd4", 9, 1 },  /* AWD3_MST: AWD3_MST */
   { "\x29\x13\xd6\x1a\x53\x53\x50", 10, 1 },  /* JQOVF_MST: JQOVF_MST */
   { "\x04\x44\x84\x66\x54\xcc\x58", 16, 1 },  /* ADRDY_SLV: ADRDY_SLV */
   { "\x14\xf4\xcd\x42\x54\xcc\x58", 17, 1 },  /* EOSMP_SLV: EOSMP_SLV */
   { "\x14\xf0\xe5\x4c\xc5\x80", 18, 1 },  /* EOC_SLV: End of regular conversion of the slave               ADC */
   { "\x14\xf4\xe5\x4c\xc5\x80", 19, 1 },  /* EOS_SLV: End of regular sequence flag of the               slave ADC */
   { "\x3d\x64\xa5\x4c\xc5\x80", 20, 1 },  /* OVR_SLV: Overrun flag of the slave               ADC */
   { "\x28\x53\xc3\x95\x33\x16", 21, 1 },  /* JEOC_SLV: End of injected conversion flag of the               slave ADC */
   { "\x28\x53\xd3\x95\x33\x16", 22, 1 },  /* JEOS_SLV: End of injected sequence flag of the               slave ADC */
   { "\x05\x71\x1c\x95\x33\x16", 23, 1 },  /* AWD1_SLV: Analog watchdog 1 flag of the slave               ADC */
   { "\x05\x71\x1d\x95\x33\x16", 24, 1 },  /* AWD2_SLV: Analog watchdog 2 flag of the slave               ADC */
   { "\x05\x71\x1e\x95\x33\x16", 25, 1 },  /* AWD3_SLV: Analog watchdog 3 flag of the slave               ADC */
   { "\x29\x13\xd6\x1a\x54\xcc\x58", 26, 1 },  /* JQOVF_SLV: Injected Context Queue Overflow flag of               the slave ADC */
};

const Field_t ADC12_Common_CCR_fields[] = {
   { "\x11\x50\x4c", 0, 5 },  /* DUAL: Dual ADC mode selection */
   { "\x10\x53\x01\x64", 8, 4 },  /* DELAY: Delay between 2 sampling               phases */
   { "\x10\xd0\x43\x18\x70", 13, 1 },  /* DMACFG: DMA configuration (for multi-ADC               mode) */
   { "\x34\x43\x41", 14, 2 },  /* MDMA: Direct memory access mode for multi ADC               mode */
   { "\x0c\xb3\x4f\x10\x50", 16, 2 },  /* CKMODE: ADC clock mode */
   { "\x41\x21\x53\x0c", 18, 4 },  /* PRESC: ADC prescaler */
   { "\x59\x21\x46\x14\xe0", 22, 1 },  /* VREFEN: VREFINT enable */
   { "\x0c\x87\x22\x4c\x53\x00", 23, 1 },  /* CH17SEL: CH17 selection */
   { "\x0c\x87\x23\x4c\x53\x00", 24, 1 },  /* CH18SEL: CH18 selection */
};

const Field_t ADC12_Common_CDR_fields[] = {
   { "\x48\x40\x54\x06\x53\x53\x50", 0, 16 },  /* RDATA_MST: Regular data of the master               ADC */
   { "\x48\x40\x54\x06\x54\xcc\x58", 16, 16 },  /* RDATA_SLV: Regular data of the slave               ADC */
};

const Register_t ADC12_Common_registers[] = {
   {"\x0d\x34\x80", 0, 32, 0, ADC12_Common_CSR_fields, 22}, /* CSR: ADC Common status register */
   {"\x0c\x34\x80", 8, 32, 0, ADC12_Common_CCR_fields, 9}, /* CCR: ADC common control register */
   {"\x0c\x44\x80", 12, 32, 0, ADC12_Common_CDR_fields, 2}, /* CDR: ADC common regular data register for dual           and triple modes */
};

const Field_t ADC3_ISR_fields[] = {
   { "\x04\x44\x84\x64", 0, 1 },  /* ADRDY: ADRDY */
   { "\x14\xf4\xcd\x40", 1, 1 },  /* EOSMP: EOSMP */
   { "\x14\xf0\xc0", 2, 1 },  /* EOC: EOC */
   { "\x14\xf4\xc0", 3, 1 },  /* EOS: EOS */
   { "\x3d\x64\x80", 4, 1 },  /* OVR: OVR */
   { "\x28\x53\xc3", 5, 1 },  /* JEOC: JEOC */
   { "\x28\x53\xd3", 6, 1 },  /* JEOS: JEOS */
   { "\x05\x71\x1c", 7, 1 },  /* AWD1: AWD1 */
   { "\x05\x71\x1d", 8, 1 },  /* AWD2: AWD2 */
   { "\x05\x71\x1e", 9, 1 },  /* AWD3: AWD3 */
   { "\x29\x13\xd6\x18", 10, 1 },  /* JQOVF: JQOVF */
};

const Field_t ADC3_IER_fields[] = {
   { "\x04\x44\x84\x64\x91\x40", 0, 1 },  /* ADRDYIE: ADRDYIE */
   { "\x14\xf4\xcd\x40\x91\x40", 1, 1 },  /* EOSMPIE: EOSMPIE */
   { "\x14\xf0\xc9\x14", 2, 1 },  /* EOCIE: EOCIE */
   { "\x14\xf4\xc9\x14", 3, 1 },  /* EOSIE: EOSIE */
   { "\x3d\x64\x89\x14", 4, 1 },  /* OVRIE: OVRIE */
   { "\x28\x53\xc3\x24\x50", 5, 1 },  /* JEOCIE: JEOCIE */
   { "\x28\x53\xd3\x24\x50", 6, 1 },  /* JEOSIE: JEOSIE */
   { "\x05\x71\x1c\x24\x50", 7, 1 },  /* AWD1IE: AWD1IE */
   { "\x05\x71\x1d\x24\x50", 8, 1 },  /* AWD2IE: AWD2IE */
   { "\x05\x71\x1e\x24\x50", 9, 1 },  /* AWD3IE: AWD3IE */
   { "\x29\x13\xd6\x18\x91\x40", 10, 1 },  /* JQOVFIE: JQOVFIE */
};

const Field_t ADC3_CR_fields[] = {
   { "\x04\x41\x4e", 0, 1 },  /* ADEN: ADEN */
   { "\x04\x41\x09\x4c", 1, 1 },  /* ADDIS: ADDIS */
   { "\x04\x44\xd4\x05\x25\x00", 2, 1 },  /* ADSTART: ADSTART */
   { "\x28\x11\x13\x50\x14\x94", 3, 1 },  /* JADSTART: JADSTART */
   { "\x04\x44\xd4\x40", 4, 1 },  /* ADSTP: ADSTP */
   { "\x28\x11\x13\x51\x00", 5, 1 },  /* JADSTP: JADSTP */
   { "\x04\x45\x92\x14\x71\x4e", 28, 1 },  /* ADVREGEN: ADVREGEN */
   { "\x10\x51\x50\x41\x71\x00", 29, 1 },  /* DEEPPWD: DEEPPWD */
   { "\x04\x40\xc1\x30\x42\x46", 30, 1 },  /* ADCALDIF: ADCALDIF */
   { "\x04\x40\xc1\x30", 31, 1 },  /* ADCAL: ADCAL */
};

const Field_t ADC3_CFGR_fields[] = {
   { "\x10\xd0\x45\x38", 0, 1 },  /* DMAEN: DMAEN */
   { "\x10\xd0\x43\x18\x70", 1, 1 },  /* DMACFG: DMACFG */
   { "\x48\x54\xc0", 3, 2 },  /* RES: RES */
   { "\x04\xc2\x47\x3a\x58\x00", 5, 1 },  /* ALIGN_5: ALIGN_5 */
   { "\x15\x85\x13\x14\xc0", 6, 4 },  /* EXTSEL: EXTSEL */
   { "\x15\x85\x05\x38", 10, 2 },  /* EXTEN: EXTEN */
   { "\x3d\x64\x8d\x3c\x40", 12, 1 },  /* OVRMOD: OVRMOD */
   { "\x0c\xf3\x94", 13, 1 },  /* CONT: CONT */
   { "\x05\x55\x04\x31\x90", 14, 1 },  /* AUTDLY: AUTDLY */
   { "\x04\xc2\x47\x38", 15, 1 },  /* ALIGN: ALIGN */
   { "\x10\x94\xc3\x14\xe0", 16, 1 },  /* DISCEN: DISCEN */
   { "\x10\x94\xc3\x39\x53\x40", 17, 3 },  /* DISCNUM: DISCNUM */
   { "\x28\x42\x53\x0c\x53\x80", 20, 1 },  /* JDISCEN: JDISCEN */
   { "\x29\x13\x40", 21, 1 },  /* JQM: JQM */
   { "\x05\x71\x1c\x4c\x73\x00", 22, 1 },  /* AWD1SGL: AWD1SGL */
   { "\x05\x71\x1c\x14\xe0", 23, 1 },  /* AWD1EN: AWD1EN */
   { "\x28\x15\xc4\x70\x53\x80", 24, 1 },  /* JAWD1EN: JAWD1EN */
   { "\x28\x15\x54\x3c", 25, 1 },  /* JAUTO: JAUTO */
   { "\x05\x71\x03\x21\xc0\xc8", 26, 5 },  /* AWDCH1CH: AWDCH1CH */
   { "\x29\x11\x09\x4c", 31, 1 },  /* JQDIS: Injected Queue disable */
};

const Field_t ADC3_CFGR2_fields[] = {
   { "\x48\xf5\x93\x14", 0, 1 },  /* ROVSE: DMAEN */
   { "\x28\xf5\x93\x14", 1, 1 },  /* JOVSE: DMACFG */
   { "\x3d\x64\xd2", 2, 3 },  /* OVSR: RES */
   { "\x3d\x64\xd3", 5, 4 },  /* OVSS: ALIGN */
   { "\x51\x23\xd6\x4c", 9, 1 },  /* TROVS: Triggered Regular               Oversampling */
   { "\x48\xf5\x93\x34", 10, 1 },  /* ROVSM: EXTEN */
   { "\x1c\x33\xcd\x40", 16, 1 },  /* GCOMP: GCOMP */
   { "\x4d\x75\x12\x24\x70", 25, 1 },  /* SWTRIG: SWTRIG */
   { "\x09\x53\x02", 26, 1 },  /* BULB: BULB */
   { "\x4c\xd4\x14\x48\x91\xc0", 27, 1 },  /* SMPTRIG: SMPTRIG */
};

const Field_t ADC3_SMPR1_fields[] = {
   { "\x4c\xd4\x1b", 0, 3 },  /* SMP0: SMP0 */
   { "\x4c\xd4\x1c", 3, 3 },  /* SMP1: SMP1 */
   { "\x4c\xd4\x1d", 6, 3 },  /* SMP2: SMP2 */
   { "\x4c\xd4\x1e", 9, 3 },  /* SMP3: SMP3 */
   { "\x4c\xd4\x1f", 12, 3 },  /* SMP4: SMP4 */
   { "\x4c\xd4\x20", 15, 3 },  /* SMP5: SMP5 */
   { "\x4c\xd4\x21", 18, 3 },  /* SMP6: SMP6 */
   { "\x4c\xd4\x22", 21, 3 },  /* SMP7: SMP7 */
   { "\x4c\xd4\x23", 24, 3 },  /* SMP8: SMP8 */
   { "\x4c\xd4\x24", 27, 3 },  /* SMP9: SMP9 */
   { "\x4c\xd4\x10\x31\x54\xc0", 31, 1 },  /* SMPPLUS: Addition of one clock cycle to the               sampling time */
};

const Field_t ADC3_SMPR2_fields[] = {
   { "\x4c\xd4\x1c\x6c", 0, 3 },  /* SMP10: SMP10 */
   { "\x4c\xd4\x1c\x70", 3, 3 },  /* SMP11: SMP11 */
   { "\x4c\xd4\x1c\x74", 6, 3 },  /* SMP12: SMP12 */
   { "\x4c\xd4\x1c\x78", 9, 3 },  /* SMP13: SMP13 */
   { "\x4c\xd4\x1c\x7c", 12, 3 },  /* SMP14: SMP14 */
   { "\x4c\xd4\x1c\x80", 15, 3 },  /* SMP15: SMP15 */
   { "\x4c\xd4\x1c\x84", 18, 3 },  /* SMP16: SMP16 */
   { "\x4c\xd4\x1c\x88", 21, 3 },  /* SMP17: SMP17 */
   { "\x4c\xd4\x1c\x8c", 24, 3 },  /* SMP18: SMP18 */
};

const Field_t ADC3_TR1_fields[] = {
   { "\x31\x47\x00", 0, 12 },  /* LT1: LT1 */
   { "\x05\x71\x06\x24\xc5\x00", 12, 3 },  /* AWDFILT: AWDFILT */
   { "\x21\x47\x00", 16, 12 },  /* HT1: HT1 */
};

const Field_t ADC3_TR2_fields[] = {
   { "\x31\x47\x40", 0, 8 },  /* LT2: LT2 */
   { "\x21\x47\x40", 16, 8 },  /* HT2: HT2 */
};

const Field_t ADC3_TR3_fields[] = {
   { "\x31\x47\x80", 0, 8 },  /* LT3: LT3 */
   { "\x21\x47\x80", 16, 8 },  /* HT3: HT3 */
};

const Field_t ADC3_SQR1_fields[] = {
   { "\x30", 0, 4 },  /* L: Regular channel sequence               length */
   { "\x4d\x17\x00", 6, 5 },  /* SQ1: SQ1 */
   { "\x4d\x17\x40", 12, 5 },  /* SQ2: SQ2 */
   { "\x4d\x17\x80", 18, 5 },  /* SQ3: SQ3 */
   { "\x4d\x17\xc0", 24, 5 },  /* SQ4: SQ4 */
};

const Field_t ADC3_SQR2_fields[] = {
   { "\x4d\x18\x00", 0, 5 },  /* SQ5: SQ5 */
   { "\x4d\x18\x40", 6, 5 },  /* SQ6: SQ6 */
   { "\x4d\x18\x80", 12, 5 },  /* SQ7: SQ7 */
   { "\x4d\x18\xc0", 18, 5 },  /* SQ8: SQ8 */
   { "\x4d\x19\x00", 24, 5 },  /* SQ9: SQ9 */
};

const Field_t ADC3_SQR3_fields[] = {
   { "\x4d\x17\x1b", 0, 5 },  /* SQ10: SQ10 */
   { "\x4d\x17\x1c", 6, 5 },  /* SQ11: SQ11 */
   { "\x4d\x17\x1d", 12, 5 },  /* SQ12: SQ12 */
   { "\x4d\x17\x1e", 18, 5 },  /* SQ13: SQ13 */
   { "\x4d\x17\x1f", 24, 5 },  /* SQ14: SQ14 */
};

const Field_t ADC3_SQR4_fields[] = {
   { "\x4d\x17\x20", 0, 5 },  /* SQ15: SQ15 */
   { "\x4d\x17\x21", 6, 5 },  /* SQ16: SQ16 */
};

const Field_t ADC3_DR_fields[] = {
   { "\x48\x40\x54\x04", 0, 16 },  /* RDATA: Regular Data converted */
};

const Field_t ADC3_JSQR_fields[] = {
   { "\x28\xc0", 0, 2 },  /* JL: JL */
   { "\x28\x56\x14\x4c\x53\x00", 2, 5 },  /* JEXTSEL: JEXTSEL */
   { "\x28\x56\x14\x14\xe0", 7, 2 },  /* JEXTEN: JEXTEN */
   { "\x29\x34\x5c", 9, 5 },  /* JSQ1: JSQ1 */
   { "\x29\x34\x5d", 15, 5 },  /* JSQ2: JSQ2 */
   { "\x29\x34\x5e", 21, 5 },  /* JSQ3: JSQ3 */
   { "\x29\x34\x5f", 27, 5 },  /* JSQ4: JSQ4 */
};

const Field_t ADC3_OFR1_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC3_OFR2_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC3_OFR3_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC3_OFR4_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x44\x0f\x4c", 24, 1 },  /* OFFSETPOS: OFFSETPOS */
   { "\x4c\x15\x05\x38", 25, 1 },  /* SATEN: SATEN */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC3_JDR1_fields[] = {
   { "\x28\x40\x54\x05\xc0", 0, 16 },  /* JDATA1: JDATA1 */
};

const Field_t ADC3_JDR2_fields[] = {
   { "\x28\x40\x54\x05\xd0", 0, 16 },  /* JDATA2: JDATA2 */
};

const Field_t ADC3_JDR3_fields[] = {
   { "\x28\x40\x54\x05\xe0", 0, 16 },  /* JDATA3: JDATA3 */
};

const Field_t ADC3_JDR4_fields[] = {
   { "\x28\x40\x54\x05\xf0", 0, 16 },  /* JDATA4: JDATA4 */
};

const Field_t ADC3_AWD2CR_fields[] = {
   { "\x05\x71\x1d\x0c\x80", 0, 19 },  /* AWD2CH: AWD2CH */
};

const Field_t ADC3_AWD3CR_fields[] = {
   { "\x05\x71\x1e\x0c\x80", 0, 19 },  /* AWD3CH: AWD3CH */
};

const Field_t ADC3_DIFSEL_fields[] = {
   { "\x10\x91\x93\x14\xc9\x5b", 0, 1 },  /* DIFSEL_0: Differential mode for channels               0 */
   { "\x10\x91\x93\x14\xc9\x5c\x95\xc8\xc0", 1, 18 },  /* DIFSEL_1_18: Differential mode for channels 15 to               1 */
};

const Field_t ADC3_CALFACT_fields[] = {
   { "\x0c\x13\x06\x04\x35\x25\x4c", 0, 7 },  /* CALFACT_S: CALFACT_S */
   { "\x0c\x13\x06\x04\x35\x25\x10", 16, 7 },  /* CALFACT_D: CALFACT_D */
};

const Field_t ADC3_GCOMP_fields[] = {
   { "\x1c\x33\xcd\x40\x33\xc5\x18\x60", 0, 14 },  /* GCOMPCOEFF: GCOMPCOEFF */
};

const Register_t ADC3_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, ADC3_ISR_fields, 11}, /* ISR: interrupt and status register */
   {"\x24\x54\x80", 4, 32, 0, ADC3_IER_fields, 11}, /* IER: interrupt enable register */
   {"\x0d\x20", 8, 32, 0, ADC3_CR_fields, 10}, /* CR: control register */
   {"\x0c\x61\xd2", 12, 32, 0, ADC3_CFGR_fields, 20}, /* CFGR: configuration register */
   {"\x0c\x61\xd2\x74", 16, 32, 0, ADC3_CFGR2_fields, 10}, /* CFGR2: configuration register */
   {"\x4c\xd4\x12\x70", 20, 32, 0, ADC3_SMPR1_fields, 11}, /* SMPR1: sample time register 1 */
   {"\x4c\xd4\x12\x74", 24, 32, 0, ADC3_SMPR2_fields, 9}, /* SMPR2: sample time register 2 */
   {"\x51\x27\x00", 32, 32, 0, ADC3_TR1_fields, 3}, /* TR1: watchdog threshold register 1 */
   {"\x51\x27\x40", 36, 32, 0, ADC3_TR2_fields, 2}, /* TR2: watchdog threshold register */
   {"\x51\x27\x80", 40, 32, 0, ADC3_TR3_fields, 2}, /* TR3: watchdog threshold register 3 */
   {"\x4d\x14\x9c", 48, 32, 0, ADC3_SQR1_fields, 5}, /* SQR1: regular sequence register 1 */
   {"\x4d\x14\x9d", 52, 32, 0, ADC3_SQR2_fields, 5}, /* SQR2: regular sequence register 2 */
   {"\x4d\x14\x9e", 56, 32, 0, ADC3_SQR3_fields, 5}, /* SQR3: regular sequence register 3 */
   {"\x4d\x14\x9f", 60, 32, 0, ADC3_SQR4_fields, 2}, /* SQR4: regular sequence register 4 */
   {"\x11\x20", 64, 32, 0, ADC3_DR_fields, 1}, /* DR: regular Data Register */
   {"\x29\x34\x52", 76, 32, 0, ADC3_JSQR_fields, 7}, /* JSQR: injected sequence register */
   {"\x3c\x64\x9c", 96, 32, 0, ADC3_OFR1_fields, 5}, /* OFR1: offset register 1 */
   {"\x3c\x64\x9d", 100, 32, 0, ADC3_OFR2_fields, 5}, /* OFR2: offset register 2 */
   {"\x3c\x64\x9e", 104, 32, 0, ADC3_OFR3_fields, 5}, /* OFR3: offset register 3 */
   {"\x3c\x64\x9f", 108, 32, 0, ADC3_OFR4_fields, 5}, /* OFR4: offset register 4 */
   {"\x28\x44\x9c", 128, 32, 0, ADC3_JDR1_fields, 1}, /* JDR1: injected data register 1 */
   {"\x28\x44\x9d", 132, 32, 0, ADC3_JDR2_fields, 1}, /* JDR2: injected data register 2 */
   {"\x28\x44\x9e", 136, 32, 0, ADC3_JDR3_fields, 1}, /* JDR3: injected data register 3 */
   {"\x28\x44\x9f", 140, 32, 0, ADC3_JDR4_fields, 1}, /* JDR4: injected data register 4 */
   {"\x05\x71\x1d\x0d\x20", 160, 32, 0, ADC3_AWD2CR_fields, 1}, /* AWD2CR: Analog Watchdog 2 Configuration           Register */
   {"\x05\x71\x1e\x0d\x20", 164, 32, 0, ADC3_AWD3CR_fields, 1}, /* AWD3CR: Analog Watchdog 3 Configuration           Register */
   {"\x10\x91\x93\x14\xc0", 176, 32, 0, ADC3_DIFSEL_fields, 2}, /* DIFSEL: Differential Mode Selection Register           2 */
   {"\x0c\x13\x06\x04\x35\x00", 180, 32, 0, ADC3_CALFACT_fields, 2}, /* CALFACT: Calibration Factors */
   {"\x1c\x33\xcd\x40", 192, 32, 0, ADC3_GCOMP_fields, 1}, /* GCOMP: Gain compensation Register */
};

const Field_t DAC1_DAC_CR_fields[] = {
   { "\x14\xe7\x00", 0, 1 },  /* EN1: DAC channel1 enable This bit is set and               cleared by software to enable/disable DAC               channel1. */
   { "\x50\x53\x9c", 1, 1 },  /* TEN1: DAC channel1 trigger               enable */
   { "\x51\x31\x4c\x70", 2, 4 },  /* TSEL1: DAC channel1 trigger selection These               bits select the external event used to trigger DAC               channel1. Note: Only used if bit TEN1 = 1 (DAC               channel1 trigger enabled). */
   { "\x5c\x15\x85\x70", 6, 2 },  /* WAVE1: DAC channel1 noise/triangle wave               generation enable These bits are set and cleared by               software. Note: Only used if bit TEN1 = 1 (DAC               channel1 trigger enabled). */
   { "\x34\x13\x50\x70", 8, 4 },  /* MAMP1: DAC channel1 mask/amplitude selector               These bits are written by software to select mask in               wave generation mode or amplitude in triangle               generation mode. = 1011: Unmask bits[11:0] of LFSR/               triangle amplitude equal to 4095 */
   { "\x10\xd0\x45\x39\xc0", 12, 1 },  /* DMAEN1: DAC channel1 DMA enable This bit is set               and cleared by software. */
   { "\x10\xd0\x55\x11\x22\x45\x70", 13, 1 },  /* DMAUDRIE1: DAC channel1 DMA Underrun Interrupt               enable This bit is set and cleared by               software. */
   { "\x0c\x53\x9c", 14, 1 },  /* CEN1: DAC Channel 1 calibration enable This               bit is set and cleared by software to enable/disable               DAC channel 1 calibration, it can be written only if               bit EN1=0 into DAC_CR (the calibration mode can be               entered/exit only when the DAC channel is disabled)               Otherwise, the write operation is               ignored. */
   { "\x14\xe7\x40", 16, 1 },  /* EN2: DAC channel2 enable This bit is set and               cleared by software to enable/disable DAC               channel2. */
   { "\x50\x53\x9d", 17, 1 },  /* TEN2: DAC channel2 trigger               enable */
   { "\x51\x31\x4c\x74", 18, 4 },  /* TSEL2: DAC channel2 trigger selection These               bits select the external event used to trigger DAC               channel2 Note: Only used if bit TEN2 = 1 (DAC               channel2 trigger enabled). */
   { "\x5c\x15\x85\x74", 22, 2 },  /* WAVE2: DAC channel2 noise/triangle wave               generation enable These bits are set/reset by               software. 1x: Triangle wave generation enabled Note:               Only used if bit TEN2 = 1 (DAC channel2 trigger               enabled) */
   { "\x34\x13\x50\x74", 24, 4 },  /* MAMP2: DAC channel2 mask/amplitude selector               These bits are written by software to select mask in               wave generation mode or amplitude in triangle               generation mode. = 1011: Unmask bits[11:0] of LFSR/               triangle amplitude equal to 4095 */
   { "\x10\xd0\x45\x39\xd0", 28, 1 },  /* DMAEN2: DAC channel2 DMA enable This bit is set               and cleared by software. */
   { "\x10\xd0\x55\x11\x22\x45\x74", 29, 1 },  /* DMAUDRIE2: DAC channel2 DMA underrun interrupt               enable This bit is set and cleared by               software. */
   { "\x0c\x53\x9d", 30, 1 },  /* CEN2: DAC Channel 2 calibration enable This               bit is set and cleared by software to enable/disable               DAC channel 2 calibration, it can be written only if               bit EN2=0 into DAC_CR (the calibration mode can be               entered/exit only when the DAC channel is disabled)               Otherwise, the write operation is               ignored. */
};

const Field_t DAC1_DAC_SWTRGR_fields[] = {
   { "\x4d\x75\x12\x24\x77\x00", 0, 1 },  /* SWTRIG1: DAC channel1 software trigger This bit               is set by software to trigger the DAC in software               trigger mode. Note: This bit is cleared by hardware               (one APB1 clock cycle later) once the DAC_DHR1               register value has been loaded into the DAC_DOR1               register. */
   { "\x4d\x75\x12\x24\x77\x40", 1, 1 },  /* SWTRIG2: DAC channel2 software trigger This bit               is set by software to trigger the DAC in software               trigger mode. Note: This bit is cleared by hardware               (one APB1 clock cycle later) once the DAC_DHR2               register value has been loaded into the DAC_DOR2               register. */
   { "\x4d\x75\x12\x24\x70\x9c", 16, 1 },  /* SWTRIGB1: DAC channel1 software trigger               B */
   { "\x4d\x75\x12\x24\x70\x9d", 17, 1 },  /* SWTRIGB2: DAC channel2 software trigger               B */
};

const Field_t DAC1_DAC_DHR12R1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 12 },  /* DACC1DHR: DAC channel1 12-bit right-aligned data               These bits are written by software which specifies               12-bit data for DAC channel1. */
   { "\x10\x10\xc3\x70\x42\x12\x08", 16, 12 },  /* DACC1DHRB: DAC channel1 12-bit right-aligned data               B */
};

const Field_t DAC1_DAC_DHR12L1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 4, 12 },  /* DACC1DHR: DAC channel1 12-bit left-aligned data               These bits are written by software which specifies               12-bit data for DAC channel1. */
   { "\x10\x10\xc3\x70\x42\x12\x08", 20, 12 },  /* DACC1DHRB: DAC channel1 12-bit left-aligned data               B */
};

const Field_t DAC1_DAC_DHR8R1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 8 },  /* DACC1DHR: DAC channel1 8-bit right-aligned data               These bits are written by software which specifies               8-bit data for DAC channel1. */
   { "\x10\x10\xc3\x70\x42\x12\x08", 8, 8 },  /* DACC1DHRB: DAC channel1 8-bit right-aligned               data */
};

const Field_t DAC1_DAC_DHR12R2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 0, 12 },  /* DACC2DHR: DAC channel2 12-bit right-aligned data               These bits are written by software which specifies               12-bit data for DAC channel2. */
   { "\x10\x10\xc3\x74\x42\x12\x08", 16, 12 },  /* DACC2DHRB: DAC channel2 12-bit right-aligned               data */
};

const Field_t DAC1_DAC_DHR12L2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 4, 12 },  /* DACC2DHR: DAC channel2 12-bit left-aligned data               These bits are written by software which specify               12-bit data for DAC channel2. */
   { "\x10\x10\xc3\x74\x42\x12\x08", 20, 12 },  /* DACC2DHRB: DAC channel2 12-bit left-aligned data               B */
};

const Field_t DAC1_DAC_DHR8R2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 0, 8 },  /* DACC2DHR: DAC channel2 8-bit right-aligned data               These bits are written by software which specifies               8-bit data for DAC channel2. */
   { "\x10\x10\xc3\x74\x42\x12\x08", 8, 8 },  /* DACC2DHRB: DAC channel2 8-bit right-aligned               data */
};

const Field_t DAC1_DAC_DHR12RD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 12 },  /* DACC1DHR: DAC channel1 12-bit right-aligned data               These bits are written by software which specifies               12-bit data for DAC channel1. */
   { "\x10\x10\xc3\x74\x42\x12", 16, 12 },  /* DACC2DHR: DAC channel2 12-bit right-aligned data               These bits are written by software which specifies               12-bit data for DAC channel2. */
};

const Field_t DAC1_DAC_DHR12LD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 4, 12 },  /* DACC1DHR: DAC channel1 12-bit left-aligned data               These bits are written by software which specifies               12-bit data for DAC channel1. */
   { "\x10\x10\xc3\x74\x42\x12", 20, 12 },  /* DACC2DHR: DAC channel2 12-bit left-aligned data               These bits are written by software which specifies               12-bit data for DAC channel2. */
};

const Field_t DAC1_DAC_DHR8RD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 8 },  /* DACC1DHR: DAC channel1 8-bit right-aligned data               These bits are written by software which specifies               8-bit data for DAC channel1. */
   { "\x10\x10\xc3\x74\x42\x12", 8, 8 },  /* DACC2DHR: DAC channel2 8-bit right-aligned data               These bits are written by software which specifies               8-bit data for DAC channel2. */
};

const Field_t DAC1_DAC_DOR1_fields[] = {
   { "\x10\x10\xc3\x70\x43\xd2", 0, 12 },  /* DACC1DOR: DAC channel1 data output These bits are               read-only, they contain data output for DAC               channel1. */
   { "\x10\x10\xc3\x70\x43\xd2\x08", 16, 12 },  /* DACC1DORB: DAC channel1 data output */
};

const Field_t DAC1_DAC_DOR2_fields[] = {
   { "\x10\x10\xc3\x74\x43\xd2", 0, 12 },  /* DACC2DOR: DAC channel2 data output These bits are               read-only, they contain data output for DAC               channel2. */
   { "\x10\x10\xc3\x74\x43\xd2\x08", 16, 12 },  /* DACC2DORB: DAC channel2 data output */
};

const Field_t DAC1_DAC_SR_fields[] = {
   { "\x10\x10\xdc\x48\x46\x40", 11, 1 },  /* DAC1RDY: DAC channel1 ready status               bit */
   { "\x10\xf4\x93\x50\x15\x1c", 12, 1 },  /* DORSTAT1: DAC channel1 output register status               bit */
   { "\x10\xd0\x55\x11\x27\x00", 13, 1 },  /* DMAUDR1: DAC channel1 DMA underrun flag This bit               is set by hardware and cleared by software (by               writing it to 1). */
   { "\x0c\x13\x25\x18\xc0\x47\x70", 14, 1 },  /* CAL_FLAG1: DAC Channel 1 calibration offset status               This bit is set and cleared by hardware */
   { "\x09\x74\xd4\x70", 15, 1 },  /* BWST1: DAC Channel 1 busy writing sample time               flag This bit is systematically set just after Sample               & Hold mode enable and is set each time the               software writes the register DAC_SHSR1, It is cleared               by hardware when the write operation of DAC_SHSR1 is               complete. (It takes about 3LSI periods of               synchronization). */
   { "\x10\x10\xdd\x48\x46\x40", 27, 1 },  /* DAC2RDY: DAC channel 2 ready status               bit */
   { "\x10\xf4\x93\x50\x15\x1d", 28, 1 },  /* DORSTAT2: DAC channel 2 output register status               bit */
   { "\x10\xd0\x55\x11\x27\x40", 29, 1 },  /* DMAUDR2: DAC channel2 DMA underrun flag This bit               is set by hardware and cleared by software (by               writing it to 1). */
   { "\x0c\x13\x25\x18\xc0\x47\x74", 30, 1 },  /* CAL_FLAG2: DAC Channel 2 calibration offset status               This bit is set and cleared by hardware */
   { "\x09\x74\xd4\x74", 31, 1 },  /* BWST2: DAC Channel 2 busy writing sample time               flag This bit is systematically set just after Sample               & Hold mode enable and is set each time the               software writes the register DAC_SHSR2, It is cleared               by hardware when the write operation of DAC_SHSR2 is               complete. (It takes about 3 LSI periods of               synchronization). */
};

const Field_t DAC1_DAC_CCR_fields[] = {
   { "\x3d\x44\x89\x35\xc0", 0, 5 },  /* OTRIM1: DAC Channel 1 offset trimming               value */
   { "\x3d\x44\x89\x35\xd0", 16, 5 },  /* OTRIM2: DAC Channel 2 offset trimming               value */
};

const Field_t DAC1_DAC_MCR_fields[] = {
   { "\x34\xf1\x05\x70", 0, 3 },  /* MODE1: DAC Channel 1 mode These bits can be               written only when the DAC is disabled and not in the               calibration mode (when bit EN1=0 and bit CEN1 =0 in               the DAC_CR register). If EN1=1 or CEN1 =1 the write               operation is ignored. They can be set and cleared by               software to select the DAC Channel 1 mode: DAC               Channel 1 in normal Mode DAC Channel 1 in sample               &amp; hold mode */
   { "\x10\xd0\x44\x3d\x50\x8c\x15\xc0", 8, 1 },  /* DMADOUBLE1: DAC Channel1 DMA double data               mode */
   { "\x4c\x93\x86\x3d\x23\x41\x51\xc0", 9, 1 },  /* SINFORMAT1: Enable signed format for DAC               channel1 */
   { "\x20\x64\xc5\x30", 14, 2 },  /* HFSEL: High frequency interface mode               selection */
   { "\x34\xf1\x05\x74", 16, 3 },  /* MODE2: DAC Channel 2 mode These bits can be               written only when the DAC is disabled and not in the               calibration mode (when bit EN2=0 and bit CEN2 =0 in               the DAC_CR register). If EN2=1 or CEN2 =1 the write               operation is ignored. They can be set and cleared by               software to select the DAC Channel 2 mode: DAC               Channel 2 in normal Mode DAC Channel 2 in sample               &amp; hold mode */
   { "\x10\xd0\x44\x3d\x50\x8c\x15\xd0", 24, 1 },  /* DMADOUBLE2: DAC Channel2 DMA double data               mode */
   { "\x4c\x93\x86\x3d\x23\x41\x51\xd0", 25, 1 },  /* SINFORMAT2: Enable signed format for DAC               channel2 */
};

const Field_t DAC1_DAC_SHSR1_fields[] = {
   { "\x51\x30\x4d\x40\xc1\x5c", 0, 10 },  /* TSAMPLE1: DAC Channel 1 sample Time (only valid in               sample &amp; hold mode) These bits can be written               when the DAC channel1 is disabled or also during               normal operation. in the latter case, the write can               be done only when BWSTx of DAC_SR register is low, If               BWSTx=1, the write operation is               ignored. */
};

const Field_t DAC1_DAC_SHSR2_fields[] = {
   { "\x51\x30\x4d\x40\xc1\x5d", 0, 10 },  /* TSAMPLE2: DAC Channel 2 sample Time (only valid in               sample &amp; hold mode) These bits can be written               when the DAC channel2 is disabled or also during               normal operation. in the latter case, the write can               be done only when BWSTx of DAC_SR register is low, if               BWSTx=1, the write operation is               ignored. */
};

const Field_t DAC1_DAC_SHHR_fields[] = {
   { "\x50\x83\xcc\x11\xc0", 0, 10 },  /* THOLD1: DAC Channel 1 hold Time (only valid in               sample &amp; hold mode) Hold time= (THOLD[9:0]) x               T LSI */
   { "\x50\x83\xcc\x11\xd0", 16, 10 },  /* THOLD2: DAC Channel 2 hold time (only valid in               sample &amp; hold mode). Hold time= (THOLD[9:0])               x T LSI */
};

const Field_t DAC1_DAC_SHRR_fields[] = {
   { "\x51\x21\x46\x48\x54\xc8\x70", 0, 8 },  /* TREFRESH1: DAC Channel 1 refresh Time (only valid               in sample &amp; hold mode) Refresh time=               (TREFRESH[7:0]) x T LSI */
   { "\x51\x21\x46\x48\x54\xc8\x74", 16, 8 },  /* TREFRESH2: DAC Channel 2 refresh Time (only valid               in sample &amp; hold mode) Refresh time=               (TREFRESH[7:0]) x T LSI */
};

const Field_t DAC1_DAC_STR1_fields[] = {
   { "\x4d\x44\x93\x50\x40\x54\x05\xc0", 0, 12 },  /* STRSTDATA1: DAC Channel 1 Sawtooth reset               value */
   { "\x4d\x41\x09\x49\xc0", 12, 1 },  /* STDIR1: DAC Channel1 Sawtooth direction               setting */
   { "\x4d\x42\x4e\x0c\x40\x54\x05\xc0", 16, 16 },  /* STINCDATA1: DAC CH1 Sawtooth increment value (12.4               bit format) */
};

const Field_t DAC1_DAC_STR2_fields[] = {
   { "\x4d\x44\x93\x50\x40\x54\x05\xd0", 0, 12 },  /* STRSTDATA2: DAC Channel 2 Sawtooth reset               value */
   { "\x4d\x41\x09\x49\xd0", 12, 1 },  /* STDIR2: DAC Channel2 Sawtooth direction               setting */
   { "\x4d\x42\x4e\x0c\x40\x54\x05\xd0", 16, 16 },  /* STINCDATA2: DAC CH2 Sawtooth increment value (12.4               bit format) */
};

const Field_t DAC1_DAC_STMODR_fields[] = {
   { "\x4d\x44\x93\x51\x44\x89\x1d\x31\x4c\x70", 0, 4 },  /* STRSTTRIGSEL1: DAC Channel 1 Sawtooth Reset trigger               selection */
   { "\x4d\x42\x4e\x0d\x44\x89\x1d\x31\x4c\x70", 8, 4 },  /* STINCTRIGSEL1: DAC Channel 1 Sawtooth Increment trigger               selection */
   { "\x4d\x44\x93\x51\x44\x89\x1d\x31\x4c\x74", 16, 4 },  /* STRSTTRIGSEL2: DAC Channel 1 Sawtooth Reset trigger               selection */
   { "\x4d\x42\x4e\x0d\x44\x89\x1d\x31\x4c\x74", 24, 4 },  /* STINCTRIGSEL2: DAC Channel 2 Sawtooth Increment trigger               selection */
};

const Register_t DAC1_registers[] = {
   {"\x10\x10\xe5\x0d\x20", 0, 32, 0, DAC1_DAC_CR_fields, 16}, /* DAC_CR: DAC control register */
   {"\x10\x10\xe5\x4d\x75\x12\x1d\x20", 4, 32, 0, DAC1_DAC_SWTRGR_fields, 4}, /* DAC_SWTRGR: DAC software trigger register */
   {"\x10\x10\xe5\x10\x84\x9c\x75\x27\x00", 8, 32, 0, DAC1_DAC_DHR12R1_fields, 2}, /* DAC_DHR12R1: DAC channel1 12-bit right-aligned data           holding register */
   {"\x10\x10\xe5\x10\x84\x9c\x74\xc7\x00", 12, 32, 0, DAC1_DAC_DHR12L1_fields, 2}, /* DAC_DHR12L1: DAC channel1 12-bit left aligned data           holding register */
   {"\x10\x10\xe5\x10\x84\xa3\x49\xc0", 16, 32, 0, DAC1_DAC_DHR8R1_fields, 2}, /* DAC_DHR8R1: DAC channel1 8-bit right aligned data           holding register */
   {"\x10\x10\xe5\x10\x84\x9c\x75\x27\x40", 20, 32, 0, DAC1_DAC_DHR12R2_fields, 2}, /* DAC_DHR12R2: DAC channel2 12-bit right aligned data           holding register */
   {"\x10\x10\xe5\x10\x84\x9c\x74\xc7\x40", 24, 32, 0, DAC1_DAC_DHR12L2_fields, 2}, /* DAC_DHR12L2: DAC channel2 12-bit left aligned data           holding register */
   {"\x10\x10\xe5\x10\x84\xa3\x49\xd0", 28, 32, 0, DAC1_DAC_DHR8R2_fields, 2}, /* DAC_DHR8R2: DAC channel2 8-bit right-aligned data           holding register */
   {"\x10\x10\xe5\x10\x84\x9c\x75\x21\x00", 32, 32, 0, DAC1_DAC_DHR12RD_fields, 2}, /* DAC_DHR12RD: Dual DAC 12-bit right-aligned data holding           register */
   {"\x10\x10\xe5\x10\x84\x9c\x74\xc1\x00", 36, 32, 0, DAC1_DAC_DHR12LD_fields, 2}, /* DAC_DHR12LD: DUAL DAC 12-bit left aligned data holding           register */
   {"\x10\x10\xe5\x10\x84\xa3\x48\x40", 40, 32, 0, DAC1_DAC_DHR8RD_fields, 2}, /* DAC_DHR8RD: DUAL DAC 8-bit right aligned data holding           register */
   {"\x10\x10\xe5\x10\xf4\x9c", 44, 32, 0, DAC1_DAC_DOR1_fields, 2}, /* DAC_DOR1: DAC channel1 data output           register */
   {"\x10\x10\xe5\x10\xf4\x9d", 48, 32, 0, DAC1_DAC_DOR2_fields, 2}, /* DAC_DOR2: DAC channel2 data output           register */
   {"\x10\x10\xe5\x4d\x20", 52, 32, 0, DAC1_DAC_SR_fields, 10}, /* DAC_SR: DAC status register */
   {"\x10\x10\xe5\x0c\x34\x80", 56, 32, 0, DAC1_DAC_CCR_fields, 2}, /* DAC_CCR: DAC calibration control           register */
   {"\x10\x10\xe5\x34\x34\x80", 60, 32, 0, DAC1_DAC_MCR_fields, 7}, /* DAC_MCR: DAC mode control register */
   {"\x10\x10\xe5\x4c\x84\xd2\x70", 64, 32, 0, DAC1_DAC_SHSR1_fields, 1}, /* DAC_SHSR1: DAC Sample and Hold sample time register           1 */
   {"\x10\x10\xe5\x4c\x84\xd2\x74", 68, 32, 0, DAC1_DAC_SHSR2_fields, 1}, /* DAC_SHSR2: DAC Sample and Hold sample time register           2 */
   {"\x10\x10\xe5\x4c\x82\x12", 72, 32, 0, DAC1_DAC_SHHR_fields, 2}, /* DAC_SHHR: DAC Sample and Hold hold time           register */
   {"\x10\x10\xe5\x4c\x84\x92", 76, 32, 0, DAC1_DAC_SHRR_fields, 2}, /* DAC_SHRR: DAC Sample and Hold refresh time           register */
   {"\x10\x10\xe5\x4d\x44\x9c", 88, 32, 0, DAC1_DAC_STR1_fields, 3}, /* DAC_STR1: Sawtooth register */
   {"\x10\x10\xe5\x4d\x44\x9d", 92, 32, 0, DAC1_DAC_STR2_fields, 3}, /* DAC_STR2: Sawtooth register */
   {"\x10\x10\xe5\x4d\x43\x4f\x11\x20", 96, 32, 0, DAC1_DAC_STMODR_fields, 4}, /* DAC_STMODR: Sawtooth Mode register */
};

const Field_t RNG_CR_fields[] = {
   { "\x48\xe1\xc5\x38", 2, 1 },  /* RNGEN: Random number generator               enable */
   { "\x24\x50", 3, 1 },  /* IE: Interrupt enable */
   { "\x0c\x51\x00", 5, 1 },  /* CED: Clock error detection */
};

const Field_t RNG_SR_fields[] = {
   { "\x11\x21\x19", 0, 1 },  /* DRDY: Data ready */
   { "\x0c\x50\xd3", 1, 1 },  /* CECS: Clock error current status */
   { "\x4c\x50\xd3", 2, 1 },  /* SECS: Seed error current status */
   { "\x0c\x52\x53", 5, 1 },  /* CEIS: Clock error interrupt               status */
   { "\x4c\x52\x53", 6, 1 },  /* SEIS: Seed error interrupt               status */
};

const Field_t RNG_DR_fields[] = {
   { "\x48\xe1\x01\x50\x10", 0, 32 },  /* RNDATA: Random data */
};

const Register_t RNG_registers[] = {
   {"\x0d\x20", 0, 32, 0, RNG_CR_fields, 3}, /* CR: control register */
   {"\x4d\x20", 4, 32, 0, RNG_SR_fields, 5}, /* SR: status register */
   {"\x11\x20", 8, 32, 0, RNG_DR_fields, 1}, /* DR: data register */
};

const Field_t FMC_BCR1_fields[] = {
   { "\x34\x22\xc5\x38", 0, 1 },  /* MBKEN: MBKEN */
   { "\x35\x56\x05\x38", 1, 1 },  /* MUXEN: MUXEN */
   { "\x35\x46\x50", 2, 2 },  /* MTYP: MTYP */
   { "\x35\x72\x44", 4, 2 },  /* MWID: MWID */
   { "\x18\x10\xc3\x14\xe0", 6, 1 },  /* FACCEN: FACCEN */
   { "\x09\x54\x93\x50\x53\x80", 8, 1 },  /* BURSTEN: BURSTEN */
   { "\x5c\x12\x54\x40\xf3\x00", 9, 1 },  /* WAITPOL: WAITPOL */
   { "\x5c\x12\x54\x0c\x61\xc0", 11, 1 },  /* WAITCFG: WAITCFG */
   { "\x5d\x21\x4e", 12, 1 },  /* WREN: WREN */
   { "\x5c\x12\x54\x14\xe0", 13, 1 },  /* WAITEN: WAITEN */
   { "\x15\x85\x0d\x3c\x40", 14, 1 },  /* EXTMOD: EXTMOD */
   { "\x05\x36\x4e\x0d\x70\x49\x50", 15, 1 },  /* ASYNCWAIT: ASYNCWAIT */
   { "\x0d\x04\xc9\x68\x50", 16, 3 },  /* CPSIZE: CPSIZE */
   { "\x0c\x25\x52\x4d\x44\x97", 19, 1 },  /* CBURSTRW: CBURSTRW */
   { "\x0c\x33\x0b\x14\xe0", 20, 1 },  /* CCLKEN: CCLKEN */
   { "\x5c\x61\x09\x4c", 21, 1 },  /* WFDIS: WFDIS */
   { "\x38\x23\x13\x15\x40", 22, 2 },  /* NBLSET: NBLSET */
};

const Field_t FMC_BTR1_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x0c\xc2\xc4\x25\x60", 20, 4 },  /* CLKDIV: CLKDIV */
   { "\x10\x15\x0c\x05\x40", 24, 4 },  /* DATLAT: DATLAT */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_BCR2_fields[] = {
   { "\x34\x22\xc5\x38", 0, 1 },  /* MBKEN: MBKEN */
   { "\x35\x56\x05\x38", 1, 1 },  /* MUXEN: MUXEN */
   { "\x35\x46\x50", 2, 2 },  /* MTYP: MTYP */
   { "\x35\x72\x44", 4, 2 },  /* MWID: MWID */
   { "\x18\x10\xc3\x14\xe0", 6, 1 },  /* FACCEN: FACCEN */
   { "\x09\x54\x93\x50\x53\x80", 8, 1 },  /* BURSTEN: BURSTEN */
   { "\x5c\x12\x54\x40\xf3\x00", 9, 1 },  /* WAITPOL: WAITPOL */
   { "\x5c\x12\x54\x0c\x61\xc0", 11, 1 },  /* WAITCFG: WAITCFG */
   { "\x5d\x21\x4e", 12, 1 },  /* WREN: WREN */
   { "\x5c\x12\x54\x14\xe0", 13, 1 },  /* WAITEN: WAITEN */
   { "\x15\x85\x0d\x3c\x40", 14, 1 },  /* EXTMOD: EXTMOD */
   { "\x05\x36\x4e\x0d\x70\x49\x50", 15, 1 },  /* ASYNCWAIT: ASYNCWAIT */
   { "\x0d\x04\xc9\x68\x50", 16, 3 },  /* CPSIZE: CPSIZE */
   { "\x0c\x25\x52\x4d\x44\x97", 19, 1 },  /* CBURSTRW: CBURSTRW */
   { "\x0c\x33\x0b\x14\xe0", 20, 1 },  /* CCLKEN: CCLKEN */
   { "\x5c\x61\x09\x4c", 21, 1 },  /* WFDIS: WFDIS */
   { "\x38\x23\x13\x15\x40", 22, 2 },  /* NBLSET: NBLSET */
};

const Field_t FMC_BTR2_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x0c\xc2\xc4\x25\x60", 20, 4 },  /* CLKDIV: CLKDIV */
   { "\x10\x15\x0c\x05\x40", 24, 4 },  /* DATLAT: DATLAT */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_BCR3_fields[] = {
   { "\x34\x22\xc5\x38", 0, 1 },  /* MBKEN: MBKEN */
   { "\x35\x56\x05\x38", 1, 1 },  /* MUXEN: MUXEN */
   { "\x35\x46\x50", 2, 2 },  /* MTYP: MTYP */
   { "\x35\x72\x44", 4, 2 },  /* MWID: MWID */
   { "\x18\x10\xc3\x14\xe0", 6, 1 },  /* FACCEN: FACCEN */
   { "\x09\x54\x93\x50\x53\x80", 8, 1 },  /* BURSTEN: BURSTEN */
   { "\x5c\x12\x54\x40\xf3\x00", 9, 1 },  /* WAITPOL: WAITPOL */
   { "\x5c\x12\x54\x0c\x61\xc0", 11, 1 },  /* WAITCFG: WAITCFG */
   { "\x5d\x21\x4e", 12, 1 },  /* WREN: WREN */
   { "\x5c\x12\x54\x14\xe0", 13, 1 },  /* WAITEN: WAITEN */
   { "\x15\x85\x0d\x3c\x40", 14, 1 },  /* EXTMOD: EXTMOD */
   { "\x05\x36\x4e\x0d\x70\x49\x50", 15, 1 },  /* ASYNCWAIT: ASYNCWAIT */
   { "\x0d\x04\xc9\x68\x50", 16, 3 },  /* CPSIZE: CPSIZE */
   { "\x0c\x25\x52\x4d\x44\x97", 19, 1 },  /* CBURSTRW: CBURSTRW */
   { "\x0c\x33\x0b\x14\xe0", 20, 1 },  /* CCLKEN: CCLKEN */
   { "\x5c\x61\x09\x4c", 21, 1 },  /* WFDIS: WFDIS */
   { "\x38\x23\x13\x15\x40", 22, 2 },  /* NBLSET: NBLSET */
};

const Field_t FMC_BTR3_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x0c\xc2\xc4\x25\x60", 20, 4 },  /* CLKDIV: CLKDIV */
   { "\x10\x15\x0c\x05\x40", 24, 4 },  /* DATLAT: DATLAT */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_BCR4_fields[] = {
   { "\x34\x22\xc5\x38", 0, 1 },  /* MBKEN: MBKEN */
   { "\x35\x56\x05\x38", 1, 1 },  /* MUXEN: MUXEN */
   { "\x35\x46\x50", 2, 2 },  /* MTYP: MTYP */
   { "\x35\x72\x44", 4, 2 },  /* MWID: MWID */
   { "\x18\x10\xc3\x14\xe0", 6, 1 },  /* FACCEN: FACCEN */
   { "\x09\x54\x93\x50\x53\x80", 8, 1 },  /* BURSTEN: BURSTEN */
   { "\x5c\x12\x54\x40\xf3\x00", 9, 1 },  /* WAITPOL: WAITPOL */
   { "\x5c\x12\x54\x0c\x61\xc0", 11, 1 },  /* WAITCFG: WAITCFG */
   { "\x5d\x21\x4e", 12, 1 },  /* WREN: WREN */
   { "\x5c\x12\x54\x14\xe0", 13, 1 },  /* WAITEN: WAITEN */
   { "\x15\x85\x0d\x3c\x40", 14, 1 },  /* EXTMOD: EXTMOD */
   { "\x05\x36\x4e\x0d\x70\x49\x50", 15, 1 },  /* ASYNCWAIT: ASYNCWAIT */
   { "\x0d\x04\xc9\x68\x50", 16, 3 },  /* CPSIZE: CPSIZE */
   { "\x0c\x25\x52\x4d\x44\x97", 19, 1 },  /* CBURSTRW: CBURSTRW */
   { "\x0c\x33\x0b\x14\xe0", 20, 1 },  /* CCLKEN: CCLKEN */
   { "\x5c\x61\x09\x4c", 21, 1 },  /* WFDIS: WFDIS */
   { "\x38\x23\x13\x15\x40", 22, 2 },  /* NBLSET: NBLSET */
};

const Field_t FMC_BTR4_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x0c\xc2\xc4\x25\x60", 20, 4 },  /* CLKDIV: CLKDIV */
   { "\x10\x15\x0c\x05\x40", 24, 4 },  /* DATLAT: DATLAT */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_PCSCNTR_fields[] = {
   { "\x0d\x30\xcf\x54\xe5\x00", 0, 16 },  /* CSCOUNT: CSCOUNT */
   { "\x0c\xe5\x02\x70\x53\x80", 16, 1 },  /* CNTB1EN: CNTB1EN */
   { "\x0c\xe5\x02\x74\x53\x80", 17, 1 },  /* CNTB2EN: CNTB2EN */
   { "\x0c\xe5\x02\x78\x53\x80", 18, 1 },  /* CNTB3EN: CNTB3EN */
   { "\x0c\xe5\x02\x7c\x53\x80", 19, 1 },  /* CNTB4EN: CNTB4EN */
};

const Field_t FMC_PCR_fields[] = {
   { "\x41\x70\x49\x50\x53\x80", 1, 1 },  /* PWAITEN: PWAITEN */
   { "\x40\x22\xc5\x38", 2, 1 },  /* PBKEN: PBKEN */
   { "\x41\x46\x50", 3, 1 },  /* PTYP: PTYP */
   { "\x41\x72\x44", 4, 2 },  /* PWID: PWID */
   { "\x14\x30\xc5\x38", 6, 1 },  /* ECCEN: ECCEN */
   { "\x50\x33\x12", 9, 4 },  /* TCLR: TCLR */
   { "\x50\x14\x80", 13, 4 },  /* TAR: TAR */
   { "\x14\x30\xd0\x4c", 17, 3 },  /* ECCPS: ECCPS */
};

const Field_t FMC_SR_fields[] = {
   { "\x25\x24\xc0", 0, 1 },  /* IRS: IRS */
   { "\x24\xc4\xc0", 1, 1 },  /* ILS: ILS */
   { "\x24\x64\xc0", 2, 1 },  /* IFS: IFS */
   { "\x25\x21\x4e", 3, 1 },  /* IREN: IREN */
   { "\x24\xc1\x4e", 4, 1 },  /* ILEN: ILEN */
   { "\x24\x61\x4e", 5, 1 },  /* IFEN: IFEN */
   { "\x18\x53\x50\x50", 6, 1 },  /* FEMPT: FEMPT */
};

const Field_t FMC_PMEM_fields[] = {
   { "\x34\x53\x53\x15\x46\x00", 0, 8 },  /* MEMSETx: MEMSETx */
   { "\x34\x53\x57\x04\x95\x18", 8, 8 },  /* MEMWAITx: MEMWAITx */
   { "\x34\x53\x48\x3c\xc1\x18", 16, 8 },  /* MEMHOLDx: MEMHOLDx */
   { "\x34\x53\x48\x25\xa6\x00", 24, 8 },  /* MEMHIZx: MEMHIZx */
};

const Field_t FMC_PATT_fields[] = {
   { "\x05\x45\x13\x15\x46\x00", 0, 8 },  /* ATTSETx: ATTSETx */
   { "\x05\x45\x17\x04\x95\x18", 8, 8 },  /* ATTWAITx: ATTWAITx */
   { "\x05\x45\x08\x3c\xc1\x18", 16, 8 },  /* ATTHOLDx: ATTHOLDx */
   { "\x05\x45\x08\x25\xa6\x00", 24, 8 },  /* ATTHIZx: ATTHIZx */
};

const Field_t FMC_ECCR_fields[] = {
   { "\x14\x30\xd8", 0, 32 },  /* ECCx: ECCx */
};

const Field_t FMC_BWTR1_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_BWTR2_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_BWTR3_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Field_t FMC_BWTR4_fields[] = {
   { "\x04\x41\x13\x15\x40", 0, 4 },  /* ADDSET: ADDSET */
   { "\x04\x41\x08\x30\x40", 4, 4 },  /* ADDHLD: ADDHLD */
   { "\x10\x15\x01\x4d\x40", 8, 8 },  /* DATAST: DATAST */
   { "\x09\x54\xd4\x55\x23\x80", 16, 4 },  /* BUSTURN: BUSTURN */
   { "\x04\x30\xcd\x3c\x40", 28, 2 },  /* ACCMOD: ACCMOD */
   { "\x10\x15\x01\x20\xc1\x00", 30, 2 },  /* DATAHLD: DATAHLD */
};

const Register_t FMC_registers[] = {
   {"\x08\x34\x9c", 0, 32, 0, FMC_BCR1_fields, 17}, /* BCR1: SRAM/NOR-Flash chip-select control register           1 */
   {"\x09\x44\x9c", 4, 32, 0, FMC_BTR1_fields, 8}, /* BTR1: SRAM/NOR-Flash chip-select timing register           1 */
   {"\x08\x34\x9d", 8, 32, 0, FMC_BCR2_fields, 17}, /* BCR2: SRAM/NOR-Flash chip-select control register           2 */
   {"\x09\x44\x9d", 12, 32, 0, FMC_BTR2_fields, 8}, /* BTR2: SRAM/NOR-Flash chip-select timing register           2 */
   {"\x08\x34\x9e", 16, 32, 0, FMC_BCR3_fields, 17}, /* BCR3: SRAM/NOR-Flash chip-select control register           3 */
   {"\x09\x44\x9e", 20, 32, 0, FMC_BTR3_fields, 8}, /* BTR3: SRAM/NOR-Flash chip-select timing register           3 */
   {"\x08\x34\x9f", 24, 32, 0, FMC_BCR4_fields, 17}, /* BCR4: SRAM/NOR-Flash chip-select control register           4 */
   {"\x09\x44\x9f", 28, 32, 0, FMC_BTR4_fields, 8}, /* BTR4: SRAM/NOR-Flash chip-select timing register           4 */
   {"\x40\x34\xc3\x39\x44\x80", 32, 32, 0, FMC_PCSCNTR_fields, 5}, /* PCSCNTR: PSRAM chip select counter           register */
   {"\x40\x34\x80", 128, 32, 0, FMC_PCR_fields, 8}, /* PCR: PC Card/NAND Flash control register           3 */
   {"\x4d\x20", 132, 32, 0, FMC_SR_fields, 7}, /* SR: FIFO status and interrupt register           3 */
   {"\x40\xd1\x4d", 136, 32, 0, FMC_PMEM_fields, 4}, /* PMEM: Common memory space timing register           3 */
   {"\x40\x15\x14", 140, 32, 0, FMC_PATT_fields, 4}, /* PATT: Attribute memory space timing register           3 */
   {"\x14\x30\xd2", 148, 32, 0, FMC_ECCR_fields, 1}, /* ECCR: ECC result register 3 */
   {"\x09\x75\x12\x70", 260, 32, 0, FMC_BWTR1_fields, 6}, /* BWTR1: SRAM/NOR-Flash write timing registers           1 */
   {"\x09\x75\x12\x74", 268, 32, 0, FMC_BWTR2_fields, 6}, /* BWTR2: SRAM/NOR-Flash write timing registers           2 */
   {"\x09\x75\x12\x78", 276, 32, 0, FMC_BWTR3_fields, 6}, /* BWTR3: SRAM/NOR-Flash write timing registers           3 */
   {"\x09\x75\x12\x7c", 284, 32, 0, FMC_BWTR4_fields, 6}, /* BWTR4: SRAM/NOR-Flash write timing registers           4 */
};

const Field_t QUADSPI_CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Enable */
   { "\x04\x23\xd2\x50", 1, 1 },  /* ABORT: Abort request */
   { "\x10\xd0\x45\x38", 2, 1 },  /* DMAEN: DMA enable */
   { "\x50\x31\x4e", 3, 1 },  /* TCEN: Timeout counter enable */
   { "\x4d\x32\x09\x19\x40", 4, 1 },  /* SSHIFT: Sample shift */
   { "\x10\x63\x40", 6, 1 },  /* DFM: DFM */
   { "\x19\x31\x4c", 7, 1 },  /* FSEL: FSEL */
   { "\x19\x42\x12\x15\x30", 8, 5 },  /* FTHRES: IFO threshold level */
   { "\x50\x52\x45", 16, 1 },  /* TEIE: Transfer error interrupt               enable */
   { "\x50\x32\x45", 17, 1 },  /* TCIE: Transfer complete interrupt               enable */
   { "\x19\x42\x45", 18, 1 },  /* FTIE: FIFO threshold interrupt               enable */
   { "\x4c\xd2\x45", 19, 1 },  /* SMIE: Status match interrupt               enable */
   { "\x50\xf2\x45", 20, 1 },  /* TOIE: TimeOut interrupt enable */
   { "\x05\x03\x53", 22, 1 },  /* APMS: Automatic poll mode stop */
   { "\x40\xd3\x40", 23, 1 },  /* PMM: Polling match mode */
   { "\x41\x21\x53\x0c\x13\x05\x48", 24, 8 },  /* PRESCALER: Clock prescaler */
};

const Field_t QUADSPI_DCR_fields[] = {
   { "\x0c\xb3\x4f\x10\x50", 0, 1 },  /* CKMODE: Mode 0 / mode 3 */
   { "\x0d\x32\x14", 8, 3 },  /* CSHT: Chip select high time */
   { "\x19\x32\x5a\x14", 16, 5 },  /* FSIZE: FLASH memory size */
};

const Field_t QUADSPI_SR_fields[] = {
   { "\x50\x51\x80", 0, 1 },  /* TEF: Transfer error flag */
   { "\x50\x31\x80", 1, 1 },  /* TCF: Transfer complete flag */
   { "\x19\x41\x80", 2, 1 },  /* FTF: FIFO threshold flag */
   { "\x4c\xd1\x80", 3, 1 },  /* SMF: Status match flag */
   { "\x50\xf1\x80", 4, 1 },  /* TOF: Timeout flag */
   { "\x09\x54\xd9", 5, 1 },  /* BUSY: Busy */
   { "\x18\xc1\x56\x14\xc0", 8, 5 },  /* FLEVEL: FIFO level */
};

const Field_t QUADSPI_FCR_fields[] = {
   { "\x0d\x41\x46", 0, 1 },  /* CTEF: Clear transfer error flag */
   { "\x0d\x40\xc6", 1, 1 },  /* CTCF: Clear transfer complete               flag */
   { "\x0d\x33\x46", 3, 1 },  /* CSMF: Clear status match flag */
   { "\x0d\x43\xc6", 4, 1 },  /* CTOF: Clear timeout flag */
};

const Field_t QUADSPI_DLR_fields[] = {
   { "\x10\xc0", 0, 32 },  /* DL: Data length */
};

const Field_t QUADSPI_CCR_fields[] = {
   { "\x24\xe4\xd4\x49\x50\xd4\x24\xf3\x80", 0, 8 },  /* INSTRUCTION: Instruction */
   { "\x24\xd3\xc4\x14", 8, 2 },  /* IMODE: Instruction mode */
   { "\x04\x43\x4f\x10\x50", 10, 2 },  /* ADMODE: Address mode */
   { "\x04\x44\xc9\x68\x50", 12, 2 },  /* ADSIZE: Address size */
   { "\x04\x23\x4f\x10\x50", 14, 2 },  /* ABMODE: Alternate bytes mode */
   { "\x04\x24\xc9\x68\x50", 16, 2 },  /* ABSIZE: Alternate bytes size */
   { "\x10\x36\x43", 18, 5 },  /* DCYC: Number of dummy cycles */
   { "\x10\xd3\xc4\x14", 24, 2 },  /* DMODE: Data mode */
   { "\x18\xd3\xc4\x14", 26, 2 },  /* FMODE: Functional mode */
   { "\x4c\x93\xcf", 28, 1 },  /* SIOO: Send instruction only once               mode */
   { "\x10\x44\x8d", 31, 1 },  /* DDRM: Double data rate mode */
};

const Field_t QUADSPI_AR_fields[] = {
   { "\x04\x41\x12\x15\x34\xc0", 0, 32 },  /* ADDRESS: Address */
};

const Field_t QUADSPI_ABR_fields[] = {
   { "\x04\xc5\x05\x48\xe0\x54\x14", 0, 32 },  /* ALTERNATE: ALTERNATE */
};

const Field_t QUADSPI_DR_fields[] = {
   { "\x10\x15\x01", 0, 32 },  /* DATA: Data */
};

const Field_t QUADSPI_PSMKR_fields[] = {
   { "\x34\x14\xcb", 0, 32 },  /* MASK: Status mask */
};

const Field_t QUADSPI_PSMAR_fields[] = {
   { "\x34\x15\x03\x20", 0, 32 },  /* MATCH: Status match */
};

const Field_t QUADSPI_PIR_fields[] = {
   { "\x24\xe5\x05\x49\x60\x4c", 0, 16 },  /* INTERVAL: Polling interval */
};

const Field_t QUADSPI_LPTR_fields[] = {
   { "\x50\x93\x45\x3d\x55\x00", 0, 16 },  /* TIMEOUT: Timeout period */
};

const Register_t QUADSPI_registers[] = {
   {"\x0d\x20", 0, 32, 0, QUADSPI_CR_fields, 16}, /* CR: control register */
   {"\x10\x34\x80", 4, 32, 0, QUADSPI_DCR_fields, 3}, /* DCR: device configuration register */
   {"\x4d\x20", 8, 32, 0, QUADSPI_SR_fields, 7}, /* SR: status register */
   {"\x18\x34\x80", 12, 32, 0, QUADSPI_FCR_fields, 4}, /* FCR: flag clear register */
   {"\x10\xc4\x80", 16, 32, 0, QUADSPI_DLR_fields, 1}, /* DLR: data length register */
   {"\x0c\x34\x80", 20, 32, 0, QUADSPI_CCR_fields, 11}, /* CCR: communication configuration           register */
   {"\x05\x20", 24, 32, 0, QUADSPI_AR_fields, 1}, /* AR: address register */
   {"\x04\x24\x80", 28, 32, 0, QUADSPI_ABR_fields, 1}, /* ABR: ABR */
   {"\x11\x20", 32, 32, 0, QUADSPI_DR_fields, 1}, /* DR: data register */
   {"\x41\x33\x4b\x48", 36, 32, 0, QUADSPI_PSMKR_fields, 1}, /* PSMKR: polling status mask register */
   {"\x41\x33\x41\x48", 40, 32, 0, QUADSPI_PSMAR_fields, 1}, /* PSMAR: polling status match register */
   {"\x40\x94\x80", 44, 32, 0, QUADSPI_PIR_fields, 1}, /* PIR: polling interval register */
   {"\x31\x05\x12", 48, 32, 0, QUADSPI_LPTR_fields, 1}, /* LPTR: low-power timeout register */
};

const Field_t SCB_ACTRL_ACTRL_fields[] = {
   { "\x10\x94\xcd\x0d\x90\xc9\x39\x40", 0, 1 },  /* DISMCYCINT: DISMCYCINT */
   { "\x10\x94\xc4\x14\x65\xc2\x54\x60", 1, 1 },  /* DISDEFWBUF: DISDEFWBUF */
   { "\x10\x94\xc6\x3c\xc1\x00", 2, 1 },  /* DISFOLD: DISFOLD */
   { "\x10\x94\xc6\x40\x30\x40", 8, 1 },  /* DISFPCA: DISFPCA */
   { "\x10\x94\xcf\x3c\x64\x00", 9, 1 },  /* DISOOFP: DISOOFP */
};

const Register_t SCB_ACTRL_registers[] = {
   {"\x04\x35\x12\x30", 0, 32, 0, SCB_ACTRL_ACTRL_fields, 5}, /* ACTRL: Auxiliary control register */
};

const Field_t STK_CTRL_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: Counter enable */
   { "\x50\x90\xcb\x24\xe5\x00", 1, 1 },  /* TICKINT: SysTick exception request               enable */
   { "\x0c\xc2\xd3\x3d\x54\x83\x14", 2, 1 },  /* CLKSOURCE: Clock source selection */
   { "\x0c\xf5\x4e\x50\x63\x01\x1c", 16, 1 },  /* COUNTFLAG: COUNTFLAG */
};

const Field_t STK_LOAD_fields[] = {
   { "\x48\x53\x0f\x04\x40", 0, 24 },  /* RELOAD: RELOAD value */
};

const Field_t STK_VAL_fields[] = {
   { "\x0d\x54\x92\x14\xe5\x00", 0, 24 },  /* CURRENT: Current counter value */
};

const Field_t STK_CALIB_fields[] = {
   { "\x50\x53\x8d\x4c", 0, 24 },  /* TENMS: Calibration value */
   { "\x4c\xb1\x57", 30, 1 },  /* SKEW: SKEW flag: Indicates whether the TENMS               value is exact */
   { "\x38\xf4\x85\x18", 31, 1 },  /* NOREF: NOREF flag. Reads as zero */
};

const Register_t STK_registers[] = {
   {"\x0d\x44\x8c", 0, 32, 0, STK_CTRL_fields, 4}, /* CTRL: SysTick control and status           register */
   {"\x30\xf0\x44", 4, 32, 0, STK_LOAD_fields, 1}, /* LOAD: SysTick reload value register */
   {"\x58\x13\x00", 8, 32, 0, STK_VAL_fields, 1}, /* VAL: SysTick current value register */
   {"\x0c\x13\x09\x08", 12, 32, 0, STK_CALIB_fields, 3}, /* CALIB: SysTick calibration value           register */
};

const Field_t SCB_CPUID_fields[] = {
   { "\x48\x55\x89\x4c\x93\xce", 0, 4 },  /* Revision: Revision number */
   { "\x40\x14\x94\x38\xf0", 4, 12 },  /* PartNo: Part number of the               processor */
   { "\x0c\xf3\x93\x50\x13\x94", 16, 4 },  /* Constant: Reads as 0xF */
   { "\x58\x14\x89\x04\xe5\x00", 20, 4 },  /* Variant: Variant number */
   { "\x24\xd4\x0c\x14\xd1\x4e\x50\x54\x80", 24, 8 },  /* Implementer: Implementer code */
};

const Field_t SCB_ICSR_fields[] = {
   { "\x58\x50\xd4\x04\x35\x09\x58\x50", 0, 9 },  /* VECTACTIVE: Active vector */
   { "\x48\x55\x14\x3c\x20\x53\x14", 11, 1 },  /* RETTOBASE: Return to base level */
   { "\x58\x50\xd4\x40\x53\x84\x24\xe1\xc0", 12, 7 },  /* VECTPENDING: Pending vector */
   { "\x25\x34\x90\x14\xe1\x09\x38\x70", 22, 1 },  /* ISRPENDING: Interrupt pending flag */
   { "\x40\x53\x84\x4d\x40\xcc\x48", 25, 1 },  /* PENDSTCLR: SysTick exception clear-pending               bit */
   { "\x40\x53\x84\x4d\x44\xc5\x50", 26, 1 },  /* PENDSTSET: SysTick exception set-pending               bit */
   { "\x40\x53\x84\x4d\x60\xcc\x48", 27, 1 },  /* PENDSVCLR: PendSV clear-pending bit */
   { "\x40\x53\x84\x4d\x64\xc5\x50", 28, 1 },  /* PENDSVSET: PendSV set-pending bit */
   { "\x38\xd2\x50\x14\xe1\x13\x15\x40", 31, 1 },  /* NMIPENDSET: NMI set-pending bit. */
};

const Field_t SCB_VTOR_fields[] = {
   { "\x50\x23\x0f\x18\x60", 9, 21 },  /* TBLOFF: Vector table base offset               field */
};

const Field_t SCB_AIRCR_fields[] = {
   { "\x58\x50\xd4\x48\x54\xc5\x50", 0, 1 },  /* VECTRESET: VECTRESET */
   { "\x58\x50\xd4\x0c\xc4\x81\x0d\x42\x56\x14", 1, 1 },  /* VECTCLRACTIVE: VECTCLRACTIVE */
   { "\x4d\x94\xd2\x15\x31\x54\x48\x54\x40", 2, 1 },  /* SYSRESETREQ: SYSRESETREQ */
   { "\x41\x22\x47\x48\xf5\x50", 8, 3 },  /* PRIGROUP: PRIGROUP */
   { "\x14\xe1\x09\x04\xe1\x53\x4c", 15, 1 },  /* ENDIANESS: ENDIANESS */
   { "\x58\x50\xd4\x2c\x56\x53\x50\x15\x00", 16, 16 },  /* VECTKEYSTAT: Register key */
};

const Field_t SCB_SCR_fields[] = {
   { "\x4c\xc1\x45\x40\xf3\x85\x60\x95\x00", 1, 1 },  /* SLEEPONEXIT: SLEEPONEXIT */
   { "\x4c\xc1\x45\x40\x41\x45\x40", 2, 1 },  /* SLEEPDEEP: SLEEPDEEP */
   { "\x4c\x55\x85\x3c\xe4\x05\x38\x40", 4, 1 },  /* SEVEONPEND: Send Event on Pending bit */
};

const Field_t SCB_CCR_fields[] = {
   { "\x38\xf3\x82\x05\x31\x54\x21\x21\x05\x38\x10", 0, 1 },  /* NONBASETHRDENA: Configures how the processor enters               Thread mode */
   { "\x55\x31\x52\x4c\x55\x0d\x40\x53\x84", 1, 1 },  /* USERSETMPEND: USERSETMPEND */
   { "\x54\xe0\x4c\x24\x73\xa5\x95\x44\x90", 3, 1 },  /* UNALIGN__TRP: UNALIGN_ TRP */
   { "\x10\x95\xa5\x6e\x55\x12\x40", 4, 1 },  /* DIV_0_TRP: DIV_0_TRP */
   { "\x08\x62\x06\x38\xd2\x47\x38", 8, 1 },  /* BFHFNMIGN: BFHFNMIGN */
   { "\x4d\x42\xc1\x30\x91\xce", 9, 1 },  /* STKALIGN: STKALIGN */
};

const Field_t SCB_SHPR1_fields[] = {
   { "\x41\x22\x65\x7c", 0, 8 },  /* PRI_4: Priority of system handler               4 */
   { "\x41\x22\x65\x80", 8, 8 },  /* PRI_5: Priority of system handler               5 */
   { "\x41\x22\x65\x84", 16, 8 },  /* PRI_6: Priority of system handler               6 */
};

const Field_t SCB_SHPR2_fields[] = {
   { "\x41\x22\x65\x71\xc0", 24, 8 },  /* PRI_11: Priority of system handler               11 */
};

const Field_t SCB_SHPR3_fields[] = {
   { "\x41\x22\x65\x71\xf0", 16, 8 },  /* PRI_14: Priority of system handler               14 */
   { "\x41\x22\x65\x72\x00", 24, 8 },  /* PRI_15: Priority of system handler               15 */
};

const Field_t SCB_SHCRS_fields[] = {
   { "\x34\x53\x46\x05\x53\x14\x04\x35\x00", 0, 1 },  /* MEMFAULTACT: Memory management fault exception active               bit */
   { "\x09\x54\xc6\x05\x53\x14\x04\x35\x00", 1, 1 },  /* BUSFAULTACT: Bus fault exception active               bit */
   { "\x55\x31\xc6\x05\x53\x14\x04\x35\x00", 3, 1 },  /* USGFAULTACT: Usage fault exception active               bit */
   { "\x4d\x60\xc1\x30\xc0\x43\x50", 7, 1 },  /* SVCALLACT: SVC call active bit */
   { "\x34\xf3\x89\x50\xf4\x81\x0d\x40", 8, 1 },  /* MONITORACT: Debug monitor active bit */
   { "\x40\x53\x84\x4d\x60\x43\x50", 10, 1 },  /* PENDSVACT: PendSV exception active               bit */
   { "\x4d\x94\xd4\x24\x32\xc1\x0d\x40", 11, 1 },  /* SYSTICKACT: SysTick exception active               bit */
   { "\x55\x31\xc6\x05\x53\x14\x40\x53\x84\x14\x40", 12, 1 },  /* USGFAULTPENDED: Usage fault exception pending               bit */
   { "\x34\x53\x46\x05\x53\x14\x40\x53\x84\x14\x40", 13, 1 },  /* MEMFAULTPENDED: Memory management fault exception               pending bit */
   { "\x09\x54\xc6\x05\x53\x14\x40\x53\x84\x14\x40", 14, 1 },  /* BUSFAULTPENDED: Bus fault exception pending               bit */
   { "\x4d\x60\xc1\x30\xc4\x05\x38\x41\x44", 15, 1 },  /* SVCALLPENDED: SVC call pending bit */
   { "\x34\x53\x46\x05\x53\x14\x14\xe0\x40", 16, 1 },  /* MEMFAULTENA: Memory management fault enable               bit */
   { "\x09\x54\xc6\x05\x53\x14\x14\xe0\x40", 17, 1 },  /* BUSFAULTENA: Bus fault enable bit */
   { "\x55\x31\xc6\x05\x53\x14\x14\xe0\x40", 18, 1 },  /* USGFAULTENA: Usage fault enable bit */
};

const Field_t SCB_CFSR_UFSR_BFSR_MMFSR_fields[] = {
   { "\x24\x10\xc3\x58\x93\xcc", 1, 1 },  /* IACCVIOL: Instruction access violation               flag */
   { "\x35\x53\x93\x50\xb1\x52\x48", 3, 1 },  /* MUNSTKERR: Memory manager fault on unstacking for a               return from exception */
   { "\x35\x35\x0b\x15\x24\x80", 4, 1 },  /* MSTKERR: Memory manager fault on stacking for               exception entry. */
   { "\x34\xc4\xd0\x15\x24\x80", 5, 1 },  /* MLSPERR: MLSPERR */
   { "\x34\xd0\x52\x58\x13\x09\x10", 7, 1 },  /* MMARVALID: Memory Management Fault Address Register               (MMAR) valid flag */
   { "\x24\x25\x53\x15\x24\x80", 8, 1 },  /* IBUSERR: Instruction bus error */
   { "\x41\x21\x43\x25\x31\x52\x48", 9, 1 },  /* PRECISERR: Precise data bus error */
   { "\x24\xd4\x12\x14\x32\x53\x15\x24\x80", 10, 1 },  /* IMPRECISERR: Imprecise data bus error */
   { "\x54\xe4\xd4\x2c\x54\x92", 11, 1 },  /* UNSTKERR: Bus fault on unstacking for a return               from exception */
   { "\x4d\x42\xc5\x49\x20", 12, 1 },  /* STKERR: Bus fault on stacking for exception               entry */
   { "\x31\x34\x05\x49\x20", 13, 1 },  /* LSPERR: Bus fault on floating-point lazy state               preservation */
   { "\x08\x60\x52\x58\x13\x09\x10", 15, 1 },  /* BFARVALID: Bus Fault Address Register (BFAR) valid               flag */
   { "\x54\xe1\x05\x18\x93\x93\x51\x20", 16, 1 },  /* UNDEFINSTR: Undefined instruction usage               fault */
   { "\x24\xe5\x93\x50\x15\x05", 17, 1 },  /* INVSTATE: Invalid state usage fault */
   { "\x24\xe5\x90\x0c", 18, 1 },  /* INVPC: Invalid PC load usage               fault */
   { "\x38\xf0\xd0", 19, 1 },  /* NOCP: No coprocessor usage               fault. */
   { "\x54\xe0\x4c\x24\x73\x85\x10", 24, 1 },  /* UNALIGNED: Unaligned access usage               fault */
   { "\x10\x95\x82\x65\xa1\x52\x3c", 25, 1 },  /* DIVBYZERO: Divide by zero usage fault */
};

const Field_t SCB_HFSR_fields[] = {
   { "\x58\x50\xd4\x50\x23\x00", 1, 1 },  /* VECTTBL: Vector table hard fault */
   { "\x18\xf4\x83\x14\x40", 30, 1 },  /* FORCED: Forced hard fault */
   { "\x10\x50\x95\x1e\x55\x94", 31, 1 },  /* DEBUG_VT: Reserved for Debug use */
};

const Field_t SCB_MMFAR_fields[] = {
   { "\x34\xd1\x81\x48", 0, 32 },  /* MMFAR: Memory management fault               address */
};

const Field_t SCB_BFAR_fields[] = {
   { "\x08\x60\x52", 0, 32 },  /* BFAR: Bus fault address */
};

const Field_t SCB_AFSR_fields[] = {
   { "\x24\xd4\x04\x14\x60", 0, 32 },  /* IMPDEF: Implementation defined */
};

const Register_t SCB_registers[] = {
   {"\x0d\x05\x49\x10", 0, 32, 0, SCB_CPUID_fields, 5}, /* CPUID: CPUID base register */
   {"\x24\x34\xd2", 4, 32, 0, SCB_ICSR_fields, 9}, /* ICSR: Interrupt control and state           register */
   {"\x59\x43\xd2", 8, 32, 0, SCB_VTOR_fields, 1}, /* VTOR: Vector table offset register */
   {"\x04\x94\x83\x48", 12, 32, 0, SCB_AIRCR_fields, 6}, /* AIRCR: Application interrupt and reset control           register */
   {"\x4c\x34\x80", 16, 32, 0, SCB_SCR_fields, 3}, /* SCR: System control register */
   {"\x0c\x34\x80", 20, 32, 0, SCB_CCR_fields, 6}, /* CCR: Configuration and control           register */
   {"\x4c\x84\x12\x70", 24, 32, 0, SCB_SHPR1_fields, 3}, /* SHPR1: System handler priority           registers */
   {"\x4c\x84\x12\x74", 28, 32, 0, SCB_SHPR2_fields, 1}, /* SHPR2: System handler priority           registers */
   {"\x4c\x84\x12\x78", 32, 32, 0, SCB_SHPR3_fields, 2}, /* SHPR3: System handler priority           registers */
   {"\x4c\x80\xd2\x4c", 36, 32, 0, SCB_SHCRS_fields, 14}, /* SHCRS: System handler control and state           register */
   {"\x0c\x64\xd2\x95\x51\x93\x4a\x50\x86\x4d\x29\x4d\x34\x64\xd2", 40, 32, 0, SCB_CFSR_UFSR_BFSR_MMFSR_fields, 18}, /* CFSR_UFSR_BFSR_MMFSR: Configurable fault status           register */
   {"\x20\x64\xd2", 44, 32, 0, SCB_HFSR_fields, 3}, /* HFSR: Hard fault status register */
   {"\x34\xd1\x81\x48", 52, 32, 0, SCB_MMFAR_fields, 1}, /* MMFAR: Memory management fault address           register */
   {"\x08\x60\x52", 56, 32, 0, SCB_BFAR_fields, 1}, /* BFAR: Bus fault address register */
   {"\x04\x64\xd2", 60, 32, 0, SCB_AFSR_fields, 1}, /* AFSR: Auxiliary fault status           register */
};

const Field_t MPU_TYPER_fields[] = {
   { "\x4c\x54\x01\x48\x15\x05", 0, 1 },  /* SEPARATE: Separate flag */
   { "\x11\x21\x47\x24\xf3\x80", 8, 8 },  /* DREGION: Number of MPU data regions */
   { "\x25\x21\x47\x24\xf3\x80", 16, 8 },  /* IREGION: Number of MPU instruction               regions */
};

const Field_t MPU_CTRL_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: Enables the MPU */
   { "\x20\x63\x8d\x24\x53\x81", 1, 1 },  /* HFNMIENA: Enables the operation of MPU during hard               fault */
   { "\x41\x22\x56\x10\x51\x85\x38\x10", 2, 1 },  /* PRIVDEFENA: Enable priviliged software access to               default memory map */
};

const Field_t MPU_RNR_fields[] = {
   { "\x48\x51\xc9\x3c\xe0", 0, 8 },  /* REGION: MPU region */
};

const Field_t MPU_RBAR_fields[] = {
   { "\x48\x51\xc9\x3c\xe0", 0, 4 },  /* REGION: MPU region field */
   { "\x58\x13\x09\x10", 4, 1 },  /* VALID: MPU region number valid */
   { "\x04\x41\x12", 5, 27 },  /* ADDR: Region base address field */
};

const Field_t MPU_RASR_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: Region enable bit. */
   { "\x4c\x96\x85", 1, 5 },  /* SIZE: Size of the MPU protection               region */
   { "\x4d\x21\x00", 8, 8 },  /* SRD: Subregion disable bits */
   { "\x08", 16, 1 },  /* B: memory attribute */
   { "\x0c", 17, 1 },  /* C: memory attribute */
   { "\x4c", 18, 1 },  /* S: Shareable memory attribute */
   { "\x50\x56\x00", 19, 3 },  /* TEX: memory attribute */
   { "\x05\x00", 24, 3 },  /* AP: Access permission */
   { "\x60\xe0", 28, 1 },  /* XN: Instruction access disable               bit */
};

const Register_t MPU_registers[] = {
   {"\x51\x94\x05\x48", 0, 32, 0, MPU_TYPER_fields, 3}, /* TYPER: MPU type register */
   {"\x0d\x44\x8c", 4, 32, 0, MPU_CTRL_fields, 3}, /* CTRL: MPU control register */
   {"\x48\xe4\x80", 8, 32, 0, MPU_RNR_fields, 1}, /* RNR: MPU region number register */
   {"\x48\x20\x52", 12, 32, 0, MPU_RBAR_fields, 3}, /* RBAR: MPU region base address           register */
   {"\x48\x14\xd2", 16, 32, 0, MPU_RASR_fields, 9}, /* RASR: MPU region attribute and size           register */
};

const Field_t NVIC_ISER0_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ISER1_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ISER2_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ISER3_fields[] = {
   { "\x4c\x55\x05\x38\x10", 0, 32 },  /* SETENA: SETENA */
};

const Field_t NVIC_ICER0_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER1_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER2_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER3_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ISPR0_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ISPR1_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ISPR2_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ISPR3_fields[] = {
   { "\x4c\x55\x10\x14\xe1\x00", 0, 32 },  /* SETPEND: SETPEND */
};

const Field_t NVIC_ICPR0_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR1_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR2_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR3_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_IABR0_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IABR1_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IABR2_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IABR3_fields[] = {
   { "\x04\x35\x09\x58\x50", 0, 32 },  /* ACTIVE: ACTIVE */
};

const Field_t NVIC_IPR0_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR1_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR2_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR3_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR4_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR5_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR6_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR7_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR8_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR9_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR10_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR11_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR12_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR13_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR14_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR15_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR16_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR17_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR18_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR19_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_IPR20_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_STIR_fields[] = {
   { "\x24\xe5\x09\x10", 0, 9 },  /* INTID: Software generated interrupt               ID */
};

const Register_t NVIC_registers[] = {
   {"\x25\x31\x52\x6c", 0, 32, 0, NVIC_ISER0_fields, 1}, /* ISER0: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x70", 4, 32, 0, NVIC_ISER1_fields, 1}, /* ISER1: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x74", 8, 32, 0, NVIC_ISER2_fields, 1}, /* ISER2: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x78", 12, 32, 0, NVIC_ISER3_fields, 1}, /* ISER3: Interrupt Set-Enable Register */
   {"\x24\x31\x52\x6c", 128, 32, 0, NVIC_ICER0_fields, 1}, /* ICER0: Interrupt Clear-Enable           Register */
   {"\x24\x31\x52\x70", 132, 32, 0, NVIC_ICER1_fields, 1}, /* ICER1: Interrupt Clear-Enable           Register */
   {"\x24\x31\x52\x74", 136, 32, 0, NVIC_ICER2_fields, 1}, /* ICER2: Interrupt Clear-Enable           Register */
   {"\x24\x31\x52\x78", 140, 32, 0, NVIC_ICER3_fields, 1}, /* ICER3: Interrupt Clear-Enable   Register */
   {"\x25\x34\x12\x6c", 256, 32, 0, NVIC_ISPR0_fields, 1}, /* ISPR0: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x70", 260, 32, 0, NVIC_ISPR1_fields, 1}, /* ISPR1: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x74", 264, 32, 0, NVIC_ISPR2_fields, 1}, /* ISPR2: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x78", 268, 32, 0, NVIC_ISPR3_fields, 1}, /* ISPR3: Interrupt Set-Pending Register */
   {"\x24\x34\x12\x6c", 384, 32, 0, NVIC_ICPR0_fields, 1}, /* ICPR0: Interrupt Clear-Pending           Register */
   {"\x24\x34\x12\x70", 388, 32, 0, NVIC_ICPR1_fields, 1}, /* ICPR1: Interrupt Clear-Pending           Register */
   {"\x24\x34\x12\x74", 392, 32, 0, NVIC_ICPR2_fields, 1}, /* ICPR2: Interrupt Clear-Pending           Register */
   {"\x24\x34\x12\x78", 396, 32, 0, NVIC_ICPR3_fields, 1}, /* ICPR3: Interrupt Clear-Pending           Register */
   {"\x24\x10\x92\x6c", 512, 32, 0, NVIC_IABR0_fields, 1}, /* IABR0: Interrupt Active Bit Register */
   {"\x24\x10\x92\x70", 516, 32, 0, NVIC_IABR1_fields, 1}, /* IABR1: Interrupt Active Bit Register */
   {"\x24\x10\x92\x74", 520, 32, 0, NVIC_IABR2_fields, 1}, /* IABR2: Interrupt Active Bit Register */
   {"\x24\x10\x92\x78", 524, 32, 0, NVIC_IABR3_fields, 1}, /* IABR3: Interrupt Active Bit Register */
   {"\x25\x04\x9b", 768, 32, 0, NVIC_IPR0_fields, 4}, /* IPR0: Interrupt Priority Register */
   {"\x25\x04\x9c", 772, 32, 0, NVIC_IPR1_fields, 4}, /* IPR1: Interrupt Priority Register */
   {"\x25\x04\x9d", 776, 32, 0, NVIC_IPR2_fields, 4}, /* IPR2: Interrupt Priority Register */
   {"\x25\x04\x9e", 780, 32, 0, NVIC_IPR3_fields, 4}, /* IPR3: Interrupt Priority Register */
   {"\x25\x04\x9f", 784, 32, 0, NVIC_IPR4_fields, 4}, /* IPR4: Interrupt Priority Register */
   {"\x25\x04\xa0", 788, 32, 0, NVIC_IPR5_fields, 4}, /* IPR5: Interrupt Priority Register */
   {"\x25\x04\xa1", 792, 32, 0, NVIC_IPR6_fields, 4}, /* IPR6: Interrupt Priority Register */
   {"\x25\x04\xa2", 796, 32, 0, NVIC_IPR7_fields, 4}, /* IPR7: Interrupt Priority Register */
   {"\x25\x04\xa3", 800, 32, 0, NVIC_IPR8_fields, 4}, /* IPR8: Interrupt Priority Register */
   {"\x25\x04\xa4", 804, 32, 0, NVIC_IPR9_fields, 4}, /* IPR9: Interrupt Priority Register */
   {"\x25\x04\x9c\x6c", 808, 32, 0, NVIC_IPR10_fields, 4}, /* IPR10: Interrupt Priority Register */
   {"\x25\x04\x9c\x70", 812, 32, 0, NVIC_IPR11_fields, 4}, /* IPR11: Interrupt Priority Register */
   {"\x25\x04\x9c\x74", 816, 32, 0, NVIC_IPR12_fields, 4}, /* IPR12: Interrupt Priority Register */
   {"\x25\x04\x9c\x78", 820, 32, 0, NVIC_IPR13_fields, 4}, /* IPR13: Interrupt Priority Register */
   {"\x25\x04\x9c\x7c", 824, 32, 0, NVIC_IPR14_fields, 4}, /* IPR14: Interrupt Priority Register */
   {"\x25\x04\x9c\x80", 828, 32, 0, NVIC_IPR15_fields, 4}, /* IPR15: Interrupt Priority Register */
   {"\x25\x04\x9c\x84", 832, 32, 0, NVIC_IPR16_fields, 4}, /* IPR16: Interrupt Priority Register */
   {"\x25\x04\x9c\x88", 836, 32, 0, NVIC_IPR17_fields, 4}, /* IPR17: Interrupt Priority Register */
   {"\x25\x04\x9c\x8c", 840, 32, 0, NVIC_IPR18_fields, 4}, /* IPR18: Interrupt Priority Register */
   {"\x25\x04\x9c\x90", 844, 32, 0, NVIC_IPR19_fields, 4}, /* IPR19: Interrupt Priority Register */
   {"\x25\x04\x9d\x6c", 848, 32, 0, NVIC_IPR20_fields, 4}, /* IPR20: Interrupt Priority Register */
   {"\x25\x04\x9d\x70", 852, 32, 0, NULL, 0}, /* IPR21: Interrupt Priority Register */
   {"\x25\x04\x9d\x74", 856, 32, 0, NULL, 0}, /* IPR22: Interrupt Priority Register */
   {"\x25\x04\x9d\x78", 860, 32, 0, NULL, 0}, /* IPR23: Interrupt Priority Register */
   {"\x25\x04\x9d\x7c", 864, 32, 0, NULL, 0}, /* IPR24: Interrupt Priority Register */
   {"\x25\x04\x9d\x80", 868, 32, 0, NULL, 0}, /* IPR25: Interrupt Priority Register */
   {"\x4d\x42\x52", 3584, 32, 0, NVIC_STIR_fields, 1}, /* STIR: Software trigger interrupt register */
};

const Field_t FPU_CPACR_CPACR_fields[] = {
   { "\x0d\x00", 20, 4 },  /* CP: CP */
};

const Register_t FPU_CPACR_registers[] = {
   {"\x0d\x00\x43\x48", 0, 32, 0, FPU_CPACR_CPACR_fields, 1}, /* CPACR: Coprocessor access control           register */
};

const Field_t FPU_FPCCR_fields[] = {
   { "\x31\x34\x01\x0d\x40", 0, 1 },  /* LSPACT: LSPACT */
   { "\x55\x31\x52", 1, 1 },  /* USER: USER */
   { "\x50\x84\x85\x04\x40", 3, 1 },  /* THREAD: THREAD */
   { "\x20\x64\x84\x64", 4, 1 },  /* HFRDY: HFRDY */
   { "\x34\xd4\x84\x64", 5, 1 },  /* MMRDY: MMRDY */
   { "\x08\x64\x84\x64", 6, 1 },  /* BFRDY: BFRDY */
   { "\x34\xf3\x92\x11\x90", 8, 1 },  /* MONRDY: MONRDY */
   { "\x31\x34\x05\x38", 30, 1 },  /* LSPEN: LSPEN */
   { "\x05\x34\x05\x38", 31, 1 },  /* ASPEN: ASPEN */
};

const Field_t FPU_FPCAR_fields[] = {
   { "\x04\x41\x12\x15\x34\xc0", 3, 29 },  /* ADDRESS: Location of unpopulated               floating-point */
};

const Field_t FPU_FPSCR_fields[] = {
   { "\x24\xf0\xc0", 0, 1 },  /* IOC: Invalid operation cumulative exception               bit */
   { "\x11\xa0\xc0", 1, 1 },  /* DZC: Division by zero cumulative exception               bit. */
   { "\x3c\x60\xc0", 2, 1 },  /* OFC: Overflow cumulative exception               bit */
   { "\x54\x60\xc0", 3, 1 },  /* UFC: Underflow cumulative exception               bit */
   { "\x25\x80\xc0", 4, 1 },  /* IXC: Inexact cumulative exception               bit */
   { "\x24\x40\xc0", 7, 1 },  /* IDC: Input denormal cumulative exception               bit. */
   { "\x48\xd3\xc4\x14", 22, 2 },  /* RMode: Rounding Mode control               field */
   { "\x19\xa0", 24, 1 },  /* FZ: Flush-to-zero mode control               bit: */
   { "\x10\xe0", 25, 1 },  /* DN: Default NaN mode control               bit */
   { "\x04\x84\x00", 26, 1 },  /* AHP: Alternative half-precision control               bit */
   { "\x58", 28, 1 },  /* V: Overflow condition code               flag */
   { "\x0c", 29, 1 },  /* C: Carry condition code flag */
   { "\x68", 30, 1 },  /* Z: Zero condition code flag */
   { "\x38", 31, 1 },  /* N: Negative condition code               flag */
};

const Register_t FPU_registers[] = {
   {"\x19\x00\xc3\x48", 0, 32, 0, FPU_FPCCR_fields, 9}, /* FPCCR: Floating-point context control           register */
   {"\x19\x00\xc1\x48", 4, 32, 0, FPU_FPCAR_fields, 1}, /* FPCAR: Floating-point context address           register */
   {"\x19\x04\xc3\x48", 8, 32, 0, FPU_FPSCR_fields, 14}, /* FPSCR: Floating-point status control           register */
};

const Field_t DBGMCU_IDCODE_fields[] = {
   { "\x10\x55\xa5\x24\x40", 0, 16 },  /* DEV_ID: Device Identifier */
   { "\x48\x55\xa5\x24\x40", 16, 16 },  /* REV_ID: Revision Identifier */
};

const Field_t DBGMCU_CR_fields[] = {
   { "\x10\x21\xe5\x4c\xc1\x45\x40", 0, 1 },  /* DBG_SLEEP: Debug Sleep Mode */
   { "\x10\x21\xe5\x4d\x43\xd0", 1, 1 },  /* DBG_STOP: Debug Stop Mode */
   { "\x10\x21\xe5\x4d\x40\x4e\x10\x26\x40", 2, 1 },  /* DBG_STANDBY: Debug Standby Mode */
   { "\x51\x20\x43\x16\x52\x4f\x14\xe0", 5, 1 },  /* TRACE_IOEN: Trace pin assignment               control */
   { "\x51\x20\x43\x16\x53\x4f\x10\x50", 6, 2 },  /* TRACE_MODE: Trace pin assignment               control */
};

const Field_t DBGMCU_APB1L_FZ_fields[] = {
   { "\x10\x21\xe5\x50\x93\x45\x49\xd9\x53\x50\xf4\x00", 0, 1 },  /* DBG_TIMER2_STOP: Debug Timer 2 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x5e\x95\x35\x0f\x40", 1, 1 },  /* DBG_TIM3_STOP: TIM3 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x5f\x95\x35\x0f\x40", 2, 1 },  /* DBG_TIM4_STOP: TIM4 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x60\x95\x35\x0f\x40", 3, 1 },  /* DBG_TIM5_STOP: TIM5 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x45\x4a\x19\x53\x50\xf4\x00", 4, 1 },  /* DBG_TIMER6_STOP: Debug Timer 6 stopped when Core is               halted */
   { "\x10\x21\xe5\x50\x93\x62\x95\x35\x0f\x40", 5, 1 },  /* DBG_TIM7_STOP: TIM7 counter stopped when core is               halted */
   { "\x10\x21\xe5\x49\x40\xe5\x4d\x43\xd0", 10, 1 },  /* DBG_RTC_STOP: Debug RTC stopped when Core is               halted */
   { "\x10\x21\xe5\x5d\x71\x07\x95\x35\x0f\x40", 11, 1 },  /* DBG_WWDG_STOP: Debug Window Wachdog stopped when Core               is halted */
   { "\x10\x21\xe5\x25\x71\x07\x95\x35\x0f\x40", 12, 1 },  /* DBG_IWDG_STOP: Debug Independent Wachdog stopped when               Core is halted */
   { "\x10\x21\xe5\x25\xd0\xdc\x95\x35\x0f\x40", 21, 1 },  /* DBG_I2C1_STOP: I2C1 SMBUS timeout mode stopped when               core is halted */
   { "\x10\x21\xe5\x25\xd0\xdd\x95\x35\x0f\x40", 22, 1 },  /* DBG_I2C2_STOP: I2C2 SMBUS timeout mode stopped when               core is halted */
   { "\x10\x21\xe5\x25\xd0\xde\x95\x35\x0f\x40", 30, 1 },  /* DBG_I2C3_STOP: I2C3 SMBUS timeout mode stopped when               core is halted */
   { "\x10\x21\xe5\x31\x05\x09\x34\x54\xa5\x4d\x43\xd0", 31, 1 },  /* DBG_LPTIMER_STOP: LPTIM1 counter stopped when core is               halted */
};

const Field_t DBGMCU_APB1H_FZ_fields[] = {
   { "\x10\x21\xe5\x25\xd0\xdf\x95\x35\x0f\x40", 1, 1 },  /* DBG_I2C4_STOP: DBG_I2C4_STOP */
};

const Field_t DBGMCU_APB2_FZ_fields[] = {
   { "\x10\x21\xe5\x50\x93\x5c\x95\x35\x0f\x40", 11, 1 },  /* DBG_TIM1_STOP: TIM1 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x63\x95\x35\x0f\x40", 13, 1 },  /* DBG_TIM8_STOP: TIM8 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x82\x54\xd4\x3d\x00", 16, 1 },  /* DBG_TIM15_STOP: TIM15 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x86\x54\xd4\x3d\x00", 17, 1 },  /* DBG_TIM16_STOP: TIM16 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x5c\x8a\x54\xd4\x3d\x00", 18, 1 },  /* DBG_TIM17_STOP: TIM17 counter stopped when core is               halted */
   { "\x10\x21\xe5\x50\x93\x5d\x6e\x54\xd4\x3d\x00", 20, 1 },  /* DBG_TIM20_STOP: TIM20counter stopped when core is               halted */
   { "\x10\x21\xe5\x21\x25\x09\x35\xb9\x53\x50\xf4\x00", 26, 1 },  /* DBG_HRTIM0_STOP: DBG_HRTIM0_STOP */
   { "\x10\x21\xe5\x21\x25\x09\x35\xc9\x53\x50\xf4\x00", 27, 1 },  /* DBG_HRTIM1_STOP: DBG_HRTIM0_STOP */
   { "\x10\x21\xe5\x21\x25\x09\x35\xd9\x53\x50\xf4\x00", 28, 1 },  /* DBG_HRTIM2_STOP: DBG_HRTIM0_STOP */
   { "\x10\x21\xe5\x21\x25\x09\x35\xe9\x53\x50\xf4\x00", 29, 1 },  /* DBG_HRTIM3_STOP: DBG_HRTIM0_STOP */
};

const Register_t DBGMCU_registers[] = {
   {"\x24\x40\xcf\x10\x50", 0, 32, 0, DBGMCU_IDCODE_fields, 2}, /* IDCODE: MCU Device ID Code Register */
   {"\x0d\x20", 4, 32, 0, DBGMCU_CR_fields, 5}, /* CR: Debug MCU Configuration           Register */
   {"\x05\x00\x9c\x32\x51\x9a", 8, 32, 0, DBGMCU_APB1L_FZ_fields, 13}, /* APB1L_FZ: APB Low Freeze Register 1 */
   {"\x05\x00\x9c\x22\x51\x9a", 12, 32, 0, DBGMCU_APB1H_FZ_fields, 1}, /* APB1H_FZ: APB Low Freeze Register 2 */
   {"\x05\x00\x9d\x94\x66\x80", 16, 32, 0, DBGMCU_APB2_FZ_fields, 10}, /* APB2_FZ: APB High Freeze Register */
};

const Peripheral_t Peripherals[] = {
   {"\x50\x93\x5d", 0x40000000, TIM2_registers, 30 }, /* TIM2: Advanced-timers */
   {"\x50\x93\x5e", 0x40000400, TIM2_registers, 30 }, /* TIM3:  */
   {"\x50\x93\x5f", 0x40000800, TIM2_registers, 30 }, /* TIM4:  */
   {"\x50\x93\x60", 0x40000c00, TIM2_registers, 30 }, /* TIM5:  */
   {"\x50\x93\x61", 0x40001000, TIM6_registers, 8 }, /* TIM6: Basic-timers */
   {"\x50\x93\x62", 0x40001400, TIM6_registers, 8 }, /* TIM7:  */
   {"\x0d\x24\xc0", 0x40002000, CRS_registers, 4 }, /* CRS: CRS */
   {"\x50\x13\x50", 0x40002400, TAMP_registers, 39 }, /* TAMP: Tamper and backup registers */
   {"\x49\x40\xc0", 0x40002800, RTC_registers, 20 }, /* RTC: Real-time clock */
   {"\x5d\x71\x07", 0x40002c00, WWDG_registers, 5 }, /* WWDG: WinWATCHDOG */
   {"\x25\x71\x07", 0x40003000, IWDG_registers, 3 }, /* IWDG: System window watchdog */
   {"\x4d\x02\x5d", 0x40003800, SPI4_registers, 9 }, /* SPI2:  */
   {"\x4d\x02\x5e", 0x40003c00, SPI4_registers, 9 }, /* SPI3:  */
   {"\x55\x30\x52\x51\xd0", 0x40004400, USART1_registers, 12 }, /* USART2:  */
   {"\x55\x30\x52\x51\xe0", 0x40004800, USART1_registers, 12 }, /* USART3:  */
   {"\x54\x14\x94\x7c", 0x40004c00, UART4_registers, 12 }, /* UART4: Universal synchronous asynchronous receiver       transmitter */
   {"\x54\x14\x94\x80", 0x40005000, UART4_registers, 12 }, /* UART5:  */
   {"\x25\xd0\xdc", 0x40005400, I2C1_registers, 11 }, /* I2C1: Inter-integrated circuit */
   {"\x25\xd0\xdd", 0x40005800, I2C1_registers, 11 }, /* I2C2:  */
   {"\x55\x30\xa5\x19\x39\x44\x15\x62\x43\x14", 0x40005c00, USB_FS_device_registers, 13 }, /* USB_FS_device: USB_FS_device */
   {"\x18\x40\xc1\x39\xc0", 0x40006400, FDCAN_registers, 37 }, /* FDCAN1:  */
   {"\x18\x40\xc1\x39\xd0", 0x40006800, FDCAN_registers, 37 }, /* FDCAN2:  */
   {"\x18\x40\xc1\x39\xe0", 0x40006c00, FDCAN_registers, 37 }, /* FDCAN3:  */
   {"\x41\x74\x80", 0x40007000, PWR_registers, 22 }, /* PWR: Power control */
   {"\x25\xd0\xde", 0x40007800, I2C1_registers, 11 }, /* I2C3:  */
   {"\x31\x05\x09\x34\x54\x9c", 0x40007c00, LPTIMER1_registers, 9 }, /* LPTIMER1: Low power timer */
   {"\x31\x05\x41\x49\x47\x00", 0x40008000, LPUART1_registers, 10 }, /* LPUART1: Universal synchronous asynchronous receiver       transmitter */
   {"\x25\xd0\xdf", 0x40008400, I2C1_registers, 11 }, /* I2C4:  */
   {"\x54\x34\x04\x70", 0x4000a000, UCPD1_registers, 14 }, /* UCPD1: UCPD1 */
   {"\x18\x40\xc1\x38", 0x4000a400, FDCAN_registers, 37 }, /* FDCAN: FDCAN */
   {"\x4d\x94\xc3\x18\x70", 0x40010000, SYSCFG_registers, 10 }, /* SYSCFG: System configuration controller */
   {"\x59\x21\x46\x09\x51\x80", 0x40010030, VREFBUF_registers, 2 }, /* VREFBUF: Voltage reference buffer */
   {"\x0c\xf3\x50", 0x40010200, COMP_registers, 7 }, /* COMP: Comparator control and status register */
   {"\x3d\x00\x4d\x40", 0x40010300, OPAMP_registers, 12 }, /* OPAMP: Operational amplifiers */
   {"\x15\x85\x09", 0x40010400, EXTI_registers, 12 }, /* EXTI: External interrupt/event       controller */
   {"\x50\x93\x5c", 0x40012c00, TIM1_registers, 30 }, /* TIM1: Advanced-timers */
   {"\x4d\x02\x5c", 0x40013000, SPI1_registers, 9 }, /* SPI1: Serial peripheral interface/Inter-IC       sound */
   {"\x50\x93\x63", 0x40013400, TIM1_registers, 30 }, /* TIM8:  */
   {"\x55\x30\x52\x51\xc0", 0x40013800, USART1_registers, 12 }, /* USART1: Universal synchronous asynchronous receiver       transmitter */
   {"\x4d\x02\x5f", 0x40013c00, SPI4_registers, 9 }, /* SPI4: Serial peripheral interface/Inter-IC       sound */
   {"\x50\x93\x5c\x80", 0x40014000, TIM15_registers, 22 }, /* TIM15: General purpose timers */
   {"\x50\x93\x5c\x84", 0x40014400, TIM16_registers, 20 }, /* TIM16: General purpose timers */
   {"\x50\x93\x5c\x88", 0x40014800, TIM16_registers, 20 }, /* TIM17:  */
   {"\x50\x93\x5d\x6c", 0x40015000, TIM1_registers, 30 }, /* TIM20:  */
   {"\x4c\x12\x40", 0x40015400, SAI_registers, 18 }, /* SAI: Serial audio interface */
   {"\x21\x25\x09\x36\x53\x41\x4d\x41\x52", 0x40016800, HRTIM_Master_registers, 11 }, /* HRTIM_Master: High Resolution Timer: Master       Timers */
   {"\x21\x25\x09\x36\x55\x09\x34\x10", 0x40016880, HRTIM_TIMA_registers, 29 }, /* HRTIM_TIMA: High Resolution Timer: TIMA */
   {"\x21\x25\x09\x36\x55\x09\x34\x20", 0x40016900, HRTIM_TIMB_registers, 29 }, /* HRTIM_TIMB: High Resolution Timer: TIMB */
   {"\x21\x25\x09\x36\x55\x09\x34\x30", 0x40016980, HRTIM_TIMC_registers, 29 }, /* HRTIM_TIMC: High Resolution Timer: TIMC */
   {"\x21\x25\x09\x36\x55\x09\x34\x40", 0x40016a00, HRTIM_TIMD_registers, 29 }, /* HRTIM_TIMD: High Resolution Timer: TIMD */
   {"\x21\x25\x09\x36\x55\x09\x34\x50", 0x40016a80, HRTIM_TIME_registers, 29 }, /* HRTIM_TIME: High Resolution Timer: TIME */
   {"\x21\x25\x09\x36\x55\x09\x34\x60", 0x40016b00, HRTIM_TIMF_registers, 29 }, /* HRTIM_TIMF: High Resolution Timer: TIMF */
   {"\x21\x25\x09\x36\x50\xcf\x34\xd3\xce", 0x40016b80, HRTIM_Common_registers, 36 }, /* HRTIM_Common: High Resolution Timer: Common       functions */
   {"\x10\xd0\x5c", 0x40020000, DMA1_registers, 34 }, /* DMA1: DMA controller */
   {"\x10\xd0\x5d", 0x40020400, DMA1_registers, 34 }, /* DMA2:  */
   {"\x10\xd0\x4d\x55\x80", 0x40020800, DMAMUX_registers, 24 }, /* DMAMUX: DMAMUX */
   {"\x0c\xf4\x84\x24\x30", 0x40020c00, CORDIC_registers, 3 }, /* CORDIC: CORDIC Co-processor */
   {"\x48\x30\xc0", 0x40021000, RCC_registers, 30 }, /* RCC: Reset and clock control */
   {"\x18\xd0\x43", 0x40021400, FMAC_registers, 8 }, /* FMAC: Filter Math Accelerator */
   {"\x18\xc0\x53\x20", 0x40022000, FLASH_registers, 13 }, /* FLASH: Flash */
   {"\x0d\x20\xc0", 0x40023000, CRC_registers, 5 }, /* CRC: Cyclic redundancy check calculation       unit */
   {"\x1d\x02\x4f\x04", 0x48000000, GPIOA_registers, 11 }, /* GPIOA: General-purpose I/Os */
   {"\x1d\x02\x4f\x08", 0x48000400, GPIOB_registers, 11 }, /* GPIOB: General-purpose I/Os */
   {"\x1d\x02\x4f\x0c", 0x48000800, GPIOC_registers, 11 }, /* GPIOC: General-purpose I/Os */
   {"\x1d\x02\x4f\x10", 0x48000c00, GPIOC_registers, 11 }, /* GPIOD:  */
   {"\x1d\x02\x4f\x14", 0x48001000, GPIOC_registers, 11 }, /* GPIOE:  */
   {"\x1d\x02\x4f\x18", 0x48001400, GPIOC_registers, 11 }, /* GPIOF:  */
   {"\x1d\x02\x4f\x1c", 0x48001800, GPIOC_registers, 11 }, /* GPIOG:  */
   {"\x04\x40\xdc", 0x50000000, ADC1_registers, 29 }, /* ADC1: Analog-to-Digital Converter */
   {"\x04\x40\xdd", 0x50000100, ADC1_registers, 29 }, /* ADC2:  */
   {"\x04\x40\xdc\x76\x50\xcf\x34\xd3\xce", 0x50000200, ADC12_Common_registers, 3 }, /* ADC12_Common: Analog-to-Digital Converter */
   {"\x04\x40\xde", 0x50000400, ADC3_registers, 29 }, /* ADC3: Analog-to-Digital Converter */
   {"\x04\x40\xdf", 0x50000500, ADC1_registers, 29 }, /* ADC4:  */
   {"\x04\x40\xe0", 0x50000600, ADC3_registers, 29 }, /* ADC5:  */
   {"\x04\x40\xde\x7e\x09\x43\x3c\xd3\x4f\x38", 0x50000700, ADC12_Common_registers, 3 }, /* ADC345_Common:  */
   {"\x10\x10\xdc", 0x50000800, DAC1_registers, 23 }, /* DAC1: Digital-to-analog converter */
   {"\x10\x10\xdd", 0x50000c00, DAC1_registers, 23 }, /* DAC2:  */
   {"\x10\x10\xde", 0x50001000, DAC1_registers, 23 }, /* DAC3:  */
   {"\x10\x10\xdf", 0x50001400, DAC1_registers, 23 }, /* DAC4:  */
   {"\x48\xe1\xc0", 0x50060800, RNG_registers, 3 }, /* RNG: Random number generator */
   {"\x18\xd0\xc0", 0xa0000000, FMC_registers, 18 }, /* FMC: Flexible memory controller */
   {"\x45\x50\x44\x4d\x02\x40", 0xa0001000, QUADSPI_registers, 13 }, /* QUADSPI: QuadSPI interface */
   {"\x4c\x30\xa5\x04\x35\x12\x30", 0xe000e008, SCB_ACTRL_registers, 1 }, /* SCB_ACTRL: System control block ACTLR */
   {"\x4d\x42\xc0", 0xe000e010, STK_registers, 4 }, /* STK: SysTick timer */
   {"\x4c\x30\x80", 0xe000e040, SCB_registers, 15 }, /* SCB: System control block */
   {"\x35\x05\x40", 0xe000e084, MPU_registers, 5 }, /* MPU: Memory protection unit */
   {"\x39\x62\x43", 0xe000e100, NVIC_registers, 47 }, /* NVIC: Nested Vectored Interrupt       Controller */
   {"\x19\x05\x65\x0d\x00\x43\x48", 0xe000ef08, FPU_CPACR_registers, 1 }, /* FPU_CPACR: Floating point unit CPACR */
   {"\x19\x05\x40", 0xe000ef34, FPU_registers, 3 }, /* FPU: Floting point unit */
   {"\x10\x21\xcd\x0d\x50", 0xe0042000, DBGMCU_registers, 5 }, /* DBGMCU: Debug support */
   {NULL, 0, NULL }
};
const char *InterruptNames[] = {
	NULL,
	NULL,
	"NonMaskableInt",
	"HardFault",
	"MemoryManagement",
	"BusFault",
	"UsageFault",
	NULL,
	NULL,
	NULL,
	NULL,
	"SVCall",
	"DebugMonitor",
	NULL,
	"PendSV",
	"SysTick",
	"WWDG",
	"PVD_PVM",
	"RTC_TAMP_CSS_LSE",
	"RTC_WKUP",
	"FLASH",
	"RCC",
	"EXTI0",
	"EXTI1",
	"EXTI2",
	"EXTI3",
	"EXTI4",
	"DMA1_CH1",
	"DMA1_CH2",
	"DMA1_CH3",
	"DMA1_CH4",
	"DMA1_CH5",
	"DMA1_CH6",
	"DMA1_CH7",
	"ADC1_2",
	"USB_HP",
	"USB_LP",
	"fdcan1_intr1_it",
	"fdcan1_intr0_it",
	"EXTI9_5",
	"TIM1_BRK_TIM15",
	"TIM1_UP_TIM16",
	"TIM1_TRG_COM",
	"TIM1_CC",
	"TIM2",
	"TIM3",
	"TIM4",
	"I2C1_EV",
	"I2C1_ER",
	"I2C2_EV",
	"I2C2_ER",
	"SPI1",
	"SPI2",
	"USART1",
	"USART2",
	"USART3",
	"EXTI15_10",
	"RTC_ALARM",
	"USBWakeUP",
	"TIM8_BRK",
	"TIM8_UP",
	"TIM8_TRG_COM",
	"TIM8_CC",
	"ADC3",
	"FMC",
	"LPTIM1",
	"TIM5",
	"SPI3",
	"UART4",
	"UART5",
	"TIM6_DACUNDER",
	"TIM7",
	"DMA2_CH1",
	"DMA2_CH2",
	"DMA2_CH3",
	"DMA2_CH4",
	"DMA2_CH5",
	"ADC4",
	"ADC5",
	"UCPD1",
	"COMP1_2_3",
	"COMP4_5_6",
	"COMP7",
	"HRTIM_Master_IRQn",
	"HRTIM_TIMA_IRQn",
	"HRTIM_TIMB_IRQn",
	"HRTIM_TIMC_IRQn",
	"HRTIM_TIMD_IRQn",
	"HRTIM_TIME_IRQn",
	"HRTIM_TIM_FLT_IRQn",
	"HRTIM_TIMF_IRQn",
	"CRS",
	"SAI",
	"TIM20_BRK",
	"TIM20_UP",
	"TIM20_TRG_COM",
	"TIM20_CC",
	"FPU",
	"I2C4_EV",
	"I2C4_ER",
	"SPI4",
	NULL,
	"FDCAN2_intr0",
	"FDCAN2_intr1",
	"FDCAN3_intr0",
	"FDCAN3_intr1",
	"RNG",
	"LPUART",
	"I2C3_EV",
	"I2C3_ER",
	"DMAMUX_OVR",
	"QUADSPI",
	"DMA1_CH8",
	"DMA2_CH6",
	"DMA2_CH7",
	"DMA2_CH8",
	"Cordic",
	"FMAC",
};

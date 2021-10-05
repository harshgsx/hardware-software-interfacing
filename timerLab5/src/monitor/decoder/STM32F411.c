/* Header file generated automatically from SVD file
 * for STM32F411
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
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode
              selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM2_CR2_fields[] = {
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA
              selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
};

const Field_t TIM2_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
};

const Field_t TIM2_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt
              enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt
              enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt
              enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request
              enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request
              enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request
              enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request
              enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM2_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt
              flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt
              flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt
              flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture
              flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture
              flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture
              flag */
};

const Field_t TIM2_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2
              generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3
              generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
};

const Field_t TIM2_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: CC1S */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: OC1FE */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: OC1PE */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: OC1M */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: OC1CE */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: CC2S */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: OC2FE */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: OC2PE */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: OC2M */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: OC2CE */
};

const Field_t TIM2_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM2_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3
              selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4
              selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM2_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: CC3S */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: OC3FE */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: OC3PE */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: OC3M */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: OC3CE */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: CC4S */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: OC4FE */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: OC4PE */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: OC4M */
   { "\x3d\xd7\xc3\x14", 15, 1 },  /* O24CE: O24CE */
};

const Field_t TIM2_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output
              enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output
              enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output
              enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 output
              Polarity */
};

const Field_t TIM2_CNT_fields[] = {
   { "\x0c\xe5\x25\x30", 0, 16 },  /* CNT_L: Low counter value */
   { "\x0c\xe5\x25\x20", 16, 16 },  /* CNT_H: High counter value */
};

const Field_t TIM2_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM2_ARR_fields[] = {
   { "\x05\x24\xa5\x30", 0, 16 },  /* ARR_L: Low Auto-reload value */
   { "\x05\x24\xa5\x20", 16, 16 },  /* ARR_H: High Auto-reload value */
};

const Field_t TIM2_CCR1_fields[] = {
   { "\x0c\x34\x9c\x94\xc0", 0, 16 },  /* CCR1_L: Low Capture/Compare 1
              value */
   { "\x0c\x34\x9c\x94\x80", 16, 16 },  /* CCR1_H: High Capture/Compare 1
              value */
};

const Field_t TIM2_CCR2_fields[] = {
   { "\x0c\x34\x9d\x94\xc0", 0, 16 },  /* CCR2_L: Low Capture/Compare 2
              value */
   { "\x0c\x34\x9d\x94\x80", 16, 16 },  /* CCR2_H: High Capture/Compare 2
              value */
};

const Field_t TIM2_CCR3_fields[] = {
   { "\x0c\x34\x9e\x94\xc0", 0, 16 },  /* CCR3_L: Low Capture/Compare value */
   { "\x0c\x34\x9e\x94\x80", 16, 16 },  /* CCR3_H: High Capture/Compare value */
};

const Field_t TIM2_CCR4_fields[] = {
   { "\x0c\x34\x9f\x94\xc0", 0, 16 },  /* CCR4_L: Low Capture/Compare value */
   { "\x0c\x34\x9f\x94\x80", 16, 16 },  /* CCR4_H: High Capture/Compare value */
};

const Field_t TIM2_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM2_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst
              accesses */
};

const Field_t TIM2_OR_fields[] = {
   { "\x25\x44\x9c\x95\x23\x50", 10, 2 },  /* ITR1_RMP: Timer Input 4 remap */
};

const Register_t TIM2_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM2_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM2_CR2_fields, 3}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM2_SMCR_fields, 7}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM2_DIER_fields, 12}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM2_SR_fields, 10}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM2_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM2_CCMR1_Output_fields, 10}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM2_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM2_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input
          mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM2_CCMR2_Output_fields, 10}, /* CCMR2_Output: capture/compare mode register 2 (output
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM2_CCER_fields, 12}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM2_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM2_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM2_ARR_fields, 2}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM2_CCR1_fields, 2}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM2_CCR2_fields, 2}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM2_CCR3_fields, 2}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM2_CCR4_fields, 2}, /* CCR4: capture/compare register 4 */
   {"\x10\x34\x80", 72, 32, 0, TIM2_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM2_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
   {"\x3d\x20", 80, 32, 0, TIM2_OR_fields, 1}, /* OR: TIM5 option register */
};

const Field_t TIM3_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode
              selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM3_CR2_fields[] = {
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA
              selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
};

const Field_t TIM3_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
};

const Field_t TIM3_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt
              enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt
              enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt
              enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request
              enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request
              enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request
              enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request
              enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM3_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt
              flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt
              flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt
              flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture
              flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture
              flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture
              flag */
};

const Field_t TIM3_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2
              generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3
              generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
};

const Field_t TIM3_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: CC1S */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: OC1FE */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: OC1PE */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: OC1M */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: OC1CE */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: CC2S */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: OC2FE */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: OC2PE */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: OC2M */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: OC2CE */
};

const Field_t TIM3_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM3_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3
              selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4
              selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM3_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: CC3S */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: OC3FE */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: OC3PE */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: OC3M */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: OC3CE */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: CC4S */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: OC4FE */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: OC4PE */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: OC4M */
   { "\x3d\xd7\xc3\x14", 15, 1 },  /* O24CE: O24CE */
};

const Field_t TIM3_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output
              enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output
              enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output
              enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 output
              Polarity */
};

const Field_t TIM3_CNT_fields[] = {
   { "\x0c\xe5\x25\x30", 0, 16 },  /* CNT_L: Low counter value */
   { "\x0c\xe5\x25\x20", 16, 16 },  /* CNT_H: High counter value */
};

const Field_t TIM3_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM3_ARR_fields[] = {
   { "\x05\x24\xa5\x30", 0, 16 },  /* ARR_L: Low Auto-reload value */
   { "\x05\x24\xa5\x20", 16, 16 },  /* ARR_H: High Auto-reload value */
};

const Field_t TIM3_CCR1_fields[] = {
   { "\x0c\x34\x9c\x94\xc0", 0, 16 },  /* CCR1_L: Low Capture/Compare 1
              value */
   { "\x0c\x34\x9c\x94\x80", 16, 16 },  /* CCR1_H: High Capture/Compare 1
              value */
};

const Field_t TIM3_CCR2_fields[] = {
   { "\x0c\x34\x9d\x94\xc0", 0, 16 },  /* CCR2_L: Low Capture/Compare 2
              value */
   { "\x0c\x34\x9d\x94\x80", 16, 16 },  /* CCR2_H: High Capture/Compare 2
              value */
};

const Field_t TIM3_CCR3_fields[] = {
   { "\x0c\x34\x9e\x94\xc0", 0, 16 },  /* CCR3_L: Low Capture/Compare value */
   { "\x0c\x34\x9e\x94\x80", 16, 16 },  /* CCR3_H: High Capture/Compare value */
};

const Field_t TIM3_CCR4_fields[] = {
   { "\x0c\x34\x9f\x94\xc0", 0, 16 },  /* CCR4_L: Low Capture/Compare value */
   { "\x0c\x34\x9f\x94\x80", 16, 16 },  /* CCR4_H: High Capture/Compare value */
};

const Field_t TIM3_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM3_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst
              accesses */
};

const Register_t TIM3_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM3_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM3_CR2_fields, 3}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM3_SMCR_fields, 7}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM3_DIER_fields, 12}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM3_SR_fields, 10}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM3_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM3_CCMR1_Output_fields, 10}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM3_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM3_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input
          mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM3_CCMR2_Output_fields, 10}, /* CCMR2_Output: capture/compare mode register 2 (output
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM3_CCER_fields, 12}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM3_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM3_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM3_ARR_fields, 2}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM3_CCR1_fields, 2}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM3_CCR2_fields, 2}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM3_CCR3_fields, 2}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM3_CCR4_fields, 2}, /* CCR4: capture/compare register 4 */
   {"\x10\x34\x80", 72, 32, 0, TIM3_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM3_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t TIM5_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode
              selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM5_CR2_fields[] = {
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA
              selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
};

const Field_t TIM5_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
};

const Field_t TIM5_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt
              enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt
              enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt
              enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request
              enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request
              enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request
              enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request
              enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM5_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt
              flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt
              flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt
              flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture
              flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture
              flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture
              flag */
};

const Field_t TIM5_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2
              generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3
              generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
};

const Field_t TIM5_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM5_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: CC1S */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: OC1FE */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: OC1PE */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: OC1M */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: OC1CE */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: CC2S */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: OC2FE */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: OC2PE */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: OC2M */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: OC2CE */
};

const Field_t TIM5_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: CC3S */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: OC3FE */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: OC3PE */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: OC3M */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: OC3CE */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: CC4S */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: OC4FE */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: OC4PE */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: OC4M */
   { "\x3d\xd7\xc3\x14", 15, 1 },  /* O24CE: O24CE */
};

const Field_t TIM5_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3
              selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4
              selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM5_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output
              enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output
              enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output
              enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xce\x40", 15, 1 },  /* CC4NP: Capture/Compare 4 output
              Polarity */
};

const Field_t TIM5_CNT_fields[] = {
   { "\x0c\xe5\x25\x30", 0, 16 },  /* CNT_L: Low counter value */
   { "\x0c\xe5\x25\x20", 16, 16 },  /* CNT_H: High counter value */
};

const Field_t TIM5_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM5_ARR_fields[] = {
   { "\x05\x24\xa5\x30", 0, 16 },  /* ARR_L: Low Auto-reload value */
   { "\x05\x24\xa5\x20", 16, 16 },  /* ARR_H: High Auto-reload value */
};

const Field_t TIM5_CCR1_fields[] = {
   { "\x0c\x34\x9c\x94\xc0", 0, 16 },  /* CCR1_L: Low Capture/Compare 1
              value */
   { "\x0c\x34\x9c\x94\x80", 16, 16 },  /* CCR1_H: High Capture/Compare 1
              value */
};

const Field_t TIM5_CCR2_fields[] = {
   { "\x0c\x34\x9d\x94\xc0", 0, 16 },  /* CCR2_L: Low Capture/Compare 2
              value */
   { "\x0c\x34\x9d\x94\x80", 16, 16 },  /* CCR2_H: High Capture/Compare 2
              value */
};

const Field_t TIM5_CCR3_fields[] = {
   { "\x0c\x34\x9e\x94\xc0", 0, 16 },  /* CCR3_L: Low Capture/Compare value */
   { "\x0c\x34\x9e\x94\x80", 16, 16 },  /* CCR3_H: High Capture/Compare value */
};

const Field_t TIM5_CCR4_fields[] = {
   { "\x0c\x34\x9f\x94\xc0", 0, 16 },  /* CCR4_L: Low Capture/Compare value */
   { "\x0c\x34\x9f\x94\x80", 16, 16 },  /* CCR4_H: High Capture/Compare value */
};

const Field_t TIM5_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM5_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst
              accesses */
};

const Field_t TIM5_OR_fields[] = {
   { "\x25\x47\xe5\x48\xd4\x00", 6, 2 },  /* IT4_RMP: Timer Input 4 remap */
};

const Register_t TIM5_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM5_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM5_CR2_fields, 3}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM5_SMCR_fields, 7}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM5_DIER_fields, 12}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM5_SR_fields, 10}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM5_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM5_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM5_CCMR1_Output_fields, 10}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM5_CCMR2_Output_fields, 10}, /* CCMR2_Output: capture/compare mode register 2 (output
          mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM5_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM5_CCER_fields, 12}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM5_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM5_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM5_ARR_fields, 2}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM5_CCR1_fields, 2}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM5_CCR2_fields, 2}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM5_CCR3_fields, 2}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM5_CCR4_fields, 2}, /* CCR4: capture/compare register 4 */
   {"\x10\x34\x80", 72, 32, 0, TIM5_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM5_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
   {"\x3d\x20", 80, 32, 0, TIM5_OR_fields, 1}, /* OR: TIM5 option register */
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

const Field_t RTC_CR_fields[] = {
   { "\x5c\x32\xd3\x14\xc0", 0, 3 },  /* WCKSEL: Wakeup clock selection */
   { "\x51\x31\x44\x1c\x50", 3, 1 },  /* TSEDGE: Time-stamp event active
              edge */
   { "\x48\x51\x83\x2c\xf3\x80", 4, 1 },  /* REFCKON: Reference clock detection enable (50 or
              60 Hz) */
   { "\x09\x94\x13\x20\x11\x00", 5, 1 },  /* BYPSHAD: Bypass the shadow
              registers */
   { "\x18\xd5\x00", 6, 1 },  /* FMT: Hour format */
   { "\x10\x31\x40", 7, 1 },  /* DCE: Coarse digital calibration
              enable */
   { "\x04\xc4\x81\x14", 8, 1 },  /* ALRAE: Alarm A enable */
   { "\x04\xc4\x82\x14", 9, 1 },  /* ALRBE: Alarm B enable */
   { "\x5d\x55\x05", 10, 1 },  /* WUTE: Wakeup timer enable */
   { "\x51\x31\x40", 11, 1 },  /* TSE: Time stamp enable */
   { "\x04\xc4\x81\x24\x50", 12, 1 },  /* ALRAIE: Alarm A interrupt enable */
   { "\x04\xc4\x82\x24\x50", 13, 1 },  /* ALRBIE: Alarm B interrupt enable */
   { "\x5d\x55\x09\x14", 14, 1 },  /* WUTIE: Wakeup timer interrupt
              enable */
   { "\x51\x32\x45", 15, 1 },  /* TSIE: Time-stamp interrupt
              enable */
   { "\x04\x41\x1c\x20", 16, 1 },  /* ADD1H: Add 1 hour (summer time
              change) */
   { "\x4d\x50\x9c\x20", 17, 1 },  /* SUB1H: Subtract 1 hour (winter time
              change) */
   { "\x08\xb4\x00", 18, 1 },  /* BKP: Backup */
   { "\x0c\xf4\xc5\x30", 19, 1 },  /* COSEL: Calibration Output
              selection */
   { "\x40\xf3\x00", 20, 1 },  /* POL: Output polarity */
   { "\x3d\x31\x4c", 21, 2 },  /* OSEL: Output selection */
   { "\x0c\xf1\x40", 23, 1 },  /* COE: Calibration output enable */
};

const Field_t RTC_ISR_fields[] = {
   { "\x04\xc4\x81\x5c\x60", 0, 1 },  /* ALRAWF: Alarm A write flag */
   { "\x04\xc4\x82\x5c\x60", 1, 1 },  /* ALRBWF: Alarm B write flag */
   { "\x5d\x55\x17\x18", 2, 1 },  /* WUTWF: Wakeup timer write flag */
   { "\x4c\x84\x06", 3, 1 },  /* SHPF: Shift operation pending */
   { "\x24\xe2\x54\x4c", 4, 1 },  /* INITS: Initialization status flag */
   { "\x49\x31\x80", 5, 1 },  /* RSF: Registers synchronization
              flag */
   { "\x24\xe2\x54\x18", 6, 1 },  /* INITF: Initialization flag */
   { "\x24\xe2\x54", 7, 1 },  /* INIT: Initialization mode */
   { "\x04\xc4\x81\x18", 8, 1 },  /* ALRAF: Alarm A flag */
   { "\x04\xc4\x82\x18", 9, 1 },  /* ALRBF: Alarm B flag */
   { "\x5d\x55\x06", 10, 1 },  /* WUTF: Wakeup timer flag */
   { "\x51\x31\x80", 11, 1 },  /* TSF: Time-stamp flag */
   { "\x51\x33\xd6\x18", 12, 1 },  /* TSOVF: Time-stamp overflow flag */
   { "\x50\x13\x50\x70\x60", 13, 1 },  /* TAMP1F: Tamper detection flag */
   { "\x50\x13\x50\x74\x60", 14, 1 },  /* TAMP2F: TAMPER2 detection flag */
   { "\x48\x50\xc1\x31\x01\x80", 16, 1 },  /* RECALPF: Recalibration pending Flag */
};

const Field_t RTC_PRER_fields[] = {
   { "\x41\x21\x44\x25\x69\x53", 0, 15 },  /* PREDIV_S: Synchronous prescaler
              factor */
   { "\x41\x21\x44\x25\x69\x41", 16, 7 },  /* PREDIV_A: Asynchronous prescaler
              factor */
};

const Field_t RTC_WUTR_fields[] = {
   { "\x5d\x55\x00", 0, 16 },  /* WUT: Wakeup auto-reload value
              bits */
};

const Field_t RTC_CALIBR_fields[] = {
   { "\x10\x30", 0, 5 },  /* DC: Digital calibration */
   { "\x10\x34\xc0", 7, 1 },  /* DCS: Digital calibration sign */
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
   { "\x11\x50", 24, 4 },  /* DU: Date units or day in BCD
              format */
   { "\x11\x40", 28, 2 },  /* DT: Date tens in BCD format */
   { "\x5c\x44\xc5\x30", 30, 1 },  /* WDSEL: Week day selection */
   { "\x35\x32\xdf", 31, 1 },  /* MSK4: Alarm A date mask */
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
   { "\x11\x50", 24, 4 },  /* DU: Date units or day in BCD
              format */
   { "\x11\x40", 28, 2 },  /* DT: Date tens in BCD format */
   { "\x5c\x44\xc5\x30", 30, 1 },  /* WDSEL: Week day selection */
   { "\x35\x32\xdf", 31, 1 },  /* MSK4: Alarm B date mask */
};

const Field_t RTC_WPR_fields[] = {
   { "\x2c\x56\x40", 0, 8 },  /* KEY: Write protection key */
};

const Field_t RTC_SSR_fields[] = {
   { "\x4d\x30", 0, 16 },  /* SS: Sub second value */
};

const Field_t RTC_SHIFTR_fields[] = {
   { "\x4d\x50\x86\x4c", 0, 15 },  /* SUBFS: Subtract a fraction of a
              second */
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

const Field_t RTC_CALR_fields[] = {
   { "\x0c\x13\x0d", 0, 9 },  /* CALM: Calibration minus */
   { "\x0c\x13\x17\x72\x10", 13, 1 },  /* CALW16: Use a 16-second calibration cycle
              period */
   { "\x0c\x13\x17\x8c", 14, 1 },  /* CALW8: Use an 8-second calibration cycle
              period */
   { "\x0c\x13\x10", 15, 1 },  /* CALP: Increase frequency of RTC by 488.5
              ppm */
};

const Field_t RTC_TAFCR_fields[] = {
   { "\x50\x13\x50\x70\x50", 0, 1 },  /* TAMP1E: Tamper 1 detection enable */
   { "\x50\x13\x50\x71\x44\x87", 1, 1 },  /* TAMP1TRG: Active level for tamper 1 */
   { "\x50\x13\x50\x24\x50", 2, 1 },  /* TAMPIE: Tamper interrupt enable */
   { "\x50\x13\x50\x74\x50", 3, 1 },  /* TAMP2E: Tamper 2 detection enable */
   { "\x50\x13\x50\x75\x44\x87", 4, 1 },  /* TAMP2TRG: Active level for tamper 2 */
   { "\x50\x13\x50\x51\x30", 7, 1 },  /* TAMPTS: Activate timestamp on tamper detection
              event */
   { "\x50\x13\x50\x19\x21\x51", 8, 3 },  /* TAMPFREQ: Tamper sampling frequency */
   { "\x50\x13\x50\x18\xc5\x00", 11, 2 },  /* TAMPFLT: Tamper filter count */
   { "\x50\x13\x50\x41\x20\xc8", 13, 2 },  /* TAMPPRCH: Tamper precharge duration */
   { "\x50\x13\x50\x41\x51\x09\x4c", 15, 1 },  /* TAMPPUDIS: TAMPER pull-up disable */
   { "\x50\x13\x50\x70\x93\x93\x14\xc0", 16, 1 },  /* TAMP1INSEL: TAMPER1 mapping */
   { "\x51\x32\x4e\x4c\x53\x00", 17, 1 },  /* TSINSEL: TIMESTAMP mapping */
   { "\x04\xc0\x52\x34\xf5\x54\x51\x94\x05", 18, 1 },  /* ALARMOUTTYPE: AFO_ALARM output type */
};

const Field_t RTC_ALRMASSR_fields[] = {
   { "\x4d\x30", 0, 15 },  /* SS: Sub seconds value */
   { "\x34\x14\xcb\x4d\x30", 24, 4 },  /* MASKSS: Mask the most-significant bits starting
              at this bit */
};

const Field_t RTC_ALRMBSSR_fields[] = {
   { "\x4d\x30", 0, 15 },  /* SS: Sub seconds value */
   { "\x34\x14\xcb\x4d\x30", 24, 4 },  /* MASKSS: Mask the most-significant bits starting
              at this bit */
};

const Field_t RTC_BKP0R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP1R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP2R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP3R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP4R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP5R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP6R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP7R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP8R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP9R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP10R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP11R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP12R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP13R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP14R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP15R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP16R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP17R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP18R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP19R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Register_t RTC_registers[] = {
   {"\x51\x20", 0, 32, 0, RTC_TR_fields, 7}, /* TR: time register */
   {"\x11\x20", 4, 32, 0, RTC_DR_fields, 7}, /* DR: date register */
   {"\x0d\x20", 8, 32, 0, RTC_CR_fields, 21}, /* CR: control register */
   {"\x25\x34\x80", 12, 32, 0, RTC_ISR_fields, 16}, /* ISR: initialization and status
          register */
   {"\x41\x21\x52", 16, 32, 0, RTC_PRER_fields, 2}, /* PRER: prescaler register */
   {"\x5d\x55\x12", 20, 32, 0, RTC_WUTR_fields, 1}, /* WUTR: wakeup timer register */
   {"\x0c\x13\x09\x09\x20", 24, 32, 0, RTC_CALIBR_fields, 2}, /* CALIBR: calibration register */
   {"\x04\xc4\x8d\x05\x20", 28, 32, 0, RTC_ALRMAR_fields, 14}, /* ALRMAR: alarm A register */
   {"\x04\xc4\x8d\x09\x20", 32, 32, 0, RTC_ALRMBR_fields, 14}, /* ALRMBR: alarm B register */
   {"\x5d\x04\x80", 36, 32, 0, RTC_WPR_fields, 1}, /* WPR: write protection register */
   {"\x4d\x34\x80", 40, 32, 0, RTC_SSR_fields, 1}, /* SSR: sub second register */
   {"\x4c\x82\x46\x51\x20", 44, 32, 0, RTC_SHIFTR_fields, 2}, /* SHIFTR: shift control register */
   {"\x51\x35\x12", 48, 32, 0, RTC_TSTR_fields, 7}, /* TSTR: time stamp time register */
   {"\x51\x31\x12", 52, 32, 0, RTC_TSDR_fields, 5}, /* TSDR: time stamp date register */
   {"\x51\x34\xd3\x48", 56, 32, 0, RTC_TSSSR_fields, 1}, /* TSSSR: timestamp sub second register */
   {"\x0c\x13\x12", 60, 32, 0, RTC_CALR_fields, 4}, /* CALR: calibration register */
   {"\x50\x11\x83\x48", 64, 32, 0, RTC_TAFCR_fields, 13}, /* TAFCR: tamper and alternate function configuration
          register */
   {"\x04\xc4\x8d\x05\x34\xd2", 68, 32, 0, RTC_ALRMASSR_fields, 2}, /* ALRMASSR: alarm A sub second register */
   {"\x04\xc4\x8d\x09\x34\xd2", 72, 32, 0, RTC_ALRMBSSR_fields, 2}, /* ALRMBSSR: alarm B sub second register */
   {"\x08\xb4\x1b\x48", 80, 32, 0, RTC_BKP0R_fields, 1}, /* BKP0R: backup register */
   {"\x08\xb4\x1c\x48", 84, 32, 0, RTC_BKP1R_fields, 1}, /* BKP1R: backup register */
   {"\x08\xb4\x1d\x48", 88, 32, 0, RTC_BKP2R_fields, 1}, /* BKP2R: backup register */
   {"\x08\xb4\x1e\x48", 92, 32, 0, RTC_BKP3R_fields, 1}, /* BKP3R: backup register */
   {"\x08\xb4\x1f\x48", 96, 32, 0, RTC_BKP4R_fields, 1}, /* BKP4R: backup register */
   {"\x08\xb4\x20\x48", 100, 32, 0, RTC_BKP5R_fields, 1}, /* BKP5R: backup register */
   {"\x08\xb4\x21\x48", 104, 32, 0, RTC_BKP6R_fields, 1}, /* BKP6R: backup register */
   {"\x08\xb4\x22\x48", 108, 32, 0, RTC_BKP7R_fields, 1}, /* BKP7R: backup register */
   {"\x08\xb4\x23\x48", 112, 32, 0, RTC_BKP8R_fields, 1}, /* BKP8R: backup register */
   {"\x08\xb4\x24\x48", 116, 32, 0, RTC_BKP9R_fields, 1}, /* BKP9R: backup register */
   {"\x08\xb4\x1c\x6d\x20", 120, 32, 0, RTC_BKP10R_fields, 1}, /* BKP10R: backup register */
   {"\x08\xb4\x1c\x71\x20", 124, 32, 0, RTC_BKP11R_fields, 1}, /* BKP11R: backup register */
   {"\x08\xb4\x1c\x75\x20", 128, 32, 0, RTC_BKP12R_fields, 1}, /* BKP12R: backup register */
   {"\x08\xb4\x1c\x79\x20", 132, 32, 0, RTC_BKP13R_fields, 1}, /* BKP13R: backup register */
   {"\x08\xb4\x1c\x7d\x20", 136, 32, 0, RTC_BKP14R_fields, 1}, /* BKP14R: backup register */
   {"\x08\xb4\x1c\x81\x20", 140, 32, 0, RTC_BKP15R_fields, 1}, /* BKP15R: backup register */
   {"\x08\xb4\x1c\x85\x20", 144, 32, 0, RTC_BKP16R_fields, 1}, /* BKP16R: backup register */
   {"\x08\xb4\x1c\x89\x20", 148, 32, 0, RTC_BKP17R_fields, 1}, /* BKP17R: backup register */
   {"\x08\xb4\x1c\x8d\x20", 152, 32, 0, RTC_BKP18R_fields, 1}, /* BKP18R: backup register */
   {"\x08\xb4\x1c\x91\x20", 156, 32, 0, RTC_BKP19R_fields, 1}, /* BKP19R: backup register */
};

const Field_t WWDG_CR_fields[] = {
   { "\x50", 0, 7 },  /* T: 7-bit counter (MSB to LSB) */
   { "\x5c\x41\xc1", 7, 1 },  /* WDGA: Activation bit */
};

const Field_t WWDG_CFR_fields[] = {
   { "\x5c", 0, 7 },  /* W: 7-bit window value */
   { "\x5c\x41\xd4\x09\xb0", 7, 1 },  /* WDGTB0: Timer base */
   { "\x5c\x41\xd4\x09\xc0", 8, 1 },  /* WDGTB1: Timer base */
   { "\x15\x72\x40", 9, 1 },  /* EWI: Early wakeup interrupt */
};

const Field_t WWDG_SR_fields[] = {
   { "\x15\x72\x46", 0, 1 },  /* EWIF: Early wakeup interrupt
              flag */
};

const Register_t WWDG_registers[] = {
   {"\x0d\x20", 0, 32, 0, WWDG_CR_fields, 2}, /* CR: Control register */
   {"\x0c\x64\x80", 4, 32, 0, WWDG_CFR_fields, 4}, /* CFR: Configuration register */
   {"\x4d\x20", 8, 32, 0, WWDG_SR_fields, 1}, /* SR: Status register */
};

const Field_t IWDG_KR_fields[] = {
   { "\x2c\x56\x40", 0, 16 },  /* KEY: Key value */
};

const Field_t IWDG_PR_fields[] = {
   { "\x41\x20", 0, 3 },  /* PR: Prescaler divider */
};

const Field_t IWDG_RLR_fields[] = {
   { "\x48\xc0", 0, 12 },  /* RL: Watchdog counter reload
              value */
};

const Field_t IWDG_SR_fields[] = {
   { "\x41\x65\x40", 0, 1 },  /* PVU: Watchdog prescaler value
              update */
   { "\x49\x65\x40", 1, 1 },  /* RVU: Watchdog counter reload value
              update */
};

const Register_t IWDG_registers[] = {
   {"\x2d\x20", 0, 32, 0, IWDG_KR_fields, 1}, /* KR: Key register */
   {"\x41\x20", 4, 32, 0, IWDG_PR_fields, 1}, /* PR: Prescaler register */
   {"\x48\xc4\x80", 8, 32, 0, IWDG_RLR_fields, 1}, /* RLR: Reload register */
   {"\x4d\x20", 12, 32, 0, IWDG_SR_fields, 2}, /* SR: Status register */
};

const Field_t I2S2ext_CR1_fields[] = {
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
   { "\x0d\x20\xc5\x38", 13, 1 },  /* CRCEN: Hardware CRC calculation
              enable */
   { "\x08\x91\x09\x3c\x50", 14, 1 },  /* BIDIOE: Output enable in bidirectional
              mode */
   { "\x08\x91\x09\x34\xf1\x05", 15, 1 },  /* BIDIMODE: Bidirectional data mode
              enable */
};

const Field_t I2S2ext_CR2_fields[] = {
   { "\x49\x81\x0d\x04\x53\x80", 0, 1 },  /* RXDMAEN: Rx buffer DMA enable */
   { "\x51\x81\x0d\x04\x53\x80", 1, 1 },  /* TXDMAEN: Tx buffer DMA enable */
   { "\x4d\x33\xc5", 2, 1 },  /* SSOE: SS output enable */
   { "\x19\x21\x80", 4, 1 },  /* FRF: Frame format */
   { "\x15\x24\x89\x14", 5, 1 },  /* ERRIE: Error interrupt enable */
   { "\x49\x83\x85\x24\x50", 6, 1 },  /* RXNEIE: RX buffer not empty interrupt
              enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: Tx buffer empty interrupt
              enable */
};

const Field_t I2S2ext_SR_fields[] = {
   { "\x49\x83\x85", 0, 1 },  /* RXNE: Receive buffer not empty */
   { "\x51\x81\x40", 1, 1 },  /* TXE: Transmit buffer empty */
   { "\x0c\x84\xc9\x10\x50", 2, 1 },  /* CHSIDE: Channel side */
   { "\x54\x44\x80", 3, 1 },  /* UDR: Underrun flag */
   { "\x0d\x20\xc5\x49\x20", 4, 1 },  /* CRCERR: CRC error flag */
   { "\x34\xf1\x06", 5, 1 },  /* MODF: Mode fault */
   { "\x3d\x64\x80", 6, 1 },  /* OVR: Overrun flag */
   { "\x09\x36\x40", 7, 1 },  /* BSY: Busy flag */
   { "\x50\x91\x92\x18\x50", 8, 1 },  /* TIFRFE: TI frame format error */
};

const Field_t I2S2ext_DR_fields[] = {
   { "\x11\x20", 0, 16 },  /* DR: Data register */
};

const Field_t I2S2ext_CRCPR_fields[] = {
   { "\x0d\x20\xd0\x3c\xc6\x40", 0, 16 },  /* CRCPOLY: CRC polynomial register */
};

const Field_t I2S2ext_RXCRCR_fields[] = {
   { "\x49\x80\xd2\x0c", 0, 16 },  /* RxCRC: Rx CRC register */
};

const Field_t I2S2ext_TXCRCR_fields[] = {
   { "\x51\x80\xd2\x0c", 0, 16 },  /* TxCRC: Tx CRC register */
};

const Field_t I2S2ext_I2SCFGR_fields[] = {
   { "\x0c\x83\x05\x38", 0, 1 },  /* CHLEN: Channel length (number of bits per audio
              channel) */
   { "\x10\x15\x0c\x14\xe0", 1, 2 },  /* DATLEN: Data length to be
              transferred */
   { "\x0c\xb4\x0f\x30", 3, 1 },  /* CKPOL: Steady state clock
              polarity */
   { "\x25\xd4\xd3\x50\x40", 4, 2 },  /* I2SSTD: I2S standard selection */
   { "\x40\x33\x53\x64\xe0\xc0", 7, 1 },  /* PCMSYNC: PCM frame synchronization */
   { "\x25\xd4\xc3\x18\x70", 8, 2 },  /* I2SCFG: I2S configuration mode */
   { "\x25\xd4\xc5", 10, 1 },  /* I2SE: I2S Enable */
   { "\x25\xd4\xcd\x3c\x40", 11, 1 },  /* I2SMOD: I2S mode selection */
};

const Field_t I2S2ext_I2SPR_fields[] = {
   { "\x25\xd4\xc4\x25\x60", 0, 8 },  /* I2SDIV: I2S Linear prescaler */
   { "\x3c\x41\x00", 8, 1 },  /* ODD: Odd factor for the
              prescaler */
   { "\x34\x32\xcf\x14", 9, 1 },  /* MCKOE: Master clock output enable */
};

const Register_t I2S2ext_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, I2S2ext_CR1_fields, 14}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, I2S2ext_CR2_fields, 7}, /* CR2: control register 2 */
   {"\x4d\x20", 8, 32, 0, I2S2ext_SR_fields, 9}, /* SR: status register */
   {"\x11\x20", 12, 32, 0, I2S2ext_DR_fields, 1}, /* DR: data register */
   {"\x0d\x20\xd0\x48", 16, 32, 0, I2S2ext_CRCPR_fields, 1}, /* CRCPR: CRC polynomial register */
   {"\x49\x80\xd2\x0d\x20", 20, 32, 0, I2S2ext_RXCRCR_fields, 1}, /* RXCRCR: RX CRC register */
   {"\x51\x80\xd2\x0d\x20", 24, 32, 0, I2S2ext_TXCRCR_fields, 1}, /* TXCRCR: TX CRC register */
   {"\x25\xd4\xc3\x18\x74\x80", 28, 32, 0, I2S2ext_I2SCFGR_fields, 8}, /* I2SCFGR: I2S configuration register */
   {"\x25\xd4\xd0\x48", 32, 32, 0, I2S2ext_I2SPR_fields, 3}, /* I2SPR: I2S prescaler register */
};

const Field_t I2C3_CR1_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: Peripheral enable */
   { "\x4c\xd0\x95\x4c", 1, 1 },  /* SMBUS: SMBus mode */
   { "\x4c\xd0\x94\x65\x01\x40", 3, 1 },  /* SMBTYPE: SMBus type */
   { "\x14\xe0\x52\x40", 4, 1 },  /* ENARP: ARP enable */
   { "\x14\xe4\x05\x0c", 5, 1 },  /* ENPEC: PEC enable */
   { "\x14\xe1\xc3", 6, 1 },  /* ENGC: General call enable */
   { "\x38\xf4\xd4\x48\x55\x03\x20", 7, 1 },  /* NOSTRETCH: Clock stretching disable (Slave
              mode) */
   { "\x4d\x40\x52\x50", 8, 1 },  /* START: Start generation */
   { "\x4d\x43\xd0", 9, 1 },  /* STOP: Stop generation */
   { "\x04\x32\xc0", 10, 1 },  /* ACK: Acknowledge enable */
   { "\x40\xf4\xc0", 11, 1 },  /* POS: Acknowledge/PEC Position (for data
              reception) */
   { "\x40\x50\xc0", 12, 1 },  /* PEC: Packet error checking */
   { "\x04\xc1\x52\x50", 13, 1 },  /* ALERT: SMBus alert */
   { "\x4d\x74\x93\x50", 15, 1 },  /* SWRST: Software reset */
};

const Field_t I2C3_CR2_fields[] = {
   { "\x19\x21\x51", 0, 6 },  /* FREQ: Peripheral clock frequency */
   { "\x25\x41\x52\x48\x53\x80", 8, 1 },  /* ITERREN: Error interrupt enable */
   { "\x25\x41\x56\x50\x53\x80", 9, 1 },  /* ITEVTEN: Event interrupt enable */
   { "\x25\x40\x95\x18\x53\x80", 10, 1 },  /* ITBUFEN: Buffer interrupt enable */
   { "\x10\xd0\x45\x38", 11, 1 },  /* DMAEN: DMA requests enable */
   { "\x30\x14\xd4", 12, 1 },  /* LAST: DMA last transfer */
};

const Field_t I2C3_OAR1_fields[] = {
   { "\x04\x41\x1b", 0, 1 },  /* ADD0: Interface address */
   { "\x04\x41\x22", 1, 7 },  /* ADD7: Interface address */
   { "\x04\x41\x1c\x6c", 8, 2 },  /* ADD10: Interface address */
   { "\x04\x41\x0d\x3c\x41\x40", 15, 1 },  /* ADDMODE: Addressing mode (slave
              mode) */
};

const Field_t I2C3_OAR2_fields[] = {
   { "\x14\xe1\x15\x04\xc0", 0, 1 },  /* ENDUAL: Dual addressing mode
              enable */
   { "\x04\x41\x1d", 1, 7 },  /* ADD2: Interface address */
};

const Field_t I2C3_DR_fields[] = {
   { "\x11\x20", 0, 8 },  /* DR: 8-bit data register */
};

const Field_t I2C3_SR1_fields[] = {
   { "\x4c\x20", 0, 1 },  /* SB: Start bit (Master mode) */
   { "\x04\x41\x12", 1, 1 },  /* ADDR: Address sent (master mode)/matched
              (slave mode) */
   { "\x09\x41\x80", 2, 1 },  /* BTF: Byte transfer finished */
   { "\x04\x41\x1c\x6c", 3, 1 },  /* ADD10: 10-bit header sent (Master
              mode) */
   { "\x4d\x43\xd0\x18", 4, 1 },  /* STOPF: Stop detection (slave
              mode) */
   { "\x49\x83\x85", 6, 1 },  /* RxNE: Data register not empty
              (receivers) */
   { "\x51\x81\x40", 7, 1 },  /* TxE: Data register empty
              (transmitters) */
   { "\x08\x54\x92", 8, 1 },  /* BERR: Bus error */
   { "\x05\x23\x0f", 9, 1 },  /* ARLO: Arbitration lost (master
              mode) */
   { "\x04\x60", 10, 1 },  /* AF: Acknowledge failure */
   { "\x3d\x64\x80", 11, 1 },  /* OVR: Overrun/Underrun */
   { "\x40\x50\xc5\x49\x20", 12, 1 },  /* PECERR: PEC Error in reception */
   { "\x50\x93\x45\x3d\x55\x00", 14, 1 },  /* TIMEOUT: Timeout or Tlow error */
   { "\x4c\xd0\x81\x30\x54\x94", 15, 1 },  /* SMBALERT: SMBus alert */
};

const Field_t I2C3_SR2_fields[] = {
   { "\x35\x33\x00", 0, 1 },  /* MSL: Master/slave */
   { "\x09\x54\xd9", 1, 1 },  /* BUSY: Bus busy */
   { "\x51\x20\x40", 2, 1 },  /* TRA: Transmitter/receiver */
   { "\x1c\x53\x83\x04\xc3\x00", 4, 1 },  /* GENCALL: General call address (Slave
              mode) */
   { "\x4c\xd0\x84\x14\x60\x55\x31\x40", 5, 1 },  /* SMBDEFAULT: SMBus device default address (Slave
              mode) */
   { "\x4c\xd0\x88\x3d\x35\x00", 6, 1 },  /* SMBHOST: SMBus host header (Slave
              mode) */
   { "\x11\x50\x4c\x18", 7, 1 },  /* DUALF: Dual flag (Slave mode) */
   { "\x40\x50\xc0", 8, 8 },  /* PEC: acket error checking
              register */
};

const Field_t I2C3_CCR_fields[] = {
   { "\x0c\x34\x80", 0, 12 },  /* CCR: Clock control register in Fast/Standard
              mode (Master mode) */
   { "\x11\x55\x19", 14, 1 },  /* DUTY: Fast mode duty cycle */
   { "\x1a\x54\xc0", 15, 1 },  /* F_S: I2C master mode selection */
};

const Field_t I2C3_TRISE_fields[] = {
   { "\x51\x22\x53\x14", 0, 6 },  /* TRISE: Maximum rise time in Fast/Standard mode
              (Master mode) */
};

const Register_t I2C3_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, I2C3_CR1_fields, 14}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, I2C3_CR2_fields, 6}, /* CR2: Control register 2 */
   {"\x3c\x14\x9c", 8, 32, 0, I2C3_OAR1_fields, 4}, /* OAR1: Own address register 1 */
   {"\x3c\x14\x9d", 12, 32, 0, I2C3_OAR2_fields, 2}, /* OAR2: Own address register 2 */
   {"\x11\x20", 16, 32, 0, I2C3_DR_fields, 1}, /* DR: Data register */
   {"\x4d\x27\x00", 20, 32, 0, I2C3_SR1_fields, 14}, /* SR1: Status register 1 */
   {"\x4d\x27\x40", 24, 32, 0, I2C3_SR2_fields, 8}, /* SR2: Status register 2 */
   {"\x0c\x34\x80", 28, 32, 0, I2C3_CCR_fields, 3}, /* CCR: Clock control register */
   {"\x51\x22\x53\x14", 32, 32, 0, I2C3_TRISE_fields, 1}, /* TRISE: TRISE register */
};

const Field_t PWR_CR_fields[] = {
   { "\x31\x01\x13", 0, 1 },  /* LPDS: Low-power deep sleep */
   { "\x40\x41\x13", 1, 1 },  /* PDDS: Power down deepsleep */
   { "\x0d\x75\x46", 2, 1 },  /* CWUF: Clear wakeup flag */
   { "\x0d\x30\x86", 3, 1 },  /* CSBF: Clear standby flag */
   { "\x41\x61\x05", 4, 1 },  /* PVDE: Power voltage detector
              enable */
   { "\x40\xc4\xc0", 5, 3 },  /* PLS: PVD level selection */
   { "\x10\x24\x00", 8, 1 },  /* DBP: Disable backup domain write
              protection */
   { "\x19\x01\x13", 9, 1 },  /* FPDS: Flash power down in Stop
              mode */
   { "\x04\x40\xc4\x0d\xc0", 13, 1 },  /* ADCDC1: ADCDC1 */
   { "\x58\xf4\xc0", 14, 2 },  /* VOS: Regulator voltage scaling output
              selection */
};

const Field_t PWR_CSR_fields[] = {
   { "\x5d\x51\x80", 0, 1 },  /* WUF: Wakeup flag */
   { "\x4c\x21\x80", 1, 1 },  /* SBF: Standby flag */
   { "\x41\x61\x0f", 2, 1 },  /* PVDO: PVD output */
   { "\x09\x24\x80", 3, 1 },  /* BRR: Backup regulator ready */
   { "\x15\x75\x50", 8, 1 },  /* EWUP: Enable WKUP pin */
   { "\x09\x21\x40", 9, 1 },  /* BRE: Backup regulator enable */
   { "\x58\xf4\xd2\x11\x90", 14, 1 },  /* VOSRDY: Regulator voltage scaling output
              selection ready bit */
};

const Register_t PWR_registers[] = {
   {"\x0d\x20", 0, 32, 0, PWR_CR_fields, 10}, /* CR: power control register */
   {"\x0d\x34\x80", 4, 32, 0, PWR_CSR_fields, 7}, /* CSR: power control/status register */
};

const Field_t TIM1_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction */
   { "\x0c\xd4\xc0", 5, 2 },  /* CMS: Center-aligned mode
              selection */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM1_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded
              control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update
              selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA
              selection */
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
   { "\x50\x97\x13", 7, 1 },  /* TI1S: TI1 selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
   { "\x3c\x94\xdd", 10, 1 },  /* OIS2: Output Idle state 2 */
   { "\x3c\x94\xdd\x38", 11, 1 },  /* OIS2N: Output Idle state 2 */
   { "\x3c\x94\xde", 12, 1 },  /* OIS3: Output Idle state 3 */
   { "\x3c\x94\xde\x38", 13, 1 },  /* OIS3N: Output Idle state 3 */
   { "\x3c\x94\xdf", 14, 1 },  /* OIS4: Output Idle state 4 */
};

const Field_t TIM1_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
   { "\x15\x41\x80", 8, 4 },  /* ETF: External trigger filter */
   { "\x15\x44\x13", 12, 2 },  /* ETPS: External trigger prescaler */
   { "\x14\x31\x40", 14, 1 },  /* ECE: External clock enable */
   { "\x15\x44\x00", 15, 1 },  /* ETP: External trigger polarity */
};

const Field_t TIM1_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt
              enable */
   { "\x0c\x37\x89\x14", 3, 1 },  /* CC3IE: Capture/Compare 3 interrupt
              enable */
   { "\x0c\x37\xc9\x14", 4, 1 },  /* CC4IE: Capture/Compare 4 interrupt
              enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request
              enable */
   { "\x0c\x37\x44\x14", 10, 1 },  /* CC2DE: Capture/Compare 2 DMA request
              enable */
   { "\x0c\x37\x84\x14", 11, 1 },  /* CC3DE: Capture/Compare 3 DMA request
              enable */
   { "\x0c\x37\xc4\x14", 12, 1 },  /* CC4DE: Capture/Compare 4 DMA request
              enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM1_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt
              flag */
   { "\x0c\x37\x89\x18", 3, 1 },  /* CC3IF: Capture/Compare 3 interrupt
              flag */
   { "\x0c\x37\xc9\x18", 4, 1 },  /* CC4IF: Capture/Compare 4 interrupt
              flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture
              flag */
   { "\x0c\x37\x8f\x18", 11, 1 },  /* CC3OF: Capture/Compare 3 overcapture
              flag */
   { "\x0c\x37\xcf\x18", 12, 1 },  /* CC4OF: Capture/Compare 4 overcapture
              flag */
};

const Field_t TIM1_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2
              generation */
   { "\x0c\x37\x87", 3, 1 },  /* CC3G: Capture/compare 3
              generation */
   { "\x0c\x37\xc7", 4, 1 },  /* CC4G: Capture/compare 4
              generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM1_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM1_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output Compare 1 clear
              enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast
              enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload
              enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output Compare 2 clear
              enable */
};

const Field_t TIM1_CCMR2_Output_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3
              selection */
   { "\x3c\x37\x86\x14", 2, 1 },  /* OC3FE: Output compare 3 fast
              enable */
   { "\x3c\x37\x90\x14", 3, 1 },  /* OC3PE: Output compare 3 preload
              enable */
   { "\x3c\x37\x8d", 4, 3 },  /* OC3M: Output compare 3 mode */
   { "\x3c\x37\x83\x14", 7, 1 },  /* OC3CE: Output compare 3 clear
              enable */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4
              selection */
   { "\x3c\x37\xc6\x14", 10, 1 },  /* OC4FE: Output compare 4 fast
              enable */
   { "\x3c\x37\xd0\x14", 11, 1 },  /* OC4PE: Output compare 4 preload
              enable */
   { "\x3c\x37\xcd", 12, 3 },  /* OC4M: Output compare 4 mode */
   { "\x3c\x37\xc3\x14", 15, 1 },  /* OC4CE: Output compare 4 clear
              enable */
};

const Field_t TIM1_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/compare 3
              selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4
              selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
};

const Field_t TIM1_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output
              enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output
              enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x4e\x14", 6, 1 },  /* CC2NE: Capture/Compare 2 complementary output
              enable */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x85", 8, 1 },  /* CC3E: Capture/Compare 3 output
              enable */
   { "\x0c\x37\x90", 9, 1 },  /* CC3P: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\x8e\x14", 10, 1 },  /* CC3NE: Capture/Compare 3 complementary output
              enable */
   { "\x0c\x37\x8e\x40", 11, 1 },  /* CC3NP: Capture/Compare 3 output
              Polarity */
   { "\x0c\x37\xc5", 12, 1 },  /* CC4E: Capture/Compare 4 output
              enable */
   { "\x0c\x37\xd0", 13, 1 },  /* CC4P: Capture/Compare 3 output
              Polarity */
};

const Field_t TIM1_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
};

const Field_t TIM1_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM1_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM1_RCR_fields[] = {
   { "\x48\x54\x00", 0, 8 },  /* REP: Repetition counter value */
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
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle
              mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run
              mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
};

const Field_t TIM1_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM1_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst
              accesses */
};

const Register_t TIM1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM1_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM1_CR2_fields, 12}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM1_SMCR_fields, 7}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM1_DIER_fields, 15}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM1_SR_fields, 12}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM1_EGR_fields, 8}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM1_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM1_CCMR1_Output_fields, 10}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM1_CCMR2_Output_fields, 10}, /* CCMR2_Output: capture/compare mode register 2 (output
          mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM1_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM1_CCER_fields, 14}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM1_CNT_fields, 1}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM1_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM1_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM1_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM1_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM1_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
   {"\x0c\x34\x9e", 60, 32, 0, TIM1_CCR3_fields, 1}, /* CCR3: capture/compare register 3 */
   {"\x0c\x34\x9f", 64, 32, 0, TIM1_CCR4_fields, 1}, /* CCR4: capture/compare register 4 */
   {"\x08\x45\x12", 68, 32, 0, TIM1_BDTR_fields, 8}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM1_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM1_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t USART1_SR_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: Parity error */
   { "\x18\x50", 1, 1 },  /* FE: Framing error */
   { "\x38\x60", 2, 1 },  /* NF: Noise detected flag */
   { "\x3d\x21\x40", 3, 1 },  /* ORE: Overrun error */
   { "\x24\x43\x05", 4, 1 },  /* IDLE: IDLE line detected */
   { "\x49\x83\x85", 5, 1 },  /* RXNE: Read data register not
              empty */
   { "\x50\x30", 6, 1 },  /* TC: Transmission complete */
   { "\x51\x81\x40", 7, 1 },  /* TXE: Transmit data register
              empty */
   { "\x30\x21\x00", 8, 1 },  /* LBD: LIN break detection flag */
   { "\x0d\x44\xc0", 9, 1 },  /* CTS: CTS flag */
};

const Field_t USART1_DR_fields[] = {
   { "\x11\x20", 0, 9 },  /* DR: Data value */
};

const Field_t USART1_BRR_fields[] = {
   { "\x10\x95\xa5\x19\x20\x43\x50\x93\xce", 0, 4 },  /* DIV_Fraction: fraction of USARTDIV */
   { "\x10\x95\xa5\x34\x13\x94\x25\x34\xc1", 4, 12 },  /* DIV_Mantissa: mantissa of USARTDIV */
};

const Field_t USART1_CR1_fields[] = {
   { "\x4c\x22\xc0", 0, 1 },  /* SBK: Send break */
   { "\x49\x75\x40", 1, 1 },  /* RWU: Receiver wakeup */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt
              enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: TXE interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Wakeup method */
   { "\x34", 12, 1 },  /* M: Word length */
   { "\x54\x50", 13, 1 },  /* UE: USART enable */
   { "\x3d\x61\x52\x8c", 15, 1 },  /* OVER8: Oversampling mode */
};

const Field_t USART1_CR2_fields[] = {
   { "\x04\x41\x00", 0, 4 },  /* ADD: Address of the USART node */
   { "\x30\x21\x0c", 5, 1 },  /* LBDL: lin break detection length */
   { "\x30\x21\x09\x14", 6, 1 },  /* LBDIE: LIN break detection interrupt
              enable */
   { "\x30\x20\xcc", 8, 1 },  /* LBCL: Last bit clock pulse */
   { "\x0d\x02\x01", 9, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 10, 1 },  /* CPOL: Clock polarity */
   { "\x0c\xc2\xc5\x38", 11, 1 },  /* CLKEN: Clock enable */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x30\x93\x85\x38", 14, 1 },  /* LINEN: LIN mode enable */
};

const Field_t USART1_CR3_fields[] = {
   { "\x14\x91\x40", 0, 1 },  /* EIE: Error interrupt enable */
   { "\x25\x21\x4e", 1, 1 },  /* IREN: IrDA mode enable */
   { "\x25\x23\x10", 2, 1 },  /* IRLP: IrDA low-power */
   { "\x20\x44\xc5\x30", 3, 1 },  /* HDSEL: Half-duplex selection */
   { "\x38\x10\xcb", 4, 1 },  /* NACK: Smartcard NACK enable */
   { "\x4c\x31\x4e", 5, 1 },  /* SCEN: Smartcard mode enable */
   { "\x10\xd0\x52", 6, 1 },  /* DMAR: DMA enable receiver */
   { "\x10\xd0\x54", 7, 1 },  /* DMAT: DMA enable transmitter */
   { "\x49\x44\xc5", 8, 1 },  /* RTSE: RTS enable */
   { "\x0d\x44\xc5", 9, 1 },  /* CTSE: CTS enable */
   { "\x0d\x44\xc9\x14", 10, 1 },  /* CTSIE: CTS interrupt enable */
   { "\x3c\xe1\x42\x25\x40", 11, 1 },  /* ONEBIT: One sample bit method
              enable */
};

const Field_t USART1_GTPR_fields[] = {
   { "\x41\x30\xc0", 0, 8 },  /* PSC: Prescaler value */
   { "\x1d\x40", 8, 8 },  /* GT: Guard time value */
};

const Register_t USART1_registers[] = {
   {"\x4d\x20", 0, 32, 0, USART1_SR_fields, 10}, /* SR: Status register */
   {"\x11\x20", 4, 32, 0, USART1_DR_fields, 1}, /* DR: Data register */
   {"\x09\x24\x80", 8, 32, 0, USART1_BRR_fields, 2}, /* BRR: Baud rate register */
   {"\x0d\x27\x00", 12, 32, 0, USART1_CR1_fields, 15}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 16, 32, 0, USART1_CR2_fields, 9}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 20, 32, 0, USART1_CR3_fields, 12}, /* CR3: Control register 3 */
   {"\x1d\x44\x12", 24, 32, 0, USART1_GTPR_fields, 2}, /* GTPR: Guard time and prescaler
          register */
};

const Field_t ADC1_SR_fields[] = {
   { "\x05\x71\x00", 0, 1 },  /* AWD: Analog watchdog flag */
   { "\x14\xf0\xc0", 1, 1 },  /* EOC: Regular channel end of
              conversion */
   { "\x28\x53\xc3", 2, 1 },  /* JEOC: Injected channel end of
              conversion */
   { "\x29\x35\x12\x50", 3, 1 },  /* JSTRT: Injected channel start
              flag */
   { "\x4d\x44\x94", 4, 1 },  /* STRT: Regular channel start flag */
   { "\x3d\x64\x80", 5, 1 },  /* OVR: Overrun */
};

const Field_t ADC1_CR1_fields[] = {
   { "\x05\x71\x03\x20", 0, 5 },  /* AWDCH: Analog watchdog channel select
              bits */
   { "\x14\xf0\xc9\x14", 5, 1 },  /* EOCIE: Interrupt enable for EOC */
   { "\x05\x71\x09\x14", 6, 1 },  /* AWDIE: Analog watchdog interrupt
              enable */
   { "\x28\x53\xc3\x24\x50", 7, 1 },  /* JEOCIE: Interrupt enable for injected
              channels */
   { "\x4c\x30\x4e", 8, 1 },  /* SCAN: Scan mode */
   { "\x05\x71\x13\x1c\xc0", 9, 1 },  /* AWDSGL: Enable the watchdog on a single channel
              in scan mode */
   { "\x28\x15\x54\x3c", 10, 1 },  /* JAUTO: Automatic injected group
              conversion */
   { "\x10\x94\xc3\x14\xe0", 11, 1 },  /* DISCEN: Discontinuous mode on regular
              channels */
   { "\x28\x42\x53\x0c\x53\x80", 12, 1 },  /* JDISCEN: Discontinuous mode on injected
              channels */
   { "\x10\x94\xc3\x39\x53\x40", 13, 3 },  /* DISCNUM: Discontinuous mode channel
              count */
   { "\x28\x15\xc4\x14\xe0", 22, 1 },  /* JAWDEN: Analog watchdog enable on injected
              channels */
   { "\x05\x71\x05\x38", 23, 1 },  /* AWDEN: Analog watchdog enable on regular
              channels */
   { "\x48\x54\xc0", 24, 2 },  /* RES: Resolution */
   { "\x3d\x64\x89\x14", 26, 1 },  /* OVRIE: Overrun interrupt enable */
};

const Field_t ADC1_CR2_fields[] = {
   { "\x04\x43\xce", 0, 1 },  /* ADON: A/D Converter ON / OFF */
   { "\x0c\xf3\x94", 1, 1 },  /* CONT: Continuous conversion */
   { "\x10\xd0\x40", 8, 1 },  /* DMA: Direct memory access mode (for single
              ADC mode) */
   { "\x10\x44\xc0", 9, 1 },  /* DDS: DMA disable selection (for single ADC
              mode) */
   { "\x14\xf0\xd3", 10, 1 },  /* EOCS: End of conversion
              selection */
   { "\x04\xc2\x47\x38", 11, 1 },  /* ALIGN: Data alignment */
   { "\x28\x56\x14\x4c\x53\x00", 16, 4 },  /* JEXTSEL: External event select for injected
              group */
   { "\x28\x56\x14\x14\xe0", 20, 2 },  /* JEXTEN: External trigger enable for injected
              channels */
   { "\x29\x35\xd3\x50\x14\x94", 22, 1 },  /* JSWSTART: Start conversion of injected
              channels */
   { "\x15\x85\x13\x14\xc0", 24, 4 },  /* EXTSEL: External event select for regular
              group */
   { "\x15\x85\x05\x38", 28, 2 },  /* EXTEN: External trigger enable for regular
              channels */
   { "\x4d\x74\xd4\x05\x25\x00", 30, 1 },  /* SWSTART: Start conversion of regular
              channels */
};

const Field_t ADC1_SMPR1_fields[] = {
   { "\x4c\xd4\x18\x95\x80", 0, 32 },  /* SMPx_x: Sample time bits */
};

const Field_t ADC1_SMPR2_fields[] = {
   { "\x4c\xd4\x18\x95\x80", 0, 32 },  /* SMPx_x: Sample time bits */
};

const Field_t ADC1_JOFR1_fields[] = {
   { "\x28\xf1\x86\x4c\x55\x1c", 0, 12 },  /* JOFFSET1: Data offset for injected channel
              x */
};

const Field_t ADC1_JOFR2_fields[] = {
   { "\x28\xf1\x86\x4c\x55\x1d", 0, 12 },  /* JOFFSET2: Data offset for injected channel
              x */
};

const Field_t ADC1_JOFR3_fields[] = {
   { "\x28\xf1\x86\x4c\x55\x1e", 0, 12 },  /* JOFFSET3: Data offset for injected channel
              x */
};

const Field_t ADC1_JOFR4_fields[] = {
   { "\x28\xf1\x86\x4c\x55\x1f", 0, 12 },  /* JOFFSET4: Data offset for injected channel
              x */
};

const Field_t ADC1_HTR_fields[] = {
   { "\x21\x40", 0, 12 },  /* HT: Analog watchdog higher
              threshold */
};

const Field_t ADC1_LTR_fields[] = {
   { "\x31\x40", 0, 12 },  /* LT: Analog watchdog lower
              threshold */
};

const Field_t ADC1_SQR1_fields[] = {
   { "\x4d\x17\x1e", 0, 5 },  /* SQ13: 13th conversion in regular
              sequence */
   { "\x4d\x17\x1f", 5, 5 },  /* SQ14: 14th conversion in regular
              sequence */
   { "\x4d\x17\x20", 10, 5 },  /* SQ15: 15th conversion in regular
              sequence */
   { "\x4d\x17\x21", 15, 5 },  /* SQ16: 16th conversion in regular
              sequence */
   { "\x30", 20, 4 },  /* L: Regular channel sequence
              length */
};

const Field_t ADC1_SQR2_fields[] = {
   { "\x4d\x18\x80", 0, 5 },  /* SQ7: 7th conversion in regular
              sequence */
   { "\x4d\x18\xc0", 5, 5 },  /* SQ8: 8th conversion in regular
              sequence */
   { "\x4d\x19\x00", 10, 5 },  /* SQ9: 9th conversion in regular
              sequence */
   { "\x4d\x17\x1b", 15, 5 },  /* SQ10: 10th conversion in regular
              sequence */
   { "\x4d\x17\x1c", 20, 5 },  /* SQ11: 11th conversion in regular
              sequence */
   { "\x4d\x17\x1d", 25, 5 },  /* SQ12: 12th conversion in regular
              sequence */
};

const Field_t ADC1_SQR3_fields[] = {
   { "\x4d\x17\x00", 0, 5 },  /* SQ1: 1st conversion in regular
              sequence */
   { "\x4d\x17\x40", 5, 5 },  /* SQ2: 2nd conversion in regular
              sequence */
   { "\x4d\x17\x80", 10, 5 },  /* SQ3: 3rd conversion in regular
              sequence */
   { "\x4d\x17\xc0", 15, 5 },  /* SQ4: 4th conversion in regular
              sequence */
   { "\x4d\x18\x00", 20, 5 },  /* SQ5: 5th conversion in regular
              sequence */
   { "\x4d\x18\x40", 25, 5 },  /* SQ6: 6th conversion in regular
              sequence */
};

const Field_t ADC1_JSQR_fields[] = {
   { "\x29\x34\x5c", 0, 5 },  /* JSQ1: 1st conversion in injected
              sequence */
   { "\x29\x34\x5d", 5, 5 },  /* JSQ2: 2nd conversion in injected
              sequence */
   { "\x29\x34\x5e", 10, 5 },  /* JSQ3: 3rd conversion in injected
              sequence */
   { "\x29\x34\x5f", 15, 5 },  /* JSQ4: 4th conversion in injected
              sequence */
   { "\x28\xc0", 20, 2 },  /* JL: Injected sequence length */
};

const Field_t ADC1_JDR1_fields[] = {
   { "\x28\x40\x54\x04", 0, 16 },  /* JDATA: Injected data */
};

const Field_t ADC1_JDR2_fields[] = {
   { "\x28\x40\x54\x04", 0, 16 },  /* JDATA: Injected data */
};

const Field_t ADC1_JDR3_fields[] = {
   { "\x28\x40\x54\x04", 0, 16 },  /* JDATA: Injected data */
};

const Field_t ADC1_JDR4_fields[] = {
   { "\x28\x40\x54\x04", 0, 16 },  /* JDATA: Injected data */
};

const Field_t ADC1_DR_fields[] = {
   { "\x10\x15\x01", 0, 16 },  /* DATA: Regular data */
};

const Register_t ADC1_registers[] = {
   {"\x4d\x20", 0, 32, 0, ADC1_SR_fields, 6}, /* SR: status register */
   {"\x0d\x27\x00", 4, 32, 0, ADC1_CR1_fields, 14}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 8, 32, 0, ADC1_CR2_fields, 12}, /* CR2: control register 2 */
   {"\x4c\xd4\x12\x70", 12, 32, 0, ADC1_SMPR1_fields, 1}, /* SMPR1: sample time register 1 */
   {"\x4c\xd4\x12\x74", 16, 32, 0, ADC1_SMPR2_fields, 1}, /* SMPR2: sample time register 2 */
   {"\x28\xf1\x92\x70", 20, 32, 0, ADC1_JOFR1_fields, 1}, /* JOFR1: injected channel data offset register
          x */
   {"\x28\xf1\x92\x74", 24, 32, 0, ADC1_JOFR2_fields, 1}, /* JOFR2: injected channel data offset register
          x */
   {"\x28\xf1\x92\x78", 28, 32, 0, ADC1_JOFR3_fields, 1}, /* JOFR3: injected channel data offset register
          x */
   {"\x28\xf1\x92\x7c", 32, 32, 0, ADC1_JOFR4_fields, 1}, /* JOFR4: injected channel data offset register
          x */
   {"\x21\x44\x80", 36, 32, 0, ADC1_HTR_fields, 1}, /* HTR: watchdog higher threshold
          register */
   {"\x31\x44\x80", 40, 32, 0, ADC1_LTR_fields, 1}, /* LTR: watchdog lower threshold
          register */
   {"\x4d\x14\x9c", 44, 32, 0, ADC1_SQR1_fields, 5}, /* SQR1: regular sequence register 1 */
   {"\x4d\x14\x9d", 48, 32, 0, ADC1_SQR2_fields, 6}, /* SQR2: regular sequence register 2 */
   {"\x4d\x14\x9e", 52, 32, 0, ADC1_SQR3_fields, 6}, /* SQR3: regular sequence register 3 */
   {"\x29\x34\x52", 56, 32, 0, ADC1_JSQR_fields, 5}, /* JSQR: injected sequence register */
   {"\x28\x44\x9c", 60, 32, 0, ADC1_JDR1_fields, 1}, /* JDR1: injected data register x */
   {"\x28\x44\x9d", 64, 32, 0, ADC1_JDR2_fields, 1}, /* JDR2: injected data register x */
   {"\x28\x44\x9e", 68, 32, 0, ADC1_JDR3_fields, 1}, /* JDR3: injected data register x */
   {"\x28\x44\x9f", 72, 32, 0, ADC1_JDR4_fields, 1}, /* JDR4: injected data register x */
   {"\x11\x20", 76, 32, 0, ADC1_DR_fields, 1}, /* DR: regular data register */
};

const Field_t ADC_Common_CSR_fields[] = {
   { "\x05\x71\x1c", 0, 1 },  /* AWD1: Analog watchdog flag of ADC
              1 */
   { "\x14\xf0\xdc", 1, 1 },  /* EOC1: End of conversion of ADC 1 */
   { "\x28\x53\xc3\x70", 2, 1 },  /* JEOC1: Injected channel end of conversion of
              ADC 1 */
   { "\x29\x35\x12\x51\xc0", 3, 1 },  /* JSTRT1: Injected channel Start flag of ADC
              1 */
   { "\x4d\x44\x94\x70", 4, 1 },  /* STRT1: Regular channel Start flag of ADC
              1 */
   { "\x3d\x64\x9c", 5, 1 },  /* OVR1: Overrun flag of ADC 1 */
   { "\x05\x71\x1d", 8, 1 },  /* AWD2: Analog watchdog flag of ADC
              2 */
   { "\x14\xf0\xdd", 9, 1 },  /* EOC2: End of conversion of ADC 2 */
   { "\x28\x53\xc3\x74", 10, 1 },  /* JEOC2: Injected channel end of conversion of
              ADC 2 */
   { "\x29\x35\x12\x51\xd0", 11, 1 },  /* JSTRT2: Injected channel Start flag of ADC
              2 */
   { "\x4d\x44\x94\x74", 12, 1 },  /* STRT2: Regular channel Start flag of ADC
              2 */
   { "\x3d\x64\x9d", 13, 1 },  /* OVR2: Overrun flag of ADC 2 */
   { "\x05\x71\x1e", 16, 1 },  /* AWD3: Analog watchdog flag of ADC
              3 */
   { "\x14\xf0\xde", 17, 1 },  /* EOC3: End of conversion of ADC 3 */
   { "\x28\x53\xc3\x78", 18, 1 },  /* JEOC3: Injected channel end of conversion of
              ADC 3 */
   { "\x29\x35\x12\x51\xe0", 19, 1 },  /* JSTRT3: Injected channel Start flag of ADC
              3 */
   { "\x4d\x44\x94\x78", 20, 1 },  /* STRT3: Regular channel Start flag of ADC
              3 */
   { "\x3d\x64\x9e", 21, 1 },  /* OVR3: Overrun flag of ADC3 */
};

const Field_t ADC_Common_CCR_fields[] = {
   { "\x10\x53\x01\x64", 8, 4 },  /* DELAY: Delay between 2 sampling
              phases */
   { "\x10\x44\xc0", 13, 1 },  /* DDS: DMA disable selection for multi-ADC
              mode */
   { "\x10\xd0\x40", 14, 2 },  /* DMA: Direct memory access mode for multi ADC
              mode */
   { "\x04\x40\xd0\x48\x50", 16, 2 },  /* ADCPRE: ADC prescaler */
   { "\x58\x20\x54\x14", 22, 1 },  /* VBATE: VBAT enable */
   { "\x51\x35\x92\x14\x61\x40", 23, 1 },  /* TSVREFE: Temperature sensor and VREFINT
              enable */
};

const Register_t ADC_Common_registers[] = {
   {"\x0d\x34\x80", 0, 32, 0, ADC_Common_CSR_fields, 18}, /* CSR: ADC Common status register */
   {"\x0c\x34\x80", 4, 32, 0, ADC_Common_CCR_fields, 6}, /* CCR: ADC common control register */
};

const Field_t SDIO_POWER_fields[] = {
   { "\x41\x74\x83\x51\x23\x00", 0, 2 },  /* PWRCTRL: PWRCTRL */
};

const Field_t SDIO_CLKCR_fields[] = {
   { "\x0c\xc2\xc4\x25\x60", 0, 8 },  /* CLKDIV: Clock divide factor */
   { "\x0c\xc2\xc5\x38", 8, 1 },  /* CLKEN: Clock enable bit */
   { "\x41\x74\x93\x05\x60", 9, 1 },  /* PWRSAV: Power saving configuration
              bit */
   { "\x09\x94\x01\x4d\x30", 10, 1 },  /* BYPASS: Clock divider bypass enable
              bit */
   { "\x5c\x91\x02\x55\x30", 11, 2 },  /* WIDBUS: Wide bus mode enable bit */
   { "\x38\x51\xc5\x10\x71\x40", 13, 1 },  /* NEGEDGE: SDIO_CK dephasing selection
              bit */
   { "\x21\x71\x83\x94\x53\x80", 14, 1 },  /* HWFC_EN: HW Flow Control enable */
};

const Field_t SDIO_ARG_fields[] = {
   { "\x0c\xd1\x01\x48\x70", 0, 32 },  /* CMDARG: Command argument */
};

const Field_t SDIO_CMD_fields[] = {
   { "\x0c\xd1\x09\x38\x41\x58", 0, 6 },  /* CMDINDEX: Command index */
   { "\x5c\x12\x54\x48\x54\xd0", 6, 2 },  /* WAITRESP: Wait for response bits */
   { "\x5c\x12\x54\x24\xe5\x00", 8, 1 },  /* WAITINT: CPSM waits for interrupt
              request */
   { "\x5c\x12\x54\x40\x53\x84", 9, 1 },  /* WAITPEND: CPSM Waits for ends of data transfer
              (CmdPend internal signal). */
   { "\x0d\x04\xcd\x14\xe0", 10, 1 },  /* CPSMEN: Command path state machine (CPSM) Enable
              bit */
   { "\x4c\x42\x4f\x4d\x54\xd0\x14\xe1\x00", 11, 1 },  /* SDIOSuspend: SD I/O suspend command */
   { "\x14\xe0\xcd\x10\x33\xcd\x40\xc0", 12, 1 },  /* ENCMDcompl: Enable CMD completion */
   { "\x38\x91\x4e", 13, 1 },  /* nIEN: not Interrupt Enable */
   { "\x0c\x59\x41\x50\x10\xcd\x10", 14, 1 },  /* CE_ATACMD: CE-ATA command */
};

const Field_t SDIO_RESPCMD_fields[] = {
   { "\x48\x54\xd0\x0c\xd1\x00", 0, 6 },  /* RESPCMD: Response command index */
};

const Field_t SDIO_RESP1_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\x00", 0, 32 },  /* CARDSTATUS1: Card Status */
};

const Field_t SDIO_RESP2_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\x40", 0, 32 },  /* CARDSTATUS2: Card Status */
};

const Field_t SDIO_RESP3_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\x80", 0, 32 },  /* CARDSTATUS3: Card Status */
};

const Field_t SDIO_RESP4_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\xc0", 0, 32 },  /* CARDSTATUS4: Card Status */
};

const Field_t SDIO_DTIMER_fields[] = {
   { "\x10\x15\x01\x50\x93\x45", 0, 32 },  /* DATATIME: Data timeout period */
};

const Field_t SDIO_DLEN_fields[] = {
   { "\x10\x15\x01\x30\x53\x87\x50\x80", 0, 25 },  /* DATALENGTH: Data length value */
};

const Field_t SDIO_DCTRL_fields[] = {
   { "\x11\x41\x4e", 0, 1 },  /* DTEN: DTEN */
   { "\x11\x41\x09\x48", 1, 1 },  /* DTDIR: Data transfer direction
              selection */
   { "\x11\x43\x4f\x10\x50", 2, 1 },  /* DTMODE: Data transfer mode selection 1: Stream
              or SDIO multibyte data transfer. */
   { "\x10\xd0\x45\x38", 3, 1 },  /* DMAEN: DMA enable bit */
   { "\x10\x23\x0f\x0c\xb4\xc9\x68\x50", 4, 4 },  /* DBLOCKSIZE: Data block size */
   { "\x49\x74\xd4\x05\x25\x00", 8, 1 },  /* RWSTART: Read wait start */
   { "\x49\x74\xd4\x3d\x00", 9, 1 },  /* RWSTOP: Read wait stop */
   { "\x49\x73\x4f\x10", 10, 1 },  /* RWMOD: Read wait mode */
   { "\x4c\x42\x4f\x14\xe0", 11, 1 },  /* SDIOEN: SD I/O enable functions */
};

const Field_t SDIO_DCOUNT_fields[] = {
   { "\x10\x15\x01\x0c\xf5\x4e\x50", 0, 25 },  /* DATACOUNT: Data count value */
};

const Field_t SDIO_STA_fields[] = {
   { "\x0c\x34\x83\x18\x12\x4c", 0, 1 },  /* CCRCFAIL: Command response received (CRC check
              failed) */
   { "\x10\x34\x83\x18\x12\x4c", 1, 1 },  /* DCRCFAIL: Data block sent/received (CRC check
              failed) */
   { "\x0d\x42\x4d\x14\xf5\x54", 2, 1 },  /* CTIMEOUT: Command response timeout */
   { "\x11\x42\x4d\x14\xf5\x54", 3, 1 },  /* DTIMEOUT: Data timeout */
   { "\x51\x85\x4e\x10\x54\x92", 4, 1 },  /* TXUNDERR: Transmit FIFO underrun
              error */
   { "\x49\x83\xd6\x15\x24\x80", 5, 1 },  /* RXOVERR: Received FIFO overrun
              error */
   { "\x0c\xd1\x12\x14\xe1\x00", 6, 1 },  /* CMDREND: Command response received (CRC check
              passed) */
   { "\x0c\xd1\x13\x14\xe5\x00", 7, 1 },  /* CMDSENT: Command sent (no response
              required) */
   { "\x10\x15\x01\x14\xe1\x00", 8, 1 },  /* DATAEND: Data end (data counter, SDIDCOUNT, is
              zero) */
   { "\x4d\x40\x89\x50\x54\x92", 9, 1 },  /* STBITERR: Start bit not detected on all data
              signals in wide bus mode */
   { "\x10\x20\xcb\x14\xe1\x00", 10, 1 },  /* DBCKEND: Data block sent/received (CRC check
              passed) */
   { "\x0c\xd1\x01\x0d\x40", 11, 1 },  /* CMDACT: Command transfer in
              progress */
   { "\x51\x80\x43\x50", 12, 1 },  /* TXACT: Data transmit in progress */
   { "\x49\x80\x43\x50", 13, 1 },  /* RXACT: Data receive in progress */
   { "\x51\x81\x89\x18\xf2\x05", 14, 1 },  /* TXFIFOHE: Transmit FIFO half empty: at least 8
              words can be written into the FIFO */
   { "\x49\x81\x89\x18\xf2\x06", 15, 1 },  /* RXFIFOHF: Receive FIFO half full: there are at
              least 8 words in the FIFO */
   { "\x51\x81\x89\x18\xf1\x80", 16, 1 },  /* TXFIFOF: Transmit FIFO full */
   { "\x49\x81\x89\x18\xf1\x80", 17, 1 },  /* RXFIFOF: Receive FIFO full */
   { "\x51\x81\x89\x18\xf1\x40", 18, 1 },  /* TXFIFOE: Transmit FIFO empty */
   { "\x49\x81\x89\x18\xf1\x40", 19, 1 },  /* RXFIFOE: Receive FIFO empty */
   { "\x51\x81\x01\x58\xc0", 20, 1 },  /* TXDAVL: Data available in transmit
              FIFO */
   { "\x49\x81\x01\x58\xc0", 21, 1 },  /* RXDAVL: Data available in receive
              FIFO */
   { "\x4c\x42\x4f\x25\x40", 22, 1 },  /* SDIOIT: SDIO interrupt received */
   { "\x0c\x50\x54\x04\x53\x84", 23, 1 },  /* CEATAEND: CE-ATA command completion signal
              received for CMD61 */
};

const Field_t SDIO_ICR_fields[] = {
   { "\x0c\x34\x83\x18\x12\x4c\x0c", 0, 1 },  /* CCRCFAILC: CCRCFAIL flag clear bit */
   { "\x10\x34\x83\x18\x12\x4c\x0c", 1, 1 },  /* DCRCFAILC: DCRCFAIL flag clear bit */
   { "\x0d\x42\x4d\x14\xf5\x54\x0c", 2, 1 },  /* CTIMEOUTC: CTIMEOUT flag clear bit */
   { "\x11\x42\x4d\x14\xf5\x54\x0c", 3, 1 },  /* DTIMEOUTC: DTIMEOUT flag clear bit */
   { "\x51\x85\x4e\x10\x54\x92\x0c", 4, 1 },  /* TXUNDERRC: TXUNDERR flag clear bit */
   { "\x49\x83\xd6\x15\x24\x83", 5, 1 },  /* RXOVERRC: RXOVERR flag clear bit */
   { "\x0c\xd1\x12\x14\xe1\x03", 6, 1 },  /* CMDRENDC: CMDREND flag clear bit */
   { "\x0c\xd1\x13\x14\xe5\x03", 7, 1 },  /* CMDSENTC: CMDSENT flag clear bit */
   { "\x10\x15\x01\x14\xe1\x03", 8, 1 },  /* DATAENDC: DATAEND flag clear bit */
   { "\x4d\x40\x89\x50\x54\x92\x0c", 9, 1 },  /* STBITERRC: STBITERR flag clear bit */
   { "\x10\x20\xcb\x14\xe1\x03", 10, 1 },  /* DBCKENDC: DBCKEND flag clear bit */
   { "\x4c\x42\x4f\x25\x40\xc0", 22, 1 },  /* SDIOITC: SDIOIT flag clear bit */
   { "\x0c\x50\x54\x04\x53\x84\x0c", 23, 1 },  /* CEATAENDC: CEATAEND flag clear bit */
};

const Field_t SDIO_MASK_fields[] = {
   { "\x0c\x34\x83\x18\x12\x4c\x24\x50", 0, 1 },  /* CCRCFAILIE: Command CRC fail interrupt
              enable */
   { "\x10\x34\x83\x18\x12\x4c\x24\x50", 1, 1 },  /* DCRCFAILIE: Data CRC fail interrupt
              enable */
   { "\x0d\x42\x4d\x14\xf5\x54\x24\x50", 2, 1 },  /* CTIMEOUTIE: Command timeout interrupt
              enable */
   { "\x11\x42\x4d\x14\xf5\x54\x24\x50", 3, 1 },  /* DTIMEOUTIE: Data timeout interrupt
              enable */
   { "\x51\x85\x4e\x10\x54\x92\x24\x50", 4, 1 },  /* TXUNDERRIE: Tx FIFO underrun error interrupt
              enable */
   { "\x49\x83\xd6\x15\x24\x89\x14", 5, 1 },  /* RXOVERRIE: Rx FIFO overrun error interrupt
              enable */
   { "\x0c\xd1\x12\x14\xe1\x09\x14", 6, 1 },  /* CMDRENDIE: Command response received interrupt
              enable */
   { "\x0c\xd1\x13\x14\xe5\x09\x14", 7, 1 },  /* CMDSENTIE: Command sent interrupt
              enable */
   { "\x10\x15\x01\x14\xe1\x09\x14", 8, 1 },  /* DATAENDIE: Data end interrupt enable */
   { "\x4d\x40\x89\x50\x54\x92\x24\x50", 9, 1 },  /* STBITERRIE: Start bit error interrupt
              enable */
   { "\x10\x20\xcb\x14\xe1\x09\x14", 10, 1 },  /* DBCKENDIE: Data block end interrupt
              enable */
   { "\x0c\xd1\x01\x0d\x42\x45", 11, 1 },  /* CMDACTIE: Command acting interrupt
              enable */
   { "\x51\x80\x43\x50\x91\x40", 12, 1 },  /* TXACTIE: Data transmit acting interrupt
              enable */
   { "\x49\x80\x43\x50\x91\x40", 13, 1 },  /* RXACTIE: Data receive acting interrupt
              enable */
   { "\x51\x81\x89\x18\xf2\x05\x24\x50", 14, 1 },  /* TXFIFOHEIE: Tx FIFO half empty interrupt
              enable */
   { "\x49\x81\x89\x18\xf2\x06\x24\x50", 15, 1 },  /* RXFIFOHFIE: Rx FIFO half full interrupt
              enable */
   { "\x51\x81\x89\x18\xf1\x89\x14", 16, 1 },  /* TXFIFOFIE: Tx FIFO full interrupt
              enable */
   { "\x49\x81\x89\x18\xf1\x89\x14", 17, 1 },  /* RXFIFOFIE: Rx FIFO full interrupt
              enable */
   { "\x51\x81\x89\x18\xf1\x49\x14", 18, 1 },  /* TXFIFOEIE: Tx FIFO empty interrupt
              enable */
   { "\x49\x81\x89\x18\xf1\x49\x14", 19, 1 },  /* RXFIFOEIE: Rx FIFO empty interrupt
              enable */
   { "\x51\x81\x01\x58\xc2\x45", 20, 1 },  /* TXDAVLIE: Data available in Tx FIFO interrupt
              enable */
   { "\x49\x81\x01\x58\xc2\x45", 21, 1 },  /* RXDAVLIE: Data available in Rx FIFO interrupt
              enable */
   { "\x4c\x42\x4f\x25\x42\x45", 22, 1 },  /* SDIOITIE: SDIO mode interrupt received interrupt
              enable */
   { "\x0c\x50\x54\x04\x53\x84\x24\x50", 23, 1 },  /* CEATAENDIE: CE-ATA command completion signal
              received interrupt enable */
};

const Field_t SDIO_FIFOCNT_fields[] = {
   { "\x18\x91\x8f\x0c\xf5\x4e\x50", 0, 24 },  /* FIFOCOUNT: Remaining number of words to be written
              to or read from the FIFO. */
};

const Field_t SDIO_FIFO_fields[] = {
   { "\x18\x91\x8f\x10\x15\x01", 0, 32 },  /* FIFOData: Receive and transmit FIFO
              data */
};

const Register_t SDIO_registers[] = {
   {"\x40\xf5\xc5\x48", 0, 32, 0, SDIO_POWER_fields, 1}, /* POWER: power control register */
   {"\x0c\xc2\xc3\x48", 4, 32, 0, SDIO_CLKCR_fields, 7}, /* CLKCR: SDI clock control register */
   {"\x05\x21\xc0", 8, 32, 0, SDIO_ARG_fields, 1}, /* ARG: argument register */
   {"\x0c\xd1\x00", 12, 32, 0, SDIO_CMD_fields, 9}, /* CMD: command register */
   {"\x48\x54\xd0\x0c\xd1\x00", 16, 32, 0, SDIO_RESPCMD_fields, 1}, /* RESPCMD: command response register */
   {"\x48\x54\xd0\x70", 20, 32, 0, SDIO_RESP1_fields, 1}, /* RESP1: response 1..4 register */
   {"\x48\x54\xd0\x74", 24, 32, 0, SDIO_RESP2_fields, 1}, /* RESP2: response 1..4 register */
   {"\x48\x54\xd0\x78", 28, 32, 0, SDIO_RESP3_fields, 1}, /* RESP3: response 1..4 register */
   {"\x48\x54\xd0\x7c", 32, 32, 0, SDIO_RESP4_fields, 1}, /* RESP4: response 1..4 register */
   {"\x11\x42\x4d\x15\x20", 36, 32, 0, SDIO_DTIMER_fields, 1}, /* DTIMER: data timer register */
   {"\x10\xc1\x4e", 40, 32, 0, SDIO_DLEN_fields, 1}, /* DLEN: data length register */
   {"\x10\x35\x12\x30", 44, 32, 0, SDIO_DCTRL_fields, 9}, /* DCTRL: data control register */
   {"\x10\x33\xd5\x39\x40", 48, 32, 0, SDIO_DCOUNT_fields, 1}, /* DCOUNT: data counter register */
   {"\x4d\x40\x40", 52, 32, 0, SDIO_STA_fields, 24}, /* STA: status register */
   {"\x24\x34\x80", 56, 32, 0, SDIO_ICR_fields, 13}, /* ICR: interrupt clear register */
   {"\x34\x14\xcb", 60, 32, 0, SDIO_MASK_fields, 24}, /* MASK: mask register */
   {"\x18\x91\x8f\x0c\xe5\x00", 72, 32, 0, SDIO_FIFOCNT_fields, 1}, /* FIFOCNT: FIFO counter register */
   {"\x18\x91\x8f", 128, 32, 0, SDIO_FIFO_fields, 1}, /* FIFO: data FIFO register */
};

const Field_t SYSCFG_MEMRM_fields[] = {
   { "\x34\x53\x65\x34\xf1\x05", 0, 2 },  /* MEM_MODE: MEM_MODE */
};

const Field_t SYSCFG_PMC_fields[] = {
   { "\x04\x40\xdc\x10\x37\x40", 16, 1 },  /* ADC1DC2: ADC1DC2 */
};

const Field_t SYSCFG_EXTICR1_fields[] = {
   { "\x15\x85\x09\x6c", 0, 4 },  /* EXTI0: EXTI x configuration (x = 0 to
              3) */
   { "\x15\x85\x09\x70", 4, 4 },  /* EXTI1: EXTI x configuration (x = 0 to
              3) */
   { "\x15\x85\x09\x74", 8, 4 },  /* EXTI2: EXTI x configuration (x = 0 to
              3) */
   { "\x15\x85\x09\x78", 12, 4 },  /* EXTI3: EXTI x configuration (x = 0 to
              3) */
};

const Field_t SYSCFG_EXTICR2_fields[] = {
   { "\x15\x85\x09\x7c", 0, 4 },  /* EXTI4: EXTI x configuration (x = 4 to
              7) */
   { "\x15\x85\x09\x80", 4, 4 },  /* EXTI5: EXTI x configuration (x = 4 to
              7) */
   { "\x15\x85\x09\x84", 8, 4 },  /* EXTI6: EXTI x configuration (x = 4 to
              7) */
   { "\x15\x85\x09\x88", 12, 4 },  /* EXTI7: EXTI x configuration (x = 4 to
              7) */
};

const Field_t SYSCFG_EXTICR3_fields[] = {
   { "\x15\x85\x09\x8c", 0, 4 },  /* EXTI8: EXTI x configuration (x = 8 to
              11) */
   { "\x15\x85\x09\x90", 4, 4 },  /* EXTI9: EXTI x configuration (x = 8 to
              11) */
   { "\x15\x85\x09\x71\xb0", 8, 4 },  /* EXTI10: EXTI10 */
   { "\x15\x85\x09\x71\xc0", 12, 4 },  /* EXTI11: EXTI x configuration (x = 8 to
              11) */
};

const Field_t SYSCFG_EXTICR4_fields[] = {
   { "\x15\x85\x09\x71\xd0", 0, 4 },  /* EXTI12: EXTI x configuration (x = 12 to
              15) */
   { "\x15\x85\x09\x71\xe0", 4, 4 },  /* EXTI13: EXTI x configuration (x = 12 to
              15) */
   { "\x15\x85\x09\x71\xf0", 8, 4 },  /* EXTI14: EXTI x configuration (x = 12 to
              15) */
   { "\x15\x85\x09\x72\x00", 12, 4 },  /* EXTI15: EXTI x configuration (x = 12 to
              15) */
};

const Field_t SYSCFG_CMPCR_fields[] = {
   { "\x0c\xd4\x25\x40\x40", 0, 1 },  /* CMP_PD: Compensation cell
              power-down */
   { "\x48\x50\x44\x64", 8, 1 },  /* READY: READY */
};

const Register_t SYSCFG_registers[] = {
   {"\x34\x53\x52\x34", 0, 32, 0, SYSCFG_MEMRM_fields, 1}, /* MEMRM: memory remap register */
   {"\x40\xd0\xc0", 4, 32, 0, SYSCFG_PMC_fields, 1}, /* PMC: peripheral mode configuration
          register */
   {"\x15\x85\x09\x0d\x27\x00", 8, 32, 0, SYSCFG_EXTICR1_fields, 4}, /* EXTICR1: external interrupt configuration register
          1 */
   {"\x15\x85\x09\x0d\x27\x40", 12, 32, 0, SYSCFG_EXTICR2_fields, 4}, /* EXTICR2: external interrupt configuration register
          2 */
   {"\x15\x85\x09\x0d\x27\x80", 16, 32, 0, SYSCFG_EXTICR3_fields, 4}, /* EXTICR3: external interrupt configuration register
          3 */
   {"\x15\x85\x09\x0d\x27\xc0", 20, 32, 0, SYSCFG_EXTICR4_fields, 4}, /* EXTICR4: external interrupt configuration register
          4 */
   {"\x0c\xd4\x03\x48", 32, 32, 0, SYSCFG_CMPCR_fields, 2}, /* CMPCR: Compensation cell control
          register */
};

const Field_t EXTI_IMR_fields[] = {
   { "\x35\x26\xc0", 0, 1 },  /* MR0: Interrupt Mask on line 0 */
   { "\x35\x27\x00", 1, 1 },  /* MR1: Interrupt Mask on line 1 */
   { "\x35\x27\x40", 2, 1 },  /* MR2: Interrupt Mask on line 2 */
   { "\x35\x27\x80", 3, 1 },  /* MR3: Interrupt Mask on line 3 */
   { "\x35\x27\xc0", 4, 1 },  /* MR4: Interrupt Mask on line 4 */
   { "\x35\x28\x00", 5, 1 },  /* MR5: Interrupt Mask on line 5 */
   { "\x35\x28\x40", 6, 1 },  /* MR6: Interrupt Mask on line 6 */
   { "\x35\x28\x80", 7, 1 },  /* MR7: Interrupt Mask on line 7 */
   { "\x35\x28\xc0", 8, 1 },  /* MR8: Interrupt Mask on line 8 */
   { "\x35\x29\x00", 9, 1 },  /* MR9: Interrupt Mask on line 9 */
   { "\x35\x27\x1b", 10, 1 },  /* MR10: Interrupt Mask on line 10 */
   { "\x35\x27\x1c", 11, 1 },  /* MR11: Interrupt Mask on line 11 */
   { "\x35\x27\x1d", 12, 1 },  /* MR12: Interrupt Mask on line 12 */
   { "\x35\x27\x1e", 13, 1 },  /* MR13: Interrupt Mask on line 13 */
   { "\x35\x27\x1f", 14, 1 },  /* MR14: Interrupt Mask on line 14 */
   { "\x35\x27\x20", 15, 1 },  /* MR15: Interrupt Mask on line 15 */
   { "\x35\x27\x21", 16, 1 },  /* MR16: Interrupt Mask on line 16 */
   { "\x35\x27\x22", 17, 1 },  /* MR17: Interrupt Mask on line 17 */
   { "\x35\x27\x23", 18, 1 },  /* MR18: Interrupt Mask on line 18 */
   { "\x35\x27\x24", 19, 1 },  /* MR19: Interrupt Mask on line 19 */
   { "\x35\x27\x5b", 20, 1 },  /* MR20: Interrupt Mask on line 20 */
   { "\x35\x27\x5c", 21, 1 },  /* MR21: Interrupt Mask on line 21 */
   { "\x35\x27\x5d", 22, 1 },  /* MR22: Interrupt Mask on line 22 */
};

const Field_t EXTI_EMR_fields[] = {
   { "\x35\x26\xc0", 0, 1 },  /* MR0: Event Mask on line 0 */
   { "\x35\x27\x00", 1, 1 },  /* MR1: Event Mask on line 1 */
   { "\x35\x27\x40", 2, 1 },  /* MR2: Event Mask on line 2 */
   { "\x35\x27\x80", 3, 1 },  /* MR3: Event Mask on line 3 */
   { "\x35\x27\xc0", 4, 1 },  /* MR4: Event Mask on line 4 */
   { "\x35\x28\x00", 5, 1 },  /* MR5: Event Mask on line 5 */
   { "\x35\x28\x40", 6, 1 },  /* MR6: Event Mask on line 6 */
   { "\x35\x28\x80", 7, 1 },  /* MR7: Event Mask on line 7 */
   { "\x35\x28\xc0", 8, 1 },  /* MR8: Event Mask on line 8 */
   { "\x35\x29\x00", 9, 1 },  /* MR9: Event Mask on line 9 */
   { "\x35\x27\x1b", 10, 1 },  /* MR10: Event Mask on line 10 */
   { "\x35\x27\x1c", 11, 1 },  /* MR11: Event Mask on line 11 */
   { "\x35\x27\x1d", 12, 1 },  /* MR12: Event Mask on line 12 */
   { "\x35\x27\x1e", 13, 1 },  /* MR13: Event Mask on line 13 */
   { "\x35\x27\x1f", 14, 1 },  /* MR14: Event Mask on line 14 */
   { "\x35\x27\x20", 15, 1 },  /* MR15: Event Mask on line 15 */
   { "\x35\x27\x21", 16, 1 },  /* MR16: Event Mask on line 16 */
   { "\x35\x27\x22", 17, 1 },  /* MR17: Event Mask on line 17 */
   { "\x35\x27\x23", 18, 1 },  /* MR18: Event Mask on line 18 */
   { "\x35\x27\x24", 19, 1 },  /* MR19: Event Mask on line 19 */
   { "\x35\x27\x5b", 20, 1 },  /* MR20: Event Mask on line 20 */
   { "\x35\x27\x5c", 21, 1 },  /* MR21: Event Mask on line 21 */
   { "\x35\x27\x5d", 22, 1 },  /* MR22: Event Mask on line 22 */
};

const Field_t EXTI_RTSR_fields[] = {
   { "\x51\x26\xc0", 0, 1 },  /* TR0: Rising trigger event configuration of
              line 0 */
   { "\x51\x27\x00", 1, 1 },  /* TR1: Rising trigger event configuration of
              line 1 */
   { "\x51\x27\x40", 2, 1 },  /* TR2: Rising trigger event configuration of
              line 2 */
   { "\x51\x27\x80", 3, 1 },  /* TR3: Rising trigger event configuration of
              line 3 */
   { "\x51\x27\xc0", 4, 1 },  /* TR4: Rising trigger event configuration of
              line 4 */
   { "\x51\x28\x00", 5, 1 },  /* TR5: Rising trigger event configuration of
              line 5 */
   { "\x51\x28\x40", 6, 1 },  /* TR6: Rising trigger event configuration of
              line 6 */
   { "\x51\x28\x80", 7, 1 },  /* TR7: Rising trigger event configuration of
              line 7 */
   { "\x51\x28\xc0", 8, 1 },  /* TR8: Rising trigger event configuration of
              line 8 */
   { "\x51\x29\x00", 9, 1 },  /* TR9: Rising trigger event configuration of
              line 9 */
   { "\x51\x27\x1b", 10, 1 },  /* TR10: Rising trigger event configuration of
              line 10 */
   { "\x51\x27\x1c", 11, 1 },  /* TR11: Rising trigger event configuration of
              line 11 */
   { "\x51\x27\x1d", 12, 1 },  /* TR12: Rising trigger event configuration of
              line 12 */
   { "\x51\x27\x1e", 13, 1 },  /* TR13: Rising trigger event configuration of
              line 13 */
   { "\x51\x27\x1f", 14, 1 },  /* TR14: Rising trigger event configuration of
              line 14 */
   { "\x51\x27\x20", 15, 1 },  /* TR15: Rising trigger event configuration of
              line 15 */
   { "\x51\x27\x21", 16, 1 },  /* TR16: Rising trigger event configuration of
              line 16 */
   { "\x51\x27\x22", 17, 1 },  /* TR17: Rising trigger event configuration of
              line 17 */
   { "\x51\x27\x23", 18, 1 },  /* TR18: Rising trigger event configuration of
              line 18 */
   { "\x51\x27\x24", 19, 1 },  /* TR19: Rising trigger event configuration of
              line 19 */
   { "\x51\x27\x5b", 20, 1 },  /* TR20: Rising trigger event configuration of
              line 20 */
   { "\x51\x27\x5c", 21, 1 },  /* TR21: Rising trigger event configuration of
              line 21 */
   { "\x51\x27\x5d", 22, 1 },  /* TR22: Rising trigger event configuration of
              line 22 */
};

const Field_t EXTI_FTSR_fields[] = {
   { "\x51\x26\xc0", 0, 1 },  /* TR0: Falling trigger event configuration of
              line 0 */
   { "\x51\x27\x00", 1, 1 },  /* TR1: Falling trigger event configuration of
              line 1 */
   { "\x51\x27\x40", 2, 1 },  /* TR2: Falling trigger event configuration of
              line 2 */
   { "\x51\x27\x80", 3, 1 },  /* TR3: Falling trigger event configuration of
              line 3 */
   { "\x51\x27\xc0", 4, 1 },  /* TR4: Falling trigger event configuration of
              line 4 */
   { "\x51\x28\x00", 5, 1 },  /* TR5: Falling trigger event configuration of
              line 5 */
   { "\x51\x28\x40", 6, 1 },  /* TR6: Falling trigger event configuration of
              line 6 */
   { "\x51\x28\x80", 7, 1 },  /* TR7: Falling trigger event configuration of
              line 7 */
   { "\x51\x28\xc0", 8, 1 },  /* TR8: Falling trigger event configuration of
              line 8 */
   { "\x51\x29\x00", 9, 1 },  /* TR9: Falling trigger event configuration of
              line 9 */
   { "\x51\x27\x1b", 10, 1 },  /* TR10: Falling trigger event configuration of
              line 10 */
   { "\x51\x27\x1c", 11, 1 },  /* TR11: Falling trigger event configuration of
              line 11 */
   { "\x51\x27\x1d", 12, 1 },  /* TR12: Falling trigger event configuration of
              line 12 */
   { "\x51\x27\x1e", 13, 1 },  /* TR13: Falling trigger event configuration of
              line 13 */
   { "\x51\x27\x1f", 14, 1 },  /* TR14: Falling trigger event configuration of
              line 14 */
   { "\x51\x27\x20", 15, 1 },  /* TR15: Falling trigger event configuration of
              line 15 */
   { "\x51\x27\x21", 16, 1 },  /* TR16: Falling trigger event configuration of
              line 16 */
   { "\x51\x27\x22", 17, 1 },  /* TR17: Falling trigger event configuration of
              line 17 */
   { "\x51\x27\x23", 18, 1 },  /* TR18: Falling trigger event configuration of
              line 18 */
   { "\x51\x27\x24", 19, 1 },  /* TR19: Falling trigger event configuration of
              line 19 */
   { "\x51\x27\x5b", 20, 1 },  /* TR20: Falling trigger event configuration of
              line 20 */
   { "\x51\x27\x5c", 21, 1 },  /* TR21: Falling trigger event configuration of
              line 21 */
   { "\x51\x27\x5d", 22, 1 },  /* TR22: Falling trigger event configuration of
              line 22 */
};

const Field_t EXTI_SWIER_fields[] = {
   { "\x4d\x72\x45\x49\xb0", 0, 1 },  /* SWIER0: Software Interrupt on line
              0 */
   { "\x4d\x72\x45\x49\xc0", 1, 1 },  /* SWIER1: Software Interrupt on line
              1 */
   { "\x4d\x72\x45\x49\xd0", 2, 1 },  /* SWIER2: Software Interrupt on line
              2 */
   { "\x4d\x72\x45\x49\xe0", 3, 1 },  /* SWIER3: Software Interrupt on line
              3 */
   { "\x4d\x72\x45\x49\xf0", 4, 1 },  /* SWIER4: Software Interrupt on line
              4 */
   { "\x4d\x72\x45\x4a\x00", 5, 1 },  /* SWIER5: Software Interrupt on line
              5 */
   { "\x4d\x72\x45\x4a\x10", 6, 1 },  /* SWIER6: Software Interrupt on line
              6 */
   { "\x4d\x72\x45\x4a\x20", 7, 1 },  /* SWIER7: Software Interrupt on line
              7 */
   { "\x4d\x72\x45\x4a\x30", 8, 1 },  /* SWIER8: Software Interrupt on line
              8 */
   { "\x4d\x72\x45\x4a\x40", 9, 1 },  /* SWIER9: Software Interrupt on line
              9 */
   { "\x4d\x72\x45\x49\xc6\xc0", 10, 1 },  /* SWIER10: Software Interrupt on line
              10 */
   { "\x4d\x72\x45\x49\xc7\x00", 11, 1 },  /* SWIER11: Software Interrupt on line
              11 */
   { "\x4d\x72\x45\x49\xc7\x40", 12, 1 },  /* SWIER12: Software Interrupt on line
              12 */
   { "\x4d\x72\x45\x49\xc7\x80", 13, 1 },  /* SWIER13: Software Interrupt on line
              13 */
   { "\x4d\x72\x45\x49\xc7\xc0", 14, 1 },  /* SWIER14: Software Interrupt on line
              14 */
   { "\x4d\x72\x45\x49\xc8\x00", 15, 1 },  /* SWIER15: Software Interrupt on line
              15 */
   { "\x4d\x72\x45\x49\xc8\x40", 16, 1 },  /* SWIER16: Software Interrupt on line
              16 */
   { "\x4d\x72\x45\x49\xc8\x80", 17, 1 },  /* SWIER17: Software Interrupt on line
              17 */
   { "\x4d\x72\x45\x49\xc8\xc0", 18, 1 },  /* SWIER18: Software Interrupt on line
              18 */
   { "\x4d\x72\x45\x49\xc9\x00", 19, 1 },  /* SWIER19: Software Interrupt on line
              19 */
   { "\x4d\x72\x45\x49\xd6\xc0", 20, 1 },  /* SWIER20: Software Interrupt on line
              20 */
   { "\x4d\x72\x45\x49\xd7\x00", 21, 1 },  /* SWIER21: Software Interrupt on line
              21 */
   { "\x4d\x72\x45\x49\xd7\x40", 22, 1 },  /* SWIER22: Software Interrupt on line
              22 */
};

const Field_t EXTI_PR_fields[] = {
   { "\x41\x26\xc0", 0, 1 },  /* PR0: Pending bit 0 */
   { "\x41\x27\x00", 1, 1 },  /* PR1: Pending bit 1 */
   { "\x41\x27\x40", 2, 1 },  /* PR2: Pending bit 2 */
   { "\x41\x27\x80", 3, 1 },  /* PR3: Pending bit 3 */
   { "\x41\x27\xc0", 4, 1 },  /* PR4: Pending bit 4 */
   { "\x41\x28\x00", 5, 1 },  /* PR5: Pending bit 5 */
   { "\x41\x28\x40", 6, 1 },  /* PR6: Pending bit 6 */
   { "\x41\x28\x80", 7, 1 },  /* PR7: Pending bit 7 */
   { "\x41\x28\xc0", 8, 1 },  /* PR8: Pending bit 8 */
   { "\x41\x29\x00", 9, 1 },  /* PR9: Pending bit 9 */
   { "\x41\x27\x1b", 10, 1 },  /* PR10: Pending bit 10 */
   { "\x41\x27\x1c", 11, 1 },  /* PR11: Pending bit 11 */
   { "\x41\x27\x1d", 12, 1 },  /* PR12: Pending bit 12 */
   { "\x41\x27\x1e", 13, 1 },  /* PR13: Pending bit 13 */
   { "\x41\x27\x1f", 14, 1 },  /* PR14: Pending bit 14 */
   { "\x41\x27\x20", 15, 1 },  /* PR15: Pending bit 15 */
   { "\x41\x27\x21", 16, 1 },  /* PR16: Pending bit 16 */
   { "\x41\x27\x22", 17, 1 },  /* PR17: Pending bit 17 */
   { "\x41\x27\x23", 18, 1 },  /* PR18: Pending bit 18 */
   { "\x41\x27\x24", 19, 1 },  /* PR19: Pending bit 19 */
   { "\x41\x27\x5b", 20, 1 },  /* PR20: Pending bit 20 */
   { "\x41\x27\x5c", 21, 1 },  /* PR21: Pending bit 21 */
   { "\x41\x27\x5d", 22, 1 },  /* PR22: Pending bit 22 */
};

const Register_t EXTI_registers[] = {
   {"\x24\xd4\x80", 0, 32, 0, EXTI_IMR_fields, 23}, /* IMR: Interrupt mask register
          (EXTI_IMR) */
   {"\x14\xd4\x80", 4, 32, 0, EXTI_EMR_fields, 23}, /* EMR: Event mask register (EXTI_EMR) */
   {"\x49\x44\xd2", 8, 32, 0, EXTI_RTSR_fields, 23}, /* RTSR: Rising Trigger selection register
          (EXTI_RTSR) */
   {"\x19\x44\xd2", 12, 32, 0, EXTI_FTSR_fields, 23}, /* FTSR: Falling Trigger selection register
          (EXTI_FTSR) */
   {"\x4d\x72\x45\x48", 16, 32, 0, EXTI_SWIER_fields, 23}, /* SWIER: Software interrupt event register
          (EXTI_SWIER) */
   {"\x41\x20", 20, 32, 0, EXTI_PR_fields, 23}, /* PR: Pending register (EXTI_PR) */
};

const Field_t TIM9_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM9_CR2_fields[] = {
   { "\x34\xd4\xc0", 4, 3 },  /* MMS: Master mode selection */
};

const Field_t TIM9_SMCR_fields[] = {
   { "\x4c\xd4\xc0", 0, 3 },  /* SMS: Slave mode selection */
   { "\x51\x30", 4, 3 },  /* TS: Trigger selection */
   { "\x35\x33\x40", 7, 1 },  /* MSM: Master/Slave mode */
};

const Field_t TIM9_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\x37\x49\x14", 2, 1 },  /* CC2IE: Capture/Compare 2 interrupt
              enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
};

const Field_t TIM9_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x49\x18", 2, 1 },  /* CC2IF: Capture/Compare 2 interrupt
              flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
   { "\x0c\x37\x4f\x18", 10, 1 },  /* CC2OF: Capture/compare 2 overcapture
              flag */
};

const Field_t TIM9_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\x37\x47", 2, 1 },  /* CC2G: Capture/compare 2
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
};

const Field_t TIM9_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output Compare 2 fast
              enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output Compare 2 preload
              enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output Compare 2 mode */
};

const Field_t TIM9_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 3 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x24\x37\x50\x0d\x30", 10, 2 },  /* IC2PCS: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 3 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM9_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x45", 4, 1 },  /* CC2E: Capture/Compare 2 output
              enable */
   { "\x0c\x37\x50", 5, 1 },  /* CC2P: Capture/Compare 2 output
              Polarity */
   { "\x0c\x37\x4e\x40", 7, 1 },  /* CC2NP: Capture/Compare 2 output
              Polarity */
};

const Field_t TIM9_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
};

const Field_t TIM9_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM9_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM9_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM9_CCR2_fields[] = {
   { "\x0c\x34\x9d", 0, 16 },  /* CCR2: Capture/Compare 2 value */
};

const Register_t TIM9_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM9_CR1_fields, 6}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM9_CR2_fields, 1}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM9_SMCR_fields, 3}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM9_DIER_fields, 4}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM9_SR_fields, 6}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM9_EGR_fields, 4}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM9_CCMR1_Output_fields, 8}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM9_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM9_CCER_fields, 6}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM9_CNT_fields, 1}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM9_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM9_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM9_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x0c\x34\x9d", 56, 32, 0, TIM9_CCR2_fields, 1}, /* CCR2: capture/compare register 2 */
};

const Field_t TIM10_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM10_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
};

const Field_t TIM10_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
};

const Field_t TIM10_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
};

const Field_t TIM10_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM10_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
};

const Field_t TIM10_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
};

const Field_t TIM10_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
};

const Field_t TIM10_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM10_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM10_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Register_t TIM10_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM10_CR1_fields, 5}, /* CR1: control register 1 */
   {"\x10\x91\x52", 12, 32, 0, TIM10_DIER_fields, 2}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM10_SR_fields, 3}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM10_EGR_fields, 2}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM10_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM10_CCMR1_Output_fields, 4}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM10_CCER_fields, 3}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM10_CNT_fields, 1}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM10_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM10_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM10_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
};

const Field_t TIM11_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
};

const Field_t TIM11_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
};

const Field_t TIM11_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
};

const Field_t TIM11_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
};

const Field_t TIM11_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
};

const Field_t TIM11_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x34\x03\x4c", 2, 2 },  /* ICPCS: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM11_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
};

const Field_t TIM11_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: counter value */
};

const Field_t TIM11_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM11_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto-reload value */
};

const Field_t TIM11_CCR1_fields[] = {
   { "\x0c\x34\x9c", 0, 16 },  /* CCR1: Capture/Compare 1 value */
};

const Field_t TIM11_OR_fields[] = {
   { "\x48\xd4\x00", 0, 2 },  /* RMP: Input 1 remapping
              capability */
};

const Register_t TIM11_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM11_CR1_fields, 5}, /* CR1: control register 1 */
   {"\x10\x91\x52", 12, 32, 0, TIM11_DIER_fields, 2}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM11_SR_fields, 3}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM11_EGR_fields, 2}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM11_CCMR1_Output_fields, 4}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM11_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM11_CCER_fields, 3}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM11_CNT_fields, 1}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM11_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM11_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM11_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x3d\x20", 80, 32, 0, TIM11_OR_fields, 1}, /* OR: option register */
};

const Field_t GPIOA_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOA_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =
              0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOA_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOA_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOA_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =
              0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =
              0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =
              0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =
              0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =
              0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =
              0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =
              0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =
              0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =
              0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =
              0..15) */
};

const Field_t GPIOA_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =
              0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =
              0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =
              0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =
              0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =
              0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =
              0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =
              0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =
              0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =
              0..15) */
};

const Field_t GPIOA_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=
              0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=
              0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=
              0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=
              0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=
              0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =
              0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =
              0..15) */
};

const Field_t GPIOA_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Port x lock bit y (y=
              0..15) */
};

const Field_t GPIOA_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x
              bit y (y = 0..7) */
};

const Field_t GPIOA_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x
              bit y (y = 8..15) */
};

const Register_t GPIOA_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOA_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOA_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOA_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed
          register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOA_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down
          register */
   {"\x24\x44\x80", 16, 32, 0, GPIOA_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOA_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOA_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset
          register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOA_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock
          register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOA_AFRL_fields, 8}, /* AFRL: GPIO alternate function low
          register */
   {"\x04\x64\x88", 36, 32, 0, GPIOA_AFRH_fields, 8}, /* AFRH: GPIO alternate function high
          register */
};

const Field_t GPIOB_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOB_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =
              0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOB_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOB_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOB_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =
              0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =
              0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =
              0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =
              0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =
              0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =
              0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =
              0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =
              0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =
              0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =
              0..15) */
};

const Field_t GPIOB_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =
              0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =
              0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =
              0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =
              0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =
              0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =
              0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =
              0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =
              0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =
              0..15) */
};

const Field_t GPIOB_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=
              0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=
              0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=
              0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=
              0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=
              0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =
              0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =
              0..15) */
};

const Field_t GPIOB_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Port x lock bit y (y=
              0..15) */
};

const Field_t GPIOB_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x
              bit y (y = 0..7) */
};

const Field_t GPIOB_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x
              bit y (y = 8..15) */
};

const Register_t GPIOB_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOB_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOB_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOB_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed
          register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOB_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down
          register */
   {"\x24\x44\x80", 16, 32, 0, GPIOB_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOB_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOB_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset
          register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOB_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock
          register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOB_AFRL_fields, 8}, /* AFRL: GPIO alternate function low
          register */
   {"\x04\x64\x88", 36, 32, 0, GPIOB_AFRH_fields, 8}, /* AFRH: GPIO alternate function high
          register */
};

const Field_t GPIOH_MODER_fields[] = {
   { "\x34\xf1\x05\x49\xb0", 0, 2 },  /* MODER0: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc0", 2, 2 },  /* MODER1: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xd0", 4, 2 },  /* MODER2: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xe0", 6, 2 },  /* MODER3: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xf0", 8, 2 },  /* MODER4: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x00", 10, 2 },  /* MODER5: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x10", 12, 2 },  /* MODER6: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x20", 14, 2 },  /* MODER7: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x30", 16, 2 },  /* MODER8: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x4a\x40", 18, 2 },  /* MODER9: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc6\xc0", 20, 2 },  /* MODER10: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x00", 22, 2 },  /* MODER11: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x40", 24, 2 },  /* MODER12: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\x80", 26, 2 },  /* MODER13: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc7\xc0", 28, 2 },  /* MODER14: Port x configuration bits (y =
              0..15) */
   { "\x34\xf1\x05\x49\xc8\x00", 30, 2 },  /* MODER15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOH_OTYPER_fields[] = {
   { "\x3d\x46\xc0", 0, 1 },  /* OT0: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x00", 1, 1 },  /* OT1: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x40", 2, 1 },  /* OT2: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x80", 3, 1 },  /* OT3: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\xc0", 4, 1 },  /* OT4: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x00", 5, 1 },  /* OT5: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x40", 6, 1 },  /* OT6: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\x80", 7, 1 },  /* OT7: Port x configuration bits (y =
              0..15) */
   { "\x3d\x48\xc0", 8, 1 },  /* OT8: Port x configuration bits (y =
              0..15) */
   { "\x3d\x49\x00", 9, 1 },  /* OT9: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1b", 10, 1 },  /* OT10: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1c", 11, 1 },  /* OT11: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1d", 12, 1 },  /* OT12: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1e", 13, 1 },  /* OT13: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x1f", 14, 1 },  /* OT14: Port x configuration bits (y =
              0..15) */
   { "\x3d\x47\x20", 15, 1 },  /* OT15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOH_OSPEEDR_fields[] = {
   { "\x3d\x34\x05\x14\x44\x9b", 0, 2 },  /* OSPEEDR0: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c", 2, 2 },  /* OSPEEDR1: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9d", 4, 2 },  /* OSPEEDR2: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9e", 6, 2 },  /* OSPEEDR3: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9f", 8, 2 },  /* OSPEEDR4: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa0", 10, 2 },  /* OSPEEDR5: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa1", 12, 2 },  /* OSPEEDR6: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa2", 14, 2 },  /* OSPEEDR7: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa3", 16, 2 },  /* OSPEEDR8: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\xa4", 18, 2 },  /* OSPEEDR9: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x6c", 20, 2 },  /* OSPEEDR10: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x70", 22, 2 },  /* OSPEEDR11: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x74", 24, 2 },  /* OSPEEDR12: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x78", 26, 2 },  /* OSPEEDR13: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x7c", 28, 2 },  /* OSPEEDR14: Port x configuration bits (y =
              0..15) */
   { "\x3d\x34\x05\x14\x44\x9c\x80", 30, 2 },  /* OSPEEDR15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOH_PUPDR_fields[] = {
   { "\x41\x54\x04\x49\xb0", 0, 2 },  /* PUPDR0: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc0", 2, 2 },  /* PUPDR1: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xd0", 4, 2 },  /* PUPDR2: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xe0", 6, 2 },  /* PUPDR3: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xf0", 8, 2 },  /* PUPDR4: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x00", 10, 2 },  /* PUPDR5: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x10", 12, 2 },  /* PUPDR6: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x20", 14, 2 },  /* PUPDR7: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x30", 16, 2 },  /* PUPDR8: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x4a\x40", 18, 2 },  /* PUPDR9: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc6\xc0", 20, 2 },  /* PUPDR10: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x00", 22, 2 },  /* PUPDR11: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x40", 24, 2 },  /* PUPDR12: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\x80", 26, 2 },  /* PUPDR13: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc7\xc0", 28, 2 },  /* PUPDR14: Port x configuration bits (y =
              0..15) */
   { "\x41\x54\x04\x49\xc8\x00", 30, 2 },  /* PUPDR15: Port x configuration bits (y =
              0..15) */
};

const Field_t GPIOH_IDR_fields[] = {
   { "\x24\x44\x9b", 0, 1 },  /* IDR0: Port input data (y =
              0..15) */
   { "\x24\x44\x9c", 1, 1 },  /* IDR1: Port input data (y =
              0..15) */
   { "\x24\x44\x9d", 2, 1 },  /* IDR2: Port input data (y =
              0..15) */
   { "\x24\x44\x9e", 3, 1 },  /* IDR3: Port input data (y =
              0..15) */
   { "\x24\x44\x9f", 4, 1 },  /* IDR4: Port input data (y =
              0..15) */
   { "\x24\x44\xa0", 5, 1 },  /* IDR5: Port input data (y =
              0..15) */
   { "\x24\x44\xa1", 6, 1 },  /* IDR6: Port input data (y =
              0..15) */
   { "\x24\x44\xa2", 7, 1 },  /* IDR7: Port input data (y =
              0..15) */
   { "\x24\x44\xa3", 8, 1 },  /* IDR8: Port input data (y =
              0..15) */
   { "\x24\x44\xa4", 9, 1 },  /* IDR9: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x6c", 10, 1 },  /* IDR10: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x70", 11, 1 },  /* IDR11: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x74", 12, 1 },  /* IDR12: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x78", 13, 1 },  /* IDR13: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x7c", 14, 1 },  /* IDR14: Port input data (y =
              0..15) */
   { "\x24\x44\x9c\x80", 15, 1 },  /* IDR15: Port input data (y =
              0..15) */
};

const Field_t GPIOH_ODR_fields[] = {
   { "\x3c\x44\x9b", 0, 1 },  /* ODR0: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c", 1, 1 },  /* ODR1: Port output data (y =
              0..15) */
   { "\x3c\x44\x9d", 2, 1 },  /* ODR2: Port output data (y =
              0..15) */
   { "\x3c\x44\x9e", 3, 1 },  /* ODR3: Port output data (y =
              0..15) */
   { "\x3c\x44\x9f", 4, 1 },  /* ODR4: Port output data (y =
              0..15) */
   { "\x3c\x44\xa0", 5, 1 },  /* ODR5: Port output data (y =
              0..15) */
   { "\x3c\x44\xa1", 6, 1 },  /* ODR6: Port output data (y =
              0..15) */
   { "\x3c\x44\xa2", 7, 1 },  /* ODR7: Port output data (y =
              0..15) */
   { "\x3c\x44\xa3", 8, 1 },  /* ODR8: Port output data (y =
              0..15) */
   { "\x3c\x44\xa4", 9, 1 },  /* ODR9: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x6c", 10, 1 },  /* ODR10: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x70", 11, 1 },  /* ODR11: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x74", 12, 1 },  /* ODR12: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x78", 13, 1 },  /* ODR13: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x7c", 14, 1 },  /* ODR14: Port output data (y =
              0..15) */
   { "\x3c\x44\x9c\x80", 15, 1 },  /* ODR15: Port output data (y =
              0..15) */
};

const Field_t GPIOH_BSRR_fields[] = {
   { "\x09\x36\xc0", 0, 1 },  /* BS0: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x00", 1, 1 },  /* BS1: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x40", 2, 1 },  /* BS2: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x80", 3, 1 },  /* BS3: Port x set bit y (y=
              0..15) */
   { "\x09\x37\xc0", 4, 1 },  /* BS4: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x00", 5, 1 },  /* BS5: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x40", 6, 1 },  /* BS6: Port x set bit y (y=
              0..15) */
   { "\x09\x38\x80", 7, 1 },  /* BS7: Port x set bit y (y=
              0..15) */
   { "\x09\x38\xc0", 8, 1 },  /* BS8: Port x set bit y (y=
              0..15) */
   { "\x09\x39\x00", 9, 1 },  /* BS9: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1b", 10, 1 },  /* BS10: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1c", 11, 1 },  /* BS11: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1d", 12, 1 },  /* BS12: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1e", 13, 1 },  /* BS13: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x1f", 14, 1 },  /* BS14: Port x set bit y (y=
              0..15) */
   { "\x09\x37\x20", 15, 1 },  /* BS15: Port x set bit y (y=
              0..15) */
   { "\x09\x26\xc0", 16, 1 },  /* BR0: Port x set bit y (y=
              0..15) */
   { "\x09\x27\x00", 17, 1 },  /* BR1: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x40", 18, 1 },  /* BR2: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x80", 19, 1 },  /* BR3: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\xc0", 20, 1 },  /* BR4: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x00", 21, 1 },  /* BR5: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x40", 22, 1 },  /* BR6: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\x80", 23, 1 },  /* BR7: Port x reset bit y (y =
              0..15) */
   { "\x09\x28\xc0", 24, 1 },  /* BR8: Port x reset bit y (y =
              0..15) */
   { "\x09\x29\x00", 25, 1 },  /* BR9: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1b", 26, 1 },  /* BR10: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1c", 27, 1 },  /* BR11: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1d", 28, 1 },  /* BR12: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1e", 29, 1 },  /* BR13: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x1f", 30, 1 },  /* BR14: Port x reset bit y (y =
              0..15) */
   { "\x09\x27\x20", 31, 1 },  /* BR15: Port x reset bit y (y =
              0..15) */
};

const Field_t GPIOH_LCKR_fields[] = {
   { "\x30\x32\xdb", 0, 1 },  /* LCK0: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc", 1, 1 },  /* LCK1: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdd", 2, 1 },  /* LCK2: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xde", 3, 1 },  /* LCK3: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdf", 4, 1 },  /* LCK4: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe0", 5, 1 },  /* LCK5: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe1", 6, 1 },  /* LCK6: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe2", 7, 1 },  /* LCK7: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe3", 8, 1 },  /* LCK8: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xe4", 9, 1 },  /* LCK9: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x6c", 10, 1 },  /* LCK10: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x70", 11, 1 },  /* LCK11: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x74", 12, 1 },  /* LCK12: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x78", 13, 1 },  /* LCK13: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x7c", 14, 1 },  /* LCK14: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xdc\x80", 15, 1 },  /* LCK15: Port x lock bit y (y=
              0..15) */
   { "\x30\x32\xcb", 16, 1 },  /* LCKK: Port x lock bit y (y=
              0..15) */
};

const Field_t GPIOH_AFRL_fields[] = {
   { "\x04\x64\x8c\x6c", 0, 4 },  /* AFRL0: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x70", 4, 4 },  /* AFRL1: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x74", 8, 4 },  /* AFRL2: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x78", 12, 4 },  /* AFRL3: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x7c", 16, 4 },  /* AFRL4: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x80", 20, 4 },  /* AFRL5: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x84", 24, 4 },  /* AFRL6: Alternate function selection for port x
              bit y (y = 0..7) */
   { "\x04\x64\x8c\x88", 28, 4 },  /* AFRL7: Alternate function selection for port x
              bit y (y = 0..7) */
};

const Field_t GPIOH_AFRH_fields[] = {
   { "\x04\x64\x88\x8c", 0, 4 },  /* AFRH8: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x90", 4, 4 },  /* AFRH9: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xb0", 8, 4 },  /* AFRH10: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xc0", 12, 4 },  /* AFRH11: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xd0", 16, 4 },  /* AFRH12: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xe0", 20, 4 },  /* AFRH13: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x71\xf0", 24, 4 },  /* AFRH14: Alternate function selection for port x
              bit y (y = 8..15) */
   { "\x04\x64\x88\x72\x00", 28, 4 },  /* AFRH15: Alternate function selection for port x
              bit y (y = 8..15) */
};

const Register_t GPIOH_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOH_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOH_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOH_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed
          register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOH_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down
          register */
   {"\x24\x44\x80", 16, 32, 0, GPIOH_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOH_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOH_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset
          register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOH_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock
          register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOH_AFRL_fields, 8}, /* AFRL: GPIO alternate function low
          register */
   {"\x04\x64\x88", 36, 32, 0, GPIOH_AFRH_fields, 8}, /* AFRH: GPIO alternate function high
          register */
};

const Field_t CRC_DR_fields[] = {
   { "\x11\x20", 0, 32 },  /* DR: Data Register */
};

const Field_t CRC_IDR_fields[] = {
   { "\x24\x44\x80", 0, 8 },  /* IDR: Independent Data register */
};

const Field_t CRC_CR_fields[] = {
   { "\x0d\x20", 0, 1 },  /* CR: Control regidter */
};

const Register_t CRC_registers[] = {
   {"\x11\x20", 0, 32, 0, CRC_DR_fields, 1}, /* DR: Data register */
   {"\x24\x44\x80", 4, 32, 0, CRC_IDR_fields, 1}, /* IDR: Independent Data register */
   {"\x0d\x20", 8, 32, 0, CRC_CR_fields, 1}, /* CR: Control register */
};

const Field_t RCC_CR_fields[] = {
   { "\x21\x32\x4f\x38", 0, 1 },  /* HSION: Internal high-speed clock
              enable */
   { "\x21\x32\x52\x11\x90", 1, 1 },  /* HSIRDY: Internal high-speed clock ready
              flag */
   { "\x21\x32\x54\x48\x93\x40", 3, 5 },  /* HSITRIM: Internal high-speed clock
              trimming */
   { "\x21\x32\x43\x04\xc0", 8, 8 },  /* HSICAL: Internal high-speed clock
              calibration */
   { "\x21\x31\x4f\x38", 16, 1 },  /* HSEON: HSE clock enable */
   { "\x21\x31\x52\x11\x90", 17, 1 },  /* HSERDY: HSE clock ready flag */
   { "\x21\x31\x42\x65\x00", 18, 1 },  /* HSEBYP: HSE clock bypass */
   { "\x0d\x34\xcf\x38", 19, 1 },  /* CSSON: Clock security system
              enable */
   { "\x40\xc3\x0f\x38", 24, 1 },  /* PLLON: Main PLL (PLL) enable */
   { "\x40\xc3\x12\x11\x90", 25, 1 },  /* PLLRDY: Main PLL (PLL) clock ready
              flag */
   { "\x40\xc3\x09\x75\x33\xce", 26, 1 },  /* PLLI2SON: PLLI2S enable */
   { "\x40\xc3\x09\x75\x34\x84\x64", 27, 1 },  /* PLLI2SRDY: PLLI2S clock ready flag */
};

const Field_t RCC_PLLCFGR_fields[] = {
   { "\x40\xc3\x0d\x6c", 0, 1 },  /* PLLM0: Division factor for the main PLL (PLL)
              and audio PLL (PLLI2S) input clock */
   { "\x40\xc3\x0d\x70", 1, 1 },  /* PLLM1: Division factor for the main PLL (PLL)
              and audio PLL (PLLI2S) input clock */
   { "\x40\xc3\x0d\x74", 2, 1 },  /* PLLM2: Division factor for the main PLL (PLL)
              and audio PLL (PLLI2S) input clock */
   { "\x40\xc3\x0d\x78", 3, 1 },  /* PLLM3: Division factor for the main PLL (PLL)
              and audio PLL (PLLI2S) input clock */
   { "\x40\xc3\x0d\x7c", 4, 1 },  /* PLLM4: Division factor for the main PLL (PLL)
              and audio PLL (PLLI2S) input clock */
   { "\x40\xc3\x0d\x80", 5, 1 },  /* PLLM5: Division factor for the main PLL (PLL)
              and audio PLL (PLLI2S) input clock */
   { "\x40\xc3\x0e\x6c", 6, 1 },  /* PLLN0: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x70", 7, 1 },  /* PLLN1: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x74", 8, 1 },  /* PLLN2: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x78", 9, 1 },  /* PLLN3: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x7c", 10, 1 },  /* PLLN4: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x80", 11, 1 },  /* PLLN5: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x84", 12, 1 },  /* PLLN6: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x88", 13, 1 },  /* PLLN7: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x0e\x8c", 14, 1 },  /* PLLN8: Main PLL (PLL) multiplication factor for
              VCO */
   { "\x40\xc3\x10\x6c", 16, 1 },  /* PLLP0: Main PLL (PLL) division factor for main
              system clock */
   { "\x40\xc3\x10\x70", 17, 1 },  /* PLLP1: Main PLL (PLL) division factor for main
              system clock */
   { "\x40\xc3\x13\x48\x30", 22, 1 },  /* PLLSRC: Main PLL(PLL) and audio PLL (PLLI2S)
              entry clock source */
   { "\x40\xc3\x11\x6c", 24, 1 },  /* PLLQ0: Main PLL (PLL) division factor for USB
              OTG FS, SDIO and random number generator
              clocks */
   { "\x40\xc3\x11\x70", 25, 1 },  /* PLLQ1: Main PLL (PLL) division factor for USB
              OTG FS, SDIO and random number generator
              clocks */
   { "\x40\xc3\x11\x74", 26, 1 },  /* PLLQ2: Main PLL (PLL) division factor for USB
              OTG FS, SDIO and random number generator
              clocks */
   { "\x40\xc3\x11\x78", 27, 1 },  /* PLLQ3: Main PLL (PLL) division factor for USB
              OTG FS, SDIO and random number generator
              clocks */
};

const Field_t RCC_CFGR_fields[] = {
   { "\x4d\x76\xc0", 0, 1 },  /* SW0: System clock switch */
   { "\x4d\x77\x00", 1, 1 },  /* SW1: System clock switch */
   { "\x4d\x74\xdb", 2, 1 },  /* SWS0: System clock switch status */
   { "\x4d\x74\xdc", 3, 1 },  /* SWS1: System clock switch status */
   { "\x21\x04\x85", 4, 4 },  /* HPRE: AHB prescaler */
   { "\x41\x04\x85\x70", 10, 3 },  /* PPRE1: APB Low speed prescaler
              (APB1) */
   { "\x41\x04\x85\x74", 13, 3 },  /* PPRE2: APB high-speed prescaler
              (APB2) */
   { "\x49\x40\xd0\x48\x50", 16, 5 },  /* RTCPRE: HSE division factor for RTC
              clock */
   { "\x34\x33\xdc", 21, 2 },  /* MCO1: Microcontroller clock output
              1 */
   { "\x25\xd4\xd3\x48\x30", 23, 1 },  /* I2SSRC: I2S clock selection */
   { "\x34\x33\xdc\x41\x21\x40", 24, 3 },  /* MCO1PRE: MCO1 prescaler */
   { "\x34\x33\xdd\x41\x21\x40", 27, 3 },  /* MCO2PRE: MCO2 prescaler */
   { "\x34\x33\xdd", 30, 2 },  /* MCO2: Microcontroller clock output
              2 */
};

const Field_t RCC_CIR_fields[] = {
   { "\x31\x32\x52\x11\x91\x80", 0, 1 },  /* LSIRDYF: LSI ready interrupt flag */
   { "\x31\x31\x52\x11\x91\x80", 1, 1 },  /* LSERDYF: LSE ready interrupt flag */
   { "\x21\x32\x52\x11\x91\x80", 2, 1 },  /* HSIRDYF: HSI ready interrupt flag */
   { "\x21\x31\x52\x11\x91\x80", 3, 1 },  /* HSERDYF: HSE ready interrupt flag */
   { "\x40\xc3\x12\x11\x91\x80", 4, 1 },  /* PLLRDYF: Main PLL (PLL) ready interrupt
              flag */
   { "\x40\xc3\x09\x75\x34\x84\x64\x60", 5, 1 },  /* PLLI2SRDYF: PLLI2S ready interrupt
              flag */
   { "\x0d\x34\xc6", 7, 1 },  /* CSSF: Clock security system interrupt
              flag */
   { "\x31\x32\x52\x11\x92\x45", 8, 1 },  /* LSIRDYIE: LSI ready interrupt enable */
   { "\x31\x31\x52\x11\x92\x45", 9, 1 },  /* LSERDYIE: LSE ready interrupt enable */
   { "\x21\x32\x52\x11\x92\x45", 10, 1 },  /* HSIRDYIE: HSI ready interrupt enable */
   { "\x21\x31\x52\x11\x92\x45", 11, 1 },  /* HSERDYIE: HSE ready interrupt enable */
   { "\x40\xc3\x12\x11\x92\x45", 12, 1 },  /* PLLRDYIE: Main PLL (PLL) ready interrupt
              enable */
   { "\x40\xc3\x09\x75\x34\x84\x64\x91\x40", 13, 1 },  /* PLLI2SRDYIE: PLLI2S ready interrupt
              enable */
   { "\x31\x32\x52\x11\x90\xc0", 16, 1 },  /* LSIRDYC: LSI ready interrupt clear */
   { "\x31\x31\x52\x11\x90\xc0", 17, 1 },  /* LSERDYC: LSE ready interrupt clear */
   { "\x21\x32\x52\x11\x90\xc0", 18, 1 },  /* HSIRDYC: HSI ready interrupt clear */
   { "\x21\x31\x52\x11\x90\xc0", 19, 1 },  /* HSERDYC: HSE ready interrupt clear */
   { "\x40\xc3\x12\x11\x90\xc0", 20, 1 },  /* PLLRDYC: Main PLL(PLL) ready interrupt
              clear */
   { "\x40\xc3\x09\x75\x34\x84\x64\x30", 21, 1 },  /* PLLI2SRDYC: PLLI2S ready interrupt
              clear */
   { "\x0d\x34\xc3", 23, 1 },  /* CSSC: Clock security system interrupt
              clear */
};

const Field_t RCC_AHB1RSTR_fields[] = {
   { "\x1d\x02\x4f\x05\x24\xd4", 0, 1 },  /* GPIOARST: IO port A reset */
   { "\x1d\x02\x4f\x09\x24\xd4", 1, 1 },  /* GPIOBRST: IO port B reset */
   { "\x1d\x02\x4f\x0d\x24\xd4", 2, 1 },  /* GPIOCRST: IO port C reset */
   { "\x1d\x02\x4f\x11\x24\xd4", 3, 1 },  /* GPIODRST: IO port D reset */
   { "\x1d\x02\x4f\x15\x24\xd4", 4, 1 },  /* GPIOERST: IO port E reset */
   { "\x1d\x02\x4f\x21\x24\xd4", 7, 1 },  /* GPIOHRST: IO port H reset */
   { "\x0d\x20\xd2\x4d\x40", 12, 1 },  /* CRCRST: CRC reset */
   { "\x10\xd0\x5c\x49\x35\x00", 21, 1 },  /* DMA1RST: DMA2 reset */
   { "\x10\xd0\x5d\x49\x35\x00", 22, 1 },  /* DMA2RST: DMA2 reset */
};

const Field_t RCC_AHB2RSTR_fields[] = {
   { "\x3d\x41\xc6\x4d\x24\xd4", 7, 1 },  /* OTGFSRST: USB OTG FS module reset */
};

const Field_t RCC_APB1RSTR_fields[] = {
   { "\x50\x93\x5d\x49\x35\x00", 0, 1 },  /* TIM2RST: TIM2 reset */
   { "\x50\x93\x5e\x49\x35\x00", 1, 1 },  /* TIM3RST: TIM3 reset */
   { "\x50\x93\x5f\x49\x35\x00", 2, 1 },  /* TIM4RST: TIM4 reset */
   { "\x50\x93\x60\x49\x35\x00", 3, 1 },  /* TIM5RST: TIM5 reset */
   { "\x5d\x71\x07\x49\x35\x00", 11, 1 },  /* WWDGRST: Window watchdog reset */
   { "\x4d\x02\x5d\x49\x35\x00", 14, 1 },  /* SPI2RST: SPI 2 reset */
   { "\x4d\x02\x5e\x49\x35\x00", 15, 1 },  /* SPI3RST: SPI 3 reset */
   { "\x54\x14\x94\x75\x24\xd4", 17, 1 },  /* UART2RST: USART 2 reset */
   { "\x25\xd0\xdc\x49\x35\x00", 21, 1 },  /* I2C1RST: I2C 1 reset */
   { "\x25\xd0\xdd\x49\x35\x00", 22, 1 },  /* I2C2RST: I2C 2 reset */
   { "\x25\xd0\xde\x49\x35\x00", 23, 1 },  /* I2C3RST: I2C3 reset */
   { "\x41\x74\x92\x4d\x40", 28, 1 },  /* PWRRST: Power interface reset */
};

const Field_t RCC_APB2RSTR_fields[] = {
   { "\x50\x93\x5c\x49\x35\x00", 0, 1 },  /* TIM1RST: TIM1 reset */
   { "\x55\x30\x52\x51\xc4\x93\x50", 4, 1 },  /* USART1RST: USART1 reset */
   { "\x55\x30\x52\x52\x14\x93\x50", 5, 1 },  /* USART6RST: USART6 reset */
   { "\x04\x40\xd2\x4d\x40", 8, 1 },  /* ADCRST: ADC interface reset (common to all
              ADCs) */
   { "\x4c\x42\x4f\x49\x35\x00", 11, 1 },  /* SDIORST: SDIO reset */
   { "\x4d\x02\x5c\x49\x35\x00", 12, 1 },  /* SPI1RST: SPI 1 reset */
   { "\x4d\x94\xc3\x18\x74\x93\x50", 14, 1 },  /* SYSCFGRST: System configuration controller
              reset */
   { "\x50\x93\x64\x49\x35\x00", 16, 1 },  /* TIM9RST: TIM9 reset */
   { "\x50\x93\x5c\x6d\x24\xd4", 17, 1 },  /* TIM10RST: TIM10 reset */
   { "\x50\x93\x5c\x71\x24\xd4", 18, 1 },  /* TIM11RST: TIM11 reset */
};

const Field_t RCC_AHB1ENR_fields[] = {
   { "\x1d\x02\x4f\x04\x53\x80", 0, 1 },  /* GPIOAEN: IO port A clock enable */
   { "\x1d\x02\x4f\x08\x53\x80", 1, 1 },  /* GPIOBEN: IO port B clock enable */
   { "\x1d\x02\x4f\x0c\x53\x80", 2, 1 },  /* GPIOCEN: IO port C clock enable */
   { "\x1d\x02\x4f\x10\x53\x80", 3, 1 },  /* GPIODEN: IO port D clock enable */
   { "\x1d\x02\x4f\x14\x53\x80", 4, 1 },  /* GPIOEEN: IO port E clock enable */
   { "\x1d\x02\x4f\x20\x53\x80", 7, 1 },  /* GPIOHEN: IO port H clock enable */
   { "\x0d\x20\xc5\x38", 12, 1 },  /* CRCEN: CRC clock enable */
   { "\x10\xd0\x5c\x14\xe0", 21, 1 },  /* DMA1EN: DMA1 clock enable */
   { "\x10\xd0\x5d\x14\xe0", 22, 1 },  /* DMA2EN: DMA2 clock enable */
};

const Field_t RCC_AHB2ENR_fields[] = {
   { "\x3d\x41\xc6\x4c\x53\x80", 7, 1 },  /* OTGFSEN: USB OTG FS clock enable */
};

const Field_t RCC_APB1ENR_fields[] = {
   { "\x50\x93\x5d\x14\xe0", 0, 1 },  /* TIM2EN: TIM2 clock enable */
   { "\x50\x93\x5e\x14\xe0", 1, 1 },  /* TIM3EN: TIM3 clock enable */
   { "\x50\x93\x5f\x14\xe0", 2, 1 },  /* TIM4EN: TIM4 clock enable */
   { "\x50\x93\x60\x14\xe0", 3, 1 },  /* TIM5EN: TIM5 clock enable */
   { "\x5d\x71\x07\x14\xe0", 11, 1 },  /* WWDGEN: Window watchdog clock
              enable */
   { "\x4d\x02\x5d\x14\xe0", 14, 1 },  /* SPI2EN: SPI2 clock enable */
   { "\x4d\x02\x5e\x14\xe0", 15, 1 },  /* SPI3EN: SPI3 clock enable */
   { "\x55\x30\x52\x51\xd1\x4e", 17, 1 },  /* USART2EN: USART 2 clock enable */
   { "\x25\xd0\xdc\x14\xe0", 21, 1 },  /* I2C1EN: I2C1 clock enable */
   { "\x25\xd0\xdd\x14\xe0", 22, 1 },  /* I2C2EN: I2C2 clock enable */
   { "\x25\xd0\xde\x14\xe0", 23, 1 },  /* I2C3EN: I2C3 clock enable */
   { "\x41\x74\x85\x38", 28, 1 },  /* PWREN: Power interface clock
              enable */
};

const Field_t RCC_APB2ENR_fields[] = {
   { "\x50\x93\x5c\x14\xe0", 0, 1 },  /* TIM1EN: TIM1 clock enable */
   { "\x55\x30\x52\x51\xc1\x4e", 4, 1 },  /* USART1EN: USART1 clock enable */
   { "\x55\x30\x52\x52\x11\x4e", 5, 1 },  /* USART6EN: USART6 clock enable */
   { "\x04\x40\xdc\x14\xe0", 8, 1 },  /* ADC1EN: ADC1 clock enable */
   { "\x4c\x42\x4f\x14\xe0", 11, 1 },  /* SDIOEN: SDIO clock enable */
   { "\x4d\x02\x5c\x14\xe0", 12, 1 },  /* SPI1EN: SPI1 clock enable */
   { "\x4d\x02\x5f\x14\xe0", 13, 1 },  /* SPI4EN: SPI4 clock enable */
   { "\x4d\x94\xc3\x18\x71\x4e", 14, 1 },  /* SYSCFGEN: System configuration controller clock
              enable */
   { "\x50\x93\x64\x14\xe0", 16, 1 },  /* TIM9EN: TIM9 clock enable */
   { "\x50\x93\x5c\x6c\x53\x80", 17, 1 },  /* TIM10EN: TIM10 clock enable */
   { "\x50\x93\x5c\x70\x53\x80", 18, 1 },  /* TIM11EN: TIM11 clock enable */
};

const Field_t RCC_AHB1LPENR_fields[] = {
   { "\x1d\x02\x4f\x04\xc4\x05\x38", 0, 1 },  /* GPIOALPEN: IO port A clock enable during sleep
              mode */
   { "\x1d\x02\x4f\x08\xc4\x05\x38", 1, 1 },  /* GPIOBLPEN: IO port B clock enable during Sleep
              mode */
   { "\x1d\x02\x4f\x0c\xc4\x05\x38", 2, 1 },  /* GPIOCLPEN: IO port C clock enable during Sleep
              mode */
   { "\x1d\x02\x4f\x10\xc4\x05\x38", 3, 1 },  /* GPIODLPEN: IO port D clock enable during Sleep
              mode */
   { "\x1d\x02\x4f\x14\xc4\x05\x38", 4, 1 },  /* GPIOELPEN: IO port E clock enable during Sleep
              mode */
   { "\x1d\x02\x4f\x20\xc4\x05\x38", 7, 1 },  /* GPIOHLPEN: IO port H clock enable during Sleep
              mode */
   { "\x0d\x20\xcc\x40\x53\x80", 12, 1 },  /* CRCLPEN: CRC clock enable during Sleep
              mode */
   { "\x18\xc2\x54\x18\xc4\x05\x38", 15, 1 },  /* FLITFLPEN: Flash interface clock enable during
              Sleep mode */
   { "\x4d\x20\x4d\x70\xc4\x05\x38", 16, 1 },  /* SRAM1LPEN: SRAM 1interface clock enable during
              Sleep mode */
   { "\x10\xd0\x5c\x31\x01\x4e", 21, 1 },  /* DMA1LPEN: DMA1 clock enable during Sleep
              mode */
   { "\x10\xd0\x5d\x31\x01\x4e", 22, 1 },  /* DMA2LPEN: DMA2 clock enable during Sleep
              mode */
};

const Field_t RCC_AHB2LPENR_fields[] = {
   { "\x3d\x41\xc6\x4c\xc4\x05\x38", 7, 1 },  /* OTGFSLPEN: USB OTG FS clock enable during Sleep
              mode */
};

const Field_t RCC_APB1LPENR_fields[] = {
   { "\x50\x93\x5d\x31\x01\x4e", 0, 1 },  /* TIM2LPEN: TIM2 clock enable during Sleep
              mode */
   { "\x50\x93\x5e\x31\x01\x4e", 1, 1 },  /* TIM3LPEN: TIM3 clock enable during Sleep
              mode */
   { "\x50\x93\x5f\x31\x01\x4e", 2, 1 },  /* TIM4LPEN: TIM4 clock enable during Sleep
              mode */
   { "\x50\x93\x60\x31\x01\x4e", 3, 1 },  /* TIM5LPEN: TIM5 clock enable during Sleep
              mode */
   { "\x5d\x71\x07\x31\x01\x4e", 11, 1 },  /* WWDGLPEN: Window watchdog clock enable during
              Sleep mode */
   { "\x4d\x02\x5d\x31\x01\x4e", 14, 1 },  /* SPI2LPEN: SPI2 clock enable during Sleep
              mode */
   { "\x4d\x02\x5e\x31\x01\x4e", 15, 1 },  /* SPI3LPEN: SPI3 clock enable during Sleep
              mode */
   { "\x55\x30\x52\x51\xd3\x10\x14\xe0", 17, 1 },  /* USART2LPEN: USART2 clock enable during Sleep
              mode */
   { "\x25\xd0\xdc\x31\x01\x4e", 21, 1 },  /* I2C1LPEN: I2C1 clock enable during Sleep
              mode */
   { "\x25\xd0\xdd\x31\x01\x4e", 22, 1 },  /* I2C2LPEN: I2C2 clock enable during Sleep
              mode */
   { "\x25\xd0\xde\x31\x01\x4e", 23, 1 },  /* I2C3LPEN: I2C3 clock enable during Sleep
              mode */
   { "\x41\x74\x8c\x40\x53\x80", 28, 1 },  /* PWRLPEN: Power interface clock enable during
              Sleep mode */
};

const Field_t RCC_APB2LPENR_fields[] = {
   { "\x50\x93\x5c\x31\x01\x4e", 0, 1 },  /* TIM1LPEN: TIM1 clock enable during Sleep
              mode */
   { "\x55\x30\x52\x51\xc3\x10\x14\xe0", 4, 1 },  /* USART1LPEN: USART1 clock enable during Sleep
              mode */
   { "\x55\x30\x52\x52\x13\x10\x14\xe0", 5, 1 },  /* USART6LPEN: USART6 clock enable during Sleep
              mode */
   { "\x04\x40\xdc\x31\x01\x4e", 8, 1 },  /* ADC1LPEN: ADC1 clock enable during Sleep
              mode */
   { "\x4c\x42\x4f\x31\x01\x4e", 11, 1 },  /* SDIOLPEN: SDIO clock enable during Sleep
              mode */
   { "\x4d\x02\x5c\x31\x01\x4e", 12, 1 },  /* SPI1LPEN: SPI 1 clock enable during Sleep
              mode */
   { "\x4d\x02\x5f\x31\x01\x4e", 13, 1 },  /* SPI4LPEN: SPI4 clock enable during Sleep
              mode */
   { "\x4d\x94\xc3\x18\x73\x10\x14\xe0", 14, 1 },  /* SYSCFGLPEN: System configuration controller clock
              enable during Sleep mode */
   { "\x50\x93\x64\x31\x01\x4e", 16, 1 },  /* TIM9LPEN: TIM9 clock enable during sleep
              mode */
   { "\x50\x93\x5c\x6c\xc4\x05\x38", 17, 1 },  /* TIM10LPEN: TIM10 clock enable during Sleep
              mode */
   { "\x50\x93\x5c\x70\xc4\x05\x38", 18, 1 },  /* TIM11LPEN: TIM11 clock enable during Sleep
              mode */
};

const Field_t RCC_BDCR_fields[] = {
   { "\x31\x31\x4f\x38", 0, 1 },  /* LSEON: External low-speed oscillator
              enable */
   { "\x31\x31\x52\x11\x90", 1, 1 },  /* LSERDY: External low-speed oscillator
              ready */
   { "\x31\x31\x42\x65\x00", 2, 1 },  /* LSEBYP: External low-speed oscillator
              bypass */
   { "\x49\x40\xd3\x14\xc6\xc0", 8, 1 },  /* RTCSEL0: RTC clock source selection */
   { "\x49\x40\xd3\x14\xc7\x00", 9, 1 },  /* RTCSEL1: RTC clock source selection */
   { "\x49\x40\xc5\x38", 15, 1 },  /* RTCEN: RTC clock enable */
   { "\x08\x44\x93\x50", 16, 1 },  /* BDRST: Backup domain software
              reset */
};

const Field_t RCC_CSR_fields[] = {
   { "\x31\x32\x4f\x38", 0, 1 },  /* LSION: Internal low-speed oscillator
              enable */
   { "\x31\x32\x52\x11\x90", 1, 1 },  /* LSIRDY: Internal low-speed oscillator
              ready */
   { "\x48\xd5\x86", 24, 1 },  /* RMVF: Remove reset flag */
   { "\x08\xf4\x92\x4d\x41\x80", 25, 1 },  /* BORRSTF: BOR reset flag */
   { "\x40\x11\x12\x4d\x41\x80", 26, 1 },  /* PADRSTF: PIN reset flag */
   { "\x40\xf4\x92\x4d\x41\x80", 27, 1 },  /* PORRSTF: POR/PDR reset flag */
   { "\x4c\x65\x12\x4d\x41\x80", 28, 1 },  /* SFTRSTF: Software reset flag */
   { "\x5c\x41\xd2\x4d\x41\x80", 29, 1 },  /* WDGRSTF: Independent watchdog reset
              flag */
   { "\x5d\x71\x07\x49\x35\x06", 30, 1 },  /* WWDGRSTF: Window watchdog reset flag */
   { "\x31\x05\xd2\x49\x35\x06", 31, 1 },  /* LPWRRSTF: Low-power reset flag */
};

const Field_t RCC_SSCGR_fields[] = {
   { "\x34\xf1\x10\x15\x20", 0, 13 },  /* MODPER: Modulation period */
   { "\x24\xe0\xd3\x50\x54\x00", 13, 15 },  /* INCSTEP: Incrementation step */
   { "\x4d\x04\x85\x04\x44\xc5\x30", 30, 1 },  /* SPREADSEL: Spread Select */
   { "\x4d\x30\xc7\x14\xe0", 31, 1 },  /* SSCGEN: Spread spectrum modulation
              enable */
};

const Field_t RCC_PLLI2SCFGR_fields[] = {
   { "\x40\xc3\x09\x75\x33\x98", 6, 9 },  /* PLLI2SNx: PLLI2S multiplication factor for
              VCO */
   { "\x40\xc3\x09\x75\x34\x98", 28, 3 },  /* PLLI2SRx: PLLI2S division factor for I2S
              clocks */
};

const Register_t RCC_registers[] = {
   {"\x0d\x20", 0, 32, 0, RCC_CR_fields, 12}, /* CR: clock control register */
   {"\x40\xc3\x03\x18\x74\x80", 4, 32, 0, RCC_PLLCFGR_fields, 22}, /* PLLCFGR: PLL configuration register */
   {"\x0c\x61\xd2", 8, 32, 0, RCC_CFGR_fields, 13}, /* CFGR: clock configuration register */
   {"\x0c\x94\x80", 12, 32, 0, RCC_CIR_fields, 20}, /* CIR: clock interrupt register */
   {"\x04\x80\x9c\x49\x35\x12", 16, 32, 0, RCC_AHB1RSTR_fields, 9}, /* AHB1RSTR: AHB1 peripheral reset register */
   {"\x04\x80\x9d\x49\x35\x12", 20, 32, 0, RCC_AHB2RSTR_fields, 1}, /* AHB2RSTR: AHB2 peripheral reset register */
   {"\x05\x00\x9c\x49\x35\x12", 32, 32, 0, RCC_APB1RSTR_fields, 12}, /* APB1RSTR: APB1 peripheral reset register */
   {"\x05\x00\x9d\x49\x35\x12", 36, 32, 0, RCC_APB2RSTR_fields, 10}, /* APB2RSTR: APB2 peripheral reset register */
   {"\x04\x80\x9c\x14\xe4\x80", 48, 32, 0, RCC_AHB1ENR_fields, 9}, /* AHB1ENR: AHB1 peripheral clock register */
   {"\x04\x80\x9d\x14\xe4\x80", 52, 32, 0, RCC_AHB2ENR_fields, 1}, /* AHB2ENR: AHB2 peripheral clock enable
          register */
   {"\x05\x00\x9c\x14\xe4\x80", 64, 32, 0, RCC_APB1ENR_fields, 12}, /* APB1ENR: APB1 peripheral clock enable
          register */
   {"\x05\x00\x9d\x14\xe4\x80", 68, 32, 0, RCC_APB2ENR_fields, 11}, /* APB2ENR: APB2 peripheral clock enable
          register */
   {"\x04\x80\x9c\x31\x01\x4e\x48", 80, 32, 0, RCC_AHB1LPENR_fields, 11}, /* AHB1LPENR: AHB1 peripheral clock enable in low power
          mode register */
   {"\x04\x80\x9d\x31\x01\x4e\x48", 84, 32, 0, RCC_AHB2LPENR_fields, 1}, /* AHB2LPENR: AHB2 peripheral clock enable in low power
          mode register */
   {"\x05\x00\x9c\x31\x01\x4e\x48", 96, 32, 0, RCC_APB1LPENR_fields, 12}, /* APB1LPENR: APB1 peripheral clock enable in low power
          mode register */
   {"\x05\x00\x9d\x31\x01\x4e\x48", 100, 32, 0, RCC_APB2LPENR_fields, 11}, /* APB2LPENR: APB2 peripheral clock enabled in low power
          mode register */
   {"\x08\x40\xd2", 112, 32, 0, RCC_BDCR_fields, 7}, /* BDCR: Backup domain control register */
   {"\x0d\x34\x80", 116, 32, 0, RCC_CSR_fields, 10}, /* CSR: clock control & status
          register */
   {"\x4d\x30\xc7\x48", 128, 32, 0, RCC_SSCGR_fields, 4}, /* SSCGR: spread spectrum clock generation
          register */
   {"\x40\xc3\x09\x75\x30\xc6\x1d\x20", 132, 32, 0, RCC_PLLI2SCFGR_fields, 2}, /* PLLI2SCFGR: PLLI2S configuration register */
};

const Field_t FLASH_ACR_fields[] = {
   { "\x30\x15\x05\x38\x36\x40", 0, 3 },  /* LATENCY: Latency */
   { "\x41\x21\x94\x14\xe0", 8, 1 },  /* PRFTEN: Prefetch enable */
   { "\x24\x31\x4e", 9, 1 },  /* ICEN: Instruction cache enable */
   { "\x10\x31\x4e", 10, 1 },  /* DCEN: Data cache enable */
   { "\x24\x34\x93\x50", 11, 1 },  /* ICRST: Instruction cache reset */
   { "\x10\x34\x93\x50", 12, 1 },  /* DCRST: Data cache reset */
};

const Field_t FLASH_KEYR_fields[] = {
   { "\x2c\x56\x40", 0, 32 },  /* KEY: FPEC key */
};

const Field_t FLASH_OPTKEYR_fields[] = {
   { "\x3d\x05\x0b\x15\x90", 0, 32 },  /* OPTKEY: Option byte key */
};

const Field_t FLASH_SR_fields[] = {
   { "\x14\xf4\x00", 0, 1 },  /* EOP: End of operation */
   { "\x3d\x01\x52\x48", 1, 1 },  /* OPERR: Operation error */
   { "\x5d\x24\x05\x49\x20", 4, 1 },  /* WRPERR: Write protection error */
   { "\x40\x70\x45\x49\x20", 5, 1 },  /* PGAERR: Programming alignment
              error */
   { "\x40\x74\x05\x49\x20", 6, 1 },  /* PGPERR: Programming parallelism
              error */
   { "\x40\x74\xc5\x49\x20", 7, 1 },  /* PGSERR: Programming sequence error */
   { "\x09\x36\x40", 16, 1 },  /* BSY: Busy */
};

const Field_t FLASH_CR_fields[] = {
   { "\x40\x70", 0, 1 },  /* PG: Programming */
   { "\x4c\x54\x80", 1, 1 },  /* SER: Sector Erase */
   { "\x34\x54\x80", 2, 1 },  /* MER: Mass Erase */
   { "\x4c\xe0\x80", 3, 4 },  /* SNB: Sector number */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Program size */
   { "\x4d\x44\x94", 16, 1 },  /* STRT: Start */
   { "\x14\xf4\x09\x14", 24, 1 },  /* EOPIE: End of operation interrupt
              enable */
   { "\x15\x24\x89\x14", 25, 1 },  /* ERRIE: Error interrupt enable */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: Lock */
};

const Field_t FLASH_OPTCR_fields[] = {
   { "\x3d\x05\x0c\x3c\x32\xc0", 0, 1 },  /* OPTLOCK: Option lock */
   { "\x3d\x05\x13\x51\x25\x00", 1, 1 },  /* OPTSTRT: Option start */
   { "\x08\xf4\xa5\x30\x55\x80", 2, 2 },  /* BOR_LEV: BOR reset Level */
   { "\x5c\x41\xe5\x4d\x70", 5, 1 },  /* WDG_SW: WDG_SW User option bytes */
   { "\x39\x24\xd4\x95\x35\x0f\x40", 6, 1 },  /* nRST_STOP: nRST_STOP User option
              bytes */
   { "\x39\x24\xd4\x95\x35\x04\x09\x90", 7, 1 },  /* nRST_STDBY: nRST_STDBY User option
              bytes */
   { "\x48\x44\x00", 8, 8 },  /* RDP: Read protect */
   { "\x39\x74\x90", 16, 12 },  /* nWRP: Not write protect */
};

const Register_t FLASH_registers[] = {
   {"\x04\x34\x80", 0, 32, 0, FLASH_ACR_fields, 6}, /* ACR: Flash access control register */
   {"\x2c\x56\x52", 4, 32, 0, FLASH_KEYR_fields, 1}, /* KEYR: Flash key register */
   {"\x3d\x05\x0b\x15\x94\x80", 8, 32, 0, FLASH_OPTKEYR_fields, 1}, /* OPTKEYR: Flash option key register */
   {"\x4d\x20", 12, 32, 0, FLASH_SR_fields, 7}, /* SR: Status register */
   {"\x0d\x20", 16, 32, 0, FLASH_CR_fields, 9}, /* CR: Control register */
   {"\x3d\x05\x03\x48", 20, 32, 0, FLASH_OPTCR_fields, 8}, /* OPTCR: Flash option control register */
};

const Field_t DMA2_LISR_fields[] = {
   { "\x18\x52\x46\x6c", 0, 1 },  /* FEIF0: Stream x FIFO error interrupt flag
              (x=3..0) */
   { "\x10\xd1\x49\x19\xb0", 2, 1 },  /* DMEIF0: Stream x direct mode error interrupt
              flag (x=3..0) */
   { "\x50\x52\x46\x6c", 3, 1 },  /* TEIF0: Stream x transfer error interrupt flag
              (x=3..0) */
   { "\x21\x42\x46\x6c", 4, 1 },  /* HTIF0: Stream x half transfer interrupt flag
              (x=3..0) */
   { "\x50\x32\x46\x6c", 5, 1 },  /* TCIF0: Stream x transfer complete interrupt
              flag (x = 3..0) */
   { "\x18\x52\x46\x70", 6, 1 },  /* FEIF1: Stream x FIFO error interrupt flag
              (x=3..0) */
   { "\x10\xd1\x49\x19\xc0", 8, 1 },  /* DMEIF1: Stream x direct mode error interrupt
              flag (x=3..0) */
   { "\x50\x52\x46\x70", 9, 1 },  /* TEIF1: Stream x transfer error interrupt flag
              (x=3..0) */
   { "\x21\x42\x46\x70", 10, 1 },  /* HTIF1: Stream x half transfer interrupt flag
              (x=3..0) */
   { "\x50\x32\x46\x70", 11, 1 },  /* TCIF1: Stream x transfer complete interrupt
              flag (x = 3..0) */
   { "\x18\x52\x46\x74", 16, 1 },  /* FEIF2: Stream x FIFO error interrupt flag
              (x=3..0) */
   { "\x10\xd1\x49\x19\xd0", 18, 1 },  /* DMEIF2: Stream x direct mode error interrupt
              flag (x=3..0) */
   { "\x50\x52\x46\x74", 19, 1 },  /* TEIF2: Stream x transfer error interrupt flag
              (x=3..0) */
   { "\x21\x42\x46\x74", 20, 1 },  /* HTIF2: Stream x half transfer interrupt flag
              (x=3..0) */
   { "\x50\x32\x46\x74", 21, 1 },  /* TCIF2: Stream x transfer complete interrupt
              flag (x = 3..0) */
   { "\x18\x52\x46\x78", 22, 1 },  /* FEIF3: Stream x FIFO error interrupt flag
              (x=3..0) */
   { "\x10\xd1\x49\x19\xe0", 24, 1 },  /* DMEIF3: Stream x direct mode error interrupt
              flag (x=3..0) */
   { "\x50\x52\x46\x78", 25, 1 },  /* TEIF3: Stream x transfer error interrupt flag
              (x=3..0) */
   { "\x21\x42\x46\x78", 26, 1 },  /* HTIF3: Stream x half transfer interrupt flag
              (x=3..0) */
   { "\x50\x32\x46\x78", 27, 1 },  /* TCIF3: Stream x transfer complete interrupt
              flag (x = 3..0) */
};

const Field_t DMA2_HISR_fields[] = {
   { "\x18\x52\x46\x7c", 0, 1 },  /* FEIF4: Stream x FIFO error interrupt flag
              (x=7..4) */
   { "\x10\xd1\x49\x19\xf0", 2, 1 },  /* DMEIF4: Stream x direct mode error interrupt
              flag (x=7..4) */
   { "\x50\x52\x46\x7c", 3, 1 },  /* TEIF4: Stream x transfer error interrupt flag
              (x=7..4) */
   { "\x21\x42\x46\x7c", 4, 1 },  /* HTIF4: Stream x half transfer interrupt flag
              (x=7..4) */
   { "\x50\x32\x46\x7c", 5, 1 },  /* TCIF4: Stream x transfer complete interrupt
              flag (x=7..4) */
   { "\x18\x52\x46\x80", 6, 1 },  /* FEIF5: Stream x FIFO error interrupt flag
              (x=7..4) */
   { "\x10\xd1\x49\x1a\x00", 8, 1 },  /* DMEIF5: Stream x direct mode error interrupt
              flag (x=7..4) */
   { "\x50\x52\x46\x80", 9, 1 },  /* TEIF5: Stream x transfer error interrupt flag
              (x=7..4) */
   { "\x21\x42\x46\x80", 10, 1 },  /* HTIF5: Stream x half transfer interrupt flag
              (x=7..4) */
   { "\x50\x32\x46\x80", 11, 1 },  /* TCIF5: Stream x transfer complete interrupt
              flag (x=7..4) */
   { "\x18\x52\x46\x84", 16, 1 },  /* FEIF6: Stream x FIFO error interrupt flag
              (x=7..4) */
   { "\x10\xd1\x49\x1a\x10", 18, 1 },  /* DMEIF6: Stream x direct mode error interrupt
              flag (x=7..4) */
   { "\x50\x52\x46\x84", 19, 1 },  /* TEIF6: Stream x transfer error interrupt flag
              (x=7..4) */
   { "\x21\x42\x46\x84", 20, 1 },  /* HTIF6: Stream x half transfer interrupt flag
              (x=7..4) */
   { "\x50\x32\x46\x84", 21, 1 },  /* TCIF6: Stream x transfer complete interrupt
              flag (x=7..4) */
   { "\x18\x52\x46\x88", 22, 1 },  /* FEIF7: Stream x FIFO error interrupt flag
              (x=7..4) */
   { "\x10\xd1\x49\x1a\x20", 24, 1 },  /* DMEIF7: Stream x direct mode error interrupt
              flag (x=7..4) */
   { "\x50\x52\x46\x88", 25, 1 },  /* TEIF7: Stream x transfer error interrupt flag
              (x=7..4) */
   { "\x21\x42\x46\x88", 26, 1 },  /* HTIF7: Stream x half transfer interrupt flag
              (x=7..4) */
   { "\x50\x32\x46\x88", 27, 1 },  /* TCIF7: Stream x transfer complete interrupt
              flag (x=7..4) */
};

const Field_t DMA2_LIFCR_fields[] = {
   { "\x0c\x61\x49\x19\xb0", 0, 1 },  /* CFEIF0: Stream x clear FIFO error interrupt flag
              (x = 3..0) */
   { "\x0c\x43\x45\x24\x66\xc0", 2, 1 },  /* CDMEIF0: Stream x clear direct mode error
              interrupt flag (x = 3..0) */
   { "\x0d\x41\x49\x19\xb0", 3, 1 },  /* CTEIF0: Stream x clear transfer error interrupt
              flag (x = 3..0) */
   { "\x0c\x85\x09\x19\xb0", 4, 1 },  /* CHTIF0: Stream x clear half transfer interrupt
              flag (x = 3..0) */
   { "\x0d\x40\xc9\x19\xb0", 5, 1 },  /* CTCIF0: Stream x clear transfer complete
              interrupt flag (x = 3..0) */
   { "\x0c\x61\x49\x19\xc0", 6, 1 },  /* CFEIF1: Stream x clear FIFO error interrupt flag
              (x = 3..0) */
   { "\x0c\x43\x45\x24\x67\x00", 8, 1 },  /* CDMEIF1: Stream x clear direct mode error
              interrupt flag (x = 3..0) */
   { "\x0d\x41\x49\x19\xc0", 9, 1 },  /* CTEIF1: Stream x clear transfer error interrupt
              flag (x = 3..0) */
   { "\x0c\x85\x09\x19\xc0", 10, 1 },  /* CHTIF1: Stream x clear half transfer interrupt
              flag (x = 3..0) */
   { "\x0d\x40\xc9\x19\xc0", 11, 1 },  /* CTCIF1: Stream x clear transfer complete
              interrupt flag (x = 3..0) */
   { "\x0c\x61\x49\x19\xd0", 16, 1 },  /* CFEIF2: Stream x clear FIFO error interrupt flag
              (x = 3..0) */
   { "\x0c\x43\x45\x24\x67\x40", 18, 1 },  /* CDMEIF2: Stream x clear direct mode error
              interrupt flag (x = 3..0) */
   { "\x0d\x41\x49\x19\xd0", 19, 1 },  /* CTEIF2: Stream x clear transfer error interrupt
              flag (x = 3..0) */
   { "\x0c\x85\x09\x19\xd0", 20, 1 },  /* CHTIF2: Stream x clear half transfer interrupt
              flag (x = 3..0) */
   { "\x0d\x40\xc9\x19\xd0", 21, 1 },  /* CTCIF2: Stream x clear transfer complete
              interrupt flag (x = 3..0) */
   { "\x0c\x61\x49\x19\xe0", 22, 1 },  /* CFEIF3: Stream x clear FIFO error interrupt flag
              (x = 3..0) */
   { "\x0c\x43\x45\x24\x67\x80", 24, 1 },  /* CDMEIF3: Stream x clear direct mode error
              interrupt flag (x = 3..0) */
   { "\x0d\x41\x49\x19\xe0", 25, 1 },  /* CTEIF3: Stream x clear transfer error interrupt
              flag (x = 3..0) */
   { "\x0c\x85\x09\x19\xe0", 26, 1 },  /* CHTIF3: Stream x clear half transfer interrupt
              flag (x = 3..0) */
   { "\x0d\x40\xc9\x19\xe0", 27, 1 },  /* CTCIF3: Stream x clear transfer complete
              interrupt flag (x = 3..0) */
};

const Field_t DMA2_HIFCR_fields[] = {
   { "\x0c\x61\x49\x19\xf0", 0, 1 },  /* CFEIF4: Stream x clear FIFO error interrupt flag
              (x = 7..4) */
   { "\x0c\x43\x45\x24\x67\xc0", 2, 1 },  /* CDMEIF4: Stream x clear direct mode error
              interrupt flag (x = 7..4) */
   { "\x0d\x41\x49\x19\xf0", 3, 1 },  /* CTEIF4: Stream x clear transfer error interrupt
              flag (x = 7..4) */
   { "\x0c\x85\x09\x19\xf0", 4, 1 },  /* CHTIF4: Stream x clear half transfer interrupt
              flag (x = 7..4) */
   { "\x0d\x40\xc9\x19\xf0", 5, 1 },  /* CTCIF4: Stream x clear transfer complete
              interrupt flag (x = 7..4) */
   { "\x0c\x61\x49\x1a\x00", 6, 1 },  /* CFEIF5: Stream x clear FIFO error interrupt flag
              (x = 7..4) */
   { "\x0c\x43\x45\x24\x68\x00", 8, 1 },  /* CDMEIF5: Stream x clear direct mode error
              interrupt flag (x = 7..4) */
   { "\x0d\x41\x49\x1a\x00", 9, 1 },  /* CTEIF5: Stream x clear transfer error interrupt
              flag (x = 7..4) */
   { "\x0c\x85\x09\x1a\x00", 10, 1 },  /* CHTIF5: Stream x clear half transfer interrupt
              flag (x = 7..4) */
   { "\x0d\x40\xc9\x1a\x00", 11, 1 },  /* CTCIF5: Stream x clear transfer complete
              interrupt flag (x = 7..4) */
   { "\x0c\x61\x49\x1a\x10", 16, 1 },  /* CFEIF6: Stream x clear FIFO error interrupt flag
              (x = 7..4) */
   { "\x0c\x43\x45\x24\x68\x40", 18, 1 },  /* CDMEIF6: Stream x clear direct mode error
              interrupt flag (x = 7..4) */
   { "\x0d\x41\x49\x1a\x10", 19, 1 },  /* CTEIF6: Stream x clear transfer error interrupt
              flag (x = 7..4) */
   { "\x0c\x85\x09\x1a\x10", 20, 1 },  /* CHTIF6: Stream x clear half transfer interrupt
              flag (x = 7..4) */
   { "\x0d\x40\xc9\x1a\x10", 21, 1 },  /* CTCIF6: Stream x clear transfer complete
              interrupt flag (x = 7..4) */
   { "\x0c\x61\x49\x1a\x20", 22, 1 },  /* CFEIF7: Stream x clear FIFO error interrupt flag
              (x = 7..4) */
   { "\x0c\x43\x45\x24\x68\x80", 24, 1 },  /* CDMEIF7: Stream x clear direct mode error
              interrupt flag (x = 7..4) */
   { "\x0d\x41\x49\x1a\x20", 25, 1 },  /* CTEIF7: Stream x clear transfer error interrupt
              flag (x = 7..4) */
   { "\x0c\x85\x09\x1a\x20", 26, 1 },  /* CHTIF7: Stream x clear half transfer interrupt
              flag (x = 7..4) */
   { "\x0d\x40\xc9\x1a\x20", 27, 1 },  /* CTCIF7: Stream x clear transfer complete
              interrupt flag (x = 7..4) */
};

const Field_t DMA2_S0CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S0NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S0PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S0M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S0M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S0FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S1CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S1NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S1PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S1M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S1M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S1FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S2CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S2NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S2PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S2M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S2M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S2FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S3CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S3NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S3PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S3M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S3M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S3FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S4CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S4NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S4PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S4M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S4M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S4FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S5CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S5NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S5PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S5M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S5M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S5FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S6CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S6NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S6PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S6M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S6M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S6FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Field_t DMA2_S7CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Stream enable / flag stream ready when
              read low */
   { "\x10\xd1\x49\x14", 1, 1 },  /* DMEIE: Direct mode error interrupt
              enable */
   { "\x50\x52\x45", 2, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x21\x42\x45", 3, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x32\x45", 4, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x40\x60\xd4\x48\xc0", 5, 1 },  /* PFCTRL: Peripheral flow controller */
   { "\x10\x94\x80", 6, 2 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 8, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 9, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 10, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 11, 2 },  /* PSIZE: Peripheral data size */
   { "\x35\x32\x5a\x14", 13, 2 },  /* MSIZE: Memory data size */
   { "\x40\x93\x83\x3d\x30", 15, 1 },  /* PINCOS: Peripheral increment offset
              size */
   { "\x40\xc0", 16, 2 },  /* PL: Priority level */
   { "\x10\x23\x40", 18, 1 },  /* DBM: Double buffer mode */
   { "\x0d\x40", 19, 1 },  /* CT: Current target (only in double buffer
              mode) */
   { "\x04\x32\xc0", 20, 1 },  /* ACK: ACK */
   { "\x40\x25\x52\x4d\x40", 21, 2 },  /* PBURST: Peripheral burst transfer
              configuration */
   { "\x34\x25\x52\x4d\x40", 23, 2 },  /* MBURST: Memory burst transfer
              configuration */
   { "\x0c\x84\xc5\x30", 25, 3 },  /* CHSEL: Channel selection */
};

const Field_t DMA2_S7NDTR_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data items to
              transfer */
};

const Field_t DMA2_S7PAR_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA2_S7M0AR_fields[] = {
   { "\x35\xb0\x40", 0, 32 },  /* M0A: Memory 0 address */
};

const Field_t DMA2_S7M1AR_fields[] = {
   { "\x35\xc0\x40", 0, 32 },  /* M1A: Memory 1 address (used in case of Double
              buffer mode) */
};

const Field_t DMA2_S7FCR_fields[] = {
   { "\x19\x42\x00", 0, 2 },  /* FTH: FIFO threshold selection */
   { "\x10\xd1\x09\x4c", 2, 1 },  /* DMDIS: Direct mode disable */
   { "\x19\x30", 3, 3 },  /* FS: FIFO status */
   { "\x18\x52\x45", 7, 1 },  /* FEIE: FIFO error interrupt
              enable */
};

const Register_t DMA2_registers[] = {
   {"\x30\x94\xd2", 0, 32, 0, DMA2_LISR_fields, 20}, /* LISR: low interrupt status register */
   {"\x20\x94\xd2", 4, 32, 0, DMA2_HISR_fields, 20}, /* HISR: high interrupt status register */
   {"\x30\x91\x83\x48", 8, 32, 0, DMA2_LIFCR_fields, 20}, /* LIFCR: low interrupt flag clear
          register */
   {"\x20\x91\x83\x48", 12, 32, 0, DMA2_HIFCR_fields, 20}, /* HIFCR: high interrupt flag clear
          register */
   {"\x4d\xb0\xd2", 16, 32, 0, DMA2_S0CR_fields, 19}, /* S0CR: stream x configuration
          register */
   {"\x4d\xb3\x84\x51\x20", 20, 32, 0, DMA2_S0NDTR_fields, 1}, /* S0NDTR: stream x number of data
          register */
   {"\x4d\xb4\x01\x48", 24, 32, 0, DMA2_S0PAR_fields, 1}, /* S0PAR: stream x peripheral address
          register */
   {"\x4d\xb3\x5b\x05\x20", 28, 32, 0, DMA2_S0M0AR_fields, 1}, /* S0M0AR: stream x memory 0 address
          register */
   {"\x4d\xb3\x5c\x05\x20", 32, 32, 0, DMA2_S0M1AR_fields, 1}, /* S0M1AR: stream x memory 1 address
          register */
   {"\x4d\xb1\x83\x48", 36, 32, 0, DMA2_S0FCR_fields, 4}, /* S0FCR: stream x FIFO control register */
   {"\x4d\xc0\xd2", 40, 32, 0, DMA2_S1CR_fields, 20}, /* S1CR: stream x configuration
          register */
   {"\x4d\xc3\x84\x51\x20", 44, 32, 0, DMA2_S1NDTR_fields, 1}, /* S1NDTR: stream x number of data
          register */
   {"\x4d\xc4\x01\x48", 48, 32, 0, DMA2_S1PAR_fields, 1}, /* S1PAR: stream x peripheral address
          register */
   {"\x4d\xc3\x5b\x05\x20", 52, 32, 0, DMA2_S1M0AR_fields, 1}, /* S1M0AR: stream x memory 0 address
          register */
   {"\x4d\xc3\x5c\x05\x20", 56, 32, 0, DMA2_S1M1AR_fields, 1}, /* S1M1AR: stream x memory 1 address
          register */
   {"\x4d\xc1\x83\x48", 60, 32, 0, DMA2_S1FCR_fields, 4}, /* S1FCR: stream x FIFO control register */
   {"\x4d\xd0\xd2", 64, 32, 0, DMA2_S2CR_fields, 20}, /* S2CR: stream x configuration
          register */
   {"\x4d\xd3\x84\x51\x20", 68, 32, 0, DMA2_S2NDTR_fields, 1}, /* S2NDTR: stream x number of data
          register */
   {"\x4d\xd4\x01\x48", 72, 32, 0, DMA2_S2PAR_fields, 1}, /* S2PAR: stream x peripheral address
          register */
   {"\x4d\xd3\x5b\x05\x20", 76, 32, 0, DMA2_S2M0AR_fields, 1}, /* S2M0AR: stream x memory 0 address
          register */
   {"\x4d\xd3\x5c\x05\x20", 80, 32, 0, DMA2_S2M1AR_fields, 1}, /* S2M1AR: stream x memory 1 address
          register */
   {"\x4d\xd1\x83\x48", 84, 32, 0, DMA2_S2FCR_fields, 4}, /* S2FCR: stream x FIFO control register */
   {"\x4d\xe0\xd2", 88, 32, 0, DMA2_S3CR_fields, 20}, /* S3CR: stream x configuration
          register */
   {"\x4d\xe3\x84\x51\x20", 92, 32, 0, DMA2_S3NDTR_fields, 1}, /* S3NDTR: stream x number of data
          register */
   {"\x4d\xe4\x01\x48", 96, 32, 0, DMA2_S3PAR_fields, 1}, /* S3PAR: stream x peripheral address
          register */
   {"\x4d\xe3\x5b\x05\x20", 100, 32, 0, DMA2_S3M0AR_fields, 1}, /* S3M0AR: stream x memory 0 address
          register */
   {"\x4d\xe3\x5c\x05\x20", 104, 32, 0, DMA2_S3M1AR_fields, 1}, /* S3M1AR: stream x memory 1 address
          register */
   {"\x4d\xe1\x83\x48", 108, 32, 0, DMA2_S3FCR_fields, 4}, /* S3FCR: stream x FIFO control register */
   {"\x4d\xf0\xd2", 112, 32, 0, DMA2_S4CR_fields, 20}, /* S4CR: stream x configuration
          register */
   {"\x4d\xf3\x84\x51\x20", 116, 32, 0, DMA2_S4NDTR_fields, 1}, /* S4NDTR: stream x number of data
          register */
   {"\x4d\xf4\x01\x48", 120, 32, 0, DMA2_S4PAR_fields, 1}, /* S4PAR: stream x peripheral address
          register */
   {"\x4d\xf3\x5b\x05\x20", 124, 32, 0, DMA2_S4M0AR_fields, 1}, /* S4M0AR: stream x memory 0 address
          register */
   {"\x4d\xf3\x5c\x05\x20", 128, 32, 0, DMA2_S4M1AR_fields, 1}, /* S4M1AR: stream x memory 1 address
          register */
   {"\x4d\xf1\x83\x48", 132, 32, 0, DMA2_S4FCR_fields, 4}, /* S4FCR: stream x FIFO control register */
   {"\x4e\x00\xd2", 136, 32, 0, DMA2_S5CR_fields, 20}, /* S5CR: stream x configuration
          register */
   {"\x4e\x03\x84\x51\x20", 140, 32, 0, DMA2_S5NDTR_fields, 1}, /* S5NDTR: stream x number of data
          register */
   {"\x4e\x04\x01\x48", 144, 32, 0, DMA2_S5PAR_fields, 1}, /* S5PAR: stream x peripheral address
          register */
   {"\x4e\x03\x5b\x05\x20", 148, 32, 0, DMA2_S5M0AR_fields, 1}, /* S5M0AR: stream x memory 0 address
          register */
   {"\x4e\x03\x5c\x05\x20", 152, 32, 0, DMA2_S5M1AR_fields, 1}, /* S5M1AR: stream x memory 1 address
          register */
   {"\x4e\x01\x83\x48", 156, 32, 0, DMA2_S5FCR_fields, 4}, /* S5FCR: stream x FIFO control register */
   {"\x4e\x10\xd2", 160, 32, 0, DMA2_S6CR_fields, 20}, /* S6CR: stream x configuration
          register */
   {"\x4e\x13\x84\x51\x20", 164, 32, 0, DMA2_S6NDTR_fields, 1}, /* S6NDTR: stream x number of data
          register */
   {"\x4e\x14\x01\x48", 168, 32, 0, DMA2_S6PAR_fields, 1}, /* S6PAR: stream x peripheral address
          register */
   {"\x4e\x13\x5b\x05\x20", 172, 32, 0, DMA2_S6M0AR_fields, 1}, /* S6M0AR: stream x memory 0 address
          register */
   {"\x4e\x13\x5c\x05\x20", 176, 32, 0, DMA2_S6M1AR_fields, 1}, /* S6M1AR: stream x memory 1 address
          register */
   {"\x4e\x11\x83\x48", 180, 32, 0, DMA2_S6FCR_fields, 4}, /* S6FCR: stream x FIFO control register */
   {"\x4e\x20\xd2", 184, 32, 0, DMA2_S7CR_fields, 20}, /* S7CR: stream x configuration
          register */
   {"\x4e\x23\x84\x51\x20", 188, 32, 0, DMA2_S7NDTR_fields, 1}, /* S7NDTR: stream x number of data
          register */
   {"\x4e\x24\x01\x48", 192, 32, 0, DMA2_S7PAR_fields, 1}, /* S7PAR: stream x peripheral address
          register */
   {"\x4e\x23\x5b\x05\x20", 196, 32, 0, DMA2_S7M0AR_fields, 1}, /* S7M0AR: stream x memory 0 address
          register */
   {"\x4e\x23\x5c\x05\x20", 200, 32, 0, DMA2_S7M1AR_fields, 1}, /* S7M1AR: stream x memory 1 address
          register */
   {"\x4e\x21\x83\x48", 204, 32, 0, DMA2_S7FCR_fields, 4}, /* S7FCR: stream x FIFO control register */
};

const Field_t OTG_FS_GLOBAL_FS_GOTGCTL_fields[] = {
   { "\x4d\x24\x53\x0d\x30", 0, 1 },  /* SRQSCS: Session request success */
   { "\x4d\x24\x40", 1, 1 },  /* SRQ: Session request */
   { "\x20\xe1\xd3\x0d\x30", 8, 1 },  /* HNGSCS: Host negotiation success */
   { "\x20\xe4\x12\x44", 9, 1 },  /* HNPRQ: HNP request */
   { "\x21\x32\x0e\x40\x53\x80", 10, 1 },  /* HSHNPEN: Host set HNP enable */
   { "\x10\x83\x90\x14\xe0", 11, 1 },  /* DHNPEN: Device HNP enabled */
   { "\x0c\x91\x13\x51\x30", 16, 1 },  /* CIDSTS: Connector ID status */
   { "\x10\x20\xd4", 17, 1 },  /* DBCT: Long/short debounce time */
   { "\x05\x35\x8c\x10", 18, 1 },  /* ASVLD: A-session valid */
   { "\x09\x35\x8c\x10", 19, 1 },  /* BSVLD: B-session valid */
};

const Field_t OTG_FS_GLOBAL_FS_GOTGINT_fields[] = {
   { "\x4c\x51\x05\x50", 2, 1 },  /* SEDET: Session end detected */
   { "\x4d\x24\xd3\x0c\x81\xc0", 8, 1 },  /* SRSSCHG: Session request success status
              change */
   { "\x20\xe4\xd3\x0c\x81\xc0", 9, 1 },  /* HNSSCHG: Host negotiation success status
              change */
   { "\x20\xe1\xc4\x15\x40", 17, 1 },  /* HNGDET: Host negotiation detected */
   { "\x04\x45\x0f\x0c\x81\xc0", 18, 1 },  /* ADTOCHG: A-device timeout change */
   { "\x10\x20\xc4\x38\x50", 19, 1 },  /* DBCDNE: Debounce done */
};

const Field_t OTG_FS_GLOBAL_FS_GAHBCFG_fields[] = {
   { "\x1c\x93\x94", 0, 1 },  /* GINT: Global interrupt mask */
   { "\x51\x81\x85\x31\x63\x00", 7, 1 },  /* TXFELVL: TxFIFO empty level */
   { "\x41\x46\x06\x14\xc5\x8c", 8, 1 },  /* PTXFELVL: Periodic TxFIFO empty
              level */
};

const Field_t OTG_FS_GLOBAL_FS_GUSBCFG_fields[] = {
   { "\x50\xf0\xc1\x30", 0, 3 },  /* TOCAL: FS timeout calibration */
   { "\x40\x86\x53\x14\xc0", 6, 1 },  /* PHYSEL: Full Speed serial transceiver
              select */
   { "\x4d\x24\x03\x05\x00", 8, 1 },  /* SRPCAP: SRP-capable */
   { "\x20\xe4\x03\x05\x00", 9, 1 },  /* HNPCAP: HNP-capable */
   { "\x51\x21\x14", 10, 4 },  /* TRDT: USB turnaround time */
   { "\x18\x83\x4f\x10", 29, 1 },  /* FHMOD: Force host mode */
   { "\x18\x43\x4f\x10", 30, 1 },  /* FDMOD: Force device mode */
   { "\x0d\x46\x10\x2d\x40", 31, 1 },  /* CTXPKT: Corrupt Tx packet */
};

const Field_t OTG_FS_GLOBAL_FS_GRSTCTL_fields[] = {
   { "\x0d\x34\x93\x50", 0, 1 },  /* CSRST: Core soft reset */
   { "\x21\x34\x93\x50", 1, 1 },  /* HSRST: HCLK soft reset */
   { "\x18\x34\x93\x50", 2, 1 },  /* FCRST: Host frame counter reset */
   { "\x49\x81\x86\x31\x32\x00", 4, 1 },  /* RXFFLSH: RxFIFO flush */
   { "\x51\x81\x86\x31\x32\x00", 5, 1 },  /* TXFFLSH: TxFIFO flush */
   { "\x51\x81\x8e\x54\xd0", 6, 5 },  /* TXFNUM: TxFIFO number */
   { "\x04\x80\x89\x10\xc0", 31, 1 },  /* AHBIDL: AHB master idle */
};

const Field_t OTG_FS_GLOBAL_FS_GINTSTS_fields[] = {
   { "\x0c\xd3\xc4", 0, 1 },  /* CMOD: Current mode of operation */
   { "\x34\xd2\x53", 1, 1 },  /* MMIS: Mode mismatch interrupt */
   { "\x3d\x41\xc9\x39\x40", 2, 1 },  /* OTGINT: OTG interrupt */
   { "\x4c\xf1\x80", 3, 1 },  /* SOF: Start of frame */
   { "\x49\x81\x8c\x58\xc0", 4, 1 },  /* RXFLVL: RxFIFO non-empty */
   { "\x39\x05\x18\x18\x50", 5, 1 },  /* NPTXFE: Non-periodic TxFIFO empty */
   { "\x1c\x93\x81\x2c\x51\x86", 6, 1 },  /* GINAKEFF: Global IN non-periodic NAK
              effective */
   { "\x1c\xf5\x54\x38\x12\xc5\x18\x60", 7, 1 },  /* GOUTNAKEFF: Global OUT NAK effective */
   { "\x15\x35\x53\x40", 10, 1 },  /* ESUSP: Early suspend */
   { "\x55\x30\x93\x55\x34\x00", 11, 1 },  /* USBSUSP: USB suspend */
   { "\x55\x30\x92\x4d\x40", 12, 1 },  /* USBRST: USB reset */
   { "\x14\xe5\x4d\x10\xe1\x40", 13, 1 },  /* ENUMDNE: Enumeration done */
   { "\x25\x33\xcf\x11\x24\x00", 14, 1 },  /* ISOODRP: Isochronous OUT packet dropped
              interrupt */
   { "\x14\xf4\x06", 15, 1 },  /* EOPF: End of periodic frame
              interrupt */
   { "\x24\x54\x09\x39\x40", 18, 1 },  /* IEPINT: IN endpoint interrupt */
   { "\x3c\x54\x09\x39\x40", 19, 1 },  /* OEPINT: OUT endpoint interrupt */
   { "\x24\x94\xcf\x25\x81\x92", 20, 1 },  /* IISOIXFR: Incomplete isochronous IN
              transfer */
   { "\x25\x06\x06\x4a\x52\x4e\x0c\xf3\x50\x25\x33\xcf\x55\x40", 21, 1 },  /* IPXFR_INCOMPISOOUT: Incomplete periodic transfer(Host
              mode)/Incomplete isochronous OUT transfer(Device
              mode) */
   { "\x21\x04\x94\x24\xe5\x00", 24, 1 },  /* HPRTINT: Host port interrupt */
   { "\x20\x32\x4e\x50", 25, 1 },  /* HCINT: Host channels interrupt */
   { "\x41\x46\x06\x14", 26, 1 },  /* PTXFE: Periodic TxFIFO empty */
   { "\x0c\x91\x13\x0c\x81\xc0", 28, 1 },  /* CIDSCHG: Connector ID status change */
   { "\x10\x94\xc3\x24\xe5\x00", 29, 1 },  /* DISCINT: Disconnect detected
              interrupt */
   { "\x4d\x24\x49\x39\x40", 30, 1 },  /* SRQINT: Session request/new session detected
              interrupt */
   { "\x5c\xb5\x50\x24\xe5\x00", 31, 1 },  /* WKUPINT: Resume/remote wakeup detected
              interrupt */
};

const Field_t OTG_FS_GLOBAL_FS_GINTMSK_fields[] = {
   { "\x34\xd2\x53\x34", 1, 1 },  /* MMISM: Mode mismatch interrupt
              mask */
   { "\x3d\x41\xc9\x39\x40", 2, 1 },  /* OTGINT: OTG interrupt mask */
   { "\x4c\xf1\x8d", 3, 1 },  /* SOFM: Start of frame mask */
   { "\x49\x81\x8c\x58\xc3\x40", 4, 1 },  /* RXFLVLM: Receive FIFO non-empty
              mask */
   { "\x39\x05\x18\x18\x53\x40", 5, 1 },  /* NPTXFEM: Non-periodic TxFIFO empty
              mask */
   { "\x1c\x93\x81\x2c\x51\x86\x34", 6, 1 },  /* GINAKEFFM: Global non-periodic IN NAK effective
              mask */
   { "\x1c\xf3\x81\x2c\x51\x86\x34", 7, 1 },  /* GONAKEFFM: Global OUT NAK effective
              mask */
   { "\x15\x35\x53\x40\xd0", 10, 1 },  /* ESUSPM: Early suspend mask */
   { "\x55\x30\x93\x55\x34\x0d", 11, 1 },  /* USBSUSPM: USB suspend mask */
   { "\x55\x30\x92\x4d\x40", 12, 1 },  /* USBRST: USB reset mask */
   { "\x14\xe5\x4d\x10\xe1\x4d", 13, 1 },  /* ENUMDNEM: Enumeration done mask */
   { "\x25\x33\xcf\x11\x24\x0d", 14, 1 },  /* ISOODRPM: Isochronous OUT packet dropped interrupt
              mask */
   { "\x14\xf4\x06\x34", 15, 1 },  /* EOPFM: End of periodic frame interrupt
              mask */
   { "\x15\x03\x49\x4c\xd0", 17, 1 },  /* EPMISM: Endpoint mismatch interrupt
              mask */
   { "\x24\x54\x09\x39\x40", 18, 1 },  /* IEPINT: IN endpoints interrupt
              mask */
   { "\x3c\x54\x09\x39\x40", 19, 1 },  /* OEPINT: OUT endpoints interrupt
              mask */
   { "\x24\x94\xcf\x25\x81\x92\x34", 20, 1 },  /* IISOIXFRM: Incomplete isochronous IN transfer
              mask */
   { "\x25\x06\x06\x48\xd9\x49\x25\x33\xcf\x60\x64\x8d", 21, 1 },  /* IPXFRM_IISOOXFRM: Incomplete periodic transfer mask(Host
              mode)/Incomplete isochronous OUT transfer mask(Device
              mode) */
   { "\x41\x25\x09\x34", 24, 1 },  /* PRTIM: Host port interrupt mask */
   { "\x20\x32\x4d", 25, 1 },  /* HCIM: Host channels interrupt
              mask */
   { "\x41\x46\x06\x14\xd0", 26, 1 },  /* PTXFEM: Periodic TxFIFO empty mask */
   { "\x0c\x91\x13\x0c\x81\xcd", 28, 1 },  /* CIDSCHGM: Connector ID status change
              mask */
   { "\x10\x94\xc3\x24\xe5\x00", 29, 1 },  /* DISCINT: Disconnect detected interrupt
              mask */
   { "\x4d\x24\x49\x34", 30, 1 },  /* SRQIM: Session request/new session detected
              interrupt mask */
   { "\x5d\x52\x4d", 31, 1 },  /* WUIM: Resume/remote wakeup detected interrupt
              mask */
};

const Field_t OTG_FS_GLOBAL_FS_GRXSTSR_Device_fields[] = {
   { "\x15\x03\x95\x34", 0, 4 },  /* EPNUM: Endpoint number */
   { "\x08\x33\x94", 4, 11 },  /* BCNT: Byte count */
   { "\x11\x02\x44", 15, 2 },  /* DPID: Data PID */
   { "\x40\xb5\x13\x51\x30", 17, 4 },  /* PKTSTS: Packet status */
   { "\x19\x23\x4e\x54\xd0", 21, 4 },  /* FRMNUM: Frame number */
};

const Field_t OTG_FS_GLOBAL_FS_GRXSTSR_Host_fields[] = {
   { "\x15\x03\x95\x34", 0, 4 },  /* EPNUM: Endpoint number */
   { "\x08\x33\x94", 4, 11 },  /* BCNT: Byte count */
   { "\x11\x02\x44", 15, 2 },  /* DPID: Data PID */
   { "\x40\xb5\x13\x51\x30", 17, 4 },  /* PKTSTS: Packet status */
   { "\x19\x23\x4e\x54\xd0", 21, 4 },  /* FRMNUM: Frame number */
};

const Field_t OTG_FS_GLOBAL_FS_GRXFSIZ_fields[] = {
   { "\x49\x81\x84", 0, 16 },  /* RXFD: RxFIFO depth */
};

const Field_t OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_fields[] = {
   { "\x51\x86\xc6\x4c\x10", 0, 16 },  /* TX0FSA: Endpoint 0 transmit RAM start
              address */
   { "\x51\x86\xc6\x10", 16, 16 },  /* TX0FD: Endpoint 0 TxFIFO depth */
};

const Field_t OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_fields[] = {
   { "\x39\x05\x18\x19\x30\x40", 0, 16 },  /* NPTXFSA: Non-periodic transmit RAM start
              address */
   { "\x39\x05\x18\x18\x40", 16, 16 },  /* NPTXFD: Non-periodic TxFIFO depth */
};

const Field_t OTG_FS_GLOBAL_FS_GNPTXSTS_fields[] = {
   { "\x39\x05\x18\x19\x30\x56", 0, 16 },  /* NPTXFSAV: Non-periodic TxFIFO space
              available */
   { "\x39\x05\x11\x61\x30\x56", 16, 8 },  /* NPTQXSAV: Non-periodic transmit request queue
              space available */
   { "\x39\x05\x18\x45\x43\xd0", 24, 7 },  /* NPTXQTOP: Top of the non-periodic transmit request
              queue */
};

const Field_t OTG_FS_GLOBAL_FS_GCCFG_fields[] = {
   { "\x41\x74\x84\x5c\xe0", 16, 1 },  /* PWRDWN: Power down */
   { "\x58\x25\x53\x05\x31\x4e", 18, 1 },  /* VBUSASEN: Enable the VBUS sensing
              device */
   { "\x58\x25\x53\x09\x31\x4e", 19, 1 },  /* VBUSBSEN: Enable the VBUS sensing
              device */
   { "\x4c\xf1\x8f\x55\x41\x4e", 20, 1 },  /* SOFOUTEN: SOF output enable */
};

const Field_t OTG_FS_GLOBAL_FS_CID_fields[] = {
   { "\x41\x23\xc4\x54\x35\x25\x24\x40", 0, 32 },  /* PRODUCT_ID: Product ID field */
};

const Field_t OTG_FS_GLOBAL_FS_HPTXFSIZ_fields[] = {
   { "\x41\x46\x13\x04", 0, 16 },  /* PTXSA: Host periodic TxFIFO start
              address */
   { "\x41\x46\x06\x4c\x96\x80", 16, 16 },  /* PTXFSIZ: Host periodic TxFIFO depth */
};

const Field_t OTG_FS_GLOBAL_FS_DIEPTXF1_fields[] = {
   { "\x24\xe1\x50\x51\x84\xc1", 0, 16 },  /* INEPTXSA: IN endpoint FIFO2 transmit RAM start
              address */
   { "\x24\xe1\x50\x51\x81\x84", 16, 16 },  /* INEPTXFD: IN endpoint TxFIFO depth */
};

const Field_t OTG_FS_GLOBAL_FS_DIEPTXF2_fields[] = {
   { "\x24\xe1\x50\x51\x84\xc1", 0, 16 },  /* INEPTXSA: IN endpoint FIFO3 transmit RAM start
              address */
   { "\x24\xe1\x50\x51\x81\x84", 16, 16 },  /* INEPTXFD: IN endpoint TxFIFO depth */
};

const Field_t OTG_FS_GLOBAL_FS_DIEPTXF3_fields[] = {
   { "\x24\xe1\x50\x51\x84\xc1", 0, 16 },  /* INEPTXSA: IN endpoint FIFO4 transmit RAM start
              address */
   { "\x24\xe1\x50\x51\x81\x84", 16, 16 },  /* INEPTXFD: IN endpoint TxFIFO depth */
};

const Register_t OTG_FS_GLOBAL_registers[] = {
   {"\x19\x39\x47\x3d\x41\xc3\x50\xc0", 0, 32, 0, OTG_FS_GLOBAL_FS_GOTGCTL_fields, 10}, /* FS_GOTGCTL: OTG_FS control and status register
          (OTG_FS_GOTGCTL) */
   {"\x19\x39\x47\x3d\x41\xc9\x39\x40", 4, 32, 0, OTG_FS_GLOBAL_FS_GOTGINT_fields, 6}, /* FS_GOTGINT: OTG_FS interrupt register
          (OTG_FS_GOTGINT) */
   {"\x19\x39\x47\x04\x80\x83\x18\x70", 8, 32, 0, OTG_FS_GLOBAL_FS_GAHBCFG_fields, 3}, /* FS_GAHBCFG: OTG_FS AHB configuration register
          (OTG_FS_GAHBCFG) */
   {"\x19\x39\x47\x55\x30\x83\x18\x70", 12, 32, 0, OTG_FS_GLOBAL_FS_GUSBCFG_fields, 8}, /* FS_GUSBCFG: OTG_FS USB configuration register
          (OTG_FS_GUSBCFG) */
   {"\x19\x39\x47\x49\x35\x03\x50\xc0", 16, 32, 0, OTG_FS_GLOBAL_FS_GRSTCTL_fields, 7}, /* FS_GRSTCTL: OTG_FS reset register
          (OTG_FS_GRSTCTL) */
   {"\x19\x39\x47\x24\xe5\x13\x51\x30", 20, 32, 0, OTG_FS_GLOBAL_FS_GINTSTS_fields, 25}, /* FS_GINTSTS: OTG_FS core interrupt register
          (OTG_FS_GINTSTS) */
   {"\x19\x39\x47\x24\xe5\x0d\x4c\xb0", 24, 32, 0, OTG_FS_GLOBAL_FS_GINTMSK_fields, 25}, /* FS_GINTMSK: OTG_FS interrupt mask register
          (OTG_FS_GINTMSK) */
   {"\x19\x39\x47\x49\x84\xd4\x4d\x29\x44\x15\x62\x43\x14", 28, 32, 0, OTG_FS_GLOBAL_FS_GRXSTSR_Device_fields, 5}, /* FS_GRXSTSR_Device: OTG_FS Receive status debug read(Device
          mode) */
   {"\x19\x39\x47\x49\x84\xd4\x4d\x29\x48\x3d\x35\x00", 28, 32, 0, OTG_FS_GLOBAL_FS_GRXSTSR_Host_fields, 5}, /* FS_GRXSTSR_Host: OTG_FS Receive status debug read(Host
          mode) */
   {"\x19\x39\x47\x49\x81\x93\x25\xa0", 36, 32, 0, OTG_FS_GLOBAL_FS_GRXFSIZ_fields, 1}, /* FS_GRXFSIZ: OTG_FS Receive FIFO size register
          (OTG_FS_GRXFSIZ) */
   {"\x19\x39\x47\x39\x05\x18\x19\x32\x5a\x94\x41\x56\x24\x31\x40", 40, 32, 0, OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_fields, 2}, /* FS_GNPTXFSIZ_Device: OTG_FS non-periodic transmit FIFO size
          register (Device mode) */
   {"\x19\x39\x47\x39\x05\x18\x19\x32\x5a\x94\x83\xd3\x50", 40, 32, 0, OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_fields, 2}, /* FS_GNPTXFSIZ_Host: OTG_FS non-periodic transmit FIFO size
          register (Host mode) */
   {"\x19\x39\x47\x39\x05\x18\x4d\x44\xc0", 44, 32, 0, OTG_FS_GLOBAL_FS_GNPTXSTS_fields, 3}, /* FS_GNPTXSTS: OTG_FS non-periodic transmit FIFO/queue
          status register (OTG_FS_GNPTXSTS) */
   {"\x19\x39\x47\x0c\x31\x87", 56, 32, 0, OTG_FS_GLOBAL_FS_GCCFG_fields, 4}, /* FS_GCCFG: OTG_FS general core configuration register
          (OTG_FS_GCCFG) */
   {"\x19\x39\x43\x24\x40", 60, 32, 0, OTG_FS_GLOBAL_FS_CID_fields, 1}, /* FS_CID: core ID register */
   {"\x19\x39\x48\x41\x46\x06\x4c\x96\x80", 256, 32, 0, OTG_FS_GLOBAL_FS_HPTXFSIZ_fields, 2}, /* FS_HPTXFSIZ: OTG_FS Host periodic transmit FIFO size
          register (OTG_FS_HPTXFSIZ) */
   {"\x19\x39\x44\x24\x54\x14\x60\x67\x00", 260, 32, 0, OTG_FS_GLOBAL_FS_DIEPTXF1_fields, 2}, /* FS_DIEPTXF1: OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF2) */
   {"\x19\x39\x44\x24\x54\x14\x60\x67\x40", 264, 32, 0, OTG_FS_GLOBAL_FS_DIEPTXF2_fields, 2}, /* FS_DIEPTXF2: OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF3) */
   {"\x19\x39\x44\x24\x54\x14\x60\x67\x80", 268, 32, 0, OTG_FS_GLOBAL_FS_DIEPTXF3_fields, 2}, /* FS_DIEPTXF3: OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF4) */
};

const Field_t OTG_FS_HOST_FS_HCFG_fields[] = {
   { "\x19\x33\x13\x40\x34\xc0", 0, 2 },  /* FSLSPCS: FS/LS PHY clock select */
   { "\x19\x33\x13\x4c", 2, 1 },  /* FSLSS: FS- and LS-only support */
};

const Field_t OTG_FS_HOST_HFIR_fields[] = {
   { "\x19\x22\x56\x30", 0, 16 },  /* FRIVL: Frame interval */
};

const Field_t OTG_FS_HOST_FS_HFNUM_fields[] = {
   { "\x19\x23\x95\x34", 0, 16 },  /* FRNUM: Frame number */
   { "\x19\x44\x85\x34", 16, 16 },  /* FTREM: Frame time remaining */
};

const Field_t OTG_FS_HOST_FS_HPTXSTS_fields[] = {
   { "\x41\x46\x06\x4c\x15\x8c", 0, 16 },  /* PTXFSAVL: Periodic transmit data FIFO space
              available */
   { "\x41\x46\x11\x4c\x15\x80", 16, 8 },  /* PTXQSAV: Periodic transmit request queue space
              available */
   { "\x41\x46\x11\x50\xf4\x00", 24, 8 },  /* PTXQTOP: Top of the periodic transmit request
              queue */
};

const Field_t OTG_FS_HOST_HAINT_fields[] = {
   { "\x20\x12\x4e\x50", 0, 16 },  /* HAINT: Channel interrupts */
};

const Field_t OTG_FS_HOST_HAINTMSK_fields[] = {
   { "\x20\x12\x4e\x50\xd0", 0, 16 },  /* HAINTM: Channel interrupt mask */
};

const Field_t OTG_FS_HOST_FS_HPRT_fields[] = {
   { "\x40\x34\xd4\x4c", 0, 1 },  /* PCSTS: Port connect status */
   { "\x40\x31\x05\x50", 1, 1 },  /* PCDET: Port connect detected */
   { "\x40\x53\x81", 2, 1 },  /* PENA: Port enable */
   { "\x40\x53\x83\x20\xe1\xc0", 3, 1 },  /* PENCHNG: Port enable/disable change */
   { "\x40\xf0\xc1", 4, 1 },  /* POCA: Port overcurrent active */
   { "\x40\xf0\xc3\x20\xe1\xc0", 5, 1 },  /* POCCHNG: Port overcurrent change */
   { "\x41\x21\x53", 6, 1 },  /* PRES: Port resume */
   { "\x41\x35\x53\x40", 7, 1 },  /* PSUSP: Port suspend */
   { "\x41\x24\xd4", 8, 1 },  /* PRST: Port reset */
   { "\x40\xc4\xd4\x4c", 10, 2 },  /* PLSTS: Port line status */
   { "\x41\x05\xd2", 12, 1 },  /* PPWR: Port power */
   { "\x41\x40\xd4\x30", 13, 4 },  /* PTCTL: Port test control */
   { "\x41\x34\x04", 17, 2 },  /* PSPD: Port speed */
};

const Field_t OTG_FS_HOST_FS_HCCHAR0_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT0_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK0_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ0_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR1_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT1_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK1_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ1_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR2_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT2_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK2_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ2_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR3_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT3_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK3_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ3_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR4_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT4_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK4_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ4_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR5_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT5_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK5_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ5_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR6_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT6_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK6_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ6_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Field_t OTG_FS_HOST_FS_HCCHAR7_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: Maximum packet size */
   { "\x15\x03\x95\x34", 11, 4 },  /* EPNUM: Endpoint number */
   { "\x15\x01\x09\x48", 15, 1 },  /* EPDIR: Endpoint direction */
   { "\x31\x31\x05\x58", 17, 1 },  /* LSDEV: Low-speed device */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x34\x33\x94", 20, 2 },  /* MCNT: Multicount */
   { "\x10\x11\x00", 22, 7 },  /* DAD: Device address */
   { "\x3c\x41\x06\x48\xd0", 29, 1 },  /* ODDFRM: Odd frame */
   { "\x0c\x81\x09\x4c", 30, 1 },  /* CHDIS: Channel disable */
   { "\x0c\x81\x4e\x04", 31, 1 },  /* CHENA: Channel enable */
};

const Field_t OTG_FS_HOST_FS_HCINT7_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: Transfer completed */
   { "\x0c\x82\x00", 1, 1 },  /* CHH: Channel halted */
   { "\x4d\x40\x4c\x30", 3, 1 },  /* STALL: STALL response received
              interrupt */
   { "\x38\x12\xc0", 4, 1 },  /* NAK: NAK response received
              interrupt */
   { "\x04\x32\xc0", 5, 1 },  /* ACK: ACK response received/transmitted
              interrupt */
   { "\x51\x81\x52\x48", 7, 1 },  /* TXERR: Transaction error */
   { "\x08\x21\x52\x48", 8, 1 },  /* BBERR: Babble error */
   { "\x19\x23\x4f\x48", 9, 1 },  /* FRMOR: Frame overrun */
   { "\x11\x41\x52\x48", 10, 1 },  /* DTERR: Data toggle error */
};

const Field_t OTG_FS_HOST_FS_HCINTMSK7_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed mask */
   { "\x0c\x82\x0d", 1, 1 },  /* CHHM: Channel halted mask */
   { "\x4d\x40\x4c\x30\xd0", 3, 1 },  /* STALLM: STALL response received interrupt
              mask */
   { "\x38\x12\xcd", 4, 1 },  /* NAKM: NAK response received interrupt
              mask */
   { "\x04\x32\xcd", 5, 1 },  /* ACKM: ACK response received/transmitted
              interrupt mask */
   { "\x39\x91\x54", 6, 1 },  /* NYET: response received interrupt
              mask */
   { "\x51\x81\x52\x48\xd0", 7, 1 },  /* TXERRM: Transaction error mask */
   { "\x08\x21\x52\x48\xd0", 8, 1 },  /* BBERRM: Babble error mask */
   { "\x19\x23\x4f\x48\xd0", 9, 1 },  /* FRMORM: Frame overrun mask */
   { "\x11\x41\x52\x48\xd0", 10, 1 },  /* DTERRM: Data toggle error mask */
};

const Field_t OTG_FS_HOST_FS_HCTSIZ7_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x11\x02\x44", 29, 2 },  /* DPID: Data PID */
};

const Register_t OTG_FS_HOST_registers[] = {
   {"\x19\x39\x48\x0c\x61\xc0", 0, 32, 0, OTG_FS_HOST_FS_HCFG_fields, 2}, /* FS_HCFG: OTG_FS host configuration register
          (OTG_FS_HCFG) */
   {"\x20\x62\x52", 4, 32, 0, OTG_FS_HOST_HFIR_fields, 1}, /* HFIR: OTG_FS Host frame interval
          register */
   {"\x19\x39\x48\x18\xe5\x4d", 8, 32, 0, OTG_FS_HOST_FS_HFNUM_fields, 2}, /* FS_HFNUM: OTG_FS host frame number/frame time
          remaining register (OTG_FS_HFNUM) */
   {"\x19\x39\x48\x41\x46\x13\x51\x30", 16, 32, 0, OTG_FS_HOST_FS_HPTXSTS_fields, 3}, /* FS_HPTXSTS: OTG_FS_Host periodic transmit FIFO/queue
          status register (OTG_FS_HPTXSTS) */
   {"\x20\x12\x4e\x50", 20, 32, 0, OTG_FS_HOST_HAINT_fields, 1}, /* HAINT: OTG_FS Host all channels interrupt
          register */
   {"\x20\x12\x4e\x50\xd4\xcb", 24, 32, 0, OTG_FS_HOST_HAINTMSK_fields, 1}, /* HAINTMSK: OTG_FS host all channels interrupt mask
          register */
   {"\x19\x39\x48\x41\x25\x00", 64, 32, 0, OTG_FS_HOST_FS_HPRT_fields, 13}, /* FS_HPRT: OTG_FS host port control and status register
          (OTG_FS_HPRT) */
   {"\x19\x39\x48\x0c\x32\x01\x49\xb0", 256, 32, 0, OTG_FS_HOST_FS_HCCHAR0_fields, 10}, /* FS_HCCHAR0: OTG_FS host channel-0 characteristics
          register (OTG_FS_HCCHAR0) */
   {"\x19\x39\x48\x0c\x93\x94\x6c", 264, 32, 0, OTG_FS_HOST_FS_HCINT0_fields, 9}, /* FS_HCINT0: OTG_FS host channel-0 interrupt register
          (OTG_FS_HCINT0) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xdb", 268, 32, 0, OTG_FS_HOST_FS_HCINTMSK0_fields, 10}, /* FS_HCINTMSK0: OTG_FS host channel-0 mask register
          (OTG_FS_HCINTMSK0) */
   {"\x19\x39\x48\x0d\x44\xc9\x69\xb0", 272, 32, 0, OTG_FS_HOST_FS_HCTSIZ0_fields, 3}, /* FS_HCTSIZ0: OTG_FS host channel-0 transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x49\xc0", 288, 32, 0, OTG_FS_HOST_FS_HCCHAR1_fields, 10}, /* FS_HCCHAR1: OTG_FS host channel-1 characteristics
          register (OTG_FS_HCCHAR1) */
   {"\x19\x39\x48\x0c\x93\x94\x70", 296, 32, 0, OTG_FS_HOST_FS_HCINT1_fields, 9}, /* FS_HCINT1: OTG_FS host channel-1 interrupt register
          (OTG_FS_HCINT1) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xdc", 300, 32, 0, OTG_FS_HOST_FS_HCINTMSK1_fields, 10}, /* FS_HCINTMSK1: OTG_FS host channel-1 mask register
          (OTG_FS_HCINTMSK1) */
   {"\x19\x39\x48\x0d\x44\xc9\x69\xc0", 304, 32, 0, OTG_FS_HOST_FS_HCTSIZ1_fields, 3}, /* FS_HCTSIZ1: OTG_FS host channel-1 transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x49\xd0", 320, 32, 0, OTG_FS_HOST_FS_HCCHAR2_fields, 10}, /* FS_HCCHAR2: OTG_FS host channel-2 characteristics
          register (OTG_FS_HCCHAR2) */
   {"\x19\x39\x48\x0c\x93\x94\x74", 328, 32, 0, OTG_FS_HOST_FS_HCINT2_fields, 9}, /* FS_HCINT2: OTG_FS host channel-2 interrupt register
          (OTG_FS_HCINT2) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xdd", 332, 32, 0, OTG_FS_HOST_FS_HCINTMSK2_fields, 10}, /* FS_HCINTMSK2: OTG_FS host channel-2 mask register
          (OTG_FS_HCINTMSK2) */
   {"\x19\x39\x48\x0d\x44\xc9\x69\xd0", 336, 32, 0, OTG_FS_HOST_FS_HCTSIZ2_fields, 3}, /* FS_HCTSIZ2: OTG_FS host channel-2 transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x49\xe0", 352, 32, 0, OTG_FS_HOST_FS_HCCHAR3_fields, 10}, /* FS_HCCHAR3: OTG_FS host channel-3 characteristics
          register (OTG_FS_HCCHAR3) */
   {"\x19\x39\x48\x0c\x93\x94\x78", 360, 32, 0, OTG_FS_HOST_FS_HCINT3_fields, 9}, /* FS_HCINT3: OTG_FS host channel-3 interrupt register
          (OTG_FS_HCINT3) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xde", 364, 32, 0, OTG_FS_HOST_FS_HCINTMSK3_fields, 10}, /* FS_HCINTMSK3: OTG_FS host channel-3 mask register
          (OTG_FS_HCINTMSK3) */
   {"\x19\x39\x48\x0d\x44\xc9\x69\xe0", 368, 32, 0, OTG_FS_HOST_FS_HCTSIZ3_fields, 3}, /* FS_HCTSIZ3: OTG_FS host channel-3 transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x49\xf0", 384, 32, 0, OTG_FS_HOST_FS_HCCHAR4_fields, 10}, /* FS_HCCHAR4: OTG_FS host channel-4 characteristics
          register (OTG_FS_HCCHAR4) */
   {"\x19\x39\x48\x0c\x93\x94\x7c", 392, 32, 0, OTG_FS_HOST_FS_HCINT4_fields, 9}, /* FS_HCINT4: OTG_FS host channel-4 interrupt register
          (OTG_FS_HCINT4) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xdf", 396, 32, 0, OTG_FS_HOST_FS_HCINTMSK4_fields, 10}, /* FS_HCINTMSK4: OTG_FS host channel-4 mask register
          (OTG_FS_HCINTMSK4) */
   {"\x19\x39\x48\x0d\x44\xc9\x69\xf0", 400, 32, 0, OTG_FS_HOST_FS_HCTSIZ4_fields, 3}, /* FS_HCTSIZ4: OTG_FS host channel-x transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x4a\x00", 416, 32, 0, OTG_FS_HOST_FS_HCCHAR5_fields, 10}, /* FS_HCCHAR5: OTG_FS host channel-5 characteristics
          register (OTG_FS_HCCHAR5) */
   {"\x19\x39\x48\x0c\x93\x94\x80", 424, 32, 0, OTG_FS_HOST_FS_HCINT5_fields, 9}, /* FS_HCINT5: OTG_FS host channel-5 interrupt register
          (OTG_FS_HCINT5) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xe0", 428, 32, 0, OTG_FS_HOST_FS_HCINTMSK5_fields, 10}, /* FS_HCINTMSK5: OTG_FS host channel-5 mask register
          (OTG_FS_HCINTMSK5) */
   {"\x19\x39\x48\x0d\x44\xc9\x6a\x00", 432, 32, 0, OTG_FS_HOST_FS_HCTSIZ5_fields, 3}, /* FS_HCTSIZ5: OTG_FS host channel-5 transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x4a\x10", 448, 32, 0, OTG_FS_HOST_FS_HCCHAR6_fields, 10}, /* FS_HCCHAR6: OTG_FS host channel-6 characteristics
          register (OTG_FS_HCCHAR6) */
   {"\x19\x39\x48\x0c\x93\x94\x84", 456, 32, 0, OTG_FS_HOST_FS_HCINT6_fields, 9}, /* FS_HCINT6: OTG_FS host channel-6 interrupt register
          (OTG_FS_HCINT6) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xe1", 460, 32, 0, OTG_FS_HOST_FS_HCINTMSK6_fields, 10}, /* FS_HCINTMSK6: OTG_FS host channel-6 mask register
          (OTG_FS_HCINTMSK6) */
   {"\x19\x39\x48\x0d\x44\xc9\x6a\x10", 464, 32, 0, OTG_FS_HOST_FS_HCTSIZ6_fields, 3}, /* FS_HCTSIZ6: OTG_FS host channel-6 transfer size
          register */
   {"\x19\x39\x48\x0c\x32\x01\x4a\x20", 480, 32, 0, OTG_FS_HOST_FS_HCCHAR7_fields, 10}, /* FS_HCCHAR7: OTG_FS host channel-7 characteristics
          register (OTG_FS_HCCHAR7) */
   {"\x19\x39\x48\x0c\x93\x94\x88", 488, 32, 0, OTG_FS_HOST_FS_HCINT7_fields, 9}, /* FS_HCINT7: OTG_FS host channel-7 interrupt register
          (OTG_FS_HCINT7) */
   {"\x19\x39\x48\x0c\x93\x94\x35\x32\xe2", 492, 32, 0, OTG_FS_HOST_FS_HCINTMSK7_fields, 10}, /* FS_HCINTMSK7: OTG_FS host channel-7 mask register
          (OTG_FS_HCINTMSK7) */
   {"\x19\x39\x48\x0d\x44\xc9\x6a\x20", 496, 32, 0, OTG_FS_HOST_FS_HCTSIZ7_fields, 3}, /* FS_HCTSIZ7: OTG_FS host channel-7 transfer size
          register */
};

const Field_t OTG_FS_DEVICE_FS_DCFG_fields[] = {
   { "\x11\x34\x04", 0, 2 },  /* DSPD: Device speed */
   { "\x39\xa3\x13\x3c\x84\xcb", 2, 1 },  /* NZLSOHSK: Non-zero-length status OUT
              handshake */
   { "\x10\x11\x00", 4, 7 },  /* DAD: Device address */
   { "\x40\x62\x56\x30", 11, 2 },  /* PFIVL: Periodic frame interval */
};

const Field_t OTG_FS_DEVICE_FS_DCTL_fields[] = {
   { "\x49\x75\x53\x24\x70", 0, 1 },  /* RWUSIG: Remote wakeup signaling */
   { "\x4c\x42\x53", 1, 1 },  /* SDIS: Soft disconnect */
   { "\x1c\x93\x93\x51\x30", 2, 1 },  /* GINSTS: Global IN NAK status */
   { "\x1c\xf3\x93\x51\x30", 3, 1 },  /* GONSTS: Global OUT NAK status */
   { "\x50\x35\x0c", 4, 3 },  /* TCTL: Test control */
   { "\x4c\x72\x4e\x04\xb0", 7, 1 },  /* SGINAK: Set global IN NAK */
   { "\x0c\x72\x4e\x04\xb0", 8, 1 },  /* CGINAK: Clear global IN NAK */
   { "\x4c\x73\xce\x04\xb0", 9, 1 },  /* SGONAK: Set global OUT NAK */
   { "\x0c\x73\xce\x04\xb0", 10, 1 },  /* CGONAK: Clear global OUT NAK */
   { "\x40\xf4\x12\x1c\x43\x85", 11, 1 },  /* POPRGDNE: Power-on programming done */
};

const Field_t OTG_FS_DEVICE_FS_DSTS_fields[] = {
   { "\x4d\x54\xd0\x4d\x44\xc0", 0, 1 },  /* SUSPSTS: Suspend status */
   { "\x14\xe5\x4d\x4d\x01\x00", 1, 2 },  /* ENUMSPD: Enumerated speed */
   { "\x14\x54\x92", 3, 1 },  /* EERR: Erratic error */
   { "\x18\xe4\xcf\x18", 8, 14 },  /* FNSOF: Frame number of the received
              SOF */
};

const Field_t OTG_FS_DEVICE_FS_DIEPMSK_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed interrupt
              mask */
   { "\x15\x01\x0d", 1, 1 },  /* EPDM: Endpoint disabled interrupt
              mask */
   { "\x50\xf3\x40", 3, 1 },  /* TOM: Timeout condition mask (Non-isochronous
              endpoints) */
   { "\x25\x45\x18\x18\x53\x53\x2c", 4, 1 },  /* ITTXFEMSK: IN token received when TxFIFO empty
              mask */
   { "\x24\xe1\x50\x38\xd3\x40", 5, 1 },  /* INEPNMM: IN token received with EP mismatch
              mask */
   { "\x24\xe1\x50\x38\x53\x40", 6, 1 },  /* INEPNEM: IN endpoint NAK effective
              mask */
};

const Field_t OTG_FS_DEVICE_FS_DOEPMSK_fields[] = {
   { "\x60\x64\x83\x34", 0, 1 },  /* XFRCM: Transfer completed interrupt
              mask */
   { "\x15\x01\x0d", 1, 1 },  /* EPDM: Endpoint disabled interrupt
              mask */
   { "\x4d\x45\x50\x34", 3, 1 },  /* STUPM: SETUP phase done mask */
   { "\x3d\x41\x50\x10\xd0", 4, 1 },  /* OTEPDM: OUT token received when endpoint
              disabled mask */
};

const Field_t OTG_FS_DEVICE_FS_DAINT_fields[] = {
   { "\x24\x54\x09\x39\x40", 0, 16 },  /* IEPINT: IN endpoint interrupt bits */
   { "\x3c\x54\x09\x39\x40", 16, 16 },  /* OEPINT: OUT endpoint interrupt
              bits */
};

const Field_t OTG_FS_DEVICE_FS_DAINTMSK_fields[] = {
   { "\x24\x54\x0d", 0, 16 },  /* IEPM: IN EP interrupt mask bits */
   { "\x3c\x54\x09\x39\x40", 16, 16 },  /* OEPINT: OUT endpoint interrupt
              bits */
};

const Field_t OTG_FS_DEVICE_DVBUSDIS_fields[] = {
   { "\x58\x25\x53\x11\x40", 0, 16 },  /* VBUSDT: Device VBUS discharge time */
};

const Field_t OTG_FS_DEVICE_DVBUSPULSE_fields[] = {
   { "\x11\x60\x95\x4d\x00", 0, 12 },  /* DVBUSP: Device VBUS pulsing time */
};

const Field_t OTG_FS_DEVICE_DIEPEMPMSK_fields[] = {
   { "\x24\xe1\x50\x51\x81\x85\x34", 0, 16 },  /* INEPTXFEM: IN EP Tx FIFO empty interrupt mask
              bits */
};

const Field_t OTG_FS_DEVICE_FS_DIEPCTL0_fields[] = {
   { "\x35\x04\xc9\x68", 0, 2 },  /* MPSIZ: Maximum packet size */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USB active endpoint */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAK status */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: Endpoint type */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* STALL: STALL handshake */
   { "\x51\x81\x8e\x54\xd0", 22, 4 },  /* TXFNUM: TxFIFO number */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: Clear NAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: Set NAK */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: Endpoint disable */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: Endpoint enable */
};

const Field_t OTG_FS_DEVICE_DIEPINT0_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x50\xf0\xc0", 3, 1 },  /* TOC: TOC */
   { "\x25\x45\x18\x18\x50", 4, 1 },  /* ITTXFE: ITTXFE */
   { "\x24\xe1\x50\x38\x50", 6, 1 },  /* INEPNE: INEPNE */
   { "\x51\x81\x85", 7, 1 },  /* TXFE: TXFE */
};

const Field_t OTG_FS_DEVICE_DIEPTSIZ0_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 7 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 2 },  /* PKTCNT: Packet count */
};

const Field_t OTG_FS_DEVICE_DTXFSTS0_fields[] = {
   { "\x24\xe1\x50\x50\x64\xc1\x58", 0, 16 },  /* INEPTFSAV: IN endpoint TxFIFO space
              available */
};

const Field_t OTG_FS_DEVICE_DIEPCTL1_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x14\xf3\x95\x36\x51\x10\x24\x40", 16, 1 },  /* EONUM_DPID: EONUM/DPID */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x51\x81\x8e\x54\xd0", 22, 4 },  /* TXFNUM: TXFNUM */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x4c\x46\xd0\x24\x49\x53\x15\x63\x86\x48\xd0", 28, 1 },  /* SD0PID_SEVNFRM: SD0PID/SEVNFRM */
   { "\x4c\xf1\x04\x19\x23\x65\x4c\x47\x10\x24\x40", 29, 1 },  /* SODDFRM_SD1PID: SODDFRM/SD1PID */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DIEPINT1_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x50\xf0\xc0", 3, 1 },  /* TOC: TOC */
   { "\x25\x45\x18\x18\x50", 4, 1 },  /* ITTXFE: ITTXFE */
   { "\x24\xe1\x50\x38\x50", 6, 1 },  /* INEPNE: INEPNE */
   { "\x51\x81\x85", 7, 1 },  /* TXFE: TXFE */
};

const Field_t OTG_FS_DEVICE_DIEPTSIZ1_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x34\x33\x94", 29, 2 },  /* MCNT: Multi count */
};

const Field_t OTG_FS_DEVICE_DTXFSTS1_fields[] = {
   { "\x24\xe1\x50\x50\x64\xc1\x58", 0, 16 },  /* INEPTFSAV: IN endpoint TxFIFO space
              available */
};

const Field_t OTG_FS_DEVICE_DIEPCTL2_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x14\xf3\x95\x36\x51\x10\x24\x40", 16, 1 },  /* EONUM_DPID: EONUM/DPID */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x51\x81\x8e\x54\xd0", 22, 4 },  /* TXFNUM: TXFNUM */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x4c\x46\xd0\x24\x49\x53\x15\x63\x86\x48\xd0", 28, 1 },  /* SD0PID_SEVNFRM: SD0PID/SEVNFRM */
   { "\x4c\xf1\x04\x19\x23\x40", 29, 1 },  /* SODDFRM: SODDFRM */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DIEPINT2_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x50\xf0\xc0", 3, 1 },  /* TOC: TOC */
   { "\x25\x45\x18\x18\x50", 4, 1 },  /* ITTXFE: ITTXFE */
   { "\x24\xe1\x50\x38\x50", 6, 1 },  /* INEPNE: INEPNE */
   { "\x51\x81\x85", 7, 1 },  /* TXFE: TXFE */
};

const Field_t OTG_FS_DEVICE_DIEPTSIZ2_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x34\x33\x94", 29, 2 },  /* MCNT: Multi count */
};

const Field_t OTG_FS_DEVICE_DTXFSTS2_fields[] = {
   { "\x24\xe1\x50\x50\x64\xc1\x58", 0, 16 },  /* INEPTFSAV: IN endpoint TxFIFO space
              available */
};

const Field_t OTG_FS_DEVICE_DIEPCTL3_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x14\xf3\x95\x36\x51\x10\x24\x40", 16, 1 },  /* EONUM_DPID: EONUM/DPID */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x51\x81\x8e\x54\xd0", 22, 4 },  /* TXFNUM: TXFNUM */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x4c\x46\xd0\x24\x49\x53\x15\x63\x86\x48\xd0", 28, 1 },  /* SD0PID_SEVNFRM: SD0PID/SEVNFRM */
   { "\x4c\xf1\x04\x19\x23\x40", 29, 1 },  /* SODDFRM: SODDFRM */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DIEPINT3_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x50\xf0\xc0", 3, 1 },  /* TOC: TOC */
   { "\x25\x45\x18\x18\x50", 4, 1 },  /* ITTXFE: ITTXFE */
   { "\x24\xe1\x50\x38\x50", 6, 1 },  /* INEPNE: INEPNE */
   { "\x51\x81\x85", 7, 1 },  /* TXFE: TXFE */
};

const Field_t OTG_FS_DEVICE_DIEPTSIZ3_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x34\x33\x94", 29, 2 },  /* MCNT: Multi count */
};

const Field_t OTG_FS_DEVICE_DTXFSTS3_fields[] = {
   { "\x24\xe1\x50\x50\x64\xc1\x58", 0, 16 },  /* INEPTFSAV: IN endpoint TxFIFO space
              available */
};

const Field_t OTG_FS_DEVICE_DOEPCTL0_fields[] = {
   { "\x35\x04\xc9\x68", 0, 2 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4c\xe4\x0d", 20, 1 },  /* SNPM: SNPM */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DOEPINT0_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x4d\x45\x50", 3, 1 },  /* STUP: STUP */
   { "\x3d\x41\x50\x10\x94\xc0", 4, 1 },  /* OTEPDIS: OTEPDIS */
   { "\x09\xd0\x93\x51\x54\x00", 6, 1 },  /* B2BSTUP: B2BSTUP */
};

const Field_t OTG_FS_DEVICE_DOEPTSIZ0_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 7 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 1 },  /* PKTCNT: Packet count */
   { "\x4d\x45\x50\x0c\xe5\x00", 29, 2 },  /* STUPCNT: SETUP packet count */
};

const Field_t OTG_FS_DEVICE_DOEPCTL1_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x14\xf3\x95\x36\x51\x10\x24\x40", 16, 1 },  /* EONUM_DPID: EONUM/DPID */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4c\xe4\x0d", 20, 1 },  /* SNPM: SNPM */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x4c\x46\xd0\x24\x49\x53\x15\x63\x86\x48\xd0", 28, 1 },  /* SD0PID_SEVNFRM: SD0PID/SEVNFRM */
   { "\x4c\xf1\x04\x19\x23\x40", 29, 1 },  /* SODDFRM: SODDFRM */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DOEPINT1_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x4d\x45\x50", 3, 1 },  /* STUP: STUP */
   { "\x3d\x41\x50\x10\x94\xc0", 4, 1 },  /* OTEPDIS: OTEPDIS */
   { "\x09\xd0\x93\x51\x54\x00", 6, 1 },  /* B2BSTUP: B2BSTUP */
};

const Field_t OTG_FS_DEVICE_DOEPTSIZ1_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x49\x81\x10\x24\x49\x53\x51\x54\x03\x39\x40", 29, 2 },  /* RXDPID_STUPCNT: Received data PID/SETUP packet
              count */
};

const Field_t OTG_FS_DEVICE_DOEPCTL2_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x14\xf3\x95\x36\x51\x10\x24\x40", 16, 1 },  /* EONUM_DPID: EONUM/DPID */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4c\xe4\x0d", 20, 1 },  /* SNPM: SNPM */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x4c\x46\xd0\x24\x49\x53\x15\x63\x86\x48\xd0", 28, 1 },  /* SD0PID_SEVNFRM: SD0PID/SEVNFRM */
   { "\x4c\xf1\x04\x19\x23\x40", 29, 1 },  /* SODDFRM: SODDFRM */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DOEPINT2_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x4d\x45\x50", 3, 1 },  /* STUP: STUP */
   { "\x3d\x41\x50\x10\x94\xc0", 4, 1 },  /* OTEPDIS: OTEPDIS */
   { "\x09\xd0\x93\x51\x54\x00", 6, 1 },  /* B2BSTUP: B2BSTUP */
};

const Field_t OTG_FS_DEVICE_DOEPTSIZ2_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x49\x81\x10\x24\x49\x53\x51\x54\x03\x39\x40", 29, 2 },  /* RXDPID_STUPCNT: Received data PID/SETUP packet
              count */
};

const Field_t OTG_FS_DEVICE_DOEPCTL3_fields[] = {
   { "\x35\x04\xc9\x68", 0, 11 },  /* MPSIZ: MPSIZ */
   { "\x55\x30\x81\x15\x00", 15, 1 },  /* USBAEP: USBAEP */
   { "\x14\xf3\x95\x36\x51\x10\x24\x40", 16, 1 },  /* EONUM_DPID: EONUM/DPID */
   { "\x38\x12\xd3\x51\x30", 17, 1 },  /* NAKSTS: NAKSTS */
   { "\x15\x05\x19\x40", 18, 2 },  /* EPTYP: EPTYP */
   { "\x4c\xe4\x0d", 20, 1 },  /* SNPM: SNPM */
   { "\x4d\x40\x4c\x30", 21, 1 },  /* Stall: Stall */
   { "\x0c\xe0\x4b", 26, 1 },  /* CNAK: CNAK */
   { "\x4c\xe0\x4b", 27, 1 },  /* SNAK: SNAK */
   { "\x4c\x46\xd0\x24\x49\x53\x15\x63\x86\x48\xd0", 28, 1 },  /* SD0PID_SEVNFRM: SD0PID/SEVNFRM */
   { "\x4c\xf1\x04\x19\x23\x40", 29, 1 },  /* SODDFRM: SODDFRM */
   { "\x15\x01\x09\x4c", 30, 1 },  /* EPDIS: EPDIS */
   { "\x15\x01\x4e\x04", 31, 1 },  /* EPENA: EPENA */
};

const Field_t OTG_FS_DEVICE_DOEPINT3_fields[] = {
   { "\x60\x64\x83", 0, 1 },  /* XFRC: XFRC */
   { "\x15\x01\x09\x4c\x40", 1, 1 },  /* EPDISD: EPDISD */
   { "\x4d\x45\x50", 3, 1 },  /* STUP: STUP */
   { "\x3d\x41\x50\x10\x94\xc0", 4, 1 },  /* OTEPDIS: OTEPDIS */
   { "\x09\xd0\x93\x51\x54\x00", 6, 1 },  /* B2BSTUP: B2BSTUP */
};

const Field_t OTG_FS_DEVICE_DOEPTSIZ3_fields[] = {
   { "\x60\x64\x93\x25\xa0", 0, 19 },  /* XFRSIZ: Transfer size */
   { "\x40\xb5\x03\x39\x40", 19, 10 },  /* PKTCNT: Packet count */
   { "\x49\x81\x10\x24\x49\x53\x51\x54\x03\x39\x40", 29, 2 },  /* RXDPID_STUPCNT: Received data PID/SETUP packet
              count */
};

const Register_t OTG_FS_DEVICE_registers[] = {
   {"\x19\x39\x44\x0c\x61\xc0", 0, 32, 0, OTG_FS_DEVICE_FS_DCFG_fields, 4}, /* FS_DCFG: OTG_FS device configuration register
          (OTG_FS_DCFG) */
   {"\x19\x39\x44\x0d\x43\x00", 4, 32, 0, OTG_FS_DEVICE_FS_DCTL_fields, 10}, /* FS_DCTL: OTG_FS device control register
          (OTG_FS_DCTL) */
   {"\x19\x39\x44\x4d\x44\xc0", 8, 32, 0, OTG_FS_DEVICE_FS_DSTS_fields, 4}, /* FS_DSTS: OTG_FS device status register
          (OTG_FS_DSTS) */
   {"\x19\x39\x44\x24\x54\x0d\x4c\xb0", 16, 32, 0, OTG_FS_DEVICE_FS_DIEPMSK_fields, 6}, /* FS_DIEPMSK: OTG_FS device IN endpoint common interrupt
          mask register (OTG_FS_DIEPMSK) */
   {"\x19\x39\x44\x3c\x54\x0d\x4c\xb0", 20, 32, 0, OTG_FS_DEVICE_FS_DOEPMSK_fields, 4}, /* FS_DOEPMSK: OTG_FS device OUT endpoint common interrupt
          mask register (OTG_FS_DOEPMSK) */
   {"\x19\x39\x44\x04\x93\x94", 24, 32, 0, OTG_FS_DEVICE_FS_DAINT_fields, 2}, /* FS_DAINT: OTG_FS device all endpoints interrupt
          register (OTG_FS_DAINT) */
   {"\x19\x39\x44\x04\x93\x94\x35\x32\xc0", 28, 32, 0, OTG_FS_DEVICE_FS_DAINTMSK_fields, 2}, /* FS_DAINTMSK: OTG_FS all endpoints interrupt mask register
          (OTG_FS_DAINTMSK) */
   {"\x11\x60\x95\x4c\x42\x53", 40, 32, 0, OTG_FS_DEVICE_DVBUSDIS_fields, 1}, /* DVBUSDIS: OTG_FS device VBUS discharge time
          register */
   {"\x11\x60\x95\x4d\x05\x4c\x4c\x50", 44, 32, 0, OTG_FS_DEVICE_DVBUSPULSE_fields, 1}, /* DVBUSPULSE: OTG_FS device VBUS pulsing time
          register */
   {"\x10\x91\x50\x14\xd4\x0d\x4c\xb0", 52, 32, 0, OTG_FS_DEVICE_DIEPEMPMSK_fields, 1}, /* DIEPEMPMSK: OTG_FS device IN endpoint FIFO empty
          interrupt mask register */
   {"\x19\x39\x44\x24\x54\x03\x50\xc6\xc0", 256, 32, 0, OTG_FS_DEVICE_FS_DIEPCTL0_fields, 10}, /* FS_DIEPCTL0: OTG_FS device control IN endpoint 0 control
          register (OTG_FS_DIEPCTL0) */
   {"\x10\x91\x50\x24\xe5\x1b", 264, 32, 0, OTG_FS_DEVICE_DIEPINT0_fields, 6}, /* DIEPINT0: device endpoint-x interrupt
          register */
   {"\x10\x91\x50\x51\x32\x5a\x6c", 272, 32, 0, OTG_FS_DEVICE_DIEPTSIZ0_fields, 2}, /* DIEPTSIZ0: device endpoint-0 transfer size
          register */
   {"\x11\x46\x06\x4d\x44\xdb", 280, 32, 0, OTG_FS_DEVICE_DTXFSTS0_fields, 1}, /* DTXFSTS0: OTG_FS device IN endpoint transmit FIFO
          status register */
   {"\x10\x91\x50\x0d\x43\x1c", 288, 32, 0, OTG_FS_DEVICE_DIEPCTL1_fields, 13}, /* DIEPCTL1: OTG device endpoint-1 control
          register */
   {"\x10\x91\x50\x24\xe5\x1c", 296, 32, 0, OTG_FS_DEVICE_DIEPINT1_fields, 6}, /* DIEPINT1: device endpoint-1 interrupt
          register */
   {"\x10\x91\x50\x51\x32\x5a\x70", 304, 32, 0, OTG_FS_DEVICE_DIEPTSIZ1_fields, 3}, /* DIEPTSIZ1: device endpoint-1 transfer size
          register */
   {"\x11\x46\x06\x4d\x44\xdc", 312, 32, 0, OTG_FS_DEVICE_DTXFSTS1_fields, 1}, /* DTXFSTS1: OTG_FS device IN endpoint transmit FIFO
          status register */
   {"\x10\x91\x50\x0d\x43\x1d", 320, 32, 0, OTG_FS_DEVICE_DIEPCTL2_fields, 13}, /* DIEPCTL2: OTG device endpoint-2 control
          register */
   {"\x10\x91\x50\x24\xe5\x1d", 328, 32, 0, OTG_FS_DEVICE_DIEPINT2_fields, 6}, /* DIEPINT2: device endpoint-2 interrupt
          register */
   {"\x10\x91\x50\x51\x32\x5a\x74", 336, 32, 0, OTG_FS_DEVICE_DIEPTSIZ2_fields, 3}, /* DIEPTSIZ2: device endpoint-2 transfer size
          register */
   {"\x11\x46\x06\x4d\x44\xdd", 344, 32, 0, OTG_FS_DEVICE_DTXFSTS2_fields, 1}, /* DTXFSTS2: OTG_FS device IN endpoint transmit FIFO
          status register */
   {"\x10\x91\x50\x0d\x43\x1e", 352, 32, 0, OTG_FS_DEVICE_DIEPCTL3_fields, 13}, /* DIEPCTL3: OTG device endpoint-3 control
          register */
   {"\x10\x91\x50\x24\xe5\x1e", 360, 32, 0, OTG_FS_DEVICE_DIEPINT3_fields, 6}, /* DIEPINT3: device endpoint-3 interrupt
          register */
   {"\x10\x91\x50\x51\x32\x5a\x78", 368, 32, 0, OTG_FS_DEVICE_DIEPTSIZ3_fields, 3}, /* DIEPTSIZ3: device endpoint-3 transfer size
          register */
   {"\x11\x46\x06\x4d\x44\xde", 376, 32, 0, OTG_FS_DEVICE_DTXFSTS3_fields, 1}, /* DTXFSTS3: OTG_FS device IN endpoint transmit FIFO
          status register */
   {"\x10\xf1\x50\x0d\x43\x1b", 768, 32, 0, OTG_FS_DEVICE_DOEPCTL0_fields, 10}, /* DOEPCTL0: device endpoint-0 control
          register */
   {"\x10\xf1\x50\x24\xe5\x1b", 776, 32, 0, OTG_FS_DEVICE_DOEPINT0_fields, 5}, /* DOEPINT0: device endpoint-0 interrupt
          register */
   {"\x10\xf1\x50\x51\x32\x5a\x6c", 784, 32, 0, OTG_FS_DEVICE_DOEPTSIZ0_fields, 3}, /* DOEPTSIZ0: device OUT endpoint-0 transfer size
          register */
   {"\x10\xf1\x50\x0d\x43\x1c", 800, 32, 0, OTG_FS_DEVICE_DOEPCTL1_fields, 13}, /* DOEPCTL1: device endpoint-1 control
          register */
   {"\x10\xf1\x50\x24\xe5\x1c", 808, 32, 0, OTG_FS_DEVICE_DOEPINT1_fields, 5}, /* DOEPINT1: device endpoint-1 interrupt
          register */
   {"\x10\xf1\x50\x51\x32\x5a\x70", 816, 32, 0, OTG_FS_DEVICE_DOEPTSIZ1_fields, 3}, /* DOEPTSIZ1: device OUT endpoint-1 transfer size
          register */
   {"\x10\xf1\x50\x0d\x43\x1d", 832, 32, 0, OTG_FS_DEVICE_DOEPCTL2_fields, 13}, /* DOEPCTL2: device endpoint-2 control
          register */
   {"\x10\xf1\x50\x24\xe5\x1d", 840, 32, 0, OTG_FS_DEVICE_DOEPINT2_fields, 5}, /* DOEPINT2: device endpoint-2 interrupt
          register */
   {"\x10\xf1\x50\x51\x32\x5a\x74", 848, 32, 0, OTG_FS_DEVICE_DOEPTSIZ2_fields, 3}, /* DOEPTSIZ2: device OUT endpoint-2 transfer size
          register */
   {"\x10\xf1\x50\x0d\x43\x1e", 864, 32, 0, OTG_FS_DEVICE_DOEPCTL3_fields, 13}, /* DOEPCTL3: device endpoint-3 control
          register */
   {"\x10\xf1\x50\x24\xe5\x1e", 872, 32, 0, OTG_FS_DEVICE_DOEPINT3_fields, 5}, /* DOEPINT3: device endpoint-3 interrupt
          register */
   {"\x10\xf1\x50\x51\x32\x5a\x78", 880, 32, 0, OTG_FS_DEVICE_DOEPTSIZ3_fields, 3}, /* DOEPTSIZ3: device OUT endpoint-3 transfer size
          register */
};

const Field_t OTG_FS_PWRCLK_FS_PCGCCTL_fields[] = {
   { "\x4d\x44\x10\x0c\xc2\xc0", 0, 1 },  /* STPPCLK: Stop PHY clock */
   { "\x1c\x15\x05\x20\x33\x0b", 1, 1 },  /* GATEHCLK: Gate HCLK */
   { "\x40\x86\x53\x55\x34\x00", 4, 1 },  /* PHYSUSP: PHY Suspended */
};

const Register_t OTG_FS_PWRCLK_registers[] = {
   {"\x19\x39\x50\x0c\x70\xc3\x50\xc0", 0, 32, 0, OTG_FS_PWRCLK_FS_PCGCCTL_fields, 3}, /* FS_PCGCCTL: OTG_FS power and clock gating control
          register */
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
   { "\x50\x90\xcb\x24\xe5\x00", 1, 1 },  /* TICKINT: SysTick exception request
              enable */
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
   { "\x4c\xb1\x57", 30, 1 },  /* SKEW: SKEW flag: Indicates whether the TENMS
              value is exact */
   { "\x38\xf4\x85\x18", 31, 1 },  /* NOREF: NOREF flag. Reads as zero */
};

const Register_t STK_registers[] = {
   {"\x0d\x44\x8c", 0, 32, 0, STK_CTRL_fields, 4}, /* CTRL: SysTick control and status
          register */
   {"\x30\xf0\x44", 4, 32, 0, STK_LOAD_fields, 1}, /* LOAD: SysTick reload value register */
   {"\x58\x13\x00", 8, 32, 0, STK_VAL_fields, 1}, /* VAL: SysTick current value register */
   {"\x0c\x13\x09\x08", 12, 32, 0, STK_CALIB_fields, 3}, /* CALIB: SysTick calibration value
          register */
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

const Field_t NVIC_ICER0_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER1_fields[] = {
   { "\x0c\xc4\x85\x38\x10", 0, 32 },  /* CLRENA: CLRENA */
};

const Field_t NVIC_ICER2_fields[] = {
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

const Field_t NVIC_ICPR0_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR1_fields[] = {
   { "\x0c\xc4\x90\x14\xe1\x00", 0, 32 },  /* CLRPEND: CLRPEND */
};

const Field_t NVIC_ICPR2_fields[] = {
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

const Register_t NVIC_registers[] = {
   {"\x25\x31\x52\x6c", 0, 32, 0, NVIC_ISER0_fields, 1}, /* ISER0: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x70", 4, 32, 0, NVIC_ISER1_fields, 1}, /* ISER1: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x74", 8, 32, 0, NVIC_ISER2_fields, 1}, /* ISER2: Interrupt Set-Enable Register */
   {"\x24\x31\x52\x6c", 128, 32, 0, NVIC_ICER0_fields, 1}, /* ICER0: Interrupt Clear-Enable
          Register */
   {"\x24\x31\x52\x70", 132, 32, 0, NVIC_ICER1_fields, 1}, /* ICER1: Interrupt Clear-Enable
          Register */
   {"\x24\x31\x52\x74", 136, 32, 0, NVIC_ICER2_fields, 1}, /* ICER2: Interrupt Clear-Enable
          Register */
   {"\x25\x34\x12\x6c", 256, 32, 0, NVIC_ISPR0_fields, 1}, /* ISPR0: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x70", 260, 32, 0, NVIC_ISPR1_fields, 1}, /* ISPR1: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x74", 264, 32, 0, NVIC_ISPR2_fields, 1}, /* ISPR2: Interrupt Set-Pending Register */
   {"\x24\x34\x12\x6c", 384, 32, 0, NVIC_ICPR0_fields, 1}, /* ICPR0: Interrupt Clear-Pending
          Register */
   {"\x24\x34\x12\x70", 388, 32, 0, NVIC_ICPR1_fields, 1}, /* ICPR1: Interrupt Clear-Pending
          Register */
   {"\x24\x34\x12\x74", 392, 32, 0, NVIC_ICPR2_fields, 1}, /* ICPR2: Interrupt Clear-Pending
          Register */
   {"\x24\x10\x92\x6c", 512, 32, 0, NVIC_IABR0_fields, 1}, /* IABR0: Interrupt Active Bit Register */
   {"\x24\x10\x92\x70", 516, 32, 0, NVIC_IABR1_fields, 1}, /* IABR1: Interrupt Active Bit Register */
   {"\x24\x10\x92\x74", 520, 32, 0, NVIC_IABR2_fields, 1}, /* IABR2: Interrupt Active Bit Register */
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
};

const Field_t SCB_CPUID_fields[] = {
   { "\x48\x55\x89\x4c\x93\xce", 0, 4 },  /* Revision: Revision number */
   { "\x40\x14\x94\x38\xf0", 4, 12 },  /* PartNo: Part number of the
              processor */
   { "\x0c\xf3\x93\x50\x13\x94", 16, 4 },  /* Constant: Reads as 0xF */
   { "\x58\x14\x89\x04\xe5\x00", 20, 4 },  /* Variant: Variant number */
   { "\x24\xd4\x0c\x14\xd1\x4e\x50\x54\x80", 24, 8 },  /* Implementer: Implementer code */
};

const Field_t SCB_ICSR_fields[] = {
   { "\x58\x50\xd4\x04\x35\x09\x58\x50", 0, 9 },  /* VECTACTIVE: Active vector */
   { "\x48\x55\x14\x3c\x20\x53\x14", 11, 1 },  /* RETTOBASE: Return to base level */
   { "\x58\x50\xd4\x40\x53\x84\x24\xe1\xc0", 12, 7 },  /* VECTPENDING: Pending vector */
   { "\x25\x34\x90\x14\xe1\x09\x38\x70", 22, 1 },  /* ISRPENDING: Interrupt pending flag */
   { "\x40\x53\x84\x4d\x40\xcc\x48", 25, 1 },  /* PENDSTCLR: SysTick exception clear-pending
              bit */
   { "\x40\x53\x84\x4d\x44\xc5\x50", 26, 1 },  /* PENDSTSET: SysTick exception set-pending
              bit */
   { "\x40\x53\x84\x4d\x60\xcc\x48", 27, 1 },  /* PENDSVCLR: PendSV clear-pending bit */
   { "\x40\x53\x84\x4d\x64\xc5\x50", 28, 1 },  /* PENDSVSET: PendSV set-pending bit */
   { "\x38\xd2\x50\x14\xe1\x13\x15\x40", 31, 1 },  /* NMIPENDSET: NMI set-pending bit. */
};

const Field_t SCB_VTOR_fields[] = {
   { "\x50\x23\x0f\x18\x60", 9, 21 },  /* TBLOFF: Vector table base offset
              field */
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
   { "\x38\xf3\x82\x05\x31\x54\x21\x21\x05\x38\x10", 0, 1 },  /* NONBASETHRDENA: Configures how the processor enters
              Thread mode */
   { "\x55\x31\x52\x4c\x55\x0d\x40\x53\x84", 1, 1 },  /* USERSETMPEND: USERSETMPEND */
   { "\x54\xe0\x4c\x24\x73\xa5\x95\x44\x90", 3, 1 },  /* UNALIGN__TRP: UNALIGN_ TRP */
   { "\x10\x95\xa5\x6e\x55\x12\x40", 4, 1 },  /* DIV_0_TRP: DIV_0_TRP */
   { "\x08\x62\x06\x38\xd2\x47\x38", 8, 1 },  /* BFHFNMIGN: BFHFNMIGN */
   { "\x4d\x42\xc1\x30\x91\xce", 9, 1 },  /* STKALIGN: STKALIGN */
};

const Field_t SCB_SHPR1_fields[] = {
   { "\x41\x22\x65\x7c", 0, 8 },  /* PRI_4: Priority of system handler
              4 */
   { "\x41\x22\x65\x80", 8, 8 },  /* PRI_5: Priority of system handler
              5 */
   { "\x41\x22\x65\x84", 16, 8 },  /* PRI_6: Priority of system handler
              6 */
};

const Field_t SCB_SHPR2_fields[] = {
   { "\x41\x22\x65\x71\xc0", 24, 8 },  /* PRI_11: Priority of system handler
              11 */
};

const Field_t SCB_SHPR3_fields[] = {
   { "\x41\x22\x65\x71\xf0", 16, 8 },  /* PRI_14: Priority of system handler
              14 */
   { "\x41\x22\x65\x72\x00", 24, 8 },  /* PRI_15: Priority of system handler
              15 */
};

const Field_t SCB_SHCRS_fields[] = {
   { "\x34\x53\x46\x05\x53\x14\x04\x35\x00", 0, 1 },  /* MEMFAULTACT: Memory management fault exception active
              bit */
   { "\x09\x54\xc6\x05\x53\x14\x04\x35\x00", 1, 1 },  /* BUSFAULTACT: Bus fault exception active
              bit */
   { "\x55\x31\xc6\x05\x53\x14\x04\x35\x00", 3, 1 },  /* USGFAULTACT: Usage fault exception active
              bit */
   { "\x4d\x60\xc1\x30\xc0\x43\x50", 7, 1 },  /* SVCALLACT: SVC call active bit */
   { "\x34\xf3\x89\x50\xf4\x81\x0d\x40", 8, 1 },  /* MONITORACT: Debug monitor active bit */
   { "\x40\x53\x84\x4d\x60\x43\x50", 10, 1 },  /* PENDSVACT: PendSV exception active
              bit */
   { "\x4d\x94\xd4\x24\x32\xc1\x0d\x40", 11, 1 },  /* SYSTICKACT: SysTick exception active
              bit */
   { "\x55\x31\xc6\x05\x53\x14\x40\x53\x84\x14\x40", 12, 1 },  /* USGFAULTPENDED: Usage fault exception pending
              bit */
   { "\x34\x53\x46\x05\x53\x14\x40\x53\x84\x14\x40", 13, 1 },  /* MEMFAULTPENDED: Memory management fault exception
              pending bit */
   { "\x09\x54\xc6\x05\x53\x14\x40\x53\x84\x14\x40", 14, 1 },  /* BUSFAULTPENDED: Bus fault exception pending
              bit */
   { "\x4d\x60\xc1\x30\xc4\x05\x38\x41\x44", 15, 1 },  /* SVCALLPENDED: SVC call pending bit */
   { "\x34\x53\x46\x05\x53\x14\x14\xe0\x40", 16, 1 },  /* MEMFAULTENA: Memory management fault enable
              bit */
   { "\x09\x54\xc6\x05\x53\x14\x14\xe0\x40", 17, 1 },  /* BUSFAULTENA: Bus fault enable bit */
   { "\x55\x31\xc6\x05\x53\x14\x14\xe0\x40", 18, 1 },  /* USGFAULTENA: Usage fault enable bit */
};

const Field_t SCB_CFSR_UFSR_BFSR_MMFSR_fields[] = {
   { "\x24\x10\xc3\x58\x93\xcc", 1, 1 },  /* IACCVIOL: Instruction access violation
              flag */
   { "\x35\x53\x93\x50\xb1\x52\x48", 3, 1 },  /* MUNSTKERR: Memory manager fault on unstacking for a
              return from exception */
   { "\x35\x35\x0b\x15\x24\x80", 4, 1 },  /* MSTKERR: Memory manager fault on stacking for
              exception entry. */
   { "\x34\xc4\xd0\x15\x24\x80", 5, 1 },  /* MLSPERR: MLSPERR */
   { "\x34\xd0\x52\x58\x13\x09\x10", 7, 1 },  /* MMARVALID: Memory Management Fault Address Register
              (MMAR) valid flag */
   { "\x24\x25\x53\x15\x24\x80", 8, 1 },  /* IBUSERR: Instruction bus error */
   { "\x41\x21\x43\x25\x31\x52\x48", 9, 1 },  /* PRECISERR: Precise data bus error */
   { "\x24\xd4\x12\x14\x32\x53\x15\x24\x80", 10, 1 },  /* IMPRECISERR: Imprecise data bus error */
   { "\x54\xe4\xd4\x2c\x54\x92", 11, 1 },  /* UNSTKERR: Bus fault on unstacking for a return
              from exception */
   { "\x4d\x42\xc5\x49\x20", 12, 1 },  /* STKERR: Bus fault on stacking for exception
              entry */
   { "\x31\x34\x05\x49\x20", 13, 1 },  /* LSPERR: Bus fault on floating-point lazy state
              preservation */
   { "\x08\x60\x52\x58\x13\x09\x10", 15, 1 },  /* BFARVALID: Bus Fault Address Register (BFAR) valid
              flag */
   { "\x54\xe1\x05\x18\x93\x93\x51\x20", 16, 1 },  /* UNDEFINSTR: Undefined instruction usage
              fault */
   { "\x24\xe5\x93\x50\x15\x05", 17, 1 },  /* INVSTATE: Invalid state usage fault */
   { "\x24\xe5\x90\x0c", 18, 1 },  /* INVPC: Invalid PC load usage
              fault */
   { "\x38\xf0\xd0", 19, 1 },  /* NOCP: No coprocessor usage
              fault. */
   { "\x54\xe0\x4c\x24\x73\x85\x10", 24, 1 },  /* UNALIGNED: Unaligned access usage
              fault */
   { "\x10\x95\x82\x65\xa1\x52\x3c", 25, 1 },  /* DIVBYZERO: Divide by zero usage fault */
};

const Field_t SCB_HFSR_fields[] = {
   { "\x58\x50\xd4\x50\x23\x00", 1, 1 },  /* VECTTBL: Vector table hard fault */
   { "\x18\xf4\x83\x14\x40", 30, 1 },  /* FORCED: Forced hard fault */
   { "\x10\x50\x95\x1e\x55\x94", 31, 1 },  /* DEBUG_VT: Reserved for Debug use */
};

const Field_t SCB_MMFAR_fields[] = {
   { "\x34\xd1\x81\x48", 0, 32 },  /* MMFAR: Memory management fault
              address */
};

const Field_t SCB_BFAR_fields[] = {
   { "\x08\x60\x52", 0, 32 },  /* BFAR: Bus fault address */
};

const Field_t SCB_AFSR_fields[] = {
   { "\x24\xd4\x04\x14\x60", 0, 32 },  /* IMPDEF: Implementation defined */
};

const Register_t SCB_registers[] = {
   {"\x0d\x05\x49\x10", 0, 32, 0, SCB_CPUID_fields, 5}, /* CPUID: CPUID base register */
   {"\x24\x34\xd2", 4, 32, 0, SCB_ICSR_fields, 9}, /* ICSR: Interrupt control and state
          register */
   {"\x59\x43\xd2", 8, 32, 0, SCB_VTOR_fields, 1}, /* VTOR: Vector table offset register */
   {"\x04\x94\x83\x48", 12, 32, 0, SCB_AIRCR_fields, 6}, /* AIRCR: Application interrupt and reset control
          register */
   {"\x4c\x34\x80", 16, 32, 0, SCB_SCR_fields, 3}, /* SCR: System control register */
   {"\x0c\x34\x80", 20, 32, 0, SCB_CCR_fields, 6}, /* CCR: Configuration and control
          register */
   {"\x4c\x84\x12\x70", 24, 32, 0, SCB_SHPR1_fields, 3}, /* SHPR1: System handler priority
          registers */
   {"\x4c\x84\x12\x74", 28, 32, 0, SCB_SHPR2_fields, 1}, /* SHPR2: System handler priority
          registers */
   {"\x4c\x84\x12\x78", 32, 32, 0, SCB_SHPR3_fields, 2}, /* SHPR3: System handler priority
          registers */
   {"\x4c\x80\xd2\x4c", 36, 32, 0, SCB_SHCRS_fields, 14}, /* SHCRS: System handler control and state
          register */
   {"\x0c\x64\xd2\x95\x51\x93\x4a\x50\x86\x4d\x29\x4d\x34\x64\xd2", 40, 32, 0, SCB_CFSR_UFSR_BFSR_MMFSR_fields, 18}, /* CFSR_UFSR_BFSR_MMFSR: Configurable fault status
          register */
   {"\x20\x64\xd2", 44, 32, 0, SCB_HFSR_fields, 3}, /* HFSR: Hard fault status register */
   {"\x34\xd1\x81\x48", 52, 32, 0, SCB_MMFAR_fields, 1}, /* MMFAR: Memory management fault address
          register */
   {"\x08\x60\x52", 56, 32, 0, SCB_BFAR_fields, 1}, /* BFAR: Bus fault address register */
   {"\x04\x64\xd2", 60, 32, 0, SCB_AFSR_fields, 1}, /* AFSR: Auxiliary fault status
          register */
};

const Field_t FPU_CPACR_CPACR_fields[] = {
   { "\x0d\x00", 20, 4 },  /* CP: CP */
};

const Register_t FPU_CPACR_registers[] = {
   {"\x0d\x00\x43\x48", 0, 32, 0, FPU_CPACR_CPACR_fields, 1}, /* CPACR: Coprocessor access control
          register */
};

const Field_t MPU_MPU_TYPER_fields[] = {
   { "\x4c\x54\x01\x48\x15\x05", 0, 1 },  /* SEPARATE: Separate flag */
   { "\x11\x21\x47\x24\xf3\x80", 8, 8 },  /* DREGION: Number of MPU data regions */
   { "\x25\x21\x47\x24\xf3\x80", 16, 8 },  /* IREGION: Number of MPU instruction
              regions */
};

const Field_t MPU_MPU_CTRL_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: Enables the MPU */
   { "\x20\x63\x8d\x24\x53\x81", 1, 1 },  /* HFNMIENA: Enables the operation of MPU during hard
              fault */
   { "\x41\x22\x56\x10\x51\x85\x38\x10", 2, 1 },  /* PRIVDEFENA: Enable priviliged software access to
              default memory map */
};

const Field_t MPU_MPU_RNR_fields[] = {
   { "\x48\x51\xc9\x3c\xe0", 0, 8 },  /* REGION: MPU region */
};

const Field_t MPU_MPU_RBAR_fields[] = {
   { "\x48\x51\xc9\x3c\xe0", 0, 4 },  /* REGION: MPU region field */
   { "\x58\x13\x09\x10", 4, 1 },  /* VALID: MPU region number valid */
   { "\x04\x41\x12", 5, 27 },  /* ADDR: Region base address field */
};

const Field_t MPU_MPU_RASR_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: Region enable bit. */
   { "\x4c\x96\x85", 1, 5 },  /* SIZE: Size of the MPU protection
              region */
   { "\x4d\x21\x00", 8, 8 },  /* SRD: Subregion disable bits */
   { "\x08", 16, 1 },  /* B: memory attribute */
   { "\x0c", 17, 1 },  /* C: memory attribute */
   { "\x4c", 18, 1 },  /* S: Shareable memory attribute */
   { "\x50\x56\x00", 19, 3 },  /* TEX: memory attribute */
   { "\x05\x00", 24, 3 },  /* AP: Access permission */
   { "\x60\xe0", 28, 1 },  /* XN: Instruction access disable
              bit */
};

const Register_t MPU_registers[] = {
   {"\x35\x05\x65\x51\x94\x05\x48", 0, 32, 0, MPU_MPU_TYPER_fields, 3}, /* MPU_TYPER: MPU type register */
   {"\x35\x05\x65\x0d\x44\x8c", 4, 32, 0, MPU_MPU_CTRL_fields, 3}, /* MPU_CTRL: MPU control register */
   {"\x35\x05\x65\x48\xe4\x80", 8, 32, 0, MPU_MPU_RNR_fields, 1}, /* MPU_RNR: MPU region number register */
   {"\x35\x05\x65\x48\x20\x52", 12, 32, 0, MPU_MPU_RBAR_fields, 3}, /* MPU_RBAR: MPU region base address
          register */
   {"\x35\x05\x65\x48\x14\xd2", 16, 32, 0, MPU_MPU_RASR_fields, 9}, /* MPU_RASR: MPU region attribute and size
          register */
};

const Field_t NVIC_STIR_STIR_fields[] = {
   { "\x24\xe5\x09\x10", 0, 9 },  /* INTID: Software generated interrupt
              ID */
};

const Register_t NVIC_STIR_registers[] = {
   {"\x4d\x42\x52", 0, 32, 0, NVIC_STIR_STIR_fields, 1}, /* STIR: Software trigger interrupt
          register */
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
   { "\x04\x41\x12\x15\x34\xc0", 3, 29 },  /* ADDRESS: Location of unpopulated
              floating-point */
};

const Field_t FPU_FPSCR_fields[] = {
   { "\x24\xf0\xc0", 0, 1 },  /* IOC: Invalid operation cumulative exception
              bit */
   { "\x11\xa0\xc0", 1, 1 },  /* DZC: Division by zero cumulative exception
              bit. */
   { "\x3c\x60\xc0", 2, 1 },  /* OFC: Overflow cumulative exception
              bit */
   { "\x54\x60\xc0", 3, 1 },  /* UFC: Underflow cumulative exception
              bit */
   { "\x25\x80\xc0", 4, 1 },  /* IXC: Inexact cumulative exception
              bit */
   { "\x24\x40\xc0", 7, 1 },  /* IDC: Input denormal cumulative exception
              bit. */
   { "\x48\xd3\xc4\x14", 22, 2 },  /* RMode: Rounding Mode control
              field */
   { "\x19\xa0", 24, 1 },  /* FZ: Flush-to-zero mode control
              bit: */
   { "\x10\xe0", 25, 1 },  /* DN: Default NaN mode control
              bit */
   { "\x04\x84\x00", 26, 1 },  /* AHP: Alternative half-precision control
              bit */
   { "\x58", 28, 1 },  /* V: Overflow condition code
              flag */
   { "\x0c", 29, 1 },  /* C: Carry condition code flag */
   { "\x68", 30, 1 },  /* Z: Zero condition code flag */
   { "\x38", 31, 1 },  /* N: Negative condition code
              flag */
};

const Register_t FPU_registers[] = {
   {"\x19\x00\xc3\x48", 0, 32, 0, FPU_FPCCR_fields, 9}, /* FPCCR: Floating-point context control
          register */
   {"\x19\x00\xc1\x48", 4, 32, 0, FPU_FPCAR_fields, 1}, /* FPCAR: Floating-point context address
          register */
   {"\x19\x04\xc3\x48", 8, 32, 0, FPU_FPSCR_fields, 14}, /* FPSCR: Floating-point status control
          register */
};

const Field_t DBG_DBGMCU_IDCODE_fields[] = {
   { "\x10\x55\xa5\x24\x40", 0, 12 },  /* DEV_ID: DEV_ID */
   { "\x48\x55\xa5\x24\x40", 16, 16 },  /* REV_ID: REV_ID */
};

const Field_t DBG_DBGMCU_CR_fields[] = {
   { "\x10\x21\xe5\x4c\xc1\x45\x40", 0, 1 },  /* DBG_SLEEP: DBG_SLEEP */
   { "\x10\x21\xe5\x4d\x43\xd0", 1, 1 },  /* DBG_STOP: DBG_STOP */
   { "\x10\x21\xe5\x4d\x40\x4e\x10\x26\x40", 2, 1 },  /* DBG_STANDBY: DBG_STANDBY */
   { "\x51\x20\x43\x16\x52\x4f\x14\xe0", 5, 1 },  /* TRACE_IOEN: TRACE_IOEN */
   { "\x51\x20\x43\x16\x53\x4f\x10\x50", 6, 2 },  /* TRACE_MODE: TRACE_MODE */
};

const Field_t DBG_DBGMCU_APB1_FZ_fields[] = {
   { "\x10\x21\xe5\x50\x93\x5d\x95\x35\x0f\x40", 0, 1 },  /* DBG_TIM2_STOP: DBG_TIM2_STOP */
   { "\x10\x21\xe5\x50\x93\x5e\x95\x35\x0f\x40", 1, 1 },  /* DBG_TIM3_STOP: DBG_TIM3 _STOP */
   { "\x10\x21\xe5\x50\x93\x5f\x95\x35\x0f\x40", 2, 1 },  /* DBG_TIM4_STOP: DBG_TIM4_STOP */
   { "\x10\x21\xe5\x50\x93\x60\x95\x35\x0f\x40", 3, 1 },  /* DBG_TIM5_STOP: DBG_TIM5_STOP */
   { "\x10\x21\xe5\x49\x40\xe5\x4d\x43\xd0", 10, 1 },  /* DBG_RTC_Stop: RTC stopped when Core is
              halted */
   { "\x10\x21\xe5\x5d\x71\x07\x95\x35\x0f\x40", 11, 1 },  /* DBG_WWDG_STOP: DBG_WWDG_STOP */
   { "\x10\x21\xe5\x25\x71\x05\x1e\x54\xd4\x3d\x00", 12, 1 },  /* DBG_IWDEG_STOP: DBG_IWDEG_STOP */
   { "\x10\x21\xe5\x25\xd0\xdc\x95\x33\x42\x55\x39\x54\x24\xd1\x4f\x55\x40", 21, 1 },  /* DBG_I2C1_SMBUS_TIMEOUT: DBG_J2C1_SMBUS_TIMEOUT */
   { "\x10\x21\xe5\x25\xd0\xdd\x95\x33\x42\x55\x39\x54\x24\xd1\x4f\x55\x40", 22, 1 },  /* DBG_I2C2_SMBUS_TIMEOUT: DBG_J2C2_SMBUS_TIMEOUT */
   { "\x10\x21\xe5\x25\xd0\xde\x4c\xd0\x95\x4e\x55\x09\x34\x53\xd5\x50", 23, 1 },  /* DBG_I2C3SMBUS_TIMEOUT: DBG_J2C3SMBUS_TIMEOUT */
};

const Field_t DBG_DBGMCU_APB2_FZ_fields[] = {
   { "\x10\x21\xe5\x50\x93\x5c\x95\x35\x0f\x40", 0, 1 },  /* DBG_TIM1_STOP: TIM1 counter stopped when core is
              halted */
   { "\x10\x21\xe5\x50\x93\x64\x95\x35\x0f\x40", 16, 1 },  /* DBG_TIM9_STOP: TIM9 counter stopped when core is
              halted */
   { "\x10\x21\xe5\x50\x93\x5c\x6e\x54\xd4\x3d\x00", 17, 1 },  /* DBG_TIM10_STOP: TIM10 counter stopped when core is
              halted */
   { "\x10\x21\xe5\x50\x93\x5c\x72\x54\xd4\x3d\x00", 18, 1 },  /* DBG_TIM11_STOP: TIM11 counter stopped when core is
              halted */
};

const Register_t DBG_registers[] = {
   {"\x10\x21\xcd\x0d\x59\x49\x10\x33\xc4\x14", 0, 32, 0, DBG_DBGMCU_IDCODE_fields, 2}, /* DBGMCU_IDCODE: IDCODE */
   {"\x10\x21\xcd\x0d\x59\x43\x48", 4, 32, 0, DBG_DBGMCU_CR_fields, 5}, /* DBGMCU_CR: Control Register */
   {"\x10\x21\xcd\x0d\x59\x41\x40\x27\x25\x19\xa0", 8, 32, 0, DBG_DBGMCU_APB1_FZ_fields, 10}, /* DBGMCU_APB1_FZ: Debug MCU APB1 Freeze registe */
   {"\x10\x21\xcd\x0d\x59\x41\x40\x27\x65\x19\xa0", 12, 32, 0, DBG_DBGMCU_APB2_FZ_fields, 4}, /* DBGMCU_APB2_FZ: Debug MCU APB2 Freeze registe */
};

const Peripheral_t Peripherals[] = {
   {"\x50\x93\x5d", 0x40000000, TIM2_registers, 21 }, /* TIM2: General purpose timers */
   {"\x50\x93\x5e", 0x40000400, TIM3_registers, 20 }, /* TIM3: General purpose timers */
   {"\x50\x93\x5f", 0x40000800, TIM3_registers, 20 }, /* TIM4:  */
   {"\x50\x93\x60", 0x40000c00, TIM5_registers, 21 }, /* TIM5: General-purpose-timers */
   {"\x49\x40\xc0", 0x40002800, RTC_registers, 39 }, /* RTC: Real-time clock */
   {"\x5d\x71\x07", 0x40002c00, WWDG_registers, 3 }, /* WWDG: Window watchdog */
   {"\x25\x71\x07", 0x40003000, IWDG_registers, 4 }, /* IWDG: Independent watchdog */
   {"\x25\xd4\xdd\x15\x85\x00", 0x40003400, I2S2ext_registers, 9 }, /* I2S2ext: Serial peripheral interface */
   {"\x4d\x02\x5d", 0x40003800, I2S2ext_registers, 9 }, /* SPI2:  */
   {"\x4d\x02\x5e", 0x40003c00, I2S2ext_registers, 9 }, /* SPI3:  */
   {"\x25\xd4\xde\x15\x85\x00", 0x40004000, I2S2ext_registers, 9 }, /* I2S3ext:  */
   {"\x55\x30\x52\x51\xd0", 0x40004400, USART1_registers, 7 }, /* USART2:  */
   {"\x25\xd0\xdc", 0x40005400, I2C3_registers, 9 }, /* I2C1:  */
   {"\x25\xd0\xdd", 0x40005800, I2C3_registers, 9 }, /* I2C2:  */
   {"\x25\xd0\xde", 0x40005c00, I2C3_registers, 9 }, /* I2C3: Inter-integrated circuit */
   {"\x41\x74\x80", 0x40007000, PWR_registers, 2 }, /* PWR: Power control */
   {"\x50\x93\x5c", 0x40010000, TIM1_registers, 22 }, /* TIM1: Advanced-timers */
   {"\x50\x93\x63", 0x40010400, TIM1_registers, 22 }, /* TIM8:  */
   {"\x55\x30\x52\x51\xc0", 0x40011000, USART1_registers, 7 }, /* USART1: Universal synchronous asynchronous receiver
      transmitter */
   {"\x55\x30\x52\x52\x10", 0x40011400, USART1_registers, 7 }, /* USART6:  */
   {"\x04\x40\xdc", 0x40012000, ADC1_registers, 20 }, /* ADC1: Analog-to-digital converter */
   {"\x04\x40\xe5\x0c\xf3\x4d\x3c\xe0", 0x40012300, ADC_Common_registers, 2 }, /* ADC_Common: ADC common registers */
   {"\x4c\x42\x4f", 0x40012c00, SDIO_registers, 18 }, /* SDIO: Secure digital input/output
      interface */
   {"\x4d\x02\x5c", 0x40013000, I2S2ext_registers, 9 }, /* SPI1:  */
   {"\x4d\x02\x5f", 0x40013400, I2S2ext_registers, 9 }, /* SPI4:  */
   {"\x4d\x94\xc3\x18\x70", 0x40013800, SYSCFG_registers, 7 }, /* SYSCFG: System configuration controller */
   {"\x15\x85\x09", 0x40013c00, EXTI_registers, 6 }, /* EXTI: External interrupt/event
      controller */
   {"\x50\x93\x64", 0x40014000, TIM9_registers, 14 }, /* TIM9: General purpose timers */
   {"\x50\x93\x5c\x6c", 0x40014400, TIM10_registers, 11 }, /* TIM10: General-purpose-timers */
   {"\x50\x93\x5c\x70", 0x40014800, TIM11_registers, 12 }, /* TIM11: General-purpose-timers */
   {"\x4d\x02\x60", 0x40015000, I2S2ext_registers, 9 }, /* SPI5:  */
   {"\x1d\x02\x4f\x04", 0x40020000, GPIOA_registers, 10 }, /* GPIOA: General-purpose I/Os */
   {"\x1d\x02\x4f\x08", 0x40020400, GPIOB_registers, 10 }, /* GPIOB: General-purpose I/Os */
   {"\x1d\x02\x4f\x0c", 0x40020800, GPIOH_registers, 10 }, /* GPIOC:  */
   {"\x1d\x02\x4f\x10", 0x40020c00, GPIOH_registers, 10 }, /* GPIOD:  */
   {"\x1d\x02\x4f\x14", 0x40021000, GPIOH_registers, 10 }, /* GPIOE:  */
   {"\x1d\x02\x4f\x20", 0x40021c00, GPIOH_registers, 10 }, /* GPIOH: General-purpose I/Os */
   {"\x0d\x20\xc0", 0x40023000, CRC_registers, 3 }, /* CRC: Cryptographic processor */
   {"\x48\x30\xc0", 0x40023800, RCC_registers, 20 }, /* RCC: Reset and clock control */
   {"\x18\xc0\x53\x20", 0x40023c00, FLASH_registers, 6 }, /* FLASH: FLASH */
   {"\x10\xd0\x5c", 0x40026000, DMA2_registers, 52 }, /* DMA1:  */
   {"\x10\xd0\x5d", 0x40026400, DMA2_registers, 52 }, /* DMA2: DMA controller */
   {"\x3d\x41\xe5\x19\x39\x47\x30\xf0\x81\x30", 0x50000000, OTG_FS_GLOBAL_registers, 19 }, /* OTG_FS_GLOBAL: USB on the go full speed */
   {"\x3d\x41\xe5\x19\x39\x48\x3d\x35\x00", 0x50000400, OTG_FS_HOST_registers, 39 }, /* OTG_FS_HOST: USB on the go full speed */
   {"\x3d\x41\xe5\x19\x39\x44\x15\x62\x43\x14", 0x50000800, OTG_FS_DEVICE_registers, 38 }, /* OTG_FS_DEVICE: USB on the go full speed */
   {"\x3d\x41\xe5\x19\x39\x50\x5d\x20\xcc\x2c", 0x50000e00, OTG_FS_PWRCLK_registers, 1 }, /* OTG_FS_PWRCLK: USB on the go full speed */
   {"\x4c\x30\xa5\x04\x35\x12\x30", 0xe000e008, SCB_ACTRL_registers, 1 }, /* SCB_ACTRL: System control block ACTLR */
   {"\x4d\x42\xc0", 0xe000e010, STK_registers, 4 }, /* STK: SysTick timer */
   {"\x39\x62\x43", 0xe000e100, NVIC_registers, 35 }, /* NVIC: Nested Vectored Interrupt
      Controller */
   {"\x4c\x30\x80", 0xe000ed00, SCB_registers, 15 }, /* SCB: System control block */
   {"\x19\x05\x65\x0d\x00\x43\x48", 0xe000ed88, FPU_CPACR_registers, 1 }, /* FPU_CPACR: Floating point unit CPACR */
   {"\x35\x05\x40", 0xe000ed90, MPU_registers, 5 }, /* MPU: Memory protection unit */
   {"\x39\x62\x43\x95\x35\x09\x48", 0xe000ef00, NVIC_STIR_registers, 1 }, /* NVIC_STIR: Nested vectored interrupt
      controller */
   {"\x19\x05\x40", 0xe000ef34, FPU_registers, 3 }, /* FPU: Floting point unit */
   {"\x10\x21\xc0", 0xe0042000, DBG_registers, 4 }, /* DBG: Debug support */
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
	NULL,
	"PVD",
	"TAMP_STAMP",
	"RTC_WKUP",
	"FLASH",
	"RCC",
	"EXTI0",
	"EXTI1",
	"EXTI2",
	"EXTI3",
	"EXTI4",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"ADC",
	NULL,
	NULL,
	NULL,
	NULL,
	"EXTI9_5",
	"TIM1_BRK_TIM9",
	"TIM1_UP_TIM10",
	"TIM1_TRG_COM_TIM11",
	"TIM1_CC",
	"TIM2",
	"TIM3",
	NULL,
	"I2C1_EV",
	"I2C1_ER",
	"I2C2_EV",
	"I2C2_ER",
	"SPI1",
	"SPI2",
	NULL,
	NULL,
	NULL,
	"EXTI15_10",
	"RTC_Alarm",
	"OTG_FS_WKUP",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"SDIO",
	NULL,
	"SPI3",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"OTG_FS",
	NULL,
	NULL,
	NULL,
	NULL,
	"I2C3_EV",
	"I2C3_ER",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"FPU",
	NULL,
	NULL,
	"SPI4",
};

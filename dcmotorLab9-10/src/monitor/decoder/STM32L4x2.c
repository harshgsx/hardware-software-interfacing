/* Header file generated automatically from SVD file
 * for STM32L4x2
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
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: Reserved */
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

const Field_t TIM2_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/compare 2
              selection */
   { "\x24\x37\x50\x4c\x30", 10, 2 },  /* IC2PSC: Input capture 2 prescaler */
   { "\x24\x37\x46", 12, 4 },  /* IC2F: Input capture 2 filter */
};

const Field_t TIM2_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output compare 1 mode */
   { "\x3c\x37\x03\x14", 7, 1 },  /* OC1CE: Output compare 1 clear
              enable */
   { "\x0c\x37\x53", 8, 2 },  /* CC2S: Capture/Compare 2
              selection */
   { "\x3c\x37\x46\x14", 10, 1 },  /* OC2FE: Output compare 2 fast
              enable */
   { "\x3c\x37\x50\x14", 11, 1 },  /* OC2PE: Output compare 2 preload
              enable */
   { "\x3c\x37\x4d", 12, 3 },  /* OC2M: Output compare 2 mode */
   { "\x3c\x37\x43\x14", 15, 1 },  /* OC2CE: Output compare 2 clear
              enable */
};

const Field_t TIM2_CCMR2_Output_fields[] = {
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

const Field_t TIM2_CCMR2_Input_fields[] = {
   { "\x0c\x37\x93", 0, 2 },  /* CC3S: Capture/Compare 3
              selection */
   { "\x24\x37\x90\x4c\x30", 2, 2 },  /* IC3PSC: Input capture 3 prescaler */
   { "\x24\x37\x86", 4, 4 },  /* IC3F: Input capture 3 filter */
   { "\x0c\x37\xd3", 8, 2 },  /* CC4S: Capture/Compare 4
              selection */
   { "\x24\x37\xd0\x4c\x30", 10, 2 },  /* IC4PSC: Input capture 4 prescaler */
   { "\x24\x37\xc6", 12, 4 },  /* IC4F: Input capture 4 filter */
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
   { "\x0c\xe5\x25\x20", 16, 16 },  /* CNT_H: High counter value (TIM2
              only) */
};

const Field_t TIM2_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM2_ARR_fields[] = {
   { "\x05\x24\xa5\x30", 0, 16 },  /* ARR_L: Low Auto-reload value */
   { "\x05\x24\xa5\x20", 16, 16 },  /* ARR_H: High Auto-reload value (TIM2
              only) */
};

const Field_t TIM2_CCR1_fields[] = {
   { "\x0c\x34\x9c\x94\xc0", 0, 16 },  /* CCR1_L: Low Capture/Compare 1
              value */
   { "\x0c\x34\x9c\x94\x80", 16, 16 },  /* CCR1_H: High Capture/Compare 1 value (TIM2
              only) */
};

const Field_t TIM2_CCR2_fields[] = {
   { "\x0c\x34\x9d\x94\xc0", 0, 16 },  /* CCR2_L: Low Capture/Compare 2
              value */
   { "\x0c\x34\x9d\x94\x80", 16, 16 },  /* CCR2_H: High Capture/Compare 2 value (TIM2
              only) */
};

const Field_t TIM2_CCR3_fields[] = {
   { "\x0c\x34\x9e\x94\xc0", 0, 16 },  /* CCR3_L: Low Capture/Compare value */
   { "\x0c\x34\x9e\x94\x80", 16, 16 },  /* CCR3_H: High Capture/Compare value (TIM2
              only) */
};

const Field_t TIM2_CCR4_fields[] = {
   { "\x0c\x34\x9f\x94\xc0", 0, 16 },  /* CCR4_L: Low Capture/Compare value */
   { "\x0c\x34\x9f\x94\x80", 16, 16 },  /* CCR4_H: High Capture/Compare value (TIM2
              only) */
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
   { "\x15\x44\xa5\x48\xd4\x00", 0, 3 },  /* ETR_RMP: Timer2 ETR remap */
   { "\x50\x97\xe5\x48\xd4\x00", 3, 2 },  /* TI4_RMP: Internal trigger */
};

const Register_t TIM2_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM2_CR1_fields, 8}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM2_CR2_fields, 3}, /* CR2: control register 2 */
   {"\x4c\xd0\xd2", 8, 32, 0, TIM2_SMCR_fields, 7}, /* SMCR: slave mode control register */
   {"\x10\x91\x52", 12, 32, 0, TIM2_DIER_fields, 13}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM2_SR_fields, 10}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM2_EGR_fields, 6}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM2_CCMR1_Input_fields, 6}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM2_CCMR1_Output_fields, 10}, /* CCMR1_Output: capture/compare mode register 1 (output
          mode) */
   {"\x0c\x33\x52\x76\x53\xd5\x51\x05\x54", 28, 32, 0, TIM2_CCMR2_Output_fields, 10}, /* CCMR2_Output: capture/compare mode register 2 (output
          mode) */
   {"\x0c\x33\x52\x76\x52\x4e\x41\x55\x00", 28, 32, 0, TIM2_CCMR2_Input_fields, 6}, /* CCMR2_Input: capture/compare mode register 2 (input
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
   {"\x3d\x20", 80, 32, 0, TIM2_OR_fields, 2}, /* OR: TIM2 option register */
};

const Field_t TIM6_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
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
};

const Field_t TIM6_PSC_fields[] = {
   { "\x41\x30\xc0", 0, 16 },  /* PSC: Prescaler value */
};

const Field_t TIM6_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Low Auto-reload value */
};

const Register_t TIM6_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM6_CR1_fields, 5}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM6_CR2_fields, 1}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM6_DIER_fields, 2}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM6_SR_fields, 1}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM6_EGR_fields, 1}, /* EGR: event generation register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM6_CNT_fields, 1}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM6_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM6_ARR_fields, 1}, /* ARR: auto-reload register */
};

const Field_t LCD_CR_fields[] = {
   { "\x30\x31\x05\x38", 0, 1 },  /* LCDEN: LCD controller enable */
   { "\x59\x31\x4c", 1, 1 },  /* VSEL: Voltage source selection */
   { "\x11\x55\x19", 2, 3 },  /* DUTY: Duty selection */
   { "\x08\x90\x53", 5, 2 },  /* BIAS: Bias selector */
   { "\x35\x56\x25\x4c\x51\xc0", 7, 1 },  /* MUX_SEG: Mux segment enable */
   { "\x09\x51\x85\x38", 8, 1 },  /* BUFEN: Voltage output buffer
              enable */
};

const Field_t LCD_FCR_fields[] = {
   { "\x20\x40", 0, 1 },  /* HD: High drive enable */
   { "\x4c\xf1\x89\x14", 1, 1 },  /* SOFIE: Start of frame interrupt
              enable */
   { "\x54\x41\x09\x14", 3, 1 },  /* UDDIE: Update display done interrupt
              enable */
   { "\x40\xf3\x80", 4, 3 },  /* PON: Pulse ON duration */
   { "\x10\x50\x44", 7, 3 },  /* DEAD: Dead time duration */
   { "\x0c\x30", 10, 3 },  /* CC: Contrast control */
   { "\x08\xc2\x4e\x2c\x60", 13, 3 },  /* BLINKF: Blink frequency selection */
   { "\x08\xc2\x4e\x2c", 16, 2 },  /* BLINK: Blink mode selection */
   { "\x10\x95\x80", 18, 4 },  /* DIV: DIV clock divider */
   { "\x41\x30", 22, 4 },  /* PS: PS 16-bit prescaler */
};

const Field_t LCD_SR_fields[] = {
   { "\x14\xe4\xc0", 0, 1 },  /* ENS: ENS */
   { "\x4c\xf1\x80", 1, 1 },  /* SOF: Start of frame flag */
   { "\x54\x44\x80", 2, 1 },  /* UDR: Update display request */
   { "\x54\x41\x00", 3, 1 },  /* UDD: Update Display Done */
   { "\x48\x46\x40", 4, 1 },  /* RDY: Ready flag */
   { "\x18\x34\x93\x18", 5, 1 },  /* FCRSF: LCD Frame Control Register
              Synchronization flag */
};

const Field_t LCD_CLR_fields[] = {
   { "\x4c\xf1\x83", 1, 1 },  /* SOFC: Start of frame flag clear */
   { "\x54\x41\x03", 3, 1 },  /* UDDC: Update display done clear */
};

const Field_t LCD_RAM_COM0_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
};

const Field_t LCD_RAM_COM1_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Field_t LCD_RAM_COM2_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Field_t LCD_RAM_COM3_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Field_t LCD_RAM_COM4_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Field_t LCD_RAM_COM5_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Field_t LCD_RAM_COM6_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Field_t LCD_RAM_COM7_fields[] = {
   { "\x4d\xb6\xc0", 0, 1 },  /* S00: S00 */
   { "\x4d\xb7\x00", 1, 1 },  /* S01: S01 */
   { "\x4d\xb7\x40", 2, 1 },  /* S02: S02 */
   { "\x4d\xb7\x80", 3, 1 },  /* S03: S03 */
   { "\x4d\xb7\xc0", 4, 1 },  /* S04: S04 */
   { "\x4d\xb8\x00", 5, 1 },  /* S05: S05 */
   { "\x4d\xb8\x40", 6, 1 },  /* S06: S06 */
   { "\x4d\xb8\x80", 7, 1 },  /* S07: S07 */
   { "\x4d\xb8\xc0", 8, 1 },  /* S08: S08 */
   { "\x4d\xb9\x00", 9, 1 },  /* S09: S09 */
   { "\x4d\xc6\xc0", 10, 1 },  /* S10: S10 */
   { "\x4d\xc7\x00", 11, 1 },  /* S11: S11 */
   { "\x4d\xc7\x40", 12, 1 },  /* S12: S12 */
   { "\x4d\xc7\x80", 13, 1 },  /* S13: S13 */
   { "\x4d\xc7\xc0", 14, 1 },  /* S14: S14 */
   { "\x4d\xc8\x00", 15, 1 },  /* S15: S15 */
   { "\x4d\xc8\x40", 16, 1 },  /* S16: S16 */
   { "\x4d\xc8\x80", 17, 1 },  /* S17: S17 */
   { "\x4d\xc8\xc0", 18, 1 },  /* S18: S18 */
   { "\x4d\xc9\x00", 19, 1 },  /* S19: S19 */
   { "\x4d\xd6\xc0", 20, 1 },  /* S20: S20 */
   { "\x4d\xd7\x00", 21, 1 },  /* S21: S21 */
   { "\x4d\xd7\x40", 22, 1 },  /* S22: S22 */
   { "\x4d\xd7\x80", 23, 1 },  /* S23: S23 */
   { "\x4d\xd7\xc0", 24, 1 },  /* S24: S24 */
   { "\x4d\xd8\x00", 25, 1 },  /* S25: S25 */
   { "\x4d\xd8\x40", 26, 1 },  /* S26: S26 */
   { "\x4d\xd8\x80", 27, 1 },  /* S27: S27 */
   { "\x4d\xd8\xc0", 28, 1 },  /* S28: S28 */
   { "\x4d\xd9\x00", 29, 1 },  /* S29: S29 */
   { "\x4d\xe6\xc0", 30, 1 },  /* S30: S30 */
   { "\x4d\xe7\x00", 31, 1 },  /* S31: S31 */
};

const Register_t LCD_registers[] = {
   {"\x0d\x20", 0, 32, 0, LCD_CR_fields, 6}, /* CR: control register */
   {"\x18\x34\x80", 4, 32, 0, LCD_FCR_fields, 10}, /* FCR: frame control register */
   {"\x4d\x20", 8, 32, 0, LCD_SR_fields, 6}, /* SR: status register */
   {"\x0c\xc4\x80", 12, 32, 0, LCD_CLR_fields, 2}, /* CLR: clear register */
   {"\x48\x13\x65\x0c\xf3\x5b", 20, 32, 0, LCD_RAM_COM0_fields, 31}, /* RAM_COM0: display memory */
   {"\x48\x13\x65\x0c\xf3\x5c", 28, 32, 0, LCD_RAM_COM1_fields, 32}, /* RAM_COM1: display memory */
   {"\x48\x13\x65\x0c\xf3\x5d", 36, 32, 0, LCD_RAM_COM2_fields, 32}, /* RAM_COM2: display memory */
   {"\x48\x13\x65\x0c\xf3\x5e", 44, 32, 0, LCD_RAM_COM3_fields, 32}, /* RAM_COM3: display memory */
   {"\x48\x13\x65\x0c\xf3\x5f", 52, 32, 0, LCD_RAM_COM4_fields, 32}, /* RAM_COM4: display memory */
   {"\x48\x13\x65\x0c\xf3\x60", 60, 32, 0, LCD_RAM_COM5_fields, 32}, /* RAM_COM5: display memory */
   {"\x48\x13\x65\x0c\xf3\x61", 68, 32, 0, LCD_RAM_COM6_fields, 32}, /* RAM_COM6: display memory */
   {"\x48\x13\x65\x0c\xf3\x62", 76, 32, 0, LCD_RAM_COM7_fields, 32}, /* RAM_COM7: display memory */
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
   { "\x0c\xf4\xc5\x30", 19, 1 },  /* COSEL: Calibration output
              selection */
   { "\x40\xf3\x00", 20, 1 },  /* POL: Output polarity */
   { "\x3d\x31\x4c", 21, 2 },  /* OSEL: Output selection */
   { "\x0c\xf1\x40", 23, 1 },  /* COE: Calibration output enable */
   { "\x25\x44\xc5", 24, 1 },  /* ITSE: timestamp on internal event
              enable */
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
   { "\x50\x13\x50\x74\x60", 14, 1 },  /* TAMP2F: RTC_TAMP2 detection flag */
   { "\x50\x13\x50\x78\x60", 15, 1 },  /* TAMP3F: RTC_TAMP3 detection flag */
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

const Field_t RTC_TAMPCR_fields[] = {
   { "\x50\x13\x50\x70\x50", 0, 1 },  /* TAMP1E: Tamper 1 detection enable */
   { "\x50\x13\x50\x71\x44\x87", 1, 1 },  /* TAMP1TRG: Active level for tamper 1 */
   { "\x50\x13\x50\x24\x50", 2, 1 },  /* TAMPIE: Tamper interrupt enable */
   { "\x50\x13\x50\x74\x50", 3, 1 },  /* TAMP2E: Tamper 2 detection enable */
   { "\x50\x13\x50\x75\x44\x87", 4, 1 },  /* TAMP2TRG: Active level for tamper 2 */
   { "\x50\x13\x50\x78\x50", 5, 1 },  /* TAMP3E: Tamper 3 detection enable */
   { "\x50\x13\x50\x79\x44\x87", 6, 1 },  /* TAMP3TRG: Active level for tamper 3 */
   { "\x50\x13\x50\x51\x30", 7, 1 },  /* TAMPTS: Activate timestamp on tamper detection
              event */
   { "\x50\x13\x50\x19\x21\x51", 8, 3 },  /* TAMPFREQ: Tamper sampling frequency */
   { "\x50\x13\x50\x18\xc5\x00", 11, 2 },  /* TAMPFLT: Tamper filter count */
   { "\x50\x13\x50\x41\x20\xc8", 13, 2 },  /* TAMPPRCH: Tamper precharge duration */
   { "\x50\x13\x50\x41\x51\x09\x4c", 15, 1 },  /* TAMPPUDIS: TAMPER pull-up disable */
   { "\x50\x13\x50\x70\x91\x40", 16, 1 },  /* TAMP1IE: Tamper 1 interrupt enable */
   { "\x50\x13\x50\x70\xe3\xc5\x48\x14\xc5", 17, 1 },  /* TAMP1NOERASE: Tamper 1 no erase */
   { "\x50\x13\x50\x70\xd1\x80", 18, 1 },  /* TAMP1MF: Tamper 1 mask flag */
   { "\x50\x13\x50\x74\x91\x40", 19, 1 },  /* TAMP2IE: Tamper 2 interrupt enable */
   { "\x50\x13\x50\x74\xe3\xc5\x48\x14\xc5", 20, 1 },  /* TAMP2NOERASE: Tamper 2 no erase */
   { "\x50\x13\x50\x74\xd1\x80", 21, 1 },  /* TAMP2MF: Tamper 2 mask flag */
   { "\x50\x13\x50\x78\x91\x40", 22, 1 },  /* TAMP3IE: Tamper 3 interrupt enable */
   { "\x50\x13\x50\x78\xe3\xc5\x48\x14\xc5", 23, 1 },  /* TAMP3NOERASE: Tamper 3 no erase */
   { "\x50\x13\x50\x78\xd1\x80", 24, 1 },  /* TAMP3MF: Tamper 3 mask flag */
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

const Field_t RTC_OR_fields[] = {
   { "\x49\x40\xe5\x04\xc0\x52\x36\x55\x19\x40\x50", 0, 1 },  /* RTC_ALARM_TYPE: RTC_ALARM on PC13 output
              type */
   { "\x49\x40\xe5\x3d\x55\x25\x48\xd4\x00", 1, 1 },  /* RTC_OUT_RMP: RTC_OUT remap */
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

const Field_t RTC_BKP20R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP21R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP22R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP23R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP24R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP25R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP26R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP27R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP28R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP29R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP30R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Field_t RTC_BKP31R_fields[] = {
   { "\x08\xb4\x00", 0, 32 },  /* BKP: BKP */
};

const Register_t RTC_registers[] = {
   {"\x51\x20", 0, 32, 0, RTC_TR_fields, 7}, /* TR: time register */
   {"\x11\x20", 4, 32, 0, RTC_DR_fields, 7}, /* DR: date register */
   {"\x0d\x20", 8, 32, 0, RTC_CR_fields, 21}, /* CR: control register */
   {"\x25\x34\x80", 12, 32, 0, RTC_ISR_fields, 17}, /* ISR: initialization and status
          register */
   {"\x41\x21\x52", 16, 32, 0, RTC_PRER_fields, 2}, /* PRER: prescaler register */
   {"\x5d\x55\x12", 20, 32, 0, RTC_WUTR_fields, 1}, /* WUTR: wakeup timer register */
   {"\x04\xc4\x8d\x05\x20", 28, 32, 0, RTC_ALRMAR_fields, 14}, /* ALRMAR: alarm A register */
   {"\x04\xc4\x8d\x09\x20", 32, 32, 0, RTC_ALRMBR_fields, 14}, /* ALRMBR: alarm B register */
   {"\x5d\x04\x80", 36, 32, 0, RTC_WPR_fields, 1}, /* WPR: write protection register */
   {"\x4d\x34\x80", 40, 32, 0, RTC_SSR_fields, 1}, /* SSR: sub second register */
   {"\x4c\x82\x46\x51\x20", 44, 32, 0, RTC_SHIFTR_fields, 2}, /* SHIFTR: shift control register */
   {"\x51\x35\x12", 48, 32, 0, RTC_TSTR_fields, 7}, /* TSTR: time stamp time register */
   {"\x51\x31\x12", 52, 32, 0, RTC_TSDR_fields, 5}, /* TSDR: time stamp date register */
   {"\x51\x34\xd3\x48", 56, 32, 0, RTC_TSSSR_fields, 1}, /* TSSSR: timestamp sub second register */
   {"\x0c\x13\x12", 60, 32, 0, RTC_CALR_fields, 4}, /* CALR: calibration register */
   {"\x50\x13\x50\x0d\x20", 64, 32, 0, RTC_TAMPCR_fields, 21}, /* TAMPCR: tamper configuration register */
   {"\x04\xc4\x8d\x05\x34\xd2", 68, 32, 0, RTC_ALRMASSR_fields, 2}, /* ALRMASSR: alarm A sub second register */
   {"\x04\xc4\x8d\x09\x34\xd2", 72, 32, 0, RTC_ALRMBSSR_fields, 2}, /* ALRMBSSR: alarm B sub second register */
   {"\x3d\x20", 76, 32, 0, RTC_OR_fields, 2}, /* OR: option register */
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
   {"\x08\xb4\x1d\x6d\x20", 160, 32, 0, RTC_BKP20R_fields, 1}, /* BKP20R: backup register */
   {"\x08\xb4\x1d\x71\x20", 164, 32, 0, RTC_BKP21R_fields, 1}, /* BKP21R: backup register */
   {"\x08\xb4\x1d\x75\x20", 168, 32, 0, RTC_BKP22R_fields, 1}, /* BKP22R: backup register */
   {"\x08\xb4\x1d\x79\x20", 172, 32, 0, RTC_BKP23R_fields, 1}, /* BKP23R: backup register */
   {"\x08\xb4\x1d\x7d\x20", 176, 32, 0, RTC_BKP24R_fields, 1}, /* BKP24R: backup register */
   {"\x08\xb4\x1d\x81\x20", 180, 32, 0, RTC_BKP25R_fields, 1}, /* BKP25R: backup register */
   {"\x08\xb4\x1d\x85\x20", 184, 32, 0, RTC_BKP26R_fields, 1}, /* BKP26R: backup register */
   {"\x08\xb4\x1d\x89\x20", 188, 32, 0, RTC_BKP27R_fields, 1}, /* BKP27R: backup register */
   {"\x08\xb4\x1d\x8d\x20", 192, 32, 0, RTC_BKP28R_fields, 1}, /* BKP28R: backup register */
   {"\x08\xb4\x1d\x91\x20", 196, 32, 0, RTC_BKP29R_fields, 1}, /* BKP29R: backup register */
   {"\x08\xb4\x1e\x6d\x20", 200, 32, 0, RTC_BKP30R_fields, 1}, /* BKP30R: backup register */
   {"\x08\xb4\x1e\x71\x20", 204, 32, 0, RTC_BKP31R_fields, 1}, /* BKP31R: backup register */
};

const Field_t WWDG_CR_fields[] = {
   { "\x50", 0, 7 },  /* T: 7-bit counter (MSB to LSB) */
   { "\x5c\x41\xc1", 7, 1 },  /* WDGA: Activation bit */
};

const Field_t WWDG_CFR_fields[] = {
   { "\x5c", 0, 7 },  /* W: 7-bit window value */
   { "\x5c\x41\xd4\x08", 7, 2 },  /* WDGTB: Timer base */
   { "\x15\x72\x40", 9, 1 },  /* EWI: Early wakeup interrupt */
};

const Field_t WWDG_SR_fields[] = {
   { "\x15\x72\x46", 0, 1 },  /* EWIF: Early wakeup interrupt
              flag */
};

const Register_t WWDG_registers[] = {
   {"\x0d\x20", 0, 32, 0, WWDG_CR_fields, 2}, /* CR: Control register */
   {"\x0c\x64\x80", 4, 32, 0, WWDG_CFR_fields, 3}, /* CFR: Configuration register */
   {"\x4d\x20", 8, 32, 0, WWDG_SR_fields, 1}, /* SR: Status register */
};

const Field_t IWDG_KR_fields[] = {
   { "\x2c\x56\x40", 0, 16 },  /* KEY: Key value (write only, read
              0x0000) */
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
   { "\x5d\x65\x40", 2, 1 },  /* WVU: Watchdog counter window value
              update */
};

const Field_t IWDG_WINR_fields[] = {
   { "\x5c\x93\x80", 0, 12 },  /* WIN: Watchdog counter window
              value */
};

const Register_t IWDG_registers[] = {
   {"\x2d\x20", 0, 32, 0, IWDG_KR_fields, 1}, /* KR: Key register */
   {"\x41\x20", 4, 32, 0, IWDG_PR_fields, 1}, /* PR: Prescaler register */
   {"\x48\xc4\x80", 8, 32, 0, IWDG_RLR_fields, 1}, /* RLR: Reload register */
   {"\x4d\x20", 12, 32, 0, IWDG_SR_fields, 3}, /* SR: Status register */
   {"\x5c\x93\x92", 16, 32, 0, IWDG_WINR_fields, 1}, /* WINR: Window register */
};

const Field_t I2C1_CR1_fields[] = {
   { "\x40\x50", 0, 1 },  /* PE: Peripheral enable */
   { "\x51\x82\x45", 1, 1 },  /* TXIE: TX Interrupt enable */
   { "\x49\x82\x45", 2, 1 },  /* RXIE: RX Interrupt enable */
   { "\x04\x41\x12\x24\x50", 3, 1 },  /* ADDRIE: Address match interrupt enable (slave
              only) */
   { "\x38\x10\xcb\x24\x50", 4, 1 },  /* NACKIE: Not acknowledge received interrupt
              enable */
   { "\x4d\x43\xd0\x24\x50", 5, 1 },  /* STOPIE: STOP detection Interrupt
              enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transfer Complete interrupt
              enable */
   { "\x15\x24\x89\x14", 7, 1 },  /* ERRIE: Error interrupts enable */
   { "\x10\xe1\x80", 8, 4 },  /* DNF: Digital noise filter */
   { "\x04\xe1\x8f\x18\x60", 12, 1 },  /* ANFOFF: Analog noise filter OFF */
   { "\x51\x81\x0d\x04\x53\x80", 14, 1 },  /* TXDMAEN: DMA transmission requests
              enable */
   { "\x49\x81\x0d\x04\x53\x80", 15, 1 },  /* RXDMAEN: DMA reception requests
              enable */
   { "\x4c\x20\xc0", 16, 1 },  /* SBC: Slave byte control */
   { "\x38\xf4\xd4\x48\x55\x03\x20", 17, 1 },  /* NOSTRETCH: Clock stretching disable */
   { "\x5d\x54\x05\x38", 18, 1 },  /* WUPEN: Wakeup from STOP enable */
   { "\x1c\x31\x4e", 19, 1 },  /* GCEN: General call enable */
   { "\x4c\xd0\x88\x14\xe0", 20, 1 },  /* SMBHEN: SMBus Host address enable */
   { "\x4c\xd0\x84\x14\xe0", 21, 1 },  /* SMBDEN: SMBus Device Default address
              enable */
   { "\x04\xc1\x52\x50\x53\x80", 22, 1 },  /* ALERTEN: SMBUS alert enable */
   { "\x40\x50\xc5\x38", 23, 1 },  /* PECEN: PEC enable */
};

const Field_t I2C1_CR2_fields[] = {
   { "\x4c\x11\x04", 0, 10 },  /* SADD: Slave address bit (master
              mode) */
   { "\x48\x49\x57\x48\xe0", 10, 1 },  /* RD_WRN: Transfer direction (master
              mode) */
   { "\x04\x41\x1c\x6c", 11, 1 },  /* ADD10: 10-bit addressing mode (master
              mode) */
   { "\x20\x50\x44\x71\xb4\x80", 12, 1 },  /* HEAD10R: 10-bit address header only read
              direction (master receiver mode) */
   { "\x4d\x40\x52\x50", 13, 1 },  /* START: Start generation */
   { "\x4d\x43\xd0", 14, 1 },  /* STOP: Stop generation (master
              mode) */
   { "\x38\x10\xcb", 15, 1 },  /* NACK: NACK generation (slave
              mode) */
   { "\x38\x26\x54\x15\x30", 16, 8 },  /* NBYTES: Number of bytes */
   { "\x48\x53\x0f\x04\x40", 24, 1 },  /* RELOAD: NBYTES reload mode */
   { "\x05\x55\x0f\x14\xe1\x00", 25, 1 },  /* AUTOEND: Automatic end mode (master
              mode) */
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
   { "\x4c\x33\x0c", 0, 8 },  /* SCLL: SCL low period (master
              mode) */
   { "\x4c\x33\x08", 8, 8 },  /* SCLH: SCL high period (master
              mode) */
   { "\x4c\x40\x44\x14\xc0", 16, 4 },  /* SDADEL: Data hold time */
   { "\x4c\x33\x04\x14\xc0", 20, 4 },  /* SCLDEL: Data setup time */
   { "\x41\x21\x53\x0c", 28, 4 },  /* PRESC: Timing prescaler */
};

const Field_t I2C1_TIMEOUTR_fields[] = {
   { "\x50\x93\x45\x3d\x55\x01", 0, 12 },  /* TIMEOUTA: Bus timeout A */
   { "\x50\x91\x0c\x14", 12, 1 },  /* TIDLE: Idle clock timeout
              detection */
   { "\x50\x93\x4f\x55\x41\x4e", 15, 1 },  /* TIMOUTEN: Clock timeout enable */
   { "\x50\x93\x45\x3d\x55\x02", 16, 12 },  /* TIMEOUTB: Bus timeout B */
   { "\x50\x56\x14\x14\xe0", 31, 1 },  /* TEXTEN: Extended clock timeout
              enable */
};

const Field_t I2C1_ISR_fields[] = {
   { "\x51\x81\x40", 0, 1 },  /* TXE: Transmit data register empty
              (transmitters) */
   { "\x51\x82\x53", 1, 1 },  /* TXIS: Transmit interrupt status
              (transmitters) */
   { "\x49\x83\x85", 2, 1 },  /* RXNE: Receive data register not empty
              (receivers) */
   { "\x04\x41\x12", 3, 1 },  /* ADDR: Address matched (slave
              mode) */
   { "\x38\x10\xcb\x18", 4, 1 },  /* NACKF: Not acknowledge received
              flag */
   { "\x4d\x43\xd0\x18", 5, 1 },  /* STOPF: Stop detection flag */
   { "\x50\x30", 6, 1 },  /* TC: Transfer Complete (master
              mode) */
   { "\x50\x34\x80", 7, 1 },  /* TCR: Transfer Complete Reload */
   { "\x08\x54\x92", 8, 1 },  /* BERR: Bus error */
   { "\x05\x23\x0f", 9, 1 },  /* ARLO: Arbitration lost */
   { "\x3d\x64\x80", 10, 1 },  /* OVR: Overrun/Underrun (slave
              mode) */
   { "\x40\x50\xc5\x49\x20", 11, 1 },  /* PECERR: PEC Error in reception */
   { "\x50\x93\x45\x3d\x55\x00", 12, 1 },  /* TIMEOUT: Timeout or t_low detection
              flag */
   { "\x04\xc1\x52\x50", 13, 1 },  /* ALERT: SMBus alert */
   { "\x09\x54\xd9", 15, 1 },  /* BUSY: Bus busy */
   { "\x10\x94\x80", 16, 1 },  /* DIR: Transfer direction (Slave
              mode) */
   { "\x04\x41\x03\x3c\x41\x40", 17, 7 },  /* ADDCODE: Address match code (Slave
              mode) */
};

const Field_t I2C1_ICR_fields[] = {
   { "\x04\x41\x12\x0c\x60", 3, 1 },  /* ADDRCF: Address Matched flag clear */
   { "\x38\x10\xcb\x0c\x60", 4, 1 },  /* NACKCF: Not Acknowledge flag clear */
   { "\x4d\x43\xd0\x0c\x60", 5, 1 },  /* STOPCF: Stop detection flag clear */
   { "\x08\x54\x92\x0c\x60", 8, 1 },  /* BERRCF: Bus error flag clear */
   { "\x05\x23\x0f\x0c\x60", 9, 1 },  /* ARLOCF: Arbitration lost flag
              clear */
   { "\x3d\x64\x83\x18", 10, 1 },  /* OVRCF: Overrun/Underrun flag
              clear */
   { "\x40\x50\xc3\x18", 11, 1 },  /* PECCF: PEC Error flag clear */
   { "\x50\x93\x4f\x55\x40\xc6", 12, 1 },  /* TIMOUTCF: Timeout detection flag
              clear */
   { "\x04\xc1\x52\x50\x31\x80", 13, 1 },  /* ALERTCF: Alert flag clear */
};

const Field_t I2C1_PECR_fields[] = {
   { "\x40\x50\xc0", 0, 8 },  /* PEC: Packet error checking
              register */
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

const Field_t CRS_CR_fields[] = {
   { "\x4d\x93\x83\x3c\xb2\x45", 0, 1 },  /* SYNCOKIE: SYNC event OK interrupt
              enable */
   { "\x4d\x93\x83\x5c\x14\x8e\x24\x50", 1, 1 },  /* SYNCWARNIE: SYNC warning interrupt
              enable */
   { "\x15\x24\x89\x14", 2, 1 },  /* ERRIE: Synchronization or trimming error
              interrupt enable */
   { "\x15\x36\x4e\x0c\x91\x40", 3, 1 },  /* ESYNCIE: Expected SYNC interrupt
              enable */
   { "\x0c\x53\x80", 5, 1 },  /* CEN: Frequency error counter
              enable */
   { "\x05\x55\x0f\x51\x22\x4d\x14\xe0", 6, 1 },  /* AUTOTRIMEN: Automatic trimming enable */
   { "\x4d\x74\xd9\x38\x30", 7, 1 },  /* SWSYNC: Generate software SYNC
              event */
   { "\x51\x22\x4d", 8, 6 },  /* TRIM: HSI48 oscillator smooth
              trimming */
};

const Field_t CRS_CFGR_fields[] = {
   { "\x48\x53\x0f\x04\x40", 0, 16 },  /* RELOAD: Counter reload value */
   { "\x18\x53\x09\x34", 16, 8 },  /* FELIM: Frequency error limit */
   { "\x4d\x93\x83\x10\x95\x80", 24, 3 },  /* SYNCDIV: SYNC divider */
   { "\x4d\x93\x83\x4d\x20\xc0", 28, 2 },  /* SYNCSRC: SYNC signal source
              selection */
   { "\x4d\x93\x83\x40\xf3\x00", 31, 1 },  /* SYNCPOL: SYNC polarity selection */
};

const Field_t CRS_ISR_fields[] = {
   { "\x4d\x93\x83\x3c\xb1\x80", 0, 1 },  /* SYNCOKF: SYNC event OK flag */
   { "\x4d\x93\x83\x5c\x14\x8e\x18", 1, 1 },  /* SYNCWARNF: SYNC warning flag */
   { "\x15\x24\x86", 2, 1 },  /* ERRF: Error flag */
   { "\x15\x36\x4e\x0c\x60", 3, 1 },  /* ESYNCF: Expected SYNC flag */
   { "\x4d\x93\x83\x15\x24\x80", 8, 1 },  /* SYNCERR: SYNC error */
   { "\x4d\x93\x83\x34\x94\xd3", 9, 1 },  /* SYNCMISS: SYNC missed */
   { "\x51\x22\x4d\x3d\x61\x80", 10, 1 },  /* TRIMOVF: Trimming overflow or
              underflow */
   { "\x18\x51\x09\x48", 15, 1 },  /* FEDIR: Frequency error direction */
   { "\x18\x50\xc1\x40", 16, 16 },  /* FECAP: Frequency error capture */
};

const Field_t CRS_ICR_fields[] = {
   { "\x4d\x93\x83\x3c\xb0\xc0", 0, 1 },  /* SYNCOKC: SYNC event OK clear flag */
   { "\x4d\x93\x83\x5c\x14\x8e\x0c", 1, 1 },  /* SYNCWARNC: SYNC warning clear flag */
   { "\x15\x24\x83", 2, 1 },  /* ERRC: Error clear flag */
   { "\x15\x36\x4e\x0c\x30", 3, 1 },  /* ESYNCC: Expected SYNC clear flag */
};

const Register_t CRS_registers[] = {
   {"\x0d\x20", 0, 32, 0, CRS_CR_fields, 8}, /* CR: control register */
   {"\x0c\x61\xd2", 4, 32, 0, CRS_CFGR_fields, 5}, /* CFGR: configuration register */
   {"\x25\x34\x80", 8, 32, 0, CRS_ISR_fields, 9}, /* ISR: interrupt and status register */
   {"\x24\x34\x80", 12, 32, 0, CRS_ICR_fields, 4}, /* ICR: interrupt flag clear register */
};

const Field_t CAN1_MCR_fields[] = {
   { "\x24\xe4\x91", 0, 1 },  /* INRQ: INRQ */
   { "\x4c\xc1\x45\x40", 1, 1 },  /* SLEEP: SLEEP */
   { "\x51\x81\x90", 2, 1 },  /* TXFP: TXFP */
   { "\x48\x63\x0d", 3, 1 },  /* RFLM: RFLM */
   { "\x38\x14\x94", 4, 1 },  /* NART: NART */
   { "\x05\x75\x4d", 5, 1 },  /* AWUM: AWUM */
   { "\x04\x23\xcd", 6, 1 },  /* ABOM: ABOM */
   { "\x51\x40\xcd", 7, 1 },  /* TTCM: TTCM */
   { "\x48\x54\xc5\x50", 15, 1 },  /* RESET: RESET */
   { "\x10\x21\x80", 16, 1 },  /* DBF: DBF */
};

const Field_t CAN1_MSR_fields[] = {
   { "\x24\xe0\x4b", 0, 1 },  /* INAK: INAK */
   { "\x4c\xc0\x4b", 1, 1 },  /* SLAK: SLAK */
   { "\x15\x24\x89", 2, 1 },  /* ERRI: ERRI */
   { "\x5c\xb5\x49", 3, 1 },  /* WKUI: WKUI */
   { "\x4c\xc0\x4b\x24", 4, 1 },  /* SLAKI: SLAKI */
   { "\x51\x83\x40", 8, 1 },  /* TXM: TXM */
   { "\x49\x83\x40", 9, 1 },  /* RXM: RXM */
   { "\x4c\x13\x50", 10, 1 },  /* SAMP: SAMP */
   { "\x49\x80", 11, 1 },  /* RX: RX */
};

const Field_t CAN1_TSR_fields[] = {
   { "\x49\x10\xd0\x6c", 0, 1 },  /* RQCP0: RQCP0 */
   { "\x51\x83\xcb\x6c", 1, 1 },  /* TXOK0: TXOK0 */
   { "\x04\xc4\xd4\x6c", 2, 1 },  /* ALST0: ALST0 */
   { "\x50\x54\x92\x6c", 3, 1 },  /* TERR0: TERR0 */
   { "\x04\x24\x91\x6c", 7, 1 },  /* ABRQ0: ABRQ0 */
   { "\x49\x10\xd0\x70", 8, 1 },  /* RQCP1: RQCP1 */
   { "\x51\x83\xcb\x70", 9, 1 },  /* TXOK1: TXOK1 */
   { "\x04\xc4\xd4\x70", 10, 1 },  /* ALST1: ALST1 */
   { "\x50\x54\x92\x70", 11, 1 },  /* TERR1: TERR1 */
   { "\x04\x24\x91\x70", 15, 1 },  /* ABRQ1: ABRQ1 */
   { "\x49\x10\xd0\x74", 16, 1 },  /* RQCP2: RQCP2 */
   { "\x51\x83\xcb\x74", 17, 1 },  /* TXOK2: TXOK2 */
   { "\x04\xc4\xd4\x74", 18, 1 },  /* ALST2: ALST2 */
   { "\x50\x54\x92\x74", 19, 1 },  /* TERR2: TERR2 */
   { "\x04\x24\x91\x74", 23, 1 },  /* ABRQ2: ABRQ2 */
   { "\x0c\xf1\x05", 24, 2 },  /* CODE: CODE */
   { "\x50\xd1\x5b", 26, 1 },  /* TME0: Lowest priority flag for mailbox
              0 */
   { "\x50\xd1\x5c", 27, 1 },  /* TME1: Lowest priority flag for mailbox
              1 */
   { "\x50\xd1\x5d", 28, 1 },  /* TME2: Lowest priority flag for mailbox
              2 */
   { "\x30\xf5\xdb", 29, 1 },  /* LOW0: Lowest priority flag for mailbox
              0 */
   { "\x30\xf5\xdc", 30, 1 },  /* LOW1: Lowest priority flag for mailbox
              1 */
   { "\x30\xf5\xdd", 31, 1 },  /* LOW2: Lowest priority flag for mailbox
              2 */
};

const Field_t CAN1_RF0R_fields[] = {
   { "\x18\xd4\x1b", 0, 2 },  /* FMP0: FMP0 */
   { "\x19\x53\x0c\x6c", 3, 1 },  /* FULL0: FULL0 */
   { "\x18\xf5\x92\x6c", 4, 1 },  /* FOVR0: FOVR0 */
   { "\x48\x63\xcd\x6c", 5, 1 },  /* RFOM0: RFOM0 */
};

const Field_t CAN1_RF1R_fields[] = {
   { "\x18\xd4\x1c", 0, 2 },  /* FMP1: FMP1 */
   { "\x19\x53\x0c\x70", 3, 1 },  /* FULL1: FULL1 */
   { "\x18\xf5\x92\x70", 4, 1 },  /* FOVR1: FOVR1 */
   { "\x48\x63\xcd\x70", 5, 1 },  /* RFOM1: RFOM1 */
};

const Field_t CAN1_IER_fields[] = {
   { "\x50\xd1\x49\x14", 0, 1 },  /* TMEIE: TMEIE */
   { "\x18\xd4\x09\x15\xb0", 1, 1 },  /* FMPIE0: FMPIE0 */
   { "\x18\x62\x45\x6c", 2, 1 },  /* FFIE0: FFIE0 */
   { "\x18\xf5\x89\x15\xb0", 3, 1 },  /* FOVIE0: FOVIE0 */
   { "\x18\xd4\x09\x15\xc0", 4, 1 },  /* FMPIE1: FMPIE1 */
   { "\x18\x62\x45\x70", 5, 1 },  /* FFIE1: FFIE1 */
   { "\x18\xf5\x89\x15\xc0", 6, 1 },  /* FOVIE1: FOVIE1 */
   { "\x15\x71\xc9\x14", 8, 1 },  /* EWGIE: EWGIE */
   { "\x15\x05\x89\x14", 9, 1 },  /* EPVIE: EPVIE */
   { "\x08\xf1\x89\x14", 10, 1 },  /* BOFIE: BOFIE */
   { "\x30\x50\xc9\x14", 11, 1 },  /* LECIE: LECIE */
   { "\x15\x24\x89\x14", 15, 1 },  /* ERRIE: ERRIE */
   { "\x5c\xb5\x49\x14", 16, 1 },  /* WKUIE: WKUIE */
   { "\x4c\xc2\xc9\x14", 17, 1 },  /* SLKIE: SLKIE */
};

const Field_t CAN1_ESR_fields[] = {
   { "\x15\x71\xc6", 0, 1 },  /* EWGF: EWGF */
   { "\x15\x05\x86", 1, 1 },  /* EPVF: EPVF */
   { "\x08\xf1\x86", 2, 1 },  /* BOFF: BOFF */
   { "\x30\x50\xc0", 4, 3 },  /* LEC: LEC */
   { "\x50\x50\xc0", 16, 8 },  /* TEC: TEC */
   { "\x48\x50\xc0", 24, 8 },  /* REC: REC */
};

const Field_t CAN1_BTR_fields[] = {
   { "\x09\x24\x00", 0, 10 },  /* BRP: BRP */
   { "\x51\x37\x00", 16, 4 },  /* TS1: TS1 */
   { "\x51\x37\x40", 20, 3 },  /* TS2: TS2 */
   { "\x4c\xa5\xc0", 24, 2 },  /* SJW: SJW */
   { "\x30\x22\xcd", 30, 1 },  /* LBKM: LBKM */
   { "\x4c\x93\x0d", 31, 1 },  /* SILM: SILM */
};

const Field_t CAN1_TI0R_fields[] = {
   { "\x51\x84\x91", 0, 1 },  /* TXRQ: TXRQ */
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN1_TDT0R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x50\x75\x00", 8, 1 },  /* TGT: TGT */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN1_TDL0R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN1_TDH0R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN1_TI1R_fields[] = {
   { "\x51\x84\x91", 0, 1 },  /* TXRQ: TXRQ */
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN1_TDT1R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x50\x75\x00", 8, 1 },  /* TGT: TGT */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN1_TDL1R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN1_TDH1R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN1_TI2R_fields[] = {
   { "\x51\x84\x91", 0, 1 },  /* TXRQ: TXRQ */
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN1_TDT2R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x50\x75\x00", 8, 1 },  /* TGT: TGT */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN1_TDL2R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN1_TDH2R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN1_RI0R_fields[] = {
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN1_RDT0R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x18\xd2\x40", 8, 8 },  /* FMI: FMI */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN1_RDL0R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN1_RDH0R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN1_RI1R_fields[] = {
   { "\x49\x44\x80", 1, 1 },  /* RTR: RTR */
   { "\x24\x41\x40", 2, 1 },  /* IDE: IDE */
   { "\x15\x82\x44", 3, 18 },  /* EXID: EXID */
   { "\x4d\x42\x44", 21, 11 },  /* STID: STID */
};

const Field_t CAN1_RDT1R_fields[] = {
   { "\x10\xc0\xc0", 0, 4 },  /* DLC: DLC */
   { "\x18\xd2\x40", 8, 8 },  /* FMI: FMI */
   { "\x50\x93\x45", 16, 16 },  /* TIME: TIME */
};

const Field_t CAN1_RDL1R_fields[] = {
   { "\x10\x15\x01\x6c", 0, 8 },  /* DATA0: DATA0 */
   { "\x10\x15\x01\x70", 8, 8 },  /* DATA1: DATA1 */
   { "\x10\x15\x01\x74", 16, 8 },  /* DATA2: DATA2 */
   { "\x10\x15\x01\x78", 24, 8 },  /* DATA3: DATA3 */
};

const Field_t CAN1_RDH1R_fields[] = {
   { "\x10\x15\x01\x7c", 0, 8 },  /* DATA4: DATA4 */
   { "\x10\x15\x01\x80", 8, 8 },  /* DATA5: DATA5 */
   { "\x10\x15\x01\x84", 16, 8 },  /* DATA6: DATA6 */
   { "\x10\x15\x01\x88", 24, 8 },  /* DATA7: DATA7 */
};

const Field_t CAN1_F0R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F0R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F1R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F1R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F2R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F2R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F3R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F3R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F4R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F4R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F5R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F5R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F6R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F6R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F7R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F7R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F8R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F8R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F9R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F9R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F10R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F10R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F11R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F11R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F12R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F12R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F13R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F13R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F14R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F14R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F15R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F15R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F16R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F16R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F17R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F17R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F18R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F18R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F19R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F19R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F20R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F20R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F21R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F21R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F22R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F22R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F23R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F23R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F24R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F24R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F25R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F25R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F26R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F26R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F27R1_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Field_t CAN1_F27R2_fields[] = {
   { "\x18\x26\xc0", 0, 1 },  /* FB0: Filter bits */
   { "\x18\x27\x00", 1, 1 },  /* FB1: Filter bits */
   { "\x18\x27\x40", 2, 1 },  /* FB2: Filter bits */
   { "\x18\x27\x80", 3, 1 },  /* FB3: Filter bits */
   { "\x18\x27\xc0", 4, 1 },  /* FB4: Filter bits */
   { "\x18\x28\x00", 5, 1 },  /* FB5: Filter bits */
   { "\x18\x28\x40", 6, 1 },  /* FB6: Filter bits */
   { "\x18\x28\x80", 7, 1 },  /* FB7: Filter bits */
   { "\x18\x28\xc0", 8, 1 },  /* FB8: Filter bits */
   { "\x18\x29\x00", 9, 1 },  /* FB9: Filter bits */
   { "\x18\x27\x1b", 10, 1 },  /* FB10: Filter bits */
   { "\x18\x27\x1c", 11, 1 },  /* FB11: Filter bits */
   { "\x18\x27\x1d", 12, 1 },  /* FB12: Filter bits */
   { "\x18\x27\x1e", 13, 1 },  /* FB13: Filter bits */
   { "\x18\x27\x1f", 14, 1 },  /* FB14: Filter bits */
   { "\x18\x27\x20", 15, 1 },  /* FB15: Filter bits */
   { "\x18\x27\x21", 16, 1 },  /* FB16: Filter bits */
   { "\x18\x27\x22", 17, 1 },  /* FB17: Filter bits */
   { "\x18\x27\x23", 18, 1 },  /* FB18: Filter bits */
   { "\x18\x27\x24", 19, 1 },  /* FB19: Filter bits */
   { "\x18\x27\x5b", 20, 1 },  /* FB20: Filter bits */
   { "\x18\x27\x5c", 21, 1 },  /* FB21: Filter bits */
   { "\x18\x27\x5d", 22, 1 },  /* FB22: Filter bits */
   { "\x18\x27\x5e", 23, 1 },  /* FB23: Filter bits */
   { "\x18\x27\x5f", 24, 1 },  /* FB24: Filter bits */
   { "\x18\x27\x60", 25, 1 },  /* FB25: Filter bits */
   { "\x18\x27\x61", 26, 1 },  /* FB26: Filter bits */
   { "\x18\x27\x62", 27, 1 },  /* FB27: Filter bits */
   { "\x18\x27\x63", 28, 1 },  /* FB28: Filter bits */
   { "\x18\x27\x64", 29, 1 },  /* FB29: Filter bits */
   { "\x18\x27\x9b", 30, 1 },  /* FB30: Filter bits */
   { "\x18\x27\x9c", 31, 1 },  /* FB31: Filter bits */
};

const Register_t CAN1_registers[] = {
   {"\x34\x34\x80", 0, 32, 0, CAN1_MCR_fields, 10}, /* MCR: master control register */
   {"\x35\x34\x80", 4, 32, 0, CAN1_MSR_fields, 9}, /* MSR: master status register */
   {"\x51\x34\x80", 8, 32, 0, CAN1_TSR_fields, 22}, /* TSR: transmit status register */
   {"\x48\x66\xd2", 12, 32, 0, CAN1_RF0R_fields, 4}, /* RF0R: receive FIFO 0 register */
   {"\x48\x67\x12", 16, 32, 0, CAN1_RF1R_fields, 4}, /* RF1R: receive FIFO 1 register */
   {"\x24\x54\x80", 20, 32, 0, CAN1_IER_fields, 14}, /* IER: interrupt enable register */
   {"\x15\x34\x80", 24, 32, 0, CAN1_ESR_fields, 6}, /* ESR: interrupt enable register */
   {"\x09\x44\x80", 28, 32, 0, CAN1_BTR_fields, 6}, /* BTR: bit timing register */
   {"\x50\x96\xd2", 384, 32, 0, CAN1_TI0R_fields, 5}, /* TI0R: TX mailbox identifier register */
   {"\x50\x45\x1b\x48", 388, 32, 0, CAN1_TDT0R_fields, 3}, /* TDT0R: mailbox data length control and time stamp
          register */
   {"\x50\x43\x1b\x48", 392, 32, 0, CAN1_TDL0R_fields, 4}, /* TDL0R: mailbox data low register */
   {"\x50\x42\x1b\x48", 396, 32, 0, CAN1_TDH0R_fields, 4}, /* TDH0R: mailbox data high register */
   {"\x50\x97\x12", 400, 32, 0, CAN1_TI1R_fields, 5}, /* TI1R: mailbox identifier register */
   {"\x50\x45\x1c\x48", 404, 32, 0, CAN1_TDT1R_fields, 3}, /* TDT1R: mailbox data length control and time stamp
          register */
   {"\x50\x43\x1c\x48", 408, 32, 0, CAN1_TDL1R_fields, 4}, /* TDL1R: mailbox data low register */
   {"\x50\x42\x1c\x48", 412, 32, 0, CAN1_TDH1R_fields, 4}, /* TDH1R: mailbox data high register */
   {"\x50\x97\x52", 416, 32, 0, CAN1_TI2R_fields, 5}, /* TI2R: mailbox identifier register */
   {"\x50\x45\x1d\x48", 420, 32, 0, CAN1_TDT2R_fields, 3}, /* TDT2R: mailbox data length control and time stamp
          register */
   {"\x50\x43\x1d\x48", 424, 32, 0, CAN1_TDL2R_fields, 4}, /* TDL2R: mailbox data low register */
   {"\x50\x42\x1d\x48", 428, 32, 0, CAN1_TDH2R_fields, 4}, /* TDH2R: mailbox data high register */
   {"\x48\x96\xd2", 432, 32, 0, CAN1_RI0R_fields, 4}, /* RI0R: receive FIFO mailbox identifier
          register */
   {"\x48\x45\x1b\x48", 436, 32, 0, CAN1_RDT0R_fields, 3}, /* RDT0R: mailbox data high register */
   {"\x48\x43\x1b\x48", 440, 32, 0, CAN1_RDL0R_fields, 4}, /* RDL0R: mailbox data high register */
   {"\x48\x42\x1b\x48", 444, 32, 0, CAN1_RDH0R_fields, 4}, /* RDH0R: receive FIFO mailbox data high
          register */
   {"\x48\x97\x12", 448, 32, 0, CAN1_RI1R_fields, 4}, /* RI1R: mailbox data high register */
   {"\x48\x45\x1c\x48", 452, 32, 0, CAN1_RDT1R_fields, 3}, /* RDT1R: mailbox data high register */
   {"\x48\x43\x1c\x48", 456, 32, 0, CAN1_RDL1R_fields, 4}, /* RDL1R: mailbox data high register */
   {"\x48\x42\x1c\x48", 460, 32, 0, CAN1_RDH1R_fields, 4}, /* RDH1R: mailbox data high register */
   {"\x19\xb4\x9c", 576, 32, 0, CAN1_F0R1_fields, 32}, /* F0R1: Filter bank 0 register 1 */
   {"\x19\xb4\x9d", 580, 32, 0, CAN1_F0R2_fields, 32}, /* F0R2: Filter bank 0 register 2 */
   {"\x19\xc4\x9c", 584, 32, 0, CAN1_F1R1_fields, 32}, /* F1R1: Filter bank 1 register 1 */
   {"\x19\xc4\x9d", 588, 32, 0, CAN1_F1R2_fields, 32}, /* F1R2: Filter bank 1 register 2 */
   {"\x19\xd4\x9c", 592, 32, 0, CAN1_F2R1_fields, 32}, /* F2R1: Filter bank 2 register 1 */
   {"\x19\xd4\x9d", 596, 32, 0, CAN1_F2R2_fields, 32}, /* F2R2: Filter bank 2 register 2 */
   {"\x19\xe4\x9c", 600, 32, 0, CAN1_F3R1_fields, 32}, /* F3R1: Filter bank 3 register 1 */
   {"\x19\xe4\x9d", 604, 32, 0, CAN1_F3R2_fields, 32}, /* F3R2: Filter bank 3 register 2 */
   {"\x19\xf4\x9c", 608, 32, 0, CAN1_F4R1_fields, 32}, /* F4R1: Filter bank 4 register 1 */
   {"\x19\xf4\x9d", 612, 32, 0, CAN1_F4R2_fields, 32}, /* F4R2: Filter bank 4 register 2 */
   {"\x1a\x04\x9c", 616, 32, 0, CAN1_F5R1_fields, 32}, /* F5R1: Filter bank 5 register 1 */
   {"\x1a\x04\x9d", 620, 32, 0, CAN1_F5R2_fields, 32}, /* F5R2: Filter bank 5 register 2 */
   {"\x1a\x14\x9c", 624, 32, 0, CAN1_F6R1_fields, 32}, /* F6R1: Filter bank 6 register 1 */
   {"\x1a\x14\x9d", 628, 32, 0, CAN1_F6R2_fields, 32}, /* F6R2: Filter bank 6 register 2 */
   {"\x1a\x24\x9c", 632, 32, 0, CAN1_F7R1_fields, 32}, /* F7R1: Filter bank 7 register 1 */
   {"\x1a\x24\x9d", 636, 32, 0, CAN1_F7R2_fields, 32}, /* F7R2: Filter bank 7 register 2 */
   {"\x1a\x34\x9c", 640, 32, 0, CAN1_F8R1_fields, 32}, /* F8R1: Filter bank 8 register 1 */
   {"\x1a\x34\x9d", 644, 32, 0, CAN1_F8R2_fields, 32}, /* F8R2: Filter bank 8 register 2 */
   {"\x1a\x44\x9c", 648, 32, 0, CAN1_F9R1_fields, 32}, /* F9R1: Filter bank 9 register 1 */
   {"\x1a\x44\x9d", 652, 32, 0, CAN1_F9R2_fields, 32}, /* F9R2: Filter bank 9 register 2 */
   {"\x19\xc6\xd2\x70", 656, 32, 0, CAN1_F10R1_fields, 32}, /* F10R1: Filter bank 10 register 1 */
   {"\x19\xc6\xd2\x74", 660, 32, 0, CAN1_F10R2_fields, 32}, /* F10R2: Filter bank 10 register 2 */
   {"\x19\xc7\x12\x70", 664, 32, 0, CAN1_F11R1_fields, 32}, /* F11R1: Filter bank 11 register 1 */
   {"\x19\xc7\x12\x74", 668, 32, 0, CAN1_F11R2_fields, 32}, /* F11R2: Filter bank 11 register 2 */
   {"\x19\xc7\x52\x70", 672, 32, 0, CAN1_F12R1_fields, 32}, /* F12R1: Filter bank 4 register 1 */
   {"\x19\xc7\x52\x74", 676, 32, 0, CAN1_F12R2_fields, 32}, /* F12R2: Filter bank 12 register 2 */
   {"\x19\xc7\x92\x70", 680, 32, 0, CAN1_F13R1_fields, 32}, /* F13R1: Filter bank 13 register 1 */
   {"\x19\xc7\x92\x74", 684, 32, 0, CAN1_F13R2_fields, 32}, /* F13R2: Filter bank 13 register 2 */
   {"\x19\xc7\xd2\x70", 688, 32, 0, CAN1_F14R1_fields, 32}, /* F14R1: Filter bank 14 register 1 */
   {"\x19\xc7\xd2\x74", 692, 32, 0, CAN1_F14R2_fields, 32}, /* F14R2: Filter bank 14 register 2 */
   {"\x19\xc8\x12\x70", 696, 32, 0, CAN1_F15R1_fields, 32}, /* F15R1: Filter bank 15 register 1 */
   {"\x19\xc8\x12\x74", 700, 32, 0, CAN1_F15R2_fields, 32}, /* F15R2: Filter bank 15 register 2 */
   {"\x19\xc8\x52\x70", 704, 32, 0, CAN1_F16R1_fields, 32}, /* F16R1: Filter bank 16 register 1 */
   {"\x19\xc8\x52\x74", 708, 32, 0, CAN1_F16R2_fields, 32}, /* F16R2: Filter bank 16 register 2 */
   {"\x19\xc8\x92\x70", 712, 32, 0, CAN1_F17R1_fields, 32}, /* F17R1: Filter bank 17 register 1 */
   {"\x19\xc8\x92\x74", 716, 32, 0, CAN1_F17R2_fields, 32}, /* F17R2: Filter bank 17 register 2 */
   {"\x19\xc8\xd2\x70", 720, 32, 0, CAN1_F18R1_fields, 32}, /* F18R1: Filter bank 18 register 1 */
   {"\x19\xc8\xd2\x74", 724, 32, 0, CAN1_F18R2_fields, 32}, /* F18R2: Filter bank 18 register 2 */
   {"\x19\xc9\x12\x70", 728, 32, 0, CAN1_F19R1_fields, 32}, /* F19R1: Filter bank 19 register 1 */
   {"\x19\xc9\x12\x74", 732, 32, 0, CAN1_F19R2_fields, 32}, /* F19R2: Filter bank 19 register 2 */
   {"\x19\xd6\xd2\x70", 736, 32, 0, CAN1_F20R1_fields, 32}, /* F20R1: Filter bank 20 register 1 */
   {"\x19\xd6\xd2\x74", 740, 32, 0, CAN1_F20R2_fields, 32}, /* F20R2: Filter bank 20 register 2 */
   {"\x19\xd7\x12\x70", 744, 32, 0, CAN1_F21R1_fields, 32}, /* F21R1: Filter bank 21 register 1 */
   {"\x19\xd7\x12\x74", 748, 32, 0, CAN1_F21R2_fields, 32}, /* F21R2: Filter bank 21 register 2 */
   {"\x19\xd7\x52\x70", 752, 32, 0, CAN1_F22R1_fields, 32}, /* F22R1: Filter bank 22 register 1 */
   {"\x19\xd7\x52\x74", 756, 32, 0, CAN1_F22R2_fields, 32}, /* F22R2: Filter bank 22 register 2 */
   {"\x19\xd7\x92\x70", 760, 32, 0, CAN1_F23R1_fields, 32}, /* F23R1: Filter bank 23 register 1 */
   {"\x19\xd7\x92\x74", 764, 32, 0, CAN1_F23R2_fields, 32}, /* F23R2: Filter bank 23 register 2 */
   {"\x19\xd7\xd2\x70", 768, 32, 0, CAN1_F24R1_fields, 32}, /* F24R1: Filter bank 24 register 1 */
   {"\x19\xd7\xd2\x74", 772, 32, 0, CAN1_F24R2_fields, 32}, /* F24R2: Filter bank 24 register 2 */
   {"\x19\xd8\x12\x70", 776, 32, 0, CAN1_F25R1_fields, 32}, /* F25R1: Filter bank 25 register 1 */
   {"\x19\xd8\x12\x74", 780, 32, 0, CAN1_F25R2_fields, 32}, /* F25R2: Filter bank 25 register 2 */
   {"\x19\xd8\x52\x70", 784, 32, 0, CAN1_F26R1_fields, 32}, /* F26R1: Filter bank 26 register 1 */
   {"\x19\xd8\x52\x74", 788, 32, 0, CAN1_F26R2_fields, 32}, /* F26R2: Filter bank 26 register 2 */
   {"\x19\xd8\x92\x70", 792, 32, 0, CAN1_F27R1_fields, 32}, /* F27R1: Filter bank 27 register 1 */
   {"\x19\xd8\x92\x74", 796, 32, 0, CAN1_F27R2_fields, 32}, /* F27R2: Filter bank 27 register 2 */
};

const Field_t USB_EP0R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP1R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP2R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP3R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP4R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP5R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP6R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_EP7R_fields[] = {
   { "\x14\x10", 0, 4 },  /* EA: Endpoint address */
   { "\x4d\x40\x54\x95\x46\x00", 4, 2 },  /* STAT_TX: Status bits, for transmission
              transfers */
   { "\x11\x43\xc7\x95\x46\x00", 6, 1 },  /* DTOG_TX: Data Toggle, for transmission
              transfers */
   { "\x0d\x44\xa5\x51\x80", 7, 1 },  /* CTR_TX: Correct Transfer for
              transmission */
   { "\x15\x09\x4b\x24\xe1\x00", 8, 1 },  /* EP_KIND: Endpoint kind */
   { "\x15\x09\x54\x65\x01\x40", 9, 2 },  /* EP_TYPE: Endpoint type */
   { "\x4c\x55\x15\x40", 11, 1 },  /* SETUP: Setup transaction
              completed */
   { "\x4d\x40\x54\x95\x26\x00", 12, 2 },  /* STAT_RX: Status bits, for reception
              transfers */
   { "\x11\x43\xc7\x95\x26\x00", 14, 1 },  /* DTOG_RX: Data Toggle, for reception
              transfers */
   { "\x0d\x44\xa5\x49\x80", 15, 1 },  /* CTR_RX: Correct transfer for
              reception */
};

const Field_t USB_CNTR_fields[] = {
   { "\x19\x21\x53", 0, 1 },  /* FRES: Force USB Reset */
   { "\x40\x45\xce", 1, 1 },  /* PDWN: Power down */
   { "\x31\x03\x4f\x10\x50", 2, 1 },  /* LPMODE: Low-power mode */
   { "\x19\x35\x53\x40", 3, 1 },  /* FSUSP: Force suspend */
   { "\x48\x54\xd5\x34\x50", 4, 1 },  /* RESUME: Resume request */
   { "\x31\xc4\x85\x4d\x53\x45", 5, 1 },  /* L1RESUME: LPM L1 Resume request */
   { "\x31\xc4\x85\x44\xd0", 7, 1 },  /* L1REQM: LPM L1 state request interrupt
              mask */
   { "\x15\x33\xc6\x34", 8, 1 },  /* ESOFM: Expected start of frame interrupt
              mask */
   { "\x4c\xf1\x8d", 9, 1 },  /* SOFM: Start of frame interrupt
              mask */
   { "\x48\x54\xc5\x50\xd0", 10, 1 },  /* RESETM: USB reset interrupt mask */
   { "\x4d\x54\xd0\x34", 11, 1 },  /* SUSPM: Suspend mode interrupt
              mask */
   { "\x5c\xb5\x50\x34", 12, 1 },  /* WKUPM: Wakeup interrupt mask */
   { "\x15\x24\x8d", 13, 1 },  /* ERRM: Error interrupt mask */
   { "\x40\xd0\x4f\x59\x23\x40", 14, 1 },  /* PMAOVRM: Packet memory area over / underrun
              interrupt mask */
   { "\x0d\x44\x8d", 15, 1 },  /* CTRM: Correct transfer interrupt
              mask */
};

const Field_t USB_ISTR_fields[] = {
   { "\x15\x09\x49\x10", 0, 4 },  /* EP_ID: Endpoint Identifier */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Direction of transaction */
   { "\x31\xc4\x85\x44", 7, 1 },  /* L1REQ: LPM L1 state request */
   { "\x15\x33\xc6", 8, 1 },  /* ESOF: Expected start frame */
   { "\x4c\xf1\x80", 9, 1 },  /* SOF: start of frame */
   { "\x48\x54\xc5\x50", 10, 1 },  /* RESET: reset request */
   { "\x4d\x54\xd0", 11, 1 },  /* SUSP: Suspend mode request */
   { "\x5c\xb5\x50", 12, 1 },  /* WKUP: Wakeup */
   { "\x15\x24\x80", 13, 1 },  /* ERR: Error */
   { "\x40\xd0\x4f\x59\x20", 14, 1 },  /* PMAOVR: Packet memory area over /
              underrun */
   { "\x0d\x44\x80", 15, 1 },  /* CTR: Correct transfer */
};

const Field_t USB_FNR_fields[] = {
   { "\x18\xe0", 0, 11 },  /* FN: Frame number */
   { "\x31\x33\xc6", 11, 2 },  /* LSOF: Lost SOF */
   { "\x30\x32\xc0", 13, 1 },  /* LCK: Locked */
   { "\x49\x81\x0d", 14, 1 },  /* RXDM: Receive data - line status */
   { "\x49\x81\x10", 15, 1 },  /* RXDP: Receive data + line status */
};

const Field_t USB_DADDR_fields[] = {
   { "\x04\x41\x00", 0, 7 },  /* ADD: Device address */
   { "\x14\x60", 7, 1 },  /* EF: Enable function */
};

const Field_t USB_BTABLE_fields[] = {
   { "\x09\x40\x42\x30\x50", 3, 13 },  /* BTABLE: Buffer table */
};

const Register_t USB_registers[] = {
   {"\x15\x06\xd2", 0, 32, 0, USB_EP0R_fields, 10}, /* EP0R: endpoint 0 register */
   {"\x15\x07\x12", 4, 32, 0, USB_EP1R_fields, 10}, /* EP1R: endpoint 1 register */
   {"\x15\x07\x52", 8, 32, 0, USB_EP2R_fields, 10}, /* EP2R: endpoint 2 register */
   {"\x15\x07\x92", 12, 32, 0, USB_EP3R_fields, 10}, /* EP3R: endpoint 3 register */
   {"\x15\x07\xd2", 16, 32, 0, USB_EP4R_fields, 10}, /* EP4R: endpoint 4 register */
   {"\x15\x08\x12", 20, 32, 0, USB_EP5R_fields, 10}, /* EP5R: endpoint 5 register */
   {"\x15\x08\x52", 24, 32, 0, USB_EP6R_fields, 10}, /* EP6R: endpoint 6 register */
   {"\x15\x08\x92", 28, 32, 0, USB_EP7R_fields, 10}, /* EP7R: endpoint 7 register */
   {"\x0c\xe5\x12", 64, 32, 0, USB_CNTR_fields, 15}, /* CNTR: control register */
   {"\x25\x35\x12", 68, 32, 0, USB_ISTR_fields, 11}, /* ISTR: interrupt status register */
   {"\x18\xe4\x80", 72, 32, 0, USB_FNR_fields, 5}, /* FNR: frame number register */
   {"\x10\x11\x04\x48", 76, 32, 0, USB_DADDR_fields, 2}, /* DADDR: device address */
   {"\x09\x40\x42\x30\x50", 80, 32, 0, USB_BTABLE_fields, 1}, /* BTABLE: Buffer table address */
};

const Field_t PWR_CR1_fields[] = {
   { "\x31\x03\x53", 0, 3 },  /* LPMS: Low-power mode selection */
   { "\x10\x24\x00", 8, 1 },  /* DBP: Disable backup domain write
              protection */
   { "\x58\xf4\xc0", 9, 2 },  /* VOS: Voltage scaling range
              selection */
   { "\x31\x04\x80", 14, 1 },  /* LPR: Low-power run */
};

const Field_t PWR_CR2_fields[] = {
   { "\x41\x61\x05", 0, 1 },  /* PVDE: Power voltage detector
              enable */
   { "\x40\xc4\xc0", 1, 3 },  /* PLS: Power voltage detector level
              selection */
   { "\x41\x63\x45\x70", 4, 1 },  /* PVME1: Peripheral voltage monitoring 1 enable:
              VDDUSB vs. 1.2V */
   { "\x41\x63\x45\x74", 5, 1 },  /* PVME2: Peripheral voltage monitoring 2 enable:
              VDDIO2 vs. 0.9V */
   { "\x41\x63\x45\x78", 6, 1 },  /* PVME3: Peripheral voltage monitoring 3 enable:
              VDDA vs. 1.62V */
   { "\x41\x63\x45\x7c", 7, 1 },  /* PVME4: Peripheral voltage monitoring 4 enable:
              VDDA vs. 2.2V */
   { "\x24\xf4\xd6", 9, 1 },  /* IOSV: VDDIO2 Independent I/Os supply
              valid */
   { "\x55\x35\x80", 10, 1 },  /* USV: VDDUSB USB supply valid */
};

const Field_t PWR_CR3_fields[] = {
   { "\x15\x75\x50\x70", 0, 1 },  /* EWUP1: Enable Wakeup pin WKUP1 */
   { "\x15\x75\x50\x74", 1, 1 },  /* EWUP2: Enable Wakeup pin WKUP2 */
   { "\x15\x75\x50\x78", 2, 1 },  /* EWUP3: Enable Wakeup pin WKUP3 */
   { "\x15\x75\x50\x7c", 3, 1 },  /* EWUP4: Enable Wakeup pin WKUP4 */
   { "\x15\x75\x50\x80", 4, 1 },  /* EWUP5: Enable Wakeup pin WKUP5 */
   { "\x49\x24\xc0", 8, 1 },  /* RRS: SRAM2 retention in Standby
              mode */
   { "\x05\x00\xc0", 10, 1 },  /* APC: Apply pull-up and pull-down
              configuration */
   { "\x15\x71\x80", 15, 1 },  /* EWF: Enable internal wakeup
              line */
};

const Field_t PWR_CR4_fields[] = {
   { "\x5d\x07\x00", 0, 1 },  /* WP1: Wakeup pin WKUP1 polarity */
   { "\x5d\x07\x40", 1, 1 },  /* WP2: Wakeup pin WKUP2 polarity */
   { "\x5d\x07\x80", 2, 1 },  /* WP3: Wakeup pin WKUP3 polarity */
   { "\x5d\x07\xc0", 3, 1 },  /* WP4: Wakeup pin WKUP4 polarity */
   { "\x5d\x08\x00", 4, 1 },  /* WP5: Wakeup pin WKUP5 polarity */
   { "\x58\x21\x40", 8, 1 },  /* VBE: VBAT battery charging
              enable */
   { "\x58\x24\x93", 9, 1 },  /* VBRS: VBAT battery charging resistor
              selection */
};

const Field_t PWR_SR1_fields[] = {
   { "\x0d\x75\x46\x70", 0, 1 },  /* CWUF1: Wakeup flag 1 */
   { "\x0d\x75\x46\x74", 1, 1 },  /* CWUF2: Wakeup flag 2 */
   { "\x0d\x75\x46\x78", 2, 1 },  /* CWUF3: Wakeup flag 3 */
   { "\x0d\x75\x46\x7c", 3, 1 },  /* CWUF4: Wakeup flag 4 */
   { "\x0d\x75\x46\x80", 4, 1 },  /* CWUF5: Wakeup flag 5 */
   { "\x0d\x30\x86", 8, 1 },  /* CSBF: Standby flag */
   { "\x5d\x51\x89", 15, 1 },  /* WUFI: Wakeup flag internal */
};

const Field_t PWR_SR2_fields[] = {
   { "\x48\x51\xcc\x41\x30", 8, 1 },  /* REGLPS: Low-power regulator
              started */
   { "\x48\x51\xcc\x40\x60", 9, 1 },  /* REGLPF: Low-power regulator flag */
   { "\x58\xf4\xc6", 10, 1 },  /* VOSF: Voltage scaling flag */
   { "\x41\x61\x0f", 11, 1 },  /* PVDO: Power voltage detector
              output */
   { "\x41\x63\x4f\x70", 12, 1 },  /* PVMO1: Peripheral voltage monitoring output:
              VDDUSB vs. 1.2 V */
   { "\x41\x63\x4f\x74", 13, 1 },  /* PVMO2: Peripheral voltage monitoring output:
              VDDIO2 vs. 0.9 V */
   { "\x41\x63\x4f\x78", 14, 1 },  /* PVMO3: Peripheral voltage monitoring output:
              VDDA vs. 1.62 V */
   { "\x41\x63\x4f\x7c", 15, 1 },  /* PVMO4: Peripheral voltage monitoring output:
              VDDA vs. 2.2 V */
};

const Field_t PWR_SCR_fields[] = {
   { "\x5d\x51\x9c", 0, 1 },  /* WUF1: Clear wakeup flag 1 */
   { "\x5d\x51\x9d", 1, 1 },  /* WUF2: Clear wakeup flag 2 */
   { "\x5d\x51\x9e", 2, 1 },  /* WUF3: Clear wakeup flag 3 */
   { "\x5d\x51\x9f", 3, 1 },  /* WUF4: Clear wakeup flag 4 */
   { "\x5d\x51\xa0", 4, 1 },  /* WUF5: Clear wakeup flag 5 */
   { "\x4c\x21\x80", 8, 1 },  /* SBF: Clear standby flag */
};

const Field_t PWR_PUCRA_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port A pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port A pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRA_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port A pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port A pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRB_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port B pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port B pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRB_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port B pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port B pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRC_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port C pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port C pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRC_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port C pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port C pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRD_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port D pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port D pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRD_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port D pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port D pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRE_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port E pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port E pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRE_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port E pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port E pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRF_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port F pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port F pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRF_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port F pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port F pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRG_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x40", 2, 1 },  /* PU2: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x80", 3, 1 },  /* PU3: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\xc0", 4, 1 },  /* PU4: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x58\x00", 5, 1 },  /* PU5: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x58\x40", 6, 1 },  /* PU6: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x58\x80", 7, 1 },  /* PU7: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x58\xc0", 8, 1 },  /* PU8: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x59\x00", 9, 1 },  /* PU9: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1b", 10, 1 },  /* PU10: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1c", 11, 1 },  /* PU11: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1d", 12, 1 },  /* PU12: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1e", 13, 1 },  /* PU13: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x1f", 14, 1 },  /* PU14: Port G pull-up bit y
              (y=0..15) */
   { "\x41\x57\x20", 15, 1 },  /* PU15: Port G pull-up bit y
              (y=0..15) */
};

const Field_t PWR_PDCRG_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x40", 2, 1 },  /* PD2: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x80", 3, 1 },  /* PD3: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\xc0", 4, 1 },  /* PD4: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x48\x00", 5, 1 },  /* PD5: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x48\x40", 6, 1 },  /* PD6: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x48\x80", 7, 1 },  /* PD7: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x48\xc0", 8, 1 },  /* PD8: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x49\x00", 9, 1 },  /* PD9: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1b", 10, 1 },  /* PD10: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1c", 11, 1 },  /* PD11: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1d", 12, 1 },  /* PD12: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1e", 13, 1 },  /* PD13: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x1f", 14, 1 },  /* PD14: Port G pull-down bit y
              (y=0..15) */
   { "\x40\x47\x20", 15, 1 },  /* PD15: Port G pull-down bit y
              (y=0..15) */
};

const Field_t PWR_PUCRH_fields[] = {
   { "\x41\x56\xc0", 0, 1 },  /* PU0: Port H pull-up bit y
              (y=0..1) */
   { "\x41\x57\x00", 1, 1 },  /* PU1: Port H pull-up bit y
              (y=0..1) */
};

const Field_t PWR_PDCRH_fields[] = {
   { "\x40\x46\xc0", 0, 1 },  /* PD0: Port H pull-down bit y
              (y=0..1) */
   { "\x40\x47\x00", 1, 1 },  /* PD1: Port H pull-down bit y
              (y=0..1) */
};

const Register_t PWR_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, PWR_CR1_fields, 4}, /* CR1: Power control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, PWR_CR2_fields, 8}, /* CR2: Power control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, PWR_CR3_fields, 8}, /* CR3: Power control register 3 */
   {"\x0d\x27\xc0", 12, 32, 0, PWR_CR4_fields, 7}, /* CR4: Power control register 4 */
   {"\x4d\x27\x00", 16, 32, 0, PWR_SR1_fields, 7}, /* SR1: Power status register 1 */
   {"\x4d\x27\x40", 20, 32, 0, PWR_SR2_fields, 8}, /* SR2: Power status register 2 */
   {"\x4c\x34\x80", 24, 32, 0, PWR_SCR_fields, 6}, /* SCR: Power status clear register */
   {"\x41\x50\xd2\x04", 32, 32, 0, PWR_PUCRA_fields, 16}, /* PUCRA: Power Port A pull-up control
          register */
   {"\x40\x40\xd2\x04", 36, 32, 0, PWR_PDCRA_fields, 16}, /* PDCRA: Power Port A pull-down control
          register */
   {"\x41\x50\xd2\x08", 40, 32, 0, PWR_PUCRB_fields, 16}, /* PUCRB: Power Port B pull-up control
          register */
   {"\x40\x40\xd2\x08", 44, 32, 0, PWR_PDCRB_fields, 16}, /* PDCRB: Power Port B pull-down control
          register */
   {"\x41\x50\xd2\x0c", 48, 32, 0, PWR_PUCRC_fields, 16}, /* PUCRC: Power Port C pull-up control
          register */
   {"\x40\x40\xd2\x0c", 52, 32, 0, PWR_PDCRC_fields, 16}, /* PDCRC: Power Port C pull-down control
          register */
   {"\x41\x50\xd2\x10", 56, 32, 0, PWR_PUCRD_fields, 16}, /* PUCRD: Power Port D pull-up control
          register */
   {"\x40\x40\xd2\x10", 60, 32, 0, PWR_PDCRD_fields, 16}, /* PDCRD: Power Port D pull-down control
          register */
   {"\x41\x50\xd2\x14", 64, 32, 0, PWR_PUCRE_fields, 16}, /* PUCRE: Power Port E pull-up control
          register */
   {"\x40\x40\xd2\x14", 68, 32, 0, PWR_PDCRE_fields, 16}, /* PDCRE: Power Port E pull-down control
          register */
   {"\x41\x50\xd2\x18", 72, 32, 0, PWR_PUCRF_fields, 16}, /* PUCRF: Power Port F pull-up control
          register */
   {"\x40\x40\xd2\x18", 76, 32, 0, PWR_PDCRF_fields, 16}, /* PDCRF: Power Port F pull-down control
          register */
   {"\x41\x50\xd2\x1c", 80, 32, 0, PWR_PUCRG_fields, 16}, /* PUCRG: Power Port G pull-up control
          register */
   {"\x40\x40\xd2\x1c", 84, 32, 0, PWR_PDCRG_fields, 16}, /* PDCRG: Power Port G pull-down control
          register */
   {"\x41\x50\xd2\x20", 88, 32, 0, PWR_PUCRH_fields, 2}, /* PUCRH: Power Port H pull-up control
          register */
   {"\x40\x40\xd2\x20", 92, 32, 0, PWR_PDCRH_fields, 2}, /* PDCRH: Power Port H pull-down control
          register */
};

const Field_t DAC1_CR_fields[] = {
   { "\x14\xe7\x00", 0, 1 },  /* EN1: DAC channel1 enable */
   { "\x50\x53\x9c", 2, 1 },  /* TEN1: DAC channel1 trigger
              enable */
   { "\x51\x31\x4c\x70", 3, 3 },  /* TSEL1: DAC channel1 trigger
              selection */
   { "\x5c\x15\x85\x70", 6, 2 },  /* WAVE1: DAC channel1 noise/triangle wave
              generation enable */
   { "\x34\x13\x50\x70", 8, 4 },  /* MAMP1: DAC channel1 mask/amplitude
              selector */
   { "\x10\xd0\x45\x39\xc0", 12, 1 },  /* DMAEN1: DAC channel1 DMA enable */
   { "\x10\xd0\x55\x11\x22\x45\x70", 13, 1 },  /* DMAUDRIE1: DAC channel1 DMA Underrun Interrupt
              enable */
   { "\x0c\x53\x9c", 14, 1 },  /* CEN1: DAC Channel 1 calibration
              enable */
   { "\x14\xe7\x40", 16, 1 },  /* EN2: DAC channel2 enable */
   { "\x50\x53\x9d", 18, 1 },  /* TEN2: DAC channel2 trigger
              enable */
   { "\x51\x31\x4c\x74", 19, 3 },  /* TSEL2: DAC channel2 trigger
              selection */
   { "\x5c\x15\x85\x74", 22, 2 },  /* WAVE2: DAC channel2 noise/triangle wave
              generation enable */
   { "\x34\x13\x50\x74", 24, 4 },  /* MAMP2: DAC channel2 mask/amplitude
              selector */
   { "\x10\xd0\x45\x39\xd0", 28, 1 },  /* DMAEN2: DAC channel2 DMA enable */
   { "\x10\xd0\x55\x11\x22\x45\x74", 29, 1 },  /* DMAUDRIE2: DAC channel2 DMA underrun interrupt
              enable */
   { "\x0c\x53\x9d", 30, 1 },  /* CEN2: DAC Channel 2 calibration
              enable */
};

const Field_t DAC1_SWTRIGR_fields[] = {
   { "\x4d\x75\x12\x24\x77\x00", 0, 1 },  /* SWTRIG1: DAC channel1 software
              trigger */
   { "\x4d\x75\x12\x24\x77\x40", 1, 1 },  /* SWTRIG2: DAC channel2 software
              trigger */
};

const Field_t DAC1_DHR12R1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 12 },  /* DACC1DHR: DAC channel1 12-bit right-aligned
              data */
};

const Field_t DAC1_DHR12L1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 4, 12 },  /* DACC1DHR: DAC channel1 12-bit left-aligned
              data */
};

const Field_t DAC1_DHR8R1_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 8 },  /* DACC1DHR: DAC channel1 8-bit right-aligned
              data */
};

const Field_t DAC1_DHR12R2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 0, 12 },  /* DACC2DHR: DAC channel2 12-bit right-aligned
              data */
};

const Field_t DAC1_DHR12L2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 4, 12 },  /* DACC2DHR: DAC channel2 12-bit left-aligned
              data */
};

const Field_t DAC1_DHR8R2_fields[] = {
   { "\x10\x10\xc3\x74\x42\x12", 0, 8 },  /* DACC2DHR: DAC channel2 8-bit right-aligned
              data */
};

const Field_t DAC1_DHR12RD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 12 },  /* DACC1DHR: DAC channel1 12-bit right-aligned
              data */
   { "\x10\x10\xc3\x74\x42\x12", 16, 12 },  /* DACC2DHR: DAC channel2 12-bit right-aligned
              data */
};

const Field_t DAC1_DHR12LD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 4, 12 },  /* DACC1DHR: DAC channel1 12-bit left-aligned
              data */
   { "\x10\x10\xc3\x74\x42\x12", 20, 12 },  /* DACC2DHR: DAC channel2 12-bit left-aligned
              data */
};

const Field_t DAC1_DHR8RD_fields[] = {
   { "\x10\x10\xc3\x70\x42\x12", 0, 8 },  /* DACC1DHR: DAC channel1 8-bit right-aligned
              data */
   { "\x10\x10\xc3\x74\x42\x12", 8, 8 },  /* DACC2DHR: DAC channel2 8-bit right-aligned
              data */
};

const Field_t DAC1_DOR1_fields[] = {
   { "\x10\x10\xc3\x70\x43\xd2", 0, 12 },  /* DACC1DOR: DAC channel1 data output */
};

const Field_t DAC1_DOR2_fields[] = {
   { "\x10\x10\xc3\x74\x43\xd2", 0, 12 },  /* DACC2DOR: DAC channel2 data output */
};

const Field_t DAC1_SR_fields[] = {
   { "\x10\xd0\x55\x11\x27\x00", 13, 1 },  /* DMAUDR1: DAC channel1 DMA underrun
              flag */
   { "\x0c\x13\x25\x18\xc0\x47\x70", 14, 1 },  /* CAL_FLAG1: DAC Channel 1 calibration offset
              status */
   { "\x09\x74\xd4\x70", 15, 1 },  /* BWST1: DAC Channel 1 busy writing sample time
              flag */
   { "\x10\xd0\x55\x11\x27\x40", 29, 1 },  /* DMAUDR2: DAC channel2 DMA underrun
              flag */
   { "\x0c\x13\x25\x18\xc0\x47\x74", 30, 1 },  /* CAL_FLAG2: DAC Channel 2 calibration offset
              status */
   { "\x09\x74\xd4\x74", 31, 1 },  /* BWST2: DAC Channel 2 busy writing sample time
              flag */
};

const Field_t DAC1_CCR_fields[] = {
   { "\x3d\x44\x89\x35\xc0", 0, 5 },  /* OTRIM1: DAC Channel 1 offset trimming
              value */
   { "\x3d\x44\x89\x35\xd0", 16, 5 },  /* OTRIM2: DAC Channel 2 offset trimming
              value */
};

const Field_t DAC1_MCR_fields[] = {
   { "\x34\xf1\x05\x70", 0, 3 },  /* MODE1: DAC Channel 1 mode */
   { "\x34\xf1\x05\x74", 16, 3 },  /* MODE2: DAC Channel 2 mode */
};

const Field_t DAC1_SHSR1_fields[] = {
   { "\x51\x30\x4d\x40\xc1\x5c", 0, 10 },  /* TSAMPLE1: DAC Channel 1 sample Time */
};

const Field_t DAC1_SHSR2_fields[] = {
   { "\x51\x30\x4d\x40\xc1\x5d", 0, 10 },  /* TSAMPLE2: DAC Channel 2 sample Time */
};

const Field_t DAC1_SHHR_fields[] = {
   { "\x50\x83\xcc\x11\xc0", 0, 10 },  /* THOLD1: DAC Channel 1 hold Time */
   { "\x50\x83\xcc\x11\xd0", 16, 10 },  /* THOLD2: DAC Channel 2 hold time */
};

const Field_t DAC1_SHRR_fields[] = {
   { "\x51\x21\x46\x48\x54\xc8\x70", 0, 8 },  /* TREFRESH1: DAC Channel 1 refresh Time */
   { "\x51\x21\x46\x48\x54\xc8\x74", 16, 8 },  /* TREFRESH2: DAC Channel 2 refresh Time */
};

const Register_t DAC1_registers[] = {
   {"\x0d\x20", 0, 32, 0, DAC1_CR_fields, 16}, /* CR: control register */
   {"\x4d\x75\x12\x24\x74\x80", 4, 32, 0, DAC1_SWTRIGR_fields, 2}, /* SWTRIGR: software trigger register */
   {"\x10\x84\x9c\x75\x27\x00", 8, 32, 0, DAC1_DHR12R1_fields, 1}, /* DHR12R1: channel1 12-bit right-aligned data holding
          register */
   {"\x10\x84\x9c\x74\xc7\x00", 12, 32, 0, DAC1_DHR12L1_fields, 1}, /* DHR12L1: channel1 12-bit left-aligned data holding
          register */
   {"\x10\x84\xa3\x49\xc0", 16, 32, 0, DAC1_DHR8R1_fields, 1}, /* DHR8R1: channel1 8-bit right-aligned data holding
          register */
   {"\x10\x84\x9c\x75\x27\x40", 20, 32, 0, DAC1_DHR12R2_fields, 1}, /* DHR12R2: channel2 12-bit right aligned data holding
          register */
   {"\x10\x84\x9c\x74\xc7\x40", 24, 32, 0, DAC1_DHR12L2_fields, 1}, /* DHR12L2: channel2 12-bit left aligned data holding
          register */
   {"\x10\x84\xa3\x49\xd0", 28, 32, 0, DAC1_DHR8R2_fields, 1}, /* DHR8R2: channel2 8-bit right-aligned data holding
          register */
   {"\x10\x84\x9c\x75\x21\x00", 32, 32, 0, DAC1_DHR12RD_fields, 2}, /* DHR12RD: Dual DAC 12-bit right-aligned data holding
          register */
   {"\x10\x84\x9c\x74\xc1\x00", 36, 32, 0, DAC1_DHR12LD_fields, 2}, /* DHR12LD: DUAL DAC 12-bit left aligned data holding
          register */
   {"\x10\x84\xa3\x48\x40", 40, 32, 0, DAC1_DHR8RD_fields, 2}, /* DHR8RD: DUAL DAC 8-bit right aligned data holding
          register */
   {"\x10\xf4\x9c", 44, 32, 0, DAC1_DOR1_fields, 1}, /* DOR1: channel1 data output register */
   {"\x10\xf4\x9d", 48, 32, 0, DAC1_DOR2_fields, 1}, /* DOR2: channel2 data output register */
   {"\x4d\x20", 52, 32, 0, DAC1_SR_fields, 6}, /* SR: status register */
   {"\x0c\x34\x80", 56, 32, 0, DAC1_CCR_fields, 2}, /* CCR: calibration control register */
   {"\x34\x34\x80", 60, 32, 0, DAC1_MCR_fields, 2}, /* MCR: mode control register */
   {"\x4c\x84\xd2\x70", 64, 32, 0, DAC1_SHSR1_fields, 1}, /* SHSR1: Sample and Hold sample time register
          1 */
   {"\x4c\x84\xd2\x74", 68, 32, 0, DAC1_SHSR2_fields, 1}, /* SHSR2: Sample and Hold sample time register
          2 */
   {"\x4c\x82\x12", 72, 32, 0, DAC1_SHHR_fields, 2}, /* SHHR: Sample and Hold hold time
          register */
   {"\x4c\x84\x92", 76, 32, 0, DAC1_SHRR_fields, 2}, /* SHRR: Sample and Hold refresh time
          register */
};

const Field_t OPAMP_OPAMP1_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier
              Enable */
   { "\x3d\x00\x4c\x40\xd0", 1, 1 },  /* OPALPM: Operational amplifier Low Power
              Mode */
   { "\x3d\x00\x4d\x3c\x41\x40", 2, 2 },  /* OPAMODE: Operational amplifier PGA
              mode */
   { "\x40\x70\x65\x1c\x12\x4e", 4, 2 },  /* PGA_GAIN: Operational amplifier Programmable
              amplifier gain value */
   { "\x58\xd9\x53\x14\xc0", 8, 2 },  /* VM_SEL: Inverting input selection */
   { "\x59\x09\x53\x14\xc0", 10, 1 },  /* VP_SEL: Non inverted input
              selection */
   { "\x0c\x13\x0f\x38", 12, 1 },  /* CALON: Calibration mode enabled */
   { "\x0c\x13\x13\x14\xc0", 13, 1 },  /* CALSEL: Calibration selection */
   { "\x55\x31\x52\x51\x22\x4d", 14, 1 },  /* USERTRIM: allows to switch from
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“factoryÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
              AOP offset trimmed values to AOP offset
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“userÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ */
   { "\x0c\x13\x0f\x55\x40", 15, 1 },  /* CALOUT: Operational amplifier calibration
              output */
   { "\x3d\x00\x65\x48\x13\x87\x14", 31, 1 },  /* OPA_RANGE: Operational amplifier power supply range
              for stability */
};

const Field_t OPAMP_OPAMP1_OTR_fields[] = {
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 0, 5 },  /* TRIMOFFSETN: Trim for NMOS differential
              pairs */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 8, 5 },  /* TRIMOFFSETP: Trim for PMOS differential
              pairs */
};

const Field_t OPAMP_OPAMP1_LPOTR_fields[] = {
   { "\x51\x22\x4d\x31\x03\xc6\x19\x31\x54\x38", 0, 5 },  /* TRIMLPOFFSETN: Trim for NMOS differential
              pairs */
   { "\x51\x22\x4d\x31\x03\xc6\x19\x31\x54\x40", 8, 5 },  /* TRIMLPOFFSETP: Trim for PMOS differential
              pairs */
};

const Field_t OPAMP_OPAMP2_CSR_fields[] = {
   { "\x3d\x00\x45\x38", 0, 1 },  /* OPAEN: Operational amplifier
              Enable */
   { "\x3d\x00\x4c\x40\xd0", 1, 1 },  /* OPALPM: Operational amplifier Low Power
              Mode */
   { "\x3d\x00\x4d\x3c\x41\x40", 2, 2 },  /* OPAMODE: Operational amplifier PGA
              mode */
   { "\x40\x70\x65\x1c\x12\x4e", 4, 2 },  /* PGA_GAIN: Operational amplifier Programmable
              amplifier gain value */
   { "\x58\xd9\x53\x14\xc0", 8, 2 },  /* VM_SEL: Inverting input selection */
   { "\x59\x09\x53\x14\xc0", 10, 1 },  /* VP_SEL: Non inverted input
              selection */
   { "\x0c\x13\x0f\x38", 12, 1 },  /* CALON: Calibration mode enabled */
   { "\x0c\x13\x13\x14\xc0", 13, 1 },  /* CALSEL: Calibration selection */
   { "\x55\x31\x52\x51\x22\x4d", 14, 1 },  /* USERTRIM: allows to switch from
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“factoryÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢
              AOP offset trimmed values to AOP offset
              ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¹Ãƒâ€¦Ã¢â‚¬Å“userÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ */
   { "\x0c\x13\x0f\x55\x40", 15, 1 },  /* CALOUT: Operational amplifier calibration
              output */
};

const Field_t OPAMP_OPAMP2_OTR_fields[] = {
   { "\x51\x22\x4d\x3c\x61\x93\x15\x43\x80", 0, 5 },  /* TRIMOFFSETN: Trim for NMOS differential
              pairs */
   { "\x51\x22\x4d\x3c\x61\x93\x15\x44\x00", 8, 5 },  /* TRIMOFFSETP: Trim for PMOS differential
              pairs */
};

const Field_t OPAMP_OPAMP2_LPOTR_fields[] = {
   { "\x51\x22\x4d\x31\x03\xc6\x19\x31\x54\x38", 0, 5 },  /* TRIMLPOFFSETN: Trim for NMOS differential
              pairs */
   { "\x51\x22\x4d\x31\x03\xc6\x19\x31\x54\x40", 8, 5 },  /* TRIMLPOFFSETP: Trim for PMOS differential
              pairs */
};

const Register_t OPAMP_registers[] = {
   {"\x3d\x00\x4d\x41\xc9\x43\x4d\x20", 0, 32, 0, OPAMP_OPAMP1_CSR_fields, 11}, /* OPAMP1_CSR: OPAMP1 control/status register */
   {"\x3d\x00\x4d\x41\xc9\x4f\x51\x20", 4, 32, 0, OPAMP_OPAMP1_OTR_fields, 2}, /* OPAMP1_OTR: OPAMP1 offset trimming register in normal
          mode */
   {"\x3d\x00\x4d\x41\xc9\x4c\x40\xf5\x12", 8, 32, 0, OPAMP_OPAMP1_LPOTR_fields, 2}, /* OPAMP1_LPOTR: OPAMP1 offset trimming register in low-power
          mode */
   {"\x3d\x00\x4d\x41\xd9\x43\x4d\x20", 16, 32, 0, OPAMP_OPAMP2_CSR_fields, 10}, /* OPAMP2_CSR: OPAMP2 control/status register */
   {"\x3d\x00\x4d\x41\xd9\x4f\x51\x20", 20, 32, 0, OPAMP_OPAMP2_OTR_fields, 2}, /* OPAMP2_OTR: OPAMP2 offset trimming register in normal
          mode */
   {"\x3d\x00\x4d\x41\xd9\x4c\x40\xf5\x12", 24, 32, 0, OPAMP_OPAMP2_LPOTR_fields, 2}, /* OPAMP2_LPOTR: OPAMP2 offset trimming register in low-power
          mode */
};

const Field_t LPTIM1_ISR_fields[] = {
   { "\x0c\xd4\x0d", 0, 1 },  /* CMPM: Compare match */
   { "\x05\x24\x8d", 1, 1 },  /* ARRM: Autoreload match */
   { "\x15\x85\x14\x48\x91\xc0", 2, 1 },  /* EXTTRIG: External trigger edge
              event */
   { "\x0c\xd4\x0f\x2c", 3, 1 },  /* CMPOK: Compare register update OK */
   { "\x05\x24\x8f\x2c", 4, 1 },  /* ARROK: Autoreload register update
              OK */
   { "\x55\x00", 5, 1 },  /* UP: Counter direction change down to
              up */
   { "\x10\xf5\xce", 6, 1 },  /* DOWN: Counter direction change up to
              down */
};

const Field_t LPTIM1_ICR_fields[] = {
   { "\x0c\xd4\x0d\x0c\x60", 0, 1 },  /* CMPMCF: compare match Clear Flag */
   { "\x05\x24\x8d\x0c\x60", 1, 1 },  /* ARRMCF: Autoreload match Clear
              Flag */
   { "\x15\x85\x14\x48\x91\xc3\x18", 2, 1 },  /* EXTTRIGCF: External trigger valid edge Clear
              Flag */
   { "\x0c\xd4\x0f\x2c\x31\x80", 3, 1 },  /* CMPOKCF: Compare register update OK Clear
              Flag */
   { "\x05\x24\x8f\x2c\x31\x80", 4, 1 },  /* ARROKCF: Autoreload register update OK Clear
              Flag */
   { "\x55\x00\xc6", 5, 1 },  /* UPCF: Direction change to UP Clear
              Flag */
   { "\x10\xf5\xce\x0c\x60", 6, 1 },  /* DOWNCF: Direction change to down Clear
              Flag */
};

const Field_t LPTIM1_IER_fields[] = {
   { "\x0c\xd4\x0d\x24\x50", 0, 1 },  /* CMPMIE: Compare match Interrupt
              Enable */
   { "\x05\x24\x8d\x24\x50", 1, 1 },  /* ARRMIE: Autoreload match Interrupt
              Enable */
   { "\x15\x85\x14\x48\x91\xc9\x14", 2, 1 },  /* EXTTRIGIE: External trigger valid edge Interrupt
              Enable */
   { "\x0c\xd4\x0f\x2c\x91\x40", 3, 1 },  /* CMPOKIE: Compare register update OK Interrupt
              Enable */
   { "\x05\x24\x8f\x2c\x91\x40", 4, 1 },  /* ARROKIE: Autoreload register update OK Interrupt
              Enable */
   { "\x55\x02\x45", 5, 1 },  /* UPIE: Direction change to UP Interrupt
              Enable */
   { "\x10\xf5\xce\x24\x50", 6, 1 },  /* DOWNIE: Direction change to down Interrupt
              Enable */
};

const Field_t LPTIM1_CFGR_fields[] = {
   { "\x0c\xb4\xc5\x30", 0, 1 },  /* CKSEL: Clock selector */
   { "\x0c\xb4\x0f\x30", 1, 2 },  /* CKPOL: Clock Polarity */
   { "\x0c\xb1\x8c\x50", 3, 2 },  /* CKFLT: Configurable digital filter for external
              clock */
   { "\x51\x21\xc6\x31\x40", 6, 2 },  /* TRGFLT: Configurable digital filter for
              trigger */
   { "\x41\x21\x53\x0c", 9, 3 },  /* PRESC: Clock prescaler */
   { "\x51\x22\x47\x4c\x53\x00", 13, 3 },  /* TRIGSEL: Trigger selector */
   { "\x51\x22\x47\x14\xe0", 17, 2 },  /* TRIGEN: Trigger enable and
              polarity */
   { "\x50\x93\x4f\x55\x40", 19, 1 },  /* TIMOUT: Timeout enable */
   { "\x5c\x15\x85", 20, 1 },  /* WAVE: Waveform shape */
   { "\x5c\x15\x90\x3c\xc0", 21, 1 },  /* WAVPOL: Waveform shape polarity */
   { "\x41\x21\x4c\x3c\x11\x00", 22, 1 },  /* PRELOAD: Registers update mode */
   { "\x0c\xf5\x4e\x50\xd3\xc4\x14", 23, 1 },  /* COUNTMODE: counter mode enabled */
   { "\x14\xe0\xc0", 24, 1 },  /* ENC: Encoder mode enable */
};

const Field_t LPTIM1_CR_fields[] = {
   { "\x14\xe0\x42\x30\x50", 0, 1 },  /* ENABLE: LPTIM Enable */
   { "\x4c\xe1\xd3\x51\x25\x00", 1, 1 },  /* SNGSTRT: LPTIM start in single mode */
   { "\x0c\xe5\x13\x51\x25\x00", 2, 1 },  /* CNTSTRT: Timer start in continuous
              mode */
};

const Field_t LPTIM1_CMP_fields[] = {
   { "\x0c\xd4\x00", 0, 16 },  /* CMP: Compare value */
};

const Field_t LPTIM1_ARR_fields[] = {
   { "\x05\x24\x80", 0, 16 },  /* ARR: Auto reload value */
};

const Field_t LPTIM1_CNT_fields[] = {
   { "\x0c\xe5\x00", 0, 16 },  /* CNT: Counter value */
};

const Register_t LPTIM1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, LPTIM1_ISR_fields, 7}, /* ISR: Interrupt and Status Register */
   {"\x24\x34\x80", 4, 32, 0, LPTIM1_ICR_fields, 7}, /* ICR: Interrupt Clear Register */
   {"\x24\x54\x80", 8, 32, 0, LPTIM1_IER_fields, 7}, /* IER: Interrupt Enable Register */
   {"\x0c\x61\xd2", 12, 32, 0, LPTIM1_CFGR_fields, 13}, /* CFGR: Configuration Register */
   {"\x0d\x20", 16, 32, 0, LPTIM1_CR_fields, 3}, /* CR: Control Register */
   {"\x0c\xd4\x00", 20, 32, 0, LPTIM1_CMP_fields, 1}, /* CMP: Compare Register */
   {"\x05\x24\x80", 24, 32, 0, LPTIM1_ARR_fields, 1}, /* ARR: Autoreload Register */
   {"\x0c\xe5\x00", 28, 32, 0, LPTIM1_CNT_fields, 1}, /* CNT: Counter Register */
};

const Field_t LPUART1_CR1_fields[] = {
   { "\x54\x50", 0, 1 },  /* UE: USART enable */
   { "\x54\x54\xcd", 1, 1 },  /* UESM: USART enable in Stop mode */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt
              enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Receiver wakeup method */
   { "\x35\xb0", 12, 1 },  /* M0: Word length */
   { "\x34\xd1\x40", 13, 1 },  /* MME: Mute mode enable */
   { "\x0c\xd2\x45", 14, 1 },  /* CMIE: Character match interrupt
              enable */
   { "\x10\x51\x14\x6c", 16, 1 },  /* DEDT0: DEDT0 */
   { "\x10\x51\x14\x70", 17, 1 },  /* DEDT1: DEDT1 */
   { "\x10\x51\x14\x74", 18, 1 },  /* DEDT2: DEDT2 */
   { "\x10\x51\x14\x78", 19, 1 },  /* DEDT3: DEDT3 */
   { "\x10\x51\x14\x7c", 20, 1 },  /* DEDT4: Driver Enable de-assertion
              time */
   { "\x10\x50\x54\x6c", 21, 1 },  /* DEAT0: DEAT0 */
   { "\x10\x50\x54\x70", 22, 1 },  /* DEAT1: DEAT1 */
   { "\x10\x50\x54\x74", 23, 1 },  /* DEAT2: DEAT2 */
   { "\x10\x50\x54\x78", 24, 1 },  /* DEAT3: DEAT3 */
   { "\x10\x50\x54\x7c", 25, 1 },  /* DEAT4: Driver Enable assertion
              time */
   { "\x35\xc0", 28, 1 },  /* M1: Word length */
};

const Field_t LPUART1_CR2_fields[] = {
   { "\x04\x41\x0d\x88", 4, 1 },  /* ADDM7: 7-bit Address Detection/4-bit Address
              Detection */
   { "\x0c\xc2\xc5\x38", 11, 1 },  /* CLKEN: Clock enable */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x4d\x70\x50", 15, 1 },  /* SWAP: Swap TX/RX pins */
   { "\x49\x82\x4e\x58", 16, 1 },  /* RXINV: RX pin active level
              inversion */
   { "\x51\x82\x4e\x58", 17, 1 },  /* TXINV: TX pin active level
              inversion */
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
   { "\x10\x44\x85", 13, 1 },  /* DDRE: DMA Disable on Reception
              Error */
   { "\x10\x53\x40", 14, 1 },  /* DEM: Driver enable mode */
   { "\x10\x54\x00", 15, 1 },  /* DEP: Driver enable polarity
              selection */
   { "\x5d\x54\xc0", 20, 2 },  /* WUS: Wakeup from Stop mode interrupt flag
              selection */
   { "\x5d\x51\x89\x14", 22, 1 },  /* WUFIE: Wakeup from Stop mode interrupt
              enable */
};

const Field_t LPUART1_BRR_fields[] = {
   { "\x09\x24\x80", 0, 20 },  /* BRR: BRR */
};

const Field_t LPUART1_RQR_fields[] = {
   { "\x4c\x22\xd2\x44", 1, 1 },  /* SBKRQ: Send break request */
   { "\x34\xd4\x91", 2, 1 },  /* MMRQ: Mute mode request */
   { "\x49\x81\x92\x44", 3, 1 },  /* RXFRQ: Receive data flush request */
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
};

const Field_t LPUART1_ICR_fields[] = {
   { "\x40\x50\xc6", 0, 1 },  /* PECF: Parity error clear flag */
   { "\x18\x50\xc6", 1, 1 },  /* FECF: Framing error clear flag */
   { "\x38\x31\x80", 2, 1 },  /* NCF: Noise detected clear flag */
   { "\x3d\x21\x43\x18", 3, 1 },  /* ORECF: Overrun error clear flag */
   { "\x24\x43\x05\x0c\x60", 4, 1 },  /* IDLECF: Idle line detected clear
              flag */
   { "\x50\x30\xc6", 6, 1 },  /* TCCF: Transmission complete clear
              flag */
   { "\x0d\x44\xc3\x18", 9, 1 },  /* CTSCF: CTS clear flag */
   { "\x0c\xd0\xc6", 17, 1 },  /* CMCF: Character match clear flag */
   { "\x5d\x50\xc6", 20, 1 },  /* WUCF: Wakeup from Stop mode clear
              flag */
};

const Field_t LPUART1_RDR_fields[] = {
   { "\x48\x44\x80", 0, 9 },  /* RDR: Receive data value */
};

const Field_t LPUART1_TDR_fields[] = {
   { "\x50\x44\x80", 0, 9 },  /* TDR: Transmit data value */
};

const Register_t LPUART1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, LPUART1_CR1_fields, 26}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, LPUART1_CR2_fields, 10}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, LPUART1_CR3_fields, 13}, /* CR3: Control register 3 */
   {"\x09\x24\x80", 12, 32, 0, LPUART1_BRR_fields, 1}, /* BRR: Baud rate register */
   {"\x49\x14\x80", 24, 32, 0, LPUART1_RQR_fields, 3}, /* RQR: Request register */
   {"\x25\x34\x80", 28, 32, 0, LPUART1_ISR_fields, 17}, /* ISR: Interrupt & status
          register */
   {"\x24\x34\x80", 32, 32, 0, LPUART1_ICR_fields, 9}, /* ICR: Interrupt flag clear register */
   {"\x48\x44\x80", 36, 32, 0, LPUART1_RDR_fields, 1}, /* RDR: Receive data register */
   {"\x50\x44\x80", 40, 32, 0, LPUART1_TDR_fields, 1}, /* TDR: Transmit data register */
};

const Field_t SWPMI1_CR_fields[] = {
   { "\x49\x81\x0d\x04", 0, 1 },  /* RXDMA: Reception DMA enable */
   { "\x51\x81\x0d\x04", 1, 1 },  /* TXDMA: Transmission DMA enable */
   { "\x49\x83\x4f\x10\x50", 2, 1 },  /* RXMODE: Reception buffering mode */
   { "\x51\x83\x4f\x10\x50", 3, 1 },  /* TXMODE: Transmission buffering
              mode */
   { "\x31\x00\x8b", 4, 1 },  /* LPBK: Loopback mode enable */
   { "\x4d\x74\x0d\x14", 5, 1 },  /* SWPME: Single wire protocol master interface
              enable */
   { "\x10\x50\x43\x50", 10, 1 },  /* DEACT: Single wire protocol master interface
              deactivate */
};

const Field_t SWPMI1_BRR_fields[] = {
   { "\x09\x20", 0, 6 },  /* BR: Bitrate prescaler */
};

const Field_t SWPMI1_ISR_fields[] = {
   { "\x49\x80\x86\x18", 0, 1 },  /* RXBFF: Receive buffer full flag */
   { "\x51\x80\x85\x18", 1, 1 },  /* TXBEF: Transmit buffer empty flag */
   { "\x49\x80\x85\x48\x60", 2, 1 },  /* RXBERF: Receive CRC error flag */
   { "\x49\x83\xd6\x48\x60", 3, 1 },  /* RXOVRF: Receive overrun error flag */
   { "\x51\x85\x4e\x48\x60", 4, 1 },  /* TXUNRF: Transmit underrun error
              flag */
   { "\x49\x83\x85", 5, 1 },  /* RXNE: Receive data register not
              empty */
   { "\x51\x81\x40", 6, 1 },  /* TXE: Transmit data register
              empty */
   { "\x50\x31\x80", 7, 1 },  /* TCF: Transfer complete flag */
   { "\x4d\x21\x80", 8, 1 },  /* SRF: Slave resume flag */
   { "\x4d\x54\xd0", 9, 1 },  /* SUSP: SUSPEND flag */
   { "\x10\x50\x43\x50\x60", 10, 1 },  /* DEACTF: DEACTIVATED flag */
};

const Field_t SWPMI1_ICR_fields[] = {
   { "\x0d\x26\x02\x18\x60", 0, 1 },  /* CRXBFF: Clear receive buffer full
              flag */
   { "\x0d\x46\x02\x14\x60", 1, 1 },  /* CTXBEF: Clear transmit buffer empty
              flag */
   { "\x0d\x26\x02\x15\x21\x80", 2, 1 },  /* CRXBERF: Clear receive CRC error
              flag */
   { "\x0d\x26\x0f\x59\x21\x80", 3, 1 },  /* CRXOVRF: Clear receive overrun error
              flag */
   { "\x0d\x46\x15\x39\x21\x80", 4, 1 },  /* CTXUNRF: Clear transmit underrun error
              flag */
   { "\x0d\x40\xc6", 7, 1 },  /* CTCF: Clear transfer complete
              flag */
   { "\x0d\x34\x86", 8, 1 },  /* CSRF: Clear slave resume flag */
};

const Field_t SWPMI1_IER_fields[] = {
   { "\x49\x80\x86\x24\x50", 0, 1 },  /* RXBFIE: Receive buffer full interrupt
              enable */
   { "\x51\x80\x85\x24\x50", 1, 1 },  /* TXBEIE: Transmit buffer empty interrupt
              enable */
   { "\x49\x80\x85\x48\x91\x40", 2, 1 },  /* RXBERIE: Receive CRC error interrupt
              enable */
   { "\x49\x83\xd6\x48\x91\x40", 3, 1 },  /* RXOVRIE: Receive overrun error interrupt
              enable */
   { "\x51\x85\x4e\x48\x91\x40", 4, 1 },  /* TXUNRIE: Transmit underrun error interrupt
              enable */
   { "\x48\x91\x40", 5, 1 },  /* RIE: Receive interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Transmit interrupt enable */
   { "\x50\x32\x45", 7, 1 },  /* TCIE: Transmit complete interrupt
              enable */
   { "\x4d\x22\x45", 8, 1 },  /* SRIE: Slave resume interrupt
              enable */
};

const Field_t SWPMI1_RFL_fields[] = {
   { "\x48\x63\x00", 0, 5 },  /* RFL: Receive frame length */
};

const Field_t SWPMI1_TDR_fields[] = {
   { "\x50\x40", 0, 32 },  /* TD: Transmit data */
};

const Field_t SWPMI1_RDR_fields[] = {
   { "\x48\x40", 0, 32 },  /* RD: received data */
};

const Register_t SWPMI1_registers[] = {
   {"\x0d\x20", 0, 32, 0, SWPMI1_CR_fields, 7}, /* CR: SWPMI Configuration/Control
          register */
   {"\x09\x24\x80", 4, 32, 0, SWPMI1_BRR_fields, 1}, /* BRR: SWPMI Bitrate register */
   {"\x25\x34\x80", 12, 32, 0, SWPMI1_ISR_fields, 11}, /* ISR: SWPMI Interrupt and Status
          register */
   {"\x24\x34\x80", 16, 32, 0, SWPMI1_ICR_fields, 7}, /* ICR: SWPMI Interrupt Flag Clear
          register */
   {"\x24\x54\x80", 20, 32, 0, SWPMI1_IER_fields, 9}, /* IER: SWPMI Interrupt Enable
          register */
   {"\x48\x63\x00", 24, 32, 0, SWPMI1_RFL_fields, 1}, /* RFL: SWPMI Receive Frame Length
          register */
   {"\x50\x44\x80", 28, 32, 0, SWPMI1_TDR_fields, 1}, /* TDR: SWPMI Transmit data register */
   {"\x48\x44\x80", 32, 32, 0, SWPMI1_RDR_fields, 1}, /* RDR: SWPMI Receive data register */
};

const Field_t SYSCFG_MEMRMP_fields[] = {
   { "\x34\x53\x65\x34\xf1\x05", 0, 3 },  /* MEM_MODE: Memory mapping selection */
   { "\x44\x64\xc0", 3, 1 },  /* QFS: QUADSPI memory mapping
              swap */
   { "\x18\x29\x4d\x3c\x41\x40", 8, 1 },  /* FB_MODE: Flash Bank mode selection */
};

const Field_t SYSCFG_CFGR1_fields[] = {
   { "\x19\x71\x09\x4c", 0, 1 },  /* FWDIS: Firewall disable */
   { "\x08\xf3\xd3\x50\x53\x80", 8, 1 },  /* BOOSTEN: I/O analog switch voltage booster
              enable */
   { "\x25\xd0\xe5\x40\x28\x65\x18\xd4\x00", 16, 1 },  /* I2C_PB6_FMP: Fast-mode Plus (Fm+) driving capability
              activation on PB6 */
   { "\x25\xd0\xe5\x40\x28\xa5\x18\xd4\x00", 17, 1 },  /* I2C_PB7_FMP: Fast-mode Plus (Fm+) driving capability
              activation on PB7 */
   { "\x25\xd0\xe5\x40\x28\xe5\x18\xd4\x00", 18, 1 },  /* I2C_PB8_FMP: Fast-mode Plus (Fm+) driving capability
              activation on PB8 */
   { "\x25\xd0\xe5\x40\x29\x25\x18\xd4\x00", 19, 1 },  /* I2C_PB9_FMP: Fast-mode Plus (Fm+) driving capability
              activation on PB9 */
   { "\x25\xd0\xdc\x94\x63\x50", 20, 1 },  /* I2C1_FMP: I2C1 Fast-mode Plus driving capability
              activation */
   { "\x25\xd0\xdd\x94\x63\x50", 21, 1 },  /* I2C2_FMP: I2C2 Fast-mode Plus driving capability
              activation */
   { "\x25\xd0\xde\x94\x63\x50", 22, 1 },  /* I2C3_FMP: I2C3 Fast-mode Plus driving capability
              activation */
   { "\x19\x05\x65\x24\x50", 26, 6 },  /* FPU_IE: Floating Point Unit interrupts enable
              bits */
};

const Field_t SYSCFG_EXTICR1_fields[] = {
   { "\x15\x85\x09\x6c", 0, 3 },  /* EXTI0: EXTI 0 configuration bits */
   { "\x15\x85\x09\x70", 4, 3 },  /* EXTI1: EXTI 1 configuration bits */
   { "\x15\x85\x09\x74", 8, 3 },  /* EXTI2: EXTI 2 configuration bits */
   { "\x15\x85\x09\x78", 12, 3 },  /* EXTI3: EXTI 3 configuration bits */
};

const Field_t SYSCFG_EXTICR2_fields[] = {
   { "\x15\x85\x09\x7c", 0, 3 },  /* EXTI4: EXTI 4 configuration bits */
   { "\x15\x85\x09\x80", 4, 3 },  /* EXTI5: EXTI 5 configuration bits */
   { "\x15\x85\x09\x84", 8, 3 },  /* EXTI6: EXTI 6 configuration bits */
   { "\x15\x85\x09\x88", 12, 3 },  /* EXTI7: EXTI 7 configuration bits */
};

const Field_t SYSCFG_EXTICR3_fields[] = {
   { "\x15\x85\x09\x8c", 0, 3 },  /* EXTI8: EXTI 8 configuration bits */
   { "\x15\x85\x09\x90", 4, 3 },  /* EXTI9: EXTI 9 configuration bits */
   { "\x15\x85\x09\x71\xb0", 8, 3 },  /* EXTI10: EXTI 10 configuration bits */
   { "\x15\x85\x09\x71\xc0", 12, 3 },  /* EXTI11: EXTI 11 configuration bits */
};

const Field_t SYSCFG_EXTICR4_fields[] = {
   { "\x15\x85\x09\x71\xd0", 0, 3 },  /* EXTI12: EXTI12 configuration bits */
   { "\x15\x85\x09\x71\xe0", 4, 3 },  /* EXTI13: EXTI13 configuration bits */
   { "\x15\x85\x09\x71\xf0", 8, 3 },  /* EXTI14: EXTI14 configuration bits */
   { "\x15\x85\x09\x72\x00", 12, 3 },  /* EXTI15: EXTI15 configuration bits */
};

const Field_t SYSCFG_SCSR_fields[] = {
   { "\x4d\x20\x4d\x74\x54\x80", 0, 1 },  /* SRAM2ER: SRAM2 Erase */
   { "\x4d\x20\x4d\x74\x24\xd9", 1, 1 },  /* SRAM2BSY: SRAM2 busy by erase
              operation */
};

const Field_t SYSCFG_CFGR2_fields[] = {
   { "\x0c\xc3\x00", 0, 1 },  /* CLL: 
              CortexÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¾ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â¦ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¦ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¦ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¾ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¦ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¾Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€šÃ‚Â¦ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ¢Ã¢â‚¬Å¾Ã‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Â ÃƒÂ¢Ã¢â€šÂ¬Ã¢â€žÂ¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã¢â‚¬Â¦Ãƒâ€šÃ‚Â¡ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã…Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢-M4
              LOCKUP (Hardfault) output enable bit */
   { "\x4d\x03\x00", 1, 1 },  /* SPL: SRAM2 parity lock bit */
   { "\x41\x61\x0c", 2, 1 },  /* PVDL: PVD lock enable bit */
   { "\x14\x30\xcc", 3, 1 },  /* ECCL: ECC Lock */
   { "\x4d\x01\x80", 8, 1 },  /* SPF: SRAM2 parity error flag */
};

const Field_t SYSCFG_SWPR_fields[] = {
   { "\x41\xb5\xd0", 0, 1 },  /* P0WP: P0WP */
   { "\x41\xc5\xd0", 1, 1 },  /* P1WP: P1WP */
   { "\x41\xd5\xd0", 2, 1 },  /* P2WP: P2WP */
   { "\x41\xe5\xd0", 3, 1 },  /* P3WP: P3WP */
   { "\x41\xf5\xd0", 4, 1 },  /* P4WP: P4WP */
   { "\x42\x05\xd0", 5, 1 },  /* P5WP: P5WP */
   { "\x42\x15\xd0", 6, 1 },  /* P6WP: P6WP */
   { "\x42\x25\xd0", 7, 1 },  /* P7WP: P7WP */
   { "\x42\x35\xd0", 8, 1 },  /* P8WP: P8WP */
   { "\x42\x45\xd0", 9, 1 },  /* P9WP: P9WP */
   { "\x41\xc6\xd7\x40", 10, 1 },  /* P10WP: P10WP */
   { "\x41\xc7\x17\x40", 11, 1 },  /* P11WP: P11WP */
   { "\x41\xc7\x57\x40", 12, 1 },  /* P12WP: P12WP */
   { "\x41\xc7\x97\x40", 13, 1 },  /* P13WP: P13WP */
   { "\x41\xc7\xd7\x40", 14, 1 },  /* P14WP: P14WP */
   { "\x41\xc8\x17\x40", 15, 1 },  /* P15WP: P15WP */
   { "\x41\xc8\x57\x40", 16, 1 },  /* P16WP: P16WP */
   { "\x41\xc8\x97\x40", 17, 1 },  /* P17WP: P17WP */
   { "\x41\xc8\xd7\x40", 18, 1 },  /* P18WP: P18WP */
   { "\x41\xc9\x17\x40", 19, 1 },  /* P19WP: P19WP */
   { "\x41\xd6\xd7\x40", 20, 1 },  /* P20WP: P20WP */
   { "\x41\xd7\x17\x40", 21, 1 },  /* P21WP: P21WP */
   { "\x41\xd7\x57\x40", 22, 1 },  /* P22WP: P22WP */
   { "\x41\xd7\x97\x40", 23, 1 },  /* P23WP: P23WP */
   { "\x41\xd7\xd7\x40", 24, 1 },  /* P24WP: P24WP */
   { "\x41\xd8\x17\x40", 25, 1 },  /* P25WP: P25WP */
   { "\x41\xd8\x57\x40", 26, 1 },  /* P26WP: P26WP */
   { "\x41\xd8\x97\x40", 27, 1 },  /* P27WP: P27WP */
   { "\x41\xd8\xd7\x40", 28, 1 },  /* P28WP: P28WP */
   { "\x41\xd9\x17\x40", 29, 1 },  /* P29WP: P29WP */
   { "\x41\xe6\xd7\x40", 30, 1 },  /* P30WP: P30WP */
   { "\x41\xe7\x17\x40", 31, 1 },  /* P31WP: SRAM2 page 31 write
              protection */
};

const Field_t SYSCFG_SKR_fields[] = {
   { "\x2c\x56\x40", 0, 8 },  /* KEY: SRAM2 write protection key for software
              erase */
};

const Register_t SYSCFG_registers[] = {
   {"\x34\x53\x52\x35\x00", 0, 32, 0, SYSCFG_MEMRMP_fields, 3}, /* MEMRMP: memory remap register */
   {"\x0c\x61\xd2\x70", 4, 32, 0, SYSCFG_CFGR1_fields, 10}, /* CFGR1: configuration register 1 */
   {"\x15\x85\x09\x0d\x27\x00", 8, 32, 0, SYSCFG_EXTICR1_fields, 4}, /* EXTICR1: external interrupt configuration register
          1 */
   {"\x15\x85\x09\x0d\x27\x40", 12, 32, 0, SYSCFG_EXTICR2_fields, 4}, /* EXTICR2: external interrupt configuration register
          2 */
   {"\x15\x85\x09\x0d\x27\x80", 16, 32, 0, SYSCFG_EXTICR3_fields, 4}, /* EXTICR3: external interrupt configuration register
          3 */
   {"\x15\x85\x09\x0d\x27\xc0", 20, 32, 0, SYSCFG_EXTICR4_fields, 4}, /* EXTICR4: external interrupt configuration register
          4 */
   {"\x4c\x34\xd2", 24, 32, 0, SYSCFG_SCSR_fields, 2}, /* SCSR: SCSR */
   {"\x0c\x61\xd2\x74", 28, 32, 0, SYSCFG_CFGR2_fields, 5}, /* CFGR2: CFGR2 */
   {"\x4d\x74\x12", 32, 32, 0, SYSCFG_SWPR_fields, 32}, /* SWPR: SWPR */
   {"\x4c\xb4\x80", 36, 32, 0, SYSCFG_SKR_fields, 1}, /* SKR: SKR */
};

const Field_t VREFBUF_CSR_fields[] = {
   { "\x14\xe5\x92", 0, 1 },  /* ENVR: Voltage reference buffer
              enable */
   { "\x20\x96\x80", 1, 1 },  /* HIZ: High impedance mode */
   { "\x59\x24\xc0", 2, 1 },  /* VRS: Voltage reference scale */
   { "\x59\x24\x80", 3, 1 },  /* VRR: Voltage reference buffer
              ready */
};

const Field_t VREFBUF_CCR_fields[] = {
   { "\x51\x22\x4d", 0, 6 },  /* TRIM: Trimming code */
};

const Register_t VREFBUF_registers[] = {
   {"\x0d\x34\x80", 0, 32, 0, VREFBUF_CSR_fields, 4}, /* CSR: VREF control and status
          register */
   {"\x0c\x34\x80", 4, 32, 0, VREFBUF_CCR_fields, 1}, /* CCR: calibration control register */
};

const Field_t COMP_COMP1_CSR_fields[] = {
   { "\x0c\xf3\x50\x72\x51\x4e", 0, 1 },  /* COMP1_EN: Comparator 1 enable bit */
   { "\x0c\xf3\x50\x72\x54\x17\x48\xd3\xc4\x14", 2, 2 },  /* COMP1_PWRMODE: Power Mode of the comparator
              1 */
   { "\x0c\xf3\x50\x72\x52\x4e\x35\x31\x4c", 4, 3 },  /* COMP1_INMSEL: Comparator 1 Input Minus connection
              configuration bit */
   { "\x0c\xf3\x50\x72\x52\x4e\x41\x31\x4c", 7, 1 },  /* COMP1_INPSEL: Comparator1 input plus selection
              bit */
   { "\x0c\xf3\x50\x72\x54\x0f\x30\x14\x89\x51\x90", 15, 1 },  /* COMP1_POLARITY: Comparator 1 polarity selection
              bit */
   { "\x0c\xf3\x50\x72\x52\x19\x4d\x40", 16, 2 },  /* COMP1_HYST: Comparator 1 hysteresis selection
              bits */
   { "\x0c\xf3\x50\x72\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP1_BLANKING: Comparator 1 blanking source selection
              bits */
   { "\x0c\xf3\x50\x72\x50\x92\x1c\x53\x80", 22, 1 },  /* COMP1_BRGEN: Scaler bridge enable */
   { "\x0c\xf3\x50\x72\x54\xc3\x04\xc1\x4e", 23, 1 },  /* COMP1_SCALEN: Voltage scaler enable bit */
   { "\x0c\xf3\x50\x72\x55\x81\x31\x51\x40", 30, 1 },  /* COMP1_VALUE: Comparator 1 output status
              bit */
   { "\x0c\xf3\x50\x72\x53\x0f\x0c\xb0", 31, 1 },  /* COMP1_LOCK: COMP1_CSR register lock
              bit */
};

const Field_t COMP_COMP2_CSR_fields[] = {
   { "\x0c\xf3\x50\x76\x51\x4e", 0, 1 },  /* COMP2_EN: Comparator 2 enable bit */
   { "\x0c\xf3\x50\x76\x54\x17\x48\xd3\xc4\x14", 2, 2 },  /* COMP2_PWRMODE: Power Mode of the comparator
              2 */
   { "\x0c\xf3\x50\x76\x52\x4e\x35\x31\x4c", 4, 3 },  /* COMP2_INMSEL: Comparator 2 Input Minus connection
              configuration bit */
   { "\x0c\xf3\x50\x76\x52\x4e\x41\x31\x4c", 7, 1 },  /* COMP2_INPSEL: Comparator 2 Input Plus connection
              configuration bit */
   { "\x0c\xf3\x50\x76\x55\xc9\x38\xd3\xc4\x14", 9, 1 },  /* COMP2_WINMODE: Windows mode selection bit */
   { "\x0c\xf3\x50\x76\x54\x0f\x30\x14\x89\x51\x90", 15, 1 },  /* COMP2_POLARITY: Comparator 2 polarity selection
              bit */
   { "\x0c\xf3\x50\x76\x52\x19\x4d\x40", 16, 2 },  /* COMP2_HYST: Comparator 2 hysteresis selection
              bits */
   { "\x0c\xf3\x50\x76\x50\x8c\x04\xe2\xc9\x38\x70", 18, 3 },  /* COMP2_BLANKING: Comparator 2 blanking source selection
              bits */
   { "\x0c\xf3\x50\x76\x50\x92\x1c\x53\x80", 22, 1 },  /* COMP2_BRGEN: Scaler bridge enable */
   { "\x0c\xf3\x50\x76\x54\xc3\x04\xc1\x4e", 23, 1 },  /* COMP2_SCALEN: Voltage scaler enable bit */
   { "\x0c\xf3\x50\x76\x55\x81\x31\x51\x40", 30, 1 },  /* COMP2_VALUE: Comparator 2 output status
              bit */
   { "\x0c\xf3\x50\x76\x53\x0f\x0c\xb0", 31, 1 },  /* COMP2_LOCK: COMP2_CSR register lock
              bit */
};

const Register_t COMP_registers[] = {
   {"\x0c\xf3\x50\x72\x50\xd3\x48", 0, 32, 0, COMP_COMP1_CSR_fields, 11}, /* COMP1_CSR: Comparator 1 control and status
          register */
   {"\x0c\xf3\x50\x76\x50\xd3\x48", 4, 32, 0, COMP_COMP2_CSR_fields, 12}, /* COMP2_CSR: Comparator 2 control and status
          register */
};

const Field_t EXTI_IMR1_fields[] = {
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
   { "\x35\x27\x5e", 23, 1 },  /* MR23: Interrupt Mask on line 23 */
   { "\x35\x27\x5f", 24, 1 },  /* MR24: Interrupt Mask on line 24 */
   { "\x35\x27\x60", 25, 1 },  /* MR25: Interrupt Mask on line 25 */
   { "\x35\x27\x61", 26, 1 },  /* MR26: Interrupt Mask on line 26 */
   { "\x35\x27\x62", 27, 1 },  /* MR27: Interrupt Mask on line 27 */
   { "\x35\x27\x63", 28, 1 },  /* MR28: Interrupt Mask on line 28 */
   { "\x35\x27\x64", 29, 1 },  /* MR29: Interrupt Mask on line 29 */
   { "\x35\x27\x9b", 30, 1 },  /* MR30: Interrupt Mask on line 30 */
   { "\x35\x27\x9c", 31, 1 },  /* MR31: Interrupt Mask on line 31 */
};

const Field_t EXTI_EMR1_fields[] = {
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
   { "\x35\x27\x5e", 23, 1 },  /* MR23: Event Mask on line 23 */
   { "\x35\x27\x5f", 24, 1 },  /* MR24: Event Mask on line 24 */
   { "\x35\x27\x60", 25, 1 },  /* MR25: Event Mask on line 25 */
   { "\x35\x27\x61", 26, 1 },  /* MR26: Event Mask on line 26 */
   { "\x35\x27\x62", 27, 1 },  /* MR27: Event Mask on line 27 */
   { "\x35\x27\x63", 28, 1 },  /* MR28: Event Mask on line 28 */
   { "\x35\x27\x64", 29, 1 },  /* MR29: Event Mask on line 29 */
   { "\x35\x27\x9b", 30, 1 },  /* MR30: Event Mask on line 30 */
   { "\x35\x27\x9c", 31, 1 },  /* MR31: Event Mask on line 31 */
};

const Field_t EXTI_RTSR1_fields[] = {
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

const Field_t EXTI_FTSR1_fields[] = {
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

const Field_t EXTI_SWIER1_fields[] = {
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

const Field_t EXTI_PR1_fields[] = {
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
   { "\x41\x27\x23", 18, 1 },  /* PR18: Pending bit 18 */
   { "\x41\x27\x24", 19, 1 },  /* PR19: Pending bit 19 */
   { "\x41\x27\x5b", 20, 1 },  /* PR20: Pending bit 20 */
   { "\x41\x27\x5c", 21, 1 },  /* PR21: Pending bit 21 */
   { "\x41\x27\x5d", 22, 1 },  /* PR22: Pending bit 22 */
};

const Field_t EXTI_IMR2_fields[] = {
   { "\x35\x27\x9d", 0, 1 },  /* MR32: Interrupt Mask on external/internal line
              32 */
   { "\x35\x27\x9e", 1, 1 },  /* MR33: Interrupt Mask on external/internal line
              33 */
   { "\x35\x27\x9f", 2, 1 },  /* MR34: Interrupt Mask on external/internal line
              34 */
   { "\x35\x27\xa0", 3, 1 },  /* MR35: Interrupt Mask on external/internal line
              35 */
   { "\x35\x27\xa1", 4, 1 },  /* MR36: Interrupt Mask on external/internal line
              36 */
   { "\x35\x27\xa2", 5, 1 },  /* MR37: Interrupt Mask on external/internal line
              37 */
   { "\x35\x27\xa3", 6, 1 },  /* MR38: Interrupt Mask on external/internal line
              38 */
   { "\x35\x27\xa4", 7, 1 },  /* MR39: Interrupt Mask on external/internal line
              39 */
};

const Field_t EXTI_EMR2_fields[] = {
   { "\x35\x27\x9d", 0, 1 },  /* MR32: Event mask on external/internal line
              32 */
   { "\x35\x27\x9e", 1, 1 },  /* MR33: Event mask on external/internal line
              33 */
   { "\x35\x27\x9f", 2, 1 },  /* MR34: Event mask on external/internal line
              34 */
   { "\x35\x27\xa0", 3, 1 },  /* MR35: Event mask on external/internal line
              35 */
   { "\x35\x27\xa1", 4, 1 },  /* MR36: Event mask on external/internal line
              36 */
   { "\x35\x27\xa2", 5, 1 },  /* MR37: Event mask on external/internal line
              37 */
   { "\x35\x27\xa3", 6, 1 },  /* MR38: Event mask on external/internal line
              38 */
   { "\x35\x27\xa4", 7, 1 },  /* MR39: Event mask on external/internal line
              39 */
};

const Field_t EXTI_RTSR2_fields[] = {
   { "\x49\x47\xa0", 3, 1 },  /* RT35: Rising trigger event configuration bit
              of line 35 */
   { "\x49\x47\xa1", 4, 1 },  /* RT36: Rising trigger event configuration bit
              of line 36 */
   { "\x49\x47\xa2", 5, 1 },  /* RT37: Rising trigger event configuration bit
              of line 37 */
   { "\x49\x47\xa3", 6, 1 },  /* RT38: Rising trigger event configuration bit
              of line 38 */
};

const Field_t EXTI_FTSR2_fields[] = {
   { "\x19\x47\xa0", 3, 1 },  /* FT35: Falling trigger event configuration bit
              of line 35 */
   { "\x19\x47\xa1", 4, 1 },  /* FT36: Falling trigger event configuration bit
              of line 36 */
   { "\x19\x47\xa2", 5, 1 },  /* FT37: Falling trigger event configuration bit
              of line 37 */
   { "\x19\x47\xa3", 6, 1 },  /* FT38: Falling trigger event configuration bit
              of line 38 */
};

const Field_t EXTI_SWIER2_fields[] = {
   { "\x4d\x72\x5e\x80", 3, 1 },  /* SWI35: Software interrupt on line
              35 */
   { "\x4d\x72\x5e\x84", 4, 1 },  /* SWI36: Software interrupt on line
              36 */
   { "\x4d\x72\x5e\x88", 5, 1 },  /* SWI37: Software interrupt on line
              37 */
   { "\x4d\x72\x5e\x8c", 6, 1 },  /* SWI38: Software interrupt on line
              38 */
};

const Field_t EXTI_PR2_fields[] = {
   { "\x40\x91\x9e\x80", 3, 1 },  /* PIF35: Pending interrupt flag on line
              35 */
   { "\x40\x91\x9e\x84", 4, 1 },  /* PIF36: Pending interrupt flag on line
              36 */
   { "\x40\x91\x9e\x88", 5, 1 },  /* PIF37: Pending interrupt flag on line
              37 */
   { "\x40\x91\x9e\x8c", 6, 1 },  /* PIF38: Pending interrupt flag on line
              38 */
};

const Register_t EXTI_registers[] = {
   {"\x24\xd4\x9c", 0, 32, 0, EXTI_IMR1_fields, 32}, /* IMR1: Interrupt mask register */
   {"\x14\xd4\x9c", 4, 32, 0, EXTI_EMR1_fields, 32}, /* EMR1: Event mask register */
   {"\x49\x44\xd2\x70", 8, 32, 0, EXTI_RTSR1_fields, 22}, /* RTSR1: Rising Trigger selection
          register */
   {"\x19\x44\xd2\x70", 12, 32, 0, EXTI_FTSR1_fields, 22}, /* FTSR1: Falling Trigger selection
          register */
   {"\x4d\x72\x45\x49\xc0", 16, 32, 0, EXTI_SWIER1_fields, 22}, /* SWIER1: Software interrupt event
          register */
   {"\x41\x27\x00", 20, 32, 0, EXTI_PR1_fields, 22}, /* PR1: Pending register */
   {"\x24\xd4\x9d", 32, 32, 0, EXTI_IMR2_fields, 8}, /* IMR2: Interrupt mask register */
   {"\x14\xd4\x9d", 36, 32, 0, EXTI_EMR2_fields, 8}, /* EMR2: Event mask register */
   {"\x49\x44\xd2\x74", 40, 32, 0, EXTI_RTSR2_fields, 4}, /* RTSR2: Rising Trigger selection
          register */
   {"\x19\x44\xd2\x74", 44, 32, 0, EXTI_FTSR2_fields, 4}, /* FTSR2: Falling Trigger selection
          register */
   {"\x4d\x72\x45\x49\xd0", 48, 32, 0, EXTI_SWIER2_fields, 4}, /* SWIER2: Software interrupt event
          register */
   {"\x41\x27\x40", 52, 32, 0, EXTI_PR2_fields, 4}, /* PR2: Pending register */
};

const Field_t FIREWALL_CSSA_fields[] = {
   { "\x04\x41\x00", 8, 16 },  /* ADD: code segment start address */
};

const Field_t FIREWALL_CSL_fields[] = {
   { "\x30\x53\x87", 8, 14 },  /* LENG: code segment length */
};

const Field_t FIREWALL_NVDSSA_fields[] = {
   { "\x04\x41\x00", 8, 16 },  /* ADD: Non-volatile data segment start
              address */
};

const Field_t FIREWALL_NVDSL_fields[] = {
   { "\x30\x53\x87", 8, 14 },  /* LENG: Non-volatile data segment
              length */
};

const Field_t FIREWALL_VDSSA_fields[] = {
   { "\x04\x41\x00", 6, 10 },  /* ADD: Volatile data segment start
              address */
};

const Field_t FIREWALL_VDSL_fields[] = {
   { "\x30\x53\x87", 6, 10 },  /* LENG: Non-volatile data segment
              length */
};

const Field_t FIREWALL_CR_fields[] = {
   { "\x19\x00\x40", 0, 1 },  /* FPA: Firewall pre alarm */
   { "\x58\x44\xc0", 1, 1 },  /* VDS: Volatile data shared */
   { "\x58\x41\x40", 2, 1 },  /* VDE: Volatile data execution */
};

const Register_t FIREWALL_registers[] = {
   {"\x0d\x34\xc1", 0, 32, 0, FIREWALL_CSSA_fields, 1}, /* CSSA: Code segment start address */
   {"\x0d\x33\x00", 4, 32, 0, FIREWALL_CSL_fields, 1}, /* CSL: Code segment length */
   {"\x39\x61\x13\x4c\x10", 8, 32, 0, FIREWALL_NVDSSA_fields, 1}, /* NVDSSA: Non-volatile data segment start
          address */
   {"\x39\x61\x13\x30", 12, 32, 0, FIREWALL_NVDSL_fields, 1}, /* NVDSL: Non-volatile data segment
          length */
   {"\x58\x44\xd3\x04", 16, 32, 0, FIREWALL_VDSSA_fields, 1}, /* VDSSA: Volatile data segment start
          address */
   {"\x58\x44\xcc", 20, 32, 0, FIREWALL_VDSL_fields, 1}, /* VDSL: Volatile data segment length */
   {"\x0d\x20", 32, 32, 0, FIREWALL_CR_fields, 3}, /* CR: Configuration register */
};

const Field_t SDMMC_POWER_fields[] = {
   { "\x41\x74\x83\x51\x23\x00", 0, 2 },  /* PWRCTRL: PWRCTRL */
};

const Field_t SDMMC_CLKCR_fields[] = {
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

const Field_t SDMMC_ARG_fields[] = {
   { "\x0c\xd1\x01\x48\x70", 0, 32 },  /* CMDARG: Command argument */
};

const Field_t SDMMC_CMD_fields[] = {
   { "\x0c\xd1\x09\x38\x41\x58", 0, 6 },  /* CMDINDEX: Command index */
   { "\x5c\x12\x54\x48\x54\xd0", 6, 2 },  /* WAITRESP: Wait for response bits */
   { "\x5c\x12\x54\x24\xe5\x00", 8, 1 },  /* WAITINT: CPSM waits for interrupt
              request */
   { "\x5c\x12\x54\x40\x53\x84", 9, 1 },  /* WAITPEND: CPSM Waits for ends of data transfer
              (CmdPend internal signal) */
   { "\x0d\x04\xcd\x14\xe0", 10, 1 },  /* CPSMEN: Command path state machine (CPSM) Enable
              bit */
   { "\x4c\x42\x4f\x4d\x54\xd0\x14\xe1\x00", 11, 1 },  /* SDIOSuspend: SD I/O suspend command */
   { "\x14\xe0\xcd\x10\x33\xcd\x40\xc0", 12, 1 },  /* ENCMDcompl: Enable CMD completion */
   { "\x38\x91\x4e", 13, 1 },  /* nIEN: not Interrupt Enable */
   { "\x0c\x59\x41\x50\x10\xcd\x10", 14, 1 },  /* CE_ATACMD: CE-ATA command */
};

const Field_t SDMMC_RESPCMD_fields[] = {
   { "\x48\x54\xd0\x0c\xd1\x00", 0, 6 },  /* RESPCMD: Response command index */
};

const Field_t SDMMC_RESP1_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\x00", 0, 32 },  /* CARDSTATUS1: see Table 132 */
};

const Field_t SDMMC_RESP2_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\x40", 0, 32 },  /* CARDSTATUS2: see Table 132 */
};

const Field_t SDMMC_RESP3_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\x80", 0, 32 },  /* CARDSTATUS3: see Table 132 */
};

const Field_t SDMMC_RESP4_fields[] = {
   { "\x0c\x14\x84\x4d\x40\x54\x55\x37\xc0", 0, 32 },  /* CARDSTATUS4: see Table 132 */
};

const Field_t SDMMC_DTIMER_fields[] = {
   { "\x10\x15\x01\x50\x93\x45", 0, 32 },  /* DATATIME: Data timeout period */
};

const Field_t SDMMC_DLEN_fields[] = {
   { "\x10\x15\x01\x30\x53\x87\x50\x80", 0, 25 },  /* DATALENGTH: Data length value */
};

const Field_t SDMMC_DCTRL_fields[] = {
   { "\x11\x41\x4e", 0, 1 },  /* DTEN: DTEN */
   { "\x11\x41\x09\x48", 1, 1 },  /* DTDIR: Data transfer direction
              selection */
   { "\x11\x43\x4f\x10\x50", 2, 1 },  /* DTMODE: Data transfer mode selection 1: Stream
              or SDIO multibyte data transfer */
   { "\x10\xd0\x45\x38", 3, 1 },  /* DMAEN: DMA enable bit */
   { "\x10\x23\x0f\x0c\xb4\xc9\x68\x50", 4, 4 },  /* DBLOCKSIZE: Data block size */
   { "\x49\x74\xd4\x05\x25\x00", 8, 1 },  /* RWSTART: Read wait start */
   { "\x49\x74\xd4\x3d\x00", 9, 1 },  /* RWSTOP: Read wait stop */
   { "\x49\x73\x4f\x10", 10, 1 },  /* RWMOD: Read wait mode */
   { "\x4c\x42\x4f\x14\xe0", 11, 1 },  /* SDIOEN: SD I/O enable functions */
};

const Field_t SDMMC_DCOUNT_fields[] = {
   { "\x10\x15\x01\x0c\xf5\x4e\x50", 0, 25 },  /* DATACOUNT: Data count value */
};

const Field_t SDMMC_STA_fields[] = {
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

const Field_t SDMMC_ICR_fields[] = {
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

const Field_t SDMMC_MASK_fields[] = {
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

const Field_t SDMMC_FIFOCNT_fields[] = {
   { "\x18\x91\x8f\x0c\xf5\x4e\x50", 0, 24 },  /* FIFOCOUNT: Remaining number of words to be written
              to or read from the FIFO */
};

const Field_t SDMMC_FIFO_fields[] = {
   { "\x18\x91\x8f\x10\x15\x01", 0, 32 },  /* FIFOData: Receive and transmit FIFO
              data */
};

const Register_t SDMMC_registers[] = {
   {"\x40\xf5\xc5\x48", 0, 32, 0, SDMMC_POWER_fields, 1}, /* POWER: power control register */
   {"\x0c\xc2\xc3\x48", 4, 32, 0, SDMMC_CLKCR_fields, 7}, /* CLKCR: SDI clock control register */
   {"\x05\x21\xc0", 8, 32, 0, SDMMC_ARG_fields, 1}, /* ARG: argument register */
   {"\x0c\xd1\x00", 12, 32, 0, SDMMC_CMD_fields, 9}, /* CMD: command register */
   {"\x48\x54\xd0\x0c\xd1\x00", 16, 32, 0, SDMMC_RESPCMD_fields, 1}, /* RESPCMD: command response register */
   {"\x48\x54\xd0\x70", 20, 32, 0, SDMMC_RESP1_fields, 1}, /* RESP1: response 1..4 register */
   {"\x48\x54\xd0\x74", 24, 32, 0, SDMMC_RESP2_fields, 1}, /* RESP2: response 1..4 register */
   {"\x48\x54\xd0\x78", 28, 32, 0, SDMMC_RESP3_fields, 1}, /* RESP3: response 1..4 register */
   {"\x48\x54\xd0\x7c", 32, 32, 0, SDMMC_RESP4_fields, 1}, /* RESP4: response 1..4 register */
   {"\x11\x42\x4d\x15\x20", 36, 32, 0, SDMMC_DTIMER_fields, 1}, /* DTIMER: data timer register */
   {"\x10\xc1\x4e", 40, 32, 0, SDMMC_DLEN_fields, 1}, /* DLEN: data length register */
   {"\x10\x35\x12\x30", 44, 32, 0, SDMMC_DCTRL_fields, 9}, /* DCTRL: data control register */
   {"\x10\x33\xd5\x39\x40", 48, 32, 0, SDMMC_DCOUNT_fields, 1}, /* DCOUNT: data counter register */
   {"\x4d\x40\x40", 52, 32, 0, SDMMC_STA_fields, 24}, /* STA: status register */
   {"\x24\x34\x80", 56, 32, 0, SDMMC_ICR_fields, 13}, /* ICR: interrupt clear register */
   {"\x34\x14\xcb", 60, 32, 0, SDMMC_MASK_fields, 24}, /* MASK: mask register */
   {"\x18\x91\x8f\x0c\xe5\x00", 72, 32, 0, SDMMC_FIFOCNT_fields, 1}, /* FIFOCNT: FIFO counter register */
   {"\x18\x91\x8f", 128, 32, 0, SDMMC_FIFO_fields, 1}, /* FIFO: data FIFO register */
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

const Field_t TIM1_OR1_fields[] = {
   { "\x15\x44\xa5\x04\x40\xdc\x95\x23\x50", 0, 2 },  /* ETR_ADC1_RMP: External trigger remap on ADC1 analog
              watchdog */
   { "\x15\x44\xa5\x04\x40\xde\x95\x23\x50", 2, 2 },  /* ETR_ADC3_RMP: External trigger remap on ADC3 analog
              watchdog */
   { "\x50\x97\x25\x48\xd4\x00", 4, 1 },  /* TI1_RMP: Input Capture 1 remap */
};

const Field_t TIM1_CCMR3_Output_fields[] = {
   { "\x3c\x38\x06\x14", 2, 1 },  /* OC5FE: Output compare 5 fast
              enable */
   { "\x3c\x38\x10\x14", 3, 1 },  /* OC5PE: Output compare 5 preload
              enable */
   { "\x3c\x38\x0d", 4, 3 },  /* OC5M: Output compare 5 mode */
   { "\x3c\x38\x03\x14", 7, 1 },  /* OC5CE: Output compare 5 clear
              enable */
   { "\x3c\x38\x46\x14", 10, 1 },  /* OC6FE: Output compare 6 fast
              enable */
   { "\x3c\x38\x50\x14", 11, 1 },  /* OC6PE: Output compare 6 preload
              enable */
   { "\x3c\x38\x4d", 12, 3 },  /* OC6M: Output compare 6 mode */
   { "\x3c\x38\x43\x14", 15, 1 },  /* OC6CE: Output compare 6 clear
              enable */
   { "\x3c\x38\x0d\x94\x22\x54\x78", 16, 3 },  /* OC5M_bit3: Output Compare 5 mode bit
              3 */
   { "\x3c\x38\x4d\x94\x22\x54\x78", 24, 1 },  /* OC6M_bit3: Output Compare 6 mode bit
              3 */
};

const Field_t TIM1_CCR5_fields[] = {
   { "\x0c\x34\xa0", 0, 16 },  /* CCR5: Capture/Compare value */
   { "\x1c\x38\x03\x70", 29, 1 },  /* GC5C1: Group Channel 5 and Channel
              1 */
   { "\x1c\x38\x03\x74", 30, 1 },  /* GC5C2: Group Channel 5 and Channel
              2 */
   { "\x1c\x38\x03\x78", 31, 1 },  /* GC5C3: Group Channel 5 and Channel
              3 */
};

const Field_t TIM1_CCR6_fields[] = {
   { "\x0c\x34\xa1", 0, 16 },  /* CCR6: Capture/Compare value */
};

const Field_t TIM1_OR2_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb0\xcd\x41\xc1\x40", 1, 1 },  /* BKCMP1E: BRK COMP1 enable */
   { "\x08\xb0\xcd\x41\xd1\x40", 2, 1 },  /* BKCMP2E: BRK COMP2 enable */
   { "\x08\xb1\x06\x08\xb6\xc5", 8, 1 },  /* BKDFBK0E: BRK DFSDM_BREAK0 enable */
   { "\x08\xb2\x4e\x40", 9, 1 },  /* BKINP: BRK BKIN input polarity */
   { "\x08\xb0\xcd\x41\xc4\x00", 10, 1 },  /* BKCMP1P: BRK COMP1 input polarity */
   { "\x08\xb0\xcd\x41\xd4\x00", 11, 1 },  /* BKCMP2P: BRK COMP2 input polarity */
   { "\x15\x44\x93\x14\xc0", 14, 3 },  /* ETRSEL: ETR source selection */
};

const Field_t TIM1_OR3_fields[] = {
   { "\x08\xb7\x49\x38\x50", 0, 1 },  /* BK2INE: BRK2 BKIN input enable */
   { "\x08\xb7\x43\x35\x07\x05", 1, 1 },  /* BK2CMP1E: BRK2 COMP1 enable */
   { "\x08\xb7\x43\x35\x07\x45", 2, 1 },  /* BK2CMP2E: BRK2 COMP2 enable */
   { "\x08\xb7\x44\x18\x22\xdb\x14", 8, 1 },  /* BK2DFBK0E: BRK2 DFSDM_BREAK0 enable */
   { "\x08\xb7\x49\x39\x00", 9, 1 },  /* BK2INP: BRK2 BKIN input polarity */
   { "\x08\xb7\x43\x35\x07\x10", 10, 1 },  /* BK2CMP1P: BRK2 COMP1 input polarity */
   { "\x08\xb7\x43\x35\x07\x50", 11, 1 },  /* BK2CMP2P: BRK2 COMP2 input polarity */
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
   {"\x3d\x27\x00", 80, 32, 0, TIM1_OR1_fields, 3}, /* OR1: DMA address for full transfer */
   {"\x0c\x33\x52\x7a\x53\xd5\x51\x05\x54", 84, 32, 0, TIM1_CCMR3_Output_fields, 10}, /* CCMR3_Output: capture/compare mode register 2 (output
          mode) */
   {"\x0c\x34\xa0", 88, 32, 0, TIM1_CCR5_fields, 4}, /* CCR5: capture/compare register 4 */
   {"\x0c\x34\xa1", 92, 32, 0, TIM1_CCR6_fields, 1}, /* CCR6: capture/compare register 4 */
   {"\x3d\x27\x40", 96, 32, 0, TIM1_OR2_fields, 8}, /* OR2: DMA address for full transfer */
   {"\x3d\x27\x80", 100, 32, 0, TIM1_OR3_fields, 7}, /* OR3: DMA address for full transfer */
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
   { "\x0d\x20\xc5\x38", 13, 1 },  /* CRCEN: Hardware CRC calculation
              enable */
   { "\x08\x91\x09\x3c\x50", 14, 1 },  /* BIDIOE: Output enable in bidirectional
              mode */
   { "\x08\x91\x09\x34\xf1\x05", 15, 1 },  /* BIDIMODE: Bidirectional data mode
              enable */
};

const Field_t SPI1_CR2_fields[] = {
   { "\x49\x81\x0d\x04\x53\x80", 0, 1 },  /* RXDMAEN: Rx buffer DMA enable */
   { "\x51\x81\x0d\x04\x53\x80", 1, 1 },  /* TXDMAEN: Tx buffer DMA enable */
   { "\x4d\x33\xc5", 2, 1 },  /* SSOE: SS output enable */
   { "\x39\x34\xd0", 3, 1 },  /* NSSP: NSS pulse management */
   { "\x19\x21\x80", 4, 1 },  /* FRF: Frame format */
   { "\x15\x24\x89\x14", 5, 1 },  /* ERRIE: Error interrupt enable */
   { "\x49\x83\x85\x24\x50", 6, 1 },  /* RXNEIE: RX buffer not empty interrupt
              enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: Tx buffer empty interrupt
              enable */
   { "\x11\x30", 8, 4 },  /* DS: Data size */
   { "\x19\x26\x14\x20", 12, 1 },  /* FRXTH: FIFO reception threshold */
   { "\x30\x43\x41\x95\x26\x00", 13, 1 },  /* LDMA_RX: Last DMA transfer for
              reception */
   { "\x30\x43\x41\x95\x46\x00", 14, 1 },  /* LDMA_TX: Last DMA transfer for
              transmission */
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

const Register_t SPI1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, SPI1_CR1_fields, 14}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, SPI1_CR2_fields, 12}, /* CR2: control register 2 */
   {"\x4d\x20", 8, 32, 0, SPI1_SR_fields, 9}, /* SR: status register */
   {"\x11\x20", 12, 32, 0, SPI1_DR_fields, 1}, /* DR: data register */
   {"\x0d\x20\xd0\x48", 16, 32, 0, SPI1_CRCPR_fields, 1}, /* CRCPR: CRC polynomial register */
   {"\x49\x80\xd2\x0d\x20", 20, 32, 0, SPI1_RXCRCR_fields, 1}, /* RXCRCR: RX CRC register */
   {"\x51\x80\xd2\x0d\x20", 24, 32, 0, SPI1_TXCRCR_fields, 1}, /* TXCRCR: TX CRC register */
};

const Field_t USART1_CR1_fields[] = {
   { "\x54\x50", 0, 1 },  /* UE: USART enable */
   { "\x54\x54\xcd", 1, 1 },  /* UESM: USART enable in Stop mode */
   { "\x48\x50", 2, 1 },  /* RE: Receiver enable */
   { "\x50\x50", 3, 1 },  /* TE: Transmitter enable */
   { "\x24\x43\x05\x24\x50", 4, 1 },  /* IDLEIE: IDLE interrupt enable */
   { "\x49\x83\x85\x24\x50", 5, 1 },  /* RXNEIE: RXNE interrupt enable */
   { "\x50\x32\x45", 6, 1 },  /* TCIE: Transmission complete interrupt
              enable */
   { "\x51\x81\x49\x14", 7, 1 },  /* TXEIE: interrupt enable */
   { "\x40\x52\x45", 8, 1 },  /* PEIE: PE interrupt enable */
   { "\x41\x30", 9, 1 },  /* PS: Parity selection */
   { "\x40\x31\x40", 10, 1 },  /* PCE: Parity control enable */
   { "\x5c\x12\xc5", 11, 1 },  /* WAKE: Receiver wakeup method */
   { "\x35\xb0", 12, 1 },  /* M0: Word length */
   { "\x34\xd1\x40", 13, 1 },  /* MME: Mute mode enable */
   { "\x0c\xd2\x45", 14, 1 },  /* CMIE: Character match interrupt
              enable */
   { "\x3d\x61\x52\x8c", 15, 1 },  /* OVER8: Oversampling mode */
   { "\x10\x51\x14\x6c", 16, 1 },  /* DEDT0: DEDT0 */
   { "\x10\x51\x14\x70", 17, 1 },  /* DEDT1: DEDT1 */
   { "\x10\x51\x14\x74", 18, 1 },  /* DEDT2: DEDT2 */
   { "\x10\x51\x14\x78", 19, 1 },  /* DEDT3: DEDT3 */
   { "\x10\x51\x14\x7c", 20, 1 },  /* DEDT4: Driver Enable de-assertion
              time */
   { "\x10\x50\x54\x6c", 21, 1 },  /* DEAT0: DEAT0 */
   { "\x10\x50\x54\x70", 22, 1 },  /* DEAT1: DEAT1 */
   { "\x10\x50\x54\x74", 23, 1 },  /* DEAT2: DEAT2 */
   { "\x10\x50\x54\x78", 24, 1 },  /* DEAT3: DEAT3 */
   { "\x10\x50\x54\x7c", 25, 1 },  /* DEAT4: Driver Enable assertion
              time */
   { "\x49\x43\xc9\x14", 26, 1 },  /* RTOIE: Receiver timeout interrupt
              enable */
   { "\x14\xf0\x89\x14", 27, 1 },  /* EOBIE: End of Block interrupt
              enable */
   { "\x35\xc0", 28, 1 },  /* M1: Word length */
};

const Field_t USART1_CR2_fields[] = {
   { "\x04\x41\x0d\x88", 4, 1 },  /* ADDM7: 7-bit Address Detection/4-bit Address
              Detection */
   { "\x30\x21\x0c", 5, 1 },  /* LBDL: LIN break detection length */
   { "\x30\x21\x09\x14", 6, 1 },  /* LBDIE: LIN break detection interrupt
              enable */
   { "\x30\x20\xcc", 8, 1 },  /* LBCL: Last bit clock pulse */
   { "\x0d\x02\x01", 9, 1 },  /* CPHA: Clock phase */
   { "\x0d\x03\xcc", 10, 1 },  /* CPOL: Clock polarity */
   { "\x0c\xc2\xc5\x38", 11, 1 },  /* CLKEN: Clock enable */
   { "\x4d\x43\xd0", 12, 2 },  /* STOP: STOP bits */
   { "\x30\x93\x85\x38", 14, 1 },  /* LINEN: LIN mode enable */
   { "\x4d\x70\x50", 15, 1 },  /* SWAP: Swap TX/RX pins */
   { "\x49\x82\x4e\x58", 16, 1 },  /* RXINV: RX pin active level
              inversion */
   { "\x51\x82\x4e\x58", 17, 1 },  /* TXINV: TX pin active level
              inversion */
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
   { "\x3c\xe1\x42\x25\x40", 11, 1 },  /* ONEBIT: One sample bit method
              enable */
   { "\x3d\x64\x84\x25\x30", 12, 1 },  /* OVRDIS: Overrun Disable */
   { "\x10\x44\x85", 13, 1 },  /* DDRE: DMA Disable on Reception
              Error */
   { "\x10\x53\x40", 14, 1 },  /* DEM: Driver enable mode */
   { "\x10\x54\x00", 15, 1 },  /* DEP: Driver enable polarity
              selection */
   { "\x4c\x30\x52\x0c\xe5\x00", 17, 3 },  /* SCARCNT: Smartcard auto-retry count */
   { "\x5d\x54\xc0", 20, 2 },  /* WUS: Wakeup from Stop mode interrupt flag
              selection */
   { "\x5d\x51\x89\x14", 22, 1 },  /* WUFIE: Wakeup from Stop mode interrupt
              enable */
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
   { "\x51\x81\x92\x44", 4, 1 },  /* TXFRQ: Transmit data flush
              request */
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
   { "\x04\x24\x85", 14, 1 },  /* ABRE: ABRE */
   { "\x04\x24\x86", 15, 1 },  /* ABRF: ABRF */
   { "\x09\x54\xd9", 16, 1 },  /* BUSY: BUSY */
   { "\x0c\xd1\x80", 17, 1 },  /* CMF: CMF */
   { "\x4c\x22\xc6", 18, 1 },  /* SBKF: SBKF */
   { "\x49\x75\x40", 19, 1 },  /* RWU: RWU */
   { "\x5d\x51\x80", 20, 1 },  /* WUF: WUF */
   { "\x50\x50\x43\x2c", 21, 1 },  /* TEACK: TEACK */
   { "\x48\x50\x43\x2c", 22, 1 },  /* REACK: REACK */
};

const Field_t USART1_ICR_fields[] = {
   { "\x40\x50\xc6", 0, 1 },  /* PECF: Parity error clear flag */
   { "\x18\x50\xc6", 1, 1 },  /* FECF: Framing error clear flag */
   { "\x38\x31\x80", 2, 1 },  /* NCF: Noise detected clear flag */
   { "\x3d\x21\x43\x18", 3, 1 },  /* ORECF: Overrun error clear flag */
   { "\x24\x43\x05\x0c\x60", 4, 1 },  /* IDLECF: Idle line detected clear
              flag */
   { "\x50\x30\xc6", 6, 1 },  /* TCCF: Transmission complete clear
              flag */
   { "\x30\x21\x03\x18", 8, 1 },  /* LBDCF: LIN break detection clear
              flag */
   { "\x0d\x44\xc3\x18", 9, 1 },  /* CTSCF: CTS clear flag */
   { "\x49\x43\xc3\x18", 11, 1 },  /* RTOCF: Receiver timeout clear
              flag */
   { "\x14\xf0\x83\x18", 12, 1 },  /* EOBCF: End of block clear flag */
   { "\x0c\xd0\xc6", 17, 1 },  /* CMCF: Character match clear flag */
   { "\x5d\x50\xc6", 20, 1 },  /* WUCF: Wakeup from Stop mode clear
              flag */
};

const Field_t USART1_RDR_fields[] = {
   { "\x48\x44\x80", 0, 9 },  /* RDR: Receive data value */
};

const Field_t USART1_TDR_fields[] = {
   { "\x50\x44\x80", 0, 9 },  /* TDR: Transmit data value */
};

const Register_t USART1_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, USART1_CR1_fields, 29}, /* CR1: Control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, USART1_CR2_fields, 20}, /* CR2: Control register 2 */
   {"\x0d\x27\x80", 8, 32, 0, USART1_CR3_fields, 19}, /* CR3: Control register 3 */
   {"\x09\x24\x80", 12, 32, 0, USART1_BRR_fields, 2}, /* BRR: Baud rate register */
   {"\x1d\x44\x12", 16, 32, 0, USART1_GTPR_fields, 2}, /* GTPR: Guard time and prescaler
          register */
   {"\x49\x43\xd2", 20, 32, 0, USART1_RTOR_fields, 2}, /* RTOR: Receiver timeout register */
   {"\x49\x14\x80", 24, 32, 0, USART1_RQR_fields, 5}, /* RQR: Request register */
   {"\x25\x34\x80", 28, 32, 0, USART1_ISR_fields, 22}, /* ISR: Interrupt & status
          register */
   {"\x24\x34\x80", 32, 32, 0, USART1_ICR_fields, 12}, /* ICR: Interrupt flag clear register */
   {"\x48\x44\x80", 36, 32, 0, USART1_RDR_fields, 1}, /* RDR: Receive data register */
   {"\x50\x44\x80", 40, 32, 0, USART1_TDR_fields, 1}, /* TDR: Transmit data register */
};

const Field_t TIM15_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM15_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded
              control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update
              selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA
              selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
};

const Field_t TIM15_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request
              enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM15_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
};

const Field_t TIM15_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM15_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x0d\x95\xd0", 16, 1 },  /* OC1M_2: Output Compare 1 mode */
};

const Field_t TIM15_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM15_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output
              enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
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

const Field_t TIM15_BDTR_fields[] = {
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
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
};

const Field_t TIM15_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM15_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst
              accesses */
};

const Register_t TIM15_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM15_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM15_CR2_fields, 5}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM15_DIER_fields, 9}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM15_SR_fields, 6}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM15_EGR_fields, 5}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM15_CCMR1_Output_fields, 5}, /* CCMR1_Output: capture/compare mode register (output
          mode) */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM15_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM15_CCER_fields, 4}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM15_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM15_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM15_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM15_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM15_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x08\x45\x12", 68, 32, 0, TIM15_BDTR_fields, 9}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM15_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM15_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
};

const Field_t TIM16_CR1_fields[] = {
   { "\x0c\x53\x80", 0, 1 },  /* CEN: Counter enable */
   { "\x54\x42\x53", 1, 1 },  /* UDIS: Update disable */
   { "\x55\x24\xc0", 2, 1 },  /* URS: Update request source */
   { "\x3d\x03\x40", 3, 1 },  /* OPM: One-pulse mode */
   { "\x05\x24\x05", 7, 1 },  /* ARPE: Auto-reload preload enable */
   { "\x0c\xb1\x00", 8, 2 },  /* CKD: Clock division */
   { "\x54\x91\x92\x14\xd0\x50", 11, 1 },  /* UIFREMAP: UIF status bit remapping */
};

const Field_t TIM16_CR2_fields[] = {
   { "\x0c\x34\x03", 0, 1 },  /* CCPC: Capture/compare preloaded
              control */
   { "\x0c\x35\x53", 2, 1 },  /* CCUS: Capture/compare control update
              selection */
   { "\x0c\x31\x13", 3, 1 },  /* CCDS: Capture/compare DMA
              selection */
   { "\x3c\x94\xdc", 8, 1 },  /* OIS1: Output Idle state 1 */
   { "\x3c\x94\xdc\x38", 9, 1 },  /* OIS1N: Output Idle state 1 */
};

const Field_t TIM16_DIER_fields[] = {
   { "\x54\x91\x40", 0, 1 },  /* UIE: Update interrupt enable */
   { "\x0c\x37\x09\x14", 1, 1 },  /* CC1IE: Capture/Compare 1 interrupt
              enable */
   { "\x0c\xf3\x49\x14", 5, 1 },  /* COMIE: COM interrupt enable */
   { "\x50\x91\x40", 6, 1 },  /* TIE: Trigger interrupt enable */
   { "\x08\x91\x40", 7, 1 },  /* BIE: Break interrupt enable */
   { "\x54\x41\x40", 8, 1 },  /* UDE: Update DMA request enable */
   { "\x0c\x37\x04\x14", 9, 1 },  /* CC1DE: Capture/Compare 1 DMA request
              enable */
   { "\x0c\xf3\x44\x14", 13, 1 },  /* COMDE: COM DMA request enable */
   { "\x50\x41\x40", 14, 1 },  /* TDE: Trigger DMA request enable */
};

const Field_t TIM16_SR_fields[] = {
   { "\x54\x91\x80", 0, 1 },  /* UIF: Update interrupt flag */
   { "\x0c\x37\x09\x18", 1, 1 },  /* CC1IF: Capture/compare 1 interrupt
              flag */
   { "\x0c\xf3\x49\x18", 5, 1 },  /* COMIF: COM interrupt flag */
   { "\x50\x91\x80", 6, 1 },  /* TIF: Trigger interrupt flag */
   { "\x08\x91\x80", 7, 1 },  /* BIF: Break interrupt flag */
   { "\x0c\x37\x0f\x18", 9, 1 },  /* CC1OF: Capture/Compare 1 overcapture
              flag */
};

const Field_t TIM16_EGR_fields[] = {
   { "\x54\x70", 0, 1 },  /* UG: Update generation */
   { "\x0c\x37\x07", 1, 1 },  /* CC1G: Capture/compare 1
              generation */
   { "\x0c\xf3\x47", 5, 1 },  /* COMG: Capture/Compare control update
              generation */
   { "\x50\x70", 6, 1 },  /* TG: Trigger generation */
   { "\x08\x70", 7, 1 },  /* BG: Break generation */
};

const Field_t TIM16_CCMR1_Input_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x24\x37\x10\x4c\x30", 2, 2 },  /* IC1PSC: Input capture 1 prescaler */
   { "\x24\x37\x06", 4, 4 },  /* IC1F: Input capture 1 filter */
};

const Field_t TIM16_CCMR1_Output_fields[] = {
   { "\x0c\x37\x13", 0, 2 },  /* CC1S: Capture/Compare 1
              selection */
   { "\x3c\x37\x06\x14", 2, 1 },  /* OC1FE: Output Compare 1 fast
              enable */
   { "\x3c\x37\x10\x14", 3, 1 },  /* OC1PE: Output Compare 1 preload
              enable */
   { "\x3c\x37\x0d", 4, 3 },  /* OC1M: Output Compare 1 mode */
   { "\x3c\x37\x0d\x95\xd0", 16, 1 },  /* OC1M_2: Output Compare 1 mode */
};

const Field_t TIM16_CCER_fields[] = {
   { "\x0c\x37\x05", 0, 1 },  /* CC1E: Capture/Compare 1 output
              enable */
   { "\x0c\x37\x10", 1, 1 },  /* CC1P: Capture/Compare 1 output
              Polarity */
   { "\x0c\x37\x0e\x14", 2, 1 },  /* CC1NE: Capture/Compare 1 complementary output
              enable */
   { "\x0c\x37\x0e\x40", 3, 1 },  /* CC1NP: Capture/Compare 1 output
              Polarity */
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
   { "\x3d\x34\xc9", 10, 1 },  /* OSSI: Off-state selection for Idle
              mode */
   { "\x3d\x34\xd2", 11, 1 },  /* OSSR: Off-state selection for Run
              mode */
   { "\x08\xb1\x40", 12, 1 },  /* BKE: Break enable */
   { "\x08\xb4\x00", 13, 1 },  /* BKP: Break polarity */
   { "\x04\xf1\x40", 14, 1 },  /* AOE: Automatic output enable */
   { "\x34\xf1\x40", 15, 1 },  /* MOE: Main output enable */
   { "\x08\xb1\x80", 16, 4 },  /* BKF: Break filter */
};

const Field_t TIM16_DCR_fields[] = {
   { "\x10\x20\x40", 0, 5 },  /* DBA: DMA base address */
   { "\x10\x23\x00", 8, 5 },  /* DBL: DMA burst length */
};

const Field_t TIM16_DMAR_fields[] = {
   { "\x10\xd0\x42", 0, 16 },  /* DMAB: DMA register for burst
              accesses */
};

const Field_t TIM16_OR1_fields[] = {
   { "\x50\x97\x25\x48\xd4\x00", 0, 2 },  /* TI1_RMP: Input capture 1 remap */
};

const Field_t TIM16_OR2_fields[] = {
   { "\x08\xb2\x4e\x14", 0, 1 },  /* BKINE: BRK BKIN input enable */
   { "\x08\xb0\xcd\x41\xc1\x40", 1, 1 },  /* BKCMP1E: BRK COMP1 enable */
   { "\x08\xb0\xcd\x41\xd1\x40", 2, 1 },  /* BKCMP2E: BRK COMP2 enable */
   { "\x08\xb1\x06\x08\xb7\x05", 8, 1 },  /* BKDFBK1E: BRK DFSDM_BREAK1 enable */
   { "\x08\xb2\x4e\x40", 9, 1 },  /* BKINP: BRK BKIN input polarity */
   { "\x08\xb0\xcd\x41\xc4\x00", 10, 1 },  /* BKCMP1P: BRK COMP1 input polarity */
   { "\x08\xb0\xcd\x41\xd4\x00", 11, 1 },  /* BKCMP2P: BRK COMP2 input polarit */
};

const Register_t TIM16_registers[] = {
   {"\x0d\x27\x00", 0, 32, 0, TIM16_CR1_fields, 7}, /* CR1: control register 1 */
   {"\x0d\x27\x40", 4, 32, 0, TIM16_CR2_fields, 5}, /* CR2: control register 2 */
   {"\x10\x91\x52", 12, 32, 0, TIM16_DIER_fields, 9}, /* DIER: DMA/Interrupt enable register */
   {"\x4d\x20", 16, 32, 0, TIM16_SR_fields, 6}, /* SR: status register */
   {"\x14\x74\x80", 20, 32, 0, TIM16_EGR_fields, 5}, /* EGR: event generation register */
   {"\x0c\x33\x52\x72\x52\x4e\x41\x55\x00", 24, 32, 0, TIM16_CCMR1_Input_fields, 3}, /* CCMR1_Input: capture/compare mode register 1 (input
          mode) */
   {"\x0c\x33\x52\x72\x53\xd5\x51\x05\x54", 24, 32, 0, TIM16_CCMR1_Output_fields, 5}, /* CCMR1_Output: capture/compare mode register (output
          mode) */
   {"\x0c\x31\x52", 32, 32, 0, TIM16_CCER_fields, 4}, /* CCER: capture/compare enable
          register */
   {"\x0c\xe5\x00", 36, 32, 0, TIM16_CNT_fields, 2}, /* CNT: counter */
   {"\x41\x30\xc0", 40, 32, 0, TIM16_PSC_fields, 1}, /* PSC: prescaler */
   {"\x05\x24\x80", 44, 32, 0, TIM16_ARR_fields, 1}, /* ARR: auto-reload register */
   {"\x48\x34\x80", 48, 32, 0, TIM16_RCR_fields, 1}, /* RCR: repetition counter register */
   {"\x0c\x34\x9c", 52, 32, 0, TIM16_CCR1_fields, 1}, /* CCR1: capture/compare register 1 */
   {"\x08\x45\x12", 68, 32, 0, TIM16_BDTR_fields, 9}, /* BDTR: break and dead-time register */
   {"\x10\x34\x80", 72, 32, 0, TIM16_DCR_fields, 2}, /* DCR: DMA control register */
   {"\x10\xd0\x52", 76, 32, 0, TIM16_DMAR_fields, 1}, /* DMAR: DMA address for full transfer */
   {"\x3d\x27\x00", 80, 32, 0, TIM16_OR1_fields, 1}, /* OR1: TIM16 option register 1 */
   {"\x3d\x27\x40", 96, 32, 0, TIM16_OR2_fields, 7}, /* OR2: TIM17 option register 1 */
};

const Field_t SAI1_ACR1_fields[] = {
   { "\x34\xf1\x05", 0, 2 },  /* MODE: Audio block mode */
   { "\x41\x25\x03\x18\x70", 2, 2 },  /* PRTCFG: Protocol configuration */
   { "\x11\x30", 5, 3 },  /* DS: Data size */
   { "\x31\x30\x86\x25\x24\xd4", 8, 1 },  /* LSBFIRST: Least significant bit
              first */
   { "\x0c\xb4\xd4\x48", 9, 1 },  /* CKSTR: Clock strobing edge */
   { "\x4d\x93\x83\x14\xe0", 10, 2 },  /* SYNCEN: Synchronization enable */
   { "\x34\xf3\x8f", 12, 1 },  /* MONO: Mono mode */
   { "\x3d\x55\x04\x48\x90", 13, 1 },  /* OutDri: Output drive */
   { "\x4c\x12\x41\x14\xe0", 16, 1 },  /* SAIAEN: Audio block A enable */
   { "\x10\xd0\x45\x38", 17, 1 },  /* DMAEN: DMA enable */
   { "\x38\xf1\x09\x58", 19, 1 },  /* NODIV: No divider */
   { "\x34\x32\x84\x25\x60", 20, 4 },  /* MCJDIV: Master clock divider */
};

const Field_t SAI1_ACR2_fields[] = {
   { "\x19\x42\x00", 0, 3 },  /* FTH: FIFO threshold */
   { "\x18\x63\x15\x4c", 3, 1 },  /* FFLUS: FIFO flush */
   { "\x51\x22\x53", 4, 1 },  /* TRIS: Tristate management on data
              line */
   { "\x35\x55\x05", 5, 1 },  /* MUTE: Mute */
   { "\x35\x55\x05\x58\x13\x00", 6, 1 },  /* MUTEVAL: Mute value */
   { "\x35\x55\x05\x0c\xe0", 7, 6 },  /* MUTECN: Mute counter */
   { "\x0d\x03\x00", 13, 1 },  /* CPL: Complement bit */
   { "\x0c\xf3\x50", 14, 2 },  /* COMP: Companding mode */
};

const Field_t SAI1_AFRCR_fields[] = {
   { "\x19\x23\x00", 0, 8 },  /* FRL: Frame length */
   { "\x19\x30\x4c\x30", 8, 7 },  /* FSALL: Frame synchronization active level
              length */
   { "\x19\x31\x05\x18", 16, 1 },  /* FSDEF: Frame synchronization
              definition */
   { "\x19\x34\x0f\x30", 17, 1 },  /* FSPOL: Frame synchronization
              polarity */
   { "\x19\x33\xc6\x18", 18, 1 },  /* FSOFF: Frame synchronization
              offset */
};

const Field_t SAI1_ASLOTR_fields[] = {
   { "\x18\x23\xc6\x18", 0, 5 },  /* FBOFF: First bit offset */
   { "\x4c\xc3\xd4\x4d\xa0", 6, 2 },  /* SLOTSZ: Slot size */
   { "\x38\x24\xcc\x3d\x40", 8, 4 },  /* NBSLOT: Number of slots in an audio
              frame */
   { "\x4c\xc3\xd4\x14\xe0", 16, 16 },  /* SLOTEN: Slot enable */
};

const Field_t SAI1_AIM_fields[] = {
   { "\x3d\x64\x95\x11\x22\x45", 0, 1 },  /* OVRUDRIE: Overrun/underrun interrupt
              enable */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection interrupt
              enable */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration interrupt
              enable */
   { "\x19\x21\x51\x24\x50", 3, 1 },  /* FREQIE: FIFO request interrupt
              enable */
   { "\x0c\xe4\x84\x64\x91\x40", 4, 1 },  /* CNRDYIE: Codec not ready interrupt
              enable */
   { "\x04\x64\xc4\x15\x42\x45", 5, 1 },  /* AFSDETIE: Anticipated frame synchronization
              detection interrupt enable */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Late frame synchronization detection
              interrupt enable */
};

const Field_t SAI1_ASR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration flag. This bit
              is read only */
   { "\x19\x21\x51", 3, 1 },  /* FREQ: FIFO request */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Codec not ready */
   { "\x04\x64\xc4\x15\x40", 5, 1 },  /* AFSDET: Anticipated frame synchronization
              detection */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Late frame synchronization
              detection */
   { "\x18\xc5\x8c", 16, 3 },  /* FLVL: FIFO level threshold */
};

const Field_t SAI1_ACLRFR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Clear overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection flag */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Clear wrong clock configuration
              flag */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Clear codec not ready flag */
   { "\x0c\x11\x93\x10\x55\x00", 5, 1 },  /* CAFSDET: Clear anticipated frame synchronization
              detection flag */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Clear late frame synchronization
              detection flag */
};

const Field_t SAI1_ADR_fields[] = {
   { "\x10\x15\x01", 0, 32 },  /* DATA: Data */
};

const Field_t SAI1_BCR1_fields[] = {
   { "\x34\xf1\x05", 0, 2 },  /* MODE: Audio block mode */
   { "\x41\x25\x03\x18\x70", 2, 2 },  /* PRTCFG: Protocol configuration */
   { "\x11\x30", 5, 3 },  /* DS: Data size */
   { "\x31\x30\x86\x25\x24\xd4", 8, 1 },  /* LSBFIRST: Least significant bit
              first */
   { "\x0c\xb4\xd4\x48", 9, 1 },  /* CKSTR: Clock strobing edge */
   { "\x4d\x93\x83\x14\xe0", 10, 2 },  /* SYNCEN: Synchronization enable */
   { "\x34\xf3\x8f", 12, 1 },  /* MONO: Mono mode */
   { "\x3d\x55\x04\x48\x90", 13, 1 },  /* OutDri: Output drive */
   { "\x4c\x12\x42\x14\xe0", 16, 1 },  /* SAIBEN: Audio block B enable */
   { "\x10\xd0\x45\x38", 17, 1 },  /* DMAEN: DMA enable */
   { "\x38\xf1\x09\x58", 19, 1 },  /* NODIV: No divider */
   { "\x34\x32\x84\x25\x60", 20, 4 },  /* MCJDIV: Master clock divider */
};

const Field_t SAI1_BCR2_fields[] = {
   { "\x19\x42\x00", 0, 3 },  /* FTH: FIFO threshold */
   { "\x18\x63\x15\x4c", 3, 1 },  /* FFLUS: FIFO flush */
   { "\x51\x22\x53", 4, 1 },  /* TRIS: Tristate management on data
              line */
   { "\x35\x55\x05", 5, 1 },  /* MUTE: Mute */
   { "\x35\x55\x05\x58\x13\x00", 6, 1 },  /* MUTEVAL: Mute value */
   { "\x35\x55\x05\x0c\xe0", 7, 6 },  /* MUTECN: Mute counter */
   { "\x0d\x03\x00", 13, 1 },  /* CPL: Complement bit */
   { "\x0c\xf3\x50", 14, 2 },  /* COMP: Companding mode */
};

const Field_t SAI1_BFRCR_fields[] = {
   { "\x19\x23\x00", 0, 8 },  /* FRL: Frame length */
   { "\x19\x30\x4c\x30", 8, 7 },  /* FSALL: Frame synchronization active level
              length */
   { "\x19\x31\x05\x18", 16, 1 },  /* FSDEF: Frame synchronization
              definition */
   { "\x19\x34\x0f\x30", 17, 1 },  /* FSPOL: Frame synchronization
              polarity */
   { "\x19\x33\xc6\x18", 18, 1 },  /* FSOFF: Frame synchronization
              offset */
};

const Field_t SAI1_BSLOTR_fields[] = {
   { "\x18\x23\xc6\x18", 0, 5 },  /* FBOFF: First bit offset */
   { "\x4c\xc3\xd4\x4d\xa0", 6, 2 },  /* SLOTSZ: Slot size */
   { "\x38\x24\xcc\x3d\x40", 8, 4 },  /* NBSLOT: Number of slots in an audio
              frame */
   { "\x4c\xc3\xd4\x14\xe0", 16, 16 },  /* SLOTEN: Slot enable */
};

const Field_t SAI1_BIM_fields[] = {
   { "\x3d\x64\x95\x11\x22\x45", 0, 1 },  /* OVRUDRIE: Overrun/underrun interrupt
              enable */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection interrupt
              enable */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration interrupt
              enable */
   { "\x19\x21\x51\x24\x50", 3, 1 },  /* FREQIE: FIFO request interrupt
              enable */
   { "\x0c\xe4\x84\x64\x91\x40", 4, 1 },  /* CNRDYIE: Codec not ready interrupt
              enable */
   { "\x04\x64\xc4\x15\x42\x45", 5, 1 },  /* AFSDETIE: Anticipated frame synchronization
              detection interrupt enable */
   { "\x30\x64\xc4\x15\x42\x45", 6, 1 },  /* LFSDETIE: Late frame synchronization detection
              interrupt enable */
};

const Field_t SAI1_BSR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Wrong clock configuration
              flag */
   { "\x19\x21\x51", 3, 1 },  /* FREQ: FIFO request */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Codec not ready */
   { "\x04\x64\xc4\x15\x40", 5, 1 },  /* AFSDET: Anticipated frame synchronization
              detection */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Late frame synchronization
              detection */
   { "\x18\xc5\x8c", 16, 3 },  /* FLVL: FIFO level threshold */
};

const Field_t SAI1_BCLRFR_fields[] = {
   { "\x3d\x64\x95\x11\x20", 0, 1 },  /* OVRUDR: Clear overrun / underrun */
   { "\x35\x55\x05\x10\x55\x00", 1, 1 },  /* MUTEDET: Mute detection flag */
   { "\x5c\x32\xc3\x18\x70", 2, 1 },  /* WCKCFG: Clear wrong clock configuration
              flag */
   { "\x0c\xe4\x84\x64", 4, 1 },  /* CNRDY: Clear codec not ready flag */
   { "\x0c\x11\x93\x10\x55\x00", 5, 1 },  /* CAFSDET: Clear anticipated frame synchronization
              detection flag */
   { "\x30\x64\xc4\x15\x40", 6, 1 },  /* LFSDET: Clear late frame synchronization
              detection flag */
};

const Field_t SAI1_BDR_fields[] = {
   { "\x10\x15\x01", 0, 32 },  /* DATA: Data */
};

const Register_t SAI1_registers[] = {
   {"\x04\x34\x9c", 4, 32, 0, SAI1_ACR1_fields, 12}, /* ACR1: AConfiguration register 1 */
   {"\x04\x34\x9d", 8, 32, 0, SAI1_ACR2_fields, 8}, /* ACR2: AConfiguration register 2 */
   {"\x04\x64\x83\x48", 12, 32, 0, SAI1_AFRCR_fields, 5}, /* AFRCR: AFRCR */
   {"\x05\x33\x0f\x51\x20", 16, 32, 0, SAI1_ASLOTR_fields, 4}, /* ASLOTR: ASlot register */
   {"\x04\x93\x40", 20, 32, 0, SAI1_AIM_fields, 7}, /* AIM: AInterrupt mask register2 */
   {"\x05\x34\x80", 24, 32, 0, SAI1_ASR_fields, 8}, /* ASR: AStatus register */
   {"\x04\x33\x12\x19\x20", 28, 32, 0, SAI1_ACLRFR_fields, 6}, /* ACLRFR: AClear flag register */
   {"\x04\x44\x80", 32, 32, 0, SAI1_ADR_fields, 1}, /* ADR: AData register */
   {"\x08\x34\x9c", 36, 32, 0, SAI1_BCR1_fields, 12}, /* BCR1: BConfiguration register 1 */
   {"\x08\x34\x9d", 40, 32, 0, SAI1_BCR2_fields, 8}, /* BCR2: BConfiguration register 2 */
   {"\x08\x64\x83\x48", 44, 32, 0, SAI1_BFRCR_fields, 5}, /* BFRCR: BFRCR */
   {"\x09\x33\x0f\x51\x20", 48, 32, 0, SAI1_BSLOTR_fields, 4}, /* BSLOTR: BSlot register */
   {"\x08\x93\x40", 52, 32, 0, SAI1_BIM_fields, 7}, /* BIM: BInterrupt mask register2 */
   {"\x09\x34\x80", 56, 32, 0, SAI1_BSR_fields, 8}, /* BSR: BStatus register */
   {"\x08\x33\x12\x19\x20", 60, 32, 0, SAI1_BCLRFR_fields, 6}, /* BCLRFR: BClear flag register */
   {"\x08\x44\x80", 64, 32, 0, SAI1_BDR_fields, 1}, /* BDR: BData register */
};

const Field_t DMA1_ISR_fields[] = {
   { "\x1c\x91\x9c", 0, 1 },  /* GIF1: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x70", 1, 1 },  /* TCIF1: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x70", 2, 1 },  /* HTIF1: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x70", 3, 1 },  /* TEIF1: Channel x transfer error flag (x = 1
              ..7) */
   { "\x1c\x91\x9d", 4, 1 },  /* GIF2: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x74", 5, 1 },  /* TCIF2: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x74", 6, 1 },  /* HTIF2: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x74", 7, 1 },  /* TEIF2: Channel x transfer error flag (x = 1
              ..7) */
   { "\x1c\x91\x9e", 8, 1 },  /* GIF3: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x78", 9, 1 },  /* TCIF3: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x78", 10, 1 },  /* HTIF3: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x78", 11, 1 },  /* TEIF3: Channel x transfer error flag (x = 1
              ..7) */
   { "\x1c\x91\x9f", 12, 1 },  /* GIF4: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x7c", 13, 1 },  /* TCIF4: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x7c", 14, 1 },  /* HTIF4: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x7c", 15, 1 },  /* TEIF4: Channel x transfer error flag (x = 1
              ..7) */
   { "\x1c\x91\xa0", 16, 1 },  /* GIF5: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x80", 17, 1 },  /* TCIF5: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x80", 18, 1 },  /* HTIF5: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x80", 19, 1 },  /* TEIF5: Channel x transfer error flag (x = 1
              ..7) */
   { "\x1c\x91\xa1", 20, 1 },  /* GIF6: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x84", 21, 1 },  /* TCIF6: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x84", 22, 1 },  /* HTIF6: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x84", 23, 1 },  /* TEIF6: Channel x transfer error flag (x = 1
              ..7) */
   { "\x1c\x91\xa2", 24, 1 },  /* GIF7: Channel x global interrupt flag (x = 1
              ..7) */
   { "\x50\x32\x46\x88", 25, 1 },  /* TCIF7: Channel x transfer complete flag (x = 1
              ..7) */
   { "\x21\x42\x46\x88", 26, 1 },  /* HTIF7: Channel x half transfer flag (x = 1
              ..7) */
   { "\x50\x52\x46\x88", 27, 1 },  /* TEIF7: Channel x transfer error flag (x = 1
              ..7) */
};

const Field_t DMA1_IFCR_fields[] = {
   { "\x0c\x72\x46\x70", 0, 1 },  /* CGIF1: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x19\xc0", 1, 1 },  /* CTCIF1: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x19\xc0", 2, 1 },  /* CHTIF1: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x19\xc0", 3, 1 },  /* CTEIF1: Channel x transfer error clear (x = 1
              ..7) */
   { "\x0c\x72\x46\x74", 4, 1 },  /* CGIF2: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x19\xd0", 5, 1 },  /* CTCIF2: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x19\xd0", 6, 1 },  /* CHTIF2: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x19\xd0", 7, 1 },  /* CTEIF2: Channel x transfer error clear (x = 1
              ..7) */
   { "\x0c\x72\x46\x78", 8, 1 },  /* CGIF3: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x19\xe0", 9, 1 },  /* CTCIF3: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x19\xe0", 10, 1 },  /* CHTIF3: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x19\xe0", 11, 1 },  /* CTEIF3: Channel x transfer error clear (x = 1
              ..7) */
   { "\x0c\x72\x46\x7c", 12, 1 },  /* CGIF4: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x19\xf0", 13, 1 },  /* CTCIF4: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x19\xf0", 14, 1 },  /* CHTIF4: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x19\xf0", 15, 1 },  /* CTEIF4: Channel x transfer error clear (x = 1
              ..7) */
   { "\x0c\x72\x46\x80", 16, 1 },  /* CGIF5: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x1a\x00", 17, 1 },  /* CTCIF5: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x1a\x00", 18, 1 },  /* CHTIF5: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x1a\x00", 19, 1 },  /* CTEIF5: Channel x transfer error clear (x = 1
              ..7) */
   { "\x0c\x72\x46\x84", 20, 1 },  /* CGIF6: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x1a\x10", 21, 1 },  /* CTCIF6: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x1a\x10", 22, 1 },  /* CHTIF6: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x1a\x10", 23, 1 },  /* CTEIF6: Channel x transfer error clear (x = 1
              ..7) */
   { "\x0c\x72\x46\x88", 24, 1 },  /* CGIF7: Channel x global interrupt clear (x = 1
              ..7) */
   { "\x0d\x40\xc9\x1a\x20", 25, 1 },  /* CTCIF7: Channel x transfer complete clear (x = 1
              ..7) */
   { "\x0c\x85\x09\x1a\x20", 26, 1 },  /* CHTIF7: Channel x half transfer clear (x = 1
              ..7) */
   { "\x0d\x41\x49\x1a\x20", 27, 1 },  /* CTEIF7: Channel x transfer error clear (x = 1
              ..7) */
};

const Field_t DMA1_CCR1_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR1_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR1_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR1_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR2_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR2_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR2_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR2_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR3_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR3_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR3_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR3_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR4_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR4_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR4_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR4_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR5_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR5_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR5_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR5_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR6_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR6_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR6_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR6_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CCR7_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: Channel enable */
   { "\x50\x32\x45", 1, 1 },  /* TCIE: Transfer complete interrupt
              enable */
   { "\x21\x42\x45", 2, 1 },  /* HTIE: Half transfer interrupt
              enable */
   { "\x50\x52\x45", 3, 1 },  /* TEIE: Transfer error interrupt
              enable */
   { "\x10\x94\x80", 4, 1 },  /* DIR: Data transfer direction */
   { "\x0c\x94\x83", 5, 1 },  /* CIRC: Circular mode */
   { "\x40\x93\x83", 6, 1 },  /* PINC: Peripheral increment mode */
   { "\x34\x93\x83", 7, 1 },  /* MINC: Memory increment mode */
   { "\x41\x32\x5a\x14", 8, 2 },  /* PSIZE: Peripheral size */
   { "\x35\x32\x5a\x14", 10, 2 },  /* MSIZE: Memory size */
   { "\x40\xc0", 12, 2 },  /* PL: Channel priority level */
   { "\x34\x53\x5d\x34\x53\x40", 14, 1 },  /* MEM2MEM: Memory to memory mode */
};

const Field_t DMA1_CNDTR7_fields[] = {
   { "\x38\x45\x00", 0, 16 },  /* NDT: Number of data to transfer */
};

const Field_t DMA1_CPAR7_fields[] = {
   { "\x40\x10", 0, 32 },  /* PA: Peripheral address */
};

const Field_t DMA1_CMAR7_fields[] = {
   { "\x34\x10", 0, 32 },  /* MA: Memory address */
};

const Field_t DMA1_CSELR_fields[] = {
   { "\x0d\xc4\xc0", 0, 4 },  /* C1S: DMA channel 1 selection */
   { "\x0d\xd4\xc0", 4, 4 },  /* C2S: DMA channel 2 selection */
   { "\x0d\xe4\xc0", 8, 4 },  /* C3S: DMA channel 3 selection */
   { "\x0d\xf4\xc0", 12, 4 },  /* C4S: DMA channel 4 selection */
   { "\x0e\x04\xc0", 16, 4 },  /* C5S: DMA channel 5 selection */
   { "\x0e\x14\xc0", 20, 4 },  /* C6S: DMA channel 6 selection */
   { "\x0e\x24\xc0", 24, 4 },  /* C7S: DMA channel 7 selection */
};

const Register_t DMA1_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, DMA1_ISR_fields, 28}, /* ISR: interrupt status register */
   {"\x24\x60\xd2", 4, 32, 0, DMA1_IFCR_fields, 28}, /* IFCR: interrupt flag clear register */
   {"\x0c\x34\x9c", 8, 32, 0, DMA1_CCR1_fields, 12}, /* CCR1: channel x configuration
          register */
   {"\x0c\xe1\x14\x49\xc0", 12, 32, 0, DMA1_CNDTR1_fields, 1}, /* CNDTR1: channel x number of data
          register */
   {"\x0d\x00\x52\x70", 16, 32, 0, DMA1_CPAR1_fields, 1}, /* CPAR1: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x70", 20, 32, 0, DMA1_CMAR1_fields, 1}, /* CMAR1: channel x memory address
          register */
   {"\x0c\x34\x9d", 28, 32, 0, DMA1_CCR2_fields, 12}, /* CCR2: channel x configuration
          register */
   {"\x0c\xe1\x14\x49\xd0", 32, 32, 0, DMA1_CNDTR2_fields, 1}, /* CNDTR2: channel x number of data
          register */
   {"\x0d\x00\x52\x74", 36, 32, 0, DMA1_CPAR2_fields, 1}, /* CPAR2: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x74", 40, 32, 0, DMA1_CMAR2_fields, 1}, /* CMAR2: channel x memory address
          register */
   {"\x0c\x34\x9e", 48, 32, 0, DMA1_CCR3_fields, 12}, /* CCR3: channel x configuration
          register */
   {"\x0c\xe1\x14\x49\xe0", 52, 32, 0, DMA1_CNDTR3_fields, 1}, /* CNDTR3: channel x number of data
          register */
   {"\x0d\x00\x52\x78", 56, 32, 0, DMA1_CPAR3_fields, 1}, /* CPAR3: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x78", 60, 32, 0, DMA1_CMAR3_fields, 1}, /* CMAR3: channel x memory address
          register */
   {"\x0c\x34\x9f", 68, 32, 0, DMA1_CCR4_fields, 12}, /* CCR4: channel x configuration
          register */
   {"\x0c\xe1\x14\x49\xf0", 72, 32, 0, DMA1_CNDTR4_fields, 1}, /* CNDTR4: channel x number of data
          register */
   {"\x0d\x00\x52\x7c", 76, 32, 0, DMA1_CPAR4_fields, 1}, /* CPAR4: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x7c", 80, 32, 0, DMA1_CMAR4_fields, 1}, /* CMAR4: channel x memory address
          register */
   {"\x0c\x34\xa0", 88, 32, 0, DMA1_CCR5_fields, 12}, /* CCR5: channel x configuration
          register */
   {"\x0c\xe1\x14\x4a\x00", 92, 32, 0, DMA1_CNDTR5_fields, 1}, /* CNDTR5: channel x number of data
          register */
   {"\x0d\x00\x52\x80", 96, 32, 0, DMA1_CPAR5_fields, 1}, /* CPAR5: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x80", 100, 32, 0, DMA1_CMAR5_fields, 1}, /* CMAR5: channel x memory address
          register */
   {"\x0c\x34\xa1", 108, 32, 0, DMA1_CCR6_fields, 12}, /* CCR6: channel x configuration
          register */
   {"\x0c\xe1\x14\x4a\x10", 112, 32, 0, DMA1_CNDTR6_fields, 1}, /* CNDTR6: channel x number of data
          register */
   {"\x0d\x00\x52\x84", 116, 32, 0, DMA1_CPAR6_fields, 1}, /* CPAR6: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x84", 120, 32, 0, DMA1_CMAR6_fields, 1}, /* CMAR6: channel x memory address
          register */
   {"\x0c\x34\xa2", 128, 32, 0, DMA1_CCR7_fields, 12}, /* CCR7: channel x configuration
          register */
   {"\x0c\xe1\x14\x4a\x20", 132, 32, 0, DMA1_CNDTR7_fields, 1}, /* CNDTR7: channel x number of data
          register */
   {"\x0d\x00\x52\x88", 136, 32, 0, DMA1_CPAR7_fields, 1}, /* CPAR7: channel x peripheral address
          register */
   {"\x0c\xd0\x52\x88", 140, 32, 0, DMA1_CMAR7_fields, 1}, /* CMAR7: channel x memory address
          register */
   {"\x0d\x31\x4c\x48", 168, 32, 0, DMA1_CSELR_fields, 7}, /* CSELR: channel selection register */
};

const Field_t RCC_CR_fields[] = {
   { "\x35\x32\x4f\x38", 0, 1 },  /* MSION: MSI clock enable */
   { "\x35\x32\x52\x11\x90", 1, 1 },  /* MSIRDY: MSI clock ready flag */
   { "\x35\x32\x50\x30\xc1\x4e", 2, 1 },  /* MSIPLLEN: MSI clock PLL enable */
   { "\x35\x32\x52\x1d\x31\x4c", 3, 1 },  /* MSIRGSEL: MSI clock range selection */
   { "\x35\x32\x52\x04\xe1\xc5", 4, 4 },  /* MSIRANGE: MSI clock ranges */
   { "\x21\x32\x4f\x38", 8, 1 },  /* HSION: HSI clock enable */
   { "\x21\x32\x4b\x15\x23\xce", 9, 1 },  /* HSIKERON: HSI always enable for peripheral
              kernels */
   { "\x21\x32\x52\x11\x90", 10, 1 },  /* HSIRDY: HSI clock ready flag */
   { "\x21\x32\x41\x4c\x64\xc0", 11, 1 },  /* HSIASFS: HSI automatic start from
              Stop */
   { "\x21\x31\x4f\x38", 16, 1 },  /* HSEON: HSE clock enable */
   { "\x21\x31\x52\x11\x90", 17, 1 },  /* HSERDY: HSE clock ready flag */
   { "\x21\x31\x42\x65\x00", 18, 1 },  /* HSEBYP: HSE crystal oscillator
              bypass */
   { "\x0d\x34\xcf\x38", 19, 1 },  /* CSSON: Clock security system
              enable */
   { "\x40\xc3\x0f\x38", 24, 1 },  /* PLLON: Main PLL enable */
   { "\x40\xc3\x12\x11\x90", 25, 1 },  /* PLLRDY: Main PLL clock ready flag */
   { "\x40\xc3\x13\x04\x97\x0f\x38", 26, 1 },  /* PLLSAI1ON: SAI1 PLL enable */
   { "\x40\xc3\x13\x04\x97\x12\x11\x90", 27, 1 },  /* PLLSAI1RDY: SAI1 PLL clock ready flag */
};

const Field_t RCC_ICSCR_fields[] = {
   { "\x35\x32\x43\x04\xc0", 0, 8 },  /* MSICAL: MSI clock calibration */
   { "\x35\x32\x54\x48\x93\x40", 8, 8 },  /* MSITRIM: MSI clock trimming */
   { "\x21\x32\x43\x04\xc0", 16, 8 },  /* HSICAL: HSI clock calibration */
   { "\x21\x32\x54\x48\x93\x40", 24, 5 },  /* HSITRIM: HSI clock trimming */
};

const Field_t RCC_CFGR_fields[] = {
   { "\x4d\x70", 0, 2 },  /* SW: System clock switch */
   { "\x4d\x74\xc0", 2, 2 },  /* SWS: System clock switch status */
   { "\x21\x04\x85", 4, 4 },  /* HPRE: AHB prescaler */
   { "\x41\x04\x85\x70", 8, 3 },  /* PPRE1: PB low-speed prescaler
              (APB1) */
   { "\x41\x04\x85\x74", 11, 3 },  /* PPRE2: APB high-speed prescaler
              (APB2) */
   { "\x4d\x43\xd0\x5d\x50\xcb", 15, 1 },  /* STOPWUCK: Wakeup from Stop and CSS backup clock
              selection */
   { "\x34\x33\xd3\x14\xc0", 24, 3 },  /* MCOSEL: Microcontroller clock
              output */
   { "\x34\x33\xd0\x48\x50", 28, 3 },  /* MCOPRE: Microcontroller clock output
              prescaler */
};

const Field_t RCC_PLLCFGR_fields[] = {
   { "\x40\xc3\x13\x48\x30", 0, 2 },  /* PLLSRC: Main PLL, PLLSAI1 and PLLSAI2 entry
              clock source */
   { "\x40\xc3\x0d", 4, 3 },  /* PLLM: Division factor for the main PLL and
              audio PLL (PLLSAI1 and PLLSAI2) input
              clock */
   { "\x40\xc3\x0e", 8, 7 },  /* PLLN: Main PLL multiplication factor for
              VCO */
   { "\x40\xc3\x10\x14\xe0", 16, 1 },  /* PLLPEN: Main PLL PLLSAI3CLK output
              enable */
   { "\x40\xc3\x10", 17, 1 },  /* PLLP: Main PLL division factor for PLLSAI3CLK
              (SAI1 and SAI2 clock) */
   { "\x40\xc3\x11\x14\xe0", 20, 1 },  /* PLLQEN: Main PLL PLLUSB1CLK output
              enable */
   { "\x40\xc3\x11", 21, 2 },  /* PLLQ: Main PLL division factor for
              PLLUSB1CLK(48 MHz clock) */
   { "\x40\xc3\x12\x14\xe0", 24, 1 },  /* PLLREN: Main PLL PLLCLK output
              enable */
   { "\x40\xc3\x12", 25, 2 },  /* PLLR: Main PLL division factor for PLLCLK
              (system clock) */
};

const Field_t RCC_PLLSAI1CFGR_fields[] = {
   { "\x40\xc3\x13\x04\x97\x0e", 8, 7 },  /* PLLSAI1N: SAI1PLL multiplication factor for
              VCO */
   { "\x40\xc3\x13\x04\x97\x10\x14\xe0", 16, 1 },  /* PLLSAI1PEN: SAI1PLL PLLSAI1CLK output
              enable */
   { "\x40\xc3\x13\x04\x97\x10", 17, 1 },  /* PLLSAI1P: SAI1PLL division factor for PLLSAI1CLK
              (SAI1 or SAI2 clock) */
   { "\x40\xc3\x13\x04\x97\x11\x14\xe0", 20, 1 },  /* PLLSAI1QEN: SAI1PLL PLLUSB2CLK output
              enable */
   { "\x40\xc3\x13\x04\x97\x11", 21, 2 },  /* PLLSAI1Q: SAI1PLL division factor for PLLUSB2CLK
              (48 MHz clock) */
   { "\x40\xc3\x13\x04\x97\x12\x14\xe0", 24, 1 },  /* PLLSAI1REN: PLLSAI1 PLLADC1CLK output
              enable */
   { "\x40\xc3\x13\x04\x97\x12", 25, 2 },  /* PLLSAI1R: PLLSAI1 division factor for PLLADC1CLK
              (ADC clock) */
};

const Field_t RCC_CIER_fields[] = {
   { "\x31\x32\x52\x11\x92\x45", 0, 1 },  /* LSIRDYIE: LSI ready interrupt enable */
   { "\x31\x31\x52\x11\x92\x45", 1, 1 },  /* LSERDYIE: LSE ready interrupt enable */
   { "\x35\x32\x52\x11\x92\x45", 2, 1 },  /* MSIRDYIE: MSI ready interrupt enable */
   { "\x21\x32\x52\x11\x92\x45", 3, 1 },  /* HSIRDYIE: HSI ready interrupt enable */
   { "\x21\x31\x52\x11\x92\x45", 4, 1 },  /* HSERDYIE: HSE ready interrupt enable */
   { "\x40\xc3\x12\x11\x92\x45", 5, 1 },  /* PLLRDYIE: PLL ready interrupt enable */
   { "\x40\xc3\x13\x04\x97\x12\x11\x92\x45", 6, 1 },  /* PLLSAI1RDYIE: PLLSAI1 ready interrupt
              enable */
   { "\x31\x31\x43\x4d\x32\x45", 9, 1 },  /* LSECSSIE: LSE clock security system interrupt
              enable */
   { "\x21\x32\x5f\x8d\x21\x19\x24\x50", 10, 1 },  /* HSI48RDYIE: HSI48 ready interrupt
              enable */
};

const Field_t RCC_CIFR_fields[] = {
   { "\x31\x32\x52\x11\x91\x80", 0, 1 },  /* LSIRDYF: LSI ready interrupt flag */
   { "\x31\x31\x52\x11\x91\x80", 1, 1 },  /* LSERDYF: LSE ready interrupt flag */
   { "\x35\x32\x52\x11\x91\x80", 2, 1 },  /* MSIRDYF: MSI ready interrupt flag */
   { "\x21\x32\x52\x11\x91\x80", 3, 1 },  /* HSIRDYF: HSI ready interrupt flag */
   { "\x21\x31\x52\x11\x91\x80", 4, 1 },  /* HSERDYF: HSE ready interrupt flag */
   { "\x40\xc3\x12\x11\x91\x80", 5, 1 },  /* PLLRDYF: PLL ready interrupt flag */
   { "\x40\xc3\x13\x04\x97\x12\x11\x91\x80", 6, 1 },  /* PLLSAI1RDYF: PLLSAI1 ready interrupt
              flag */
   { "\x0d\x34\xc6", 8, 1 },  /* CSSF: Clock security system interrupt
              flag */
   { "\x31\x31\x43\x4d\x31\x80", 9, 1 },  /* LSECSSF: LSE Clock security system interrupt
              flag */
   { "\x21\x32\x5f\x8d\x21\x19\x18", 10, 1 },  /* HSI48RDYF: HSI48 ready interrupt flag */
};

const Field_t RCC_CICR_fields[] = {
   { "\x31\x32\x52\x11\x90\xc0", 0, 1 },  /* LSIRDYC: LSI ready interrupt clear */
   { "\x31\x31\x52\x11\x90\xc0", 1, 1 },  /* LSERDYC: LSE ready interrupt clear */
   { "\x35\x32\x52\x11\x90\xc0", 2, 1 },  /* MSIRDYC: MSI ready interrupt clear */
   { "\x21\x32\x52\x11\x90\xc0", 3, 1 },  /* HSIRDYC: HSI ready interrupt clear */
   { "\x21\x31\x52\x11\x90\xc0", 4, 1 },  /* HSERDYC: HSE ready interrupt clear */
   { "\x40\xc3\x12\x11\x90\xc0", 5, 1 },  /* PLLRDYC: PLL ready interrupt clear */
   { "\x40\xc3\x13\x04\x97\x12\x11\x90\xc0", 6, 1 },  /* PLLSAI1RDYC: PLLSAI1 ready interrupt
              clear */
   { "\x0d\x34\xc3", 8, 1 },  /* CSSC: Clock security system interrupt
              clear */
   { "\x31\x31\x43\x4d\x30\xc0", 9, 1 },  /* LSECSSC: LSE Clock security system interrupt
              clear */
   { "\x21\x32\x5f\x8d\x21\x19\x0c", 10, 1 },  /* HSI48RDYC: HSI48 oscillator ready interrupt
              clear */
};

const Field_t RCC_AHB1RSTR_fields[] = {
   { "\x10\xd0\x5c\x49\x35\x00", 0, 1 },  /* DMA1RST: DMA1 reset */
   { "\x10\xd0\x5d\x49\x35\x00", 1, 1 },  /* DMA2RST: DMA2 reset */
   { "\x18\xc0\x53\x21\x24\xd4", 8, 1 },  /* FLASHRST: Flash memory interface
              reset */
   { "\x0d\x20\xd2\x4d\x40", 11, 1 },  /* CRCRST: Reserved */
   { "\x51\x30\xd2\x4d\x40", 16, 1 },  /* TSCRST: Touch Sensing Controller
              reset */
};

const Field_t RCC_AHB2RSTR_fields[] = {
   { "\x1d\x02\x4f\x05\x24\xd4", 0, 1 },  /* GPIOARST: IO port A reset */
   { "\x1d\x02\x4f\x09\x24\xd4", 1, 1 },  /* GPIOBRST: IO port B reset */
   { "\x1d\x02\x4f\x0d\x24\xd4", 2, 1 },  /* GPIOCRST: IO port C reset */
   { "\x1d\x02\x4f\x11\x24\xd4", 3, 1 },  /* GPIODRST: IO port D reset */
   { "\x1d\x02\x4f\x15\x24\xd4", 4, 1 },  /* GPIOERST: IO port E reset */
   { "\x1d\x02\x4f\x21\x24\xd4", 7, 1 },  /* GPIOHRST: IO port H reset */
   { "\x04\x40\xd2\x4d\x40", 13, 1 },  /* ADCRST: ADC reset */
   { "\x04\x54\xd2\x4d\x40", 16, 1 },  /* AESRST: AES hardware accelerator
              reset */
   { "\x48\xe1\xd2\x4d\x40", 18, 1 },  /* RNGRST: Random number generator
              reset */
};

const Field_t RCC_AHB3RSTR_fields[] = {
   { "\x45\x34\x09\x49\x35\x00", 8, 1 },  /* QSPIRST: Quad SPI memory interface
              reset */
};

const Field_t RCC_APB1RSTR1_fields[] = {
   { "\x50\x93\x5d\x49\x35\x00", 0, 1 },  /* TIM2RST: TIM2 timer reset */
   { "\x50\x93\x61\x49\x35\x00", 4, 1 },  /* TIM6RST: TIM6 timer reset */
   { "\x50\x93\x62\x49\x35\x00", 5, 1 },  /* TIM7RST: TIM7 timer reset */
   { "\x30\x31\x12\x4d\x40", 9, 1 },  /* LCDRST: LCD interface reset */
   { "\x4d\x02\x5d\x49\x35\x00", 14, 1 },  /* SPI2RST: SPI2 reset */
   { "\x4d\x02\x5e\x49\x35\x00", 15, 1 },  /* SPI3RST: SPI3 reset */
   { "\x55\x30\x52\x51\xd4\x93\x50", 17, 1 },  /* USART2RST: USART2 reset */
   { "\x55\x30\x52\x51\xc4\x93\x50", 18, 1 },  /* USART1RST: USART1 reset */
   { "\x25\xd0\xdc\x49\x35\x00", 21, 1 },  /* I2C1RST: I2C1 reset */
   { "\x25\xd0\xde\x49\x35\x00", 23, 1 },  /* I2C3RST: I2C3 reset */
   { "\x0c\x13\x9c\x49\x35\x00", 25, 1 },  /* CAN1RST: CAN1 reset */
   { "\x41\x74\x92\x4d\x40", 28, 1 },  /* PWRRST: Power interface reset */
   { "\x10\x10\xdc\x49\x35\x00", 29, 1 },  /* DAC1RST: DAC1 interface reset */
   { "\x3d\x00\x4d\x41\x24\xd4", 30, 1 },  /* OPAMPRST: OPAMP interface reset */
   { "\x31\x05\x09\x35\xc4\x93\x50", 31, 1 },  /* LPTIM1RST: Low Power Timer 1 reset */
};

const Field_t RCC_APB1RSTR2_fields[] = {
   { "\x31\x05\x41\x49\x47\x12\x4d\x40", 0, 1 },  /* LPUART1RST: Low-power UART 1 reset */
   { "\x4d\x74\x0d\x25\xc4\x93\x50", 2, 1 },  /* SWPMI1RST: Single wire protocol reset */
   { "\x31\x05\x09\x35\xd4\x93\x50", 5, 1 },  /* LPTIM2RST: Low-power timer 2 reset */
};

const Field_t RCC_APB2RSTR_fields[] = {
   { "\x4d\x94\xc3\x18\x74\x93\x50", 0, 1 },  /* SYSCFGRST: System configuration (SYSCFG)
              reset */
   { "\x4c\x43\x4d\x0d\x24\xd4", 10, 1 },  /* SDMMCRST: SDMMC reset */
   { "\x50\x93\x5c\x49\x35\x00", 11, 1 },  /* TIM1RST: TIM1 timer reset */
   { "\x4d\x02\x5c\x49\x35\x00", 12, 1 },  /* SPI1RST: SPI1 reset */
   { "\x55\x30\x52\x51\xc4\x93\x50", 14, 1 },  /* USART1RST: USART1 reset */
   { "\x50\x93\x5c\x81\x24\xd4", 16, 1 },  /* TIM15RST: TIM15 timer reset */
   { "\x50\x93\x5c\x85\x24\xd4", 17, 1 },  /* TIM16RST: TIM16 timer reset */
   { "\x4c\x12\x5c\x49\x35\x00", 21, 1 },  /* SAI1RST: Serial audio interface 1 (SAI1)
              reset */
};

const Field_t RCC_AHB1ENR_fields[] = {
   { "\x10\xd0\x5c\x14\xe0", 0, 1 },  /* DMA1EN: DMA1 clock enable */
   { "\x10\xd0\x5d\x14\xe0", 1, 1 },  /* DMA2EN: DMA2 clock enable */
   { "\x18\xc0\x53\x20\x53\x80", 8, 1 },  /* FLASHEN: Flash memory interface clock
              enable */
   { "\x0d\x20\xc5\x38", 11, 1 },  /* CRCEN: Reserved */
   { "\x51\x30\xc5\x38", 16, 1 },  /* TSCEN: Touch Sensing Controller clock
              enable */
};

const Field_t RCC_AHB2ENR_fields[] = {
   { "\x1d\x02\x4f\x04\x53\x80", 0, 1 },  /* GPIOAEN: IO port A clock enable */
   { "\x1d\x02\x4f\x08\x53\x80", 1, 1 },  /* GPIOBEN: IO port B clock enable */
   { "\x1d\x02\x4f\x0c\x53\x80", 2, 1 },  /* GPIOCEN: IO port C clock enable */
   { "\x1d\x02\x4f\x10\x53\x80", 3, 1 },  /* GPIODEN: IO port D clock enable */
   { "\x1d\x02\x4f\x14\x53\x80", 4, 1 },  /* GPIOEEN: IO port E clock enable */
   { "\x1d\x02\x4f\x20\x53\x80", 7, 1 },  /* GPIOHEN: IO port H clock enable */
   { "\x04\x40\xc5\x38", 13, 1 },  /* ADCEN: ADC clock enable */
   { "\x04\x54\xc5\x38", 16, 1 },  /* AESEN: AES accelerator clock
              enable */
   { "\x48\xe1\xc5\x38", 18, 1 },  /* RNGEN: Random Number Generator clock
              enable */
};

const Field_t RCC_AHB3ENR_fields[] = {
   { "\x45\x34\x09\x14\xe0", 8, 1 },  /* QSPIEN: QSPIEN */
};

const Field_t RCC_APB1ENR1_fields[] = {
   { "\x50\x93\x5d\x14\xe0", 0, 1 },  /* TIM2EN: TIM2 timer clock enable */
   { "\x50\x93\x61\x14\xe0", 4, 1 },  /* TIM6EN: TIM6 timer clock enable */
   { "\x50\x93\x62\x14\xe0", 5, 1 },  /* TIM7EN: TIM7 timer clock enable */
   { "\x30\x31\x05\x38", 9, 1 },  /* LCDEN: LCD clock enable */
   { "\x49\x40\xc1\x40\x21\x4e", 10, 1 },  /* RTCAPBEN: RTC APB clock enable */
   { "\x5d\x71\x07\x14\xe0", 11, 1 },  /* WWDGEN: Window watchdog clock
              enable */
   { "\x4d\x02\x5c\x14\xe0", 14, 1 },  /* SPI1EN: SPI1 clock enable */
   { "\x4d\x02\x5e\x14\xe0", 15, 1 },  /* SPI3EN: SPI3 clock enable */
   { "\x55\x30\x52\x51\xd1\x4e", 17, 1 },  /* USART2EN: USART2 clock enable */
   { "\x55\x30\x52\x51\xc1\x4e", 18, 1 },  /* USART1EN: USART1 clock enable */
   { "\x25\xd0\xdc\x14\xe0", 21, 1 },  /* I2C1EN: I2C1 clock enable */
   { "\x25\xd0\xde\x14\xe0", 23, 1 },  /* I2C3EN: I2C3 clock enable */
   { "\x0d\x24\xc5\x38", 24, 1 },  /* CRSEN: CRS clock enable */
   { "\x0c\x13\x9c\x14\xe0", 25, 1 },  /* CAN1EN: CAN1 clock enable */
   { "\x55\x30\x86", 26, 1 },  /* USBF: USB FS clock enable */
   { "\x41\x74\x85\x38", 28, 1 },  /* PWREN: Power interface clock
              enable */
   { "\x10\x10\xdc\x14\xe0", 29, 1 },  /* DAC1EN: DAC1 interface clock
              enable */
   { "\x3d\x00\x4d\x40\x53\x80", 30, 1 },  /* OPAMPEN: OPAMP interface clock
              enable */
   { "\x31\x05\x09\x35\xc1\x4e", 31, 1 },  /* LPTIM1EN: Low power timer 1 clock
              enable */
};

const Field_t RCC_APB1ENR2_fields[] = {
   { "\x31\x05\x41\x49\x47\x05\x38", 0, 1 },  /* LPUART1EN: Low power UART 1 clock
              enable */
   { "\x4d\x74\x0d\x25\xc1\x4e", 2, 1 },  /* SWPMI1EN: Single wire protocol clock
              enable */
   { "\x31\x05\x09\x35\xd1\x4e", 5, 1 },  /* LPTIM2EN: LPTIM2EN */
};

const Field_t RCC_APB2ENR_fields[] = {
   { "\x4d\x94\xc3\x18\x71\x4e", 0, 1 },  /* SYSCFGEN: SYSCFG clock enable */
   { "\x18\x94\x85\x5c\x13\x0c\x14\xe0", 7, 1 },  /* FIREWALLEN: Firewall clock enable */
   { "\x4c\x43\x4d\x0c\x53\x80", 10, 1 },  /* SDMMCEN: SDMMC clock enable */
   { "\x50\x93\x5c\x14\xe0", 11, 1 },  /* TIM1EN: TIM1 timer clock enable */
   { "\x4d\x02\x5c\x14\xe0", 12, 1 },  /* SPI1EN: SPI1 clock enable */
   { "\x55\x30\x52\x51\xc1\x4e", 14, 1 },  /* USART1EN: USART1clock enable */
   { "\x50\x93\x5c\x80\x53\x80", 16, 1 },  /* TIM15EN: TIM15 timer clock enable */
   { "\x50\x93\x5c\x84\x53\x80", 17, 1 },  /* TIM16EN: TIM16 timer clock enable */
   { "\x4c\x12\x5c\x14\xe0", 21, 1 },  /* SAI1EN: SAI1 clock enable */
};

const Field_t RCC_AHB1SMENR_fields[] = {
   { "\x10\xd0\x5c\x4c\xd1\x4e", 0, 1 },  /* DMA1SMEN: DMA1 clocks enable during Sleep and Stop
              modes */
   { "\x10\xd0\x5d\x4c\xd1\x4e", 1, 1 },  /* DMA2SMEN: DMA2 clocks enable during Sleep and Stop
              modes */
   { "\x18\xc0\x53\x21\x33\x45\x38", 8, 1 },  /* FLASHSMEN: Flash memory interface clocks enable
              during Sleep and Stop modes */
   { "\x4d\x20\x4d\x71\x33\x45\x38", 9, 1 },  /* SRAM1SMEN: SRAM1 interface clocks enable during
              Sleep and Stop modes */
   { "\x0d\x20\xd3\x34\x53\x80", 11, 1 },  /* CRCSMEN: CRCSMEN */
   { "\x51\x30\xd3\x34\x53\x80", 16, 1 },  /* TSCSMEN: Touch Sensing Controller clocks enable
              during Sleep and Stop modes */
};

const Field_t RCC_AHB2SMENR_fields[] = {
   { "\x1d\x02\x4f\x05\x33\x45\x38", 0, 1 },  /* GPIOASMEN: IO port A clocks enable during Sleep and
              Stop modes */
   { "\x1d\x02\x4f\x09\x33\x45\x38", 1, 1 },  /* GPIOBSMEN: IO port B clocks enable during Sleep and
              Stop modes */
   { "\x1d\x02\x4f\x0d\x33\x45\x38", 2, 1 },  /* GPIOCSMEN: IO port C clocks enable during Sleep and
              Stop modes */
   { "\x1d\x02\x4f\x11\x33\x45\x38", 3, 1 },  /* GPIODSMEN: IO port D clocks enable during Sleep and
              Stop modes */
   { "\x1d\x02\x4f\x15\x33\x45\x38", 4, 1 },  /* GPIOESMEN: IO port E clocks enable during Sleep and
              Stop modes */
   { "\x1d\x02\x4f\x21\x33\x45\x38", 7, 1 },  /* GPIOHSMEN: IO port H clocks enable during Sleep and
              Stop modes */
   { "\x4d\x20\x4d\x75\x33\x45\x38", 9, 1 },  /* SRAM2SMEN: SRAM2 interface clocks enable during
              Sleep and Stop modes */
   { "\x04\x40\xc6\x4d\x33\x45\x38", 13, 1 },  /* ADCFSSMEN: ADC clocks enable during Sleep and Stop
              modes */
   { "\x04\x54\xd3\x34\x53\x80", 16, 1 },  /* AESSMEN: AES accelerator clocks enable during
              Sleep and Stop modes */
   { "\x48\xe1\xd3\x34\x53\x80", 18, 1 },  /* RNGSMEN: Random Number Generator clocks enable
              during Sleep and Stop modes */
};

const Field_t RCC_AHB3SMENR_fields[] = {
   { "\x45\x34\x09\x4c\xd1\x4e", 8, 1 },  /* QSPISMEN: QSPISMEN */
};

const Field_t RCC_APB1SMENR1_fields[] = {
   { "\x50\x93\x5d\x4c\xd1\x4e", 0, 1 },  /* TIM2SMEN: TIM2 timer clocks enable during Sleep
              and Stop modes */
   { "\x50\x93\x61\x4c\xd1\x4e", 4, 1 },  /* TIM6SMEN: TIM6 timer clocks enable during Sleep
              and Stop modes */
   { "\x50\x93\x62\x4c\xd1\x4e", 5, 1 },  /* TIM7SMEN: TIM7 timer clocks enable during Sleep
              and Stop modes */
   { "\x30\x31\x13\x34\x53\x80", 9, 1 },  /* LCDSMEN: LCD clocks enable during Sleep and Stop
              modes */
   { "\x49\x40\xc1\x40\x24\xcd\x14\xe0", 10, 1 },  /* RTCAPBSMEN: RTC APB clock enable during Sleep and
              Stop modes */
   { "\x5d\x71\x07\x4c\xd1\x4e", 11, 1 },  /* WWDGSMEN: Window watchdog clocks enable during
              Sleep and Stop modes */
   { "\x4d\x02\x5d\x4c\xd1\x4e", 14, 1 },  /* SPI2SMEN: SPI2 clocks enable during Sleep and Stop
              modes */
   { "\x4d\x07\x93\x34\x53\x80", 15, 1 },  /* SP3SMEN: SPI3 clocks enable during Sleep and Stop
              modes */
   { "\x55\x30\x52\x51\xc4\xcd\x14\xe0", 17, 1 },  /* USART1SMEN: USART1 clocks enable during Sleep and
              Stop modes */
   { "\x55\x30\x52\x51\xd4\xcd\x14\xe0", 18, 1 },  /* USART2SMEN: USART2 clocks enable during Sleep and
              Stop modes */
   { "\x25\xd0\xdc\x4c\xd1\x4e", 21, 1 },  /* I2C1SMEN: I2C1 clocks enable during Sleep and Stop
              modes */
   { "\x25\xd0\xde\x4c\xd1\x4e", 23, 1 },  /* I2C3SMEN: I2C3 clocks enable during Sleep and Stop
              modes */
   { "\x0c\x13\x9c\x4c\xd1\x4e", 25, 1 },  /* CAN1SMEN: CAN1 clocks enable during Sleep and Stop
              modes */
   { "\x55\x30\x86\x4d\x33\x45\x38", 26, 1 },  /* USBFSSMEN: USB FS clock enable during Sleep and
              Stop modes */
   { "\x41\x74\x93\x34\x53\x80", 28, 1 },  /* PWRSMEN: Power interface clocks enable during
              Sleep and Stop modes */
   { "\x10\x10\xdc\x4c\xd1\x4e", 29, 1 },  /* DAC1SMEN: DAC1 interface clocks enable during
              Sleep and Stop modes */
   { "\x3d\x00\x4d\x41\x33\x45\x38", 30, 1 },  /* OPAMPSMEN: OPAMP interface clocks enable during
              Sleep and Stop modes */
   { "\x31\x05\x09\x35\xc4\xcd\x14\xe0", 31, 1 },  /* LPTIM1SMEN: Low power timer 1 clocks enable during
              Sleep and Stop modes */
};

const Field_t RCC_APB1SMENR2_fields[] = {
   { "\x31\x05\x41\x49\x47\x13\x34\x53\x80", 0, 1 },  /* LPUART1SMEN: Low power UART 1 clocks enable during
              Sleep and Stop modes */
   { "\x4d\x74\x0d\x25\xc4\xcd\x14\xe0", 2, 1 },  /* SWPMI1SMEN: Single wire protocol clocks enable
              during Sleep and Stop modes */
   { "\x31\x05\x09\x35\xd4\xcd\x14\xe0", 5, 1 },  /* LPTIM2SMEN: LPTIM2SMEN */
};

const Field_t RCC_APB2SMENR_fields[] = {
   { "\x4d\x94\xc3\x18\x74\xcd\x14\xe0", 0, 1 },  /* SYSCFGSMEN: SYSCFG clocks enable during Sleep and
              Stop modes */
   { "\x4c\x43\x4d\x0d\x33\x45\x38", 10, 1 },  /* SDMMCSMEN: SDMMC clocks enable during Sleep and
              Stop modes */
   { "\x50\x93\x5c\x4c\xd1\x4e", 11, 1 },  /* TIM1SMEN: TIM1 timer clocks enable during Sleep
              and Stop modes */
   { "\x4d\x02\x5c\x4c\xd1\x4e", 12, 1 },  /* SPI1SMEN: SPI1 clocks enable during Sleep and Stop
              modes */
   { "\x55\x30\x52\x51\xc4\xcd\x14\xe0", 14, 1 },  /* USART1SMEN: USART1clocks enable during Sleep and
              Stop modes */
   { "\x50\x93\x5c\x81\x33\x45\x38", 16, 1 },  /* TIM15SMEN: TIM15 timer clocks enable during Sleep
              and Stop modes */
   { "\x50\x93\x5c\x85\x33\x45\x38", 17, 1 },  /* TIM16SMEN: TIM16 timer clocks enable during Sleep
              and Stop modes */
   { "\x4c\x12\x5c\x4c\xd1\x4e", 21, 1 },  /* SAI1SMEN: SAI1 clocks enable during Sleep and Stop
              modes */
};

const Field_t RCC_CCIPR_fields[] = {
   { "\x55\x30\x52\x51\xc4\xc5\x30", 0, 2 },  /* USART1SEL: USART1 clock source
              selection */
   { "\x55\x30\x52\x51\xd4\xc5\x30", 2, 2 },  /* USART2SEL: USART2 clock source
              selection */
   { "\x31\x05\x41\x49\x47\x13\x14\xc0", 10, 2 },  /* LPUART1SEL: LPUART1 clock source
              selection */
   { "\x25\xd0\xdc\x4c\x53\x00", 12, 2 },  /* I2C1SEL: I2C1 clock source
              selection */
   { "\x25\xd0\xde\x4c\x53\x00", 16, 2 },  /* I2C3SEL: I2C3 clock source
              selection */
   { "\x31\x05\x09\x35\xc4\xc5\x30", 18, 2 },  /* LPTIM1SEL: Low power timer 1 clock source
              selection */
   { "\x31\x05\x09\x35\xd4\xc5\x30", 20, 2 },  /* LPTIM2SEL: Low power timer 2 clock source
              selection */
   { "\x4c\x12\x5c\x4c\x53\x00", 22, 2 },  /* SAI1SEL: SAI1 clock source
              selection */
   { "\x0c\xc2\xdf\x8d\x31\x4c", 26, 2 },  /* CLK48SEL: 48 MHz clock source
              selection */
   { "\x04\x40\xd3\x14\xc0", 28, 2 },  /* ADCSEL: ADCs clock source
              selection */
   { "\x4d\x74\x0d\x25\xc4\xc5\x30", 30, 1 },  /* SWPMI1SEL: SWPMI1 clock source
              selection */
};

const Field_t RCC_BDCR_fields[] = {
   { "\x31\x31\x4f\x38", 0, 1 },  /* LSEON: LSE oscillator enable */
   { "\x31\x31\x52\x11\x90", 1, 1 },  /* LSERDY: LSE oscillator ready */
   { "\x31\x31\x42\x65\x00", 2, 1 },  /* LSEBYP: LSE oscillator bypass */
   { "\x31\x31\x44\x49\x60", 3, 2 },  /* LSEDRV: SE oscillator drive
              capability */
   { "\x31\x31\x43\x4d\x33\xce", 5, 1 },  /* LSECSSON: LSECSSON */
   { "\x31\x31\x43\x4d\x31\x00", 6, 1 },  /* LSECSSD: LSECSSD */
   { "\x49\x40\xd3\x14\xc0", 8, 2 },  /* RTCSEL: RTC clock source selection */
   { "\x49\x40\xc5\x38", 15, 1 },  /* RTCEN: RTC clock enable */
   { "\x08\x44\x93\x50", 16, 1 },  /* BDRST: Backup domain software
              reset */
   { "\x31\x30\xcf\x14\xe0", 24, 1 },  /* LSCOEN: Low speed clock output
              enable */
   { "\x31\x30\xcf\x4c\x53\x00", 25, 1 },  /* LSCOSEL: Low speed clock output
              selection */
};

const Field_t RCC_CSR_fields[] = {
   { "\x31\x32\x4f\x38", 0, 1 },  /* LSION: LSI oscillator enable */
   { "\x31\x32\x52\x11\x90", 1, 1 },  /* LSIRDY: LSI oscillator ready */
   { "\x35\x32\x53\x48\x13\x87\x14", 8, 4 },  /* MSISRANGE: SI range after Standby
              mode */
   { "\x48\xd5\x86", 23, 1 },  /* RMVF: Remove reset flag */
   { "\x18\x94\x85\x5c\x13\x0c\x49\x35\x06", 24, 1 },  /* FIREWALLRSTF: Firewall reset flag */
   { "\x3c\x23\x12\x4d\x41\x80", 25, 1 },  /* OBLRSTF: Option byte loader reset
              flag */
   { "\x40\x93\x92\x4d\x41\x80", 26, 1 },  /* PINRSTF: Pin reset flag */
   { "\x08\xf4\x92\x4d\x41\x80", 27, 1 },  /* BORRSTF: BOR flag */
   { "\x4c\x65\x12\x4d\x41\x80", 28, 1 },  /* SFTRSTF: Software reset flag */
   { "\x25\x71\x07\x49\x35\x06", 29, 1 },  /* IWDGRSTF: Independent window watchdog reset
              flag */
   { "\x5d\x71\x07\x49\x35\x06", 30, 1 },  /* WWDGRSTF: Window watchdog reset flag */
   { "\x31\x05\xd2\x4d\x41\x80", 31, 1 },  /* LPWRSTF: Low-power reset flag */
};

const Register_t RCC_registers[] = {
   {"\x0d\x20", 0, 32, 0, RCC_CR_fields, 17}, /* CR: Clock control register */
   {"\x24\x34\xc3\x48", 4, 32, 0, RCC_ICSCR_fields, 4}, /* ICSCR: Internal clock sources calibration
          register */
   {"\x0c\x61\xd2", 8, 32, 0, RCC_CFGR_fields, 8}, /* CFGR: Clock configuration register */
   {"\x40\xc3\x03\x18\x74\x80", 12, 32, 0, RCC_PLLCFGR_fields, 9}, /* PLLCFGR: PLL configuration register */
   {"\x40\xc3\x13\x04\x97\x03\x18\x74\x80", 16, 32, 0, RCC_PLLSAI1CFGR_fields, 7}, /* PLLSAI1CFGR: PLLSAI1 configuration register */
   {"\x0c\x91\x52", 24, 32, 0, RCC_CIER_fields, 9}, /* CIER: Clock interrupt enable
          register */
   {"\x0c\x91\x92", 28, 32, 0, RCC_CIFR_fields, 10}, /* CIFR: Clock interrupt flag register */
   {"\x0c\x90\xd2", 32, 32, 0, RCC_CICR_fields, 10}, /* CICR: Clock interrupt clear register */
   {"\x04\x80\x9c\x49\x35\x12", 40, 32, 0, RCC_AHB1RSTR_fields, 5}, /* AHB1RSTR: AHB1 peripheral reset register */
   {"\x04\x80\x9d\x49\x35\x12", 44, 32, 0, RCC_AHB2RSTR_fields, 9}, /* AHB2RSTR: AHB2 peripheral reset register */
   {"\x04\x80\x9e\x49\x35\x12", 48, 32, 0, RCC_AHB3RSTR_fields, 1}, /* AHB3RSTR: AHB3 peripheral reset register */
   {"\x05\x00\x9c\x49\x35\x12\x70", 56, 32, 0, RCC_APB1RSTR1_fields, 15}, /* APB1RSTR1: APB1 peripheral reset register
          1 */
   {"\x05\x00\x9c\x49\x35\x12\x74", 60, 32, 0, RCC_APB1RSTR2_fields, 3}, /* APB1RSTR2: APB1 peripheral reset register
          2 */
   {"\x05\x00\x9d\x49\x35\x12", 64, 32, 0, RCC_APB2RSTR_fields, 8}, /* APB2RSTR: APB2 peripheral reset register */
   {"\x04\x80\x9c\x14\xe4\x80", 72, 32, 0, RCC_AHB1ENR_fields, 5}, /* AHB1ENR: AHB1 peripheral clock enable
          register */
   {"\x04\x80\x9d\x14\xe4\x80", 76, 32, 0, RCC_AHB2ENR_fields, 9}, /* AHB2ENR: AHB2 peripheral clock enable
          register */
   {"\x04\x80\x9e\x14\xe4\x80", 80, 32, 0, RCC_AHB3ENR_fields, 1}, /* AHB3ENR: AHB3 peripheral clock enable
          register */
   {"\x05\x00\x9c\x14\xe4\x9c", 88, 32, 0, RCC_APB1ENR1_fields, 19}, /* APB1ENR1: APB1ENR1 */
   {"\x05\x00\x9c\x14\xe4\x9d", 92, 32, 0, RCC_APB1ENR2_fields, 3}, /* APB1ENR2: APB1 peripheral clock enable register
          2 */
   {"\x05\x00\x9d\x14\xe4\x80", 96, 32, 0, RCC_APB2ENR_fields, 9}, /* APB2ENR: APB2ENR */
   {"\x04\x80\x9c\x4c\xd1\x4e\x48", 104, 32, 0, RCC_AHB1SMENR_fields, 6}, /* AHB1SMENR: AHB1 peripheral clocks enable in Sleep and
          Stop modes register */
   {"\x04\x80\x9d\x4c\xd1\x4e\x48", 108, 32, 0, RCC_AHB2SMENR_fields, 10}, /* AHB2SMENR: AHB2 peripheral clocks enable in Sleep and
          Stop modes register */
   {"\x04\x80\x9e\x4c\xd1\x4e\x48", 112, 32, 0, RCC_AHB3SMENR_fields, 1}, /* AHB3SMENR: AHB3 peripheral clocks enable in Sleep and
          Stop modes register */
   {"\x05\x00\x9c\x4c\xd1\x4e\x49\xc0", 120, 32, 0, RCC_APB1SMENR1_fields, 18}, /* APB1SMENR1: APB1SMENR1 */
   {"\x05\x00\x9c\x4c\xd1\x4e\x49\xd0", 124, 32, 0, RCC_APB1SMENR2_fields, 3}, /* APB1SMENR2: APB1 peripheral clocks enable in Sleep and
          Stop modes register 2 */
   {"\x05\x00\x9d\x4c\xd1\x4e\x48", 128, 32, 0, RCC_APB2SMENR_fields, 8}, /* APB2SMENR: APB2SMENR */
   {"\x0c\x32\x50\x48", 136, 32, 0, RCC_CCIPR_fields, 11}, /* CCIPR: CCIPR */
   {"\x08\x40\xd2", 144, 32, 0, RCC_BDCR_fields, 11}, /* BDCR: BDCR */
   {"\x0d\x34\x80", 148, 32, 0, RCC_CSR_fields, 12}, /* CSR: CSR */
};

const Field_t FLASH_ACR_fields[] = {
   { "\x30\x15\x05\x38\x36\x40", 0, 3 },  /* LATENCY: Latency */
   { "\x41\x21\x94\x14\xe0", 8, 1 },  /* PRFTEN: Prefetch enable */
   { "\x24\x31\x4e", 9, 1 },  /* ICEN: Instruction cache enable */
   { "\x10\x31\x4e", 10, 1 },  /* DCEN: Data cache enable */
   { "\x24\x34\x93\x50", 11, 1 },  /* ICRST: Instruction cache reset */
   { "\x10\x34\x93\x50", 12, 1 },  /* DCRST: Data cache reset */
   { "\x49\x53\xa5\x40\x40", 13, 1 },  /* RUN_PD: Flash Power-down mode during Low-power
              run mode */
   { "\x4c\xc1\x45\x42\x54\x04", 14, 1 },  /* SLEEP_PD: Flash Power-down mode during Low-power
              sleep mode */
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
   { "\x40\x70\x45\x49\x20", 5, 1 },  /* PGAERR: Programming alignment
              error */
   { "\x4c\x96\x85\x49\x20", 6, 1 },  /* SIZERR: Size error */
   { "\x40\x74\xc5\x49\x20", 7, 1 },  /* PGSERR: Programming sequence error */
   { "\x34\x94\xc5\x49\x20", 8, 1 },  /* MISERR: Fast programming data miss
              error */
   { "\x18\x14\xd4\x15\x24\x80", 9, 1 },  /* FASTERR: Fast programming error */
   { "\x48\x41\x52\x48", 14, 1 },  /* RDERR: PCROP read error */
   { "\x3d\x05\x16\x15\x24\x80", 15, 1 },  /* OPTVERR: Option validity error */
   { "\x09\x36\x40", 16, 1 },  /* BSY: Busy */
};

const Field_t FLASH_CR_fields[] = {
   { "\x40\x70", 0, 1 },  /* PG: Programming */
   { "\x40\x54\x80", 1, 1 },  /* PER: Page erase */
   { "\x34\x54\x9c", 2, 1 },  /* MER1: Bank 1 Mass erase */
   { "\x40\xe0\x80", 3, 8 },  /* PNB: Page number */
   { "\x08\xb1\x52", 11, 1 },  /* BKER: Bank erase */
   { "\x34\x54\x9d", 15, 1 },  /* MER2: Bank 2 Mass erase */
   { "\x4d\x40\x52\x50", 16, 1 },  /* START: Start */
   { "\x3d\x05\x13\x51\x25\x00", 17, 1 },  /* OPTSTRT: Options modification start */
   { "\x19\x35\x10\x1c", 18, 1 },  /* FSTPG: Fast programming */
   { "\x14\xf4\x09\x14", 24, 1 },  /* EOPIE: End of operation interrupt
              enable */
   { "\x15\x24\x89\x14", 25, 1 },  /* ERRIE: Error interrupt enable */
   { "\x48\x41\x52\x48\x91\x40", 26, 1 },  /* RDERRIE: PCROP read error interrupt
              enable */
   { "\x3c\x23\x25\x30\x15\x4e\x0c\x80", 27, 1 },  /* OBL_LAUNCH: Force the option byte
              loading */
   { "\x3d\x05\x0c\x3c\x32\xc0", 30, 1 },  /* OPTLOCK: Options Lock */
   { "\x30\xf0\xcb", 31, 1 },  /* LOCK: FLASH_CR Lock */
};

const Field_t FLASH_ECCR_fields[] = {
   { "\x04\x41\x12\x94\x50\xc3", 0, 19 },  /* ADDR_ECC: ECC fail address */
   { "\x08\xb9\x45\x0c\x30", 19, 1 },  /* BK_ECC: ECC fail bank */
   { "\x4d\x94\xc6\x94\x50\xc3", 20, 1 },  /* SYSF_ECC: System Flash ECC fail */
   { "\x14\x30\xc9\x14", 24, 1 },  /* ECCIE: ECC correction interrupt
              enable */
   { "\x14\x30\xc3", 30, 1 },  /* ECCC: ECC correction */
   { "\x14\x30\xc4", 31, 1 },  /* ECCD: ECC detection */
};

const Field_t FLASH_OPTR_fields[] = {
   { "\x48\x44\x00", 0, 8 },  /* RDP: Read protection level */
   { "\x08\xf4\xa5\x30\x55\x80", 8, 3 },  /* BOR_LEV: BOR reset Level */
   { "\x39\x24\xd4\x95\x35\x0f\x40", 12, 1 },  /* nRST_STOP: nRST_STOP */
   { "\x39\x24\xd4\x95\x35\x04\x09\x90", 13, 1 },  /* nRST_STDBY: nRST_STDBY */
   { "\x24\x45\xc7\x95\x35\xc0", 16, 1 },  /* IDWG_SW: Independent watchdog
              selection */
   { "\x25\x71\x07\x95\x35\x0f\x40", 17, 1 },  /* IWDG_STOP: Independent watchdog counter freeze in
              Stop mode */
   { "\x25\x71\x07\x95\x35\x04\x09\x90", 18, 1 },  /* IWDG_STDBY: Independent watchdog counter freeze in
              Standby mode */
   { "\x5d\x71\x07\x95\x35\xc0", 19, 1 },  /* WWDG_SW: Window watchdog selection */
   { "\x08\x60\x9d", 20, 1 },  /* BFB2: Dual-bank boot */
   { "\x11\x50\x4c\x08\x13\x8b", 21, 1 },  /* DUALBANK: Dual-Bank on 512 KB or 256 KB Flash
              memory devices */
   { "\x38\x23\xcf\x51\xc0", 23, 1 },  /* nBOOT1: Boot configuration */
   { "\x4d\x20\x4d\x76\x54\x05", 24, 1 },  /* SRAM2_PE: SRAM2 parity check enable */
   { "\x4d\x20\x4d\x76\x54\x93\x50", 25, 1 },  /* SRAM2_RST: SRAM2 Erase when system
              reset */
};

const Field_t FLASH_PCROP1SR_fields[] = {
   { "\x40\x34\x8f\x41\xc9\x53\x51\x25\x00", 0, 16 },  /* PCROP1_STRT: Bank 1 PCROP area start
              offset */
};

const Field_t FLASH_PCROP1ER_fields[] = {
   { "\x40\x34\x8f\x41\xc9\x45\x38\x40", 0, 16 },  /* PCROP1_END: Bank 1 PCROP area end
              offset */
   { "\x40\x34\x8f\x42\x54\x84\x40", 31, 1 },  /* PCROP_RDP: PCROP area preserved when RDP level
              decreased */
};

const Field_t FLASH_WRP1AR_fields[] = {
   { "\x5d\x24\x1c\x06\x54\xd4\x49\x40", 0, 8 },  /* WRP1A_STRT: Bank 1 WRP first area
              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã¢â‚¬Å“AÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬
              start offset */
   { "\x5d\x24\x1c\x06\x51\x4e\x10", 16, 8 },  /* WRP1A_END: Bank 1 WRP first area A end
              offset */
};

const Field_t FLASH_WRP1BR_fields[] = {
   { "\x5d\x24\x1c\x0a\x51\x4e\x10", 0, 8 },  /* WRP1B_END: Bank 1 WRP second area B start
              offset */
   { "\x5d\x24\x1c\x0a\x54\xd4\x49\x40", 16, 8 },  /* WRP1B_STRT: Bank 1 WRP second area B end
              offset */
};

const Field_t FLASH_PCROP2SR_fields[] = {
   { "\x40\x34\x8f\x41\xd9\x53\x51\x25\x00", 0, 16 },  /* PCROP2_STRT: Bank 2 PCROP area start
              offset */
};

const Field_t FLASH_PCROP2ER_fields[] = {
   { "\x40\x34\x8f\x41\xd9\x45\x38\x40", 0, 16 },  /* PCROP2_END: Bank 2 PCROP area end
              offset */
};

const Field_t FLASH_WRP2AR_fields[] = {
   { "\x5d\x24\x1d\x06\x54\xd4\x49\x40", 0, 8 },  /* WRP2A_STRT: Bank 2 WRP first area A start
              offset */
   { "\x5d\x24\x1d\x06\x51\x4e\x10", 16, 8 },  /* WRP2A_END: Bank 2 WRP first area A end
              offset */
};

const Field_t FLASH_WRP2BR_fields[] = {
   { "\x5d\x24\x1d\x0a\x54\xd4\x49\x40", 0, 8 },  /* WRP2B_STRT: Bank 2 WRP second area B start
              offset */
   { "\x5d\x24\x1d\x0a\x51\x4e\x10", 16, 8 },  /* WRP2B_END: Bank 2 WRP second area B end
              offset */
};

const Register_t FLASH_registers[] = {
   {"\x04\x34\x80", 0, 32, 0, FLASH_ACR_fields, 8}, /* ACR: Access control register */
   {"\x40\x42\xc5\x65\x20", 4, 32, 0, FLASH_PDKEYR_fields, 1}, /* PDKEYR: Power down key register */
   {"\x2c\x56\x52", 8, 32, 0, FLASH_KEYR_fields, 1}, /* KEYR: Flash key register */
   {"\x3d\x05\x0b\x15\x94\x80", 12, 32, 0, FLASH_OPTKEYR_fields, 1}, /* OPTKEYR: Option byte key register */
   {"\x4d\x20", 16, 32, 0, FLASH_SR_fields, 12}, /* SR: Status register */
   {"\x0d\x20", 20, 32, 0, FLASH_CR_fields, 15}, /* CR: Flash control register */
   {"\x14\x30\xd2", 24, 32, 0, FLASH_ECCR_fields, 6}, /* ECCR: Flash ECC register */
   {"\x3d\x05\x12", 32, 32, 0, FLASH_OPTR_fields, 13}, /* OPTR: Flash option register */
   {"\x40\x34\x8f\x41\xc4\xd2", 36, 32, 0, FLASH_PCROP1SR_fields, 1}, /* PCROP1SR: Flash Bank 1 PCROP Start address
          register */
   {"\x40\x34\x8f\x41\xc1\x52", 40, 32, 0, FLASH_PCROP1ER_fields, 2}, /* PCROP1ER: Flash Bank 1 PCROP End address
          register */
   {"\x5d\x24\x1c\x05\x20", 44, 32, 0, FLASH_WRP1AR_fields, 2}, /* WRP1AR: Flash Bank 1 WRP area A address
          register */
   {"\x5d\x24\x1c\x09\x20", 48, 32, 0, FLASH_WRP1BR_fields, 2}, /* WRP1BR: Flash Bank 1 WRP area B address
          register */
   {"\x40\x34\x8f\x41\xd4\xd2", 68, 32, 0, FLASH_PCROP2SR_fields, 1}, /* PCROP2SR: Flash Bank 2 PCROP Start address
          register */
   {"\x40\x34\x8f\x41\xd1\x52", 72, 32, 0, FLASH_PCROP2ER_fields, 1}, /* PCROP2ER: Flash Bank 2 PCROP End address
          register */
   {"\x5d\x24\x1d\x05\x20", 76, 32, 0, FLASH_WRP2AR_fields, 2}, /* WRP2AR: Flash Bank 2 WRP area A address
          register */
   {"\x5d\x24\x1d\x09\x20", 80, 32, 0, FLASH_WRP2BR_fields, 2}, /* WRP2BR: Flash Bank 2 WRP area B address
          register */
};

const Field_t CRC_DR_fields[] = {
   { "\x11\x20", 0, 32 },  /* DR: Data register bits */
};

const Field_t CRC_IDR_fields[] = {
   { "\x24\x44\x80", 0, 8 },  /* IDR: General-purpose 8-bit data register
              bits */
};

const Field_t CRC_CR_fields[] = {
   { "\x48\x54\xc5\x50", 0, 1 },  /* RESET: RESET bit */
   { "\x40\xf3\x19\x4c\x96\x85", 3, 2 },  /* POLYSIZE: Polynomial size */
   { "\x48\x55\xa5\x24\xe0", 5, 2 },  /* REV_IN: Reverse input data */
   { "\x48\x55\xa5\x3d\x55\x00", 7, 1 },  /* REV_OUT: Reverse output data */
};

const Field_t CRC_INIT_fields[] = {
   { "\x0d\x20\xe5\x24\xe2\x54", 0, 32 },  /* CRC_INIT: Programmable initial CRC
              value */
};

const Field_t CRC_POL_fields[] = {
   { "\x40\xf3\x19\x38\xf3\x49\x04\xc0\xcf\x14\x61\x89\x0c\x91\x4e\x51\x30", 0, 32 },  /* Polynomialcoefficients: Programmable polynomial */
};

const Register_t CRC_registers[] = {
   {"\x11\x20", 0, 32, 0, CRC_DR_fields, 1}, /* DR: Data register */
   {"\x24\x44\x80", 4, 32, 0, CRC_IDR_fields, 1}, /* IDR: Independent data register */
   {"\x0d\x20", 8, 32, 0, CRC_CR_fields, 4}, /* CR: Control register */
   {"\x24\xe2\x54", 16, 32, 0, CRC_INIT_fields, 1}, /* INIT: Initial CRC value */
   {"\x40\xf3\x00", 20, 32, 0, CRC_POL_fields, 1}, /* POL: polynomial */
};

const Field_t TSC_CR_fields[] = {
   { "\x51\x30\xc5", 0, 1 },  /* TSCE: Touch sensing controller
              enable */
   { "\x4d\x40\x52\x50", 1, 1 },  /* START: Start a new acquisition */
   { "\x04\xd0", 2, 1 },  /* AM: Acquisition mode */
   { "\x4d\x93\x83\x40\xf3\x00", 3, 1 },  /* SYNCPOL: Synchronization pin
              polarity */
   { "\x24\xf1\x05\x18", 4, 1 },  /* IODEF: I/O Default mode */
   { "\x34\x35\x80", 5, 3 },  /* MCV: Max count value */
   { "\x40\x74\x13\x0c", 12, 3 },  /* PGPSC: pulse generator prescaler */
   { "\x4d\x34\x13\x0c", 15, 1 },  /* SSPSC: Spread spectrum prescaler */
   { "\x4d\x31\x40", 16, 1 },  /* SSE: Spread spectrum enable */
   { "\x4d\x31\x00", 17, 7 },  /* SSD: Spread spectrum deviation */
   { "\x0d\x44\x0c", 24, 4 },  /* CTPL: Charge transfer pulse low */
   { "\x0d\x44\x08", 28, 4 },  /* CTPH: Charge transfer pulse high */
};

const Field_t TSC_IER_fields[] = {
   { "\x14\xf0\x49\x14", 0, 1 },  /* EOAIE: End of acquisition interrupt
              enable */
   { "\x34\x31\x49\x14", 1, 1 },  /* MCEIE: Max count error interrupt
              enable */
};

const Field_t TSC_ICR_fields[] = {
   { "\x14\xf0\x49\x0c", 0, 1 },  /* EOAIC: End of acquisition interrupt
              clear */
   { "\x34\x31\x49\x0c", 1, 1 },  /* MCEIC: Max count error interrupt
              clear */
};

const Field_t TSC_ISR_fields[] = {
   { "\x14\xf0\x46", 0, 1 },  /* EOAF: End of acquisition flag */
   { "\x34\x31\x46", 1, 1 },  /* MCEF: Max count error flag */
};

const Field_t TSC_IOHCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 */
};

const Field_t TSC_IOASCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 */
};

const Field_t TSC_IOSCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 */
};

const Field_t TSC_IOCCR_fields[] = {
   { "\x1d\xc9\x49\x3d\xc0", 0, 1 },  /* G1_IO1: G1_IO1 */
   { "\x1d\xc9\x49\x3d\xd0", 1, 1 },  /* G1_IO2: G1_IO2 */
   { "\x1d\xc9\x49\x3d\xe0", 2, 1 },  /* G1_IO3: G1_IO3 */
   { "\x1d\xc9\x49\x3d\xf0", 3, 1 },  /* G1_IO4: G1_IO4 */
   { "\x1d\xd9\x49\x3d\xc0", 4, 1 },  /* G2_IO1: G2_IO1 */
   { "\x1d\xd9\x49\x3d\xd0", 5, 1 },  /* G2_IO2: G2_IO2 */
   { "\x1d\xd9\x49\x3d\xe0", 6, 1 },  /* G2_IO3: G2_IO3 */
   { "\x1d\xd9\x49\x3d\xf0", 7, 1 },  /* G2_IO4: G2_IO4 */
   { "\x1d\xe9\x49\x3d\xc0", 8, 1 },  /* G3_IO1: G3_IO1 */
   { "\x1d\xe9\x49\x3d\xd0", 9, 1 },  /* G3_IO2: G3_IO2 */
   { "\x1d\xe9\x49\x3d\xe0", 10, 1 },  /* G3_IO3: G3_IO3 */
   { "\x1d\xe9\x49\x3d\xf0", 11, 1 },  /* G3_IO4: G3_IO4 */
   { "\x1d\xf9\x49\x3d\xc0", 12, 1 },  /* G4_IO1: G4_IO1 */
   { "\x1d\xf9\x49\x3d\xd0", 13, 1 },  /* G4_IO2: G4_IO2 */
   { "\x1d\xf9\x49\x3d\xe0", 14, 1 },  /* G4_IO3: G4_IO3 */
   { "\x1d\xf9\x49\x3d\xf0", 15, 1 },  /* G4_IO4: G4_IO4 */
   { "\x1e\x09\x49\x3d\xc0", 16, 1 },  /* G5_IO1: G5_IO1 */
   { "\x1e\x09\x49\x3d\xd0", 17, 1 },  /* G5_IO2: G5_IO2 */
   { "\x1e\x09\x49\x3d\xe0", 18, 1 },  /* G5_IO3: G5_IO3 */
   { "\x1e\x09\x49\x3d\xf0", 19, 1 },  /* G5_IO4: G5_IO4 */
   { "\x1e\x19\x49\x3d\xc0", 20, 1 },  /* G6_IO1: G6_IO1 */
   { "\x1e\x19\x49\x3d\xd0", 21, 1 },  /* G6_IO2: G6_IO2 */
   { "\x1e\x19\x49\x3d\xe0", 22, 1 },  /* G6_IO3: G6_IO3 */
   { "\x1e\x19\x49\x3d\xf0", 23, 1 },  /* G6_IO4: G6_IO4 */
   { "\x1e\x29\x49\x3d\xc0", 24, 1 },  /* G7_IO1: G7_IO1 */
   { "\x1e\x29\x49\x3d\xd0", 25, 1 },  /* G7_IO2: G7_IO2 */
   { "\x1e\x29\x49\x3d\xe0", 26, 1 },  /* G7_IO3: G7_IO3 */
   { "\x1e\x29\x49\x3d\xf0", 27, 1 },  /* G7_IO4: G7_IO4 */
   { "\x1e\x39\x49\x3d\xc0", 28, 1 },  /* G8_IO1: G8_IO1 */
   { "\x1e\x39\x49\x3d\xd0", 29, 1 },  /* G8_IO2: G8_IO2 */
   { "\x1e\x39\x49\x3d\xe0", 30, 1 },  /* G8_IO3: G8_IO3 */
   { "\x1e\x39\x49\x3d\xf0", 31, 1 },  /* G8_IO4: G8_IO4 */
};

const Field_t TSC_IOGCSR_fields[] = {
   { "\x1d\xc1\x40", 0, 1 },  /* G1E: Analog I/O group x enable */
   { "\x1d\xd1\x40", 1, 1 },  /* G2E: Analog I/O group x enable */
   { "\x1d\xe1\x40", 2, 1 },  /* G3E: Analog I/O group x enable */
   { "\x1d\xf1\x40", 3, 1 },  /* G4E: Analog I/O group x enable */
   { "\x1e\x01\x40", 4, 1 },  /* G5E: Analog I/O group x enable */
   { "\x1e\x11\x40", 5, 1 },  /* G6E: Analog I/O group x enable */
   { "\x1e\x21\x40", 6, 1 },  /* G7E: Analog I/O group x enable */
   { "\x1e\x31\x40", 7, 1 },  /* G8E: Analog I/O group x enable */
   { "\x1d\xc4\xc0", 16, 1 },  /* G1S: Analog I/O group x status */
   { "\x1d\xd4\xc0", 17, 1 },  /* G2S: Analog I/O group x status */
   { "\x1d\xe4\xc0", 18, 1 },  /* G3S: Analog I/O group x status */
   { "\x1d\xf4\xc0", 19, 1 },  /* G4S: Analog I/O group x status */
   { "\x1e\x04\xc0", 20, 1 },  /* G5S: Analog I/O group x status */
   { "\x1e\x14\xc0", 21, 1 },  /* G6S: Analog I/O group x status */
   { "\x1e\x24\xc0", 22, 1 },  /* G7S: Analog I/O group x status */
   { "\x1e\x34\xc0", 23, 1 },  /* G8S: Analog I/O group x status */
};

const Field_t TSC_IOG1CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG2CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG3CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG4CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG5CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG6CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG7CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Field_t TSC_IOG8CR_fields[] = {
   { "\x0c\xe5\x00", 0, 14 },  /* CNT: Counter value */
};

const Register_t TSC_registers[] = {
   {"\x0d\x20", 0, 32, 0, TSC_CR_fields, 12}, /* CR: control register */
   {"\x24\x54\x80", 4, 32, 0, TSC_IER_fields, 2}, /* IER: interrupt enable register */
   {"\x24\x34\x80", 8, 32, 0, TSC_ICR_fields, 2}, /* ICR: interrupt clear register */
   {"\x25\x34\x80", 12, 32, 0, TSC_ISR_fields, 2}, /* ISR: interrupt status register */
   {"\x24\xf2\x03\x48", 16, 32, 0, TSC_IOHCR_fields, 32}, /* IOHCR: I/O hysteresis control
          register */
   {"\x24\xf0\x53\x0d\x20", 24, 32, 0, TSC_IOASCR_fields, 32}, /* IOASCR: I/O analog switch control
          register */
   {"\x24\xf4\xc3\x48", 32, 32, 0, TSC_IOSCR_fields, 32}, /* IOSCR: I/O sampling control register */
   {"\x24\xf0\xc3\x48", 40, 32, 0, TSC_IOCCR_fields, 32}, /* IOCCR: I/O channel control register */
   {"\x24\xf1\xc3\x4d\x20", 48, 32, 0, TSC_IOGCSR_fields, 16}, /* IOGCSR: I/O group control status
          register */
   {"\x24\xf1\xdc\x0d\x20", 52, 32, 0, TSC_IOG1CR_fields, 1}, /* IOG1CR: I/O group x counter register */
   {"\x24\xf1\xdd\x0d\x20", 56, 32, 0, TSC_IOG2CR_fields, 1}, /* IOG2CR: I/O group x counter register */
   {"\x24\xf1\xde\x0d\x20", 60, 32, 0, TSC_IOG3CR_fields, 1}, /* IOG3CR: I/O group x counter register */
   {"\x24\xf1\xdf\x0d\x20", 64, 32, 0, TSC_IOG4CR_fields, 1}, /* IOG4CR: I/O group x counter register */
   {"\x24\xf1\xe0\x0d\x20", 68, 32, 0, TSC_IOG5CR_fields, 1}, /* IOG5CR: I/O group x counter register */
   {"\x24\xf1\xe1\x0d\x20", 72, 32, 0, TSC_IOG6CR_fields, 1}, /* IOG6CR: I/O group x counter register */
   {"\x24\xf1\xe2\x0d\x20", 76, 32, 0, TSC_IOG7CR_fields, 1}, /* IOG7CR: I/O group x counter register */
   {"\x24\xf1\xe3\x0d\x20", 80, 32, 0, TSC_IOG8CR_fields, 1}, /* IOG8CR: I/O group x counter register */
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

const Field_t GPIOC_MODER_fields[] = {
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

const Field_t GPIOC_OTYPER_fields[] = {
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

const Field_t GPIOC_OSPEEDR_fields[] = {
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

const Field_t GPIOC_PUPDR_fields[] = {
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

const Field_t GPIOC_IDR_fields[] = {
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

const Field_t GPIOC_ODR_fields[] = {
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

const Field_t GPIOC_BSRR_fields[] = {
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

const Field_t GPIOC_LCKR_fields[] = {
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

const Field_t GPIOC_AFRL_fields[] = {
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

const Field_t GPIOC_AFRH_fields[] = {
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

const Register_t GPIOC_registers[] = {
   {"\x34\xf1\x05\x48", 0, 32, 0, GPIOC_MODER_fields, 16}, /* MODER: GPIO port mode register */
   {"\x3d\x46\x50\x15\x20", 4, 32, 0, GPIOC_OTYPER_fields, 16}, /* OTYPER: GPIO port output type register */
   {"\x3d\x34\x05\x14\x44\x80", 8, 32, 0, GPIOC_OSPEEDR_fields, 16}, /* OSPEEDR: GPIO port output speed
          register */
   {"\x41\x54\x04\x48", 12, 32, 0, GPIOC_PUPDR_fields, 16}, /* PUPDR: GPIO port pull-up/pull-down
          register */
   {"\x24\x44\x80", 16, 32, 0, GPIOC_IDR_fields, 16}, /* IDR: GPIO port input data register */
   {"\x3c\x44\x80", 20, 32, 0, GPIOC_ODR_fields, 16}, /* ODR: GPIO port output data register */
   {"\x09\x34\x92", 24, 32, 0, GPIOC_BSRR_fields, 32}, /* BSRR: GPIO port bit set/reset
          register */
   {"\x30\x32\xd2", 28, 32, 0, GPIOC_LCKR_fields, 17}, /* LCKR: GPIO port configuration lock
          register */
   {"\x04\x64\x8c", 32, 32, 0, GPIOC_AFRL_fields, 8}, /* AFRL: GPIO alternate function low
          register */
   {"\x04\x64\x88", 36, 32, 0, GPIOC_AFRH_fields, 8}, /* AFRH: GPIO alternate function high
          register */
};

const Field_t ADC_ISR_fields[] = {
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

const Field_t ADC_IER_fields[] = {
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

const Field_t ADC_CR_fields[] = {
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

const Field_t ADC_CFGR_fields[] = {
   { "\x10\xd0\x45\x38", 0, 1 },  /* DMAEN: DMAEN */
   { "\x10\xd0\x43\x18\x70", 1, 1 },  /* DMACFG: DMACFG */
   { "\x48\x54\xc0", 3, 2 },  /* RES: RES */
   { "\x04\xc2\x47\x38", 5, 1 },  /* ALIGN: ALIGN */
   { "\x15\x85\x13\x14\xc0", 6, 4 },  /* EXTSEL: EXTSEL */
   { "\x15\x85\x05\x38", 10, 2 },  /* EXTEN: EXTEN */
   { "\x3d\x64\x8d\x3c\x40", 12, 1 },  /* OVRMOD: OVRMOD */
   { "\x0c\xf3\x94", 13, 1 },  /* CONT: CONT */
   { "\x05\x55\x04\x31\x90", 14, 1 },  /* AUTDLY: AUTDLY */
   { "\x05\x55\x0f\x18\x60", 15, 1 },  /* AUTOFF: AUTOFF */
   { "\x10\x94\xc3\x14\xe0", 16, 1 },  /* DISCEN: DISCEN */
   { "\x10\x94\xc3\x39\x53\x40", 17, 3 },  /* DISCNUM: DISCNUM */
   { "\x28\x42\x53\x0c\x53\x80", 20, 1 },  /* JDISCEN: JDISCEN */
   { "\x29\x13\x40", 21, 1 },  /* JQM: JQM */
   { "\x05\x71\x1c\x4c\x73\x00", 22, 1 },  /* AWD1SGL: AWD1SGL */
   { "\x05\x71\x1c\x14\xe0", 23, 1 },  /* AWD1EN: AWD1EN */
   { "\x28\x15\xc4\x70\x53\x80", 24, 1 },  /* JAWD1EN: JAWD1EN */
   { "\x28\x15\x54\x3c", 25, 1 },  /* JAUTO: JAUTO */
   { "\x05\x71\x03\x21\xc0\xc8", 26, 5 },  /* AWDCH1CH: AWDCH1CH */
};

const Field_t ADC_CFGR2_fields[] = {
   { "\x48\xf5\x93\x14", 0, 1 },  /* ROVSE: DMAEN */
   { "\x28\xf5\x93\x14", 1, 1 },  /* JOVSE: DMACFG */
   { "\x3d\x64\xd2", 2, 3 },  /* OVSR: RES */
   { "\x3d\x64\xd3", 5, 4 },  /* OVSS: ALIGN */
   { "\x50\xf5\x93", 9, 1 },  /* TOVS: EXTSEL */
   { "\x48\xf5\x93\x34", 10, 1 },  /* ROVSM: EXTEN */
};

const Field_t ADC_SMPR1_fields[] = {
   { "\x4c\xd4\x1c", 3, 3 },  /* SMP1: SMP1 */
   { "\x4c\xd4\x1d", 6, 3 },  /* SMP2: SMP2 */
   { "\x4c\xd4\x1e", 9, 3 },  /* SMP3: SMP3 */
   { "\x4c\xd4\x1f", 12, 3 },  /* SMP4: SMP4 */
   { "\x4c\xd4\x20", 15, 3 },  /* SMP5: SMP5 */
   { "\x4c\xd4\x21", 18, 3 },  /* SMP6: SMP6 */
   { "\x4c\xd4\x22", 21, 3 },  /* SMP7: SMP7 */
   { "\x4c\xd4\x23", 24, 3 },  /* SMP8: SMP8 */
   { "\x4c\xd4\x24", 27, 3 },  /* SMP9: SMP9 */
};

const Field_t ADC_SMPR2_fields[] = {
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

const Field_t ADC_TR1_fields[] = {
   { "\x31\x47\x00", 0, 12 },  /* LT1: LT1 */
   { "\x21\x47\x00", 16, 12 },  /* HT1: HT1 */
};

const Field_t ADC_TR2_fields[] = {
   { "\x31\x47\x40", 0, 8 },  /* LT2: LT2 */
   { "\x21\x47\x40", 16, 8 },  /* HT2: HT2 */
};

const Field_t ADC_TR3_fields[] = {
   { "\x31\x47\x80", 0, 8 },  /* LT3: LT3 */
   { "\x21\x47\x80", 16, 8 },  /* HT3: HT3 */
};

const Field_t ADC_SQR1_fields[] = {
   { "\x31\xe0", 0, 4 },  /* L3: L3 */
   { "\x4d\x17\x00", 6, 5 },  /* SQ1: SQ1 */
   { "\x4d\x17\x40", 12, 5 },  /* SQ2: SQ2 */
   { "\x4d\x17\x80", 18, 5 },  /* SQ3: SQ3 */
   { "\x4d\x17\xc0", 24, 5 },  /* SQ4: SQ4 */
};

const Field_t ADC_SQR2_fields[] = {
   { "\x4d\x18\x00", 0, 5 },  /* SQ5: SQ5 */
   { "\x4d\x18\x40", 6, 5 },  /* SQ6: SQ6 */
   { "\x4d\x18\x80", 12, 5 },  /* SQ7: SQ7 */
   { "\x4d\x18\xc0", 18, 5 },  /* SQ8: SQ8 */
   { "\x4d\x19\x00", 24, 5 },  /* SQ9: SQ9 */
};

const Field_t ADC_SQR3_fields[] = {
   { "\x4d\x17\x1b", 0, 5 },  /* SQ10: SQ10 */
   { "\x4d\x17\x1c", 6, 5 },  /* SQ11: SQ11 */
   { "\x4d\x17\x1d", 12, 5 },  /* SQ12: SQ12 */
   { "\x4d\x17\x1e", 18, 5 },  /* SQ13: SQ13 */
   { "\x4d\x17\x1f", 24, 5 },  /* SQ14: SQ14 */
};

const Field_t ADC_SQR4_fields[] = {
   { "\x4d\x17\x20", 0, 5 },  /* SQ15: SQ15 */
   { "\x4d\x17\x21", 6, 5 },  /* SQ16: SQ16 */
};

const Field_t ADC_DR_fields[] = {
   { "\x48\x51\xd5\x30\x14\x84\x05\x40\x40", 0, 16 },  /* regularDATA: regularDATA */
};

const Field_t ADC_JSQR_fields[] = {
   { "\x28\xc0", 0, 2 },  /* JL: JL */
   { "\x28\x56\x14\x4c\x53\x00", 2, 4 },  /* JEXTSEL: JEXTSEL */
   { "\x28\x56\x14\x14\xe0", 6, 2 },  /* JEXTEN: JEXTEN */
   { "\x29\x34\x5c", 8, 5 },  /* JSQ1: JSQ1 */
   { "\x29\x34\x5d", 14, 5 },  /* JSQ2: JSQ2 */
   { "\x29\x34\x5e", 20, 5 },  /* JSQ3: JSQ3 */
   { "\x29\x34\x5f", 26, 5 },  /* JSQ4: JSQ4 */
};

const Field_t ADC_OFR1_fields[] = {
   { "\x3c\x61\x93\x15\x47\x00", 0, 12 },  /* OFFSET1: OFFSET1 */
   { "\x3c\x61\x93\x15\x47\x25\x0c\x80", 26, 5 },  /* OFFSET1_CH: OFFSET1_CH */
   { "\x3c\x61\x93\x15\x47\x25\x14\xe0", 31, 1 },  /* OFFSET1_EN: OFFSET1_EN */
};

const Field_t ADC_OFR2_fields[] = {
   { "\x3c\x61\x93\x15\x47\x40", 0, 12 },  /* OFFSET2: OFFSET2 */
   { "\x3c\x61\x93\x15\x47\x65\x0c\x80", 26, 5 },  /* OFFSET2_CH: OFFSET2_CH */
   { "\x3c\x61\x93\x15\x47\x65\x14\xe0", 31, 1 },  /* OFFSET2_EN: OFFSET2_EN */
};

const Field_t ADC_OFR3_fields[] = {
   { "\x3c\x61\x93\x15\x47\x80", 0, 12 },  /* OFFSET3: OFFSET3 */
   { "\x3c\x61\x93\x15\x47\xa5\x0c\x80", 26, 5 },  /* OFFSET3_CH: OFFSET3_CH */
   { "\x3c\x61\x93\x15\x47\xa5\x14\xe0", 31, 1 },  /* OFFSET3_EN: OFFSET3_EN */
};

const Field_t ADC_OFR4_fields[] = {
   { "\x3c\x61\x93\x15\x47\xc0", 0, 12 },  /* OFFSET4: OFFSET4 */
   { "\x3c\x61\x93\x15\x47\xe5\x0c\x80", 26, 5 },  /* OFFSET4_CH: OFFSET4_CH */
   { "\x3c\x61\x93\x15\x47\xe5\x14\xe0", 31, 1 },  /* OFFSET4_EN: OFFSET4_EN */
};

const Field_t ADC_JDR1_fields[] = {
   { "\x28\x40\x54\x05\xc0", 0, 16 },  /* JDATA1: JDATA1 */
};

const Field_t ADC_JDR2_fields[] = {
   { "\x28\x40\x54\x05\xd0", 0, 16 },  /* JDATA2: JDATA2 */
};

const Field_t ADC_JDR3_fields[] = {
   { "\x28\x40\x54\x05\xe0", 0, 16 },  /* JDATA3: JDATA3 */
};

const Field_t ADC_JDR4_fields[] = {
   { "\x28\x40\x54\x05\xf0", 0, 16 },  /* JDATA4: JDATA4 */
};

const Field_t ADC_AWD2CR_fields[] = {
   { "\x05\x71\x1d\x0c\x80", 1, 18 },  /* AWD2CH: AWD2CH */
};

const Field_t ADC_AWD3CR_fields[] = {
   { "\x05\x71\x1e\x0c\x80", 1, 18 },  /* AWD3CH: AWD3CH */
};

const Field_t ADC_DIFSEL_fields[] = {
   { "\x10\x91\x93\x14\xc9\x5c\x95\xc8\x00", 1, 15 },  /* DIFSEL_1_15: Differential mode for channels 15 to
              1 */
   { "\x10\x91\x93\x14\xc9\x5c\x86\x57\x23", 16, 3 },  /* DIFSEL_16_18: Differential mode for channels 18 to
              16 */
};

const Field_t ADC_CALFACT_fields[] = {
   { "\x0c\x13\x06\x04\x35\x25\x4c", 0, 7 },  /* CALFACT_S: CALFACT_S */
   { "\x0c\x13\x06\x04\x35\x25\x10", 16, 7 },  /* CALFACT_D: CALFACT_D */
};

const Register_t ADC_registers[] = {
   {"\x25\x34\x80", 0, 32, 0, ADC_ISR_fields, 11}, /* ISR: interrupt and status register */
   {"\x24\x54\x80", 4, 32, 0, ADC_IER_fields, 11}, /* IER: interrupt enable register */
   {"\x0d\x20", 8, 32, 0, ADC_CR_fields, 10}, /* CR: control register */
   {"\x0c\x61\xd2", 12, 32, 0, ADC_CFGR_fields, 19}, /* CFGR: configuration register */
   {"\x0c\x61\xd2\x74", 16, 32, 0, ADC_CFGR2_fields, 6}, /* CFGR2: configuration register */
   {"\x4c\xd4\x12\x70", 20, 32, 0, ADC_SMPR1_fields, 9}, /* SMPR1: sample time register 1 */
   {"\x4c\xd4\x12\x74", 24, 32, 0, ADC_SMPR2_fields, 9}, /* SMPR2: sample time register 2 */
   {"\x51\x27\x00", 32, 32, 0, ADC_TR1_fields, 2}, /* TR1: watchdog threshold register 1 */
   {"\x51\x27\x40", 36, 32, 0, ADC_TR2_fields, 2}, /* TR2: watchdog threshold register */
   {"\x51\x27\x80", 40, 32, 0, ADC_TR3_fields, 2}, /* TR3: watchdog threshold register 3 */
   {"\x4d\x14\x9c", 48, 32, 0, ADC_SQR1_fields, 5}, /* SQR1: regular sequence register 1 */
   {"\x4d\x14\x9d", 52, 32, 0, ADC_SQR2_fields, 5}, /* SQR2: regular sequence register 2 */
   {"\x4d\x14\x9e", 56, 32, 0, ADC_SQR3_fields, 5}, /* SQR3: regular sequence register 3 */
   {"\x4d\x14\x9f", 60, 32, 0, ADC_SQR4_fields, 2}, /* SQR4: regular sequence register 4 */
   {"\x11\x20", 64, 32, 0, ADC_DR_fields, 1}, /* DR: regular Data Register */
   {"\x29\x34\x52", 76, 32, 0, ADC_JSQR_fields, 7}, /* JSQR: injected sequence register */
   {"\x3c\x64\x9c", 96, 32, 0, ADC_OFR1_fields, 3}, /* OFR1: offset register 1 */
   {"\x3c\x64\x9d", 100, 32, 0, ADC_OFR2_fields, 3}, /* OFR2: offset register 2 */
   {"\x3c\x64\x9e", 104, 32, 0, ADC_OFR3_fields, 3}, /* OFR3: offset register 3 */
   {"\x3c\x64\x9f", 108, 32, 0, ADC_OFR4_fields, 3}, /* OFR4: offset register 4 */
   {"\x28\x44\x9c", 128, 32, 0, ADC_JDR1_fields, 1}, /* JDR1: injected data register 1 */
   {"\x28\x44\x9d", 132, 32, 0, ADC_JDR2_fields, 1}, /* JDR2: injected data register 2 */
   {"\x28\x44\x9e", 136, 32, 0, ADC_JDR3_fields, 1}, /* JDR3: injected data register 3 */
   {"\x28\x44\x9f", 140, 32, 0, ADC_JDR4_fields, 1}, /* JDR4: injected data register 4 */
   {"\x05\x71\x1d\x0d\x20", 160, 32, 0, ADC_AWD2CR_fields, 1}, /* AWD2CR: Analog Watchdog 2 Configuration
          Register */
   {"\x05\x71\x1e\x0d\x20", 164, 32, 0, ADC_AWD3CR_fields, 1}, /* AWD3CR: Analog Watchdog 3 Configuration
          Register */
   {"\x10\x91\x93\x14\xc0", 176, 32, 0, ADC_DIFSEL_fields, 2}, /* DIFSEL: Differential Mode Selection Register
          2 */
   {"\x0c\x13\x06\x04\x35\x00", 180, 32, 0, ADC_CALFACT_fields, 2}, /* CALFACT: Calibration Factors */
};

const Field_t AES_CR_fields[] = {
   { "\x14\xe0", 0, 1 },  /* EN: AES enable */
   { "\x10\x15\x01\x51\x94\x05", 1, 2 },  /* DATATYPE: Data type selection (for data in and
              data out to/from the cryptographic
              block) */
   { "\x34\xf1\x05", 3, 2 },  /* MODE: AES operating mode */
   { "\x0c\x83\x4f\x10", 5, 2 },  /* CHMOD: AES chaining mode */
   { "\x0c\x31\x83", 7, 1 },  /* CCFC: Computation Complete Flag
              Clear */
   { "\x15\x24\x83", 8, 1 },  /* ERRC: Error clear */
   { "\x0c\x31\x89\x14", 9, 1 },  /* CCFIE: CCF flag interrupt enable */
   { "\x15\x24\x89\x14", 10, 1 },  /* ERRIE: Error interrupt enable */
   { "\x10\xd0\x49\x38\x53\x80", 11, 1 },  /* DMAINEN: Enable DMA management of data input
              phase */
   { "\x10\xd0\x4f\x55\x41\x4e", 12, 1 },  /* DMAOUTEN: Enable DMA management of data output
              phase */
};

const Field_t AES_SR_fields[] = {
   { "\x0c\x31\x80", 0, 1 },  /* CCF: Computation complete flag */
   { "\x48\x41\x52\x48", 1, 1 },  /* RDERR: Read error flag */
   { "\x5d\x21\x52\x48", 2, 1 },  /* WRERR: Write error flag */
};

const Field_t AES_DINR_fields[] = {
   { "\x04\x54\xe5\x10\x93\x92", 0, 32 },  /* AES_DINR: Data Input Register */
};

const Field_t AES_DOUTR_fields[] = {
   { "\x04\x54\xe5\x10\xf5\x54\x48", 0, 32 },  /* AES_DOUTR: Data output register */
};

const Field_t AES_KEYR0_fields[] = {
   { "\x04\x54\xe5\x2c\x56\x52\x6c", 0, 32 },  /* AES_KEYR0: Data Output Register (LSB key
              [31:0]) */
};

const Field_t AES_KEYR1_fields[] = {
   { "\x04\x54\xe5\x2c\x56\x52\x70", 0, 32 },  /* AES_KEYR1: AES key register (key
              [63:32]) */
};

const Field_t AES_KEYR2_fields[] = {
   { "\x04\x54\xe5\x2c\x56\x52\x74", 0, 32 },  /* AES_KEYR2: AES key register (key
              [95:64]) */
};

const Field_t AES_KEYR3_fields[] = {
   { "\x04\x54\xe5\x2c\x56\x52\x78", 0, 32 },  /* AES_KEYR3: AES key register (MSB key
              [127:96]) */
};

const Field_t AES_IVR0_fields[] = {
   { "\x04\x54\xe5\x25\x64\x9b", 0, 32 },  /* AES_IVR0: initialization vector register (LSB IVR
              [31:0]) */
};

const Field_t AES_IVR1_fields[] = {
   { "\x04\x54\xe5\x25\x64\x9c", 0, 32 },  /* AES_IVR1: Initialization Vector Register (IVR
              [63:32]) */
};

const Field_t AES_IVR2_fields[] = {
   { "\x04\x54\xe5\x25\x64\x9d", 0, 32 },  /* AES_IVR2: Initialization Vector Register (IVR
              [95:64]) */
};

const Field_t AES_IVR3_fields[] = {
   { "\x04\x54\xe5\x25\x64\x9e", 0, 32 },  /* AES_IVR3: Initialization Vector Register (MSB IVR
              [127:96]) */
};

const Register_t AES_registers[] = {
   {"\x0d\x20", 0, 32, 0, AES_CR_fields, 10}, /* CR: control register */
   {"\x4d\x20", 4, 32, 0, AES_SR_fields, 3}, /* SR: status register */
   {"\x10\x93\x92", 8, 32, 0, AES_DINR_fields, 1}, /* DINR: data input register */
   {"\x10\xf5\x54\x48", 12, 32, 0, AES_DOUTR_fields, 1}, /* DOUTR: data output register */
   {"\x2c\x56\x52\x6c", 16, 32, 0, AES_KEYR0_fields, 1}, /* KEYR0: key register 0 */
   {"\x2c\x56\x52\x70", 20, 32, 0, AES_KEYR1_fields, 1}, /* KEYR1: key register 1 */
   {"\x2c\x56\x52\x74", 24, 32, 0, AES_KEYR2_fields, 1}, /* KEYR2: key register 2 */
   {"\x2c\x56\x52\x78", 28, 32, 0, AES_KEYR3_fields, 1}, /* KEYR3: key register 3 */
   {"\x25\x64\x9b", 32, 32, 0, AES_IVR0_fields, 1}, /* IVR0: initialization vector register
          0 */
   {"\x25\x64\x9c", 36, 32, 0, AES_IVR1_fields, 1}, /* IVR1: initialization vector register
          1 */
   {"\x25\x64\x9d", 40, 32, 0, AES_IVR2_fields, 1}, /* IVR2: initialization vector register
          2 */
   {"\x25\x64\x9e", 44, 32, 0, AES_IVR3_fields, 1}, /* IVR3: initialization vector register
          3 */
};

const Field_t RNG_CR_fields[] = {
   { "\x48\xe1\xc5\x38", 2, 1 },  /* RNGEN: Random number generator
              enable */
   { "\x24\x50", 3, 1 },  /* IE: Interrupt enable */
};

const Field_t RNG_SR_fields[] = {
   { "\x11\x21\x19", 0, 1 },  /* DRDY: Data ready */
   { "\x0c\x50\xd3", 1, 1 },  /* CECS: Clock error current status */
   { "\x4c\x50\xd3", 2, 1 },  /* SECS: Seed error current status */
   { "\x0c\x52\x53", 5, 1 },  /* CEIS: Clock error interrupt
              status */
   { "\x4c\x52\x53", 6, 1 },  /* SEIS: Seed error interrupt
              status */
};

const Field_t RNG_DR_fields[] = {
   { "\x48\xe1\x01\x50\x10", 0, 32 },  /* RNDATA: Random data */
};

const Register_t RNG_registers[] = {
   {"\x0d\x20", 0, 32, 0, RNG_CR_fields, 2}, /* CR: control register */
   {"\x4d\x20", 4, 32, 0, RNG_SR_fields, 5}, /* SR: status register */
   {"\x11\x20", 8, 32, 0, RNG_DR_fields, 1}, /* DR: data register */
};

const Field_t NVIC_ICTR_fields[] = {
   { "\x24\xe5\x0c\x24\xe1\x53\x39\x53\x40", 0, 4 },  /* INTLINESNUM: Total number of interrupt lines in
              groups */
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

const Field_t NVIC_IPR20_fields[] = {
   { "\x25\x04\xa5\x39\xb0", 0, 8 },  /* IPR_N0: IPR_N0 */
   { "\x25\x04\xa5\x39\xc0", 8, 8 },  /* IPR_N1: IPR_N1 */
   { "\x25\x04\xa5\x39\xd0", 16, 8 },  /* IPR_N2: IPR_N2 */
   { "\x25\x04\xa5\x39\xe0", 24, 8 },  /* IPR_N3: IPR_N3 */
};

const Field_t NVIC_STIR_fields[] = {
   { "\x24\xe5\x09\x10", 0, 9 },  /* INTID: interrupt to be triggered */
};

const Register_t NVIC_registers[] = {
   {"\x24\x35\x12", 4, 32, 0, NVIC_ICTR_fields, 1}, /* ICTR: Interrupt Controller Type
          Register */
   {"\x25\x31\x52\x6c", 256, 32, 0, NVIC_ISER0_fields, 1}, /* ISER0: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x70", 260, 32, 0, NVIC_ISER1_fields, 1}, /* ISER1: Interrupt Set-Enable Register */
   {"\x25\x31\x52\x74", 264, 32, 0, NVIC_ISER2_fields, 1}, /* ISER2: Interrupt Set-Enable Register */
   {"\x24\x31\x52\x6c", 384, 32, 0, NVIC_ICER0_fields, 1}, /* ICER0: Interrupt Clear-Enable
          Register */
   {"\x24\x31\x52\x70", 388, 32, 0, NVIC_ICER1_fields, 1}, /* ICER1: Interrupt Clear-Enable
          Register */
   {"\x24\x31\x52\x74", 392, 32, 0, NVIC_ICER2_fields, 1}, /* ICER2: Interrupt Clear-Enable
          Register */
   {"\x25\x34\x12\x6c", 512, 32, 0, NVIC_ISPR0_fields, 1}, /* ISPR0: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x70", 516, 32, 0, NVIC_ISPR1_fields, 1}, /* ISPR1: Interrupt Set-Pending Register */
   {"\x25\x34\x12\x74", 520, 32, 0, NVIC_ISPR2_fields, 1}, /* ISPR2: Interrupt Set-Pending Register */
   {"\x24\x34\x12\x6c", 640, 32, 0, NVIC_ICPR0_fields, 1}, /* ICPR0: Interrupt Clear-Pending
          Register */
   {"\x24\x34\x12\x70", 644, 32, 0, NVIC_ICPR1_fields, 1}, /* ICPR1: Interrupt Clear-Pending
          Register */
   {"\x24\x34\x12\x74", 648, 32, 0, NVIC_ICPR2_fields, 1}, /* ICPR2: Interrupt Clear-Pending
          Register */
   {"\x24\x10\x92\x6c", 768, 32, 0, NVIC_IABR0_fields, 1}, /* IABR0: Interrupt Active Bit Register */
   {"\x24\x10\x92\x70", 772, 32, 0, NVIC_IABR1_fields, 1}, /* IABR1: Interrupt Active Bit Register */
   {"\x24\x10\x92\x74", 776, 32, 0, NVIC_IABR2_fields, 1}, /* IABR2: Interrupt Active Bit Register */
   {"\x25\x04\x9b", 1024, 32, 0, NVIC_IPR0_fields, 4}, /* IPR0: Interrupt Priority Register */
   {"\x25\x04\x9c", 1028, 32, 0, NVIC_IPR1_fields, 4}, /* IPR1: Interrupt Priority Register */
   {"\x25\x04\x9d", 1032, 32, 0, NVIC_IPR2_fields, 4}, /* IPR2: Interrupt Priority Register */
   {"\x25\x04\x9e", 1036, 32, 0, NVIC_IPR3_fields, 4}, /* IPR3: Interrupt Priority Register */
   {"\x25\x04\x9f", 1040, 32, 0, NVIC_IPR4_fields, 4}, /* IPR4: Interrupt Priority Register */
   {"\x25\x04\xa0", 1044, 32, 0, NVIC_IPR5_fields, 4}, /* IPR5: Interrupt Priority Register */
   {"\x25\x04\xa1", 1048, 32, 0, NVIC_IPR6_fields, 4}, /* IPR6: Interrupt Priority Register */
   {"\x25\x04\xa2", 1052, 32, 0, NVIC_IPR7_fields, 4}, /* IPR7: Interrupt Priority Register */
   {"\x25\x04\xa3", 1056, 32, 0, NVIC_IPR8_fields, 4}, /* IPR8: Interrupt Priority Register */
   {"\x25\x04\xa4", 1060, 32, 0, NVIC_IPR9_fields, 4}, /* IPR9: Interrupt Priority Register */
   {"\x25\x04\x9c\x6c", 1064, 32, 0, NVIC_IPR10_fields, 4}, /* IPR10: Interrupt Priority Register */
   {"\x25\x04\x9c\x70", 1068, 32, 0, NVIC_IPR11_fields, 4}, /* IPR11: Interrupt Priority Register */
   {"\x25\x04\x9c\x74", 1072, 32, 0, NVIC_IPR12_fields, 4}, /* IPR12: Interrupt Priority Register */
   {"\x25\x04\x9c\x78", 1076, 32, 0, NVIC_IPR13_fields, 4}, /* IPR13: Interrupt Priority Register */
   {"\x25\x04\x9c\x7c", 1080, 32, 0, NVIC_IPR14_fields, 4}, /* IPR14: Interrupt Priority Register */
   {"\x25\x04\x9c\x80", 1084, 32, 0, NVIC_IPR15_fields, 4}, /* IPR15: Interrupt Priority Register */
   {"\x25\x04\x9c\x84", 1088, 32, 0, NVIC_IPR16_fields, 4}, /* IPR16: Interrupt Priority Register */
   {"\x25\x04\x9c\x88", 1092, 32, 0, NVIC_IPR17_fields, 4}, /* IPR17: Interrupt Priority Register */
   {"\x25\x04\x9c\x8c", 1096, 32, 0, NVIC_IPR18_fields, 4}, /* IPR18: Interrupt Priority Register */
   {"\x25\x04\x9c\x90", 1100, 32, 0, NVIC_IPR19_fields, 4}, /* IPR19: Interrupt Priority Register */
   {"\x25\x04\x9d\x6c", 1104, 32, 0, NVIC_IPR20_fields, 4}, /* IPR20: Interrupt Priority Register */
   {"\x4d\x42\x52", 3840, 32, 0, NVIC_STIR_fields, 1}, /* STIR: Software Triggered Interrupt
          Register */
};

const Peripheral_t Peripherals[] = {
   {"\x50\x93\x5d", 0x40000000, TIM2_registers, 21 }, /* TIM2: General-purpose-timers */
   {"\x50\x93\x61", 0x40001000, TIM6_registers, 8 }, /* TIM6: Basic-timers */
   {"\x50\x93\x62", 0x40001400, TIM6_registers, 8 }, /* TIM7:  */
   {"\x30\x31\x00", 0x40002400, LCD_registers, 12 }, /* LCD: Liquid crystal display controller */
   {"\x49\x40\xc0", 0x40002800, RTC_registers, 51 }, /* RTC: Real-time clock */
   {"\x5d\x71\x07", 0x40002c00, WWDG_registers, 3 }, /* WWDG: System window watchdog */
   {"\x25\x71\x07", 0x40003000, IWDG_registers, 5 }, /* IWDG: Independent watchdog */
   {"\x4d\x02\x5e", 0x40003c00, SPI1_registers, 7 }, /* SPI3:  */
   {"\x55\x30\x52\x51\xd0", 0x40004400, USART1_registers, 11 }, /* USART2:  */
   {"\x25\xd0\xdc", 0x40005400, I2C1_registers, 11 }, /* I2C1: Inter-integrated circuit */
   {"\x25\xd0\xde", 0x40005c00, I2C1_registers, 11 }, /* I2C3:  */
   {"\x0d\x24\xc0", 0x40006000, CRS_registers, 4 }, /* CRS: Clock recovery system */
   {"\x0c\x13\x9c", 0x40006400, CAN1_registers, 84 }, /* CAN1: Controller area network */
   {"\x55\x30\x80", 0x40006c00, USB_registers, 13 }, /* USB: Universal serial bus full-speed device
      interface */
   {"\x41\x74\x80", 0x40007000, PWR_registers, 23 }, /* PWR: Power control */
   {"\x10\x10\xdc", 0x40007400, DAC1_registers, 20 }, /* DAC1: Digital-to-analog converter */
   {"\x3d\x00\x4d\x40", 0x40007800, OPAMP_registers, 6 }, /* OPAMP: Operational amplifiers */
   {"\x31\x05\x09\x35\xc0", 0x40007c00, LPTIM1_registers, 8 }, /* LPTIM1: Low power timer */
   {"\x31\x05\x41\x49\x47\x00", 0x40008000, LPUART1_registers, 9 }, /* LPUART1: Universal synchronous asynchronous receiver
      transmitter */
   {"\x4d\x74\x0d\x25\xc0", 0x40008800, SWPMI1_registers, 8 }, /* SWPMI1: Single Wire Protocol Master
      Interface */
   {"\x31\x05\x09\x35\xd0", 0x40009400, LPTIM1_registers, 8 }, /* LPTIM2:  */
   {"\x4d\x94\xc3\x18\x70", 0x40010000, SYSCFG_registers, 10 }, /* SYSCFG: System configuration controller */
   {"\x59\x21\x46\x09\x51\x80", 0x40010030, VREFBUF_registers, 2 }, /* VREFBUF: Voltage reference buffer */
   {"\x0c\xf3\x50", 0x40010200, COMP_registers, 2 }, /* COMP: Comparator */
   {"\x15\x85\x09", 0x40010400, EXTI_registers, 12 }, /* EXTI: External interrupt/event
      controller */
   {"\x18\x94\x85\x5c\x13\x0c", 0x40011c00, FIREWALL_registers, 7 }, /* FIREWALL: Firewall */
   {"\x4c\x43\x4d\x0c", 0x40012800, SDMMC_registers, 18 }, /* SDMMC: Secure digital input/output
      interface */
   {"\x50\x93\x5c", 0x40012c00, TIM1_registers, 28 }, /* TIM1: Advanced-timers */
   {"\x4d\x02\x5c", 0x40013000, SPI1_registers, 7 }, /* SPI1: Serial peripheral interface/Inter-IC
      sound */
   {"\x55\x30\x52\x51\xc0", 0x40013800, USART1_registers, 11 }, /* USART1: Universal synchronous asynchronous receiver
      transmitter */
   {"\x50\x93\x5c\x80", 0x40014000, TIM15_registers, 16 }, /* TIM15: General purpose timers */
   {"\x50\x93\x5c\x84", 0x40014400, TIM16_registers, 18 }, /* TIM16: General purpose timers */
   {"\x4c\x12\x5c", 0x40015400, SAI1_registers, 16 }, /* SAI1: Serial audio interface */
   {"\x10\xd0\x5c", 0x40020000, DMA1_registers, 31 }, /* DMA1: Direct memory access controller */
   {"\x10\xd0\x5d", 0x40020400, DMA1_registers, 31 }, /* DMA2:  */
   {"\x48\x30\xc0", 0x40021000, RCC_registers, 29 }, /* RCC: Reset and clock control */
   {"\x18\xc0\x53\x20", 0x40022000, FLASH_registers, 16 }, /* FLASH: Flash */
   {"\x0d\x20\xc0", 0x40023000, CRC_registers, 5 }, /* CRC: Cyclic redundancy check calculation
      unit */
   {"\x51\x30\xc0", 0x40024000, TSC_registers, 17 }, /* TSC: Touch sensing controller */
   {"\x1d\x02\x4f\x04", 0x48000000, GPIOA_registers, 10 }, /* GPIOA: General-purpose I/Os */
   {"\x1d\x02\x4f\x08", 0x48000400, GPIOB_registers, 10 }, /* GPIOB: General-purpose I/Os */
   {"\x1d\x02\x4f\x0c", 0x48000800, GPIOC_registers, 10 }, /* GPIOC: General-purpose I/Os */
   {"\x1d\x02\x4f\x10", 0x48000c00, GPIOC_registers, 10 }, /* GPIOD:  */
   {"\x1d\x02\x4f\x14", 0x48001000, GPIOC_registers, 10 }, /* GPIOE:  */
   {"\x1d\x02\x4f\x20", 0x48001c00, GPIOC_registers, 10 }, /* GPIOH:  */
   {"\x04\x40\xc0", 0x50040000, ADC_registers, 28 }, /* ADC: Analog-to-Digital Converter */
   {"\x04\x54\xc0", 0x50060000, AES_registers, 12 }, /* AES: Advanced encryption standard hardware
      accelerator */
   {"\x48\xe1\xc0", 0x50060800, RNG_registers, 3 }, /* RNG: Random number generator */
   {"\x39\x62\x43", 0xe000e000, NVIC_registers, 38 }, /* NVIC: Nested Vectored Interrupt
      Controller */
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
	"DMA1_Channel1",
	"DMA1_Channel2",
	"DMA1_Channel3",
	"DMA1_Channel4",
	"DMA1_Channel5",
	"DMA1_Channel6",
	"DMA1_Channel7",
	"ADC1_2",
	"CAN1_TX",
	"CAN1_RX0",
	"CAN1_RX1",
	"CAN1_SCE",
	"EXTI9_5",
	"TIM15",
	"TIM16",
	NULL,
	"TIM1_CC",
	"TIM2",
	NULL,
	NULL,
	"I2C1_EV",
	"I2C1_ER",
	NULL,
	NULL,
	"SPI1",
	NULL,
	"USART1",
	"USART2",
	NULL,
	"EXTI15_10",
	"RTC_ALARM",
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"SDMMC",
	NULL,
	"SPI3",
	NULL,
	NULL,
	"TIM6_DAC",
	"TIM7",
	"DMA2_Channel1",
	"DMA2_Channel2",
	"DMA2_Channel3",
	"DMA2_Channel4",
	"DMA2_Channel5",
	NULL,
	NULL,
	NULL,
	"COMP",
	"LPTIM1",
	"LPTIM2",
	NULL,
	"DMA2_Channel6",
	"DMA2_Channel7",
	NULL,
	NULL,
	"I2C3_EV",
	"I2C3_ER",
	"SAI1",
	NULL,
	"SWPMI1",
	"TSC",
	"LCD",
	"RNG",
	"CRS",
};

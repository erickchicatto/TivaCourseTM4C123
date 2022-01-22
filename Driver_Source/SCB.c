/*
 * SCB.c
 *
 *  Created on: Jan 12, 2022
 *      Author: CXC
 */

#include "SCB.h"

inline void SCB_PENDSV__vSetPending(void)
{
    SCB_ICSR_R |= SCB_ICSR_R_PENDSVCLR_REMOVE;
}
inline void SCB_PENDSV__vClearPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSVCLR_REMOVE;
}

SCB_nPENDSTATE SCB_PENDSV__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_PENDSVSET_MASK;
    u32Reg>>=SCB_ICSR_R_PENDSVSET_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}

inline void SCB_SysTick__vSetPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSTSET_SET;
}
inline void SCB_SysTick__vClearPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSTCLR_REMOVE;
}
SCB_nPENDSTATE SCB_SysTick__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_PENDSTSET_MASK;
    u32Reg>>=SCB_ICSR_R_PENDSTSET_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}



/**
 * main.c
 */
#include <stdio.h>
#include "SCB.h"

ACTLR_TypeDef *pToStructure;

int main(void)
{
    printf("This is a element for the struct : %d " , &pToStructure);
    printf("This is a element for the struct : %d " , pToStructure->DISDEFWBUF);

    SCB_PENDSV__vSetPending();
    SCB_PENDSV__vClearPending();
    SCB_PENDSV__enGetPending();


	return 0;
}

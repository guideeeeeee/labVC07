#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
void main()
{
    int i , arrVal[5] = {25,456,234,876,543};
    printf("Access Data Array By Pointer \n");
    for (i = 0; i<=4;i++)
        printf("\narrVa;[%d] = %d at %x", i ,*(arrVal+i),(arrVal+i));
    system("pause");
}
#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
void main() {
    int *nPt , nVal = 200;
    float *fPt,fVal = 5.67;
    char *cPt, cVal = 'Z';
    nPt = &nVal;
    fPt = &fVal;
    cPt = &cVal;
    printf("Address of nVal = %x , Data by nPt = %d",nPt,*nPt);
    printf("\nAddress of fVal = %x , Data by fPt = %.2f", fPt,*fPt);
    printf("\nAddress of cVal = %x , Data by cPt = %c\n", cPt,*cPt);
    system("pause");
    }
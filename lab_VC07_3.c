#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
void main(){
    char aName[30]="Visual C++ Programming";
    char *pName = "String Message in pointer";
    char *pt;
    printf("Access data Array by pointer\n\n");
    pt = aName;
    printf("Data in Array = %s \n", pt);
    printf("Data in Array = %s \n", pt+3);\
    printf("------------------------------------\n");
    printf("Access data in Pointer by pointer\n\n");
    pt = pName;
    printf("Data in Pointer = %s\n",pt);
    printf("Data in Pointer = %s\n",pt+6);
    system("pause");
}
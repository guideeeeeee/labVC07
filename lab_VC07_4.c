#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#define COLs 5
void main(){
    int (*r)[COLs],i,j;
    int p[2][5],a[2][5]={{10,20,30,40,50},{11,22,33,44,55}};
    printf("input integer number at p[1][4]:");
    scanf("%d",&p[1][4]);
    r = p;
    printf("Reference r[1][4] by Array = %d at %x",r[1][4],&r[1][4]);
    printf("Reference r[1][4] by Pointer = %d at %x\n",*(*(r+1)+4),(*(r+1)+4));
    a[1][4]= *(*(r+1)+4);
    printf("Data in array a[1][4] is %d\n",a[1][4]);
    for(i=0;i<=1;i++){
        for(j=0;j<=4;j++){ printf(" %d\t",a[i][j]);}
    }
    system("pause");
}
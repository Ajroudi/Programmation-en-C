/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>
#define DIM 13

int main()
{
    int tab[DIM] = {12,13,10,45,12,13,15,12,90,13};
    int n=10, elt=13, i,j;
    int *p=tab,*k=tab;
    
    for(i=j=0;i<n;i++) {
        printf("p = %d \t",p);
        printf("k = %d \t",k);
        printf(",");
        
        *k=*p;
        p++;
        if(*k!= elt)
            k++;
    }
    printf("\ntab=");
    for(i=0;i<n;i++)
        printf("%d\t", tab[i]);
    printf("\n");

    return 0;
}

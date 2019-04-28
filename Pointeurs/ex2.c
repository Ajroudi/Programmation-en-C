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
    
    for(i=j=0;i<n;i++) {
        printf("i = %d \t",i);
        printf("j = %d \t",j);
        printf(",");
        
        tab[j]=tab[i];
        if(tab[j]!= elt)
            j++;
    }
    printf("\ntab=");
    for(i=0;i<n;i++)
        printf("%d\t", tab[i]);
    printf("\n");

    return 0;
}

/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>


int main()
{
int a = 1;
int b = a++; //b = 1, a = 2
printf("a= %d et b= %d \n",a,b); //prints 1
a = 1;
b = ++a; //b = 2, a = 2
printf("a= %d et b= %d \n",a,b); //prints 1

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int noofdigits(int n)
{
    if(n==0)
    return 0;
    while(n!=0)
    {
        return 1+noofdigits(n/10);
    }
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("The no of digits is %d",noofdigits(n));
    return 0;
}

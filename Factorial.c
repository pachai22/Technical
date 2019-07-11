/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,i,fact=1;
   printf("enter the number");
   scanf("%d",&n);
   if(n==0)
   return 1;
   if(n<0)
   return printf("invalid");
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   printf("The factorial of %d is %d",n,fact);
    return 0;
}
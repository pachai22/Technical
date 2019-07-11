/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   printf("enter the number");
   scanf("%d",&n);
  
   printf("The factorial of %d is %d",n,fact(n));
    return 0;
}

int fact(int n)
{
    int i,fact=1;
     if(n==0)
   return 1;
   if(n<0)
   return printf("invalid");
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   return fact;
}
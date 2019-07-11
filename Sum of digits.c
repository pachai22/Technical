/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
   int n,sum=0,digit;
   printf("enter the number");
   scanf("%d",&n);
   while(n!=0)
   {
       
       digit=n%10;
       sum=sum+digit;
       n=n/10;
       
   }
   printf("The sum is %d",sum);
    return 0;
}

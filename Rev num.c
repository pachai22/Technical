/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,revnum=0,digit;
   printf("Enter the num");
   scanf("%d",&n);
   while(n!=0)
   {
       digit=n%10;
       revnum=(revnum*10)+digit;
       n=n/10;
   }
   printf("The reversed number is %d",revnum);
    return 0;
}

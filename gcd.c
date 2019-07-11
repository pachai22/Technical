/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,gcd;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    int i;
    for(i=1;i<=a&&i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            gcd=i;
        }
    }
printf("gcd is %d",gcd);
    return 0;
}

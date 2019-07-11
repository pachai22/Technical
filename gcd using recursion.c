/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int gcd(int,int);

int main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    
    printf("gcd is %d",c);
    
return 0;
    
}

int gcd(int a,int b)
{
    if(b!=0)
    return gcd(b,a%b);
    else
    return a;
}
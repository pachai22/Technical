/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,lcm;
    printf("enter the values");
    scanf("%d %d",&a,&b);
    lcm=a>b?a:b;
    while(1)
    {
        if(lcm%a==0&&lcm%b==0)
        {
            printf("The lcm is %d",lcm);
            break;
        }
        ++lcm;
    }
    

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    iseven(n)?printf("even"):printf("odd");
    return 0;
}
iseven(int n)
{

    int a=1;
    for(int i=1;i<=n;i++)
        a=!a;

    return a;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    iseven(n)?printf("even"):printf("odd");
    return 0;
}
iseven(int n)
{

    return((n/2)*2==n);
}

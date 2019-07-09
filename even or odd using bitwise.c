#include<stdio.h>
#include<stdlib.h>
int iseven(int n)
{
    return(!(n&1));
}
int main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    iseven(n)?printf("even"):printf("odd");
    return 0;
}

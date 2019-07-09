#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("upper");

    }
    else if(ch>=97&&ch<=122)
    {
        printf("lower");
    }
    else if(ch>=48&&ch<=57)
    {

        printf("number");
    }
    else
    {
        printf("symbol");
    }
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {

        printf("Alphabet");
    }
    else{
        printf("Not a alphabet");
    }
    return 0;
}

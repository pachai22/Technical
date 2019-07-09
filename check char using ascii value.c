#include<stdio.h>
#include<stdlib.h>


    int main()
    {
        char ch;
        printf("enter any character");
        scanf("%c",&ch);
        if((ch>=97&&ch<=122)||(ch>=65&&ch<=90)){
            printf("Alphabet");
        }
        else
        {
            printf("Not an alphabet");
        }

        return 0;

    }



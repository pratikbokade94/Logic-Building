#include<stdio.h>
#include<stdlib.h>

int main()   // Better than 25
{
    char sName[30];
    printf("Enter Your Name :\n");
    scanf("%[^'\n']s", sName);    //  added  [^'\n'] for full String.

    printf("welcome %s\n", sName);

    return EXIT_SUCCESS;
}
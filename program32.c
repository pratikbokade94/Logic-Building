#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Your Name :\n");
    scanf("%[^'\n']s", sName);   // Enter remains in input buffer.


    fflush(stdin);

    printf("Enter your Age :\n");
    scanf("%d", &iAge);

    printf("Enter your marks:\n");
    scanf("%f",&fMarks);

    printf("welcome %s\n", sName);
    printf("your age is :%d\n",iAge);
    printf("your mark is :%f\n",fMarks);



    return EXIT_SUCCESS;
}
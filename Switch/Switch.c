//switch
#include<stdio.h>

void main()
{
    printf("Input number A=");
    int A;
    scanf_s("%d", &A);
    switch (A)
    {
    case 1:
        printf("A=1");
        break;

    default:
        printf("A/=1");
        break;
    }
}
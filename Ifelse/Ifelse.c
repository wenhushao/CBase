//if-else
#include<stdio.h>

void main()
{
    int A;
    printf("Input numbers A=");
    scanf("%d", &A);//�ر�����SDL���
    //scanf_s("%d", &A);
    if (A > 0)
    {
        printf("A>0");
    }
    else if (A == 0)
    {
        printf("A=0");
    }
    else
    {
        printf("A<0");
    }
}
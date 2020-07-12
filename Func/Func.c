#include<stdio.h>

//函数声明
int max(int a, int b);

void main()
{
    int a = 12;
    int b = 22;
    int ret = max(a, b);
    printf("Max value is %d", ret);
}
//函数体
int max(int a, int b)
{
    int result;
    if (a > b)
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}

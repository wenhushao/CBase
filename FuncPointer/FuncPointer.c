//函数指针
#include<stdio.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

void main()
{
    //p是函数指针
    int (*p)(int, int) = &max;
    int a, b, c, d;
    printf("请输入三个数字：");
    scanf_s("%d,%d,%d", &a, &b, &c);
    //等价于d=max(max(a,b),c)
    d = p(p(a, b), c);
    printf("最大的数字是：%d", d);
}
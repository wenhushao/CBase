//指针
#include<stdio.h>

void main()
{
    int var1;
    char var2[10];
    printf("var1地址：%p\n", &var1);
    printf("var2地址：%p\n", &var2);


    //空指针
    int* ptr = NULL;
    printf("ptr地址：%p", &ptr);
}
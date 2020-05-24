//Array:数组
#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = i;
    }
    for (int j = 0; j < 10; ++j)
    {
        printf("Arr[%d]=%d\n", j, arr[j]);
    }
    return 0;
}
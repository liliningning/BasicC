#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

/*数组
  1. 一断连续的存储空间
  2. 它里面存放的数据内型是相同的



*/
int main()
{
    int array[BUFFER_SIZE] = { 0 };

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        // printf("array[%d] = %d\n", idx, array[idx]);
    }

#if 1
    // 地址
    // 数组的首地址和数组第一个元素的地址是一样的
    printf("%p\n", array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
#endif

#if 0
    // 清楚脏数据
    array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    printf("............\n");
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
#endif

#if 0
    printf("array[-1]%d\n",array[-1]);
    printf("array[10]%d\n",array[10]);
 


#endif
    return 0;
}
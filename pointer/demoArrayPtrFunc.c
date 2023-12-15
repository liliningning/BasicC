#include <stdio.h>
#include <string.h>

#define BUFFER_SIEZ 5

// void task()
// {
//     //    char *array3[BUFFER_SIEZ] = {"hello", "world", "nihao", "zhangsan", "china"};
// }

int main(int argc, const char *argv[])
{

#if 1

    char *ptr = 0;
    char *array3[BUFFER_SIEZ] = {"hello", "world", "nihao", "zhangsan", "china"};

    for (int idx = 0; idx < BUFFER_SIEZ ; idx++)
    {
         for (int jdx = 0; jdx < BUFFER_SIEZ - 1 - idx; jdx++)
          {
        //     printf("jdx :%d\n",idx);
            // int ret = strcmp(array3[jdx], array3[jdx +1  ]);
            if (strcmp(array3[jdx], array3[jdx +1  ]) > 0)
            {
                ptr = array3[jdx];
                array3[jdx] = array3[jdx +1];
                array3[jdx +1] = ptr;
            }
         }
    }
    for (int idx = 0; idx < BUFFER_SIEZ; idx++)
    {
        printf("idx %d\n",idx);
        printf("array = %s\n", array3[idx]);
   }

 #endif
#if 0
    void task()
    {
        int array1[BUFFER_SIEZ] = {1, 2, 3, 4, 5};
        for (int idx = 0; idx < BUFFER_SIEZ; idx++)
        {
            printf("array1[%d] = %d\n", idx, array1[idx]);
        }
        printf("\n");
        char array2[BUFFER_SIEZ] = {'a', 'e', 'c', 'r', 'r'};

        for (int idx = 0; idx < BUFFER_SIEZ; idx++)
        {
            printf("array2[%d] = %c\n", idx, array2[idx]);
        }

        printf("\n");
        char *array3[BUFFER_SIEZ] = {"hello", "world", "nihao", "zhangsan", "china"};

        for (int idx = 0; idx < BUFFER_SIEZ; idx++)
        {
            printf("array3[%d] = %s\n", idx, array3[idx]);
        }
        // 排序 将array3排序
    }

#endif
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


#define BUFFER_SIZE 5
#define ROW 3
#define COLUMN 4

int main()
{
#if 1
    int array[BUFFER_SIZE] = { 0 };
    int len = sizeof(array);
    printf("len:%d\n",len);


//二维数组定义

    int array2[ROW][COLUMN] = { 0 };
    len = sizeof(array2);
    printf("len:%d\n",len);


    array2[0][0] = 100;
    // printf("array[0][0]: %d\n",array2[0][0]);
/*给二维数组赋值*/
    int count = 1;
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int jdx = 0;  jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
        }

    }
//二维数组取值
    int count1 = 0;
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int jdx = 0;  jdx < COLUMN; jdx++)
        {
            printf("array2[%d][%d] = %d\t",idx, jdx, array2[idx][jdx]);
            count1++;
            if(count1 % 4 == 0)
            {
                printf("\n");
            }
        }
    } 


#if 1
/*二维数组的地址*/
    printf("array2[0] %p\n",array2[0]);        //第一行地址
    printf("array2[0][0] %p\n",&array2[0][0]); //第一行第一列的地址

    printf("array2[1] %p\n",array2[1]);        //第二行地址
    printf("array2[1][0] %p\n",&array2[1][0]);

    printf("array2[2] %p\n",array2[2]);        //第三行地址
    printf("array2[2][0] %p\n",&array2[2][0]);

    //指针即是数组
    //array[2] = *(array + 2)
    printf("array2[2][2]%d,*(*(array2 + 2) + 2)\n,",*(*(array2 + 2) + 2));

#endif
    printf("\n");   
    // printf("array2[0][1]: %d\n",array2[0][1]);
   
#endif

// 二维数组的翻转   行变为列 列变为行



    return 0;
}
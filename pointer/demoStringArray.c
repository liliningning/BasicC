#include <stdio.h>
#include <string.h>

#define BUFFER_SIEZ 10
int main()
{

#if 1
    /*数组：一块连续的存储空间  
            存储相同的数据类型
            char  array[];     字符数组  内存在栈区  
            int array[];       整数数组
            char * ptr [];     字符串数组
            */

#endif           

#if 0//数组和指针
    char name[BUFFER_SIEZ];
    memset(name,0,sizeof(name));
    // name = "zhangsan"  //错误  不能直接赋值
    strncpy(name, "zhangsan", sizeof(name) - 1);
    printf("name: %s\n",name);


    printf("name[1]:%c\n",name[1]);
    name[1] = 'H';
    printf("name:%s\n",name);

    指针数组不分家
    printf("*(name + 2): %c\n",*(name + 2));
    *(name + 2) = 'A';
    printf("name:%s\n",name);

 name[x] = *(name + x)   //x就是常量


#endif

#if 1
//字符串 存在全局区

char *ptr = "zhangsan";
 printf("ptr[1] %c\n",ptr[1]);

 //ptr[1] = *(ptr + 1)


//  printf("*(ptr + 2) : %c\n",*(ptr + 2));

//  ptr[2] = 'Z';
//  printf("ptr: %c",ptr[0]);
 
 /*字符数组 和字符串的区别
 1. 字符数组存放在栈区  存储的值可以被修改
 2. 字符串的内存在全局区 不可以被修改 （全局常量）*/





#endif


#if 1
/*字符串数组*/

    char *array[BUFFER_SIEZ] = { 0 };

    array[0] = "zhangsan";
    array[1] = "lisi";
    array[2] = "nihai";
    array[3] = "hello";
    array[4] = "hello";
    array[5] = "world";
#if 0
    for(int idx = 0; idx < BUFFER_SIEZ; idx++)
    {
        printf("array[%d] = %s\n",idx,array[idx]);

    }
/*字符串数组
  1. 是一个数组
  2. 存放的是字符串
          */
#endif



//二维数组
printf("array[0]: %s\n",array[0]);
printf("array[0]: %s\n",*(array + 0));
printf("array[0][0]: %c\n",array[0][0]);
printf("array[0][1]: %c\n",*(*(array + 0) + 1));

array[1] = *(array + 1)
array[0][1] = *(*(array + 0) + 1) = *((array[0]) + 1)

#endif


    return 0;
}
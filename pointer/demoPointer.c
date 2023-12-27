#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIEZ  32
/*指针*/
int main()
{
#if 0
    /* 指针的定义    一级 二级指针*/
    // 定义变量记得初始化 （任意）
    int *p = NULL;

#endif

#if 0
    // 指针的使用 内部存放的是某变量的地址

    int a = 5;
    int *p = &a; //
    printf("a:%d\n", a);     //打印a的值
    printf("*P : %d\n", *p);  //  取a的值
    printf("*(&a): %d\n",*(&a));  // 打印a的值
    printf("&a : %p\n", &a);  //  打印a的地址
    printf("*P : %p\n", p);  //
    printf("&p: %p\n",&p);
#if 0
    int *ptr = &p;
    printf("ptr : %p\n",ptr);

#else
    // int **ptr = &p;
    // printf("ptr : %p\n",ptr);
    // printf("*ptr %p\n",*ptr);
    // printf("*(*ptr)%d\n",*(*ptr));

#endif

#endif
#if 1

/*指针的特性
    指针占的内存大小是8个字节（64位操作系统） 4个字节（32位操作系统）*/

    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n",len);

    char  p = 10;
    len = sizeof(p);
    printf("len:%d\n",len);

    char *ptr = &p;
    printf("*ptr: %c\t%d\n",*ptr,*ptr);
    len = sizeof(ptr);
    printf("len %d\n",len);


    int *ptrInt = &a;
    printf("*(&a)%d\n",*(&a));
    printf("*ptrInt: %d\n",*ptrInt);
    printf("ptrInt: %p\n",ptrInt);

    len = sizeof(ptrInt);
    printf("len %d\n",len);
#endif

#if 1
  /*指针的特性2：  指针和字符串的结合*/  

    /*字符串 是区别于字符数组的*/
     char *ptr = "hello world";
     int len = sizeof (ptr);
     int len1  = strlen(ptr);
     printf("len: %d\n",len);
     printf("len1: %d\n",len1);

//字符数组赋值
    char name[BUFFER_SIEZ] = { 0 };
    strcpy(name,"zhangsan");
    printf("name: %s\n",name);

#endif
#if 1
//给字符串赋值
    char *ptr2 = NULL;
#endif
#if 1
     ptr2 = "zhangsan";
    printf("&(zhangsan) : %p\n",&("zhangsan"));  //地址
    printf("ptr:%d\n",*ptr2); //ptr 的地址
    // strcpy(ptr2,"zhangsan");
#endif    
//    printf("ptr2 :%s\n",ptr2); 




/*堆空间*/
#if 0
/*void *   是一个指针  这个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIEZ);
    strcpy(ptr,"zhangsan");
    printf("ptr2 :%s\n",ptr);
#endif


    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    /*指针和字符串*/
    char *ptr = "hello world";

    // 字符串常量 什么是字符串常量
    // 打印字符串的每一个字符
    // 使用for循环
#if 0
    int len = strlen(ptr);
    printf("len: %d\n",len);
    char p = '0';
    for (int idx = 0; idx < strlen(ptr); idx++)
    {

        p = *ptr;
        printf("p:%c idx%d\n",p,idx);
        ptr++;
        printf("strlen(ptr): %ld\n",strlen(ptr));
    }

    int len = strlen(ptr);
    printf("len: %d\n", len);
    char p = '0';
    for (int idx = 0; idx < len; idx++)
    {

        p = *ptr;
        printf("p:%c idx: %d\n", p, idx);
        ptr++;
    }
#endif



#if 1
    while (*ptr != '\0' )
    {

        printf("%c\t",*ptr);
        ptr++;
    }

printf("\n");


#endif
    return 0;
}
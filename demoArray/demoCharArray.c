#include <stdio.h>

#define BUFFER_SIZE 10
int main()
{

#if 0
    // 获取多少个元素 ： 数组的长度 除以每个元素的长度
    char array[BUFFER_SIZE] = {0};
    int arrayLen = sizeof(array);
    printf("arraayLen%d\n", arrayLen);

    int elemtLen = sizeof(array[0]);
    printf("elemtLen%d\n", elemtLen);

    int length = arrayLen / elemtLen;
    printf("length%d\n", length);
#endif

#if 0

    char pNum = 'a';
    printf("pNum: %c\n", pNum);

    // 指针变量 定义第一个是P开头

    char *ptr = "hello world";
    printf("ptr:%s\n", ptr); // %s打印字符串

    char buffer[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    int buflen = sizeof(buffer);
    printf("buflen: %d   buffer: %s \n", buflen, buffer);

#endif

#if 1
    /*   数组以双引号定义 会默认加上 '\0 '
                以单引号 就没有 '\0'                    */

    char buffer1[] = "helloworld"; // 默认 '\0'
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    char buffer3[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};

    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);

    // printf("buflen1:  %d ,  buflen2: %d\n", buflen1, buflen2);
    printf("&buffer1: %p\n", buffer1);
    printf("&buffer2: %p\n", buffer2);

    printf("buffer1: %s\n", buffer1);
    printf("buffer2: %s\n", buffer2);
    printf("buffer3: %s\n", buffer3);


#endif

    return 0;
}
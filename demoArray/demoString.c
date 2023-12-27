#include <stdio.h>
#include <string.h>
// #include "demoString.h"





const  int g_num = 100;
int main()
{
    char buffer1[] = "helloworld";
    buffer1[0] = 'H';
    printf("buffer1: %s\t  buffer1[0] %c\n", buffer1,buffer1[0]);



//字符串 不能更改 因为字符串是常量 它存放的区域是全局区
    char * ptr = "helloworld";

    ptr[0] = 'H';
    printf("ptr[0]: %c\n",ptr[0]);
    printf("ptr[0]: %c\t  *(ptr+1): %c\n",*(ptr + 0), (*(ptr +1)));
    

    
    
    
    return 0;
}

// int strlen(const char *ptr)
// {
//     return 0;
// }

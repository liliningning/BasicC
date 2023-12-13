#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIEZ 10
/*内存泄漏*/

int main()
{
    /*什么情况会造成内存泄漏*/
    // case: 1. 野指针  2. malloc 出的堆空间 没有被释放 3. 踩内存  （read /write is invalid.） strcpy 


#if 0
    int a;
    printf("a: %d\n",a);

    int array[BUFFER_SIEZ];
    for(int idx = 0; idx <BUFFER_SIEZ ; idx++)
    {
        printf("%d\t",array[idx]);

    }
#endif
    //野指针
    // char *p;
    // printf("\n");

    // case 2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIEZ);
    
    if(!ptr)
    {
         /*todo  状态码*/
         return -1;
    }

    //使用malloc分配的空间里面，数据是脏的 脏数据
    memset(ptr,0 ,sizeof(char)* BUFFER_SIEZ);
#if 0    
      strcpy(ptr ,"hello world");
#else
/*使用安全*/
    strncpy(ptr ,"hello worldgggg",BUFFER_SIEZ - 1);

    printf("ptr:%c\n",*ptr);
/*释放函数*/
    if(ptr != NULL)
    {
      free(ptr);
      ptr = NULL;   
    }

    if(ptr != NULL)
    {
      free(ptr);
      ptr = NULL;   
    }
   
#endif
    return 0;
}
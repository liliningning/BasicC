#include <stdio.h>
#include <string.h>

#define BUFFER_SIEZ 32

int main()
{

#if 0

    int array[BUFFER_SIEZ];
    memset(array, 0, sizeof(array));

#endif

#if 0
    /*字符串(字符数组)*/
    char array[BUFFER_SIEZ] = "hello world";
    /*strlen */
    int len = strlen (array);
    printf("len: %d\n",array);

    /*strcpy*/
    char name[BUFFER_SIEZ];
    memset (name ,0 , sizeof(name));
    strcpy(name, "zhangsan");
    printf("name %d\n",name);

    /*strcat    从\0处开始写*/
    strcat(name, "is a boy "); 
    printf("name %s\n",name);

    /*strcmp   比较 ASCII*/
    char name2[BUFFER_SIEZ] = "wanwu";
    memset (name2 ,0 , sizeof(name2));
  int ret =   strcmp(name , name2);
    printf("ret : %d\n",ret );

#endif

#if 1

    /* 字符串 (常量  常量是不可更改的  存在于全局常量区 ptr指向的是地址 )      指针出入*/
    char  * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len : %d\n",len);
    printf("size : %d\n",size);
    printf("*ptr : %c\t *(ptr + 1)%c\t",*ptr,*(ptr + 1));


#endif
    return 0;
}

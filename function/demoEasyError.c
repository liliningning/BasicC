#include <stdio.h>
#include <string.h>

/*值传递和地址传递
   1. 值传递 ： 当函数参数没有指针时就是值传递  想改变值就得地址传递

*/
#if 1
    //函数参数叫 形参  值传递
    void swapData(int val1, int val2)
    {
        int temp = val1;
        val1 = val2;
        val2 = temp;


        return ;
    }
    /*地址传递
    当我们整数做形参时 一定是传出参数
    */
      void swapRealData(int  *pVal1, int *pVal2)
    {
         int temp = *pVal1,;
        *pVal1, = *pVal2,;
        *pVal2,= temp;

        

    }

#endif

/*传入参数
什么时候用传入参数 ： 当你不想改变实参时用传入参数  用const 限制

*/
void printStr(const char *str)
{
    printf("str:%s\n", str);
    // *str = *str + 0 = str[0]
    *str = 'H';
    printf("after str:%s\n", str);

    return;
}

int calStrlen(const char *str)

{
    int count =0;
    if(!str)
    {
        return count;

    }
   // 避免指针移位  数据备份
    //保留指针的初始地址 避免最后输出 也方便可以最后找到
   const  char * temPtr = str;
    int ret = 0;
    while (*temPtr ='/0')
    {
        ret++;
        temPtr++;
       
    }
    return ret;
    
}




    int main()
{

#if 1
    int num1 = 100;
    int num2 =200;
    /*调用函数的参数叫实参*/
    swapData(num1, num2);
    printf("num1: %d\t, num2: %d\n",num1,num2);

/*  传出参数一定会改变实参的值 （要想改变实参的值就得传出参数）*/
     swapRealData(num1, num2);
    printf("num1: %d\t, num2: %d\n",num1,num2);

#endif

#if 0
    char *str = "hello world";
    printStr(str);

#endif

#if 1

    char buffer[] = "hello world";
    int len = calStrlen(buffer);
    printf("len%d\n", len);

#endif

    return 0;
}

// 传入传出
/*字符串： 形参不加const  就是传出参数  就是要别修改的值
          加const 就是传入参数  不能被修改


    整数： 加上指针就是传出参数 就是要被修改的值
          不加指针就是传入参数 能被修改不影响实参
   */
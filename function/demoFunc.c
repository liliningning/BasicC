#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculateFunc.h"

/*函数参数和 可有可没有
返回值   可有可没有 没有的情况要写void
有就返回你想返回的数据类型 {int   char  long  short  double  float}   */

/*什么是API       */

/* 枚举     所占4个字节 */
/*默认第一个为0  剩下的按照顺序走*/
#if 0
enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
};

typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
} STATUS_CODE;
/*取别名 */

typedef enum STATUS_CODE STATUS_CODE;
#endif
#if 0
/*函数的定义*/
/*没有参数 没有返回值*/
 void purchaseAppointThing()
{

    printf("purchase a phone ");

}

#endif

#if 0
/* 2：有参数 没有返回值*/

void myAddNum1(int num1 ,int num2)
{
    int sum = num1 + num2;
    printf("sum: %d\n",sum);
    
}

#endif
#if 0
/*3：有参数 有返回值*/

int myAddNum2(int num1 ,int num2)
{
    int sum = num1 + num2;
    printf("sum: %d\n",sum);
    return sum;
}

#endif

int main()
{

#if 0  
    /*函数的调用*/
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;
    myAddNum1(num1, num2);
    int  totalSum = myAddNum2(num1, num2);
    int  TraCnsFormerPrice = 10;
    if(totalSum > TraCnsFormerPrice)
    {
        printf("GET A TraCnsFormer\n ");
    }
    else 
    {
        printf("GET not  A TraCnsFormer\n ");

    }


    STATUS_CODE status;

    // 判断所占空间的大小 sizeof
#endif

    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1, num2);
    printf("sum %d\n", sum);

    int num3 = calculateSub(num1, num2);
    printf("num3 %d\n", num3);

    int amass = calculateMul(num1, num2);
    printf("amass %d\n", amass);

    int num4 = calculateDiv(num1, num2);
    printf("num4 %d\n", num4);

    return 0;
}
#include "calculateFunc.h"

/*  源文件（.c）是函数的实现*/

typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR   = -5,
    ON_NULLPTR,
    ON_INVALIDACCESS,
} STATUS_CODE;

int calculateAdd(int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}

int calculateSub(int num1, int num2)
{
    return num1 - num2;
}

int calculateMul(int num1, int num2)
{
    int amass = num1 * num2;
    return amass;
}

int calculateDiv(int num1, int num2)
{

    if (num2 == 0)
    {
       return  ON_INVALIDACCESS;
    }
    return num1 / num2;
}

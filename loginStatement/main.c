#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 宏定义 必须大写
#define COUNT_NUM 10
#define RANGE_NUM 200

// 枚举 状态码
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN = 2,
    QUIT = 3,
};

int main()
{
#if 0
    
    int budget = 5000;
    int applephone  = 8999;
    int minPro = 4399;
    int huaweiP60 = 6999;

    if(budget > applephone)
    {
        printf("get a apple!\n");
    }
    else if (budget > minPro)
    {
        printf("get a minpro!\n ");
    }
    else if(budget > huaweiP60)
    {
        printf("get a huaweiP60 !\n");
    }

#endif

#if 0

    int budget = 5000;
    int applephone = 8999;
    int minPro = 4399;
    int huaweiP60 = 6999;
    int minbuget = 4000;
    int maxbuget = 8000;
     //只要一个条件满足就为1 或
    if (budget < applephone || budget > minPro)
    {
        printf("i am  happy get a phone \n");
    }
    else
    {
        printf("i am  sad  no  phone \n");
    }
    
        //只有两个条件满足就为1 与
    if (minbuget < budget &&  budget < maxbuget)
    {
       printf("success get a phone !\n");
    }
    else
    {
        printf("error get a phone !\n");
    }
#endif

#if 0
    // swtch
    // 每个case 都对应 一个break;
    // case 里面的语句过多 一定加上 {}来包含 ;
    // 一个函数里面代码的范围 在 80 ~ 120 之间；

    int choice = 0;
    printf("请输入你的选项： ");
    scanf("%d", &choice);
    switch (choice)
    {
    case REGISTER:
    {
        printf("welcome to register \n");
    }
    break;

    case LOGIN:
    {
        printf("welcome to login\n");
    }
    break;
    case QUIT:
    {
        printf("welcome to quit\n");
    }
    break;
    default:
        printf("input choice  invalid\n");
        break;
    }

#endif

#if 0
    // for循环

    srand(time(NULL));

    int randomNUm = 0;
    for (int idx = 0; idx < COUNT_NUM; idx++)
    {
        randomNUm = rand() % RANGE_NUM + 1;
        printf("randomNum : %d\n", randomNUm);
    }

#endif

#if 0
    // while 循环  
    srand(time(NULL));

    int randomNUm = 0;
    int circleTimes = COUNT_NUM >> 1;  //右移
    // 一定需要退出循环 
    while (circleTimes--)
    {
        randomNUm = rand() % RANGE_NUM + 1;
        printf("randomNum : %d\n", randomNUm);
    }


#endif

#if 0

 //do while 循环  先执行再判断
    int varaNum = 0;
   do
   {
     printf("varaNum : \n",varaNum);
    /* code */
   } while (varaNum);
   






#endif

#if 1

int idx = 1;
int num = idx--;
int num1= --idx;
printf("num %d\n,num1 %d\n",num,num1);





#endif




return 0;
}

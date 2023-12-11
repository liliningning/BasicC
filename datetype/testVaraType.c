#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
#if 0
    int age = 6;
    int len = sizeof(age);
    printf("len %d, age = %d\n", len, age);
    printf("hello world!\n");


    float weight = 50.5;
     int len1 = sizeof(weight);
    printf("len1 %d, weight = %f\n",len,weight);


    double weight1 = 50.5;
    len = sizeof(weight1);
    printf("len %d, weight1 = %f\n", len, weight1);

    
    char sex = 'm';
    len = sizeof(sex);
    printf("len : %d, sex : %c\n",len ,sex);


    sex = 65;
    len = sizeof(sex);
    printf("len : %d, sex : %c   sex : %d \n",len ,sex, sex );

    /*%c打印的是字符*/
    sex = -1;
    len = sizeof(sex);
    printf("len : %d, sex : %c   sex : %d \n", len, sex, sex);

#endif

#if 0
    char default_value = 137;    /* 为有符号位 然后换为二进制 与有符号位的最大值进行按位或运算  最高位为符号位*/
    int len = sizeof(default_value);
    printf("len : %d, default_value : %c   default_value : %d \n", len, default_value, default_value);

    unsigned char  m_value = -1;
    len = sizeof(m_value);
    printf("len : %d, m_value : %c   m_value : %d \n", len, m_value, m_value);


    int value = 6.6;
    printf("value: %d\n ",value);
#endif

#if 0

    int val = 10;
    val++;
    printf("val %d\n", val);

    val--;
    printf("val %d\n", val);

    ++val;
    printf("val %d\n", val);

    --val;
    printf("val %d\n", val);

    val = val + 100;
    printf("val %d\n", val);
    val += 100;
    printf("val %d\n", val);
#endif

#if 0
   int m_value = 10;
   int dicuss = m_value /3;
   int remainder = m_value % 3;

   printf("dicuss %d\n",dicuss);
   printf("remainder %d\n",remainder);
    

    /*随机数*/
    int randmVal = rand();
    printf("randmVal: %d\n",randmVal);

    int lotteryRate = randmVal % 4;
    printf("lotteryRate: %d\n",lotteryRate);

#endif

#if 1
/*左移 右移*/   
    int a = 5 << 2;
    printf("a : %d\n",a);
   
    int b = 14 > 2;
    printf("b : %d\n",b);



#endif

#if 0
/*或 与 非*/
    int val = 51;
    int orval = val | 7;
    int andval = val & 2;
    int notval = !val;
    printf("orval: %d\n", orval);
    printf("andval: %d\n", andval);
    printf("notval: %d\n", notval);
#endif


 #if 0  
/*且 或 非*/

   int condition1 = 1;
   int condition2 = 4;
   /* 或 ：只要有一个条件满足 就返回 1*/
   if ((condition1 == 1) || (condition2 == 5))  
   {
    printf("hello world\n");
   }
   else 
   {
    printf("not hello world\n");
   }
  /*且： 两个条件都满足就返回1，否则就返回0*/
   if ((condition1 == 1) && (condition2 == 5))  
   {
    printf("hello world\n");
   }
   else 
   {
    printf("not hello world\n");
   }

#endif



//    char  val = 123;
//    printf("val : %d\n",val);

   
//      val = '13';
//    printf("val : %d\n",val);



    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int printString()
{
    int ret;
    printf("print string \n");
    return ret;
}

int selecChoice(int choice)
{

    switch (choice)
    {
    case 1:
        printf("print 1\n");
        break;
    case 2:
        printf("print 2\n");
        break;

    default:
        break;
    }
}
int main()
{
    int num1 = 2;
    printf("num1 %d\n", num1);
    
    printString();
    selecChoice(num1);
    

    return 0;
}

//divisors--使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num ; //待测试的数
    unsigned long div ; //可能的约数
    bool isPrime ;  //素数标记

    printf("输入一个整数去分析(输入q退出); \n");
    while (scanf("%lu",&num)==1)
    {
        for ( div = 2 , isPrime=true ; (div*div) <= num; div++)
        {
            if (num%div==0)
            {
                if((div*div)!=num)
                printf("%lu能被%lu和%lu整除。\n",num,div,num/div);
                else
                printf("%lu能被%lu整除。\n",num,div);
                isPrime=false;
            }
            
        }
        if(isPrime)
        printf("%lu 是素数。\n",num);
        printf("请输入另一个整数去分析(输入q退出); \n");
    }
    printf("结束！\n");
    return 0;
}
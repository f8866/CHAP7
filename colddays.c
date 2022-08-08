//colddays--找出0℃以下的天数占总天数的百分比
#include <stdio.h>
int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days=0;
    int all_days=0;
    printf("输入每日最低温度:   \n");
    printf("使用摄氏度并且输入q退出。\n");
    while (scanf("%f",&temperature)==1)
    {
        all_days++;
        if (temperature<FREEZING)
        cold_days++;
    }
    if (all_days!=0)
        printf("%d天总共;   %0.1f%%是低于零摄氏度的。\n",
        all_days,100.0*(float)cold_days / all_days);
    else
         printf("没有数据输入！\n");
    return 0 ;
}
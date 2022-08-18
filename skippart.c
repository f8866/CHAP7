/*skippart.c--使用continue跳过部分循环 */
#include <stdio.h>
int main(void)
{
    const float MIN = 0.0f ;
    const float MAX = 100.0f;
    float score ;
    float total = 0.0f ;
    int n = 0 ;
    float min = MAX ;
    float max = MIN ;
    printf("输入第一个分数(输入q退出):");
    while (scanf("%f",&score)==1)
    {
        if(score<MIN||score>MAX)
        {
            printf("%0.1f输入值无效,再试",score);
            continue; //跳转至while循环的测试条件
        }
        printf("接受%0.1f:\n",score);
        min=(score<min)?score:min;
        max=(score>max)?score:max;
        total+=score;
        n++;
        printf("输入下一个分数(输入q退出):");
    }
    if(n>0)
    {
        printf("%d个分数的平均分是%0.1f。\n",n,total/n);
        printf("低=%0.1f,高=%0.1f\n",min,max);
    }
    else
    printf("没有有效的分数\n");
    return 0;
}
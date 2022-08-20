//break.c--使用break退出循环
#include <stdio.h>
int main(void)
{
    float length,width;
    printf("输入矩形的长度:\n");
    while (scanf("%f",&length)==1)
    {
        printf("长度=%0.2f:\n",length);
        printf("输入宽:\n");
        if (scanf("%f",&width)!=1)
            break;
        printf("宽=%0.2f:\n",width);
        printf("面积=%0.2f:\n",length*width);
       printf("输入矩形的长度:\n");
    }
    printf("结束。\n");
    return 0;
}
//paint.c--使用条件运算符
#include <stdio.h>
#define COVERAGE 350

int main(void)
{
    int sq_feet;
    int cans ;
    printf("输入需要油漆的面积:\n");
    while (scanf("%d",&sq_feet)==1)
    {
        cans=sq_feet/COVERAGE;
        cans+=((sq_feet%COVERAGE)==0)?0:1;
        printf("你需要%d%s油漆。\n",cans,cans==1?"can":"cans");
        printf("输入下一个值(q退出):\n");
    }
    return 0 ;
}
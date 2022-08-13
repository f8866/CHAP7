//chcount.c--使用逻辑与运算符
#include <stdio.h>
#define PERIOD '.'

int main(void)
{
    char ch ;
    int charcount = 0;
    while ((ch=getchar())!=PERIOD)
    {
        if (ch!=""&&ch!='')
            charcount++;
    }
    printf("这句话有%d个字母。\n",charcount);
    return 0 ;
}
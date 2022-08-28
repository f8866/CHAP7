//H_huch.c--统计空格、换行和其他所有字符
#include <stdio.h>
#define STOP '#'
int main(void)
{
    int ch, space,enter,others;
    space=enter=others=0;

    printf("输入一些文字(输入#退出):   \n");
    while ((ch=getchar())!=STOP)
    {
        if (ch==' ')
        {
            space++;
        }
        else if (ch=='\n')
        {
            enter++;
        }
        else
        {
            others++;
        }
    }
    printf("空格    %4d换行 %4d其他 %4d  \n",space,enter,others);
    printf("输入一些文字:   \n");
    return 0 ;
}
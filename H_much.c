//H_huch.c--统计所有非空字符
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int i = 0 ;
    printf("输入一些文字:   \n");
    while ((ch=getchar())!='#')
    {
        if (!isspace(ch))
        i++;
    }
    printf("%d  \n",i);
    printf("输入一些文字:   \n");
    return 0 ;
}
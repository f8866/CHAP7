//cypher2.c--替换输入的字母，非字母字符保持不变
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    while ((ch= getchar())!='\n')    //当一行未结束时
    {
        if (isalpha(ch)) 
            putchar(ch+1);    //打印下一个字符
        else
            putchar(ch);  //原样打印
    }
    putchar(ch);    //打印换行符
    return 0;
}
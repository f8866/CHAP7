//vowels.c--使用多重标签
#include <stdio.h>
int main(void)
{
    char ch;
    int a_ct,e_ct,i_ct,o_ct,u_ct ;
    a_ct=e_ct=i_ct=o_ct=u_ct=0 ;
    printf("输入一些文字;输入#退出。\n");
    while ((ch=getchar())!='#')
    {
        switch (ch)
        {
        case 'a':  case 'A':
            a_ct++;
            break;
            case 'e':  case 'E':
            e_ct++;
            break;
            case 'i':  case 'I':
            i_ct++;
            break;
            case 'o':  case 'O':
            o_ct++;
            break;
            case 'u':  case 'U':
            u_ct++;
            break; default:
            break;
        }   //swhitch到此结束
    }       //while循环到此结束
    printf("元音;   A   E   I   O   U   \n");
    printf("       %4d%4d%4d%4d%4d\n",
    a_ct,e_ct,i_ct,o_ct,u_ct );
    return 0;
}
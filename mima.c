#include <stdio.h>
int main()
{
    long int mm,mima;
    printf("设定密码：");
    scanf("%ld",&mm);
    printf("输入密码：");
    scanf("%ld",&mima);
    if (mima == mm)
        printf("密码正确\n");
    else
        printf("密码错误\n");
    return 0;
}
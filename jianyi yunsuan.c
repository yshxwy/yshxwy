#include <stdio.h>
int main()
{
    int a,n;
    float b,y,s;        /*a:选择方法；b:第一个数；y:第二个数；s:结果。*/
    printf("欢迎来到简易计算器程序！\n");
loop:printf("1.加法 2.减法 3.乘法 4.除法 0.退出==>\n");
    printf(">> ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("请输入第一个数：");
        scanf("%f",&b);
        printf("请输入第二个数：");
        scanf("%f",&y);
        s = a + b;
        printf("结果是：%.2f\n",s);
        printf("是否继续（1代表是）？");
        scanf("%d",&n);
        switch (n)
        {
        case 1:goto loop;
        default:
            printf("再见！\n");
            break;
        }
        break;
    case 2:
        printf("请输入第一个数：");
        scanf("%f",&b);
        printf("请输入第二个数：");
        scanf("%f",&y);
        s = a - b;
        printf("结果是：%.2f\n",s);
        printf("是否继续（1代表是）？");
        scanf("%d",&n);
        switch (n)
        {
        case 1:goto loop;
        default:
            printf("再见！\n");
            break;
        }
        break;
    case 3:
        printf("请输入第一个数：");
        scanf("%f",&b);
        printf("请输入第二个数：");
        scanf("%f",&y);
        s = a * b;
        printf("结果是：%.2f\n",s);
        printf("是否继续（1代表是）？");
        scanf("%d",&n);
        switch (n)
        {
        case 1:goto loop;
        default:
            printf("再见！\n");
            break;
        }
        break;
    case 4:
        printf("请输入第一个数：");
        scanf("%f",&b);
        printf("请输入第二个数：");
        scanf("%f",&y);
        s = a / b;
        printf("结果是：%.2f\n",s);
        printf("是否继续（1代表是）？");
        scanf("%d",&n);
        switch (n)
        {
        case 1:goto loop;
        default:
            printf("再见！\n");
            break;
        }
        break;
    case 0:break;
    default:
        printf("没有这个选项，你的脑袋是方的吗？\n");
        goto loop;
        break;
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define S 6
int main()
{
    int a,b;
    srand(time(NULL));                  //这三行负责选取一个随机数。
    a = rand() %101;
    printf("本程序将会在1～100之间选择一个数让玩家猜测。（玩家只有六次机会）现在，游戏开始！\n");
    for (int i = 0; i <= S;)
    {
       scanf("%d",&b);
       if (b < a)                   //判断输入是否小了。
       {
           printf("不对，太小了！\n");
           i++;
       }
       else if (b > a)              //判断输入是否大了。
       {
           printf("不对，太大了！\n");
           i++;
       }
       else                 //当答对时打印提示。
       {
           printf("恭喜你，答对了！\n");
           break;
       }
       if (i == 5)                  //警告。
       {
           printf("注意，只有一次机会了！\n");
       }
       if (i == 6)                  //机会用光时打印提示。
       {
           printf("对不起，机会用光了！正确答案是：%d。",a);
           break;
       }
    }
    printf("再见！\n");
    return 0;
}
/*求面积程序的beta 2版本。*/
#include <stdio.h>

float pxsbx(float mp,float gp,float dp)
{
    mp = dp * gp;       //计算面积。
    return mp;
}

float sjx(float ms,float gs,float ds)
{
    ms = (ds * gs) / 2;       //计算面积。
    return ms;
}

float tx(float mt,float gt,float dts,float dtx)
{
    mt = (dts + dtx) * gt / 2;       //计算面积。
    return mt;
}

int main()
{
    float c;                    //接住函數的返回值
    float di1,di2,g,mj;         //分别设定图形的底、高、面积等。
    int n = 0,x;               //n是选择图形类型；x是判断用户是否继续。
    short i = 1,s = 2;          //两个循环参数，退出循环时会用到它们。
    printf("欢迎来到求面积程序beta 2！\n");        //打印欢迎程序。
    do
    {
        printf("1.求平行四边形面积; 2.求三角形面积; 3.求梯形面积; 0.返回=>\n");        //打印选项表。
        printf(">> ");   //‘>>’代表输入提示符。
        scanf("%d",&n); //输入选项。
        switch(n)
        {
            case 1:                     //选择平行四边形时。
                printf("请输入底：");//---|
                scanf("%f",&di1);  //   |___输入底和高。
                printf("请输入高：");//   |    
                scanf("%f",&g);    //---|
                c = pxsbx(mj,g,di1);  //计算面积。
                printf("这个平行四边形的面积是%.2f\n",c);  //输出面积。
                printf("是否再来一次（1代表是）？\n");
                printf(">>");
                scanf("%d",&x);
                switch(x)   //是否退出。
                {
                    case 1:continue;
                    default:printf("再见");i = s;break;
                }
                break;
            case 2:                        //选择三角形时。
                printf("请输入底：");
                scanf("%f",&di1);
                printf("请输入高：");
                scanf("%f",&g);
                c = sjx(mj,g,di1);  //计算面积。
                printf("这个三角形的面积是%.2f\n",c);
                printf("是否再来一次（1代表是）？\n");
                printf(">>");
                scanf("%d",&x);
                switch(x)
                {
                    case 1:continue;
                    default:printf("再见");i = s;break;
                }
                break;
            case 3:                 //选择梯形时。
                printf("请输入上底：");
                scanf("%f",&di1);
                printf("请输入下底：");
                scanf("%f",&di2);
                printf("请输入高：");
                scanf("%f",&g);
                c = tx(mj,g,di1,di2);  //计算面积。
                printf("这个梯形的面积是%.2f\n",c);
                printf("是否再来一次（1代表是）？\n");
                printf(">>");
                scanf("%d",&x);
                switch(x)
                {
                    case 1:continue;
                    default:printf("再见");i = s;break;
                }
                break;
            case 0:printf("再见!");break;
            default:printf("没有这个选项，你的脑袋是方的吗？\n");break;
        break;
        }
    break;              //退出循环。
    }while(i < s);
    printf("\n");
    return 0;
}
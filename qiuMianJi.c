#include<stdio.h>
int main(){
    float gao=0;   //所有形状的高
    float di1=0;   //平边四边形、三角形的底，梯形的上底
    float di2=0;   //梯形的下底；
    float s=0;     //面积
    int   flag=0;  //形状标识 1－平行四边形，2－三角形，3－梯形；
    int   jiXu=0;  //是否继续？ 9 退出，其他继续
    do
    {
       printf("请输入您要计算面积的形状：1－平行四边形，2－三角形，3－梯形");
       scanf("%d",&flag);
        if (flag==1 || flag==2)
        {
            printf("请输入底：");
            scanf("%f",&di1);
            printf("请输入高：");
            scanf("%f",&gao);
            s=(di1*gao)/flag;
        }
        else if(flag==3){
            printf("请输入上底：");
            scanf("%f",&di1);
            printf("请输入下底：");
            scanf("%f",&di2);
            printf("请输入高：");
            scanf("%f",&gao);
            s=((di1+di2)*gao)/2;
        }
            printf("您要求的面积是：%.2f\n",s);    
            printf("您要退出程序吗？按9退出:");
            scanf("%d",&jiXu);
    
    }while(jiXu!=9);
      
    printf("\n");

    return 0;
}
#include <stdio.h>

int max(int x,int y)
{
    if(x > y)
        return x;
    else if(y > x)
        return y;
    else
        return x + y;
}

int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = max(a,b);
    printf("%d\n",c);
    return 0;
}
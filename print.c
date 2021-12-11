#include <stdio.h>
int main()
{
    int s,n;
    scanf("%d%d",&s,&n);
    for (int i = s; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}
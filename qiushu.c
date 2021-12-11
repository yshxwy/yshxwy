#include <stdio.h>
int main()
{
    int n;                                      //'n' 
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        n = n + i ;
    }
    printf("%d\n",n);
    return 0;
}
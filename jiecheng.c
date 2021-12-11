#include <stdio.h>
int main()
{
    int i,s,n = 1;
    scanf("%d",&s);
    for ( i = 1; i <= s; i++)
    {
        n = n * i ;
    }
    printf("%d\n",n);
    return 0;

}
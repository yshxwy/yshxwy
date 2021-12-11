#include <stdio.h>
int main()
{
    int i,s,n = 0;
    scanf("%d",&s);
    for ( i = 1; i <= s; i = i + 2)
    {
        n = n + i ;
    }
    printf("%d\n",n);
    return 0;

}

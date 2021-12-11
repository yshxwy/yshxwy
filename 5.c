#include <stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    printf("\n");
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %d   ", j, i,j * i);

        }
        printf("\n");
    }
    return 0;
}
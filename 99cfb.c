#include <stdio.h>
int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; i++)
        {
            printf("\n");
        }
        printf("*");
    }
    return 0;
}
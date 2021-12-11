#include <stdio.h>
#define N 5
#define R 60
int main()
{
    int a[R];
    int b[R];
    for (int i = 0; i < R; i++)
    {
        // printf("%d \n",a[i]);

        a[i] = b [i];
        printf("%d\n",b[i]);
    }
    return 0;
}
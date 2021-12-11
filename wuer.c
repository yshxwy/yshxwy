#include <stdio.h>
int main()
{
       int n;
       scanf("%d",&n);
    // int s;
    // scanf("%d",&s);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
                printf(" ");
        }

        for (int j = 1; j <=2 * i -1; j++)
        {
            printf("$");
        }
        
        printf("\n");
     
    }

//     for (int s = n; s >= j; s--)     //行
//     {
//         for (int i = 1; i <= s; i++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }   
//     return 0;
 }
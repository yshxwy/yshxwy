#include <stdio.h>
int main()
{
    int val;
    scanf("%d",&val);
    for(int i = 2;i <= val - 1;i++)
    {
        if(val % i != 0)
            printf("Yes\n");
        else 
            printf("No\n");
        continue;
    }
    return 0;
}
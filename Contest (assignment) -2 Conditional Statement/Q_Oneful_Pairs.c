#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int onefulPair = x + y + (x * y);

    if (onefulPair == 111)
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");
    }
    return 0;
}
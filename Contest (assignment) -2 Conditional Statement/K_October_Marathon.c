#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x < 3)
    {
        printf("GOLD\n");
    }

    else if (x >= 6)
    {

        printf("BRONZE\n");
    }

    else
    {
        printf("SILVER\n");
    }
    return 0;
}
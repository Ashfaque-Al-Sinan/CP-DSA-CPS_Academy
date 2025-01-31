#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x < y)
    {
        printf("Old\n");
    }

    else if (x > y)
    {

        printf("New\n");
    }

    else
    {

        printf("Same\n");
    }
    return 0;
}
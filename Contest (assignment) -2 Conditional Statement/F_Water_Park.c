#include <stdio.h>
int main()
{
    int w, h;
    scanf("%d %d", &w, &h);

    if (w >= 60 && h <= 130)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
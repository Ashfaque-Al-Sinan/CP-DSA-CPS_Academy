#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    if (n < 1000)
    {
        printf("%lld\n", n);
    }
    else if (n < 10000)
    {
        printf("%lld0\n", n / 10);
    }
    else if (n < 100000)
    {
        printf("%lld00", n / 100);
    }

    else if (n < 1000000)
    {
        printf("%lld000\n", n / 1000);
    }

    else if (n < 10000000)
    {
        printf("%lld0000", n / 10000);
    }

    else if (n < 100000000)
    {

        printf("%lld00000\n", n / 100000);
    }

    else
    {

        printf("%lld000000\n", n / 1000000);
    }
    return 0;
}
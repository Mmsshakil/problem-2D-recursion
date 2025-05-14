#include <stdio.h>

int main()
{
    int n, lucky = 0, totaldigit = 0;
    scanf("%d", &n);
    int mainnumber = n;

    for (; n > 0;)
    {
        int digit = n % 10;

        if (digit == 4 || digit == 7)
        {
            lucky++;
        }
        n = n / 10;
        totaldigit++;
    }

    if (lucky == totaldigit)
    {
        printf("YES");
    }

    else if (mainnumber % 4 == 0 || mainnumber % 7 == 0 || mainnumber % 44 == 0 || mainnumber % 47 == 0 || mainnumber % 74 == 0 || mainnumber % 77 == 0 || mainnumber % 444 == 0 || mainnumber % 447 == 0 || mainnumber % 474 == 0 || mainnumber % 477 == 0 || mainnumber % 744 == 0 || mainnumber % 747 == 0 || mainnumber % 774 == 0 || mainnumber % 777 == 0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
#include <stdio.h>

long long int factorial(int n)
{
    if (n == 1)
    {
        return 1; // jokhn n= 1 hobe tokhn 1 return hobe & 11 number line a jaya gon hoite thakbe
    }
    long long int result = factorial(n - 1); // n-1 ar fole return jeta asbe seta result a save hobe. like 5 4 3 3 2 1

    return result * n; // j value ta return asca tar sathe nijeke mane n k gon kore dibe
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int result = factorial(n);
    printf("%lld", result);
    return 0;
}
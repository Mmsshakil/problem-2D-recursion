#include <stdio.h>

long long int rec(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    long long int sum = rec(arr, n, i + 1);
    return sum + arr[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int result = rec(arr, n, 0);
    printf("%lld", result);

    return 0;
}
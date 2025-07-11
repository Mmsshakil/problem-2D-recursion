#include <stdio.h>

int rec(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    int max = rec(arr, n, i + 1);

    if (arr[i] > max)
    {
        return arr[i];
    }
    else
    {
        return max;
    }
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

    int result = rec(arr, n, 0);
    printf("%d", result);

    return 0;
}
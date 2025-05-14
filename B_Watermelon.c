#include <stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    int check = 0;
 
    for (int i = 1, j = w - 1; i <= j; i++, j--)
    {
        if ((i % 2 == 0) && (j % 2 == 0))
        {
            check++;
        }
    }
 
    if (check != 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
 
    return 0;
}
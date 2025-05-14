#include <stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        /* code */
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    rec(s, 0);
    return 0;
}
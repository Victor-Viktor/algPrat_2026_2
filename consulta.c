#include <stdio.h>

int main()
{
    int i, j, c = 0;
    for (i = 1; i <= 3; i++)
    {
        for (j = i; j <= 3; j++)
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);

    temp = a;
    a = b;
    b = temp;

    temp = a;
    a = c;
    c = temp;

    printf("%d %d %d\n", a, b, c);
    return 0;
}
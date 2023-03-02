// Assignment operators
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    int f = 15;
    int g = 25;
    int h = 35;
    int i = 45;
    int j = 55;
    int k = 60;

    a += 5;
    printf("%d\n", a);

    b -= 5;
    printf("%d\n", b);

    c *= 5;
    printf("%d\n", c);

    d /= 5;
    printf("%d\n", d);

    e %= 5;
    printf("%d\n", e);

    f &= 5;
    printf("%d\n", f);

    g |= 5;
    printf("%d\n", g);

    h ^= 5;
    printf("%d\n", h);

    i >>= 5;
    printf("%d\n", i);

    j <<= 5;
    printf("%d\n", j);
    return 0;
}
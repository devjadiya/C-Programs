// Arrays and Pointers
#include <stdio.h>
int main()
{
    int num[] = {10, 20, 30, 40, 50};
    *num = 15;       // change the first number value
    *(num + 1) = 25; // change the second number value
    printf("%d\n", *num);
    printf("%d\n", *(num + 1));
    return 0;
}
// Comparison Operator
#include <stdio.h>
int main()
{
    int x = 5;
    int y = 3;
    printf("%d\n", x == y); // returns zero because x is not equal to y
    printf("%d\n", x != y); // returns one because x is not equal to y
    printf("%d\n", x > y);  // returns one because x is greater than y
    printf("%d\n", x < y);  // returns zero because x is not smaller than y
    printf("%d\n", x >= y); // returns one because x is greater than y
    printf("%d\n", x <= y); // returns zero because x is not smaller than y
    return 0;
}
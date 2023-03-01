// Lock variable values to read-only
#include<stdio.h>
int main()
{
    int num1 = 40;
    const int num2 = 50;
    num1 = 80;
    num2 =100;
    printf("%d\n", num1);
    printf("%d\n", num2);
    return 0;

}

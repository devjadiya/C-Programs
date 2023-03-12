// Math function
// sin()

#include<stdio.h>
#include<math.h>
#define PI 3.141592654

int main()
{
    double x = 30, result;
    result = sin(x);
    printf("Sin of %.2lf is = %.2lf", x, result);
    return 0;
}
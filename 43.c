// Math Function
// cos(x)

#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main()
{
    double arg = 30, result;

    // Converting to radian
    arg = (arg * PI) / 180;
    result = cos(arg);

    printf("Cos of %.2lf radian = %.2lf", arg, result);
    return 0;
}
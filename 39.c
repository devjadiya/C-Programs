// Math function
#include <stdio.h>
#include <math.h>
int main()
{
    // Syntax --> double acos(double x);
    // Parameter range --> x = [-1,+1] and Return value range [0,π] in radidans
    // Parameter range --> -1>x or x>1 and Return value range NaN(not a number)
    // Constant pi is defined
    const double PI = 3.1415926;
    double x, result;

    x = -0.5;
    result = acos(x);
    printf("Inverse of sin(%.2f) = %.2lf in radinas\n", x, result);

    // Converting radians to degree
    result = acos(x) * 180 / PI;
    printf("Inverse of sin(%.2f) = %.2lf in degrees\n", x, result);

    // Parameter not in range
    x = 1.2;
    result = acos(x);
    printf("Inverse of sin(%.2f) = %.2lf ", x, result);

    return 0;
}
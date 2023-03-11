// Math function
#include <stdio.h>
#include <math.h>
#define PI 3.141592654 // This is how to define PI

int main()
{
    // atan(): --> [Mathematics] tan^-1x = atan(x) [In c programming]
    double num = 1.0;
    double result;
    result = atan(num);
    printf("Inverse of tan(%.2f) = %.2f in radians", num, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", num, result);

    return 0;
}
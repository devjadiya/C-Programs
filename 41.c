// Math function
// cbrt() --> This function computes the cube root of a number.
// Syntax --> double cbrt(double arg);
// [Mathematics] ∛x = cbrt(x) [In C Programming]

#include <stdio.h>
#include <math.h>

int main()
{
    double num = 6, cubeRoot;

    cubeRoot = cbrt(num);
    printf("Cube root of %lf = %lf", num, cubeRoot);
    return 0;
}

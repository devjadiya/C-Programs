// Nested loops
#include<stdio.h>
int main()
{
    int i,j;

    // Outer loop
    for (i=1; i<= 5; ++i)
    {
        printf("Outer: %d\n", i); // Executes 5 times
    // Inner loop
    for (j=1; j<=6; ++j){
        printf("Inner: %d\n", j); //Executes 30 times (5*6) 
    }
    }
return 0;
}
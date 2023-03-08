// Dereference pointer#include<stdio.h>
int main()
{
    int age = 45;
    int *ptr = &age;
    printf("%d\n", age);
    printf("%p\n", &age);
    printf("%d\n", *ptr); // Output the value of myAge with the pointer
    return 0;
}

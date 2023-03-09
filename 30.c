// Multiple parameters
#include <stdio.h>
void myfunc(char name[], int age)
{
    printf("Hello %s. You are %d years old\n", name, age);
}
int main()
{
    myfunc("Ram", 21);
    myfunc("Shyam", 13);
    myfunc("Gaurav", 41);
    myfunc("Praveen", 22);
}
// C funtion parameter
#include <stdio.h>
void newfunction(char name[])
{
   printf("Hello %s \n", name);
}
int main()
{
   newfunction("Lion");
   newfunction("Girrafe");
   newfunction("Tiger");
   newfunction("Elephant");
}
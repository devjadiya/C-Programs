// Sting input
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter you full name :\n");
    // scanf("%s", name);
    /* it considers space (whitespace, tabs, etc) as a terminating character,
     which means that it can
only display a single word
(even if you type many words).*/
    fgets(name, sizeof(name), stdin);
    printf("Hello %s", name);

    return 0;
}
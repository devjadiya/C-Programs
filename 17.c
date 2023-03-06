// Strings
#include <stdio.h>
int main()
{
    char message[] = "hey git";
    printf("%s\n", message);
    printf("%c\n", message[0]); // Since strings are stored in arrays this will print first character
    // You have to use format specifier %c for single character.

    // Modify strings
    char message2[] = "i an using git";
    message2[3] = 'm';
    printf("%s\n", message2);
    return 0;
}
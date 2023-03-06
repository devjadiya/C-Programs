// String Functions
#include <stdio.h>
#include <string.h> //Including file
int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet)); // 26
    printf("%d\n", sizeof(alphabet)); // 27 (This also includes \0 when counting)
    char alphabet1[40] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", sizeof(alphabet1)); // This returns the memory size(in bytes) not actual string length.

    // Concatenate strings
    char str1[15] = "Hello";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s\n", str1);


    // Copy string
    char str3[10];
    strcpy(str3, str1);
    printf("%s\n",str3);

// Compare strings
printf("%d\n" , strcmp(str1 , str3));
printf("%d\n" , strcmp(str1 , str2));

    return 0;
}
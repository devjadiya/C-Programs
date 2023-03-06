// Special character in string
#include <stdio.h>
int main()
{
    char text[] = "We are the so-called \"Humans\" from the Earth.";
    printf("%s\n", text);
    char text2[] = "It\'s morning.";
    printf("%s\n", text2);
    char text3[] = "The character // is called backslash.";
    printf("%s\n", text3);

    // Escape characters \n,\ t, \0
    char text4[] = "Hello\nrespected.";
    char text5[] = "Hello\trespected.";
    char text6[] = "Hello\0respected."; // Null
    printf("%s\n", text4);
    printf("%s\n", text5);
    printf("%s\n", text6);

    return 0;
}
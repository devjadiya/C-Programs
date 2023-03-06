// Loop throgh a string
#include <stdio.h>

int main()
{
    char bikeName[] = "Hero honda";
    int i;

    for (i = 0; i < 10; ++i)
    {
        printf("%c\n", bikeName[i]);
    }

    //   Another way of creating strings
    char str1[] = {'j', 'a', 'i', 'b', 'h', 'a', 'r', 'a', 't', '!', '\0'};
    printf("%s\n", str1);
    printf("%lu\n", sizeof(str1));
    return 0;
}

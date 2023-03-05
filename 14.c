// Continue
#include <stdio.h>
int main()
{
    int i;
    printf("It will skip 6\n");
    for (i = 0; i < 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
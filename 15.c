// Break and continue in while loop
#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    while (i < 10)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }
printf("   Second While loop  \n");
    while (j < 10)
    {
        if (j == 6){
            j++;
            continue;
        }
        printf("%d\n",j);
        j++;
    }

    return 0;
}
//  Arrays
#include <stdio.h>
int main()
{
    int mynum[] = {10, 64, 80, 45, 30};
    printf("%d\n", mynum[0]); // To print first element

    // Change an element
    mynum[0] = 43;
    printf("%d\n", mynum[0]);

    printf("--\n");

    // Print all elements
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", mynum[i]);
    }

    // set size
    int arr[3];
    arr[0] = 52;
    arr[1] = 53;
    arr[2] = 54;
    return 0;
}
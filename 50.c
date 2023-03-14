// File handling
#include <stdio.h>
int main()
{

    FILE *fptr;
    // Open a file in read mode
    fptr = fopen("gitfiles.txt", "r");
    // Store the content of the file
    char string[50];

    // If the files exists
    if (fptr != NULL)
    {
        // Read the content and print it
        while (fgets(string, 100, fptr))
        {
            printf("%s", string);
        }
        // If the file does not exist
    }
    else
    {
        printf("Not able to open the file.");
    }
    // Close the file
    fclose(fptr);
    return 0;
}
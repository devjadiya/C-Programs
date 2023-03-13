// File Handling
// Creation of file
/* In C, you can create, open, read, and write to files
 by declaring a pointer of type FILE, and use the fopen() function: */
#include <stdio.h>
int main()
{
    FILE *fptr;
    //  fptr = fopen(filename, mode); --> syntax

    //  Create a file
    fptr = fopen("filename.txt", "w");
    fclose(fptr);
    return 0;
}
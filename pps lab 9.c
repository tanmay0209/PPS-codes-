#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    // Open the source file in read mode
    fp1 = fopen("source.txt", "r");

    if (fp1 == NULL)
    {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    fp2 = fopen("destination.txt", "w");

    if (fp2 == NULL)
    {
        printf("Unable to open destination file.\n");
        fclose(fp1);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File contents copied successfully!\n");

    // Close both files
    fclose(fp1);
    fclose(fp2);

    return 0;
}

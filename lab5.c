#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];
    int choice, len, cmp;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    do
    {
        printf("\nSTRING OPERATIONS\n");
        printf("1. Find length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Exit\n");
  

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                len = strlen(str1);
                printf("Length of first string = %d\n", len);
                break;

            case 2:
                strcpy(result, str1);
                printf("Copied string = %s\n", result);
                break;

            case 3:
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string = %s\n", result);
                break;

            case 4:
                cmp = strcmp(str1, str2);

                if(cmp == 0)
                    printf("Both strings are equal.\n");
                else if(cmp < 0)
                    printf("First string is smaller than second string.\n");
                else
                    printf("First string is greater than second string.\n");
                break;
                
            case 5:
                printf("Program terminated. \n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
       break;
     
    } while(choice != 5);

    return 0;
}

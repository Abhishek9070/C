/* Write a menu driven program in C that will do the following without using the library functions from string.h header file.
1) to calculate the length of a given string
2) to compare two given strings
3) to concatenate two given strings
4) to reverse a given strings.
5) exit 
*/
#include <stdio.h>
int strLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}
int strCompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    else
        return 1;
}
void strConcatenate(char str1[], char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
void strReverse(char str[])
{
    int length = strLength(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char str1[100], str2[100];
    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Calculate the length of a string\n");
        printf("2. Compare two strings\n");
        printf("3. Concatenate two strings\n");
        printf("4. Reverse a string\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length of the string: %d\n", strLength(str1));
            break;
        case 2:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            if (strCompare(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strConcatenate(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;
        case 4:
            printf("Enter a string: ");
            scanf("%s", str1);
            strReverse(str1);
            printf("Reversed string: %s\n", str1);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
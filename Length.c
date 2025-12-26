#include <stdio.h>

int stringLength(char *str)
{
    char *ptr = str;
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    return length;
}

int main()
{
    char str[100];

    printf("Enter a string:");
    scanf("%99[^\n]", str);

    int length = stringLength(str);

    printf("The length of the string is: %d\n", length);
}

#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("=========================================\n");
    printf(" STRING LENGTH WITHOUT LIBRARY FUNCTION  \n");
    printf("=========================================\n");
    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("-----------------------------------------\n");
    printf("Length of the string '%s' is: %d\n", str, length);
    printf("=========================================\n");

    return 0;
}

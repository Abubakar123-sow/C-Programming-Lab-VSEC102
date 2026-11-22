#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, isPalindrome = 1;

    printf("=========================================\n");
    printf("         STRING PALINDROME CHECK         \n");
    printf("=========================================\n");
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("-----------------------------------------\n");
    if (isPalindrome) {
        printf("'%s' is a PALINDROME string.\n", str);
    } else {
        printf("'%s' is NOT a palindrome string.\n", str);
    }
    printf("=========================================\n");

    return 0;
}

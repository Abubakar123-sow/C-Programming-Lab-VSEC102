#include <stdio.h>

int main()
{
    int num;

    printf("=========================================\n");
    printf("         EVEN OR ODD CHECKER             \n");
    printf("=========================================\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }
    printf("=========================================\n");

    return 0;
}

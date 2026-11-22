#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *p1, *p2;

    printf("=========================================\n");
    printf("       ADD TWO NUMBERS USING POINTERS    \n");
    printf("=========================================\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    p1 = &num1;
    p2 = &num2;
    sum = *p1 + *p2;

    printf("-----------------------------------------\n");
    printf("Sum of %d and %d = %d\n", *p1, *p2, sum);
    printf("=========================================\n");

    return 0;
}

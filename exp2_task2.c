#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;

    printf("=========================================\n");
    printf("     SUM OF ODD NUMBERS IN A RANGE       \n");
    printf("=========================================\n");
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("-----------------------------------------\n");
    printf("Sum of odd numbers between %d and %d = %d\n", start, end, sum);
    printf("=========================================\n");

    return 0;
}

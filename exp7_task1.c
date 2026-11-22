#include <stdio.h>

int main()
{
    int arr[100], n, i, max;

    printf("=========================================\n");
    printf("    LARGEST ELEMENT IN AN ARRAY          \n");
    printf("=========================================\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("-----------------------------------------\n");
    printf("The largest element in the array is: %d\n", max);
    printf("=========================================\n");

    return 0;
}

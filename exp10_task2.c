#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;

    printf("=========================================\n");
    printf("   PRINT ARRAY IN REVERSE USING POINTERS \n");
    printf("=========================================\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = &arr[n - 1]; // Pointer to last element

    printf("-----------------------------------------\n");
    printf("Array elements in reverse order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n=========================================\n");

    return 0;
}

#include <stdio.h>

// Iterative Fibonacci
void fibonacciIterative(int n)
{
    long long a = 0, b = 1, next, i;
    printf("Fibonacci Series (Iterative, %d terms):\n", n);
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Recursive Fibonacci
long long fibonacciRecursive(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main()
{
    int terms, i;

    printf("=========================================\n");
    printf("           FIBONACCI SERIES              \n");
    printf("=========================================\n");
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    fibonacciIterative(terms);

    printf("Fibonacci Series (Recursive, %d terms):\n", terms);
    for (i = 0; i < terms; i++) {
        printf("%lld ", fibonacciRecursive(i));
    }
    printf("\n=========================================\n");

    return 0;
}

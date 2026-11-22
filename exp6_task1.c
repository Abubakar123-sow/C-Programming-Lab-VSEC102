#include <stdio.h>

void counter()
{
    static int count = 0; // Static variable retains value between calls
    count++;
    printf("Function called: %d time(s)\n", count);
}

int main()
{
    int i;

    printf("=========================================\n");
    printf("  COUNTER FUNCTION USING STATIC VARIABLE \n");
    printf("=========================================\n");

    for (i = 1; i <= 5; i++) {
        counter();
    }

    printf("=========================================\n");
    return 0;
}

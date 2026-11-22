#include <stdio.h>

int main()
{
    float physics, chemistry, maths;
    float total, average;

    printf("=========================================\n");
    printf("   PCM ELIGIBILITY CRITERIA CHECKER      \n");
    printf("=========================================\n");

    printf("Enter marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks in Mathematics: ");
    scanf("%f", &maths);

    total = physics + chemistry + maths;
    average = total / 3.0;

    printf("-----------------------------------------\n");
    printf("Total Marks Obtained : %.2f / 300\n", total);
    printf("PCM Average Percentage: %.2f%%\n", average);
    printf("-----------------------------------------\n");

    if (average >= 50.0) {
        printf("Eligibility Status: ELIGIBLE for Admission\n");
    } else {
        printf("Eligibility Status: NOT ELIGIBLE (Requires min 50%% PCM)\n");
    }
    printf("=========================================\n");

    return 0;
}

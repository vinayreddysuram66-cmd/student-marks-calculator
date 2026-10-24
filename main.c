
#include <stdio.h>

int main() {
    char name[100];
    float marks[3], total = 0, average;
    int i;

    printf("Enter student name: ");
    scanf(" %99[^\n]", name);

    for (i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        if (scanf("%f", &marks[i]) != 1 ||
            marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Enter a number from 0 to 100.\n");
            return 1;
        }
        total += marks[i];
    }

    average = total / 3;

    printf("\nStudent Name: %s\n", name);
    printf("Total Marks: %.2f / 300\n", total);
    printf("Average: %.2f%%\n", average);

    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}

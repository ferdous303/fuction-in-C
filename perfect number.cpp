#include <stdio.h>

int isPerfectNumber(int number);
void printPerfectNumbers(int lower, int upper);

int main() {
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Perfect numbers between %d and %d:\n", lower, upper);
    printPerfectNumbers(lower, upper);

    return 0;
}

int isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

void printPerfectNumbers(int lower, int upper) {
    for (int i = lower; i <= upper; i++) {
        if (isPerfectNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


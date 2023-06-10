#include <stdio.h>
#include <math.h>

double squareRoot(double number);

int main() {
    double number;

    printf("Enter a non-negative number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Error: Square root is not defined for negative numbers.\n");
    } else {
        double result = squareRoot(number);
        printf("Square root of %.2lf is %.2lf\n", number, result);
    }

    return 0;
}

double squareRoot(double number) {
    return sqrt(number);
}


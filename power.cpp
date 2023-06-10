#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent > 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (int i = 1; i <= -exponent; i++) {
            result /= base;
        }
    }

    return result;
}

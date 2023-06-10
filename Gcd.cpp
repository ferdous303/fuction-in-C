#include <stdio.h>

int findGCD(int num1, int num2);

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    int gcd = findGCD(number1, number2);
    printf("The GCD of %d and %d is %d\n", number1, number2, gcd);

    return 0;
}

int findGCD(int num1, int num2) {
    int gcd;

    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

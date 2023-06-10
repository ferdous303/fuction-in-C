#include <stdio.h>

int findLCM(int num1, int num2);
int findGCD(int num1, int num2);

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    int lcm = findLCM(number1, number2);
    printf("The LCM of %d and %d is %d\n", number1, number2, lcm);

    return 0;
}

int findLCM(int num1, int num2) {
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
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

#include <stdio.h>

int factorial(int num);

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}

int factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}


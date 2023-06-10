#include <stdio.h>
int isEven(int number) {
    if (number % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    int result = isEven(inputNumber);

    if (result == 1) {
        printf("%d is an even number.\n", inputNumber);
    } else {
        printf("%d is an odd number.\n", inputNumber);
    }

    return 0;
}


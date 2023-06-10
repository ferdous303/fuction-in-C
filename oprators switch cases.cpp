#include <stdio.h>

float performOperation(float num1, float num2,char operat);

int main() {
    float num1, num2;
    char operat;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operat);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float result = performOperation(num1, num2, operat);

    if (result == -1) {
        printf("Error: Invalid operator or division by zero\n");
    } else {
        printf("%.2f %c %.2f = %.2f\n", num1, operat, num2, result);
    }

    return 0;
}

float performOperation(float num1, float num2, char operat) {
    float result;

    switch (operat) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                result = -1;  
            } else {
                result = num1 / num2;
            }
            break;
        default:
            result = -1;  
    }

    return result;
}


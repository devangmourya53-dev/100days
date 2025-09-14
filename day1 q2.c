/*Q2Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>

int main() {
    int number1, number2;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;

    if (number2 != 0) {
        quotient = (float)number1 / number2;
        printf("The quotient of %d and %d is: %.2f\n", number1, number2, quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    printf("The sum of %d and %d is: %d\n", number1, number2, sum);
    printf("The difference of %d and %d is: %d\n", number1, number2, difference);
    printf("The product of %d and %d is: %d\n", number1, number2, product);

    return 0;
}
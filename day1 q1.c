/* write a program to input two numbers and display their sum. */
#include <stdio.h>

int main() {
    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;
    printf("The sum of %d and %d is: %d\n", number1, number2, sum);

    return 0;
}
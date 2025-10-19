/*Find the digit that occurs the most times in an integer number.*/

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // To store frequency of digits 0–9
    int digit, maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count occurrences of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxCount);

    return 0;
}

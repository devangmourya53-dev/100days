/*Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
int main() 
{
    int binary, num, bit, ones_complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    num = binary; 

    while (num != 0) {
        bit = num % 10; 
        if (bit == 0) {
            ones_complement += 1 * place; 
        }
        place *= 10; 
        num /= 10;
    }
    printf("1's complement of %d is %d\n", binary, ones_complement);
    return 0;
}
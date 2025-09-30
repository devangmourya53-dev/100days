/*Write a program to check if a number is a strong number.
*/
#include<stdio.h>
int main()
{
    int n, original, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        result += factorial(remainder);
        n /= 10;
    }
    if (result == original)
    {
        printf("%d is a strong number", original);
    }
    else
    {
        printf("%d is not a strong number", original);
    }
    return 0;
}
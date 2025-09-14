/*Write a program to convert temperature from Celsius to Fahrenheit.

*/
#include<stdio.h>
void main() 
{
    float c,f;
    printf("Enter temperature in Celsius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit is:%.2f",f);
}           
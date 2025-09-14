/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
int main() {
    float radius;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    printf("Area of circle is:%f\n",3.14*radius*radius);
}
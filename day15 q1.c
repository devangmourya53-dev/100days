/*Write a program to calculate the factorial of a number.
*/
#include<stdio.h>
int main()
{
   long int Fact,m,n;
   printf("Enter a positive integer: ");
   scanf("%ld",&m);
   n=m;                                                                                                                                    
   {Fact=1;
   {while(n>0)
{
Fact=Fact*n;
n=n-1;
}
    printf("Factorial of Number %ld is %ld\n",m,Fact);}
return 0;
}}
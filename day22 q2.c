/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(2*i-1)/(float)(2*i);
    }
    printf("The sum of the series is: %.2f",sum);
    return 0;
}
/*Write a program to swap the first and last digit of a number.
*/
#include<Stdio.h>
int main()
{
    int n,first,last,rev=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    rev=rev*10+last;
    n=temp/10;
    while(n>10)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    rev=rev*10+first;
    printf("The number after swapping first and last digit is:%d",rev);
    return 0;
}
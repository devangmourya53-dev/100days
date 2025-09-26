/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case '/':
            if(b!=0)
                printf("%d / %d = %.2f\n",a,b,(float)a/b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if(b!=0)
                printf("%d %% %d = %d\n",a,b,a%b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    return 0;
    
}
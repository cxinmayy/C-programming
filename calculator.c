#include <stdio.h>
int main()
{
    char ch;
    double num1, num2, sum;
    printf("operation you want to perform (+ , - , * , / ) \n");
    scanf("%c", &ch);
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        switch (ch)
        {
        case '+':
            printf("enter 1st number:");
            scanf("%lf", &num1);
            printf("enter 2nd number:");
            scanf("%lf", &num2);
            sum = num1 + num2;
            printf("your answer is %lf", sum);
            break;
        case '-':
            printf("enter 1st number");
            scanf("%lf", &num1);
            printf("enter 2nd number:");
            scanf("%lf", &num2);
            sum = num1 - num2;
            printf("your answer is %lf", sum);
            break;
        case '*':
            printf("enter 1st number");
            scanf("%lf", &num1);
            printf("enter 2nd number:");
            scanf("%lf", &num2);
            sum = num1 * num2;
            printf("your answer is %lf", sum);
            break;
        case '/':
            printf("enter 1st number");
            scanf("%lf", &num1);
            printf("enter 2nd number:");
            scanf("%lf", &num2);
            sum = num1 / num2;
            printf("your answer is %lf", sum);
             break;

        default:
            break;
        }
    }
    else
    {
        printf("invalid output\n");
    }
}
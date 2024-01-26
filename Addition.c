#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter 1st integer");
    scanf("%d", &num1); //taking 1st number from user
    printf("enter 2nd integer");
    scanf("%d", &num2); //taking 2nd number from user
    sum = sum(num1 + num2);
    printf("the sum of %d and %d is %d", num1, num2, sum);
}
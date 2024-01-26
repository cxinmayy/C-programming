#include <stdio.h>

int factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("enter number you want factorial of:");
    scanf("%d", &num);
    printf("the factorial of given number is %d:", factorial(num));

}
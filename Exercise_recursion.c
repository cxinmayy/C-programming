#include <stdio.h>
int fib_recursive(int n)
{
    if (n < 2)
        return n;
    else
       return(fib_recursive(n-1)+fib_recursive(n-2));
}

int main()
{
    int a;
    printf("enter the number you want fibonacci series of:\n");
    scanf("%d", &a);
    printf("the fibonacci series of %d is", a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d\n", fib_recursive(i));
    }
}
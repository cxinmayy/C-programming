#include <stdio.h>
int main()
{
    int i;
    printf("enter the number you want multiplication table of:");
    scanf("%d", &i);
    for (int j = 1; j <= 10; ++j)
    {
        printf("%d X %d = %d\n", i, j, i * j);
    }
}
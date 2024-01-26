#include <stdio.h>
int main()
{
    int array[11];
    int i;
    printf("read and print elements of array:\n");
    printf("---------------------------------\n");
    printf("input 10 elements of array::\n");
    for (int i = 0; i < 10; i++)
    {
        printf("element %d\n", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the element is %d\n", array[i]);
    }
}
#include <stdio.h>
int main()
{
    int array[100];
    int i, n;
    printf("Enter the number of elements you want in your array: ");
    scanf("%d", &n); // taking input for how many arrays to be created
    printf("input the elements to be stored in array\n");
    for (int i = 0; i < n; i++)
    {
        printf("element %d:", i);
        scanf("%d", &array[i]); // taking input for array
    }
    printf("the stored elements in array are:%d\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    // displaying elements
    printf("the reverse order of elements are:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }
}

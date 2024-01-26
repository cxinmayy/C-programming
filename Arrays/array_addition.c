#include <stdio.h>
int main(){
    int array[100];
    int i, n, sum=0;
    printf(" enter how many elements to be stored in array:\n");
    scanf("%d", &n);
    printf("input the elements\n");
    for (int i = 0; i < n; i++)
    {
        printf(" element %d:\n",i);
        scanf("%d",&array[i]);//sorting algorithm
    }
    //perform sum
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("the result is %d\n", sum);
}
#include <stdio.h>
int main()
{
    int  n;
    int array1[100],array2[100],array3[300];
    int i,j=0,k=0;
    // taking input
    printf("input number of elements to be created");
    scanf("%d", &n);
    printf("input the elements");
    for (int i = 0; i < n; i++)
    {
        printf("element %d", i);
        scanf("%d", &array1[i]);
    }
for(i=0;i<n;i++)
    {
	if (array1[i]%2 == 0)
	{
	   array2[j] = array1[i];
	   j++;
	}
	else
	{
	   array3[k] = array1[i];
	   k++;
	}
    }
printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",array2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", array3[i]);
    }
    printf("\n\n");	
}
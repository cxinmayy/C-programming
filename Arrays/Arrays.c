#include <stdio.h>
int main(){
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        printf("enter the value of %d\n",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("the value of the %d array is %d\n",i,marks[i]);
    }
    
}
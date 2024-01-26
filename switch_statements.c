#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter your Age: ");
    scanf("%d", &age); /*Taking input from user*/

    printf("enter your marks: ");
    scanf("%d", &age); /*taking input from user*/

    switch (age)
    {
    case 3:
        printf(" the number is 3");
        switch (marks)
        {
        case 45:
            printf("your marks are 45");
            break;

        case 10:
            printf("your marks are 10");
            break;
        default:
            printf("your marks is not 45");
            break;
        }
        break;

    default:
        printf("\nInvalid Input!");
        break;
    case 2:
        printf("the number is 2");
    }
}
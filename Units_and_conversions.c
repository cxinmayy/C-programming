#include <stdio.h>
int main()
{
    char ch;
    float km, miles, inches, foot, cm, pound, kg, meters;
    int choices;
    printf("enter y to perform conversion:\n");
    scanf("%c", &ch);
    if (ch == 'y' || ch == 'Y')
    {
        printf("Hi, Lets perform the conversions of units: \n");
        printf("Enter 1 to convert kilometers to miles: \n");
        printf("Enter 2 to convert inches to foot: \n");
        printf("Enter 3 to convert centimeters to inches: \n");
        printf("Enter 4 to convert pounds to kgs: \n");
        printf("Enter 5 to convert inches to meters : \n");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            printf("conversion of km to miles");
            scanf("%f", &km);
            miles = km * .621371;
            printf("your answer is %f miles", miles);
            break;
        case 2:
            printf("conversion of inches to foot");
            scanf("%f", &inches);
            foot = inches * 0.8333;
            printf("your answer is %f feet ", foot);
            break;
        case 3:
            printf("conversion to centimeter to inches");
            scanf("%f", &cm);
            inches = cm * 0.393701;
            printf("your answer is %f inches", inches);
            break;
        case 4:
            printf("converting from lbs to KG:");
            scanf("%f", &pound);
            kg = pound * 0.453592;
            printf("Your Answer is %f kilograms\n", kg);
            break;
        case 5:
            printf("Converting Inches To Meters");
            scanf("%f", &inches);
            meters = inches / 39.3701;
            printf("your answer is %f meters", meters);
            break;

        default:
            break;
        }
    }
    else
    {
        printf("\n\tInvalid Input!!!");
    }
}
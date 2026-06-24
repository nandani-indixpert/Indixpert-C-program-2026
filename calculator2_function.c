#include <stdio.h>
int menu(int a, int b);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int option;
int number1, number2;

int menu(int a, int b)
{
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for Exit\n");
    printf("Plese enter any option = ");
    scanf("%d", &option);
}
int main()
{
    printf("\n========CALCULATOR========\n");

    while (1)
    {
        menu(number1, number2);

        if (option == 5)
        {
            break;
        }
        else
        {
            printf("\nEnter 1st number = ");
            scanf("%d", &number1);
            printf("Enter 2nd number = ");
            scanf("%d", &number2);
            switch (option)
            {
            case 1:
                add(number1, number2);
                break;
            case 2:
                subtract(number1, number2);
                break;
            case 3:
                multiply(number1, number2);
                break;
            case 4:
                divide(number1, number2);
                break;
            default:
                printf("Please enter valid option");
                break;
            }
        }
    }

    return 0;
}
int add(int a, int b)
{
    printf("Sum = %d\n\n", a + b);
}
int subtract(int a, int b)
{
    printf("Subtract = %d\n\n", a - b);
}
int multiply(int a, int b)
{
    printf("Multiply = %d\n\n", a * b);
}
float divide(int a, int b)
{
    printf("Divide = %.2f\n\n", (float)a / b);
}
#include <stdio.h>
int main()
{
    float num1, num2;
    int option;

    while (1)
    {
        printf("\n==========CALCULATOR===========");
        printf("\nClick 1 for Addition:");
        printf("\nClick 2 for Subtraction:");
        printf("\nClick 3 for Multiply:");
        printf("\nClick 4 for Division:");
        printf("\nClick 5 for Exit");
        printf("\nPlease select for option = ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter num1 = ");
            scanf("%f", &num1);
            printf("Enter num2 = ");
            scanf("%f", &num2);
            printf("SUM= %f\n", num1 + num2);
        }
        else if (option == 2)
        {
            printf("Enter num1 = ");
            scanf("%f", &num1);
            printf("Enter num2 = ");
            scanf("%f", &num2);
            printf("Subtract= %f\n", num1 - num2);
        }
        else if (option == 3)
        {
            printf("Enter num1 = ");
            scanf("%f", &num1);
            printf("Enter num2 = ");
            scanf("%f", &num2);
            printf("MULTIPLY= %f\n", num1 * num2);
        }
        else if (option == 4)
        {
            printf("Enter num1 = ");
            scanf("%f", &num1);
            printf("Enter num2 = ");
            scanf("%f", &num2);
            if (num2 != 0)
            {
                printf("DIVSION= %f\n", num1 / num2);
            }
            else
            {
                printf("Error! Denominator should not be 0\n");
            }
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            printf("Please enter valid number\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    int times, user_times;
    int num1, num2;
    printf("========CALCULATOR=========");
    printf("\nEnter how many times you want to use calculator = ");
    scanf("%d", &user_times);

    times = 0;
    do
    {
        
        printf("\nClick 1 for Addition");
        printf("\nClick 2 for Subtraction");
        printf("\nClick 3 for Multiply");
        printf("\nClick 4 for Division");
        printf("\nClick 5 for Exit");

        printf("\nEnter your Choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nAddition");
            printf("\nEnter number 1 = ");
            scanf("%d", &num1);
            printf("Enter number 2 = ");
            scanf("%d", &num2);
            printf("Sum= %d\n", num1 + num2);
            break;
        case 2:
            printf("\nSUBTRACTION");
            printf("\nEnter number 1 = ");
            scanf("%d", &num1);
            printf("Enter number 2 = ");
            scanf("%d", &num2);
            printf("Subtract = %d\n", num1 - num2);
            break;
        case 3:
            printf("\nMULTIPLY");
            printf("\nEnter number 1 = ");
            scanf("%d", &num1);
            printf("Enter number2 = ");
            scanf("%d", &num2);
            printf("Multiply = %d\n", num1 * num2);
            break;
        case 4:
            printf("\nDIVISION");
            printf("\nEnter number 1 = ");
            scanf("%d", &num1);
            printf("Enter number 2 = ");
            scanf("%d", &num2);
            if(num2!=0)
            {
                printf("Division = %.2f\n", (float)num1 / num2);
            }
            else
            {
                printf("Error! 0 in denominator is not allowed.\n");
            }
            break;
        case 5:
            printf("=====EXIT CALCULATOR=======");
            exit(0);
        default:
            printf("Please enter valid choice\n");
            break;
        }
       
        times++;
    } while (times < user_times);

    return 0;
}

#include<stdio.h>
int main()
{
    int button;
    printf("Enter button of remote (between 1 and 12) = ");
    scanf("%d", &button);
    switch(button)
    {
        case 1:
            printf("Star plus");
            break;
        case 2:
            printf("Zee tv");
            break;
        case 3:
            printf("Sony tv");
            break;
        case 4:
            printf("&tv");
            break;
        case 5:
            printf("Cartoon network");
            break;
        case 6:
            printf("Star gold");
            break;
        case 7:
            printf("Zee cinema");
            break;
        case 8:
            printf("Sony pal");
            break;
        case 9:
            printf("Star utsav");
            break;
        case 10:
            printf("DD national");
            break;
        case 11:
            printf("Zee news");
            break;
        case 12:
            printf("ABP news");
            break;
        default:
            printf("Invalid number");
            break;
    }
    return 0;
}
   
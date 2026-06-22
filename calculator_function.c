#include<stdio.h>
int add();
int subtract();
int multiply();
float divide();

int add()
{
    int a = 10, b = 20;
    printf("Sum = %d",a + b);
}
int subtract()
{
    int a = 10, b = 20;
    printf("\nSubtract =  %d", a -b);
}
int multiply()
{
    int a = 10, b = 20;
    printf("\nMultiply = %d",a * b);
}
float divide()
{
    float x = 10, y = 20;
    printf("\nDivide = %.2f",x/y);
}
int main()
{
    add();
    subtract();
    multiply();
    divide();
    return 0;
}
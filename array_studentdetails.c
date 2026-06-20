#include<stdio.h>
int main()
{
    int id,pincode;
    char name[30];
    char local_address[30],district[20];
    char email[30];
    int age;

    printf("\n======STUDENT DETAILS======");
    printf("\nEnter student name = ");
    scanf("%29s", name);
    printf("Enter student Id = ");
    scanf("%d", &id);
    printf("Enter student local address = ");
    scanf( " %[^\n]", local_address);
    printf("Enter student district = ");
    scanf("%19s", district);
    printf("Enter student pincode = ");
    scanf("%d", &pincode);
    printf("Enter student email Id = ");
    scanf("%29s",email);
    printf("Enter student age = ");
    scanf("%d", &age);

    printf("\n=======STUDENT DETAILS=======");
    printf("\nStudent's name = %s", name);
    printf("\nStudent's id = %d", id);
    printf("\nStudent address:");
    printf("\nLocal address = %s", local_address);
    printf("\nDistrict = %s", district);
    printf("\nPincode = %d", pincode);
    printf("\nStudent's email Id = %s", email);
    printf("\nStudent's age = %d", age);
    return 0;
}

/* Question 2: 
Write a C Program to take input from user. It should be Name, age, department, Student ID University name and then display details
*/

#include <stdio.h>

int main()
{
    char name[50];
    int age;
    char department[50];
    char studentID[20];
    char university[100];

    printf("Enter your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Department: ");
    scanf(" %[^\n]", department);

    printf("Enter your Student ID: ");
    scanf("%s", studentID);

    printf("Enter your University Name: ");
    scanf(" %[^\n]", university);

    printf("\n----- Student Details -----\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Student ID: %s\n", studentID);
    printf("University: %s\n", university);

    return 0;
}
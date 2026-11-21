#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Accept student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].marks1,
              &s[i].marks2, &s[i].marks3);

        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;

        s[i].percentage = s[i].total / 3;
    }

    // Display student results
    printf("\n--------- STUDENT RESULTS ---------\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d", s[i].rollno);
        printf("\nName        : %s", s[i].name);
        printf("\nTotal Marks : %.2f", s[i].total);
        printf("\nPercentage  : %.2f%%", s[i].percentage);

        if (s[i].percentage >= 40)
            printf("\nResult      : PASS\n");
        else
            printf("\nResult      : FAIL\n");
    }

    return 0;
}

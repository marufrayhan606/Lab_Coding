#include <stdio.h>

void calculateGrade(double marks)
{
    if (marks >= 80)
    {
        printf("A+\n");
    }
    else if (marks >= 75)
    {
        printf("A\n");
    }
    else if (marks >= 70)
    {
        printf("A-\n");
    }
    else if (marks >= 65)
    {
        printf("B+\n");
    }
    else if (marks >= 60)
    {
        printf("B\n");
    }
    else if (marks >= 55)
    {
        printf("B-\n");
    }
    else if (marks >= 50)
    {
        printf("C+\n");
    }
    else if (marks >= 45)
    {
        printf("C\n");
    }
    else if (marks >= 40)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}

int main()
{
    int noOfSubjects;
    double subjectMarks;
    printf("Enter the number of subjects: ");
    scanf("%d", &noOfSubjects);

    for (int i = 0; i < noOfSubjects; i++)
    {
        printf("\n");
        printf("Enter the marks of subject %d: ", i + 1);
        scanf("%lf", &subjectMarks);
        printf("Grade of subject %d is: ", i + 1);
        calculateGrade(subjectMarks);
        printf("\n");
    }

    return 0;
}

/*
*Write a C program that takes the marks of a student as input and calculates the corresponding grade according to the DIU grading pattern.

Author: Md. Maruf Rayhan :D
*/
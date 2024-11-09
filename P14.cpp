﻿#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int set0fGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main()
{
    int student;
    const int studentGrades[STUDENTS][EXAMS] = { {77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81} };

    printf("The array is:\n");
    printArray(studentGrades, STUDENTS, EXAMS);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS), maximum(studentGrades, STUDENTS, EXAMS));

    for (student = 0; student < STUDENTS; student++) {
        printf("The average grade for student %d is %.2f\n", student, average(studentGrades[student], EXAMS));
    }

    system("pause");
    return 0;
}

int minimum(const int grades[][EXAMS], int pupils, int tests)
{
    int min = grades[0][0];
    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            if (grades[i][j] < min) {
                min = grades[i][j];
            }
        }
    }
    return min;
}

int maximum(const int grades[][EXAMS], int pupils, int tests)
{
    int max = grades[0][0];
    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            if (grades[i][j] > max) {
                max = grades[i][j];
            }
        }
    }
    return max;
}

double average(const int set0fGrades[], int tests)
{
    int total = 0;
    for (int i = 0; i < tests; i++) {
        total += set0fGrades[i];
    }
    return (double)total / tests;
}

void printArray(const int grades[][EXAMS], int pupils, int tests)
{
    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[50];
    char className[20]; 
    int rollNo;
    char enrollment[20];
    float marks;
};

int main() {
    int N, i;
    struct Student *students; 

    printf("Enter the number of students: ");
    scanf("%d", &N);

    
    students = (struct Student *)malloc(N * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1; 
    }

    
    printf("\nEnter student details:\n");
    for (i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", students[i].name); 
        printf("Class: ");
        scanf(" %s", students[i].className);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Enrollment: ");
        scanf(" %s", students[i].enrollment);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\n--- Student Records ---\n");
    for (i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Class: %s\n", students[i].className);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Enrollment: %s\n", students[i].enrollment);
        printf("Marks: %.2f\n", students[i].marks);
    }

    
    free(students);

    return 0;
}

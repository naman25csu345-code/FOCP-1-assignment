#include <stdio.h>
#include <string.h>

int main() {
    int n, i, count = 0;
    char names[100][50]; 
    int marks[100];      

    printf("Enter number of students: ");
    scanf("%d", &n);


    printf("Enter student names and their marks:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", names[i]);
        printf("Student %d marks: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%s\n", names[i]);
            count++;
        }
    }

  
    if (count > 0)
        printf("\nTotal number of students who scored 99: %d\n", count);
    else
        printf("\nNo student scored 99.\n");

    return 0;
}

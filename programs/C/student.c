#include <stdio.h>

typedef struct student {
    char* first_name;
    char* surname;
    int exam_mark;
    int project_mark;
}student;

void printStudent(student stud);

int main() {
    student student1 = {"Ibra", "Sheriff", 75, 88};
    printStudent(student1);
    return 0;
}

void printStudent(student stud) {
    printf("Name: %s %s Exam Mark: %d%% Project Mark: %d%%\n", stud.first_name, stud.surname, stud.exam_mark, stud.project_mark);
}
#include <stdio.h>

struct student {
    char name [20];
    char student_id [21]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student = {.student_id = "114514", .name = "name surname",.mark = 35};
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}
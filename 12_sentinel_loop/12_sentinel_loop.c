#include <stdio.h>

int main(void){
    int current_student = 1;
    int grade_input = 0;
    int total_grade = 0;

    printf("Enter the grade for student %d (-1 to exit): \n", current_student);
    scanf("%d", &grade_input);

    while (grade_input != -1){
        total_grade += grade_input;
        current_student++;
        printf("Enter the grade for student %d (-1 to exit): \n", current_student);
        scanf("%d", &grade_input);
    }

    printf("The total grade is %d\n", total_grade);
    printf("The average grade is %.2lf\n", (double) total_grade / (current_student - 1));

    return 0;
}
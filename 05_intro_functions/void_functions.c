#include <stdio.h>

//Function Definition
void printCourseWithNumber(int course_number){
    printf("you are in COP%d course\n", course_number);
}

void printCourse(void){
    printCourseWithNumber(2271);
}

int main(void){
    //Call printCourse function
    printCourse();

    int number = 1234;
    printCourseWithNumber(number);

    return 0;
}
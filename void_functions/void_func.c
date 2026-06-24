#include <stdio.h>

void two(void){
    puts("two");
}

void one_three(void){
    puts("one");
    two();
    puts("three");
}

int main() {
    //Function call
    puts("starting now:");
    one_three();
    puts("done!");

    return 0;
}
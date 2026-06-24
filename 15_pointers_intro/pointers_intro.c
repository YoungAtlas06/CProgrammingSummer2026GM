/*
    Intro to pointers
*/

#include <stdio.h>

int main(void){
    int luck = 100;

    luck += 5;

    printf("The address of luck: %p\n", &luck);

    //create a pointer variable (stores memory address)
    // data_type * pointer_variable_name;

    //Integer pointer
    int* luck_ptr = &luck;
    printf("The value of the luck_ptr: %p\n", luck_ptr);

    //Access the data the pointer is pointing to
    // * - dereferencing operator
    printf("Dereference luck_ptr: %d\n", *luck_ptr);

    //Modify the data
    *luck_ptr = 200;
    printf("The address of luck: %d\n", luck);

    return 0;
}
/*
    into to arrays in c
*/

#include <stdio.h>

//Symbolic constant
#define SIZE 10

//Functions with arrays
void printArray(int* arr, int size);

int main(void){
    //Create an array of 15 integers
    int arr[SIZE];

    //Initialize first element with 999
    arr [0] = 999;

    //Initialize the last element with 111
    arr [SIZE - 1] = 111;

    //Initialize all the elements of the array
    for(int i = 0; i < SIZE; i++){
        arr[i] = i + 1;
    }

    //Re-initialize with values (10,20,30 ... 10000)
    for(int i = 0; i < SIZE; i++){
        arr[i] = (i + 1) * 10;
    }

    //Print an array
    printArray(arr, SIZE);

    return 0;

}

void printArray(int* arr, int size){
    printf("%c", '[');
    for (int i=0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    puts("]");
}
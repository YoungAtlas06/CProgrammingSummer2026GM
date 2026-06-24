/*
    Using constsnt arrays

    Searching in arrays
*/

#include <stdio.h>
#define SIZE 10

void printDoubledArray(const int* arr, int size);
int searchFirstZero(const int* arr, int size);
int searchLastZero(const int* arr, int size);
int searchNthZero(const int* arr, int size, int n);
int searchLastNthTarget(const int* arr, int size, int n, int target);

int main(void){
    //Create an array
    int a[SIZE] = {1, 2, 3, 4};

    //Call array
    printDoubledArray(a, SIZE);
    printf("The first zero is at index %d\n", searchFirstZero(a, SIZE));
    printf("The last zero is at index %d\n", searchlastZero(a, SIZE));
    
    return 0;
}

void printDoubledArray(const int* arr, int size){
    for (int i = 0; i < SIZE; i++){
        
        printf("%d ", arr[i] * 2);
    }
    puts("");
}

int searchFirstZero(const int* arr, int size){
    for (int i = 0; i < SIZE; i++){
        if (arr[i] == 0){
            return i; //Return the index of the first zero
        }
    }

    return -1;
}

int searchLastZero(const int* arr, int size){
    for (int i = size - 1; i >= 0; i--){
        if (arr[i] == 0){
            return i;
        }
    }
    return -1;
}
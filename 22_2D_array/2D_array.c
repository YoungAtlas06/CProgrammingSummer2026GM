#include <stdio.h>

#define ROW 8
#define COL 8

void print(int rows, int cols, int arr[rows][cols]);
void setMainDiagnol(int rows, int cols, int arr[rows][cols], int value);
void setSecondDiagnol(int rows, int cols, int arr[rows][cols], int value);

int main(void){
    //Create 2d array
    int arr[ROW][COL] = {
        {1, 2, 3},
        {3, 4, 5},
        {6, 7, 8}
    };

    //Access an element
    printf("%d\n", arr[0][4]);

    // Modify the value of an element
    arr[2][1] = 17;

    // Print an array
    print(ROW, COL, arr);
    puts("");

/*    //Set the second row with sevens
    for (int j = 0; j < COL; j++){
        arr[1][j] = 7;
    }

    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            printf("%4d", arr[i][j]);
        }
        puts("");
    }
    puts("");

    //Set first col with 5
        for (int i = 0; i < ROW; i++){
        arr[i][0] = 5;
    }

    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            printf("%4d", arr[i][j]);
        }
        puts("");
    }
    print(ROW, COL, arr);
    puts("");
*/
    setMainDiagnol(ROW, COL, arr, 10);
    print(ROW, COL, arr);
    puts("");

    setSecondDiagnol(ROW, COL, arr, 10);
    print(ROW, COL, arr);
    puts("");

    return 0;
}

void print(int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            printf("%4d", arr[i][j]);
        }
        puts("");
    }
}

void setMainDiagnol(int rows, int cols, int arr[rows][cols], int value){
    if(rows != cols){
        puts("Not a matrix");
        return;
    }
    for(int i = 0; i < rows; i++){
        arr[i][i] = value;
    }
}

void setSecondDiagnol(int rows, int cols, int arr[rows][cols], int value){
     if(rows != cols){
        puts("Not a matrix");
        return;
    }

    for(int i = 0, j = cols -1; i < rows; i++, j--){
        arr[i][j] = value;
    }
}
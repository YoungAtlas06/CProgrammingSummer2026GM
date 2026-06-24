#include <stdio.h>

#define ROW 5
#define COL 5

void print(int rows, int cols, double arr[rows][cols]);
double sum(int rows, int cols, const double arr[rows][cols]);
double sumcol(int rows, int cols, const double arr[rows][cols], int col_value);


int main(void){
    double arr[ROW][COL] = {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0, 12.0, 13.0, 14.0, 15.0},
        {16.0, 17.0, 18.0, 19.0, 20.0},
        {21.0, 22.0, 23.0, 24.0, 25.0}
    };

    arr[0][1] = 24.0;
    arr[2][2] = 43.0;
    arr[4][4] = sum(ROW, COL, arr) - 350;
   
    print(ROW, COL, arr);

    char s[6];

    for( int i = 0; i < 5; i++){
        s[i] = sumcol(ROW, COL, arr, i);
    }

    s[0] += 34;   // first character
    s[1] -= 12;   // second character
    s[2] -= 38;   // third character
    s[3] += 1;    // fourth character
    s[4] -= 24;   // fifth character

    s[5] = '\0';  // null terminator

printf("%s\n", s);

    return 0;
}

double sum(int rows, int cols, const double arr[rows][cols]){
    double sum = 0;

    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

void print(int rows, int cols, double arr[rows][cols]){
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            printf("%5.1lf ", arr[i][j]);
        }
        puts("");
    }
}

double sumcol(int rows, int cols, const double arr[rows][cols], int col_value){
    double sum = 0;
    for(int i = 0; i < rows; i++){
        sum += arr[i][col_value];
    }

    return sum;
}
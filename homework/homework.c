#include <stdio.h>

#define ROW 5
#define COL 5

void print(int rows, int cols, double arr[rows][cols]);

int main(void){
    char s[] = "3FMNV";
    char *a = &s[1];
    char c = s[2];

    s[2] = *a;
    s[1] = c;

    puts(s);
   

    return 0;
}

void print(int rows, int cols, double arr[rows][cols]){
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            printf("%5.1lf ", arr[i][j]);
        }
        puts("");
    }
}
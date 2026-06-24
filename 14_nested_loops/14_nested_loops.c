/*
    Practice with nested loops
    Make a hollow rectangle
*/

#include <stdio.h>
#include <unistd.h> // usleep()

void printRectangle(int rows, int cols);
void printTriangleTopLeft(int size);
void printTriangleBottomLeft(int size);
void printTriangleBottomRight(int size);

int main(void){
    int rows, cols, size;

   /*
    do{
        printf("Enter rows and columns: ");
        scanf("%d%d", &rows, &cols);
    }while(rows <=0 || cols <= 0);

    printRectangle(rows, cols);

    do{
        printf("Enter triangle size: ");
        scanf("%d", &size);
    }while(rows <=0 || cols <= 0);

    for(int i =0; i < 1000; i++){
        printTriangleTopLeft(size);
        printTriangleBottomLeft(size);
    }
    */
     do{
        printf("Enter triangle size: ");
        scanf("%d", &size);
    }while(rows <=0 || cols <= 0);

    printTriangleBottomRight(size);
    
    return 0;
}

void printRectangle(int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if((i == 0 && j ==0) || 
                (i ==0 && j == cols - 1)||
                (j == 0 && i == rows - 1)||
                (i == rows - 1 && j == cols - 1)){
                    printf("0");
                }
            else if(j == 0 || j == cols - 1 || i == 0 || i == rows - 1){
                printf("%c", '*');
            }
            else{
                printf("%c", ' ');
            }
        }puts("");
    } 
}

void printTriangleTopLeft(int size){
for (int i = 0; i < size; i++){
    for(int j = 0; j < size - i; j++){
        printf("%c", '*');
        usleep(3000);
    }
    puts(" ");
}

}

void printTriangleBottomLeft(int size){
   for (int i = 0; i < size; i++){
    for(int j = 0; j <= i; j++){
        printf("%c", '*');
        usleep(3000);
    }
    puts(" ");
} 
}

void printTriangleBottomRight(int size){
    for(int i = 0; i < size; i++){
        //Print leading spaces
        for(int j = 0; j < size - 1 - 1; j++){
            printf("%c", ' ');
        }
        //Print stars
        for(int j= 0; j <= i; j++){
            printf("%c", '*');
        }
        puts("");
    }
}
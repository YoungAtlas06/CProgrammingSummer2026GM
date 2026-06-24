/*
    intro to loops
*/

#include <stdio.h>

void printHello(int times);

int main(void){

    int n;
    printf("Enter number of times to be repeated\n");
    scanf("%d", &n);

    printHello(10);
    
    return 0;
}

void printHello(int times){
    int c = 1;
    while(times > 0){
        printf("%d Hello \n", c);

        c = c + 1;
        times = times - 1;
    }
}
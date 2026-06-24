#include <stdio.h>

int main(void){

    for(int i = 15; i <= 45; i += 5){
        printf("%d\n", i);
    }

    for(int c = 100; c >= 2; c-= 2){
        if(c % 2 == 0){
            printf("%d\n", c);
        }
    }

    return 0;
}
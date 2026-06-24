/*
    Using break continue statements to control loops.
    
    Calculate the sum of entered numbers
*/

#include <stdio.h>

int main(void){
    int sum = 0, num = 0;

    //Create an infinite while loop
    while (1){
        puts("Enter the number between -100 and 100 to sum (0 to exit)");
        scanf("%d", &num);

        if (num == 0){
            break;
        }
        else if (num < -100 || num > 100){
            continue;
        }

        sum += num;
    }

    printf("The sum is %d\n", sum);
}
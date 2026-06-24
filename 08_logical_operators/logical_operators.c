/*
    Logical Operator

    && - logical AND
    || - logical OR
    !  - logical NOT

*/

/*
    Create a function named checkInput. The function takes 2 integers.
    Returns 1 if the 1st integer is divisible by second integer and by (second - 3) integer (12 and 6 should meet this condition)
    Returns 2 if the 1st integer is divisible by 2nd integer or by (second - 3) integer
    Returns 3 if the 1st number is not divisible by 2nd integer nor by (second - 3) integer
*/

#include <stdio.h>

int main(void){
    int input;

    //Scan the input
    printf("Enter your input: ");
    scanf("%d", &input);

    //Check the input
   /* if (input > 0){
        if(input < 100){
            if (input %2 == 0){
                puts("Valid input");
            }
        }
    }
    */
   if(input >0 && input <100 && input % 2 == 0){
    puts("Valid Input");
   }
   else{
    puts("Invalid Input");
   }

    return 0;
}
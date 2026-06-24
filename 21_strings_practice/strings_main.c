#include "my_c_type.h"

void printInLowercase(const char* str);
void printInReversecase(const char* str);
void printWithNoDigits(const char* str);
void printSpecialCharacters(const char* str);
void convertToLower(const char* str);
void printWords(const char* str);

int main(void){
    char ch_input = 'B';

    printf("isUpper(%c) = %d\n", ch_input, isUpper(ch_input));

    /*
        Create a string
    */
   char str[] ="HeLlO WoRlD123!";

   //Print the string
   puts("Using printf");
   printf("%s\n\n", str);

   puts(str);
   puts("\n");

   puts("Using a loop");
   for (int i = 0; str[i] != '\0'; i++){ //str[i] != '\0' - continues until the end of the string
        putchar(str[i]);
   }
   puts("\n");

   puts("Print in lowercase");
   printInLowercase(str);

   printInReversecase(str);

    return 0;
}

void printInLowercase(const char* str){
    for (int i = 0; str[i] != '\0'; i++){
        putchar(toLower(str[i]));
   }
   puts("\n");
}

void printInReversecase(const char* str){
    for (int i = 0; str[i] != '\0'; i++){
        if (isUpper(str[i])){
            putchar(toLower(str[i]));
        }
        else{
            putchar(toUpper(str[i]));
        }
    }
    puts("\n");
}
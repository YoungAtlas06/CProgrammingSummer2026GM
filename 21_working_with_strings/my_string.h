#include "my_ctype.h"

void printInLowercase(const char* str);
void printInReversecase(const char* str);
void printWithNoDigits(const char* str);
void printSpecialCharacters(const char* str);
void convertToLower(const char* str);
void printWords(const char* str);

void getString(char* str, const char* prompt);

int myStrLen(const char* str);

void my_strcpy(char* dest, const char* src);

void myStrCat(char* dest, const char* src);

int myStrcmp(const char* s1, const char* s2);//Aplhebetize by case. returns 0 if strings are the same; -1 if  1st smaller; 1 if 1st larger



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

void getString(char* str, const char* prompt){
    printf("%s\n", prompt);

    int i = 0;

    while(1){
        char input = getchar();
        if (input == '\n'){
            break;
        }
        else{
            str[i] = input;
            i++;
        }
    }
    //Adds Null character
    str[i] = '\0';
}

int myStrLen(const char* str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }

    return i;
}

void my_strcpy(char* dest, const char* src){
    int i = 0;
    while(1){
        dest[i] = src[i];
        if(src[i] == '\0'){
            break;
        }
        i++;
    }
}

void myStrCat(char* dest, const char* src){
    int i = myStrLen(dest);
    int j = 0;
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
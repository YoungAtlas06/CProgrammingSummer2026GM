#include "my_string.h"

int main(void){
    char s[100] = "Hello Jack";

    getString(s, "Enter the string");

    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", myStrLen(s));

    //Test copy string
    char s2[100];
    getString(s2, "Enter the secong string");
    puts("Copying the second string into the first one");
    my_strcpy(s, s2);
    //printing after copy
    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", myStrLen(s));

    puts("Adding the second string to the first one");
    myStrCat(s, s2);
    //Printing after adding
    printf("The string is: \"%s\"\n", s);
    printf("The length is: %d\n", myStrLen(s));

    return 0;
}
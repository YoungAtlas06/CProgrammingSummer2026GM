#include <stdio.h>

int main(void){
    FILE* file = fopen("output.txt", "r");// Open the file for reading

    if (file == NULL){
        puts("File cannot be oppened");
        return 1;
    }

    char verb[20], adj[20], noun[20];

    while(!feof(file)){
        fscanf(file, "%s %s %s", adj, noun, verb);

        printf("%s %s %s \n", adj, noun, verb);
    }

    //Closing the file
    fclose(file);

    return 0;
}
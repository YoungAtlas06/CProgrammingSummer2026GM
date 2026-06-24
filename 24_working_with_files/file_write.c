#include <stdio.h>// FILE structure
#include <stdlib.h>

int main(void){
    FILE* file = fopen("output.txt", "w");//Open the file for writing

    //Check wether the file was opened
    if (file == NULL){
        puts("File cannot be opened");
        return 1;
    }

    char* verbs[10] = {"Fluctuate", "run", "hide", "walk", "jump", "want", "wander", "accelerate"};
    char* nouns[10] = {"Fluctuate", "run", "hide", "walk", "jump", "want", "wander", "accelerate"};
    char* adjectives[10] = {"Fluctuate", "run", "hide", "walk", "jump", "want", "wander", "accelerate"};

    //write into file
    for (int i = 0; i < 10; i ++){
        fprintf(file, "%s %s %s\n", adjectives[rand()%10], nouns[rand()%10], verbs[rand()%10]);
    }

    //close file
    fclose(file);

    return 0;
}
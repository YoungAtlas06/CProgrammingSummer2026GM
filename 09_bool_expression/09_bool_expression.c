#include <stdio.h>
#include <stdbool.h>

//Function prototype
bool isGreaterOrEqual(int n1, int n2);
int largest(int n1, int n2, int n3);

int main()
{
    //Function call
    printf("%d\n", isGreaterOrEqual(3, 5));
    printf("%d\n", isGreaterOrEqual(5, 2));
    printf("The largest %d\n", largest(10, 11, 12));
    printf("The largest %d\n", largest(12, 11, 10));
    printf("The largest %d\n", largest(10, 12, 11));

    return 0;
}

//Function definition
bool isGreaterOrEqual(int n1, int n2){
    return (n1 >= n2);
}

int largest(int n1, int n2, int n3){
    if (isGreaterOrEqual(n1, n2) && isGreaterOrEqual(n1, n3)){
        return n1;
    }
    else if (isGreaterOrEqual(n2, n3)){
        return n2;
    }
    else{
        return n3;
    }
}
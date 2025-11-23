#include <stdio.h>
#include <stdlib.h>
int main(){
    int students[20];
    // printf("%zu\n",sizeof(students));
    char *grades = malloc(400);
    printf("%lu\n",sizeof(&grades)); //Prints 8 -> cuz the size of pointer
    return 0;
}
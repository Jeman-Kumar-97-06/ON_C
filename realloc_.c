#include <stdio.h>
#include <stdlib.h>

int main(){
    //realloc -> reallocation of memory size.
    //           resize previously allocated memory.
    //           realloc(pointer,bytes);
    int number = 0;
    
    printf("Enter the number of grades : ");
    scanf("%d",&number);

    char *grades = malloc(number * sizeof(char));

    if (grades == NULL) {
        printf("Sorry!");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter grad #%d : ",i+1);
        scanf("%c\n",&grades[i]);
    }

    //Ask if user wants to change the size of the array, so that you can reallocate memory:
    int newNumber = 0;
    printf("Enter a new number : ");
    scanf(" %d",&newNumber);
    //Create a temporary pointer first : 
    char *temp = realloc(grades,newNumber*sizeof(char));
    if (temp == NULL) {
        printf("Could not reallocate memory!\n");;
        return 1;
    }
    else {
        grades = temp;
        temp = NULL; //If you want to use temp again;
        for(int i = number; i< newNumber; i++) {
            printf("Enter grad #%d : ",i+1);
            scanf("%c\n",&grades[i]);
        }
        //Print all the elements 
        for (int i = 0; i < newNumber; i++) {
            printf("grade #%d : %c\n",i+1, grades[i]);
        }
    };


    //Print all the elements 
    for (int i = 0; i < number; i++) {
        printf("grade #%d : %c\n",i+1, grades[i]);
    }

    free(grades);
    grades = NULL;

    return 0;
}
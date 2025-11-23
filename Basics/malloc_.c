#include <stdio.h>
#include <stdlib.h>
int main(){
    int number;
    printf("Enter the number grades you need find the average of :");
    scanf("%d",&number);
    char *grades = malloc(number * sizeof(char));
    if (grades == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    };// Used to avoid segmentation fault caused by accessing a null pointer.
    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d : ",i+1);
        scanf(" %c",&grades[i]);
    }
    for (int i=0; i< number; i++) {
        printf("\n%dth grade : %c\n",i+1,grades[i]);
    }
    free(grades);
    grades = NULL;// avoids dangling pointers.
    return 0;
}
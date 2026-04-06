//Taking input : 
#include <stdio.h>
int main(void){
    int number;
    printf("Type your age:\n");
    scanf ("%i",&number);
    if (number >= 18){
        printf("You are a Major!\n");
    }
    else{
        printf("You are still a Minor :(\n");
    }
    return 0;
}
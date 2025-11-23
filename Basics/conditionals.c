//and : &&
//or  : ||
//Not : !=
//Eq  : ==

#include <stdio.h>
int main(){
    int age;
    printf("Give me your age: ");
    scanf("%d",&age);
    if(age >= 18) {
        printf("You are a Major");
    }
    else if (age == 0) {
        printf("You aren't born yet");
    }
    else {
        printf("You are a minor");
    }
}
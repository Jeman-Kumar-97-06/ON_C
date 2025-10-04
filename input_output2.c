#include <stdio.h>
int main(){
    int integer;
    float floating;
    char name[100];
    printf("Enter your age : ");
    scanf("%d",&integer);
    printf("Enter your percentage : ");
    scanf("%f",&floating);
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your age is : %d\nYour percentage is : %f\nYour name is : %s\n",integer,floating,name);
}
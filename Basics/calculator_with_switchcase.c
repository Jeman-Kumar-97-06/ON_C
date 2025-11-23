#include <stdio.h>
int main(){
    float x;
    float y;
    char ope;
    printf("Enter 2 numbers you want to operate on :x y\n");
    printf("Enter x:");
    scanf("%f",&x);
    printf("Enter y:");
    scanf("%f",&y);
    printf("Enter the operation you want to use: only (+,-,*,/) used :\n");
    scanf(" %c",&ope);//The Reason for space is the 'enter' or '\n' from previos input is taken as the input of this line. That 
                      //xtra 'enter' or '\n' is consumed here in that extra 'space' in the beginning.
    switch(ope){
        case '+':
            printf("%f\n",x+y);
            break;
        case '-':
            printf("%f\n",x-y);
            break;
        case '*':
            printf("%f\n",x*y);
            break;
        case '/':
            printf("%f\n",x/y);
            break;
        default:
            printf("Error! No Such Opertion allowed!");
    }
    return 0;
}
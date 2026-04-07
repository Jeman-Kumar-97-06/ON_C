#include <stdio.h>

int main(void){
    int a,b;
    char op;
    printf("Give your grade:\n");
    scanf("%i%c%i",&a,&op,&b);
    switch (op){
        case '+':
            printf("%i\n",a+b);
            break;
        case '-':
            printf("%i\n",a-b);
            break;
        case '*':
            printf("%i\n",a*b);
            break;
        default:
            printf("Operation not supported!\n");
            break;
    }
    return 0;
}
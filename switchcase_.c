#include <stdio.h>
int main(){
    char x;
    printf("Enter an alphabet : ...");
    scanf("%c",&x);
    switch(x){
        case 'a':
            printf("A for Apple\n");
            break;
        case 'b':
            printf("B for Bat\n");
            break;
        default:
            printf("Error!\n");
    }
    return 0;
};


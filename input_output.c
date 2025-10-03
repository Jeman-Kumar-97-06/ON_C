#include <stdio.h>
int main() {
    char *name[5];
    printf("Enter your name ...\n");
    scanf("%s\n",&name);
    printf("Hi, %s!",*name);
    return 0;
}
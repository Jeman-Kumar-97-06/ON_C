#include <stdio.h>
void display(){
    extern int x;
    x++;
    printf("Hello from file2.\n");
    printf("%d\n",x);
}
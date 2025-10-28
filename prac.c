#include <stdio.h>

int main(){
    extern int x;
    printf("F : %d\n",x);
};

int x = 100;
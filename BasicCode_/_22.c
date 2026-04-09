#include <stdio.h>

void calculateTNumber(int n){
    int i, tN = 0;
    for (i=1; i<=n; ++i)
        tN += i;
    printf("Triangular Number %i is %i\n",n,tN);
}

int main(void){
    calculateTNumber(10);
    calculateTNumber(20);
    calculateTNumber(50);
    return 0;
}
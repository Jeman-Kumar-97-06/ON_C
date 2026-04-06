#include <stdio.h>

void main(){
    int n,tN;
    tN = 0;
    for (n=1;n<=200;n=n+1)
        tN += n;
    printf("%i\n",tN);
}
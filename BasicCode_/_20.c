#include <stdio.h>

void main(){
    int i;
    float x[8] = {100.0, 3.4, 10.0};
    for (i=0;i<=7;++i){
        printf("%.2f\n",x[i]);
    }
}
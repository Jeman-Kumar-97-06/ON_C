#include <stdio.h>

void multiplyBy2(float array[], int n){
    int i;
    for (i=0; i<n; ++i)
        array[i] *= 2;
}

int main(void){
    //Default : float x = -3.7 --> Creates a 'double'. --> Then converts to float. --> Ten stores -3.7 in x.
    //Here    : directly stores as float due to the prsence of 'f':
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;
    void multiplyBy2(float array[], int n);

    multiplyBy2(floatVals, 4);

    for (i=0; i<4; ++i){
        printf("%.2f ", floatVals[i]);
    }

    printf("\n");

    return 0;
}
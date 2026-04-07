//Find the GCD of 2 numbers:
#include <stdio.h>
int main(void){
    int u, v, temp;
    printf("Please type in 2 +ve numbers.\n");
    scanf("%i%i",&u,&v);

    while (v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("The greatest common divisor is %i\n",u);
    return 0;
}
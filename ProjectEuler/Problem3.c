/*
The prime factors of 13195 are 5,7,13 and 29.
What is the largest prime factor of the number 600851475143?
*/

#include <stdio.h>

int main(){
    long long int x = 600851475143;
    long long int i;
    long long int j;
    for (i=x;x>0;++x){
        for (j=i;j>0;++j){
            if (j%i==0 && j!=i && j!=1){
                printf("%lld",&j);
                return 0;
            }
        }
    }
    return 0;
}
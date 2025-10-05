#include <stdio.h>
int main(){
    int num, count, sum = 0;
    printf("Enter a positive number: \n");
    scanf("%d",&num);
    for (count = 1; count <= num ; ++count) {
        sum += count;
    }
    printf("Sum = %d\n",sum);
    return 0;
};
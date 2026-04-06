//Generate a table of triangular numbers:

#include <stdio.h>
int main(void){
    int n,tNs;
    printf("Table of Triangular Numbers\n\n");
    printf(" n    Sum from 1 to n\n");
    printf("---   ---------------\n");
    tNs = 0;
    for (n=1; n<= 10; ++n) {
        tNs += n;
        printf("  %2i               %i\n",n,tNs); //%2i -> take up 2 columns for every number, be it single / double digit.
    };
    return 0;
}
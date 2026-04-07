#include <stdio.h>

int main(void){
    int ratingCounters[10], i, response;

    for(i=0; i<=9; ++i){
        ratingCounters[i] = 0;
    }

    printf("Enter your response\n");

    for (i=1; i<=20; ++i){
        scanf("%i", &response);
        if (response <1 || response > 10){
            printf("Bad response: %i\n",response);
        }
        else {
            ++ratingCounters[response-1];
        }
    }

    printf("\n\nRating   Number of Responses\n");
    printf("-----------  -----------------------\n");

    for (i=1; i<=10; ++i){
        printf("%4i%14i\n",i,ratingCounters[i-1]);
    }
    return 0;
}
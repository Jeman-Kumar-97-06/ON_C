#include <stdio.h>
#include <stdlib.h>
int main(){
    int number;
    printf("Enter the number of player : ");
    scanf("%d",&number);
    int *scores = malloc(number * sizeof(int));
    if (scores == NULL) {
        printf("Sorry couldn't do it!");
        return 1;
    }

    for (int i = 0; i< number; i++) {
        printf("%d\n",scores[i]);
    }
    free(scores);
    scores = NULL;

    printf("\nCalloc start * \n");


    int *scores_ = calloc(number,sizeof(int));
    if (scores_ == NULL) {
        printf("Sorry couldn't do it!");
        return 1;
    };

    for (int i = 0; i< number; i++) {
        printf("%d\n",scores_[i]);
    }

    free(scores_);
    scores_ = NULL;

    return 0;
}
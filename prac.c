#include <stdio.h>
void addition(int x,int y){
    printf("%d\n",x+y);
};

int main(){
    int x,y;
    printf("Enter 2 numbers : \n");
    scanf("%d %d",&x,&y);
    addition(x,y);
    return 0;
}
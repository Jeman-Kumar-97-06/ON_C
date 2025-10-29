#include <stdio.h>

void printShit(int *pX){
	printf("\n\nThis is from printShit\n");
	printf("%p\n",pX);
	printf("%d\n",*pX);
};

int main(){

	int x   = 100;
	int *pX = &x;

	int *pY,y = 200;

	pY = &y;

	printf("y pointer : %p\n",pY);

	printf("value of x : %d\n",x);
	printf("address of x : %p\n",pX);

	printShit(pX);

	return 0;
}
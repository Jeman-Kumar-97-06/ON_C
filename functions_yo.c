//2 types of functions : 
//  Standard Lib functions: 
//      Shit like printf(), scanf(), sqrt()
//      printf(), scanf()... are defined inside 'stdio.h'
//      sqrt(), ....... are defined insde 'math.h'
//  User defined functions:
//      Created by users.
//Example : 
#include <stdio.h>
float functionX(float x,float y){
    float z = x+y;
    return z;
}

int main(){
    float x;
    float y;
    float z;
    printf("Enter x: ");
    scanf("%f",&x);
    printf("Enter y: ");
    scanf("%f",&y);
    z = functionX(x,y);
    printf("%f\n",z);
}
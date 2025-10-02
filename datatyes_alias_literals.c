//1 Byte = 8 Bits --> Combination of 8 0s and 1s

//Basic Data Types : 
//Integer : 2 - 4 bytes  --> Goes from -2147483648 to 2147483647
//  Stores Whole Number
//  'int' used for declaration
//  %d or %i are the format specifiers.

//Floats : 4 bytes:
//  Stores frational/ rational/ decimal numbers.
//  'float' used for declaration.
//  %f or %F are the 
//  Precision : 6-7 digits of precision : ie., 6-7 decimal places.
//  ex : 1.302894 1.2341325...

//Double : 8 bytes:
//  Just like float. But, takes up more memory.
//  'double' used for declaration.
//  %lf are the format specifiers.
//  Precision : More precise compared to float : upto 15 digits used.
//  ex : 1.232956749203235

//Chat : 1 byte:
//  Stores a single chat/ letter/ number or ACCII value.
//  'char' used for declaration.
//  %c used as format specifier.

//Xtra Types : 
// Bool, Enumerated Type, Complex Type:

//Definition vs Declaration : 
//Definition : Allocates memory for variables.
//             Provides Implementation.
//Declaration : No Allocated Memory Yet.
//              Stored in Symbol table 


#include <stdio.h>

int main() {
    unsigned int myPos = 10; //Can only be zero or positive
    int myNum = 5; //Can bet +ve or -ve
    float myFloat = 5.902352;
    float myFloat2= 22.442e20;
    char myLetter = 'd';
    printf("%d+10\n",myNum);//Prints '5+10' not 15
    printf("%c\n",myLetter);
    printf("%f\n",myFloat2);
    void *x;
    x = &myNum;
    printf("%d\n",*(int *)x);
    return 0;
}


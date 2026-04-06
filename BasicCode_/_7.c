    #include <stdio.h>

    int main(){
        int intVar       = 100;
        float floatVar   = 331.79;
        double doubleVar = 8.44e+11;
        char charVar     = 'W';
        _Bool boolVar    = 0;

        printf("integer : %i\n", intVar);
        printf("float   : %f\n", floatVar);
        printf("double  : %e\n", doubleVar);
        printf("double_ : %g\n", doubleVar);
        printf("charVar : %c\n", charVar);
        printf("boolVar : %i\n", boolVar);
        return 0;
    }
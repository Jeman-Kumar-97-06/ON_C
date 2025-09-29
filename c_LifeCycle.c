//1 -- You write source code.
//2 -- Preproccessing is done : 
//      Tasks like including 'stdio.h' or other header files.
//      Tasks like Macro substitution : Replacing 'PI' inside main() function with '3.14159' ....
//      At this stage No memory allocation is done.
//3 -- Compilation : 
//      Compiler translates preprocessed C into assembly.
//      Still no memory allocation 
//4 -- Assembly - Object code:
//      The assembler converts assembly into object files .o or .obj
//      Contains : 
//          Machine Code Instructions.
//          Symbol Table : "Name --> It's Value --> It's Type --> It's location"
//5 -- Linking : 
//      The linker your object files with libraries --> "please bring printf from libc"
//      Resolves symbols.
//      Produces executable file '.out' for linux and '.exe' for Windows.
//6 -- Loading : when you run the .exe or .out file
//      The OS loads the executable into memory.
//7 -- Runtime : Execution : 
//      Now the memory allocation is done.
//      The main() function starts executing.
//      When the program exits/ gets done, OS cleans up memory.

#include <stdio.h>
#define PI 3.14159
int main(){
    int r = 5;
    printf("Area=%f\n",PI*r*r);
    return 0;
}
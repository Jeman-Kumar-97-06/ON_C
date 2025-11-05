#include <stdio.h>
#include <stdbool.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};

int main(){
    struct Student student1 = {"SpongeBob",30,2.5,true};
    struct Student student2 = {"Jack",20,4.0,false};
    
    return 0;    
}
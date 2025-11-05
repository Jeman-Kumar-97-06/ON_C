#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};

void printStudent(struct Student stud);

int main(){
    struct Student student1 = {"SpongeBob",30,2.5,true};
    struct Student student2 = {"Jack",20,4.0,false};
    struct Student student3;

    printf("%s\n",student3.name);   //Garbage value
    printf("%d\n",student3.age);    //Garbage value
    printf("%.2f\n",student3.gpa);  //Garbage value
    printf("%s\n",(student3.isFullTime) ? "Yes" : "No"); //Garbage Value: Random 'Yes' or "No"

    struct Student student4 = {0}; //No garbage values like the above. All are set to '0's

    strcpy(student4.name,"Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true; 

    printf("%s\n",student1.name);
    printf("%d\n",student1.age);
    printf("%.2f\n",student1.gpa);
    printf("%s\n",(student1.isFullTime) ? "Yes" : "No");

    printStudent(student4);

    return 0;
};

void printStudent(struct Student stud){
    printf("%s\n",stud.name);
    printf("%d\n",stud.age);
    printf("%.2f\n",stud.gpa);
    printf("%s\n",(stud.isFullTime) ? "Yes" : "No");
}
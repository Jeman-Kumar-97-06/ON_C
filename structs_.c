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
    struct Student student3;

    printf("%s\n",student3.name);   //Garbage value
    printf("%d\n",student3.age);    //Garbage value
    printf("%.2f\n",student3.gpa);  //Garbage value
    printf("%d\n",(student3.isFullTime) ? "Yes" : "No"); //Garbage Value: Random 'Yes' or "No"

    struct Student student4 = {0}; //No garbage values like the above. All are set to '0's

    strcpy(student4.name,"Sandy");
    

    printf("%s\n",student1.name);
    printf("%d\n",student1.age);
    printf("%.2f\n",student1.gpa);
    printf("%d\n",(student1.isFullTime) ? "Yes" : "No");
    return 0;
}
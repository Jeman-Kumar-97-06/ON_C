#include <stdio.h>
int main() {
    int age = 25;
    printf("%d\n",age);
    int age1;
    printf("%d\n",age1);//Gives random shit. Cuz it's trying to access what's stored at location of 'age1'
    age = 26;
    printf("%d\n",age);
    const int axee = 19;
    // axee = 10; Impossible cuz 'axee' is const.
    return 0;
}
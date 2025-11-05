//typedef = used to give an existing datatype a 'nickname'.
#include <stdio.h>
#include <string.h>

typedef char userdawg[25];

struct User {
    char name[25];
    char password[12];
    int id;
};

typedef struct {
    char username[25];
    int score;
} Player;

int main() {
    char user1[24] = 'brouok';
    userdawg user2 = "Hellyeahbro";

    struct User user1 = {"Bro","XXXX1024@",123};
    struct User user2 = {"Bro2","oasjdf@",12};

    Player player1 = {"jack",24};
    Player player2 = {"Jane",30};

    return 0;
}
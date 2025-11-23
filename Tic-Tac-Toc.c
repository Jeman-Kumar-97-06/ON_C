#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n\n", board[2][0], board[2][1], board[2][2]);
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

int isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

void markBoard(int choice, char mark) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    board[row][col] = mark;
}

int isValidMove(int choice) {
    if (choice < 1 || choice > 9) return 0;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    return board[row][col] != 'X' && board[row][col] != 'O';
}

int main() {
    int player = 1, choice;
    char mark;

    while (1) {
        displayBoard();
        player = (player % 2 != 0) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d (%c), enter a number (1-9): ", player, mark);
        scanf("%d", &choice);

        if (!isValidMove(choice)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        markBoard(choice, mark);

        if (checkWin()) {
            displayBoard();
            printf("Player %d wins! 🎉\n", player);
            break;
        }

        if (isDraw()) {
            displayBoard();
            printf("It's a draw! 🤝\n");
            break;
        }

        player++;
    }

    return 0;
}

#include <stdio.h>
#include "tictactoe.h"

void init_board(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            board[i][j] = ' ';
}

void print_board(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---+---+---\n");
    }
    printf("\n");
}

int make_move(char board[SIZE][SIZE], int row, int col, char player) {
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) return 0;
    if (board[row][col] != ' ') return 0;
    board[row][col] = player;
    return 1;
}

int check_winner(char board[SIZE][SIZE], char *winner) {
    // rows & columns
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2]) {
            *winner = board[i][0];
            return 1;
        }
        if (board[0][i] != ' ' &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i]) {
            *winner = board[0][i];
            return 1;
        }
    }
    // diagonals
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]) {
        *winner = board[0][0];
        return 1;
    }
    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0]) {
        *winner = board[0][2];
        return 1;
    }
    return 0;
}

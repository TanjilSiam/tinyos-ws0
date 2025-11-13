#ifndef TICTACTOE_H
#define TICTACTOE_H

#define SIZE 3

void init_board(char board[SIZE][SIZE]);
void print_board(char board[SIZE][SIZE]);
int make_move(char board[SIZE][SIZE], int row, int col, char player);
int check_winner(char board[SIZE][SIZE], char *winner);

#endif

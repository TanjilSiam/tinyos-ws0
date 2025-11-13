#include <stdio.h>
#include "tictactoe.h"

int main(void) {
    char board[SIZE][SIZE];
    char current = 'X';
    char winner = ' ';
    int moves = 0;

    init_board(board);

    while (1) {
        print_board(board);
        int row, col;
        printf("Player %c, enter row and column (1-3 1-3): ", current);
        if (scanf("%d %d", &row, &col) != 2) return 0;
        if (!make_move(board, row - 1, col - 1, current)) {
            printf("Invalid move, try again!\n");
            continue;
        }
        moves++;
        if (check_winner(board, &winner)) {
            print_board(board);
            printf("Player %c wins!\n", winner);
            break;
        }
        if (moves == 9) {
            print_board(board);
            printf("It's a draw!\n");
            break;
        }
        current = (current == 'X') ? 'O' : 'X';
    }
    return 0;
}

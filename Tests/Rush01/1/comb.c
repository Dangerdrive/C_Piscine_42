#include <stdio.h>
#include <stdbool.h>

int combination_count = 0;

bool check_row(int matrix[4][4], int row, int value) {
    // Check if the value appears in the row
    for (int j = 0; j < 4; j++) {
        if (matrix[row][j] == value) {
            return false;
        }
    }
    return true;
}

bool check_col(int matrix[4][4], int col, int value) {
    // Check if the value appears in the column
    for (int i = 0; i < 4; i++) {
        if (matrix[i][col] == value) {
            return false;
        }
    }
    return true;
}

void generate_combinations(int matrix[4][4], int row, int col) {
    if (row == 4) {
        // All rows have been filled, print the matrix
        combination_count++;
        printf("Possible combination %d:\n", combination_count);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    // Try all possible values for the current cell
    for (int i = 1; i <= 4; i++) {
        if (check_row(matrix, row, i) && check_col(matrix, col, i)) {
            matrix[row][col] = i;
            // Move to the next cell
            if (col == 3) {
                generate_combinations(matrix, row + 1, 0);
            } else {
                generate_combinations(matrix, row, col + 1);
            }
            matrix[row][col] = 0; // reset the cell
        }
    }
}

int main() {
    int matrix[4][4] = {0}; // initialize all cells to 0
    generate_combinations(matrix, 0, 0);
    return 0;
}
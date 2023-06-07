void generate_combinations(int matrix[4][4], int row, int col, int (*combinations)[4][4], int *count) {
    // Check if all cells have been filled
    if (row == 4) {
        // Add the current combination to the list
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                combinations[*count][i][j] = matrix[i][j];
            }
        }
        (*count)++;
        return;
    }
    // Try all possible values for the current cell
    for (int i = 1; i <= 4; i++) {
        int valid = 1;
        // Check if the value appears in the row
        for (int j = 0; j < 4; j++) {
            if (matrix[row][j] == i) {
                valid = 0;
                break;
            }
        }
        // Check if the value appears in the column
        for (int j = 0; j < 4; j++) {
            if (matrix[j][col] == i) {
                valid = 0;
                break;
            }
        }
        if (valid) {
            matrix[row][col] = i;
            // Move to the next cell
            if (col == 3) {
                generate_combinations(matrix, row + 1, 0, combinations, count);
            } else {
                generate_combinations(matrix, row, col + 1, combinations, count);
            }
            matrix[row][col] = 0; // reset the cell
        }
    }
}
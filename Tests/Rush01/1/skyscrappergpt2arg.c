#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void print_solution(int grid[SIZE][SIZE]) {
    for(int i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

bool is_valid(int grid[SIZE][SIZE], int row, int col, int value) {
    // Check if value exists in the same row
    for(int j=0; j<SIZE; j++) {
        if(grid[row][j] == value) {
            return false;
        }
    }
    
    // Check if value exists in the same column
    for(int i=0; i<SIZE; i++) {
        if(grid[i][col] == value) {
            return false;
        }
    }
    
    // Check top, bottom, left and right views
    int count_top = 1, count_bottom = 1, count_left = 1, count_right = 1;
    for(int i=row-1; i>=0; i--) {
        if(grid[i][col] > value) {
            count_top++;
        }
    }
    for(int i=row+1; i<SIZE; i++) {
        if(grid[i][col] > value) {
            count_bottom++;
        }
    }
    for(int j=col-1; j>=0; j--) {
        if(grid[row][j] > value) {
            count_left++;
        }
    }
    for(int j=col+1; j<SIZE; j++) {
        if(grid[row][j] > value) {
            count_right++;
        }
    }
    if(count_top > grid[0][col] || count_bottom > grid[SIZE-1][col] ||
       count_left > grid[row][0] || count_right > grid[row][SIZE-1]) {
        return false;
    }
    
    return true;
}

bool solve(int grid[SIZE][SIZE], int row, int col) {
    // Base case: if all rows and columns are filled, the puzzle is solved
    if(row == SIZE) {
        return true;
    }
    
    // If column is filled, move to next row
    if(col == SIZE) {
        return solve(grid, row+1, 0);
    }
    
    // If cell is already filled, move to next cell
    if(grid[row][col] != 0) {
        return solve(grid, row, col+1);
    }
    
    // Try each value from 1 to SIZE and check if it's valid
    for(int value=1; value<=SIZE; value++) {
        if(is_valid(grid, row, col, value)) {
            grid[row][col] = value;
            if(solve(grid, row, col+1)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    
    return false;
}

void fill_clues(int clues[], int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(stderr, "Usage: ./a.out <clues>\n");
        exit(EXIT_FAILURE);
    }
    
    char *clues_str = argv[1];
    int i = 0, j = 0, k = 0;
    while(clues_str[i] != '\0' && k < SIZE*4) {
        // Skip whitespace
        while(clues_str[i] == ' ') {
            i++;
        }
        if(clues_str[i] == '\0') {
            break;
        }
        
        // Extract number
        int num = 0;
        while(clues_str[i] >= '0' && clues_str[i] <= '9') {
            num = num*10 + (clues_str[i] - '0');
            i++;
        }
        clues[j*SIZE + k%SIZE] = num;
        k++;
        if(k % SIZE == 0) {
            j++;
        }
    }
}

int main(int argc, char *argv[]) {
    int clues[SIZE*4];
    fill_clues(clues, argc, argv);
    
    printf("clues = ");
    for(int i=0; i<SIZE*4; i++) {
        
        printf(" %d ", clues[i]);
    }
    printf("\n");
    
        int grid[SIZE][SIZE] = {{0, 0, 0, 0},
                            {0, 0, 0, 0},
                            {0, 0, 0, 0},
                            {0, 0, 0, 0}};
    
    
    if(solve(grid, 0, 0)) {
        print_solution(grid);
    } else {
        printf("No solution found.\n");
    }
    
    return 0;

}
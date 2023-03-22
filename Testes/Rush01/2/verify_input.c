#include <unistd.h> // for write

// Helper function to print an error message and exit
void print_error() {
    write(1, "Invalid clue, use a valid clue\n", 31);
    _exit(1);
}

// Skyscrapers puzzle clue verifier function
void verify_clue(char* str) {
    // Verify if the string has the correct length
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len != 31) {
        print_error();
    }
    
    // Extract the numbers as int array
    int nums[16];
    int i = 0;
    while (i < 31) {
        if (str[i] >= '1' && str[i] <= '4') {
            nums[i/2] = str[i] - '0';
            i += 2;
        }
        else if (str[i] == ' ') {
            i++;
        }
        else {
            print_error();
        }
    }
    
    // Verify if the sum of the numbers is between 17 and 40
    int sum = 0;
    for (i = 0; i < 16; i++) {
        if (nums[i] < 1 || nums[i] > 4) {
            print_error();
        }
        sum += nums[i];
    }
    if (sum > 40 || sum <= 16) {
        print_error();
    }
    
    // Verify if the opposite sides and up/down clues are valid
    for (i = 0; i < 16; i++) {
        int opp = (i % 4 == 0) ? 3 : (i % 4 == 3) ? 0 : (i < 4) ? 15 - i : 11 - i % 4;
        if ((i < 4 || i > 7) && (i < 12) && (nums[i] + nums[opp] < 2 || nums[i] + nums[opp] > 5)) {
            print_error();
        }
    }
}

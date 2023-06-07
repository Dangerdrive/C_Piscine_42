void print_error1(void);
void print_error(void);

void print_error1(void) 
{
        write(1, "Usage: ./main <clue>\n", 22);
}
// Helper function to print an error message and exit
void print_error(void) 
{
    write(1, "Invalid clue, use a valid clue\n", 31);
    _exit(1);
}

// Skyscrapers puzzle clue verifier function
void verify_clue_len(char* str) {
    // Verify if the string has the correct length
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len != 31) {
        print_error();
    }
}

// Main function that calls the clue verifier with the argument passed to the program
int main(int argc, char** argv) {
    if (argc != 2) {
        
		print_error1();
		return 1;
    }
    verify_clue_len(argv[1]);
    write(1, "Valid clue!\n", 12);
    return 0;
}
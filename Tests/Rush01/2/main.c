#include <unistd.h> // for write

// Colocar todos os prototipos
// Helper function to print an error message and exit
void print_error();
// Skyscrapers puzzle clue verifier function
void verify_clue(char* str);

int main(int argc, char** argv) {
    if (argc != 2) {
        print_error();
    }
    return 0;
}
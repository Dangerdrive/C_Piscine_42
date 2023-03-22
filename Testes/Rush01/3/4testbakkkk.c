#include <unistd.h> // for write

// Helper function to print an error message and exit
void print_error() {
    write(1, "Invalid clue, use a valid clue\n", 31);
    _exit(1);
}

void print_error1() {
    write(1, "Usage: ./a.out <clues>\n", 24);
    _exit(1);
}

// Skyscrapers puzzle clue verifier function
void verify_clue(char* str) {
    // Verify if the string has the correct clue_length
    int clue_len = 0; 
    while (str[clue_len] != '\0') { //aqui a gente tá extraindo os itens de input. Eles vem como char.
        clue_len++; // aqui a gente vai contar o tamanho do input
    }
    if (clue_len != 31) { // se não for trinta já dá erro
        print_error();
    }
    
    // Extract the numbers as int array
    int nums[16]; // aqui a gnt pega a string (que é um array de char) e transforma em uma array de int.
    int i = 0;
    while (i < 31) {
        if (str[i] >= '1' && str[i] <= '4') {
            nums[i/2] = str[i] - '0'; // i/2 é pq só um de cada dois é um numero. O resto é espaço
            i += 2; // e daí a gente pula de dois em dois.
        }
        else if (str[i] == ' ') {
            i++;
        }
        else {
            print_error();
        }
    }
// Verify if the sum of the numbers is between 17 and 40
    int sum = 0; // esse sum vai ser a soma de todos as dicas
    i = 0;
	while (i < 16) {
        if (nums[i] < 1 || nums[i] > 4) { //aqui ele ve se cada dica é valida.
            print_error();
        }
        sum += nums[i]; // se todas as dicas forem validas, ele vai acrescentendo o valor na soma
		i++;
    }
    if (sum > 40 || sum <= 16) { // a soma tem que ser <=40 (16 dicas * 4 (4 que é o max))
        print_error(); // se não mostra erro
    }
    
	sum = 0;
	i = 0;
	while (i < 16) {
    if (nums[i] < 1 || nums[i] > 4) {
        print_error();
    }
    else {
        sum += nums[i];
    }
    i++;
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

// Main function that calls the clue verifier with the argument passed to the program
int main(int argc, char** argv) {
    if (argc != 2) {
        print_error1();
    }
    verify_clue(argv[1]);
    write(1, "Valid clue!\n", 12);
    return 0;
}
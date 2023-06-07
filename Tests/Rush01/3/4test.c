#include <unistd.h> // for write

void ft_putchar(int c) {
	write(1, &c, 1);
}

// Helper function to print an error message and exit
void print_error() {
	write(1, "Invalid clue, use a valid clue\n", 31);
	_exit(1);
}

void print_error1() {
	write(1, "Usage: ./a.out <clues>\n", 23);
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
		if (nums[i] < 1 || nums[i] > 4) { //aqui ele ve se cada dica é valida. Ou seja se tem algum valor que não está entre 1 e 4
			print_error();
		}
		sum += nums[i]; // se todas as dicas forem validas, ele vai acrescentendo o valor na soma
		i++;
	}
	if (sum > 40 || sum <= 16) { // a soma tem que ser <=40 (16 dicas * 4 (4 que é o max))
		print_error(); // se não mostra erro
	}
	// Verify if the sum of opposite sides and up/down clues are valid
	i = 0;
	while (i < 4) { //nesse intervalo os opostos podem ser representados por nums[i] e nums[i+j]
	int sum_opp = nums[i] + nums[i + 4];
	if (sum_opp < 3 || sum_opp > 5) { // a soma tem que estar entre 5 e 2
		print_error();
	}
	i++;
	}
	i = 8;
	while (i < 12) {
	int sum_opp = nums[i] + nums[i + 4];
	if (sum_opp < 3 || sum_opp > 5) {
		print_error();
	}
	i++;
	}

}



// Main function that calls the clue verifier with the argument passed to the program
int main(int argc, char** argv) {
	if (argc != 2) {
		print_error1();
	}
	verify_clue(argv[1]);
	write(1, "Valid clue!\n", 12);
   
   // aqui em baixo pode virar uma função pra imprimir o resultado
	int result[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	int i = -1;
	while (i++ < 3) {
		int j = -1;
		while (j++ < 3) {
			ft_putchar(result[i][j] + '0'); // convert integer to character
			if (j < 3) {
				ft_putchar(' '); // add a space between numbers
			}
		}
		ft_putchar('\n'); // add a newline after each row
		}
   
   
   
	return 0;
}
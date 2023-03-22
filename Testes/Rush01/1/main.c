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


int	main(int argc, char *argv[])
{
	ft_vrfy_input(argc, argv[1]);
	return (0);
}


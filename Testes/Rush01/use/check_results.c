int validate_matrix(int matrix[4][4], int clues[16]) {
  int colup[4], coldown[4], rowleft[4], rowright[4];
  // Extract clues
  for (int i = 0; i < 4; i++) {
    colup[i] = clues[i];
    coldown[i] = clues[4+i];
    rowleft[i] = clues[8+i];
    rowright[i] = clues[12+i];
  }
  // Check the clues for each row
  for (int i = 0; i < 4; i++) {
    int visible_left = 0, visible_right = 0;
    int j = 0;
    while (j < 4) {
      // Count the number of visible skyscrapers from the left
      if (matrix[i][j] > visible_left) {
        visible_left = matrix[i][j];
        rowleft[i]++;
      }
      // Count the number of visible skyscrapers from the right
      if (matrix[i][3-j] > visible_right) {
        visible_right = matrix[i][3-j];
        rowright[i]++;
      }
      j++;
    }
    if (rowleft[i] != colup[i] || rowright[i] != coldown[i]) {
      return 0; // The matrix is invalid
    }
  }
  // Check the clues for each column
  for (int j = 0; j < 4; j++) {
    int visible_up = 0, visible_down = 0;
    int i = 0;
    while (i < 4) {
      // Count the number of visible skyscrapers from the top
      if (matrix[i][j] > visible_up) {
        visible_up = matrix[i][j];
        colup[j]++;
      }
      // Count the number of visible skyscrapers from the bottom
      if (matrix[3-i][j] > visible_down) {
        visible_down = matrix[3-i][j];
        coldown[j]++;
      }
      i++;
    }
    if (colup[j] != rowleft[j] || coldown[j] != rowright[j]) {
      return 0; // The matrix is id
}invalid
    }
  }
  return 1; // The matrix is valid
}
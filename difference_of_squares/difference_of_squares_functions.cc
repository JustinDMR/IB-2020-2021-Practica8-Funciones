#include "difference_of_squares.h"

//Function that shows a message to help/guide you
void usage (int argc, char *argv[]) {
  if (argc == 2 && strcmp(argv[1], "--help") == 0) {
    std::cout << "This programme needs you to input a nmber when you run it to calculate the difference between the square of the sum of the first N natural numbers and the sum of the squares of the first N natural numbers" << std::endl;
    exit (EXIT_SUCCESS);
  }
  if (argc == 1){
    std::cout << "Try 'executable -- help' for more information." << std::endl;
    exit(EXIT_SUCCESS);
  }
}

// What AddSquares does, is it calculates the square of the sum of the first n natural numbers
int AddSquares (int parameter) {
  int sum = 0;
  for (int i = 0; i <= parameter; i++) {
    sum += i;
  }
  int total = pow(sum,2);
  return total;
}

// The function AdditionOfSquares performs the sum of the squares of the first n natural numbers
int AdditionOfSquares (int parameter) {
  int sum  = 0;
  int square = 0;
  for (int i = 0; i <= parameter; i++) {
    square = pow(i,2);
    sum += square;
  }
  return sum;
}
#include "difference_of_squares.h"


int main(int argc , char*argv[]) {
    usage (argc, argv);
    int parametro = atoi (argv[1]);
    std::cout << AddSquares(parametro) - AdditionOfSquares(parametro) << std::endl;
}
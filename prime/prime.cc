#include "prime.h"

int main(int argc, char*argv[]) {
  int position = std::stoi (argv [1]);
  int prime = IsPrime(position);
  std::cout << prime << std::endl;
  return 0;
}

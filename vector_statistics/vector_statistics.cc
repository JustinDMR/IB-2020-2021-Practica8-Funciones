#include "vector_statistics.h"

int main (int argc, char *argv[]){
  usage (argc, argv);
  double components = atoi(argv[1]);
  double lower_limit = atoi(argv[2]);
  double upper_limit = atoi(argv[3]);
  std::vector <double> total = RandomNumbersGen (components, lower_limit, upper_limit);
  std::cout << " The average is: " << Average (total, components) << std::endl;
  std::cout << "the standard deviation is: " << StandardDeviation (total, components, Average(total, components)) << std::endl;
  std::cout << "The maximum is: " << MaximumValue(total) << std::endl;
  std::cout << "The minimum is: " << MinimumValue(total, upper_limit) << std::endl;
  return 0;
}
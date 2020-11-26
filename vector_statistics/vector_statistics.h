#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <time.h>
#include <cstring>

//Declaration of functions

void usage (int argc, char *argv[]);
double MaximumValue (std::vector <double> total);
std::vector <double> RandomNumbersGen(double components, double lower_limit, double upper_limit);
double Average(std::vector <double> total,double components);
double StandardDeviation (std::vector <double> total, double components, double  Media);
double MinimumValue (std::vector <double> total, double upper_limit);
double StandardDeviation (std::vector <double> total, double components, double  Media);
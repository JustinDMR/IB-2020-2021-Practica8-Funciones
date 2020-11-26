#include "string_statistics.h"

void StringCharacteristics (std::vector <std::string> random_word){
  int number = {1};
  for (auto word: random_word){
    std::cout << "This programme will show you some characteristics of a string vector." << std::endl << std::endl;
    std::cout << "Chain " << number << ": The chain has the following length: " << word.size() << std::endl;
    std::cout << "The first character is : " << word.front() << "." << std::endl;
    std::cout << "The last character is : " << word.back() << "." << std::endl;
    if (word.find("abracadabra") != std::string::npos){
      std::cout << "It contains abracadabra." << std::endl;
    }
    else {
      std::cout << "It doesn't contain abracadabra." << std::endl;
    }
    number ++;
  }
}
#include "prime.h"

int IsPrime(int position) {
  int prime [position - 1];
  int current_number {1};
  for(int i = 0; i <= position; ++i) {
    int divider {2};
    ++current_number;
    while (current_number > divider) {
      if(current_number % divider == 0) {
        ++current_number;
        divider = 2;
      }
      else {
        ++divider;
      }
    }
    prime[i] = current_number;
  }
  return prime [position - 1];
}
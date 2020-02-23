#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  Solution s;
  vector<int> inputs = {-2, 3,-1,2,5,6,10};
  int output = s.findKLarge(inputs,99);
  cout << output;

  return EXIT_SUCCESS;
}
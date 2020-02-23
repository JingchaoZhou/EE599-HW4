#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  Solution s;
  vector<int> inputs = {5,9,3,1,7};
  s.heapSort(inputs);
  for (int i = 0; i< inputs.size();i++){
    cout << inputs[i]<< " ";
  }

  return EXIT_SUCCESS;
}
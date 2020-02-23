#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  vector <int> o = s.traverse();
  for (int i = 0; i<o.size(); i++){
    cout << o[i] <<" ";
  }
  
  return EXIT_SUCCESS;
}
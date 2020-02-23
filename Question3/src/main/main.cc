#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  BST output;
  output.push(3);
  output.push(4);
  output.push(2);
  //vector<int> input = {1,3,4,6,8,7};
  // BST output2(input);
  output.erase(3);

  vector <int> o = output.traverse();
  for (int i = 0; i<o.size(); i++){
    cout << o[i] <<" ";
  }

  //cout << "find: "<< output.find(2) << endl;
  cout << "find after erase: "<< output.find(3) << endl;
  return EXIT_SUCCESS;
}
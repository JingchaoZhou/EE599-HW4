#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

bool IsEven(int i){return((i%2) != 1);}
int Squre(int a){return a * a;}

int main() {

  Solution s;
  vector<int> inputs = {1,2,3,4,5};
  vector<int> outputs = s.evenFilter(inputs,IsEven);
  for(int i = 0; i< outputs.size(); i++){
    cout << outputs[i] << " ";
  }
    cout << endl;
  vector<int> outputs2 = s.squareAll(inputs,Squre);
    for(int i = 0; i< outputs2.size(); i++){
    cout << outputs2[i] << " ";
  }
    cout << endl;
  int output3 = s.sumAll(inputs);
  cout << output3;
  return EXIT_SUCCESS;
}
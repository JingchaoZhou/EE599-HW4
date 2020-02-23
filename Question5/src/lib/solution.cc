#include "solution.h"

void Solution::heapSort(vector<int> &inputs) { 
  std::priority_queue <int, std::vector<int>, std::greater<int> > q;
  for (int i = 0; i< inputs.size();i++){
    q.push(inputs[i]);
  }
  inputs = {};
  while (q.empty()==false){
    inputs.push_back(q.top());
    q.pop();
  }
 }

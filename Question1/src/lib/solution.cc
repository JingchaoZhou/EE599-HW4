#include "solution.h"

vector<int> Solution::evenFilter(vector<int> &inputs, function<bool(int)>func) {
  vector<int> outputs(inputs.size());
  copy_if(inputs.begin(),inputs.end(),outputs.begin(),func);
  return outputs;
  }//Time complexity: O(n)

vector<int> Solution::squareAll(vector<int> &inputs,function<int(int)> func){
  vector<int> outputs(inputs.size());
  transform(inputs.begin(),inputs.end(),outputs.begin(),func);
  return outputs;
}

int Solution::sumAll(vector<int> &inputs){
  int sum = 0;
  return accumulate(inputs.begin(),inputs.end(),sum);
}



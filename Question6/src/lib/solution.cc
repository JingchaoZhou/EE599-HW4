#include "solution.h"

int Solution::findKLarge(vector<int> &inputs,int k) { 
  priority_queue<int> q;
  int result = 0;
  for(int i =0; i< inputs.size();i++){
    q.push(inputs[i]);
  }

  if(k <= 0 || k > inputs.size()-1){
    return -1;
  }

  for(int j = 0; j < k; j++){
    result = q.top();
    q.pop();
  }
  return result;
}


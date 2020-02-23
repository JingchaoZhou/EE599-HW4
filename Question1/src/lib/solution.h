#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <numeric>

using namespace std;

class Solution {
public:
  
  vector<int> evenFilter(vector<int> &inputs, function<bool(int)> func);
  vector<int> squareAll(vector<int> &inputs, function<int(int)> func);
  int sumAll(vector<int> &inputs);

};

#endif
#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  MaxHeap p;
  p.push(5);
  p.push(4);
  p.push(3);
  p.push(2);
  p.push(1);

  // cout << p.GetParentIndex(1)<< endl;
  // cout << p.GetLeftIndex(1) << endl;
  // cout << p.GetRightIndex(1) << endl;
  // cout << p.GetLargestChildIndex(1) << endl;

  //cout << p.top() << endl;
  p.push(9);
  //cout << p.top() << endl;

  p.pop();
  cout << p.top() << endl;

  return EXIT_SUCCESS;
}
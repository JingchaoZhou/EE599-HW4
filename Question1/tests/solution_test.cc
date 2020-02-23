#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

bool IsEven(int i){return((i%2) != 1);}
int Squre(int a){return a * a;}

TEST(FilterTester, OneEven) {
  Solution solution;
  vector<int> inputs = {1,2,3,5,7};
  vector<int> outputs = {2,0,0,0,0};
  vector<int> actual = solution.evenFilter(inputs,IsEven);
  EXPECT_EQ(outputs, actual);
}

TEST(SquareTester, someNums) {
  Solution solution;
  vector<int> inputs = {1,2,3,5,7};
  vector<int> outputs = {1,4,9,25,49};
  vector<int> actual = solution.squareAll(inputs,Squre);
  EXPECT_EQ(outputs, actual);
}

TEST(SumTester, Nums) {
  Solution solution;
  vector<int> inputs = {2,4,6,8};
  int outputs = 20;
  int actual = solution.sumAll(inputs);
  EXPECT_EQ(outputs, actual);
}
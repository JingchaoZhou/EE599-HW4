#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeapSortTester, shouldreturn) {
  Solution solution;
  vector<int> inputs = {7,6,4,9,86,25,74};
  solution.heapSort(inputs);
  vector<int> expected = {4,6,7,9,25,74,86};
  EXPECT_EQ(expected, inputs);
}
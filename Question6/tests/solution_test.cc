#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(findLarge, wrongkey) {
  Solution solution;
  vector<int> inputs = {12,6,3,7,32};
  int actual = solution.findKLarge(inputs,-4);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(findLarge, normal) {
  Solution solution;
  vector<int> inputs = {12,6,3,7,32};
  int actual = solution.findKLarge(inputs,2);
  int expected = 12;
  EXPECT_EQ(expected, actual);
}
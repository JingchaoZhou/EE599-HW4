#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(traversalTester, empty) {
  BST solution;
  vector<int> actual = solution.traverse();
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(traversalTester, normal) {
  BST solution;
  solution.push(5);
  solution.push(7);
  solution.push(9);
  solution.push(6);
  solution.push(3);
  solution.push(12);
  vector<int> actual = solution.traverse();
  vector<int> expected = {5,3,7,6,9,12};
  EXPECT_EQ(expected, actual);
}
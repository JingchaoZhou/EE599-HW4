#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(BSTtester, build) {
  vector<int> input = {1,7,4,6,3,8};
  BST solution(input);
  vector<int> output = solution.traverse();
  vector<int> expected = {1,7,4,8,3,6};
  EXPECT_EQ(expected, output);
}

TEST(BSTtester, build2AndPush) {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  vector<int> output = s.traverse();
  vector<int> expected = {1,7,4,8,3,6};
  EXPECT_EQ(expected, output);
}

TEST(BSTtester, find1) {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  bool output = s.find(1);
  bool expected = true;
  EXPECT_EQ(expected, output);
}

TEST(BSTtester, notFind) {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  bool output = s.find(9);
  bool expected = false;
  EXPECT_EQ(expected, output);
}

TEST(BSTtester, eraseNotExist) {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  bool output = s.erase(9);
  bool expected = false;
  EXPECT_EQ(expected, output);
}

TEST(BSTtester, erase) {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  bool output = s.erase(7);
  bool expected = true;
  EXPECT_EQ(expected, output);
}

TEST(BSTtester, eraseandfind) {
  BST s;
  s.push(1);
  s.push(7);
  s.push(4);
  s.push(6);
  s.push(3);
  s.push(8);
  bool output = s.erase(7);
  bool output2 = s.find(7);
  bool expected = false;
  EXPECT_EQ(expected, output2);
}
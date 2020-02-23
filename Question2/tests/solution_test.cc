#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeapTester, parentIndex) {
  MaxHeap p;
  p.push(5);
  p.push(4);
  int parent = p.GetParentIndex(1);
  EXPECT_EQ(parent, 0);
}

TEST(HeapTester, LeftIndex) {
  MaxHeap p;
  p.push(1);
  p.push(7);
  p.push(4);
  p.push(8);
  p.push(6);
  p.push(2);
  int parent = p.GetLeftIndex(2);
  EXPECT_EQ(parent,5);
}

TEST(HeapTester, RightIndex) {
  MaxHeap p;
  p.push(1);
  p.push(7);
  p.push(4);
  p.push(8);
  p.push(6);
  p.push(2);
  int parent = p.GetRightIndex(1);
  EXPECT_EQ(parent,4);
}

TEST(HeapTester, largestChild) {
  MaxHeap p;
  p.push(1);
  p.push(7);
  p.push(4);
  p.push(8);
  p.push(6);
  p.push(2);
  int parent = p.GetLargestChildIndex(2);
  EXPECT_EQ(parent,5);
}

TEST(HeapTester, top) {
  MaxHeap p;
  p.push(1);
  p.push(7);
  p.push(4);
  p.push(8);
  p.push(6);
  p.push(2);
  int parent = p.top();
  EXPECT_EQ(parent,8);
}

TEST(HeapTester, push) {
  MaxHeap p;
  p.push(1);
  p.push(7);
  p.push(4);
  p.push(8);
  p.push(6);
  p.push(2);
  p.push(9);
  int parent = p.top();
  EXPECT_EQ(parent,9);
}

TEST(HeapTester, pop) {
  MaxHeap p;
  p.push(1);
  p.push(7);
  p.push(4);
  p.push(8);
  p.push(6);
  p.push(2);
  p.push(9);
  p.pop();
  int parent = p.top();
  EXPECT_EQ(parent,8);
}
#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Should, Return) {
  Solution solution;
  vector<int> actual = {20, 5, 7, 2, 18, 9};
  solution.heapSort(actual);
  vector<int>  expected = {2, 5, 7, 9, 18, 20 };
  EXPECT_EQ(expected, actual);
}
TEST(Should1, Return1) {
  Solution solution;
  vector<int> actual = { };
  solution.heapSort(actual);
  vector<int>  expected = { };
  EXPECT_EQ(expected, actual);
}
#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Should, Return) {
  Solution solution;
  const vector<int> vct = {1, 2, 4, 6, 7, 18, 35, 50};
  int k = 4;
  int actual = solution.kLargest(vct, k);
  int expected = 7;
  EXPECT_EQ(expected, actual);
}
TEST(Should1, Return1) {
  Solution solution;
  const vector<int> vct = {};
  int k = 4;
  int actual = solution.kLargest(vct, k);
  bool expected = 0;
  EXPECT_EQ(expected, actual);
}

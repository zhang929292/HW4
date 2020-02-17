#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Should, Return) {
  Solution solution;
  vector<int> vct = {1, 2, 4, 5, 8, 100};
  vector<int> actual = solution.Filter(vct);
  vector<int> expected = { 2, 4, 8, 100};
  EXPECT_EQ(expected, actual);
}
TEST(Should1, Return1) {
  Solution solution;
  vector<int> vct = { };
  vector<int> actual = solution.Filter(vct);
  vector<int> expected = { };
  EXPECT_EQ(expected, actual);
}
TEST(ReduceShould, ReturnReduce) {
  Solution solution;
  vector<int> vct = {1, 2, 4, 5, 8, 100};
  int actual = solution.Reduce(vct);
  int expected = 120;
  EXPECT_EQ(expected, actual);
}
TEST(Should2, Return2) {
  Solution solution;
  vector<int> vct = { };
  vector<int> actual = solution.Filter(vct);
  vector<int> expected = { };
  EXPECT_EQ(expected, actual);
}
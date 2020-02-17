#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


//Test for question 3
TEST(pushShould, Returnpush) {
  BST t;
  t.push(5);
  t.push(89);
  t.push(7);
  t.push(2);
  bool actual = t.find(7);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(findShould0, findReturn0) {
  BST t ;
  bool actual = t.find(7);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(pushfindShould1, pushfindReturn1) {
  vector<int> input= {};
  BST t = (input);
  t.push(7);
  bool actual = t.find(7);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould2, eraseReturn2) {
  vector<int> input= {-2, 4, 7, 18};
  BST t = (input);
  bool actual = t.erase(7);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould3, eraseReturn3) {
  BST t;
  bool actual = t.erase(7);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

//Test for question 4
TEST(levelShould, levelReturn) {
  vector<int> input= { 7, 18, -2, 4, -5, 2, 89, 100 };
  BST t = (input);
  vector<int> actual = t.levelBST();
  vector<int> expected = { 7, -2, 18, -5, 4, 89, 2, 100 };
  EXPECT_EQ(expected, actual);
}

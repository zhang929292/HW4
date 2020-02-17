#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(topShould, Returntop) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  int actual = hp.top();
  int expected = 97;
  EXPECT_EQ(expected, actual);
}
TEST(Should1, Return1) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  hp.pop();
  int actual = hp.top();
  int expected = 23;
  EXPECT_EQ(expected, actual);
}
TEST(Should2, Return2) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  hp.push(100);
  int actual = hp.GetRightIndex(2);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}
TEST(Should3, Return3) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  hp.push(100);
  int actual = hp.GetParentIndex(3);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}
TEST(Should4, Return4) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  int actual = hp.GetLeftIndex(1);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}
TEST(Should5, Return5) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  hp.push(100);
  int actual = hp.GetRight(3);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}
TEST(Should6, Return6) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  hp.push(100);
  int actual = hp.GetLeft(3);
  int expected = -1 ;
  EXPECT_EQ(expected, actual);
}
TEST(Should7, Return7) {
  MaxHeap hp;
  hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
  hp.push(100);
  int actual = hp.GetParent(3);
  int expected = 97 ;
  EXPECT_EQ(expected, actual);
}


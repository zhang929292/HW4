#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <stack>
#include<cstdio>
#include<queue>
using namespace std;

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class BST{
  public:
  BST();
  BST(vector<int> initial_values);
  ~BST();

  void push(int key);
  bool find(int key);
  bool erase(int key);

  //Helper functions

  void insert(TreeNode *&rt, int key);
  TreeNode *search (TreeNode *&rt, int val);
  void eNode(TreeNode *&rt, int val);
  TreeNode *minNode(TreeNode *rt);
  void inorderTreeTravel(TreeNode *&rt);
  void inorderBST();
  vector<int> levelorderBST(TreeNode *rt);
  vector<int> levelBST();

  private:
  TreeNode *root_;
};


#endif

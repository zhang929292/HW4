#include "solution.h"

BST::BST(){
  root_ = nullptr;
}

BST::BST(vector<int> initial_values){
  root_ = nullptr;
  int size = initial_values.size();
  for(int i = 0; i < size; i++){
    push(initial_values[i]);
  }
}

BST::~BST(){
  root_ = nullptr;
}

void BST::push(int key){
  insert(root_, key);
}

void BST::insert(TreeNode *&rt, int val){
  if (rt == nullptr){
	  rt = new TreeNode(val);
	  return;
	}

  if (val < rt -> val){
    insert(rt->left, val);
  }else{
    insert(rt -> right, val);
    }
  }

bool BST::find(int key){

  if(root_ == nullptr){
    return false;
  }
  TreeNode *T = search(root_, key);
  if (T == nullptr){
    return false;
  }else{
    return true;
  }
}

TreeNode *BST::search(TreeNode *&rt, int val){
  if (rt == nullptr){
	  return nullptr;
	}
  if(val < rt -> val){
		return BST::search(rt -> left, val);
	}else if(rt -> val < val){
		return BST::search(rt -> right, val);
	}
	return rt;
}


bool BST::erase(int key){
  if (find(key)){
		eNode(root_, key);
		return true;
	}else{
		return false;
	}
}

void BST::eNode(TreeNode *&rt, int val){
  if(rt == nullptr){
    return ;
  }
  if(val < rt -> val){
    eNode(rt -> left, val);
  }else if(rt->val < val){
    eNode(rt -> right, val);
  }
  else if(val == rt -> val){
    
    if(rt -> left == nullptr){
      if(rt -> right == nullptr){
        delete rt;
        rt = nullptr;
      }
      if(rt -> right != nullptr){
        TreeNode *tem = rt -> right;
        delete rt;
        rt = tem;
      }
    }
    else if(rt -> right == nullptr && rt -> left != nullptr){
        TreeNode *tem = rt -> left;
        delete rt;
        rt = rt -> left;
    }
    else if(rt -> right != nullptr && rt -> left != nullptr){
        TreeNode *tem = minNode(rt -> right);
        rt -> val = tem -> val;
        eNode(rt -> right, tem -> val);
    }
  }
}

TreeNode* BST::minNode(TreeNode *rt){
    while(rt -> left !=nullptr){
      rt = rt -> left;
    }
    return rt;
  }

void BST::inorderBST(){
  inorderTreeTravel(root_);
  cout << endl;
}


void BST::inorderTreeTravel(TreeNode *&rt){
	if (rt == nullptr)
		return;
	inorderTreeTravel(rt->left);
	cout << rt->val << " ";
	inorderTreeTravel(rt->right);
}


//Question 4

vector<int> BST::levelBST(){
	return levelorderBST(root_);
}

vector<int> BST::levelorderBST(TreeNode *rt){
  vector<int> ret;

  if (rt == nullptr){
    return ret;
  }

  queue<TreeNode *> inputs;
  inputs.push(rt);
  
  while(!inputs.empty()){
    TreeNode *tem = inputs.front();
    ret.push_back(tem->val);
    
    inputs.pop();
    if(tem -> left){
      inputs.push(tem -> left);
    }
    if(tem -> right){
      inputs.push(tem -> right);
    }
  }
  for(int i = 0; i < ret.size(); i++){
    cout << ret[i] << " ";
  }
  cout<< endl;
  return ret;
}



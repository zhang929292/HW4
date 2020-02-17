#include "solution.h"

void Solution::heapSort(vector<int>& vct){
  priority_queue<int, vector<int>, greater<int> > que;
  for(auto &it : vct){
    que.push(it);
  }
  for(int i = 0; i < vct.size(); i++){
    vct[i] = que.top();
    que.pop();
    cout  << vct[i] <<" ";
  }
  
  
}

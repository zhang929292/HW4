#include "solution.h"

int Solution::kLargest(const vector<int>& vct, int k){
  priority_queue<int, vector<int>, greater<int> > pri_que;

 
  for(auto v : vct){
    pri_que.push(v);
    
    if(pri_que.size() > k){
      pri_que.pop();
    }
  }
  if(pri_que.empty() || (pri_que.size() < k)){
    return 0;
  }
  return pri_que.top();
}




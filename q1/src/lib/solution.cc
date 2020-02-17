#include "solution.h"

vector<int> Solution:: Filter(vector<int> &vct){
	vector<int> ret;
	ret.resize(vct.size()); 
	if (vct.size() == 0) {
    return ret;
  	}
    auto it = copy_if (vct.begin(), vct.end(), ret.begin(), [](int i){return (i&1)==0;} );
   	ret.resize(distance(ret.begin(),it));  

    for (int& x: ret){
    	cout << ' ' << x;
   	} 
    	cout << '\n';
		return ret;
}

vector<int> Solution:: Map(vector<int> &vct){
	vector<int> ret;
	ret.resize(vct.size()); 

	if (vct.size() == 0) {
    return ret;
  	}
	  
	transform (vct.begin(), vct.end(), ret.begin(), [](int i){return i*i;});

	for(vector<int>:: iterator it = ret.begin(); it != ret.end(); ++it){
		cout << " "<< *it;
	}
	cout<< '\n';
	return ret;
}


int Solution::Reduce(vector<int> &nums){
	if (nums.size() == 0) {
    return 0;
  	}
	int rout;
    
	rout = accumulate (nums.begin(), nums.end(), 0);
  	cout  << rout << endl;
	  return rout;
}


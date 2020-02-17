#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


class MaxHeap{
	public:  
		MaxHeap();                    // default constructor 
		int GetParentIndex(int i);     
		int GetLeftIndex(int i);       
		int GetRightIndex(int i);      
		int GetLargestChildIndex(int i);  
 
	 	int GetLeft(int i);  
		int GetRight(int i);  
		int GetParent(int i); 
		bool valid(int idx);
 
 		int top();    
		void push(int v);   
		void pop();   
		void TrickleUp(int i);  
		void print();
		void TrickleDown(int i); 
 
	private:  
		const int INVALID_IDX = -1;
		const long long MAX_VALUE = INT_MAX; 
		std::vector<int> data_; 
}; 

#endif
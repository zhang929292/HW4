#include "solution.h"

MaxHeap::MaxHeap(){}
void MaxHeap::print(){

	for (int i = 0; i < data_.size(); i++)
		cout << data_[i] << " ";
	cout << endl;

}

bool MaxHeap::valid(int idx){
	return idx != INVALID_IDX;
}

int MaxHeap::GetParentIndex(int i){
	if (i == 0){
    return INVALID_IDX;
  }
	return (i-1)/2;
}

int MaxHeap::GetLeftIndex(int i){
	int ret = 2*i + 1;
	if (ret < data_.size()){
    return ret;
  }
	return INVALID_IDX;
}

int MaxHeap::GetRightIndex(int i){
	int ret = 2*i + 2;
	if (ret < data_.size()){
    return ret;
  }
	return INVALID_IDX;
}
int MaxHeap::GetLeft(int i){
	int idx = GetLeftIndex(i);
	if (valid(idx)){
    return data_[GetLeftIndex(i)];
  }
		
	return INVALID_IDX;
}

int MaxHeap::GetRight(int i){
	int idx = GetRightIndex(i);
	if (valid(idx)){
    return data_[GetRightIndex(i)];
  }
	return -1;
}

int MaxHeap::GetParent(int i){
	int idx = GetParentIndex(i);
	if (valid(idx)){
    return data_[idx];
  }
	return MAX_VALUE;
}

int MaxHeap::GetLargestChildIndex(int i){
	if (valid(GetRightIndex(i))){
		if (GetRight(i) < GetLeft(i)){
      return GetLeftIndex(i);
    }else{
      return GetRightIndex(i);
    }
	}else if (valid(GetLeftIndex(i))){
    return GetLeftIndex(i);
  }
	return INVALID_IDX;
}

int MaxHeap::top(){
	return data_[0];
}

void MaxHeap::TrickleUp(int i){
	int v = GetParent(i);
	while (data_[i] > GetParent(i)){
		int p_idx = GetParentIndex(i);
		swap(data_[i], data_[p_idx]);
		i = p_idx; 
	}
}

void MaxHeap::TrickleDown(int i){
	int idx = GetLargestChildIndex(i);
	while (valid(idx) && data_[i] < data_[idx]){
		swap(data_[idx], data_[i]);
		i = idx;
		idx = GetLargestChildIndex(i);
	}
}

void MaxHeap::pop(){
	data_[0] = data_.back();
	data_.pop_back();
	TrickleDown(0);
}

void MaxHeap::push(int v){
	data_.push_back(v);
	TrickleUp(data_.size()-1);
}



#include <iostream>
#include "src/lib/solution.h"
int main(){ 
	MaxHeap hp;
    vector<int> vct;
	vector<int> new_vct;
	hp.push(3);
	hp.push(4);
	hp.push(23);
	hp.push(97);
	hp.push(12);
  	hp.push(100);
  	hp.push(87);
  	hp.push(43);
  	hp.push(5);
  	hp.push(13);
  	hp.push(40);
  	hp.pop();

	cout << "Total elements in the heap are: ";
	hp.print();
	cout << "The top element of the heap is: " << hp.top() << endl;
	hp.pop();
	cout << "Total elements in the heap after pop operation are: ";
	hp.print();
	
	cout << "GetRightIndex(2): " << hp.GetRightIndex(2) << endl;
  	cout << "GetParentIndex(3): " << hp.GetParentIndex(3) << endl;
	cout << "GetLeftIndex(1): " << hp.GetLeftIndex(1)<< endl;
	cout <<  "GetRight(3):  " << hp.GetRight(3) << endl;
	cout <<  "GetLeft(3):  " << hp.GetLeft(3) << endl;
	cout <<  "GetParent(3):  " << hp.GetParent(3) << endl;

	return 0;
}

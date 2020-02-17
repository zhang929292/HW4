#include "src/lib/solution.h"


int main()
{
    vector<int> input= {-2, 4, 7, 18};
    BST t = (input);
    t.inorderBST();

    t.push(5);
    t.push(89);
    t.push(100);
    t.push(2);
    t.inorderBST();

    if(t.find(4)){
        cout<<"4 is found! "<<endl;
    }else
    {
        cout<<"4 is not found!"<<endl;
    }

    if(t.find(0)){
        cout<<"0 is found! "<<endl;
    }else
    {
        cout<<"0 is not found!"<<endl;
    }

    t.erase(20);
    if(!t.find(20)){
        cout<<"20 is erased! "<<endl;
    }else
    {
        cout<<"20 is not erased!"<<endl;
    }
    t.inorderBST();


    cout<< "For traverse the tree level by level, output: ";
    t.levelBST();

    return EXIT_SUCCESS;
}
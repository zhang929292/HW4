#include <iostream>
#include "src/lib/solution.h"


int main()
{
    Solution solution ;
    vector<int> vct = {20, 5, 7, 2, 18, 9};
    cout << "Output: [ ";
    solution.heapSort(vct);
    cout << "]" << endl;

    return EXIT_SUCCESS;
}
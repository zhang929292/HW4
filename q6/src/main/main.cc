#include <iostream>
#include "src/lib/solution.h"


int main()
{
    Solution solution;
    // const vector<int> vct = {1, 2, 4, 6, 7, 18, 35, 50};
    // int k = 4;
    const vector<int> vct = {};
    int k = 8;
    cout << solution.kLargest(vct, k) << endl;

    return EXIT_SUCCESS;
}
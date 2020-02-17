
#include "src/lib/solution.h"


int main()
{
  Solution solution;
  vector<int> vct = {1, 2, 4, 5, 8, 100};
  // vector<int> vct = { };
  cout << "Even numbers in vct are: ";
  solution.Filter(vct);
  cout << "Square of each element in vct are: ";
  solution.Map(vct);
  cout << "Sum of all elements is: ";
  solution.Reduce(vct);


  return 0;
}
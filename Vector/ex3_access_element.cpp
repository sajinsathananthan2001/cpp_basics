#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Element at Index 0: " << num.at(0) << endl;
  cout << "Element at Index 2: " << num.at(2) << endl;
  cout << "Element at Index 4: " << num.at(4) << endl;

  // Note: Like an array, we can also use the square brackets [] to access vector elements. For example,

  // However, the at() function is preferred over [] because
  //  at() throws an exception whenever the vector is out of bound, while [] gives a garbage value.

  vector<int> num1 {1, 2, 3};
  cout << "Another Example"<<num1[1];  // Output: 2

  return 0;
}
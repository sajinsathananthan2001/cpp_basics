#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main()
{
    //created a unique pointer 
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    unique_ptr<int>unPtr2 = move(unPtr1);

    cout << *unPtr2 << endl;
    // cout << *unPtr1 << endl; (this will threw null pointer error because unique pointer have only one reference)

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main()
{
    //created a unique pointer 
    unique_ptr<int>unPtr1 = make_unique<int>(25);

    cout << *unPtr1 << endl;
    // cout << unPtr1 << endl;

    return 0;
}

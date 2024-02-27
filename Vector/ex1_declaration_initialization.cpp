#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    // declare an empty vector of integers 
    vector<int> myVector;

    //initialize and vector with values
    vector<int> anotherVector = {1,2,3,4};

    for(const int& i : anotherVector)
    {
        cout<<i<<endl;
    }


    return 0;
}

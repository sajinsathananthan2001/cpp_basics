#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class MyClass{
public:
    MyClass(){
        cout << "Constructor invoked" << endl;
    }

    ~MyClass(){
        cout << "Destructor invoked" << endl;
    }
};

int main()
{


/*
   Shared pointer demonstration 
   Unless like unique pointer, Shared pointer's can be shared with the multiple owners! which means
   one raw pointers can be assigned to multiple owners

*/

    //creating shared pointer
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();

    //to get number of owners of the particular shared pointer
    cout << "Shared count : "<< shPtr1.use_count() << endl;


    return 0;
}

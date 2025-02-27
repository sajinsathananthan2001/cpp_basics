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
   Unique pointer demonstration 
   In the Scope where the unique pointer is defined, after the scope {}
   the memory will get distroid which means deallocated
*/
    {//scope start
    unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
    }//scope ends

    return 0;
}

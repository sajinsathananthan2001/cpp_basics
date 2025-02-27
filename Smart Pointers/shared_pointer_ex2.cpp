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
   Shared pointer demonstration 2
   Here you can see the pointer count o/p

*/

    //creating shared pointer1
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    cout << "Shared count : "<< shPtr1.use_count() << endl;

    //creating shared pointer2
    shared_ptr<MyClass>shPtr2 = shPtr1;
    cout << "Shared count : "<< shPtr1.use_count() << endl;
    


    return 0;
}

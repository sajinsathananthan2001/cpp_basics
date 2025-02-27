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
    {//scope set1

/*
   Shared pointer demonstration 3
   Here you can see clearly the memory get cleared on the out of the scope 

*/

    //creating shared pointer1
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    cout << "Shared count : "<< shPtr1.use_count() << endl;

    {//scope set2
        //creating shared pointer2
        shared_ptr<MyClass>shPtr2 = shPtr1;
        cout << "Shared count : "<< shPtr1.use_count() << endl;
    }

    cout << "Shared count : "<< shPtr1.use_count() << endl;


        
    }


    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <thread>

using namespace std;

void function1(char symbol){
    for(int i=0;i<200;i++){
        cout<<symbol;
    }
}

void function2(){
    for(int i=0;i<200;i++){
        cout<<"1";
    }   
}

int main()
{
    thread worker1(function1, '0');
    thread worker2(function2);

    return 0;
}

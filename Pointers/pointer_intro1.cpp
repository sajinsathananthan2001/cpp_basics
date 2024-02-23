#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a;
    int *p;  //creating a pointer variable in the name of "p"
    p = &a;  //storing address of "a" in pointer "p"
    a = 5;

    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<&p<<endl; //p is the address 
    cout<<*p<<endl; //*p is the value in the address
    

    return 0;
}

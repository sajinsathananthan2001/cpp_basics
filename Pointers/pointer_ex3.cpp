#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 1025;
    int *p;  //creating a pointer variable in the name of "p"
    p = &a;  //storing address of "a" in pointer "p"

    cout<<"Address = "<<p<<" Value = "<<*p<<endl;
    char *p0;
    p0 = (char*)p; //typecasting 
    cout<<"Address = "<<p0<<" Value = "<<*p0<<endl;

    return 0;
}

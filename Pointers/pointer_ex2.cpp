#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a;
    int *p;  //creating a pointer variable in the name of "p"
    p = &a;  //storing address of "a" in pointer "p"

    cout<<p<<endl;  //assume that you get op: 2002 as address
    cout<<p+1<<endl; //if we try to print next address of an intiger variable it willl got o 2006 since it was an intiger 

                    // which is 4bytes(int)

    return 0;
}

#include <iostream>

using namespace std;

namespace raw1
{
    void my_function()
    {
        cout<<"Im from raw1 my_funciton!"<<endl;
    }
    void my_function(int num)
    {
        cout<<num<<endl;
    }
} // namespace raw

namespace raw2
{
    void my_function()
    {
        cout<<"Im from raw2 my_funciton!"<<endl;
    }
} // namespace raw2



int main(int argc, char const *argv[])
{
    /* code */

    // for calling it we use scope resolution operator
    raw1::my_function();
    raw1::my_function(658);
    raw2::my_function();
    return 0;
}

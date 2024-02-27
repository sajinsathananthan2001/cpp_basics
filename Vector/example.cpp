#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> result;
    for(int x=0;x<=5;x++)
    {
        for(int i=0;i<=5;i++)
        {
            if(x!=i)
            {
                if(nums.at(x)+nums.at(i)==target)
                {
                    result.push_back(i);
                    result.push_back(i+1);
                    return {result.at(0),result.at(1)};
                }
                else
                {
                    continue;
                }
            }
            else{continue;}
        }
    }
    return {};
}

int main(int argc, char const *argv[])
{
    vector<int> number {1,2,3,4,5,6};
    twoSum(number,5);
    return 0;
}


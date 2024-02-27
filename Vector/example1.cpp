class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int x=0;x<-nums.size()-1;x++)
        {
            for(int i=0;i<=nums.size()-1;i++)
            {
                if(nums.at(i)+nums.at(i+1)==target)
                {
                    result.push_back(i);
                    result.push_back(i+1);
                    return {result.at(0),result.at(1)};
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        
        return {};
    }
};
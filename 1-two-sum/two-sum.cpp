class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hash;
        for(int i=0; i<nums.size(); i++)
        {
            int diff = target - nums[i];
            if(hash.find(diff)!=hash.end())
            {
                vector<int>ans;
                ans.push_back(i);
                ans.push_back(hash[diff]);
                return ans;
            }
           
                hash[nums[i]]=i;
        
        }
        return {};
    }
};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        set <int> distinct;
        for(int i =0;i<nums.size();i++)
        {
            distinct.insert(nums[i]);
        }
        if(nums.size() != distinct.size())
        return true;
        else
        return false;
    }
};
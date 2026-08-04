class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int x=nums.size();
        vector<int> remaining;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            count++;
            
            else
            remaining.push_back(nums[i]);

        }    
        nums=remaining;
        return x-count;
    }
};
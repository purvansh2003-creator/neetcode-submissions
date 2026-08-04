class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) { 

        vector<int> ans(2 * nums.size());
        int i =0,j=nums.size();

        while(j!=ans.size())
        {
            ans[i] = nums[i];
            ans[j] = nums[i];
            i++;j++;
        }
        return ans;
     }
};  
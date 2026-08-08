class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i =0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto it: mpp)
        {
            bucket[it.second].push_back(it.first);
        }

        for(int i = nums.size(); i>=1; i--)
        {
            if(ans.size()==k)
            break;
            
            for(int j : bucket[i])
            {
                ans.push_back(j);

                if(ans.size()==k)
                break;
            }
        }

        return ans;
    }
};

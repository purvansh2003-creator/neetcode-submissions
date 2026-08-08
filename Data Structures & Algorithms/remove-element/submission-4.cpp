class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        // Getting First val .
        int firstPos = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                firstPos = i;
                break;
            }
        }
        if(firstPos == -1)
        return nums.size();

        int k = firstPos;

        for(int j = firstPos+1;j<nums.size();j++)
        {
            if( nums[j] != val )
            {
                swap(nums[firstPos],nums[j]);
                firstPos++ ;
            }
            
        }
        return firstPos;
    }
};
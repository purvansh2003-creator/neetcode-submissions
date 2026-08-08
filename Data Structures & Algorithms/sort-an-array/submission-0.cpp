class Solution {
public:

    vector<int> merge(vector<int>& nums,int low,int mid,int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid+1;

        while(left <=mid && right<=high)
        {
            if(nums[left]>=nums[right])
            {
                temp.push_back(nums[right]);
                right++;
            }
            else
            {
            temp.push_back(nums[left]);
            left++;
            }
        }

        while(left<=mid)
        {
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(nums[right]);
            right++;
        }
        for(int i =low ;i<=high;i++)
        {
            nums[i] = temp[i-low];
        }
        temp.clear();
        return nums;
    }

    void divide(vector<int>& nums,int low,int high)
    {
        if(low >= high) return;

        int mid = low+(high-low)/2;

        divide(nums,low,mid);
        divide(nums,mid+1,high);
        merge(nums,low,mid,high);

    }



    vector<int> sortArray(vector<int>& nums) 
    {
        divide(nums,0,nums.size()-1);
        return nums;
    }
};
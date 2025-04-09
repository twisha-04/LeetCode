class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
            else
            { }
        }
        int j=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
                cnt++;
            }
        }
        for(int i=cnt;i<nums.size();i++)
        {
            nums[i]=0;
        }
        return nums;
    }
};
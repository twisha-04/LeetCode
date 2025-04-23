class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 3) {
            if (i + 1 == nums.size() || nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums.back();
        // sort(nums.begin(),nums.end());
        // int cnt=0;
        // int i;
        // for(i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         cnt++;
        //     }
        //     else if(nums[i]!=nums[i+1] && cnt==0)
        //     {
        //         return nums[i];
        //     }
        // }
        // return nums.back();
    }
};
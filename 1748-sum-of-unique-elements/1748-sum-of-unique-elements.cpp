class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>arr;
        int cnt;
        for(int i=0;i<nums.size();i++)
        {
            cnt=count(nums.begin(),nums.end(),nums[i]);
            if(cnt==1)
            {
                arr.push_back(nums[i]);
            }
        }
        int sum=accumulate(arr.begin(),arr.end(),0);
        return sum;
    }
};
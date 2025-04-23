class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            a=a^nums[i];
        }
        return a;



        // int cnt=0;
        // int tmp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     cnt=1;
        //     tmp=nums[i];
        //     for(int j=0;j<nums.size();j++)
        //     {
        //         if(tmp==nums[j])
        //         {
        //             cnt++;
        //         }
        //     }
        //     if(cnt==1)
        //     {
        //         return nums[i];
        //     }
        // }
    }
};
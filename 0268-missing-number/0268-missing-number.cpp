#include <algorithm>
#include <iostream>
#include <vector>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int p_sum=0;
        for(int i=0;i<n;i++)
        {
            p_sum=p_sum+nums[i];
        }
        return sum-p_sum;



        // sort(nums.begin(), nums.end());
        // int n=nums.size();
        // int cnt=0;
        // for (int i = 0; i < nums.size()-1; i++) {
        //     if (nums[i + 1] != (nums[i] + 1)) {
        //         return i + 1;
        //         cnt++;
        //     }
            
        // }
        // if(cnt==0)
        // {
        //     return n;
        // }

        // return 0;
    }
};
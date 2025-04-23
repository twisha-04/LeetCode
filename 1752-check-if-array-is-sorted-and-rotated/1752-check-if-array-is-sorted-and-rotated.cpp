class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]<nums[i])
            {
                cnt++;
            }
            if(nums[nums.size()-1]>nums[0]&&cnt!=0)
            {
                cnt++;
            }
        }
       
        return cnt <=1;

        // vector<int> n=nums;
        // sort(n.begin(),n.end());
        // int j=0;
        // int cnt=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=n[j] && cnt==0)
        //     {
        //         j++;
        //     }
        //     else if(nums[i]==n[j] && cnt==0  )
        //     {
        //         cnt++;
        //     }
        // }
        // if(cnt==0 || cnt==1)
        // {
        //     return true;
        // }
        // else{
        //     return false;
        // }
        // return true;
    }
};
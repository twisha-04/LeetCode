class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                left=mid+1;
                /*if(target<nums[mid+1])
                {
                    return mid+1;
                }*/
            }
            else
            {
                right=mid-1;
                /*if(target>nums[mid-1])
                {
                    return mid-1;
                }*/
            }
           
        }
        //return 0;
        return left; 
    }
};
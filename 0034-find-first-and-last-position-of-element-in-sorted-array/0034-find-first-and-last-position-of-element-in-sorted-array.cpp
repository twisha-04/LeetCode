class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int left=0;
        int right=nums.size()-1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                if (nums[mid] == target) ans[0] = mid;
                right = mid - 1;
            }
        }

        left = 0;
        right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                if (nums[mid] == target) ans[1] = mid;
                left = mid + 1;
            }
        }
        return ans;
        }
        // while(left<=right)
        // {
        //     int mid=(left+right)/2;
        //     if(target==nums[mid]){
        //         while(nums[mid]==target && left>0){
        //             left--;
        //         }
        //         while(nums[mid]==target && right<nums.size()){
        //             right++;
        //         }
        //         ans.push_back(left);
        //         ans.push_back(right);
        //         break;
        //     }
        //     else if(target>nums[mid]){
        //         left=mid+1;
        //     }
        //     else if (target<nums[mid]){
        //         right=mid-1;
        //     }
        // }
        // return ans;
        //}
};
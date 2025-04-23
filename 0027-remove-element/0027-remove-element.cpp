class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int point=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[point]=nums[i];
                point++;
            }
        }
        return point;




       /* vector<int> v;
        int count;
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
               v.push_back(nums[i]);
               count++;
            }
        }
        int a=nums.size();

        return count;
        int count;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums[i]);
                count++
            }
        }
        return nums;*/
    }
};
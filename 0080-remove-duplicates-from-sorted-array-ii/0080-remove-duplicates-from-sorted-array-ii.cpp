class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=2;
        if(nums.size()<=2)
        {
            return nums.size();
        }
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[index-2])
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
       /* int index=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            int count=0;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count<2)
            {
                nums[index]=nums[i];
                index++;
            }
        }
        return index; */   
    }
};
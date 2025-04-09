class Solution {
public:
    int maximumGap(vector<int>& nums)
    {
        if (nums.size()<2)
        {
            return 0;
        }  
        sort(nums.begin(),nums.end());
        int g=0;
        int gap;
        for(int i=0;i<nums.size()-1;++i)
        {
            gap=abs(nums[i]-nums[i+1]);
            if(g<gap){
                g=gap;
            }
        }
        return g;
    }
};
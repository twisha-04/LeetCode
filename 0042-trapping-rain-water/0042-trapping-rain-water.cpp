class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int water=0;
        for(int i=0;i<n;i++)
        {
            int l_max=0,r_max=0;
            for(int j=i;j>=0;j--)
            {
                l_max=max(l_max,height[j]);
            }
            for(int j=i;j<n;j++)
            {
                r_max=max(r_max,height[j]);
            }
            water=water+min(l_max,r_max)-height[i];
        }
        return water;
    }
};
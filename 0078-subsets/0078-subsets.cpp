class Solution {
public:
    void subset(int i,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(i==arr.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[i]);
        subset(i+1,arr,ds,ans);
        ds.pop_back();
        subset(i+1,arr,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        subset(0,nums,ds,ans);
        return ans;
    }
};
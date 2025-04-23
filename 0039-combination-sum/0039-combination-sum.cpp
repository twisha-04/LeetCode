class Solution {
public:
    void findC(int i,int target,vector<int>&ds,vector<int>&arr,vector<vector<int>>&ans)
    {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        if (i == arr.size()) {
            return;
        }
        if(target >=arr[i])
        {
            ds.push_back(arr[i]);
            findC(i,target-arr[i],ds,arr,ans);
            ds.pop_back();
        }
        findC(i+1,target,ds,arr,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findC(0,target,ds,candidates,ans);
        return ans;
    }
};
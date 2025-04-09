class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        return target==arr;
       /* int x=0;
        for(int i=0;i<target.size() && i<arr.size();i++)
        {
            x=(x^target[i])^arr[i];
        }

       if(x==0 && accumulate(target.begin(),target.end(),0)== accumulate(arr.begin(),arr.end(),0))
        {
            return true;
        }
        return false;   */
    }
};
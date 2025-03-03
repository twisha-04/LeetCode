class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int maxoo=0;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>maxoo)
            {
                maxoo=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            int candiess=candies[i]+extraCandies;
            if(candiess>=maxoo)
            {
                v.push_back(true);
            }
            else {
                v.push_back(false);
            }
        }
        return v;
    }
};
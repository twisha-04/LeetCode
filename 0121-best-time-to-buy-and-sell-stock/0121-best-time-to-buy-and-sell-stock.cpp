class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int minn=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minn=std::min(minn,prices[i]);
            res=std::max(res,prices[i]-minn);
        }
        return res;




        /*int res=0;
        int n=prices.size();
        int minn = *std::min_element(prices.begin(), prices.end());
        int i;
            for(i=0;i<n-1;i++)
            {
                if(minn==prices[i])
                {
                    break;
                }
            }
            for(int j=i+1;j<n;j++)
            {
                res=max(res,prices[j]-prices[i]);
            }
      
        return res;
        */

        // int buy_day = prices[0];
        // int sell_day = 0;
        // vector<int> profit;
        // int i;
        // for (i = 0; i < prices.size(); i++) {
        //     if (prices[i] < buy_day) {
        //         buy_day = prices[i];
        //         break;
        //     }
        // }
        // for (int j = i; j < prices.size(); j++) {
        //     if (prices[j] > buy_day) {
        //         profit.push_back(prices[j] - buy_day);
        //     }
        // }
        // auto max_iter = std::max_element(prices.begin(), prices.end());
        // return *max_iter;
    }
};
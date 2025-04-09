class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>> sc;
        for(int i=0;i<n;i++)
        {
             sc.push_back({score[i], i});
        }
        sort(sc.begin(),sc.end(),[](const auto &a,const auto &b){
            return a.first>b.first;
        });

        vector<string> answer(n);
         for (int i = 0; i < sc.size(); ++i) {
        int index = sc[i].second;
        if (i == 0) {
            answer[index] = "Gold Medal";
        } else if (i == 1) {
            answer[index] = "Silver Medal";
        } else if (i == 2) {
            answer[index] = "Bronze Medal";
        } else {
            answer[index] = std::to_string(i + 1);
        }
    }
    
    return answer;
    }
};
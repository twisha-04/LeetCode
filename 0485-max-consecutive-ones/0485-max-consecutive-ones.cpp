class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,mcnt=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
            }
            else{
                mcnt=max(cnt,mcnt);
                cnt=0;
            }
        }
        mcnt=max(cnt,mcnt);
        return mcnt;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a = nums.size();
        int x = nums[0];
        for (int i = 0; i < a; i++) {
            int b = nums[i];
            int count = 0; // Initialize count to 0

            for (int j = 0; j < a; j++) {
                if (b == nums[j]) {
                    count++;
                }
            }

            if (count > a / 2) {
                x = b;
                break;
            }
        }
        return x;
    }
};

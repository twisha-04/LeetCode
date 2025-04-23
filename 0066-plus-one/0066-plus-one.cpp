class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        for (int i = length - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; 
                    return digits;
            }
             digits[i] = 0;
    }
      vector<int> newDigits(length + 1, 0);
       newDigits[0] = 1;
       return newDigits;
    }
};
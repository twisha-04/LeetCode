class Solution {
public:
    bool isPalindrome(int x) {
        long long revno=0;
        int lastdigit;
        int N=x;
       if (x == INT_MIN) {
        return false; // Or handle the special case differently
    } else if (x < 0) {
        return false; // Palindromes are not defined for negative numbers
    }
        while(x>0)
        {
            lastdigit=x%10;
            x=x/10;
            revno=((revno*10)+lastdigit);
        }
        if(N==revno)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
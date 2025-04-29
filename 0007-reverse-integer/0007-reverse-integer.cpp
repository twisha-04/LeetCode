class Solution {
public:
    int reverse(int x) {
        int revno=0;
        int lastdigit;
        
          if (x == INT_MIN) {
            return 0;
        }

        if (x <= INT_MIN && x >= INT_MAX) {
        return 0; 
         }

        bool isNegative = false;
         if (x < 0) 
         {
            isNegative = true;
            x = -x; 
        }
        while(x>0)
        {
            lastdigit=x%10;
            x=x/10;
            if(revno>(INT_MAX-lastdigit)/10){
                return 0;
            }
            revno= ((revno*10)+lastdigit);
        }
        return isNegative ? -revno : revno;
    }
};
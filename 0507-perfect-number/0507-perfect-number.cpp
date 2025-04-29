class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> div;
        for (int i=1;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                div.push_back(i);
                if (i != 1 && i != num / i) { 
                div.push_back(num / i);
            }
            }
        }
        int sum=0;
        for(int i=0;i<=div.size()-1;i++)
        {
            sum=sum+div[i];
        } 
        if(num==sum && num!=1) return true;
        else return false;
    }
};
class Solution {
public:
    int fib(int n) {
        if( n<=1)
        {
            return n;
        }
        int a=0,b=1,c,i;
        for(i=2;i<=n;++i)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};
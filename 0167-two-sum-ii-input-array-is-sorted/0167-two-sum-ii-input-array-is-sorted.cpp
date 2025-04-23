class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int l;
        // for(int left=0;left<numbers.size();left++)
        // {
        //     l=target-numbes[left];
        //     if(numbers.find(numbers.begin()+[left+1],numbers.end(),l))
        //     {
        //         return [left+1,
        //     }
        // }
        int left=0;
        int right=numbers.size()-1;
        int a;
        while(left<=right)
        {
            a=numbers[left]+numbers[right];
            if(a==target)
            {
                return {left+1, right+1};
            }
            else if(a>target)
            {
                right--;
            }
            else 
            {
                left++;
            }
        }
        return {-1,-1};
    }
};
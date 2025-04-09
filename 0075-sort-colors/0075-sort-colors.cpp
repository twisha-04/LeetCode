class Solution {
public:
    void sortColors(vector<int>& nums) {
        int w=0,b=0,r=0;
        int n=nums.size();
        int i;
        for( i=0;i<n;i++){
        if(nums[i]==0){
            r++;
        }
        else if(nums[i]==1){
            w++;
        }
        else{
            b++;
        }
        }
        for(i=0;i<r;i++){
            nums[i]=0;
        }
        for(i=r;i<r+w;i++){
            nums[i]=1;
        }
        for(i=r+w;i<n;i++){
            nums[i]=2;
        }
    }
};
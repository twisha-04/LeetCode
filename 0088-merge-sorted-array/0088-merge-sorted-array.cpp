class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m;
      for(int j=0;j<n;j++)
      {
        nums1[i]=nums2[j];
        i++;
      }
      sort(nums1.begin(),nums1.end());

      
      /*int arr1=m-1;int arr2=0;
      while(arr1>=0 && arr2<n)
      {
         if(nums1[arr1]>nums2[arr2])
         {
             swap(nums1[arr1],nums2[arr2]);
             arr1--;
             arr2++;
         }
         else
         {
            break;
         }
      }*/
    }
};
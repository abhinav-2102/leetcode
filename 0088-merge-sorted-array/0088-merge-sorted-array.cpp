class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mn=nums2.size();
        int j=0;
        for(int i=0;i<mn;i++){
           nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
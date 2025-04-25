class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int li=0;
        int ri=0;
        for(ri=0;ri<n;ri++){
            if(nums[ri]!=0){
                swap(nums[li],nums[ri]);
                li++;
            }
        }
    }
};